#define FOOBEGIN() <preproctest/
#define FOOEND() h>
#include FOOBEGIN()simpleinc.FOOEND()

#define FOOBLA <preproctest/file with    spaces.h>
#include FOOBLA
