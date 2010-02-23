<?xml version="1.0"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
	<xsl:param name="reportbase" select="''"/>
	<xsl:param name="sourcebase" select="'../../'"/>

	<xsl:output method="html" indent="yes"
			doctype-public="-//W3C//DTD HTML 4.01//EN"
			doctype-system="http://www.w3.org/TR/html4/strict.dtd"/>

	<xsl:template match="result">
		<tr>
			<td>
				<xsl:element name="a">
					<xsl:attribute name="href">
						<xsl:value-of select="$sourcebase"/><xsl:value-of select="@sourcefile"/>
					</xsl:attribute>
					<xsl:value-of select="@sourcefile"/>
				</xsl:element>
			</td>
			<td>
				<xsl:choose>
					<xsl:when test="@ok = '1'">
						<span class="ok">ok</span>
					</xsl:when>
					<xsl:otherwise>
						<span class="failed">failed</span> (<xsl:value-of select="@error"/>)
					</xsl:otherwise>
				</xsl:choose>
			</td>
			<td>
				<xsl:element name="a">
					<xsl:attribute name="href">
						<xsl:value-of select="$reportbase"/><xsl:value-of select="@logfile"/>
					</xsl:attribute>
					[log]
				</xsl:element>
			</td>
		</tr>
	</xsl:template>

	<xsl:template match="/">
		<html>
			<head>
				<title>Results</title>
				<style type="text/css">
					th.dir { background-color: yellow; color: black; }
					span.ok { background-color: green; color: white; }
					span.ok a { color: white; }
					span.failed { background-color: red; color: white; }
					span.failed a { color: white; }
				</style>
			</head>
			<body>
				<h1>Report <xsl:value-of select="results/reportname/text()"/></h1>
				Results created on <xsl:value-of select="results/datetime/text()"/>
				<h3><xsl:value-of select="results/summary/failed/text()" />/<xsl:value-of select="results/summary/total/text()" /> tests failed</h3>
				<p>
					Compiler: <xsl:value-of select="results/environment/TEST_COMPILER/text()" /><br/>
					CFLAGS: <xsl:value-of select="results/environment/TEST_CFLAGS/text()" /><br/>
				</p>

				<table>
					<tr>
						<th>Name</th>
						<th>Result</th>
						<th>Log</th>
					</tr>

					<xsl:for-each select="results">
						<xsl:apply-templates select="result"/>
					</xsl:for-each>
				</table>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>
