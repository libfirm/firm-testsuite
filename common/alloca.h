#ifndef ALLOCA_H
#define ALLOCA_H

#if defined __FreeBSD__ || defined __OpenBSD__
#	include <stdlib.h>
#elif defined _WIN32
#	include <malloc.h>
#else
#	include <alloca.h>
#endif

#endif
