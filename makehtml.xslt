<?xml version="1.0"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
	<xsl:param name="ref"/>
	<xsl:variable name="refDoc" select="document($ref)"/>

	<xsl:param name="sourcedir" select="'../../'"/>

	<xsl:output method="html" indent="yes"
			doctype-public="-//W3C//DTD HTML 4.01//EN"
			doctype-system="http://www.w3.org/TR/html4/strict.dtd"/>

	<xsl:template name="resultcell" match="result/*">
		<xsl:param name="file"/>

		<xsl:if test="text()">
			<xsl:element name="div">
				<xsl:attribute name="class"><xsl:value-of select="text()"/></xsl:attribute>
				<xsl:choose>
					<xsl:when test="self::diff and text() = 'ok'">ok</xsl:when>
					<xsl:otherwise>
						<xsl:element name="a">
							<xsl:attribute name="href"><xsl:value-of select="$file"/></xsl:attribute>
							<xsl:value-of select="text()"/>
						</xsl:element>
					</xsl:otherwise>
				</xsl:choose>
			</xsl:element>
		</xsl:if>
	</xsl:template>

	<xsl:template name="getval">
		<xsl:param name="node"/>
		<xsl:choose>
			<xsl:when test="$node/compile/text() = 'aborted' or $node/firm_run/text() = 'aborted'">test aborted</xsl:when>
			<xsl:when test="$node/compile/text() = 'failed' or $node/firm_run/text() = 'failed'">test failed</xsl:when>
			<xsl:when test="$node/gcc_compile/text() = 'aborted' or $node/gcc_run/text() = 'aborted'">ref aborted</xsl:when>
			<xsl:when test="$node/gcc_compile/text() = 'failed' or $node/gcc_run/text() = 'failed'">ref failed</xsl:when>
			<xsl:otherwise><xsl:value-of select="$node/diff/text()"/></xsl:otherwise>
		</xsl:choose>
	</xsl:template>

	<xsl:template match="result">
		<tr>
			<xsl:variable name="dirname" select="../@name"/>
			<xsl:variable name="testname" select="@name"/>
			<xsl:variable name="prefix"><xsl:value-of select="translate($dirname, '/', '_')"/>_<xsl:value-of select="$testname"/></xsl:variable>
			<xsl:variable name="resulttest">
				<xsl:choose>
					<xsl:when test="diff/text() = 'ok'"><xsl:value-of select="$prefix"/>_result.txt</xsl:when>
					<xsl:otherwise><xsl:value-of select="$prefix"/>_result_test.txt</xsl:otherwise>
				</xsl:choose>
			</xsl:variable>
			<xsl:variable name="resultref">
				<xsl:choose>
					<xsl:when test="diff/text() = 'ok'"><xsl:value-of select="$prefix"/>_result.txt</xsl:when>
					<xsl:otherwise><xsl:value-of select="$prefix"/>_result_ref.txt</xsl:otherwise>
				</xsl:choose>
			</xsl:variable>

			<td>
				<xsl:element name="a">
					<xsl:attribute name="href"><xsl:value-of select="$sourcedir"/><xsl:value-of select="$dirname"/>/<xsl:value-of select="$testname"/>.c</xsl:attribute>
					<xsl:value-of select="$testname"/>
				</xsl:element>
			</td>
			<td>
				<xsl:apply-templates select="compile">
					<xsl:with-param name="file" select="concat($prefix, '.log.txt')"/>
				</xsl:apply-templates>
			</td>
			<td>
				<xsl:apply-templates select="firm_run">
					<xsl:with-param name="file" select="$resulttest"/>
				</xsl:apply-templates>
			</td>
			<td>
				<xsl:apply-templates select="gcc_compile">
					<xsl:with-param name="file" select="concat($prefix, '.log.txt')"/>
				</xsl:apply-templates>
			</td>
			<td>
				<xsl:apply-templates select="gcc_run">
					<xsl:with-param name="file" select="$resultref"/>
				</xsl:apply-templates>
			</td>
			<td>
				<xsl:apply-templates select="diff">
					<xsl:with-param name="file" select="concat($prefix, '_result_diff.txt')"/>
				</xsl:apply-templates>
			</td>
			<xsl:if test="$refDoc and $ref">
				<td>
					<xsl:variable name="curval">
						<xsl:call-template name="getval">
							<xsl:with-param name="node" select="."/>
						</xsl:call-template>
					</xsl:variable>

					<xsl:variable name="refnode" select="$refDoc/results/dir[@name = $dirname]/result[@name = $testname]"/>
					<xsl:variable name="refval">
						<xsl:call-template name="getval">
							<xsl:with-param name="node" select="$refnode"/>
						</xsl:call-template>
					</xsl:variable>

					<xsl:if test="string($curval) != string($refval)">
						<xsl:element name="div">
							<xsl:attribute name="class">
								<xsl:choose>
									<xsl:when test="$curval = 'ok'">ok</xsl:when>
									<xsl:otherwise>failed</xsl:otherwise>
								</xsl:choose>
							</xsl:attribute>
							<xsl:value-of select="$refval"/> --&gt; <xsl:value-of select="$curval"/>
						</xsl:element>
					</xsl:if>
				</td>
			</xsl:if>
		</tr>
	</xsl:template>

	<xsl:template match="/">
		<xsl:if test="not($ref)">
			<xsl:message terminate="no">Warning: No result file given for the regression check!</xsl:message>
		</xsl:if>

		<html>
			<head>
				<title>Results</title>
				<style type="text/css">
					th.dir { background-color: yellow; color: black; }
					div.ok { background-color: green; color: white; }
					div.ok a { color: white; }
					div.failed { background-color: red; color: white; }
					div.failed a { color: white; }
					div.aborted { background-color: red; color: yellow; }
					div.aborted a { color: yellow; }
				</style>
			</head>
			<body>
				<h2>Results created on <xsl:value-of select="results/datetime/text()" /></h2>
				<h3><xsl:value-of select="results/summary/failed/text()" />/<xsl:value-of select="results/summary/total/text()" /> tests failed</h3>
				<p>
				<xsl:if test="$refDoc and $ref">Results compared to <xsl:value-of select="$ref" /><br/><br/></xsl:if>
				Test compiler: <xsl:value-of select="results/environment/TEST_COMPILER/text()" /><br/>
				Test CFLAGS: <xsl:value-of select="results/environment/TEST_CFLAGS/text()" /><br/>
				Reference compiler: <xsl:value-of select="results/environment/REF_COMPILER/text()" /><br/>
				Reference CFLAGS: <xsl:value-of select="results/environment/REF_CFLAGS/text()" />
				</p>

				<table>
					<tr>
						<th>Name</th>
						<th>Test Compile</th>
						<th>Test Run</th>
						<th>Ref Compile</th>
						<th>Ref Run</th>
						<th>Results</th>
						<xsl:if test="$refDoc and $ref"><th>Regression Check</th></xsl:if>
					</tr>

					<xsl:for-each select="results/dir">
						<tr><th colspan="7" class="dir"><xsl:value-of select="@name"/></th></tr>
						<xsl:apply-templates select="result" />
					</xsl:for-each>
				</table>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>
