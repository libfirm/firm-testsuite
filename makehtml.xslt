<?xml version="1.0"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
	<xsl:output method="html" indent="yes"
              doctype-public="-//W3C//DTD HTML 4.01//EN"
	            doctype-system="http://www.w3.org/TR/html4/strict.dtd"/>

	<xsl:template name="resultcell" match="result/*">
		<xsl:element name="div">
			<xsl:attribute name="class"><xsl:value-of select="text()"/></xsl:attribute>

			<xsl:choose>
				<xsl:when test="name() = 'gcc_run'">
					<xsl:element name="a">
						<xsl:attribute name="href">../../build/gcc/<xsl:value-of select="../@name"/>_result_ref.txt</xsl:attribute>
						<xsl:value-of select="text()"/>
					</xsl:element>
				</xsl:when>
				<xsl:when test="name() = 'firm_run'">
					<xsl:element name="a">
						<xsl:attribute name="href">../../build/firm/<xsl:value-of select="../@name"/>_result_test.txt</xsl:attribute>
						<xsl:value-of select="text()"/>
					</xsl:element>
				</xsl:when>
				<xsl:when test="name() = 'diff'">
					<xsl:element name="a">
						<xsl:attribute name="href"><xsl:value-of select="../@name"/>.diff.txt</xsl:attribute>
						<xsl:value-of select="text()"/>
					</xsl:element>
				</xsl:when>
				<xsl:otherwise>
					<xsl:value-of select="text()"/>
				</xsl:otherwise>
			</xsl:choose>
		</xsl:element>
	</xsl:template>

	<xsl:template match="result">
		<tr>
			<td>
				<xsl:element name="a">
					<xsl:attribute name="href"><xsl:value-of select="@name"/>.log.txt</xsl:attribute>
					<xsl:value-of select="@name"/>
				</xsl:element>
			</td>
			<td><xsl:apply-templates select="compile"/></td>
			<td><xsl:apply-templates select="firm_run"/></td>
			<td><xsl:apply-templates select="gcc_compile"/></td>
			<td><xsl:apply-templates select="gcc_run"/></td>
			<td><xsl:apply-templates select="diff"/></td>
		</tr>
	</xsl:template>

	<xsl:template match="/">
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
					</tr>

					<xsl:apply-templates select="results/result" />

					<xsl:for-each select="results/dir">
						<tr><th colspan="7" class="dir"><xsl:value-of select="@name"/></th></tr>
						<xsl:apply-templates select="result" />
					</xsl:for-each>
				</table>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>
