#define STR(x) #x
STR(-5)
STR(42.45)
STR(1234)
STR("Hel\"lo")
STR("Bl\a")
STR("Foo\n")
STR(<:)
STR($)
STR(@)
STR(ä)
STR()


STR(1+1)
STR(1+1 )
STR(1+ 1)
STR(1+ 1 )
STR(1 +1)
STR(1 +1 )
STR(1 + 1)
STR(1 + 1 )
STR( 1+1)
STR( 1+1 )
STR( 1+ 1)
STR( 1+ 1 )
STR( 1 +1)
STR( 1 +1 )
STR( 1 + 1)
STR( 1 + 1 )

#define blo blam
STR(blo)
STR(blam)

#define macro(x,y) y x
STR(macro(x,y))
