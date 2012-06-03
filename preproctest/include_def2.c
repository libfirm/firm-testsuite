#define FOO()  <preproctest/simpleinc
#include FOO().h>

#define BAR()
#define BAZ() "simpleinc.h"
#include BAR() BAZ()
