#if defined defined
#error bad0
#endif
#if defined(defined)
#error bad1
#endif
#ifdef defined
#error bad2
#endif
#ifndef defined
fine0
#endif
#if !defined defined && !defined(defined)
fine1
#endif
