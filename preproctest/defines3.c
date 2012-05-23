#define surround(x)  before x after
#define macro(x)   called: x

macro(macro)
macro(macro(macro))
macro(macro(macro(macro)))

macro(surround(macro))
