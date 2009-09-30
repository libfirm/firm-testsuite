/* panics instead of printing an error message */

# 1 "osmesa.c"
# 1 "<eingebaut>"
# 1 "<Kommandozeile>"
# 1 "osmesa.c"
# 99 "osmesa.c"
# 1 "/usr/include/stdlib.h" 1 3 4
# 25 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 330 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 348 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 349 "/usr/include/sys/cdefs.h" 2 3 4
# 331 "/usr/include/features.h" 2 3 4
# 354 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4



# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 5 "/usr/include/gnu/stubs.h" 2 3 4


# 1 "/usr/include/gnu/stubs-32.h" 1 3 4
# 8 "/usr/include/gnu/stubs.h" 2 3 4
# 355 "/usr/include/features.h" 2 3 4
# 26 "/usr/include/stdlib.h" 2 3 4







# 1 "/usr/lib/gcc/i486-linux-gnu/4.3.3/include/stddef.h" 1 3 4
# 214 "/usr/lib/gcc/i486-linux-gnu/4.3.3/include/stddef.h" 3 4
typedef unsigned long size_t;
# 326 "/usr/lib/gcc/i486-linux-gnu/4.3.3/include/stddef.h" 3 4
typedef int wchar_t;
# 34 "/usr/include/stdlib.h" 2 3 4


# 96 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


# 140 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__)) ;




extern double atof (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (__const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern float strtof (__const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern long double strtold (__const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern long int strtol (__const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern unsigned long int strtoul (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




__extension__
extern long long int strtoq (__const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtouq (__const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





__extension__
extern long long int strtoll (__const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtoull (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

# 311 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__)) ;


extern long int a64l (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/sys/types.h" 1 3 4
# 29 "/usr/include/sys/types.h" 3 4


# 1 "/usr/include/bits/types.h" 1 3 4
# 28 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;




__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;







__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;
# 131 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 132 "/usr/include/bits/types.h" 2 3 4


__extension__ typedef __u_quad_t __dev_t;
__extension__ typedef unsigned int __uid_t;
__extension__ typedef unsigned int __gid_t;
__extension__ typedef unsigned long int __ino_t;
__extension__ typedef __u_quad_t __ino64_t;
__extension__ typedef unsigned int __mode_t;
__extension__ typedef unsigned int __nlink_t;
__extension__ typedef long int __off_t;
__extension__ typedef __quad_t __off64_t;
__extension__ typedef int __pid_t;
__extension__ typedef struct { int __val[2]; } __fsid_t;
__extension__ typedef long int __clock_t;
__extension__ typedef unsigned long int __rlim_t;
__extension__ typedef __u_quad_t __rlim64_t;
__extension__ typedef unsigned int __id_t;
__extension__ typedef long int __time_t;
__extension__ typedef unsigned int __useconds_t;
__extension__ typedef long int __suseconds_t;

__extension__ typedef int __daddr_t;
__extension__ typedef long int __swblk_t;
__extension__ typedef int __key_t;


__extension__ typedef int __clockid_t;


__extension__ typedef void * __timer_t;


__extension__ typedef long int __blksize_t;




__extension__ typedef long int __blkcnt_t;
__extension__ typedef __quad_t __blkcnt64_t;


__extension__ typedef unsigned long int __fsblkcnt_t;
__extension__ typedef __u_quad_t __fsblkcnt64_t;


__extension__ typedef unsigned long int __fsfilcnt_t;
__extension__ typedef __u_quad_t __fsfilcnt64_t;

__extension__ typedef int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


__extension__ typedef int __intptr_t;


__extension__ typedef unsigned int __socklen_t;
# 32 "/usr/include/sys/types.h" 2 3 4



typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 62 "/usr/include/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
# 100 "/usr/include/sys/types.h" 3 4
typedef __pid_t pid_t;




typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 133 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 75 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 93 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 105 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 134 "/usr/include/sys/types.h" 2 3 4
# 147 "/usr/include/sys/types.h" 3 4
# 1 "/usr/lib/gcc/i486-linux-gnu/4.3.3/include/stddef.h" 1 3 4
# 148 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 195 "/usr/include/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 217 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 38 "/usr/include/endian.h" 2 3 4
# 61 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 28 "/usr/include/bits/byteswap.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/byteswap.h" 2 3 4
# 62 "/usr/include/endian.h" 2 3 4
# 218 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/select.h" 1 3 4
# 31 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 32 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 24 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 35 "/usr/include/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 121 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };
# 45 "/usr/include/sys/select.h" 2 3 4

# 1 "/usr/include/bits/time.h" 1 3 4
# 69 "/usr/include/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 47 "/usr/include/sys/select.h" 2 3 4


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 67 "/usr/include/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 99 "/usr/include/sys/select.h" 3 4

# 109 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 121 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);



# 221 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 30 "/usr/include/sys/sysmacros.h" 3 4
__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__));
# 224 "/usr/include/sys/types.h" 2 3 4
# 235 "/usr/include/sys/types.h" 3 4
typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 270 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 24 "/usr/include/bits/pthreadtypes.h" 2 3 4
# 50 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


typedef union
{
  char __size[36];
  long int __align;
} pthread_attr_t;
# 67 "/usr/include/bits/pthreadtypes.h" 3 4
typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;





typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;





    int __kind;





    unsigned int __nusers;
    __extension__ union
    {
      int __spins;
      __pthread_slist_t __list;
    };

  } __data;
  char __size[24];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{
# 170 "/usr/include/bits/pthreadtypes.h" 3 4
  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;


    unsigned char __flags;
    unsigned char __shared;
    unsigned char __pad1;
    unsigned char __pad2;
    int __writer;
  } __data;

  char __size[32];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[20];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 271 "/usr/include/sys/types.h" 2 3 4



# 321 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__));







extern double drand48 (void) __attribute__ ((__nothrow__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__));



# 1 "/usr/include/alloca.h" 1 3 4
# 25 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/i486-linux-gnu/4.3.3/include/stddef.h" 1 3 4
# 26 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__));






# 498 "/usr/include/stdlib.h" 2 3 4




extern void *valloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




extern void abort (void) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));






extern void _Exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));






extern char *getenv (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




extern char *__secure_getenv (__const char *__name)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern int putenv (char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (__const char *__name, __const char *__value, int __replace)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (__const char *__name) __attribute__ ((__nothrow__));






extern int clearenv (void) __attribute__ ((__nothrow__));
# 583 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 594 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 614 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 640 "/usr/include/stdlib.h" 3 4





extern int system (__const char *__command) ;

# 662 "/usr/include/stdlib.h" 3 4
extern char *realpath (__const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__)) ;






typedef int (*__compar_fn_t) (__const void *, __const void *);
# 680 "/usr/include/stdlib.h" 3 4



extern void *bsearch (__const void *__key, __const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 699 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;

# 735 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));







extern int mblen (__const char *__s, size_t __n) __attribute__ ((__nothrow__)) ;


extern int mbtowc (wchar_t *__restrict __pwc,
     __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__)) ;


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__)) ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__));

extern size_t wcstombs (char *__restrict __s,
   __const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__));








extern int rpmatch (__const char *__response) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 840 "/usr/include/stdlib.h" 3 4
extern int posix_openpt (int __oflag) ;
# 875 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 891 "/usr/include/stdlib.h" 3 4

# 100 "osmesa.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 28 "/usr/include/string.h" 3 4





# 1 "/usr/lib/gcc/i486-linux-gnu/4.3.3/include/stddef.h" 1 3 4
# 34 "/usr/include/string.h" 2 3 4




extern void *memcpy (void *__restrict __dest,
       __const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, __const void *__src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, __const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memchr (__const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

# 82 "/usr/include/string.h" 3 4


extern char *strcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, __const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

# 130 "/usr/include/string.h" 3 4
extern char *strdup (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 165 "/usr/include/string.h" 3 4


extern char *strchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

extern char *strrchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

# 181 "/usr/include/string.h" 3 4



extern size_t strcspn (__const char *__s, __const char *__reject)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strpbrk (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strstr (__const char *__haystack, __const char *__needle)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *strtok (char *__restrict __s, __const char *__restrict __delim)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    __const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, __const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));
# 240 "/usr/include/string.h" 3 4


extern size_t strlen (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

# 254 "/usr/include/string.h" 3 4


extern char *strerror (int __errnum) __attribute__ ((__nothrow__));

# 270 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));
# 294 "/usr/include/string.h" 3 4
extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (__const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *index (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern char *rindex (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));



extern int ffs (int __i) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
# 331 "/usr/include/string.h" 3 4
extern int strcasecmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 354 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
       __const char *__restrict __delim)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
# 432 "/usr/include/string.h" 3 4

# 101 "osmesa.c" 2

# 1 "context.h" 1
# 63 "context.h"
# 1 "types.h" 1
# 176 "types.h"
# 1 "/usr/include/GL/gl.h" 1 3 4
# 147 "/usr/include/GL/gl.h" 3 4
typedef unsigned int GLenum;
typedef unsigned char GLboolean;
typedef unsigned int GLbitfield;
typedef void GLvoid;
typedef signed char GLbyte;
typedef short GLshort;
typedef int GLint;
typedef unsigned char GLubyte;
typedef unsigned short GLushort;
typedef unsigned int GLuint;
typedef int GLsizei;
typedef float GLfloat;
typedef float GLclampf;
typedef double GLdouble;
typedef double GLclampd;
# 774 "/usr/include/GL/gl.h" 3 4
__attribute__((visibility("default"))) void glClearIndex( GLfloat c );

__attribute__((visibility("default"))) void glClearColor( GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha );

__attribute__((visibility("default"))) void glClear( GLbitfield mask );

__attribute__((visibility("default"))) void glIndexMask( GLuint mask );

__attribute__((visibility("default"))) void glColorMask( GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha );

__attribute__((visibility("default"))) void glAlphaFunc( GLenum func, GLclampf ref );

__attribute__((visibility("default"))) void glBlendFunc( GLenum sfactor, GLenum dfactor );

__attribute__((visibility("default"))) void glLogicOp( GLenum opcode );

__attribute__((visibility("default"))) void glCullFace( GLenum mode );

__attribute__((visibility("default"))) void glFrontFace( GLenum mode );

__attribute__((visibility("default"))) void glPointSize( GLfloat size );

__attribute__((visibility("default"))) void glLineWidth( GLfloat width );

__attribute__((visibility("default"))) void glLineStipple( GLint factor, GLushort pattern );

__attribute__((visibility("default"))) void glPolygonMode( GLenum face, GLenum mode );

__attribute__((visibility("default"))) void glPolygonOffset( GLfloat factor, GLfloat units );

__attribute__((visibility("default"))) void glPolygonStipple( const GLubyte *mask );

__attribute__((visibility("default"))) void glGetPolygonStipple( GLubyte *mask );

__attribute__((visibility("default"))) void glEdgeFlag( GLboolean flag );

__attribute__((visibility("default"))) void glEdgeFlagv( const GLboolean *flag );

__attribute__((visibility("default"))) void glScissor( GLint x, GLint y, GLsizei width, GLsizei height);

__attribute__((visibility("default"))) void glClipPlane( GLenum plane, const GLdouble *equation );

__attribute__((visibility("default"))) void glGetClipPlane( GLenum plane, GLdouble *equation );

__attribute__((visibility("default"))) void glDrawBuffer( GLenum mode );

__attribute__((visibility("default"))) void glReadBuffer( GLenum mode );

__attribute__((visibility("default"))) void glEnable( GLenum cap );

__attribute__((visibility("default"))) void glDisable( GLenum cap );

__attribute__((visibility("default"))) GLboolean glIsEnabled( GLenum cap );


__attribute__((visibility("default"))) void glEnableClientState( GLenum cap );

__attribute__((visibility("default"))) void glDisableClientState( GLenum cap );


__attribute__((visibility("default"))) void glGetBooleanv( GLenum pname, GLboolean *params );

__attribute__((visibility("default"))) void glGetDoublev( GLenum pname, GLdouble *params );

__attribute__((visibility("default"))) void glGetFloatv( GLenum pname, GLfloat *params );

__attribute__((visibility("default"))) void glGetIntegerv( GLenum pname, GLint *params );


__attribute__((visibility("default"))) void glPushAttrib( GLbitfield mask );

__attribute__((visibility("default"))) void glPopAttrib( void );


__attribute__((visibility("default"))) void glPushClientAttrib( GLbitfield mask );

__attribute__((visibility("default"))) void glPopClientAttrib( void );


__attribute__((visibility("default"))) GLint glRenderMode( GLenum mode );

__attribute__((visibility("default"))) GLenum glGetError( void );

__attribute__((visibility("default"))) const GLubyte * glGetString( GLenum name );

__attribute__((visibility("default"))) void glFinish( void );

__attribute__((visibility("default"))) void glFlush( void );

__attribute__((visibility("default"))) void glHint( GLenum target, GLenum mode );






__attribute__((visibility("default"))) void glClearDepth( GLclampd depth );

__attribute__((visibility("default"))) void glDepthFunc( GLenum func );

__attribute__((visibility("default"))) void glDepthMask( GLboolean flag );

__attribute__((visibility("default"))) void glDepthRange( GLclampd near_val, GLclampd far_val );






__attribute__((visibility("default"))) void glClearAccum( GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha );

__attribute__((visibility("default"))) void glAccum( GLenum op, GLfloat value );






__attribute__((visibility("default"))) void glMatrixMode( GLenum mode );

__attribute__((visibility("default"))) void glOrtho( GLdouble left, GLdouble right,
                                 GLdouble bottom, GLdouble top,
                                 GLdouble near_val, GLdouble far_val );

__attribute__((visibility("default"))) void glFrustum( GLdouble left, GLdouble right,
                                   GLdouble bottom, GLdouble top,
                                   GLdouble near_val, GLdouble far_val );

__attribute__((visibility("default"))) void glViewport( GLint x, GLint y,
                                    GLsizei width, GLsizei height );

__attribute__((visibility("default"))) void glPushMatrix( void );

__attribute__((visibility("default"))) void glPopMatrix( void );

__attribute__((visibility("default"))) void glLoadIdentity( void );

__attribute__((visibility("default"))) void glLoadMatrixd( const GLdouble *m );
__attribute__((visibility("default"))) void glLoadMatrixf( const GLfloat *m );

__attribute__((visibility("default"))) void glMultMatrixd( const GLdouble *m );
__attribute__((visibility("default"))) void glMultMatrixf( const GLfloat *m );

__attribute__((visibility("default"))) void glRotated( GLdouble angle,
                                   GLdouble x, GLdouble y, GLdouble z );
__attribute__((visibility("default"))) void glRotatef( GLfloat angle,
                                   GLfloat x, GLfloat y, GLfloat z );

__attribute__((visibility("default"))) void glScaled( GLdouble x, GLdouble y, GLdouble z );
__attribute__((visibility("default"))) void glScalef( GLfloat x, GLfloat y, GLfloat z );

__attribute__((visibility("default"))) void glTranslated( GLdouble x, GLdouble y, GLdouble z );
__attribute__((visibility("default"))) void glTranslatef( GLfloat x, GLfloat y, GLfloat z );






__attribute__((visibility("default"))) GLboolean glIsList( GLuint list );

__attribute__((visibility("default"))) void glDeleteLists( GLuint list, GLsizei range );

__attribute__((visibility("default"))) GLuint glGenLists( GLsizei range );

__attribute__((visibility("default"))) void glNewList( GLuint list, GLenum mode );

__attribute__((visibility("default"))) void glEndList( void );

__attribute__((visibility("default"))) void glCallList( GLuint list );

__attribute__((visibility("default"))) void glCallLists( GLsizei n, GLenum type,
                                     const GLvoid *lists );

__attribute__((visibility("default"))) void glListBase( GLuint base );






__attribute__((visibility("default"))) void glBegin( GLenum mode );

__attribute__((visibility("default"))) void glEnd( void );


__attribute__((visibility("default"))) void glVertex2d( GLdouble x, GLdouble y );
__attribute__((visibility("default"))) void glVertex2f( GLfloat x, GLfloat y );
__attribute__((visibility("default"))) void glVertex2i( GLint x, GLint y );
__attribute__((visibility("default"))) void glVertex2s( GLshort x, GLshort y );

__attribute__((visibility("default"))) void glVertex3d( GLdouble x, GLdouble y, GLdouble z );
__attribute__((visibility("default"))) void glVertex3f( GLfloat x, GLfloat y, GLfloat z );
__attribute__((visibility("default"))) void glVertex3i( GLint x, GLint y, GLint z );
__attribute__((visibility("default"))) void glVertex3s( GLshort x, GLshort y, GLshort z );

__attribute__((visibility("default"))) void glVertex4d( GLdouble x, GLdouble y, GLdouble z, GLdouble w );
__attribute__((visibility("default"))) void glVertex4f( GLfloat x, GLfloat y, GLfloat z, GLfloat w );
__attribute__((visibility("default"))) void glVertex4i( GLint x, GLint y, GLint z, GLint w );
__attribute__((visibility("default"))) void glVertex4s( GLshort x, GLshort y, GLshort z, GLshort w );

__attribute__((visibility("default"))) void glVertex2dv( const GLdouble *v );
__attribute__((visibility("default"))) void glVertex2fv( const GLfloat *v );
__attribute__((visibility("default"))) void glVertex2iv( const GLint *v );
__attribute__((visibility("default"))) void glVertex2sv( const GLshort *v );

__attribute__((visibility("default"))) void glVertex3dv( const GLdouble *v );
__attribute__((visibility("default"))) void glVertex3fv( const GLfloat *v );
__attribute__((visibility("default"))) void glVertex3iv( const GLint *v );
__attribute__((visibility("default"))) void glVertex3sv( const GLshort *v );

__attribute__((visibility("default"))) void glVertex4dv( const GLdouble *v );
__attribute__((visibility("default"))) void glVertex4fv( const GLfloat *v );
__attribute__((visibility("default"))) void glVertex4iv( const GLint *v );
__attribute__((visibility("default"))) void glVertex4sv( const GLshort *v );


__attribute__((visibility("default"))) void glNormal3b( GLbyte nx, GLbyte ny, GLbyte nz );
__attribute__((visibility("default"))) void glNormal3d( GLdouble nx, GLdouble ny, GLdouble nz );
__attribute__((visibility("default"))) void glNormal3f( GLfloat nx, GLfloat ny, GLfloat nz );
__attribute__((visibility("default"))) void glNormal3i( GLint nx, GLint ny, GLint nz );
__attribute__((visibility("default"))) void glNormal3s( GLshort nx, GLshort ny, GLshort nz );

__attribute__((visibility("default"))) void glNormal3bv( const GLbyte *v );
__attribute__((visibility("default"))) void glNormal3dv( const GLdouble *v );
__attribute__((visibility("default"))) void glNormal3fv( const GLfloat *v );
__attribute__((visibility("default"))) void glNormal3iv( const GLint *v );
__attribute__((visibility("default"))) void glNormal3sv( const GLshort *v );


__attribute__((visibility("default"))) void glIndexd( GLdouble c );
__attribute__((visibility("default"))) void glIndexf( GLfloat c );
__attribute__((visibility("default"))) void glIndexi( GLint c );
__attribute__((visibility("default"))) void glIndexs( GLshort c );
__attribute__((visibility("default"))) void glIndexub( GLubyte c );

__attribute__((visibility("default"))) void glIndexdv( const GLdouble *c );
__attribute__((visibility("default"))) void glIndexfv( const GLfloat *c );
__attribute__((visibility("default"))) void glIndexiv( const GLint *c );
__attribute__((visibility("default"))) void glIndexsv( const GLshort *c );
__attribute__((visibility("default"))) void glIndexubv( const GLubyte *c );

__attribute__((visibility("default"))) void glColor3b( GLbyte red, GLbyte green, GLbyte blue );
__attribute__((visibility("default"))) void glColor3d( GLdouble red, GLdouble green, GLdouble blue );
__attribute__((visibility("default"))) void glColor3f( GLfloat red, GLfloat green, GLfloat blue );
__attribute__((visibility("default"))) void glColor3i( GLint red, GLint green, GLint blue );
__attribute__((visibility("default"))) void glColor3s( GLshort red, GLshort green, GLshort blue );
__attribute__((visibility("default"))) void glColor3ub( GLubyte red, GLubyte green, GLubyte blue );
__attribute__((visibility("default"))) void glColor3ui( GLuint red, GLuint green, GLuint blue );
__attribute__((visibility("default"))) void glColor3us( GLushort red, GLushort green, GLushort blue );

__attribute__((visibility("default"))) void glColor4b( GLbyte red, GLbyte green,
                                   GLbyte blue, GLbyte alpha );
__attribute__((visibility("default"))) void glColor4d( GLdouble red, GLdouble green,
                                   GLdouble blue, GLdouble alpha );
__attribute__((visibility("default"))) void glColor4f( GLfloat red, GLfloat green,
                                   GLfloat blue, GLfloat alpha );
__attribute__((visibility("default"))) void glColor4i( GLint red, GLint green,
                                   GLint blue, GLint alpha );
__attribute__((visibility("default"))) void glColor4s( GLshort red, GLshort green,
                                   GLshort blue, GLshort alpha );
__attribute__((visibility("default"))) void glColor4ub( GLubyte red, GLubyte green,
                                    GLubyte blue, GLubyte alpha );
__attribute__((visibility("default"))) void glColor4ui( GLuint red, GLuint green,
                                    GLuint blue, GLuint alpha );
__attribute__((visibility("default"))) void glColor4us( GLushort red, GLushort green,
                                    GLushort blue, GLushort alpha );


__attribute__((visibility("default"))) void glColor3bv( const GLbyte *v );
__attribute__((visibility("default"))) void glColor3dv( const GLdouble *v );
__attribute__((visibility("default"))) void glColor3fv( const GLfloat *v );
__attribute__((visibility("default"))) void glColor3iv( const GLint *v );
__attribute__((visibility("default"))) void glColor3sv( const GLshort *v );
__attribute__((visibility("default"))) void glColor3ubv( const GLubyte *v );
__attribute__((visibility("default"))) void glColor3uiv( const GLuint *v );
__attribute__((visibility("default"))) void glColor3usv( const GLushort *v );

__attribute__((visibility("default"))) void glColor4bv( const GLbyte *v );
__attribute__((visibility("default"))) void glColor4dv( const GLdouble *v );
__attribute__((visibility("default"))) void glColor4fv( const GLfloat *v );
__attribute__((visibility("default"))) void glColor4iv( const GLint *v );
__attribute__((visibility("default"))) void glColor4sv( const GLshort *v );
__attribute__((visibility("default"))) void glColor4ubv( const GLubyte *v );
__attribute__((visibility("default"))) void glColor4uiv( const GLuint *v );
__attribute__((visibility("default"))) void glColor4usv( const GLushort *v );


__attribute__((visibility("default"))) void glTexCoord1d( GLdouble s );
__attribute__((visibility("default"))) void glTexCoord1f( GLfloat s );
__attribute__((visibility("default"))) void glTexCoord1i( GLint s );
__attribute__((visibility("default"))) void glTexCoord1s( GLshort s );

__attribute__((visibility("default"))) void glTexCoord2d( GLdouble s, GLdouble t );
__attribute__((visibility("default"))) void glTexCoord2f( GLfloat s, GLfloat t );
__attribute__((visibility("default"))) void glTexCoord2i( GLint s, GLint t );
__attribute__((visibility("default"))) void glTexCoord2s( GLshort s, GLshort t );

__attribute__((visibility("default"))) void glTexCoord3d( GLdouble s, GLdouble t, GLdouble r );
__attribute__((visibility("default"))) void glTexCoord3f( GLfloat s, GLfloat t, GLfloat r );
__attribute__((visibility("default"))) void glTexCoord3i( GLint s, GLint t, GLint r );
__attribute__((visibility("default"))) void glTexCoord3s( GLshort s, GLshort t, GLshort r );

__attribute__((visibility("default"))) void glTexCoord4d( GLdouble s, GLdouble t, GLdouble r, GLdouble q );
__attribute__((visibility("default"))) void glTexCoord4f( GLfloat s, GLfloat t, GLfloat r, GLfloat q );
__attribute__((visibility("default"))) void glTexCoord4i( GLint s, GLint t, GLint r, GLint q );
__attribute__((visibility("default"))) void glTexCoord4s( GLshort s, GLshort t, GLshort r, GLshort q );

__attribute__((visibility("default"))) void glTexCoord1dv( const GLdouble *v );
__attribute__((visibility("default"))) void glTexCoord1fv( const GLfloat *v );
__attribute__((visibility("default"))) void glTexCoord1iv( const GLint *v );
__attribute__((visibility("default"))) void glTexCoord1sv( const GLshort *v );

__attribute__((visibility("default"))) void glTexCoord2dv( const GLdouble *v );
__attribute__((visibility("default"))) void glTexCoord2fv( const GLfloat *v );
__attribute__((visibility("default"))) void glTexCoord2iv( const GLint *v );
__attribute__((visibility("default"))) void glTexCoord2sv( const GLshort *v );

__attribute__((visibility("default"))) void glTexCoord3dv( const GLdouble *v );
__attribute__((visibility("default"))) void glTexCoord3fv( const GLfloat *v );
__attribute__((visibility("default"))) void glTexCoord3iv( const GLint *v );
__attribute__((visibility("default"))) void glTexCoord3sv( const GLshort *v );

__attribute__((visibility("default"))) void glTexCoord4dv( const GLdouble *v );
__attribute__((visibility("default"))) void glTexCoord4fv( const GLfloat *v );
__attribute__((visibility("default"))) void glTexCoord4iv( const GLint *v );
__attribute__((visibility("default"))) void glTexCoord4sv( const GLshort *v );


__attribute__((visibility("default"))) void glRasterPos2d( GLdouble x, GLdouble y );
__attribute__((visibility("default"))) void glRasterPos2f( GLfloat x, GLfloat y );
__attribute__((visibility("default"))) void glRasterPos2i( GLint x, GLint y );
__attribute__((visibility("default"))) void glRasterPos2s( GLshort x, GLshort y );

__attribute__((visibility("default"))) void glRasterPos3d( GLdouble x, GLdouble y, GLdouble z );
__attribute__((visibility("default"))) void glRasterPos3f( GLfloat x, GLfloat y, GLfloat z );
__attribute__((visibility("default"))) void glRasterPos3i( GLint x, GLint y, GLint z );
__attribute__((visibility("default"))) void glRasterPos3s( GLshort x, GLshort y, GLshort z );

__attribute__((visibility("default"))) void glRasterPos4d( GLdouble x, GLdouble y, GLdouble z, GLdouble w );
__attribute__((visibility("default"))) void glRasterPos4f( GLfloat x, GLfloat y, GLfloat z, GLfloat w );
__attribute__((visibility("default"))) void glRasterPos4i( GLint x, GLint y, GLint z, GLint w );
__attribute__((visibility("default"))) void glRasterPos4s( GLshort x, GLshort y, GLshort z, GLshort w );

__attribute__((visibility("default"))) void glRasterPos2dv( const GLdouble *v );
__attribute__((visibility("default"))) void glRasterPos2fv( const GLfloat *v );
__attribute__((visibility("default"))) void glRasterPos2iv( const GLint *v );
__attribute__((visibility("default"))) void glRasterPos2sv( const GLshort *v );

__attribute__((visibility("default"))) void glRasterPos3dv( const GLdouble *v );
__attribute__((visibility("default"))) void glRasterPos3fv( const GLfloat *v );
__attribute__((visibility("default"))) void glRasterPos3iv( const GLint *v );
__attribute__((visibility("default"))) void glRasterPos3sv( const GLshort *v );

__attribute__((visibility("default"))) void glRasterPos4dv( const GLdouble *v );
__attribute__((visibility("default"))) void glRasterPos4fv( const GLfloat *v );
__attribute__((visibility("default"))) void glRasterPos4iv( const GLint *v );
__attribute__((visibility("default"))) void glRasterPos4sv( const GLshort *v );


__attribute__((visibility("default"))) void glRectd( GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2 );
__attribute__((visibility("default"))) void glRectf( GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2 );
__attribute__((visibility("default"))) void glRecti( GLint x1, GLint y1, GLint x2, GLint y2 );
__attribute__((visibility("default"))) void glRects( GLshort x1, GLshort y1, GLshort x2, GLshort y2 );


__attribute__((visibility("default"))) void glRectdv( const GLdouble *v1, const GLdouble *v2 );
__attribute__((visibility("default"))) void glRectfv( const GLfloat *v1, const GLfloat *v2 );
__attribute__((visibility("default"))) void glRectiv( const GLint *v1, const GLint *v2 );
__attribute__((visibility("default"))) void glRectsv( const GLshort *v1, const GLshort *v2 );






__attribute__((visibility("default"))) void glVertexPointer( GLint size, GLenum type,
                                       GLsizei stride, const GLvoid *ptr );

__attribute__((visibility("default"))) void glNormalPointer( GLenum type, GLsizei stride,
                                       const GLvoid *ptr );

__attribute__((visibility("default"))) void glColorPointer( GLint size, GLenum type,
                                      GLsizei stride, const GLvoid *ptr );

__attribute__((visibility("default"))) void glIndexPointer( GLenum type, GLsizei stride,
                                      const GLvoid *ptr );

__attribute__((visibility("default"))) void glTexCoordPointer( GLint size, GLenum type,
                                         GLsizei stride, const GLvoid *ptr );

__attribute__((visibility("default"))) void glEdgeFlagPointer( GLsizei stride, const GLvoid *ptr );

__attribute__((visibility("default"))) void glGetPointerv( GLenum pname, GLvoid **params );

__attribute__((visibility("default"))) void glArrayElement( GLint i );

__attribute__((visibility("default"))) void glDrawArrays( GLenum mode, GLint first, GLsizei count );

__attribute__((visibility("default"))) void glDrawElements( GLenum mode, GLsizei count,
                                      GLenum type, const GLvoid *indices );

__attribute__((visibility("default"))) void glInterleavedArrays( GLenum format, GLsizei stride,
                                           const GLvoid *pointer );





__attribute__((visibility("default"))) void glShadeModel( GLenum mode );

__attribute__((visibility("default"))) void glLightf( GLenum light, GLenum pname, GLfloat param );
__attribute__((visibility("default"))) void glLighti( GLenum light, GLenum pname, GLint param );
__attribute__((visibility("default"))) void glLightfv( GLenum light, GLenum pname,
                                 const GLfloat *params );
__attribute__((visibility("default"))) void glLightiv( GLenum light, GLenum pname,
                                 const GLint *params );

__attribute__((visibility("default"))) void glGetLightfv( GLenum light, GLenum pname,
                                    GLfloat *params );
__attribute__((visibility("default"))) void glGetLightiv( GLenum light, GLenum pname,
                                    GLint *params );

__attribute__((visibility("default"))) void glLightModelf( GLenum pname, GLfloat param );
__attribute__((visibility("default"))) void glLightModeli( GLenum pname, GLint param );
__attribute__((visibility("default"))) void glLightModelfv( GLenum pname, const GLfloat *params );
__attribute__((visibility("default"))) void glLightModeliv( GLenum pname, const GLint *params );

__attribute__((visibility("default"))) void glMaterialf( GLenum face, GLenum pname, GLfloat param );
__attribute__((visibility("default"))) void glMateriali( GLenum face, GLenum pname, GLint param );
__attribute__((visibility("default"))) void glMaterialfv( GLenum face, GLenum pname, const GLfloat *params );
__attribute__((visibility("default"))) void glMaterialiv( GLenum face, GLenum pname, const GLint *params );

__attribute__((visibility("default"))) void glGetMaterialfv( GLenum face, GLenum pname, GLfloat *params );
__attribute__((visibility("default"))) void glGetMaterialiv( GLenum face, GLenum pname, GLint *params );

__attribute__((visibility("default"))) void glColorMaterial( GLenum face, GLenum mode );






__attribute__((visibility("default"))) void glPixelZoom( GLfloat xfactor, GLfloat yfactor );

__attribute__((visibility("default"))) void glPixelStoref( GLenum pname, GLfloat param );
__attribute__((visibility("default"))) void glPixelStorei( GLenum pname, GLint param );

__attribute__((visibility("default"))) void glPixelTransferf( GLenum pname, GLfloat param );
__attribute__((visibility("default"))) void glPixelTransferi( GLenum pname, GLint param );

__attribute__((visibility("default"))) void glPixelMapfv( GLenum map, GLsizei mapsize,
                                    const GLfloat *values );
__attribute__((visibility("default"))) void glPixelMapuiv( GLenum map, GLsizei mapsize,
                                     const GLuint *values );
__attribute__((visibility("default"))) void glPixelMapusv( GLenum map, GLsizei mapsize,
                                     const GLushort *values );

__attribute__((visibility("default"))) void glGetPixelMapfv( GLenum map, GLfloat *values );
__attribute__((visibility("default"))) void glGetPixelMapuiv( GLenum map, GLuint *values );
__attribute__((visibility("default"))) void glGetPixelMapusv( GLenum map, GLushort *values );

__attribute__((visibility("default"))) void glBitmap( GLsizei width, GLsizei height,
                                GLfloat xorig, GLfloat yorig,
                                GLfloat xmove, GLfloat ymove,
                                const GLubyte *bitmap );

__attribute__((visibility("default"))) void glReadPixels( GLint x, GLint y,
                                    GLsizei width, GLsizei height,
                                    GLenum format, GLenum type,
                                    GLvoid *pixels );

__attribute__((visibility("default"))) void glDrawPixels( GLsizei width, GLsizei height,
                                    GLenum format, GLenum type,
                                    const GLvoid *pixels );

__attribute__((visibility("default"))) void glCopyPixels( GLint x, GLint y,
                                    GLsizei width, GLsizei height,
                                    GLenum type );





__attribute__((visibility("default"))) void glStencilFunc( GLenum func, GLint ref, GLuint mask );

__attribute__((visibility("default"))) void glStencilMask( GLuint mask );

__attribute__((visibility("default"))) void glStencilOp( GLenum fail, GLenum zfail, GLenum zpass );

__attribute__((visibility("default"))) void glClearStencil( GLint s );







__attribute__((visibility("default"))) void glTexGend( GLenum coord, GLenum pname, GLdouble param );
__attribute__((visibility("default"))) void glTexGenf( GLenum coord, GLenum pname, GLfloat param );
__attribute__((visibility("default"))) void glTexGeni( GLenum coord, GLenum pname, GLint param );

__attribute__((visibility("default"))) void glTexGendv( GLenum coord, GLenum pname, const GLdouble *params );
__attribute__((visibility("default"))) void glTexGenfv( GLenum coord, GLenum pname, const GLfloat *params );
__attribute__((visibility("default"))) void glTexGeniv( GLenum coord, GLenum pname, const GLint *params );

__attribute__((visibility("default"))) void glGetTexGendv( GLenum coord, GLenum pname, GLdouble *params );
__attribute__((visibility("default"))) void glGetTexGenfv( GLenum coord, GLenum pname, GLfloat *params );
__attribute__((visibility("default"))) void glGetTexGeniv( GLenum coord, GLenum pname, GLint *params );


__attribute__((visibility("default"))) void glTexEnvf( GLenum target, GLenum pname, GLfloat param );
__attribute__((visibility("default"))) void glTexEnvi( GLenum target, GLenum pname, GLint param );

__attribute__((visibility("default"))) void glTexEnvfv( GLenum target, GLenum pname, const GLfloat *params );
__attribute__((visibility("default"))) void glTexEnviv( GLenum target, GLenum pname, const GLint *params );

__attribute__((visibility("default"))) void glGetTexEnvfv( GLenum target, GLenum pname, GLfloat *params );
__attribute__((visibility("default"))) void glGetTexEnviv( GLenum target, GLenum pname, GLint *params );


__attribute__((visibility("default"))) void glTexParameterf( GLenum target, GLenum pname, GLfloat param );
__attribute__((visibility("default"))) void glTexParameteri( GLenum target, GLenum pname, GLint param );

__attribute__((visibility("default"))) void glTexParameterfv( GLenum target, GLenum pname,
                                          const GLfloat *params );
__attribute__((visibility("default"))) void glTexParameteriv( GLenum target, GLenum pname,
                                          const GLint *params );

__attribute__((visibility("default"))) void glGetTexParameterfv( GLenum target,
                                           GLenum pname, GLfloat *params);
__attribute__((visibility("default"))) void glGetTexParameteriv( GLenum target,
                                           GLenum pname, GLint *params );

__attribute__((visibility("default"))) void glGetTexLevelParameterfv( GLenum target, GLint level,
                                                GLenum pname, GLfloat *params );
__attribute__((visibility("default"))) void glGetTexLevelParameteriv( GLenum target, GLint level,
                                                GLenum pname, GLint *params );


__attribute__((visibility("default"))) void glTexImage1D( GLenum target, GLint level,
                                    GLint internalFormat,
                                    GLsizei width, GLint border,
                                    GLenum format, GLenum type,
                                    const GLvoid *pixels );

__attribute__((visibility("default"))) void glTexImage2D( GLenum target, GLint level,
                                    GLint internalFormat,
                                    GLsizei width, GLsizei height,
                                    GLint border, GLenum format, GLenum type,
                                    const GLvoid *pixels );

__attribute__((visibility("default"))) void glGetTexImage( GLenum target, GLint level,
                                     GLenum format, GLenum type,
                                     GLvoid *pixels );




__attribute__((visibility("default"))) void glGenTextures( GLsizei n, GLuint *textures );

__attribute__((visibility("default"))) void glDeleteTextures( GLsizei n, const GLuint *textures);

__attribute__((visibility("default"))) void glBindTexture( GLenum target, GLuint texture );

__attribute__((visibility("default"))) void glPrioritizeTextures( GLsizei n,
                                            const GLuint *textures,
                                            const GLclampf *priorities );

__attribute__((visibility("default"))) GLboolean glAreTexturesResident( GLsizei n,
                                                  const GLuint *textures,
                                                  GLboolean *residences );

__attribute__((visibility("default"))) GLboolean glIsTexture( GLuint texture );


__attribute__((visibility("default"))) void glTexSubImage1D( GLenum target, GLint level,
                                       GLint xoffset,
                                       GLsizei width, GLenum format,
                                       GLenum type, const GLvoid *pixels );


__attribute__((visibility("default"))) void glTexSubImage2D( GLenum target, GLint level,
                                       GLint xoffset, GLint yoffset,
                                       GLsizei width, GLsizei height,
                                       GLenum format, GLenum type,
                                       const GLvoid *pixels );


__attribute__((visibility("default"))) void glCopyTexImage1D( GLenum target, GLint level,
                                        GLenum internalformat,
                                        GLint x, GLint y,
                                        GLsizei width, GLint border );


__attribute__((visibility("default"))) void glCopyTexImage2D( GLenum target, GLint level,
                                        GLenum internalformat,
                                        GLint x, GLint y,
                                        GLsizei width, GLsizei height,
                                        GLint border );


__attribute__((visibility("default"))) void glCopyTexSubImage1D( GLenum target, GLint level,
                                           GLint xoffset, GLint x, GLint y,
                                           GLsizei width );


__attribute__((visibility("default"))) void glCopyTexSubImage2D( GLenum target, GLint level,
                                           GLint xoffset, GLint yoffset,
                                           GLint x, GLint y,
                                           GLsizei width, GLsizei height );






__attribute__((visibility("default"))) void glMap1d( GLenum target, GLdouble u1, GLdouble u2,
                               GLint stride,
                               GLint order, const GLdouble *points );
__attribute__((visibility("default"))) void glMap1f( GLenum target, GLfloat u1, GLfloat u2,
                               GLint stride,
                               GLint order, const GLfloat *points );

__attribute__((visibility("default"))) void glMap2d( GLenum target,
       GLdouble u1, GLdouble u2, GLint ustride, GLint uorder,
       GLdouble v1, GLdouble v2, GLint vstride, GLint vorder,
       const GLdouble *points );
__attribute__((visibility("default"))) void glMap2f( GLenum target,
       GLfloat u1, GLfloat u2, GLint ustride, GLint uorder,
       GLfloat v1, GLfloat v2, GLint vstride, GLint vorder,
       const GLfloat *points );

__attribute__((visibility("default"))) void glGetMapdv( GLenum target, GLenum query, GLdouble *v );
__attribute__((visibility("default"))) void glGetMapfv( GLenum target, GLenum query, GLfloat *v );
__attribute__((visibility("default"))) void glGetMapiv( GLenum target, GLenum query, GLint *v );

__attribute__((visibility("default"))) void glEvalCoord1d( GLdouble u );
__attribute__((visibility("default"))) void glEvalCoord1f( GLfloat u );

__attribute__((visibility("default"))) void glEvalCoord1dv( const GLdouble *u );
__attribute__((visibility("default"))) void glEvalCoord1fv( const GLfloat *u );

__attribute__((visibility("default"))) void glEvalCoord2d( GLdouble u, GLdouble v );
__attribute__((visibility("default"))) void glEvalCoord2f( GLfloat u, GLfloat v );

__attribute__((visibility("default"))) void glEvalCoord2dv( const GLdouble *u );
__attribute__((visibility("default"))) void glEvalCoord2fv( const GLfloat *u );

__attribute__((visibility("default"))) void glMapGrid1d( GLint un, GLdouble u1, GLdouble u2 );
__attribute__((visibility("default"))) void glMapGrid1f( GLint un, GLfloat u1, GLfloat u2 );

__attribute__((visibility("default"))) void glMapGrid2d( GLint un, GLdouble u1, GLdouble u2,
                                   GLint vn, GLdouble v1, GLdouble v2 );
__attribute__((visibility("default"))) void glMapGrid2f( GLint un, GLfloat u1, GLfloat u2,
                                   GLint vn, GLfloat v1, GLfloat v2 );

__attribute__((visibility("default"))) void glEvalPoint1( GLint i );

__attribute__((visibility("default"))) void glEvalPoint2( GLint i, GLint j );

__attribute__((visibility("default"))) void glEvalMesh1( GLenum mode, GLint i1, GLint i2 );

__attribute__((visibility("default"))) void glEvalMesh2( GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2 );






__attribute__((visibility("default"))) void glFogf( GLenum pname, GLfloat param );

__attribute__((visibility("default"))) void glFogi( GLenum pname, GLint param );

__attribute__((visibility("default"))) void glFogfv( GLenum pname, const GLfloat *params );

__attribute__((visibility("default"))) void glFogiv( GLenum pname, const GLint *params );






__attribute__((visibility("default"))) void glFeedbackBuffer( GLsizei size, GLenum type, GLfloat *buffer );

__attribute__((visibility("default"))) void glPassThrough( GLfloat token );

__attribute__((visibility("default"))) void glSelectBuffer( GLsizei size, GLuint *buffer );

__attribute__((visibility("default"))) void glInitNames( void );

__attribute__((visibility("default"))) void glLoadName( GLuint name );

__attribute__((visibility("default"))) void glPushName( GLuint name );

__attribute__((visibility("default"))) void glPopName( void );
# 1519 "/usr/include/GL/gl.h" 3 4
__attribute__((visibility("default"))) void glDrawRangeElements( GLenum mode, GLuint start,
 GLuint end, GLsizei count, GLenum type, const GLvoid *indices );

__attribute__((visibility("default"))) void glTexImage3D( GLenum target, GLint level,
                                      GLint internalFormat,
                                      GLsizei width, GLsizei height,
                                      GLsizei depth, GLint border,
                                      GLenum format, GLenum type,
                                      const GLvoid *pixels );

__attribute__((visibility("default"))) void glTexSubImage3D( GLenum target, GLint level,
                                         GLint xoffset, GLint yoffset,
                                         GLint zoffset, GLsizei width,
                                         GLsizei height, GLsizei depth,
                                         GLenum format,
                                         GLenum type, const GLvoid *pixels);

__attribute__((visibility("default"))) void glCopyTexSubImage3D( GLenum target, GLint level,
                                             GLint xoffset, GLint yoffset,
                                             GLint zoffset, GLint x,
                                             GLint y, GLsizei width,
                                             GLsizei height );

typedef void ( * PFNGLDRAWRANGEELEMENTSPROC) (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices);
typedef void ( * PFNGLTEXIMAGE3DPROC) (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
typedef void ( * PFNGLTEXSUBIMAGE3DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels);
typedef void ( * PFNGLCOPYTEXSUBIMAGE3DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
# 1629 "/usr/include/GL/gl.h" 3 4
__attribute__((visibility("default"))) void glColorTable( GLenum target, GLenum internalformat,
                                    GLsizei width, GLenum format,
                                    GLenum type, const GLvoid *table );

__attribute__((visibility("default"))) void glColorSubTable( GLenum target,
                                       GLsizei start, GLsizei count,
                                       GLenum format, GLenum type,
                                       const GLvoid *data );

__attribute__((visibility("default"))) void glColorTableParameteriv(GLenum target, GLenum pname,
                                              const GLint *params);

__attribute__((visibility("default"))) void glColorTableParameterfv(GLenum target, GLenum pname,
                                              const GLfloat *params);

__attribute__((visibility("default"))) void glCopyColorSubTable( GLenum target, GLsizei start,
                                           GLint x, GLint y, GLsizei width );

__attribute__((visibility("default"))) void glCopyColorTable( GLenum target, GLenum internalformat,
                                        GLint x, GLint y, GLsizei width );

__attribute__((visibility("default"))) void glGetColorTable( GLenum target, GLenum format,
                                       GLenum type, GLvoid *table );

__attribute__((visibility("default"))) void glGetColorTableParameterfv( GLenum target, GLenum pname,
                                                  GLfloat *params );

__attribute__((visibility("default"))) void glGetColorTableParameteriv( GLenum target, GLenum pname,
                                                  GLint *params );

__attribute__((visibility("default"))) void glBlendEquation( GLenum mode );

__attribute__((visibility("default"))) void glBlendColor( GLclampf red, GLclampf green,
                                    GLclampf blue, GLclampf alpha );

__attribute__((visibility("default"))) void glHistogram( GLenum target, GLsizei width,
       GLenum internalformat, GLboolean sink );

__attribute__((visibility("default"))) void glResetHistogram( GLenum target );

__attribute__((visibility("default"))) void glGetHistogram( GLenum target, GLboolean reset,
          GLenum format, GLenum type,
          GLvoid *values );

__attribute__((visibility("default"))) void glGetHistogramParameterfv( GLenum target, GLenum pname,
       GLfloat *params );

__attribute__((visibility("default"))) void glGetHistogramParameteriv( GLenum target, GLenum pname,
       GLint *params );

__attribute__((visibility("default"))) void glMinmax( GLenum target, GLenum internalformat,
    GLboolean sink );

__attribute__((visibility("default"))) void glResetMinmax( GLenum target );

__attribute__((visibility("default"))) void glGetMinmax( GLenum target, GLboolean reset,
                                   GLenum format, GLenum types,
                                   GLvoid *values );

__attribute__((visibility("default"))) void glGetMinmaxParameterfv( GLenum target, GLenum pname,
           GLfloat *params );

__attribute__((visibility("default"))) void glGetMinmaxParameteriv( GLenum target, GLenum pname,
           GLint *params );

__attribute__((visibility("default"))) void glConvolutionFilter1D( GLenum target,
 GLenum internalformat, GLsizei width, GLenum format, GLenum type,
 const GLvoid *image );

__attribute__((visibility("default"))) void glConvolutionFilter2D( GLenum target,
 GLenum internalformat, GLsizei width, GLsizei height, GLenum format,
 GLenum type, const GLvoid *image );

__attribute__((visibility("default"))) void glConvolutionParameterf( GLenum target, GLenum pname,
 GLfloat params );

__attribute__((visibility("default"))) void glConvolutionParameterfv( GLenum target, GLenum pname,
 const GLfloat *params );

__attribute__((visibility("default"))) void glConvolutionParameteri( GLenum target, GLenum pname,
 GLint params );

__attribute__((visibility("default"))) void glConvolutionParameteriv( GLenum target, GLenum pname,
 const GLint *params );

__attribute__((visibility("default"))) void glCopyConvolutionFilter1D( GLenum target,
 GLenum internalformat, GLint x, GLint y, GLsizei width );

__attribute__((visibility("default"))) void glCopyConvolutionFilter2D( GLenum target,
 GLenum internalformat, GLint x, GLint y, GLsizei width,
 GLsizei height);

__attribute__((visibility("default"))) void glGetConvolutionFilter( GLenum target, GLenum format,
 GLenum type, GLvoid *image );

__attribute__((visibility("default"))) void glGetConvolutionParameterfv( GLenum target, GLenum pname,
 GLfloat *params );

__attribute__((visibility("default"))) void glGetConvolutionParameteriv( GLenum target, GLenum pname,
 GLint *params );

__attribute__((visibility("default"))) void glSeparableFilter2D( GLenum target,
 GLenum internalformat, GLsizei width, GLsizei height, GLenum format,
 GLenum type, const GLvoid *row, const GLvoid *column );

__attribute__((visibility("default"))) void glGetSeparableFilter( GLenum target, GLenum format,
 GLenum type, GLvoid *row, GLvoid *column, GLvoid *span );

typedef void ( * PFNGLBLENDCOLORPROC) (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
typedef void ( * PFNGLBLENDEQUATIONPROC) (GLenum mode);
typedef void ( * PFNGLCOLORTABLEPROC) (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table);
typedef void ( * PFNGLCOLORTABLEPARAMETERFVPROC) (GLenum target, GLenum pname, const GLfloat *params);
typedef void ( * PFNGLCOLORTABLEPARAMETERIVPROC) (GLenum target, GLenum pname, const GLint *params);
typedef void ( * PFNGLCOPYCOLORTABLEPROC) (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
typedef void ( * PFNGLGETCOLORTABLEPROC) (GLenum target, GLenum format, GLenum type, GLvoid *table);
typedef void ( * PFNGLGETCOLORTABLEPARAMETERFVPROC) (GLenum target, GLenum pname, GLfloat *params);
typedef void ( * PFNGLGETCOLORTABLEPARAMETERIVPROC) (GLenum target, GLenum pname, GLint *params);
typedef void ( * PFNGLCOLORSUBTABLEPROC) (GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *data);
typedef void ( * PFNGLCOPYCOLORSUBTABLEPROC) (GLenum target, GLsizei start, GLint x, GLint y, GLsizei width);
typedef void ( * PFNGLCONVOLUTIONFILTER1DPROC) (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *image);
typedef void ( * PFNGLCONVOLUTIONFILTER2DPROC) (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *image);
typedef void ( * PFNGLCONVOLUTIONPARAMETERFPROC) (GLenum target, GLenum pname, GLfloat params);
typedef void ( * PFNGLCONVOLUTIONPARAMETERFVPROC) (GLenum target, GLenum pname, const GLfloat *params);
typedef void ( * PFNGLCONVOLUTIONPARAMETERIPROC) (GLenum target, GLenum pname, GLint params);
typedef void ( * PFNGLCONVOLUTIONPARAMETERIVPROC) (GLenum target, GLenum pname, const GLint *params);
typedef void ( * PFNGLCOPYCONVOLUTIONFILTER1DPROC) (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
typedef void ( * PFNGLCOPYCONVOLUTIONFILTER2DPROC) (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void ( * PFNGLGETCONVOLUTIONFILTERPROC) (GLenum target, GLenum format, GLenum type, GLvoid *image);
typedef void ( * PFNGLGETCONVOLUTIONPARAMETERFVPROC) (GLenum target, GLenum pname, GLfloat *params);
typedef void ( * PFNGLGETCONVOLUTIONPARAMETERIVPROC) (GLenum target, GLenum pname, GLint *params);
typedef void ( * PFNGLGETSEPARABLEFILTERPROC) (GLenum target, GLenum format, GLenum type, GLvoid *row, GLvoid *column, GLvoid *span);
typedef void ( * PFNGLSEPARABLEFILTER2DPROC) (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *row, const GLvoid *column);
typedef void ( * PFNGLGETHISTOGRAMPROC) (GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values);
typedef void ( * PFNGLGETHISTOGRAMPARAMETERFVPROC) (GLenum target, GLenum pname, GLfloat *params);
typedef void ( * PFNGLGETHISTOGRAMPARAMETERIVPROC) (GLenum target, GLenum pname, GLint *params);
typedef void ( * PFNGLGETMINMAXPROC) (GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values);
typedef void ( * PFNGLGETMINMAXPARAMETERFVPROC) (GLenum target, GLenum pname, GLfloat *params);
typedef void ( * PFNGLGETMINMAXPARAMETERIVPROC) (GLenum target, GLenum pname, GLint *params);
typedef void ( * PFNGLHISTOGRAMPROC) (GLenum target, GLsizei width, GLenum internalformat, GLboolean sink);
typedef void ( * PFNGLMINMAXPROC) (GLenum target, GLenum internalformat, GLboolean sink);
typedef void ( * PFNGLRESETHISTOGRAMPROC) (GLenum target);
typedef void ( * PFNGLRESETMINMAXPROC) (GLenum target);
# 1883 "/usr/include/GL/gl.h" 3 4
__attribute__((visibility("default"))) void glActiveTexture( GLenum texture );

__attribute__((visibility("default"))) void glClientActiveTexture( GLenum texture );

__attribute__((visibility("default"))) void glCompressedTexImage1D( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data );

__attribute__((visibility("default"))) void glCompressedTexImage2D( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data );

__attribute__((visibility("default"))) void glCompressedTexImage3D( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data );

__attribute__((visibility("default"))) void glCompressedTexSubImage1D( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data );

__attribute__((visibility("default"))) void glCompressedTexSubImage2D( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data );

__attribute__((visibility("default"))) void glCompressedTexSubImage3D( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data );

__attribute__((visibility("default"))) void glGetCompressedTexImage( GLenum target, GLint lod, GLvoid *img );

__attribute__((visibility("default"))) void glMultiTexCoord1d( GLenum target, GLdouble s );

__attribute__((visibility("default"))) void glMultiTexCoord1dv( GLenum target, const GLdouble *v );

__attribute__((visibility("default"))) void glMultiTexCoord1f( GLenum target, GLfloat s );

__attribute__((visibility("default"))) void glMultiTexCoord1fv( GLenum target, const GLfloat *v );

__attribute__((visibility("default"))) void glMultiTexCoord1i( GLenum target, GLint s );

__attribute__((visibility("default"))) void glMultiTexCoord1iv( GLenum target, const GLint *v );

__attribute__((visibility("default"))) void glMultiTexCoord1s( GLenum target, GLshort s );

__attribute__((visibility("default"))) void glMultiTexCoord1sv( GLenum target, const GLshort *v );

__attribute__((visibility("default"))) void glMultiTexCoord2d( GLenum target, GLdouble s, GLdouble t );

__attribute__((visibility("default"))) void glMultiTexCoord2dv( GLenum target, const GLdouble *v );

__attribute__((visibility("default"))) void glMultiTexCoord2f( GLenum target, GLfloat s, GLfloat t );

__attribute__((visibility("default"))) void glMultiTexCoord2fv( GLenum target, const GLfloat *v );

__attribute__((visibility("default"))) void glMultiTexCoord2i( GLenum target, GLint s, GLint t );

__attribute__((visibility("default"))) void glMultiTexCoord2iv( GLenum target, const GLint *v );

__attribute__((visibility("default"))) void glMultiTexCoord2s( GLenum target, GLshort s, GLshort t );

__attribute__((visibility("default"))) void glMultiTexCoord2sv( GLenum target, const GLshort *v );

__attribute__((visibility("default"))) void glMultiTexCoord3d( GLenum target, GLdouble s, GLdouble t, GLdouble r );

__attribute__((visibility("default"))) void glMultiTexCoord3dv( GLenum target, const GLdouble *v );

__attribute__((visibility("default"))) void glMultiTexCoord3f( GLenum target, GLfloat s, GLfloat t, GLfloat r );

__attribute__((visibility("default"))) void glMultiTexCoord3fv( GLenum target, const GLfloat *v );

__attribute__((visibility("default"))) void glMultiTexCoord3i( GLenum target, GLint s, GLint t, GLint r );

__attribute__((visibility("default"))) void glMultiTexCoord3iv( GLenum target, const GLint *v );

__attribute__((visibility("default"))) void glMultiTexCoord3s( GLenum target, GLshort s, GLshort t, GLshort r );

__attribute__((visibility("default"))) void glMultiTexCoord3sv( GLenum target, const GLshort *v );

__attribute__((visibility("default"))) void glMultiTexCoord4d( GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q );

__attribute__((visibility("default"))) void glMultiTexCoord4dv( GLenum target, const GLdouble *v );

__attribute__((visibility("default"))) void glMultiTexCoord4f( GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q );

__attribute__((visibility("default"))) void glMultiTexCoord4fv( GLenum target, const GLfloat *v );

__attribute__((visibility("default"))) void glMultiTexCoord4i( GLenum target, GLint s, GLint t, GLint r, GLint q );

__attribute__((visibility("default"))) void glMultiTexCoord4iv( GLenum target, const GLint *v );

__attribute__((visibility("default"))) void glMultiTexCoord4s( GLenum target, GLshort s, GLshort t, GLshort r, GLshort q );

__attribute__((visibility("default"))) void glMultiTexCoord4sv( GLenum target, const GLshort *v );


__attribute__((visibility("default"))) void glLoadTransposeMatrixd( const GLdouble m[16] );

__attribute__((visibility("default"))) void glLoadTransposeMatrixf( const GLfloat m[16] );

__attribute__((visibility("default"))) void glMultTransposeMatrixd( const GLdouble m[16] );

__attribute__((visibility("default"))) void glMultTransposeMatrixf( const GLfloat m[16] );

__attribute__((visibility("default"))) void glSampleCoverage( GLclampf value, GLboolean invert );

typedef void ( * PFNGLACTIVETEXTUREPROC) (GLenum texture);
typedef void ( * PFNGLCLIENTACTIVETEXTUREPROC) (GLenum texture);
typedef void ( * PFNGLMULTITEXCOORD1DPROC) (GLenum target, GLdouble s);
typedef void ( * PFNGLMULTITEXCOORD1DVPROC) (GLenum target, const GLdouble *v);
typedef void ( * PFNGLMULTITEXCOORD1FPROC) (GLenum target, GLfloat s);
typedef void ( * PFNGLMULTITEXCOORD1FVPROC) (GLenum target, const GLfloat *v);
typedef void ( * PFNGLMULTITEXCOORD1IPROC) (GLenum target, GLint s);
typedef void ( * PFNGLMULTITEXCOORD1IVPROC) (GLenum target, const GLint *v);
typedef void ( * PFNGLMULTITEXCOORD1SPROC) (GLenum target, GLshort s);
typedef void ( * PFNGLMULTITEXCOORD1SVPROC) (GLenum target, const GLshort *v);
typedef void ( * PFNGLMULTITEXCOORD2DPROC) (GLenum target, GLdouble s, GLdouble t);
typedef void ( * PFNGLMULTITEXCOORD2DVPROC) (GLenum target, const GLdouble *v);
typedef void ( * PFNGLMULTITEXCOORD2FPROC) (GLenum target, GLfloat s, GLfloat t);
typedef void ( * PFNGLMULTITEXCOORD2FVPROC) (GLenum target, const GLfloat *v);
typedef void ( * PFNGLMULTITEXCOORD2IPROC) (GLenum target, GLint s, GLint t);
typedef void ( * PFNGLMULTITEXCOORD2IVPROC) (GLenum target, const GLint *v);
typedef void ( * PFNGLMULTITEXCOORD2SPROC) (GLenum target, GLshort s, GLshort t);
typedef void ( * PFNGLMULTITEXCOORD2SVPROC) (GLenum target, const GLshort *v);
typedef void ( * PFNGLMULTITEXCOORD3DPROC) (GLenum target, GLdouble s, GLdouble t, GLdouble r);
typedef void ( * PFNGLMULTITEXCOORD3DVPROC) (GLenum target, const GLdouble *v);
typedef void ( * PFNGLMULTITEXCOORD3FPROC) (GLenum target, GLfloat s, GLfloat t, GLfloat r);
typedef void ( * PFNGLMULTITEXCOORD3FVPROC) (GLenum target, const GLfloat *v);
typedef void ( * PFNGLMULTITEXCOORD3IPROC) (GLenum target, GLint s, GLint t, GLint r);
typedef void ( * PFNGLMULTITEXCOORD3IVPROC) (GLenum target, const GLint *v);
typedef void ( * PFNGLMULTITEXCOORD3SPROC) (GLenum target, GLshort s, GLshort t, GLshort r);
typedef void ( * PFNGLMULTITEXCOORD3SVPROC) (GLenum target, const GLshort *v);
typedef void ( * PFNGLMULTITEXCOORD4DPROC) (GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
typedef void ( * PFNGLMULTITEXCOORD4DVPROC) (GLenum target, const GLdouble *v);
typedef void ( * PFNGLMULTITEXCOORD4FPROC) (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
typedef void ( * PFNGLMULTITEXCOORD4FVPROC) (GLenum target, const GLfloat *v);
typedef void ( * PFNGLMULTITEXCOORD4IPROC) (GLenum target, GLint s, GLint t, GLint r, GLint q);
typedef void ( * PFNGLMULTITEXCOORD4IVPROC) (GLenum target, const GLint *v);
typedef void ( * PFNGLMULTITEXCOORD4SPROC) (GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
typedef void ( * PFNGLMULTITEXCOORD4SVPROC) (GLenum target, const GLshort *v);
typedef void ( * PFNGLLOADTRANSPOSEMATRIXFPROC) (const GLfloat *m);
typedef void ( * PFNGLLOADTRANSPOSEMATRIXDPROC) (const GLdouble *m);
typedef void ( * PFNGLMULTTRANSPOSEMATRIXFPROC) (const GLfloat *m);
typedef void ( * PFNGLMULTTRANSPOSEMATRIXDPROC) (const GLdouble *m);
typedef void ( * PFNGLSAMPLECOVERAGEPROC) (GLclampf value, GLboolean invert);
typedef void ( * PFNGLCOMPRESSEDTEXIMAGE3DPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data);
typedef void ( * PFNGLCOMPRESSEDTEXIMAGE2DPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data);
typedef void ( * PFNGLCOMPRESSEDTEXIMAGE1DPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data);
typedef void ( * PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data);
typedef void ( * PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data);
typedef void ( * PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC) (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data);
typedef void ( * PFNGLGETCOMPRESSEDTEXIMAGEPROC) (GLenum target, GLint level, void *img);
# 2066 "/usr/include/GL/gl.h" 3 4
__attribute__((visibility("default"))) void glActiveTextureARB(GLenum texture);
__attribute__((visibility("default"))) void glClientActiveTextureARB(GLenum texture);
__attribute__((visibility("default"))) void glMultiTexCoord1dARB(GLenum target, GLdouble s);
__attribute__((visibility("default"))) void glMultiTexCoord1dvARB(GLenum target, const GLdouble *v);
__attribute__((visibility("default"))) void glMultiTexCoord1fARB(GLenum target, GLfloat s);
__attribute__((visibility("default"))) void glMultiTexCoord1fvARB(GLenum target, const GLfloat *v);
__attribute__((visibility("default"))) void glMultiTexCoord1iARB(GLenum target, GLint s);
__attribute__((visibility("default"))) void glMultiTexCoord1ivARB(GLenum target, const GLint *v);
__attribute__((visibility("default"))) void glMultiTexCoord1sARB(GLenum target, GLshort s);
__attribute__((visibility("default"))) void glMultiTexCoord1svARB(GLenum target, const GLshort *v);
__attribute__((visibility("default"))) void glMultiTexCoord2dARB(GLenum target, GLdouble s, GLdouble t);
__attribute__((visibility("default"))) void glMultiTexCoord2dvARB(GLenum target, const GLdouble *v);
__attribute__((visibility("default"))) void glMultiTexCoord2fARB(GLenum target, GLfloat s, GLfloat t);
__attribute__((visibility("default"))) void glMultiTexCoord2fvARB(GLenum target, const GLfloat *v);
__attribute__((visibility("default"))) void glMultiTexCoord2iARB(GLenum target, GLint s, GLint t);
__attribute__((visibility("default"))) void glMultiTexCoord2ivARB(GLenum target, const GLint *v);
__attribute__((visibility("default"))) void glMultiTexCoord2sARB(GLenum target, GLshort s, GLshort t);
__attribute__((visibility("default"))) void glMultiTexCoord2svARB(GLenum target, const GLshort *v);
__attribute__((visibility("default"))) void glMultiTexCoord3dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r);
__attribute__((visibility("default"))) void glMultiTexCoord3dvARB(GLenum target, const GLdouble *v);
__attribute__((visibility("default"))) void glMultiTexCoord3fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r);
__attribute__((visibility("default"))) void glMultiTexCoord3fvARB(GLenum target, const GLfloat *v);
__attribute__((visibility("default"))) void glMultiTexCoord3iARB(GLenum target, GLint s, GLint t, GLint r);
__attribute__((visibility("default"))) void glMultiTexCoord3ivARB(GLenum target, const GLint *v);
__attribute__((visibility("default"))) void glMultiTexCoord3sARB(GLenum target, GLshort s, GLshort t, GLshort r);
__attribute__((visibility("default"))) void glMultiTexCoord3svARB(GLenum target, const GLshort *v);
__attribute__((visibility("default"))) void glMultiTexCoord4dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
__attribute__((visibility("default"))) void glMultiTexCoord4dvARB(GLenum target, const GLdouble *v);
__attribute__((visibility("default"))) void glMultiTexCoord4fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
__attribute__((visibility("default"))) void glMultiTexCoord4fvARB(GLenum target, const GLfloat *v);
__attribute__((visibility("default"))) void glMultiTexCoord4iARB(GLenum target, GLint s, GLint t, GLint r, GLint q);
__attribute__((visibility("default"))) void glMultiTexCoord4ivARB(GLenum target, const GLint *v);
__attribute__((visibility("default"))) void glMultiTexCoord4sARB(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
__attribute__((visibility("default"))) void glMultiTexCoord4svARB(GLenum target, const GLshort *v);

typedef void ( * PFNGLACTIVETEXTUREARBPROC) (GLenum texture);
typedef void ( * PFNGLCLIENTACTIVETEXTUREARBPROC) (GLenum texture);
typedef void ( * PFNGLMULTITEXCOORD1DARBPROC) (GLenum target, GLdouble s);
typedef void ( * PFNGLMULTITEXCOORD1DVARBPROC) (GLenum target, const GLdouble *v);
typedef void ( * PFNGLMULTITEXCOORD1FARBPROC) (GLenum target, GLfloat s);
typedef void ( * PFNGLMULTITEXCOORD1FVARBPROC) (GLenum target, const GLfloat *v);
typedef void ( * PFNGLMULTITEXCOORD1IARBPROC) (GLenum target, GLint s);
typedef void ( * PFNGLMULTITEXCOORD1IVARBPROC) (GLenum target, const GLint *v);
typedef void ( * PFNGLMULTITEXCOORD1SARBPROC) (GLenum target, GLshort s);
typedef void ( * PFNGLMULTITEXCOORD1SVARBPROC) (GLenum target, const GLshort *v);
typedef void ( * PFNGLMULTITEXCOORD2DARBPROC) (GLenum target, GLdouble s, GLdouble t);
typedef void ( * PFNGLMULTITEXCOORD2DVARBPROC) (GLenum target, const GLdouble *v);
typedef void ( * PFNGLMULTITEXCOORD2FARBPROC) (GLenum target, GLfloat s, GLfloat t);
typedef void ( * PFNGLMULTITEXCOORD2FVARBPROC) (GLenum target, const GLfloat *v);
typedef void ( * PFNGLMULTITEXCOORD2IARBPROC) (GLenum target, GLint s, GLint t);
typedef void ( * PFNGLMULTITEXCOORD2IVARBPROC) (GLenum target, const GLint *v);
typedef void ( * PFNGLMULTITEXCOORD2SARBPROC) (GLenum target, GLshort s, GLshort t);
typedef void ( * PFNGLMULTITEXCOORD2SVARBPROC) (GLenum target, const GLshort *v);
typedef void ( * PFNGLMULTITEXCOORD3DARBPROC) (GLenum target, GLdouble s, GLdouble t, GLdouble r);
typedef void ( * PFNGLMULTITEXCOORD3DVARBPROC) (GLenum target, const GLdouble *v);
typedef void ( * PFNGLMULTITEXCOORD3FARBPROC) (GLenum target, GLfloat s, GLfloat t, GLfloat r);
typedef void ( * PFNGLMULTITEXCOORD3FVARBPROC) (GLenum target, const GLfloat *v);
typedef void ( * PFNGLMULTITEXCOORD3IARBPROC) (GLenum target, GLint s, GLint t, GLint r);
typedef void ( * PFNGLMULTITEXCOORD3IVARBPROC) (GLenum target, const GLint *v);
typedef void ( * PFNGLMULTITEXCOORD3SARBPROC) (GLenum target, GLshort s, GLshort t, GLshort r);
typedef void ( * PFNGLMULTITEXCOORD3SVARBPROC) (GLenum target, const GLshort *v);
typedef void ( * PFNGLMULTITEXCOORD4DARBPROC) (GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
typedef void ( * PFNGLMULTITEXCOORD4DVARBPROC) (GLenum target, const GLdouble *v);
typedef void ( * PFNGLMULTITEXCOORD4FARBPROC) (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
typedef void ( * PFNGLMULTITEXCOORD4FVARBPROC) (GLenum target, const GLfloat *v);
typedef void ( * PFNGLMULTITEXCOORD4IARBPROC) (GLenum target, GLint s, GLint t, GLint r, GLint q);
typedef void ( * PFNGLMULTITEXCOORD4IVARBPROC) (GLenum target, const GLint *v);
typedef void ( * PFNGLMULTITEXCOORD4SARBPROC) (GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
typedef void ( * PFNGLMULTITEXCOORD4SVARBPROC) (GLenum target, const GLshort *v);
# 2150 "/usr/include/GL/gl.h" 3 4
# 1 "/usr/include/GL/glext.h" 1 3 4
# 3904 "/usr/include/GL/glext.h" 3 4
# 1 "/usr/lib/gcc/i486-linux-gnu/4.3.3/include/stddef.h" 1 3 4
# 152 "/usr/lib/gcc/i486-linux-gnu/4.3.3/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 3905 "/usr/include/GL/glext.h" 2 3 4


typedef char GLchar;




typedef ptrdiff_t GLintptr;
typedef ptrdiff_t GLsizeiptr;




typedef ptrdiff_t GLintptrARB;
typedef ptrdiff_t GLsizeiptrARB;




typedef char GLcharARB;
typedef unsigned int GLhandleARB;




typedef unsigned short GLhalfARB;



typedef unsigned short GLhalfNV;
# 3943 "/usr/include/GL/glext.h" 3 4
# 1 "/usr/include/inttypes.h" 1 3 4
# 28 "/usr/include/inttypes.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 27 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/bits/wchar.h" 1 3 4
# 28 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 49 "/usr/include/stdint.h" 3 4
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;





__extension__
typedef unsigned long long int uint64_t;






typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;



__extension__
typedef long long int int_least64_t;



typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;



__extension__
typedef unsigned long long int uint_least64_t;






typedef signed char int_fast8_t;





typedef int int_fast16_t;
typedef int int_fast32_t;
__extension__
typedef long long int int_fast64_t;



typedef unsigned char uint_fast8_t;





typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
__extension__
typedef unsigned long long int uint_fast64_t;
# 126 "/usr/include/stdint.h" 3 4
typedef int intptr_t;


typedef unsigned int uintptr_t;
# 138 "/usr/include/stdint.h" 3 4
__extension__
typedef long long int intmax_t;
__extension__
typedef unsigned long long int uintmax_t;
# 29 "/usr/include/inttypes.h" 2 3 4






typedef int __gwchar_t;
# 274 "/usr/include/inttypes.h" 3 4

# 288 "/usr/include/inttypes.h" 3 4
typedef struct
  {
    long long int quot;
    long long int rem;
  } imaxdiv_t;





extern intmax_t imaxabs (intmax_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern intmax_t strtoimax (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base) __attribute__ ((__nothrow__));


extern uintmax_t strtoumax (__const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) __attribute__ ((__nothrow__));


extern intmax_t wcstoimax (__const __gwchar_t *__restrict __nptr,
      __gwchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__));


extern uintmax_t wcstoumax (__const __gwchar_t *__restrict __nptr,
       __gwchar_t ** __restrict __endptr, int __base)
     __attribute__ ((__nothrow__));
# 442 "/usr/include/inttypes.h" 3 4

# 3944 "/usr/include/GL/glext.h" 2 3 4
# 3975 "/usr/include/GL/glext.h" 3 4
typedef int64_t GLint64EXT;
typedef uint64_t GLuint64EXT;
# 4208 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLBLENDFUNCSEPARATEPROC) (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
typedef void ( * PFNGLFOGCOORDFPROC) (GLfloat coord);
typedef void ( * PFNGLFOGCOORDFVPROC) (const GLfloat *coord);
typedef void ( * PFNGLFOGCOORDDPROC) (GLdouble coord);
typedef void ( * PFNGLFOGCOORDDVPROC) (const GLdouble *coord);
typedef void ( * PFNGLFOGCOORDPOINTERPROC) (GLenum type, GLsizei stride, const GLvoid *pointer);
typedef void ( * PFNGLMULTIDRAWARRAYSPROC) (GLenum mode, GLint *first, GLsizei *count, GLsizei primcount);
typedef void ( * PFNGLMULTIDRAWELEMENTSPROC) (GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount);
typedef void ( * PFNGLPOINTPARAMETERFPROC) (GLenum pname, GLfloat param);
typedef void ( * PFNGLPOINTPARAMETERFVPROC) (GLenum pname, const GLfloat *params);
typedef void ( * PFNGLPOINTPARAMETERIPROC) (GLenum pname, GLint param);
typedef void ( * PFNGLPOINTPARAMETERIVPROC) (GLenum pname, const GLint *params);
typedef void ( * PFNGLSECONDARYCOLOR3BPROC) (GLbyte red, GLbyte green, GLbyte blue);
typedef void ( * PFNGLSECONDARYCOLOR3BVPROC) (const GLbyte *v);
typedef void ( * PFNGLSECONDARYCOLOR3DPROC) (GLdouble red, GLdouble green, GLdouble blue);
typedef void ( * PFNGLSECONDARYCOLOR3DVPROC) (const GLdouble *v);
typedef void ( * PFNGLSECONDARYCOLOR3FPROC) (GLfloat red, GLfloat green, GLfloat blue);
typedef void ( * PFNGLSECONDARYCOLOR3FVPROC) (const GLfloat *v);
typedef void ( * PFNGLSECONDARYCOLOR3IPROC) (GLint red, GLint green, GLint blue);
typedef void ( * PFNGLSECONDARYCOLOR3IVPROC) (const GLint *v);
typedef void ( * PFNGLSECONDARYCOLOR3SPROC) (GLshort red, GLshort green, GLshort blue);
typedef void ( * PFNGLSECONDARYCOLOR3SVPROC) (const GLshort *v);
typedef void ( * PFNGLSECONDARYCOLOR3UBPROC) (GLubyte red, GLubyte green, GLubyte blue);
typedef void ( * PFNGLSECONDARYCOLOR3UBVPROC) (const GLubyte *v);
typedef void ( * PFNGLSECONDARYCOLOR3UIPROC) (GLuint red, GLuint green, GLuint blue);
typedef void ( * PFNGLSECONDARYCOLOR3UIVPROC) (const GLuint *v);
typedef void ( * PFNGLSECONDARYCOLOR3USPROC) (GLushort red, GLushort green, GLushort blue);
typedef void ( * PFNGLSECONDARYCOLOR3USVPROC) (const GLushort *v);
typedef void ( * PFNGLSECONDARYCOLORPOINTERPROC) (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
typedef void ( * PFNGLWINDOWPOS2DPROC) (GLdouble x, GLdouble y);
typedef void ( * PFNGLWINDOWPOS2DVPROC) (const GLdouble *v);
typedef void ( * PFNGLWINDOWPOS2FPROC) (GLfloat x, GLfloat y);
typedef void ( * PFNGLWINDOWPOS2FVPROC) (const GLfloat *v);
typedef void ( * PFNGLWINDOWPOS2IPROC) (GLint x, GLint y);
typedef void ( * PFNGLWINDOWPOS2IVPROC) (const GLint *v);
typedef void ( * PFNGLWINDOWPOS2SPROC) (GLshort x, GLshort y);
typedef void ( * PFNGLWINDOWPOS2SVPROC) (const GLshort *v);
typedef void ( * PFNGLWINDOWPOS3DPROC) (GLdouble x, GLdouble y, GLdouble z);
typedef void ( * PFNGLWINDOWPOS3DVPROC) (const GLdouble *v);
typedef void ( * PFNGLWINDOWPOS3FPROC) (GLfloat x, GLfloat y, GLfloat z);
typedef void ( * PFNGLWINDOWPOS3FVPROC) (const GLfloat *v);
typedef void ( * PFNGLWINDOWPOS3IPROC) (GLint x, GLint y, GLint z);
typedef void ( * PFNGLWINDOWPOS3IVPROC) (const GLint *v);
typedef void ( * PFNGLWINDOWPOS3SPROC) (GLshort x, GLshort y, GLshort z);
typedef void ( * PFNGLWINDOWPOS3SVPROC) (const GLshort *v);
# 4278 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLGENQUERIESPROC) (GLsizei n, GLuint *ids);
typedef void ( * PFNGLDELETEQUERIESPROC) (GLsizei n, const GLuint *ids);
typedef GLboolean ( * PFNGLISQUERYPROC) (GLuint id);
typedef void ( * PFNGLBEGINQUERYPROC) (GLenum target, GLuint id);
typedef void ( * PFNGLENDQUERYPROC) (GLenum target);
typedef void ( * PFNGLGETQUERYIVPROC) (GLenum target, GLenum pname, GLint *params);
typedef void ( * PFNGLGETQUERYOBJECTIVPROC) (GLuint id, GLenum pname, GLint *params);
typedef void ( * PFNGLGETQUERYOBJECTUIVPROC) (GLuint id, GLenum pname, GLuint *params);
typedef void ( * PFNGLBINDBUFFERPROC) (GLenum target, GLuint buffer);
typedef void ( * PFNGLDELETEBUFFERSPROC) (GLsizei n, const GLuint *buffers);
typedef void ( * PFNGLGENBUFFERSPROC) (GLsizei n, GLuint *buffers);
typedef GLboolean ( * PFNGLISBUFFERPROC) (GLuint buffer);
typedef void ( * PFNGLBUFFERDATAPROC) (GLenum target, GLsizeiptr size, const GLvoid *data, GLenum usage);
typedef void ( * PFNGLBUFFERSUBDATAPROC) (GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid *data);
typedef void ( * PFNGLGETBUFFERSUBDATAPROC) (GLenum target, GLintptr offset, GLsizeiptr size, GLvoid *data);
typedef GLvoid* ( * PFNGLMAPBUFFERPROC) (GLenum target, GLenum access);
typedef GLboolean ( * PFNGLUNMAPBUFFERPROC) (GLenum target);
typedef void ( * PFNGLGETBUFFERPARAMETERIVPROC) (GLenum target, GLenum pname, GLint *params);
typedef void ( * PFNGLGETBUFFERPOINTERVPROC) (GLenum target, GLenum pname, GLvoid* *params);
# 4396 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLBLENDEQUATIONSEPARATEPROC) (GLenum modeRGB, GLenum modeAlpha);
typedef void ( * PFNGLDRAWBUFFERSPROC) (GLsizei n, const GLenum *bufs);
typedef void ( * PFNGLSTENCILOPSEPARATEPROC) (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
typedef void ( * PFNGLSTENCILFUNCSEPARATEPROC) (GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask);
typedef void ( * PFNGLSTENCILMASKSEPARATEPROC) (GLenum face, GLuint mask);
typedef void ( * PFNGLATTACHSHADERPROC) (GLuint program, GLuint shader);
typedef void ( * PFNGLBINDATTRIBLOCATIONPROC) (GLuint program, GLuint index, const GLchar *name);
typedef void ( * PFNGLCOMPILESHADERPROC) (GLuint shader);
typedef GLuint ( * PFNGLCREATEPROGRAMPROC) (void);
typedef GLuint ( * PFNGLCREATESHADERPROC) (GLenum type);
typedef void ( * PFNGLDELETEPROGRAMPROC) (GLuint program);
typedef void ( * PFNGLDELETESHADERPROC) (GLuint shader);
typedef void ( * PFNGLDETACHSHADERPROC) (GLuint program, GLuint shader);
typedef void ( * PFNGLDISABLEVERTEXATTRIBARRAYPROC) (GLuint index);
typedef void ( * PFNGLENABLEVERTEXATTRIBARRAYPROC) (GLuint index);
typedef void ( * PFNGLGETACTIVEATTRIBPROC) (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
typedef void ( * PFNGLGETACTIVEUNIFORMPROC) (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
typedef void ( * PFNGLGETATTACHEDSHADERSPROC) (GLuint program, GLsizei maxCount, GLsizei *count, GLuint *obj);
typedef GLint ( * PFNGLGETATTRIBLOCATIONPROC) (GLuint program, const GLchar *name);
typedef void ( * PFNGLGETPROGRAMIVPROC) (GLuint program, GLenum pname, GLint *params);
typedef void ( * PFNGLGETPROGRAMINFOLOGPROC) (GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
typedef void ( * PFNGLGETSHADERIVPROC) (GLuint shader, GLenum pname, GLint *params);
typedef void ( * PFNGLGETSHADERINFOLOGPROC) (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
typedef void ( * PFNGLGETSHADERSOURCEPROC) (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source);
typedef GLint ( * PFNGLGETUNIFORMLOCATIONPROC) (GLuint program, const GLchar *name);
typedef void ( * PFNGLGETUNIFORMFVPROC) (GLuint program, GLint location, GLfloat *params);
typedef void ( * PFNGLGETUNIFORMIVPROC) (GLuint program, GLint location, GLint *params);
typedef void ( * PFNGLGETVERTEXATTRIBDVPROC) (GLuint index, GLenum pname, GLdouble *params);
typedef void ( * PFNGLGETVERTEXATTRIBFVPROC) (GLuint index, GLenum pname, GLfloat *params);
typedef void ( * PFNGLGETVERTEXATTRIBIVPROC) (GLuint index, GLenum pname, GLint *params);
typedef void ( * PFNGLGETVERTEXATTRIBPOINTERVPROC) (GLuint index, GLenum pname, GLvoid* *pointer);
typedef GLboolean ( * PFNGLISPROGRAMPROC) (GLuint program);
typedef GLboolean ( * PFNGLISSHADERPROC) (GLuint shader);
typedef void ( * PFNGLLINKPROGRAMPROC) (GLuint program);
typedef void ( * PFNGLSHADERSOURCEPROC) (GLuint shader, GLsizei count, const GLchar* *string, const GLint *length);
typedef void ( * PFNGLUSEPROGRAMPROC) (GLuint program);
typedef void ( * PFNGLUNIFORM1FPROC) (GLint location, GLfloat v0);
typedef void ( * PFNGLUNIFORM2FPROC) (GLint location, GLfloat v0, GLfloat v1);
typedef void ( * PFNGLUNIFORM3FPROC) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void ( * PFNGLUNIFORM4FPROC) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void ( * PFNGLUNIFORM1IPROC) (GLint location, GLint v0);
typedef void ( * PFNGLUNIFORM2IPROC) (GLint location, GLint v0, GLint v1);
typedef void ( * PFNGLUNIFORM3IPROC) (GLint location, GLint v0, GLint v1, GLint v2);
typedef void ( * PFNGLUNIFORM4IPROC) (GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void ( * PFNGLUNIFORM1FVPROC) (GLint location, GLsizei count, const GLfloat *value);
typedef void ( * PFNGLUNIFORM2FVPROC) (GLint location, GLsizei count, const GLfloat *value);
typedef void ( * PFNGLUNIFORM3FVPROC) (GLint location, GLsizei count, const GLfloat *value);
typedef void ( * PFNGLUNIFORM4FVPROC) (GLint location, GLsizei count, const GLfloat *value);
typedef void ( * PFNGLUNIFORM1IVPROC) (GLint location, GLsizei count, const GLint *value);
typedef void ( * PFNGLUNIFORM2IVPROC) (GLint location, GLsizei count, const GLint *value);
typedef void ( * PFNGLUNIFORM3IVPROC) (GLint location, GLsizei count, const GLint *value);
typedef void ( * PFNGLUNIFORM4IVPROC) (GLint location, GLsizei count, const GLint *value);
typedef void ( * PFNGLUNIFORMMATRIX2FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void ( * PFNGLUNIFORMMATRIX3FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void ( * PFNGLUNIFORMMATRIX4FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void ( * PFNGLVALIDATEPROGRAMPROC) (GLuint program);
typedef void ( * PFNGLVERTEXATTRIB1DPROC) (GLuint index, GLdouble x);
typedef void ( * PFNGLVERTEXATTRIB1DVPROC) (GLuint index, const GLdouble *v);
typedef void ( * PFNGLVERTEXATTRIB1FPROC) (GLuint index, GLfloat x);
typedef void ( * PFNGLVERTEXATTRIB1FVPROC) (GLuint index, const GLfloat *v);
typedef void ( * PFNGLVERTEXATTRIB1SPROC) (GLuint index, GLshort x);
typedef void ( * PFNGLVERTEXATTRIB1SVPROC) (GLuint index, const GLshort *v);
typedef void ( * PFNGLVERTEXATTRIB2DPROC) (GLuint index, GLdouble x, GLdouble y);
typedef void ( * PFNGLVERTEXATTRIB2DVPROC) (GLuint index, const GLdouble *v);
typedef void ( * PFNGLVERTEXATTRIB2FPROC) (GLuint index, GLfloat x, GLfloat y);
typedef void ( * PFNGLVERTEXATTRIB2FVPROC) (GLuint index, const GLfloat *v);
typedef void ( * PFNGLVERTEXATTRIB2SPROC) (GLuint index, GLshort x, GLshort y);
typedef void ( * PFNGLVERTEXATTRIB2SVPROC) (GLuint index, const GLshort *v);
typedef void ( * PFNGLVERTEXATTRIB3DPROC) (GLuint index, GLdouble x, GLdouble y, GLdouble z);
typedef void ( * PFNGLVERTEXATTRIB3DVPROC) (GLuint index, const GLdouble *v);
typedef void ( * PFNGLVERTEXATTRIB3FPROC) (GLuint index, GLfloat x, GLfloat y, GLfloat z);
typedef void ( * PFNGLVERTEXATTRIB3FVPROC) (GLuint index, const GLfloat *v);
typedef void ( * PFNGLVERTEXATTRIB3SPROC) (GLuint index, GLshort x, GLshort y, GLshort z);
typedef void ( * PFNGLVERTEXATTRIB3SVPROC) (GLuint index, const GLshort *v);
typedef void ( * PFNGLVERTEXATTRIB4NBVPROC) (GLuint index, const GLbyte *v);
typedef void ( * PFNGLVERTEXATTRIB4NIVPROC) (GLuint index, const GLint *v);
typedef void ( * PFNGLVERTEXATTRIB4NSVPROC) (GLuint index, const GLshort *v);
typedef void ( * PFNGLVERTEXATTRIB4NUBPROC) (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
typedef void ( * PFNGLVERTEXATTRIB4NUBVPROC) (GLuint index, const GLubyte *v);
typedef void ( * PFNGLVERTEXATTRIB4NUIVPROC) (GLuint index, const GLuint *v);
typedef void ( * PFNGLVERTEXATTRIB4NUSVPROC) (GLuint index, const GLushort *v);
typedef void ( * PFNGLVERTEXATTRIB4BVPROC) (GLuint index, const GLbyte *v);
typedef void ( * PFNGLVERTEXATTRIB4DPROC) (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void ( * PFNGLVERTEXATTRIB4DVPROC) (GLuint index, const GLdouble *v);
typedef void ( * PFNGLVERTEXATTRIB4FPROC) (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void ( * PFNGLVERTEXATTRIB4FVPROC) (GLuint index, const GLfloat *v);
typedef void ( * PFNGLVERTEXATTRIB4IVPROC) (GLuint index, const GLint *v);
typedef void ( * PFNGLVERTEXATTRIB4SPROC) (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
typedef void ( * PFNGLVERTEXATTRIB4SVPROC) (GLuint index, const GLshort *v);
typedef void ( * PFNGLVERTEXATTRIB4UBVPROC) (GLuint index, const GLubyte *v);
typedef void ( * PFNGLVERTEXATTRIB4UIVPROC) (GLuint index, const GLuint *v);
typedef void ( * PFNGLVERTEXATTRIB4USVPROC) (GLuint index, const GLushort *v);
typedef void ( * PFNGLVERTEXATTRIBPOINTERPROC) (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer);
# 4501 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLUNIFORMMATRIX2X3FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void ( * PFNGLUNIFORMMATRIX3X2FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void ( * PFNGLUNIFORMMATRIX2X4FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void ( * PFNGLUNIFORMMATRIX4X2FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void ( * PFNGLUNIFORMMATRIX3X4FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void ( * PFNGLUNIFORMMATRIX4X3FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
# 4575 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLCOLORMASKIPROC) (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
typedef void ( * PFNGLGETBOOLEANI_VPROC) (GLenum target, GLuint index, GLboolean *data);
typedef void ( * PFNGLGETINTEGERI_VPROC) (GLenum target, GLuint index, GLint *data);
typedef void ( * PFNGLENABLEIPROC) (GLenum target, GLuint index);
typedef void ( * PFNGLDISABLEIPROC) (GLenum target, GLuint index);
typedef GLboolean ( * PFNGLISENABLEDIPROC) (GLenum target, GLuint index);
typedef void ( * PFNGLBEGINTRANSFORMFEEDBACKPROC) (GLenum primitiveMode);
typedef void ( * PFNGLENDTRANSFORMFEEDBACKPROC) (void);
typedef void ( * PFNGLBINDBUFFERRANGEPROC) (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void ( * PFNGLBINDBUFFERBASEPROC) (GLenum target, GLuint index, GLuint buffer);
typedef void ( * PFNGLTRANSFORMFEEDBACKVARYINGSPROC) (GLuint program, GLsizei count, const GLchar* *varyings, GLenum bufferMode);
typedef void ( * PFNGLGETTRANSFORMFEEDBACKVARYINGPROC) (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
typedef void ( * PFNGLCLAMPCOLORPROC) (GLenum target, GLenum clamp);
typedef void ( * PFNGLBEGINCONDITIONALRENDERPROC) (GLuint id, GLenum mode);
typedef void ( * PFNGLENDCONDITIONALRENDERPROC) (void);
typedef void ( * PFNGLVERTEXATTRIBI1IPROC) (GLuint index, GLint x);
typedef void ( * PFNGLVERTEXATTRIBI2IPROC) (GLuint index, GLint x, GLint y);
typedef void ( * PFNGLVERTEXATTRIBI3IPROC) (GLuint index, GLint x, GLint y, GLint z);
typedef void ( * PFNGLVERTEXATTRIBI4IPROC) (GLuint index, GLint x, GLint y, GLint z, GLint w);
typedef void ( * PFNGLVERTEXATTRIBI1UIPROC) (GLuint index, GLuint x);
typedef void ( * PFNGLVERTEXATTRIBI2UIPROC) (GLuint index, GLuint x, GLuint y);
typedef void ( * PFNGLVERTEXATTRIBI3UIPROC) (GLuint index, GLuint x, GLuint y, GLuint z);
typedef void ( * PFNGLVERTEXATTRIBI4UIPROC) (GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
typedef void ( * PFNGLVERTEXATTRIBI1IVPROC) (GLuint index, const GLint *v);
typedef void ( * PFNGLVERTEXATTRIBI2IVPROC) (GLuint index, const GLint *v);
typedef void ( * PFNGLVERTEXATTRIBI3IVPROC) (GLuint index, const GLint *v);
typedef void ( * PFNGLVERTEXATTRIBI4IVPROC) (GLuint index, const GLint *v);
typedef void ( * PFNGLVERTEXATTRIBI1UIVPROC) (GLuint index, const GLuint *v);
typedef void ( * PFNGLVERTEXATTRIBI2UIVPROC) (GLuint index, const GLuint *v);
typedef void ( * PFNGLVERTEXATTRIBI3UIVPROC) (GLuint index, const GLuint *v);
typedef void ( * PFNGLVERTEXATTRIBI4UIVPROC) (GLuint index, const GLuint *v);
typedef void ( * PFNGLVERTEXATTRIBI4BVPROC) (GLuint index, const GLbyte *v);
typedef void ( * PFNGLVERTEXATTRIBI4SVPROC) (GLuint index, const GLshort *v);
typedef void ( * PFNGLVERTEXATTRIBI4UBVPROC) (GLuint index, const GLubyte *v);
typedef void ( * PFNGLVERTEXATTRIBI4USVPROC) (GLuint index, const GLushort *v);
typedef void ( * PFNGLVERTEXATTRIBIPOINTERPROC) (GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
typedef void ( * PFNGLGETVERTEXATTRIBIIVPROC) (GLuint index, GLenum pname, GLint *params);
typedef void ( * PFNGLGETVERTEXATTRIBIUIVPROC) (GLuint index, GLenum pname, GLuint *params);
typedef void ( * PFNGLGETUNIFORMUIVPROC) (GLuint program, GLint location, GLuint *params);
typedef void ( * PFNGLBINDFRAGDATALOCATIONPROC) (GLuint program, GLuint color, const GLchar *name);
typedef GLint ( * PFNGLGETFRAGDATALOCATIONPROC) (GLuint program, const GLchar *name);
typedef void ( * PFNGLUNIFORM1UIPROC) (GLint location, GLuint v0);
typedef void ( * PFNGLUNIFORM2UIPROC) (GLint location, GLuint v0, GLuint v1);
typedef void ( * PFNGLUNIFORM3UIPROC) (GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void ( * PFNGLUNIFORM4UIPROC) (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void ( * PFNGLUNIFORM1UIVPROC) (GLint location, GLsizei count, const GLuint *value);
typedef void ( * PFNGLUNIFORM2UIVPROC) (GLint location, GLsizei count, const GLuint *value);
typedef void ( * PFNGLUNIFORM3UIVPROC) (GLint location, GLsizei count, const GLuint *value);
typedef void ( * PFNGLUNIFORM4UIVPROC) (GLint location, GLsizei count, const GLuint *value);
typedef void ( * PFNGLTEXPARAMETERIIVPROC) (GLenum target, GLenum pname, const GLint *params);
typedef void ( * PFNGLTEXPARAMETERIUIVPROC) (GLenum target, GLenum pname, const GLuint *params);
typedef void ( * PFNGLGETTEXPARAMETERIIVPROC) (GLenum target, GLenum pname, GLint *params);
typedef void ( * PFNGLGETTEXPARAMETERIUIVPROC) (GLenum target, GLenum pname, GLuint *params);
typedef void ( * PFNGLCLEARBUFFERIVPROC) (GLenum buffer, GLint drawbuffer, const GLint *value);
typedef void ( * PFNGLCLEARBUFFERUIVPROC) (GLenum buffer, GLint drawbuffer, const GLuint *value);
typedef void ( * PFNGLCLEARBUFFERFVPROC) (GLenum buffer, GLint drawbuffer, const GLfloat *value);
typedef void ( * PFNGLCLEARBUFFERFIPROC) (GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
typedef const GLubyte * ( * PFNGLGETSTRINGIPROC) (GLenum name, GLuint index);
# 4717 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLLOADTRANSPOSEMATRIXFARBPROC) (const GLfloat *m);
typedef void ( * PFNGLLOADTRANSPOSEMATRIXDARBPROC) (const GLdouble *m);
typedef void ( * PFNGLMULTTRANSPOSEMATRIXFARBPROC) (const GLfloat *m);
typedef void ( * PFNGLMULTTRANSPOSEMATRIXDARBPROC) (const GLdouble *m);







typedef void ( * PFNGLSAMPLECOVERAGEARBPROC) (GLclampf value, GLboolean invert);
# 4750 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLCOMPRESSEDTEXIMAGE3DARBPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data);
typedef void ( * PFNGLCOMPRESSEDTEXIMAGE2DARBPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data);
typedef void ( * PFNGLCOMPRESSEDTEXIMAGE1DARBPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data);
typedef void ( * PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data);
typedef void ( * PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data);
typedef void ( * PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC) (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data);
typedef void ( * PFNGLGETCOMPRESSEDTEXIMAGEARBPROC) (GLenum target, GLint level, GLvoid *img);
# 4769 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLPOINTPARAMETERFARBPROC) (GLenum pname, GLfloat param);
typedef void ( * PFNGLPOINTPARAMETERFVARBPROC) (GLenum pname, const GLfloat *params);
# 4787 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLWEIGHTBVARBPROC) (GLint size, const GLbyte *weights);
typedef void ( * PFNGLWEIGHTSVARBPROC) (GLint size, const GLshort *weights);
typedef void ( * PFNGLWEIGHTIVARBPROC) (GLint size, const GLint *weights);
typedef void ( * PFNGLWEIGHTFVARBPROC) (GLint size, const GLfloat *weights);
typedef void ( * PFNGLWEIGHTDVARBPROC) (GLint size, const GLdouble *weights);
typedef void ( * PFNGLWEIGHTUBVARBPROC) (GLint size, const GLubyte *weights);
typedef void ( * PFNGLWEIGHTUSVARBPROC) (GLint size, const GLushort *weights);
typedef void ( * PFNGLWEIGHTUIVARBPROC) (GLint size, const GLuint *weights);
typedef void ( * PFNGLWEIGHTPOINTERARBPROC) (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
typedef void ( * PFNGLVERTEXBLENDARBPROC) (GLint count);
# 4808 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLCURRENTPALETTEMATRIXARBPROC) (GLint index);
typedef void ( * PFNGLMATRIXINDEXUBVARBPROC) (GLint size, const GLubyte *indices);
typedef void ( * PFNGLMATRIXINDEXUSVARBPROC) (GLint size, const GLushort *indices);
typedef void ( * PFNGLMATRIXINDEXUIVARBPROC) (GLint size, const GLuint *indices);
typedef void ( * PFNGLMATRIXINDEXPOINTERARBPROC) (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
# 4863 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLWINDOWPOS2DARBPROC) (GLdouble x, GLdouble y);
typedef void ( * PFNGLWINDOWPOS2DVARBPROC) (const GLdouble *v);
typedef void ( * PFNGLWINDOWPOS2FARBPROC) (GLfloat x, GLfloat y);
typedef void ( * PFNGLWINDOWPOS2FVARBPROC) (const GLfloat *v);
typedef void ( * PFNGLWINDOWPOS2IARBPROC) (GLint x, GLint y);
typedef void ( * PFNGLWINDOWPOS2IVARBPROC) (const GLint *v);
typedef void ( * PFNGLWINDOWPOS2SARBPROC) (GLshort x, GLshort y);
typedef void ( * PFNGLWINDOWPOS2SVARBPROC) (const GLshort *v);
typedef void ( * PFNGLWINDOWPOS3DARBPROC) (GLdouble x, GLdouble y, GLdouble z);
typedef void ( * PFNGLWINDOWPOS3DVARBPROC) (const GLdouble *v);
typedef void ( * PFNGLWINDOWPOS3FARBPROC) (GLfloat x, GLfloat y, GLfloat z);
typedef void ( * PFNGLWINDOWPOS3FVARBPROC) (const GLfloat *v);
typedef void ( * PFNGLWINDOWPOS3IARBPROC) (GLint x, GLint y, GLint z);
typedef void ( * PFNGLWINDOWPOS3IVARBPROC) (const GLint *v);
typedef void ( * PFNGLWINDOWPOS3SARBPROC) (GLshort x, GLshort y, GLshort z);
typedef void ( * PFNGLWINDOWPOS3SVARBPROC) (const GLshort *v);
# 4947 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLVERTEXATTRIB1DARBPROC) (GLuint index, GLdouble x);
typedef void ( * PFNGLVERTEXATTRIB1DVARBPROC) (GLuint index, const GLdouble *v);
typedef void ( * PFNGLVERTEXATTRIB1FARBPROC) (GLuint index, GLfloat x);
typedef void ( * PFNGLVERTEXATTRIB1FVARBPROC) (GLuint index, const GLfloat *v);
typedef void ( * PFNGLVERTEXATTRIB1SARBPROC) (GLuint index, GLshort x);
typedef void ( * PFNGLVERTEXATTRIB1SVARBPROC) (GLuint index, const GLshort *v);
typedef void ( * PFNGLVERTEXATTRIB2DARBPROC) (GLuint index, GLdouble x, GLdouble y);
typedef void ( * PFNGLVERTEXATTRIB2DVARBPROC) (GLuint index, const GLdouble *v);
typedef void ( * PFNGLVERTEXATTRIB2FARBPROC) (GLuint index, GLfloat x, GLfloat y);
typedef void ( * PFNGLVERTEXATTRIB2FVARBPROC) (GLuint index, const GLfloat *v);
typedef void ( * PFNGLVERTEXATTRIB2SARBPROC) (GLuint index, GLshort x, GLshort y);
typedef void ( * PFNGLVERTEXATTRIB2SVARBPROC) (GLuint index, const GLshort *v);
typedef void ( * PFNGLVERTEXATTRIB3DARBPROC) (GLuint index, GLdouble x, GLdouble y, GLdouble z);
typedef void ( * PFNGLVERTEXATTRIB3DVARBPROC) (GLuint index, const GLdouble *v);
typedef void ( * PFNGLVERTEXATTRIB3FARBPROC) (GLuint index, GLfloat x, GLfloat y, GLfloat z);
typedef void ( * PFNGLVERTEXATTRIB3FVARBPROC) (GLuint index, const GLfloat *v);
typedef void ( * PFNGLVERTEXATTRIB3SARBPROC) (GLuint index, GLshort x, GLshort y, GLshort z);
typedef void ( * PFNGLVERTEXATTRIB3SVARBPROC) (GLuint index, const GLshort *v);
typedef void ( * PFNGLVERTEXATTRIB4NBVARBPROC) (GLuint index, const GLbyte *v);
typedef void ( * PFNGLVERTEXATTRIB4NIVARBPROC) (GLuint index, const GLint *v);
typedef void ( * PFNGLVERTEXATTRIB4NSVARBPROC) (GLuint index, const GLshort *v);
typedef void ( * PFNGLVERTEXATTRIB4NUBARBPROC) (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
typedef void ( * PFNGLVERTEXATTRIB4NUBVARBPROC) (GLuint index, const GLubyte *v);
typedef void ( * PFNGLVERTEXATTRIB4NUIVARBPROC) (GLuint index, const GLuint *v);
typedef void ( * PFNGLVERTEXATTRIB4NUSVARBPROC) (GLuint index, const GLushort *v);
typedef void ( * PFNGLVERTEXATTRIB4BVARBPROC) (GLuint index, const GLbyte *v);
typedef void ( * PFNGLVERTEXATTRIB4DARBPROC) (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void ( * PFNGLVERTEXATTRIB4DVARBPROC) (GLuint index, const GLdouble *v);
typedef void ( * PFNGLVERTEXATTRIB4FARBPROC) (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void ( * PFNGLVERTEXATTRIB4FVARBPROC) (GLuint index, const GLfloat *v);
typedef void ( * PFNGLVERTEXATTRIB4IVARBPROC) (GLuint index, const GLint *v);
typedef void ( * PFNGLVERTEXATTRIB4SARBPROC) (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
typedef void ( * PFNGLVERTEXATTRIB4SVARBPROC) (GLuint index, const GLshort *v);
typedef void ( * PFNGLVERTEXATTRIB4UBVARBPROC) (GLuint index, const GLubyte *v);
typedef void ( * PFNGLVERTEXATTRIB4UIVARBPROC) (GLuint index, const GLuint *v);
typedef void ( * PFNGLVERTEXATTRIB4USVARBPROC) (GLuint index, const GLushort *v);
typedef void ( * PFNGLVERTEXATTRIBPOINTERARBPROC) (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer);
typedef void ( * PFNGLENABLEVERTEXATTRIBARRAYARBPROC) (GLuint index);
typedef void ( * PFNGLDISABLEVERTEXATTRIBARRAYARBPROC) (GLuint index);
typedef void ( * PFNGLPROGRAMSTRINGARBPROC) (GLenum target, GLenum format, GLsizei len, const GLvoid *string);
typedef void ( * PFNGLBINDPROGRAMARBPROC) (GLenum target, GLuint program);
typedef void ( * PFNGLDELETEPROGRAMSARBPROC) (GLsizei n, const GLuint *programs);
typedef void ( * PFNGLGENPROGRAMSARBPROC) (GLsizei n, GLuint *programs);
typedef void ( * PFNGLPROGRAMENVPARAMETER4DARBPROC) (GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void ( * PFNGLPROGRAMENVPARAMETER4DVARBPROC) (GLenum target, GLuint index, const GLdouble *params);
typedef void ( * PFNGLPROGRAMENVPARAMETER4FARBPROC) (GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void ( * PFNGLPROGRAMENVPARAMETER4FVARBPROC) (GLenum target, GLuint index, const GLfloat *params);
typedef void ( * PFNGLPROGRAMLOCALPARAMETER4DARBPROC) (GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void ( * PFNGLPROGRAMLOCALPARAMETER4DVARBPROC) (GLenum target, GLuint index, const GLdouble *params);
typedef void ( * PFNGLPROGRAMLOCALPARAMETER4FARBPROC) (GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void ( * PFNGLPROGRAMLOCALPARAMETER4FVARBPROC) (GLenum target, GLuint index, const GLfloat *params);
typedef void ( * PFNGLGETPROGRAMENVPARAMETERDVARBPROC) (GLenum target, GLuint index, GLdouble *params);
typedef void ( * PFNGLGETPROGRAMENVPARAMETERFVARBPROC) (GLenum target, GLuint index, GLfloat *params);
typedef void ( * PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC) (GLenum target, GLuint index, GLdouble *params);
typedef void ( * PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC) (GLenum target, GLuint index, GLfloat *params);
typedef void ( * PFNGLGETPROGRAMIVARBPROC) (GLenum target, GLenum pname, GLint *params);
typedef void ( * PFNGLGETPROGRAMSTRINGARBPROC) (GLenum target, GLenum pname, GLvoid *string);
typedef void ( * PFNGLGETVERTEXATTRIBDVARBPROC) (GLuint index, GLenum pname, GLdouble *params);
typedef void ( * PFNGLGETVERTEXATTRIBFVARBPROC) (GLuint index, GLenum pname, GLfloat *params);
typedef void ( * PFNGLGETVERTEXATTRIBIVARBPROC) (GLuint index, GLenum pname, GLint *params);
typedef void ( * PFNGLGETVERTEXATTRIBPOINTERVARBPROC) (GLuint index, GLenum pname, GLvoid* *pointer);
typedef GLboolean ( * PFNGLISPROGRAMARBPROC) (GLuint program);
# 5031 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLBINDBUFFERARBPROC) (GLenum target, GLuint buffer);
typedef void ( * PFNGLDELETEBUFFERSARBPROC) (GLsizei n, const GLuint *buffers);
typedef void ( * PFNGLGENBUFFERSARBPROC) (GLsizei n, GLuint *buffers);
typedef GLboolean ( * PFNGLISBUFFERARBPROC) (GLuint buffer);
typedef void ( * PFNGLBUFFERDATAARBPROC) (GLenum target, GLsizeiptrARB size, const GLvoid *data, GLenum usage);
typedef void ( * PFNGLBUFFERSUBDATAARBPROC) (GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid *data);
typedef void ( * PFNGLGETBUFFERSUBDATAARBPROC) (GLenum target, GLintptrARB offset, GLsizeiptrARB size, GLvoid *data);
typedef GLvoid* ( * PFNGLMAPBUFFERARBPROC) (GLenum target, GLenum access);
typedef GLboolean ( * PFNGLUNMAPBUFFERARBPROC) (GLenum target);
typedef void ( * PFNGLGETBUFFERPARAMETERIVARBPROC) (GLenum target, GLenum pname, GLint *params);
typedef void ( * PFNGLGETBUFFERPOINTERVARBPROC) (GLenum target, GLenum pname, GLvoid* *params);
# 5056 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLGENQUERIESARBPROC) (GLsizei n, GLuint *ids);
typedef void ( * PFNGLDELETEQUERIESARBPROC) (GLsizei n, const GLuint *ids);
typedef GLboolean ( * PFNGLISQUERYARBPROC) (GLuint id);
typedef void ( * PFNGLBEGINQUERYARBPROC) (GLenum target, GLuint id);
typedef void ( * PFNGLENDQUERYARBPROC) (GLenum target);
typedef void ( * PFNGLGETQUERYIVARBPROC) (GLenum target, GLenum pname, GLint *params);
typedef void ( * PFNGLGETQUERYOBJECTIVARBPROC) (GLuint id, GLenum pname, GLint *params);
typedef void ( * PFNGLGETQUERYOBJECTUIVARBPROC) (GLuint id, GLenum pname, GLuint *params);
# 5109 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLDELETEOBJECTARBPROC) (GLhandleARB obj);
typedef GLhandleARB ( * PFNGLGETHANDLEARBPROC) (GLenum pname);
typedef void ( * PFNGLDETACHOBJECTARBPROC) (GLhandleARB containerObj, GLhandleARB attachedObj);
typedef GLhandleARB ( * PFNGLCREATESHADEROBJECTARBPROC) (GLenum shaderType);
typedef void ( * PFNGLSHADERSOURCEARBPROC) (GLhandleARB shaderObj, GLsizei count, const GLcharARB* *string, const GLint *length);
typedef void ( * PFNGLCOMPILESHADERARBPROC) (GLhandleARB shaderObj);
typedef GLhandleARB ( * PFNGLCREATEPROGRAMOBJECTARBPROC) (void);
typedef void ( * PFNGLATTACHOBJECTARBPROC) (GLhandleARB containerObj, GLhandleARB obj);
typedef void ( * PFNGLLINKPROGRAMARBPROC) (GLhandleARB programObj);
typedef void ( * PFNGLUSEPROGRAMOBJECTARBPROC) (GLhandleARB programObj);
typedef void ( * PFNGLVALIDATEPROGRAMARBPROC) (GLhandleARB programObj);
typedef void ( * PFNGLUNIFORM1FARBPROC) (GLint location, GLfloat v0);
typedef void ( * PFNGLUNIFORM2FARBPROC) (GLint location, GLfloat v0, GLfloat v1);
typedef void ( * PFNGLUNIFORM3FARBPROC) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void ( * PFNGLUNIFORM4FARBPROC) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void ( * PFNGLUNIFORM1IARBPROC) (GLint location, GLint v0);
typedef void ( * PFNGLUNIFORM2IARBPROC) (GLint location, GLint v0, GLint v1);
typedef void ( * PFNGLUNIFORM3IARBPROC) (GLint location, GLint v0, GLint v1, GLint v2);
typedef void ( * PFNGLUNIFORM4IARBPROC) (GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void ( * PFNGLUNIFORM1FVARBPROC) (GLint location, GLsizei count, const GLfloat *value);
typedef void ( * PFNGLUNIFORM2FVARBPROC) (GLint location, GLsizei count, const GLfloat *value);
typedef void ( * PFNGLUNIFORM3FVARBPROC) (GLint location, GLsizei count, const GLfloat *value);
typedef void ( * PFNGLUNIFORM4FVARBPROC) (GLint location, GLsizei count, const GLfloat *value);
typedef void ( * PFNGLUNIFORM1IVARBPROC) (GLint location, GLsizei count, const GLint *value);
typedef void ( * PFNGLUNIFORM2IVARBPROC) (GLint location, GLsizei count, const GLint *value);
typedef void ( * PFNGLUNIFORM3IVARBPROC) (GLint location, GLsizei count, const GLint *value);
typedef void ( * PFNGLUNIFORM4IVARBPROC) (GLint location, GLsizei count, const GLint *value);
typedef void ( * PFNGLUNIFORMMATRIX2FVARBPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void ( * PFNGLUNIFORMMATRIX3FVARBPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void ( * PFNGLUNIFORMMATRIX4FVARBPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void ( * PFNGLGETOBJECTPARAMETERFVARBPROC) (GLhandleARB obj, GLenum pname, GLfloat *params);
typedef void ( * PFNGLGETOBJECTPARAMETERIVARBPROC) (GLhandleARB obj, GLenum pname, GLint *params);
typedef void ( * PFNGLGETINFOLOGARBPROC) (GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *infoLog);
typedef void ( * PFNGLGETATTACHEDOBJECTSARBPROC) (GLhandleARB containerObj, GLsizei maxCount, GLsizei *count, GLhandleARB *obj);
typedef GLint ( * PFNGLGETUNIFORMLOCATIONARBPROC) (GLhandleARB programObj, const GLcharARB *name);
typedef void ( * PFNGLGETACTIVEUNIFORMARBPROC) (GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name);
typedef void ( * PFNGLGETUNIFORMFVARBPROC) (GLhandleARB programObj, GLint location, GLfloat *params);
typedef void ( * PFNGLGETUNIFORMIVARBPROC) (GLhandleARB programObj, GLint location, GLint *params);
typedef void ( * PFNGLGETSHADERSOURCEARBPROC) (GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *source);
# 5157 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLBINDATTRIBLOCATIONARBPROC) (GLhandleARB programObj, GLuint index, const GLcharARB *name);
typedef void ( * PFNGLGETACTIVEATTRIBARBPROC) (GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name);
typedef GLint ( * PFNGLGETATTRIBLOCATIONARBPROC) (GLhandleARB programObj, const GLcharARB *name);
# 5187 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLDRAWBUFFERSARBPROC) (GLsizei n, const GLenum *bufs);
# 5199 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLCLAMPCOLORARBPROC) (GLenum target, GLenum clamp);
# 5224 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLDRAWARRAYSINSTANCEDARBPROC) (GLenum mode, GLint first, GLsizei count, GLsizei primcount);
typedef void ( * PFNGLDRAWELEMENTSINSTANCEDARBPROC) (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount);
# 5252 "/usr/include/GL/glext.h" 3 4
typedef GLboolean ( * PFNGLISRENDERBUFFERPROC) (GLuint renderbuffer);
typedef void ( * PFNGLBINDRENDERBUFFERPROC) (GLenum target, GLuint renderbuffer);
typedef void ( * PFNGLDELETERENDERBUFFERSPROC) (GLsizei n, const GLuint *renderbuffers);
typedef void ( * PFNGLGENRENDERBUFFERSPROC) (GLsizei n, GLuint *renderbuffers);
typedef void ( * PFNGLRENDERBUFFERSTORAGEPROC) (GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
typedef void ( * PFNGLGETRENDERBUFFERPARAMETERIVPROC) (GLenum target, GLenum pname, GLint *params);
typedef GLboolean ( * PFNGLISFRAMEBUFFERPROC) (GLuint framebuffer);
typedef void ( * PFNGLBINDFRAMEBUFFERPROC) (GLenum target, GLuint framebuffer);
typedef void ( * PFNGLDELETEFRAMEBUFFERSPROC) (GLsizei n, const GLuint *framebuffers);
typedef void ( * PFNGLGENFRAMEBUFFERSPROC) (GLsizei n, GLuint *framebuffers);
typedef GLenum ( * PFNGLCHECKFRAMEBUFFERSTATUSPROC) (GLenum target);
typedef void ( * PFNGLFRAMEBUFFERTEXTURE1DPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void ( * PFNGLFRAMEBUFFERTEXTURE2DPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void ( * PFNGLFRAMEBUFFERTEXTURE3DPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
typedef void ( * PFNGLFRAMEBUFFERRENDERBUFFERPROC) (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef void ( * PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC) (GLenum target, GLenum attachment, GLenum pname, GLint *params);
typedef void ( * PFNGLGENERATEMIPMAPPROC) (GLenum target);
typedef void ( * PFNGLBLITFRAMEBUFFERPROC) (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef void ( * PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void ( * PFNGLFRAMEBUFFERTEXTURELAYERPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
# 5286 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLPROGRAMPARAMETERIARBPROC) (GLuint program, GLenum pname, GLint value);
typedef void ( * PFNGLFRAMEBUFFERTEXTUREARBPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level);
typedef void ( * PFNGLFRAMEBUFFERTEXTURELAYERARBPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
typedef void ( * PFNGLFRAMEBUFFERTEXTUREFACEARBPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face);
# 5301 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLVERTEXATTRIBDIVISORPROC) (GLuint index, GLuint divisor);
# 5310 "/usr/include/GL/glext.h" 3 4
typedef GLvoid* ( * PFNGLMAPBUFFERRANGEPROC) (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
typedef void ( * PFNGLFLUSHMAPPEDBUFFERRANGEPROC) (GLenum target, GLintptr offset, GLsizeiptr length);







typedef void ( * PFNGLTEXBUFFERARBPROC) (GLenum target, GLenum internalformat, GLuint buffer);
# 5338 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLBINDVERTEXARRAYPROC) (GLuint array);
typedef void ( * PFNGLDELETEVERTEXARRAYSPROC) (GLsizei n, const GLuint *arrays);
typedef void ( * PFNGLGENVERTEXARRAYSPROC) (GLsizei n, GLuint *arrays);
typedef GLboolean ( * PFNGLISVERTEXARRAYPROC) (GLuint array);
# 5353 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLBLENDCOLOREXTPROC) (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);







typedef void ( * PFNGLPOLYGONOFFSETEXTPROC) (GLfloat factor, GLfloat bias);
# 5374 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLTEXIMAGE3DEXTPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
typedef void ( * PFNGLTEXSUBIMAGE3DEXTPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels);
# 5384 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLGETTEXFILTERFUNCSGISPROC) (GLenum target, GLenum filter, GLfloat *weights);
typedef void ( * PFNGLTEXFILTERFUNCSGISPROC) (GLenum target, GLenum filter, GLsizei n, const GLfloat *weights);
# 5394 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLTEXSUBIMAGE1DEXTPROC) (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels);
typedef void ( * PFNGLTEXSUBIMAGE2DEXTPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels);
# 5407 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLCOPYTEXIMAGE1DEXTPROC) (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
typedef void ( * PFNGLCOPYTEXIMAGE2DEXTPROC) (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
typedef void ( * PFNGLCOPYTEXSUBIMAGE1DEXTPROC) (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
typedef void ( * PFNGLCOPYTEXSUBIMAGE2DEXTPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void ( * PFNGLCOPYTEXSUBIMAGE3DEXTPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
# 5428 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLGETHISTOGRAMEXTPROC) (GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values);
typedef void ( * PFNGLGETHISTOGRAMPARAMETERFVEXTPROC) (GLenum target, GLenum pname, GLfloat *params);
typedef void ( * PFNGLGETHISTOGRAMPARAMETERIVEXTPROC) (GLenum target, GLenum pname, GLint *params);
typedef void ( * PFNGLGETMINMAXEXTPROC) (GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values);
typedef void ( * PFNGLGETMINMAXPARAMETERFVEXTPROC) (GLenum target, GLenum pname, GLfloat *params);
typedef void ( * PFNGLGETMINMAXPARAMETERIVEXTPROC) (GLenum target, GLenum pname, GLint *params);
typedef void ( * PFNGLHISTOGRAMEXTPROC) (GLenum target, GLsizei width, GLenum internalformat, GLboolean sink);
typedef void ( * PFNGLMINMAXEXTPROC) (GLenum target, GLenum internalformat, GLboolean sink);
typedef void ( * PFNGLRESETHISTOGRAMEXTPROC) (GLenum target);
typedef void ( * PFNGLRESETMINMAXEXTPROC) (GLenum target);
# 5457 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLCONVOLUTIONFILTER1DEXTPROC) (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *image);
typedef void ( * PFNGLCONVOLUTIONFILTER2DEXTPROC) (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *image);
typedef void ( * PFNGLCONVOLUTIONPARAMETERFEXTPROC) (GLenum target, GLenum pname, GLfloat params);
typedef void ( * PFNGLCONVOLUTIONPARAMETERFVEXTPROC) (GLenum target, GLenum pname, const GLfloat *params);
typedef void ( * PFNGLCONVOLUTIONPARAMETERIEXTPROC) (GLenum target, GLenum pname, GLint params);
typedef void ( * PFNGLCONVOLUTIONPARAMETERIVEXTPROC) (GLenum target, GLenum pname, const GLint *params);
typedef void ( * PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC) (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
typedef void ( * PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC) (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void ( * PFNGLGETCONVOLUTIONFILTEREXTPROC) (GLenum target, GLenum format, GLenum type, GLvoid *image);
typedef void ( * PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC) (GLenum target, GLenum pname, GLfloat *params);
typedef void ( * PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC) (GLenum target, GLenum pname, GLint *params);
typedef void ( * PFNGLGETSEPARABLEFILTEREXTPROC) (GLenum target, GLenum format, GLenum type, GLvoid *row, GLvoid *column, GLvoid *span);
typedef void ( * PFNGLSEPARABLEFILTER2DEXTPROC) (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *row, const GLvoid *column);
# 5487 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLCOLORTABLESGIPROC) (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table);
typedef void ( * PFNGLCOLORTABLEPARAMETERFVSGIPROC) (GLenum target, GLenum pname, const GLfloat *params);
typedef void ( * PFNGLCOLORTABLEPARAMETERIVSGIPROC) (GLenum target, GLenum pname, const GLint *params);
typedef void ( * PFNGLCOPYCOLORTABLESGIPROC) (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
typedef void ( * PFNGLGETCOLORTABLESGIPROC) (GLenum target, GLenum format, GLenum type, GLvoid *table);
typedef void ( * PFNGLGETCOLORTABLEPARAMETERFVSGIPROC) (GLenum target, GLenum pname, GLfloat *params);
typedef void ( * PFNGLGETCOLORTABLEPARAMETERIVSGIPROC) (GLenum target, GLenum pname, GLint *params);







typedef void ( * PFNGLPIXELTEXGENSGIXPROC) (GLenum mode);
# 5514 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLPIXELTEXGENPARAMETERISGISPROC) (GLenum pname, GLint param);
typedef void ( * PFNGLPIXELTEXGENPARAMETERIVSGISPROC) (GLenum pname, const GLint *params);
typedef void ( * PFNGLPIXELTEXGENPARAMETERFSGISPROC) (GLenum pname, GLfloat param);
typedef void ( * PFNGLPIXELTEXGENPARAMETERFVSGISPROC) (GLenum pname, const GLfloat *params);
typedef void ( * PFNGLGETPIXELTEXGENPARAMETERIVSGISPROC) (GLenum pname, GLint *params);
typedef void ( * PFNGLGETPIXELTEXGENPARAMETERFVSGISPROC) (GLenum pname, GLfloat *params);
# 5528 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLTEXIMAGE4DSGISPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
typedef void ( * PFNGLTEXSUBIMAGE4DSGISPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint woffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLenum format, GLenum type, const GLvoid *pixels);
# 5550 "/usr/include/GL/glext.h" 3 4
typedef GLboolean ( * PFNGLARETEXTURESRESIDENTEXTPROC) (GLsizei n, const GLuint *textures, GLboolean *residences);
typedef void ( * PFNGLBINDTEXTUREEXTPROC) (GLenum target, GLuint texture);
typedef void ( * PFNGLDELETETEXTURESEXTPROC) (GLsizei n, const GLuint *textures);
typedef void ( * PFNGLGENTEXTURESEXTPROC) (GLsizei n, GLuint *textures);
typedef GLboolean ( * PFNGLISTEXTUREEXTPROC) (GLuint texture);
typedef void ( * PFNGLPRIORITIZETEXTURESEXTPROC) (GLsizei n, const GLuint *textures, const GLclampf *priorities);
# 5564 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLDETAILTEXFUNCSGISPROC) (GLenum target, GLsizei n, const GLfloat *points);
typedef void ( * PFNGLGETDETAILTEXFUNCSGISPROC) (GLenum target, GLfloat *points);
# 5574 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLSHARPENTEXFUNCSGISPROC) (GLenum target, GLsizei n, const GLfloat *points);
typedef void ( * PFNGLGETSHARPENTEXFUNCSGISPROC) (GLenum target, GLfloat *points);
# 5592 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLSAMPLEMASKSGISPROC) (GLclampf value, GLboolean invert);
typedef void ( * PFNGLSAMPLEPATTERNSGISPROC) (GLenum pattern);
# 5613 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLARRAYELEMENTEXTPROC) (GLint i);
typedef void ( * PFNGLCOLORPOINTEREXTPROC) (GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer);
typedef void ( * PFNGLDRAWARRAYSEXTPROC) (GLenum mode, GLint first, GLsizei count);
typedef void ( * PFNGLEDGEFLAGPOINTEREXTPROC) (GLsizei stride, GLsizei count, const GLboolean *pointer);
typedef void ( * PFNGLGETPOINTERVEXTPROC) (GLenum pname, GLvoid* *params);
typedef void ( * PFNGLINDEXPOINTEREXTPROC) (GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer);
typedef void ( * PFNGLNORMALPOINTEREXTPROC) (GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer);
typedef void ( * PFNGLTEXCOORDPOINTEREXTPROC) (GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer);
typedef void ( * PFNGLVERTEXPOINTEREXTPROC) (GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer);
# 5653 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLBLENDEQUATIONEXTPROC) (GLenum mode);
# 5684 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLSPRITEPARAMETERFSGIXPROC) (GLenum pname, GLfloat param);
typedef void ( * PFNGLSPRITEPARAMETERFVSGIXPROC) (GLenum pname, const GLfloat *params);
typedef void ( * PFNGLSPRITEPARAMETERISGIXPROC) (GLenum pname, GLint param);
typedef void ( * PFNGLSPRITEPARAMETERIVSGIXPROC) (GLenum pname, const GLint *params);
# 5700 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLPOINTPARAMETERFEXTPROC) (GLenum pname, GLfloat param);
typedef void ( * PFNGLPOINTPARAMETERFVEXTPROC) (GLenum pname, const GLfloat *params);
# 5710 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLPOINTPARAMETERFSGISPROC) (GLenum pname, GLfloat param);
typedef void ( * PFNGLPOINTPARAMETERFVSGISPROC) (GLenum pname, const GLfloat *params);
# 5724 "/usr/include/GL/glext.h" 3 4
typedef GLint ( * PFNGLGETINSTRUMENTSSGIXPROC) (void);
typedef void ( * PFNGLINSTRUMENTSBUFFERSGIXPROC) (GLsizei size, GLint *buffer);
typedef GLint ( * PFNGLPOLLINSTRUMENTSSGIXPROC) (GLint *marker_p);
typedef void ( * PFNGLREADINSTRUMENTSSGIXPROC) (GLint marker);
typedef void ( * PFNGLSTARTINSTRUMENTSSGIXPROC) (void);
typedef void ( * PFNGLSTOPINSTRUMENTSSGIXPROC) (GLint marker);
# 5741 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLFRAMEZOOMSGIXPROC) (GLint factor);







typedef void ( * PFNGLTAGSAMPLEBUFFERSGIXPROC) (void);
# 5760 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLDEFORMATIONMAP3DSGIXPROC) (GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, GLdouble w1, GLdouble w2, GLint wstride, GLint worder, const GLdouble *points);
typedef void ( * PFNGLDEFORMATIONMAP3FSGIXPROC) (GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, GLfloat w1, GLfloat w2, GLint wstride, GLint worder, const GLfloat *points);
typedef void ( * PFNGLDEFORMSGIXPROC) (GLbitfield mask);
typedef void ( * PFNGLLOADIDENTITYDEFORMATIONMAPSGIXPROC) (GLbitfield mask);







typedef void ( * PFNGLREFERENCEPLANESGIXPROC) (const GLdouble *equation);







typedef void ( * PFNGLFLUSHRASTERSGIXPROC) (void);
# 5792 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLFOGFUNCSGISPROC) (GLsizei n, const GLfloat *points);
typedef void ( * PFNGLGETFOGFUNCSGISPROC) (GLfloat *points);
# 5810 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLIMAGETRANSFORMPARAMETERIHPPROC) (GLenum target, GLenum pname, GLint param);
typedef void ( * PFNGLIMAGETRANSFORMPARAMETERFHPPROC) (GLenum target, GLenum pname, GLfloat param);
typedef void ( * PFNGLIMAGETRANSFORMPARAMETERIVHPPROC) (GLenum target, GLenum pname, const GLint *params);
typedef void ( * PFNGLIMAGETRANSFORMPARAMETERFVHPPROC) (GLenum target, GLenum pname, const GLfloat *params);
typedef void ( * PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC) (GLenum target, GLenum pname, GLint *params);
typedef void ( * PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC) (GLenum target, GLenum pname, GLfloat *params);
# 5832 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLCOLORSUBTABLEEXTPROC) (GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *data);
typedef void ( * PFNGLCOPYCOLORSUBTABLEEXTPROC) (GLenum target, GLsizei start, GLint x, GLint y, GLsizei width);
# 5845 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLHINTPGIPROC) (GLenum target, GLint mode);
# 5856 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLCOLORTABLEEXTPROC) (GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const GLvoid *table);
typedef void ( * PFNGLGETCOLORTABLEEXTPROC) (GLenum target, GLenum format, GLenum type, GLvoid *data);
typedef void ( * PFNGLGETCOLORTABLEPARAMETERIVEXTPROC) (GLenum target, GLenum pname, GLint *params);
typedef void ( * PFNGLGETCOLORTABLEPARAMETERFVEXTPROC) (GLenum target, GLenum pname, GLfloat *params);
# 5876 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLGETLISTPARAMETERFVSGIXPROC) (GLuint list, GLenum pname, GLfloat *params);
typedef void ( * PFNGLGETLISTPARAMETERIVSGIXPROC) (GLuint list, GLenum pname, GLint *params);
typedef void ( * PFNGLLISTPARAMETERFSGIXPROC) (GLuint list, GLenum pname, GLfloat param);
typedef void ( * PFNGLLISTPARAMETERFVSGIXPROC) (GLuint list, GLenum pname, const GLfloat *params);
typedef void ( * PFNGLLISTPARAMETERISGIXPROC) (GLuint list, GLenum pname, GLint param);
typedef void ( * PFNGLLISTPARAMETERIVSGIXPROC) (GLuint list, GLenum pname, const GLint *params);
# 5909 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLINDEXMATERIALEXTPROC) (GLenum face, GLenum mode);







typedef void ( * PFNGLINDEXFUNCEXTPROC) (GLenum func, GLclampf ref);
# 5930 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLLOCKARRAYSEXTPROC) (GLint first, GLsizei count);
typedef void ( * PFNGLUNLOCKARRAYSEXTPROC) (void);
# 5940 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLCULLPARAMETERDVEXTPROC) (GLenum pname, GLdouble *params);
typedef void ( * PFNGLCULLPARAMETERFVEXTPROC) (GLenum pname, GLfloat *params);
# 5970 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLFRAGMENTCOLORMATERIALSGIXPROC) (GLenum face, GLenum mode);
typedef void ( * PFNGLFRAGMENTLIGHTFSGIXPROC) (GLenum light, GLenum pname, GLfloat param);
typedef void ( * PFNGLFRAGMENTLIGHTFVSGIXPROC) (GLenum light, GLenum pname, const GLfloat *params);
typedef void ( * PFNGLFRAGMENTLIGHTISGIXPROC) (GLenum light, GLenum pname, GLint param);
typedef void ( * PFNGLFRAGMENTLIGHTIVSGIXPROC) (GLenum light, GLenum pname, const GLint *params);
typedef void ( * PFNGLFRAGMENTLIGHTMODELFSGIXPROC) (GLenum pname, GLfloat param);
typedef void ( * PFNGLFRAGMENTLIGHTMODELFVSGIXPROC) (GLenum pname, const GLfloat *params);
typedef void ( * PFNGLFRAGMENTLIGHTMODELISGIXPROC) (GLenum pname, GLint param);
typedef void ( * PFNGLFRAGMENTLIGHTMODELIVSGIXPROC) (GLenum pname, const GLint *params);
typedef void ( * PFNGLFRAGMENTMATERIALFSGIXPROC) (GLenum face, GLenum pname, GLfloat param);
typedef void ( * PFNGLFRAGMENTMATERIALFVSGIXPROC) (GLenum face, GLenum pname, const GLfloat *params);
typedef void ( * PFNGLFRAGMENTMATERIALISGIXPROC) (GLenum face, GLenum pname, GLint param);
typedef void ( * PFNGLFRAGMENTMATERIALIVSGIXPROC) (GLenum face, GLenum pname, const GLint *params);
typedef void ( * PFNGLGETFRAGMENTLIGHTFVSGIXPROC) (GLenum light, GLenum pname, GLfloat *params);
typedef void ( * PFNGLGETFRAGMENTLIGHTIVSGIXPROC) (GLenum light, GLenum pname, GLint *params);
typedef void ( * PFNGLGETFRAGMENTMATERIALFVSGIXPROC) (GLenum face, GLenum pname, GLfloat *params);
typedef void ( * PFNGLGETFRAGMENTMATERIALIVSGIXPROC) (GLenum face, GLenum pname, GLint *params);
typedef void ( * PFNGLLIGHTENVISGIXPROC) (GLenum pname, GLint param);
# 6003 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLDRAWRANGEELEMENTSEXTPROC) (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices);
# 6021 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLAPPLYTEXTUREEXTPROC) (GLenum mode);
typedef void ( * PFNGLTEXTURELIGHTEXTPROC) (GLenum pname);
typedef void ( * PFNGLTEXTUREMATERIALEXTPROC) (GLenum face, GLenum mode);
# 6044 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLASYNCMARKERSGIXPROC) (GLuint marker);
typedef GLint ( * PFNGLFINISHASYNCSGIXPROC) (GLuint *markerp);
typedef GLint ( * PFNGLPOLLASYNCSGIXPROC) (GLuint *markerp);
typedef GLuint ( * PFNGLGENASYNCMARKERSSGIXPROC) (GLsizei range);
typedef void ( * PFNGLDELETEASYNCMARKERSSGIXPROC) (GLuint marker, GLsizei range);
typedef GLboolean ( * PFNGLISASYNCMARKERSGIXPROC) (GLuint marker);
# 6068 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLVERTEXPOINTERVINTELPROC) (GLint size, GLenum type, const GLvoid* *pointer);
typedef void ( * PFNGLNORMALPOINTERVINTELPROC) (GLenum type, const GLvoid* *pointer);
typedef void ( * PFNGLCOLORPOINTERVINTELPROC) (GLint size, GLenum type, const GLvoid* *pointer);
typedef void ( * PFNGLTEXCOORDPOINTERVINTELPROC) (GLint size, GLenum type, const GLvoid* *pointer);
# 6086 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLPIXELTRANSFORMPARAMETERIEXTPROC) (GLenum target, GLenum pname, GLint param);
typedef void ( * PFNGLPIXELTRANSFORMPARAMETERFEXTPROC) (GLenum target, GLenum pname, GLfloat param);
typedef void ( * PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC) (GLenum target, GLenum pname, const GLint *params);
typedef void ( * PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC) (GLenum target, GLenum pname, const GLfloat *params);
# 6125 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLSECONDARYCOLOR3BEXTPROC) (GLbyte red, GLbyte green, GLbyte blue);
typedef void ( * PFNGLSECONDARYCOLOR3BVEXTPROC) (const GLbyte *v);
typedef void ( * PFNGLSECONDARYCOLOR3DEXTPROC) (GLdouble red, GLdouble green, GLdouble blue);
typedef void ( * PFNGLSECONDARYCOLOR3DVEXTPROC) (const GLdouble *v);
typedef void ( * PFNGLSECONDARYCOLOR3FEXTPROC) (GLfloat red, GLfloat green, GLfloat blue);
typedef void ( * PFNGLSECONDARYCOLOR3FVEXTPROC) (const GLfloat *v);
typedef void ( * PFNGLSECONDARYCOLOR3IEXTPROC) (GLint red, GLint green, GLint blue);
typedef void ( * PFNGLSECONDARYCOLOR3IVEXTPROC) (const GLint *v);
typedef void ( * PFNGLSECONDARYCOLOR3SEXTPROC) (GLshort red, GLshort green, GLshort blue);
typedef void ( * PFNGLSECONDARYCOLOR3SVEXTPROC) (const GLshort *v);
typedef void ( * PFNGLSECONDARYCOLOR3UBEXTPROC) (GLubyte red, GLubyte green, GLubyte blue);
typedef void ( * PFNGLSECONDARYCOLOR3UBVEXTPROC) (const GLubyte *v);
typedef void ( * PFNGLSECONDARYCOLOR3UIEXTPROC) (GLuint red, GLuint green, GLuint blue);
typedef void ( * PFNGLSECONDARYCOLOR3UIVEXTPROC) (const GLuint *v);
typedef void ( * PFNGLSECONDARYCOLOR3USEXTPROC) (GLushort red, GLushort green, GLushort blue);
typedef void ( * PFNGLSECONDARYCOLOR3USVEXTPROC) (const GLushort *v);
typedef void ( * PFNGLSECONDARYCOLORPOINTEREXTPROC) (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);







typedef void ( * PFNGLTEXTURENORMALEXTPROC) (GLenum mode);
# 6158 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLMULTIDRAWARRAYSEXTPROC) (GLenum mode, GLint *first, GLsizei *count, GLsizei primcount);
typedef void ( * PFNGLMULTIDRAWELEMENTSEXTPROC) (GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount);
# 6171 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLFOGCOORDFEXTPROC) (GLfloat coord);
typedef void ( * PFNGLFOGCOORDFVEXTPROC) (const GLfloat *coord);
typedef void ( * PFNGLFOGCOORDDEXTPROC) (GLdouble coord);
typedef void ( * PFNGLFOGCOORDDVEXTPROC) (const GLdouble *coord);
typedef void ( * PFNGLFOGCOORDPOINTEREXTPROC) (GLenum type, GLsizei stride, const GLvoid *pointer);
# 6208 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLTANGENT3BEXTPROC) (GLbyte tx, GLbyte ty, GLbyte tz);
typedef void ( * PFNGLTANGENT3BVEXTPROC) (const GLbyte *v);
typedef void ( * PFNGLTANGENT3DEXTPROC) (GLdouble tx, GLdouble ty, GLdouble tz);
typedef void ( * PFNGLTANGENT3DVEXTPROC) (const GLdouble *v);
typedef void ( * PFNGLTANGENT3FEXTPROC) (GLfloat tx, GLfloat ty, GLfloat tz);
typedef void ( * PFNGLTANGENT3FVEXTPROC) (const GLfloat *v);
typedef void ( * PFNGLTANGENT3IEXTPROC) (GLint tx, GLint ty, GLint tz);
typedef void ( * PFNGLTANGENT3IVEXTPROC) (const GLint *v);
typedef void ( * PFNGLTANGENT3SEXTPROC) (GLshort tx, GLshort ty, GLshort tz);
typedef void ( * PFNGLTANGENT3SVEXTPROC) (const GLshort *v);
typedef void ( * PFNGLBINORMAL3BEXTPROC) (GLbyte bx, GLbyte by, GLbyte bz);
typedef void ( * PFNGLBINORMAL3BVEXTPROC) (const GLbyte *v);
typedef void ( * PFNGLBINORMAL3DEXTPROC) (GLdouble bx, GLdouble by, GLdouble bz);
typedef void ( * PFNGLBINORMAL3DVEXTPROC) (const GLdouble *v);
typedef void ( * PFNGLBINORMAL3FEXTPROC) (GLfloat bx, GLfloat by, GLfloat bz);
typedef void ( * PFNGLBINORMAL3FVEXTPROC) (const GLfloat *v);
typedef void ( * PFNGLBINORMAL3IEXTPROC) (GLint bx, GLint by, GLint bz);
typedef void ( * PFNGLBINORMAL3IVEXTPROC) (const GLint *v);
typedef void ( * PFNGLBINORMAL3SEXTPROC) (GLshort bx, GLshort by, GLshort bz);
typedef void ( * PFNGLBINORMAL3SVEXTPROC) (const GLshort *v);
typedef void ( * PFNGLTANGENTPOINTEREXTPROC) (GLenum type, GLsizei stride, const GLvoid *pointer);
typedef void ( * PFNGLBINORMALPOINTEREXTPROC) (GLenum type, GLsizei stride, const GLvoid *pointer);
# 6253 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLFINISHTEXTURESUNXPROC) (void);
# 6268 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLGLOBALALPHAFACTORBSUNPROC) (GLbyte factor);
typedef void ( * PFNGLGLOBALALPHAFACTORSSUNPROC) (GLshort factor);
typedef void ( * PFNGLGLOBALALPHAFACTORISUNPROC) (GLint factor);
typedef void ( * PFNGLGLOBALALPHAFACTORFSUNPROC) (GLfloat factor);
typedef void ( * PFNGLGLOBALALPHAFACTORDSUNPROC) (GLdouble factor);
typedef void ( * PFNGLGLOBALALPHAFACTORUBSUNPROC) (GLubyte factor);
typedef void ( * PFNGLGLOBALALPHAFACTORUSSUNPROC) (GLushort factor);
typedef void ( * PFNGLGLOBALALPHAFACTORUISUNPROC) (GLuint factor);
# 6289 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLREPLACEMENTCODEUISUNPROC) (GLuint code);
typedef void ( * PFNGLREPLACEMENTCODEUSSUNPROC) (GLushort code);
typedef void ( * PFNGLREPLACEMENTCODEUBSUNPROC) (GLubyte code);
typedef void ( * PFNGLREPLACEMENTCODEUIVSUNPROC) (const GLuint *code);
typedef void ( * PFNGLREPLACEMENTCODEUSVSUNPROC) (const GLushort *code);
typedef void ( * PFNGLREPLACEMENTCODEUBVSUNPROC) (const GLubyte *code);
typedef void ( * PFNGLREPLACEMENTCODEPOINTERSUNPROC) (GLenum type, GLsizei stride, const GLvoid* *pointer);
# 6342 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLCOLOR4UBVERTEX2FSUNPROC) (GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y);
typedef void ( * PFNGLCOLOR4UBVERTEX2FVSUNPROC) (const GLubyte *c, const GLfloat *v);
typedef void ( * PFNGLCOLOR4UBVERTEX3FSUNPROC) (GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z);
typedef void ( * PFNGLCOLOR4UBVERTEX3FVSUNPROC) (const GLubyte *c, const GLfloat *v);
typedef void ( * PFNGLCOLOR3FVERTEX3FSUNPROC) (GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z);
typedef void ( * PFNGLCOLOR3FVERTEX3FVSUNPROC) (const GLfloat *c, const GLfloat *v);
typedef void ( * PFNGLNORMAL3FVERTEX3FSUNPROC) (GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
typedef void ( * PFNGLNORMAL3FVERTEX3FVSUNPROC) (const GLfloat *n, const GLfloat *v);
typedef void ( * PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC) (GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
typedef void ( * PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC) (const GLfloat *c, const GLfloat *n, const GLfloat *v);
typedef void ( * PFNGLTEXCOORD2FVERTEX3FSUNPROC) (GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z);
typedef void ( * PFNGLTEXCOORD2FVERTEX3FVSUNPROC) (const GLfloat *tc, const GLfloat *v);
typedef void ( * PFNGLTEXCOORD4FVERTEX4FSUNPROC) (GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void ( * PFNGLTEXCOORD4FVERTEX4FVSUNPROC) (const GLfloat *tc, const GLfloat *v);
typedef void ( * PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC) (GLfloat s, GLfloat t, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z);
typedef void ( * PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC) (const GLfloat *tc, const GLubyte *c, const GLfloat *v);
typedef void ( * PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC) (GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z);
typedef void ( * PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC) (const GLfloat *tc, const GLfloat *c, const GLfloat *v);
typedef void ( * PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC) (GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
typedef void ( * PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC) (const GLfloat *tc, const GLfloat *n, const GLfloat *v);
typedef void ( * PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC) (GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
typedef void ( * PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC) (const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v);
typedef void ( * PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FSUNPROC) (GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void ( * PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC) (const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v);
typedef void ( * PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC) (GLuint rc, GLfloat x, GLfloat y, GLfloat z);
typedef void ( * PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC) (const GLuint *rc, const GLfloat *v);
typedef void ( * PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC) (GLuint rc, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z);
typedef void ( * PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC) (const GLuint *rc, const GLubyte *c, const GLfloat *v);
typedef void ( * PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC) (GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z);
typedef void ( * PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC) (const GLuint *rc, const GLfloat *c, const GLfloat *v);
typedef void ( * PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC) (GLuint rc, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
typedef void ( * PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC) (const GLuint *rc, const GLfloat *n, const GLfloat *v);
typedef void ( * PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FSUNPROC) (GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
typedef void ( * PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC) (const GLuint *rc, const GLfloat *c, const GLfloat *n, const GLfloat *v);
typedef void ( * PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC) (GLuint rc, GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z);
typedef void ( * PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC) (const GLuint *rc, const GLfloat *tc, const GLfloat *v);
typedef void ( * PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC) (GLuint rc, GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
typedef void ( * PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC) (const GLuint *rc, const GLfloat *tc, const GLfloat *n, const GLfloat *v);
typedef void ( * PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC) (GLuint rc, GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
typedef void ( * PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC) (const GLuint *rc, const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v);







typedef void ( * PFNGLBLENDFUNCSEPARATEEXTPROC) (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);







typedef void ( * PFNGLBLENDFUNCSEPARATEINGRPROC) (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
# 6443 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLVERTEXWEIGHTFEXTPROC) (GLfloat weight);
typedef void ( * PFNGLVERTEXWEIGHTFVEXTPROC) (const GLfloat *weight);
typedef void ( * PFNGLVERTEXWEIGHTPOINTEREXTPROC) (GLsizei size, GLenum type, GLsizei stride, const GLvoid *pointer);
# 6458 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLFLUSHVERTEXARRAYRANGENVPROC) (void);
typedef void ( * PFNGLVERTEXARRAYRANGENVPROC) (GLsizei length, const GLvoid *pointer);
# 6479 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLCOMBINERPARAMETERFVNVPROC) (GLenum pname, const GLfloat *params);
typedef void ( * PFNGLCOMBINERPARAMETERFNVPROC) (GLenum pname, GLfloat param);
typedef void ( * PFNGLCOMBINERPARAMETERIVNVPROC) (GLenum pname, const GLint *params);
typedef void ( * PFNGLCOMBINERPARAMETERINVPROC) (GLenum pname, GLint param);
typedef void ( * PFNGLCOMBINERINPUTNVPROC) (GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage);
typedef void ( * PFNGLCOMBINEROUTPUTNVPROC) (GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum);
typedef void ( * PFNGLFINALCOMBINERINPUTNVPROC) (GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage);
typedef void ( * PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC) (GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat *params);
typedef void ( * PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC) (GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint *params);
typedef void ( * PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC) (GLenum stage, GLenum portion, GLenum pname, GLfloat *params);
typedef void ( * PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC) (GLenum stage, GLenum portion, GLenum pname, GLint *params);
typedef void ( * PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC) (GLenum variable, GLenum pname, GLfloat *params);
typedef void ( * PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC) (GLenum variable, GLenum pname, GLint *params);
# 6515 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLRESIZEBUFFERSMESAPROC) (void);
# 6546 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLWINDOWPOS2DMESAPROC) (GLdouble x, GLdouble y);
typedef void ( * PFNGLWINDOWPOS2DVMESAPROC) (const GLdouble *v);
typedef void ( * PFNGLWINDOWPOS2FMESAPROC) (GLfloat x, GLfloat y);
typedef void ( * PFNGLWINDOWPOS2FVMESAPROC) (const GLfloat *v);
typedef void ( * PFNGLWINDOWPOS2IMESAPROC) (GLint x, GLint y);
typedef void ( * PFNGLWINDOWPOS2IVMESAPROC) (const GLint *v);
typedef void ( * PFNGLWINDOWPOS2SMESAPROC) (GLshort x, GLshort y);
typedef void ( * PFNGLWINDOWPOS2SVMESAPROC) (const GLshort *v);
typedef void ( * PFNGLWINDOWPOS3DMESAPROC) (GLdouble x, GLdouble y, GLdouble z);
typedef void ( * PFNGLWINDOWPOS3DVMESAPROC) (const GLdouble *v);
typedef void ( * PFNGLWINDOWPOS3FMESAPROC) (GLfloat x, GLfloat y, GLfloat z);
typedef void ( * PFNGLWINDOWPOS3FVMESAPROC) (const GLfloat *v);
typedef void ( * PFNGLWINDOWPOS3IMESAPROC) (GLint x, GLint y, GLint z);
typedef void ( * PFNGLWINDOWPOS3IVMESAPROC) (const GLint *v);
typedef void ( * PFNGLWINDOWPOS3SMESAPROC) (GLshort x, GLshort y, GLshort z);
typedef void ( * PFNGLWINDOWPOS3SVMESAPROC) (const GLshort *v);
typedef void ( * PFNGLWINDOWPOS4DMESAPROC) (GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void ( * PFNGLWINDOWPOS4DVMESAPROC) (const GLdouble *v);
typedef void ( * PFNGLWINDOWPOS4FMESAPROC) (GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void ( * PFNGLWINDOWPOS4FVMESAPROC) (const GLfloat *v);
typedef void ( * PFNGLWINDOWPOS4IMESAPROC) (GLint x, GLint y, GLint z, GLint w);
typedef void ( * PFNGLWINDOWPOS4IVMESAPROC) (const GLint *v);
typedef void ( * PFNGLWINDOWPOS4SMESAPROC) (GLshort x, GLshort y, GLshort z, GLshort w);
typedef void ( * PFNGLWINDOWPOS4SVMESAPROC) (const GLshort *v);
# 6582 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLMULTIMODEDRAWARRAYSIBMPROC) (const GLenum *mode, const GLint *first, const GLsizei *count, GLsizei primcount, GLint modestride);
typedef void ( * PFNGLMULTIMODEDRAWELEMENTSIBMPROC) (const GLenum *mode, const GLsizei *count, GLenum type, const GLvoid* const *indices, GLsizei primcount, GLint modestride);
# 6598 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLCOLORPOINTERLISTIBMPROC) (GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride);
typedef void ( * PFNGLSECONDARYCOLORPOINTERLISTIBMPROC) (GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride);
typedef void ( * PFNGLEDGEFLAGPOINTERLISTIBMPROC) (GLint stride, const GLboolean* *pointer, GLint ptrstride);
typedef void ( * PFNGLFOGCOORDPOINTERLISTIBMPROC) (GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride);
typedef void ( * PFNGLINDEXPOINTERLISTIBMPROC) (GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride);
typedef void ( * PFNGLNORMALPOINTERLISTIBMPROC) (GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride);
typedef void ( * PFNGLTEXCOORDPOINTERLISTIBMPROC) (GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride);
typedef void ( * PFNGLVERTEXPOINTERLISTIBMPROC) (GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride);
# 6637 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLTBUFFERMASK3DFXPROC) (GLuint mask);
# 6646 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLSAMPLEMASKEXTPROC) (GLclampf value, GLboolean invert);
typedef void ( * PFNGLSAMPLEPATTERNEXTPROC) (GLenum pattern);
# 6671 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLTEXTURECOLORMASKSGISPROC) (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);







typedef void ( * PFNGLIGLOOINTERFACESGIXPROC) (GLenum pname, const GLvoid *params);
# 6701 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLDELETEFENCESNVPROC) (GLsizei n, const GLuint *fences);
typedef void ( * PFNGLGENFENCESNVPROC) (GLsizei n, GLuint *fences);
typedef GLboolean ( * PFNGLISFENCENVPROC) (GLuint fence);
typedef GLboolean ( * PFNGLTESTFENCENVPROC) (GLuint fence);
typedef void ( * PFNGLGETFENCEIVNVPROC) (GLuint fence, GLenum pname, GLint *params);
typedef void ( * PFNGLFINISHFENCENVPROC) (GLuint fence);
typedef void ( * PFNGLSETFENCENVPROC) (GLuint fence, GLenum condition);
# 6723 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLMAPCONTROLPOINTSNVPROC) (GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean packed, const GLvoid *points);
typedef void ( * PFNGLMAPPARAMETERIVNVPROC) (GLenum target, GLenum pname, const GLint *params);
typedef void ( * PFNGLMAPPARAMETERFVNVPROC) (GLenum target, GLenum pname, const GLfloat *params);
typedef void ( * PFNGLGETMAPCONTROLPOINTSNVPROC) (GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, GLvoid *points);
typedef void ( * PFNGLGETMAPPARAMETERIVNVPROC) (GLenum target, GLenum pname, GLint *params);
typedef void ( * PFNGLGETMAPPARAMETERFVNVPROC) (GLenum target, GLenum pname, GLfloat *params);
typedef void ( * PFNGLGETMAPATTRIBPARAMETERIVNVPROC) (GLenum target, GLuint index, GLenum pname, GLint *params);
typedef void ( * PFNGLGETMAPATTRIBPARAMETERFVNVPROC) (GLenum target, GLuint index, GLenum pname, GLfloat *params);
typedef void ( * PFNGLEVALMAPSNVPROC) (GLenum target, GLenum mode);
# 6744 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLCOMBINERSTAGEPARAMETERFVNVPROC) (GLenum stage, GLenum pname, const GLfloat *params);
typedef void ( * PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC) (GLenum stage, GLenum pname, GLfloat *params);
# 6836 "/usr/include/GL/glext.h" 3 4
typedef GLboolean ( * PFNGLAREPROGRAMSRESIDENTNVPROC) (GLsizei n, const GLuint *programs, GLboolean *residences);
typedef void ( * PFNGLBINDPROGRAMNVPROC) (GLenum target, GLuint id);
typedef void ( * PFNGLDELETEPROGRAMSNVPROC) (GLsizei n, const GLuint *programs);
typedef void ( * PFNGLEXECUTEPROGRAMNVPROC) (GLenum target, GLuint id, const GLfloat *params);
typedef void ( * PFNGLGENPROGRAMSNVPROC) (GLsizei n, GLuint *programs);
typedef void ( * PFNGLGETPROGRAMPARAMETERDVNVPROC) (GLenum target, GLuint index, GLenum pname, GLdouble *params);
typedef void ( * PFNGLGETPROGRAMPARAMETERFVNVPROC) (GLenum target, GLuint index, GLenum pname, GLfloat *params);
typedef void ( * PFNGLGETPROGRAMIVNVPROC) (GLuint id, GLenum pname, GLint *params);
typedef void ( * PFNGLGETPROGRAMSTRINGNVPROC) (GLuint id, GLenum pname, GLubyte *program);
typedef void ( * PFNGLGETTRACKMATRIXIVNVPROC) (GLenum target, GLuint address, GLenum pname, GLint *params);
typedef void ( * PFNGLGETVERTEXATTRIBDVNVPROC) (GLuint index, GLenum pname, GLdouble *params);
typedef void ( * PFNGLGETVERTEXATTRIBFVNVPROC) (GLuint index, GLenum pname, GLfloat *params);
typedef void ( * PFNGLGETVERTEXATTRIBIVNVPROC) (GLuint index, GLenum pname, GLint *params);
typedef void ( * PFNGLGETVERTEXATTRIBPOINTERVNVPROC) (GLuint index, GLenum pname, GLvoid* *pointer);
typedef GLboolean ( * PFNGLISPROGRAMNVPROC) (GLuint id);
typedef void ( * PFNGLLOADPROGRAMNVPROC) (GLenum target, GLuint id, GLsizei len, const GLubyte *program);
typedef void ( * PFNGLPROGRAMPARAMETER4DNVPROC) (GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void ( * PFNGLPROGRAMPARAMETER4DVNVPROC) (GLenum target, GLuint index, const GLdouble *v);
typedef void ( * PFNGLPROGRAMPARAMETER4FNVPROC) (GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void ( * PFNGLPROGRAMPARAMETER4FVNVPROC) (GLenum target, GLuint index, const GLfloat *v);
typedef void ( * PFNGLPROGRAMPARAMETERS4DVNVPROC) (GLenum target, GLuint index, GLuint count, const GLdouble *v);
typedef void ( * PFNGLPROGRAMPARAMETERS4FVNVPROC) (GLenum target, GLuint index, GLuint count, const GLfloat *v);
typedef void ( * PFNGLREQUESTRESIDENTPROGRAMSNVPROC) (GLsizei n, const GLuint *programs);
typedef void ( * PFNGLTRACKMATRIXNVPROC) (GLenum target, GLuint address, GLenum matrix, GLenum transform);
typedef void ( * PFNGLVERTEXATTRIBPOINTERNVPROC) (GLuint index, GLint fsize, GLenum type, GLsizei stride, const GLvoid *pointer);
typedef void ( * PFNGLVERTEXATTRIB1DNVPROC) (GLuint index, GLdouble x);
typedef void ( * PFNGLVERTEXATTRIB1DVNVPROC) (GLuint index, const GLdouble *v);
typedef void ( * PFNGLVERTEXATTRIB1FNVPROC) (GLuint index, GLfloat x);
typedef void ( * PFNGLVERTEXATTRIB1FVNVPROC) (GLuint index, const GLfloat *v);
typedef void ( * PFNGLVERTEXATTRIB1SNVPROC) (GLuint index, GLshort x);
typedef void ( * PFNGLVERTEXATTRIB1SVNVPROC) (GLuint index, const GLshort *v);
typedef void ( * PFNGLVERTEXATTRIB2DNVPROC) (GLuint index, GLdouble x, GLdouble y);
typedef void ( * PFNGLVERTEXATTRIB2DVNVPROC) (GLuint index, const GLdouble *v);
typedef void ( * PFNGLVERTEXATTRIB2FNVPROC) (GLuint index, GLfloat x, GLfloat y);
typedef void ( * PFNGLVERTEXATTRIB2FVNVPROC) (GLuint index, const GLfloat *v);
typedef void ( * PFNGLVERTEXATTRIB2SNVPROC) (GLuint index, GLshort x, GLshort y);
typedef void ( * PFNGLVERTEXATTRIB2SVNVPROC) (GLuint index, const GLshort *v);
typedef void ( * PFNGLVERTEXATTRIB3DNVPROC) (GLuint index, GLdouble x, GLdouble y, GLdouble z);
typedef void ( * PFNGLVERTEXATTRIB3DVNVPROC) (GLuint index, const GLdouble *v);
typedef void ( * PFNGLVERTEXATTRIB3FNVPROC) (GLuint index, GLfloat x, GLfloat y, GLfloat z);
typedef void ( * PFNGLVERTEXATTRIB3FVNVPROC) (GLuint index, const GLfloat *v);
typedef void ( * PFNGLVERTEXATTRIB3SNVPROC) (GLuint index, GLshort x, GLshort y, GLshort z);
typedef void ( * PFNGLVERTEXATTRIB3SVNVPROC) (GLuint index, const GLshort *v);
typedef void ( * PFNGLVERTEXATTRIB4DNVPROC) (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void ( * PFNGLVERTEXATTRIB4DVNVPROC) (GLuint index, const GLdouble *v);
typedef void ( * PFNGLVERTEXATTRIB4FNVPROC) (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void ( * PFNGLVERTEXATTRIB4FVNVPROC) (GLuint index, const GLfloat *v);
typedef void ( * PFNGLVERTEXATTRIB4SNVPROC) (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
typedef void ( * PFNGLVERTEXATTRIB4SVNVPROC) (GLuint index, const GLshort *v);
typedef void ( * PFNGLVERTEXATTRIB4UBNVPROC) (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
typedef void ( * PFNGLVERTEXATTRIB4UBVNVPROC) (GLuint index, const GLubyte *v);
typedef void ( * PFNGLVERTEXATTRIBS1DVNVPROC) (GLuint index, GLsizei count, const GLdouble *v);
typedef void ( * PFNGLVERTEXATTRIBS1FVNVPROC) (GLuint index, GLsizei count, const GLfloat *v);
typedef void ( * PFNGLVERTEXATTRIBS1SVNVPROC) (GLuint index, GLsizei count, const GLshort *v);
typedef void ( * PFNGLVERTEXATTRIBS2DVNVPROC) (GLuint index, GLsizei count, const GLdouble *v);
typedef void ( * PFNGLVERTEXATTRIBS2FVNVPROC) (GLuint index, GLsizei count, const GLfloat *v);
typedef void ( * PFNGLVERTEXATTRIBS2SVNVPROC) (GLuint index, GLsizei count, const GLshort *v);
typedef void ( * PFNGLVERTEXATTRIBS3DVNVPROC) (GLuint index, GLsizei count, const GLdouble *v);
typedef void ( * PFNGLVERTEXATTRIBS3FVNVPROC) (GLuint index, GLsizei count, const GLfloat *v);
typedef void ( * PFNGLVERTEXATTRIBS3SVNVPROC) (GLuint index, GLsizei count, const GLshort *v);
typedef void ( * PFNGLVERTEXATTRIBS4DVNVPROC) (GLuint index, GLsizei count, const GLdouble *v);
typedef void ( * PFNGLVERTEXATTRIBS4FVNVPROC) (GLuint index, GLsizei count, const GLfloat *v);
typedef void ( * PFNGLVERTEXATTRIBS4SVNVPROC) (GLuint index, GLsizei count, const GLshort *v);
typedef void ( * PFNGLVERTEXATTRIBS4UBVNVPROC) (GLuint index, GLsizei count, const GLubyte *v);
# 6934 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLTEXBUMPPARAMETERIVATIPROC) (GLenum pname, const GLint *param);
typedef void ( * PFNGLTEXBUMPPARAMETERFVATIPROC) (GLenum pname, const GLfloat *param);
typedef void ( * PFNGLGETTEXBUMPPARAMETERIVATIPROC) (GLenum pname, GLint *param);
typedef void ( * PFNGLGETTEXBUMPPARAMETERFVATIPROC) (GLenum pname, GLfloat *param);
# 6958 "/usr/include/GL/glext.h" 3 4
typedef GLuint ( * PFNGLGENFRAGMENTSHADERSATIPROC) (GLuint range);
typedef void ( * PFNGLBINDFRAGMENTSHADERATIPROC) (GLuint id);
typedef void ( * PFNGLDELETEFRAGMENTSHADERATIPROC) (GLuint id);
typedef void ( * PFNGLBEGINFRAGMENTSHADERATIPROC) (void);
typedef void ( * PFNGLENDFRAGMENTSHADERATIPROC) (void);
typedef void ( * PFNGLPASSTEXCOORDATIPROC) (GLuint dst, GLuint coord, GLenum swizzle);
typedef void ( * PFNGLSAMPLEMAPATIPROC) (GLuint dst, GLuint interp, GLenum swizzle);
typedef void ( * PFNGLCOLORFRAGMENTOP1ATIPROC) (GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod);
typedef void ( * PFNGLCOLORFRAGMENTOP2ATIPROC) (GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod);
typedef void ( * PFNGLCOLORFRAGMENTOP3ATIPROC) (GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod);
typedef void ( * PFNGLALPHAFRAGMENTOP1ATIPROC) (GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod);
typedef void ( * PFNGLALPHAFRAGMENTOP2ATIPROC) (GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod);
typedef void ( * PFNGLALPHAFRAGMENTOP3ATIPROC) (GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod);
typedef void ( * PFNGLSETFRAGMENTSHADERCONSTANTATIPROC) (GLuint dst, const GLfloat *value);
# 6980 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLPNTRIANGLESIATIPROC) (GLenum pname, GLint param);
typedef void ( * PFNGLPNTRIANGLESFATIPROC) (GLenum pname, GLfloat param);
# 7000 "/usr/include/GL/glext.h" 3 4
typedef GLuint ( * PFNGLNEWOBJECTBUFFERATIPROC) (GLsizei size, const GLvoid *pointer, GLenum usage);
typedef GLboolean ( * PFNGLISOBJECTBUFFERATIPROC) (GLuint buffer);
typedef void ( * PFNGLUPDATEOBJECTBUFFERATIPROC) (GLuint buffer, GLuint offset, GLsizei size, const GLvoid *pointer, GLenum preserve);
typedef void ( * PFNGLGETOBJECTBUFFERFVATIPROC) (GLuint buffer, GLenum pname, GLfloat *params);
typedef void ( * PFNGLGETOBJECTBUFFERIVATIPROC) (GLuint buffer, GLenum pname, GLint *params);
typedef void ( * PFNGLFREEOBJECTBUFFERATIPROC) (GLuint buffer);
typedef void ( * PFNGLARRAYOBJECTATIPROC) (GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset);
typedef void ( * PFNGLGETARRAYOBJECTFVATIPROC) (GLenum array, GLenum pname, GLfloat *params);
typedef void ( * PFNGLGETARRAYOBJECTIVATIPROC) (GLenum array, GLenum pname, GLint *params);
typedef void ( * PFNGLVARIANTARRAYOBJECTATIPROC) (GLuint id, GLenum type, GLsizei stride, GLuint buffer, GLuint offset);
typedef void ( * PFNGLGETVARIANTARRAYOBJECTFVATIPROC) (GLuint id, GLenum pname, GLfloat *params);
typedef void ( * PFNGLGETVARIANTARRAYOBJECTIVATIPROC) (GLuint id, GLenum pname, GLint *params);
# 7060 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLBEGINVERTEXSHADEREXTPROC) (void);
typedef void ( * PFNGLENDVERTEXSHADEREXTPROC) (void);
typedef void ( * PFNGLBINDVERTEXSHADEREXTPROC) (GLuint id);
typedef GLuint ( * PFNGLGENVERTEXSHADERSEXTPROC) (GLuint range);
typedef void ( * PFNGLDELETEVERTEXSHADEREXTPROC) (GLuint id);
typedef void ( * PFNGLSHADEROP1EXTPROC) (GLenum op, GLuint res, GLuint arg1);
typedef void ( * PFNGLSHADEROP2EXTPROC) (GLenum op, GLuint res, GLuint arg1, GLuint arg2);
typedef void ( * PFNGLSHADEROP3EXTPROC) (GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3);
typedef void ( * PFNGLSWIZZLEEXTPROC) (GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW);
typedef void ( * PFNGLWRITEMASKEXTPROC) (GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW);
typedef void ( * PFNGLINSERTCOMPONENTEXTPROC) (GLuint res, GLuint src, GLuint num);
typedef void ( * PFNGLEXTRACTCOMPONENTEXTPROC) (GLuint res, GLuint src, GLuint num);
typedef GLuint ( * PFNGLGENSYMBOLSEXTPROC) (GLenum datatype, GLenum storagetype, GLenum range, GLuint components);
typedef void ( * PFNGLSETINVARIANTEXTPROC) (GLuint id, GLenum type, const GLvoid *addr);
typedef void ( * PFNGLSETLOCALCONSTANTEXTPROC) (GLuint id, GLenum type, const GLvoid *addr);
typedef void ( * PFNGLVARIANTBVEXTPROC) (GLuint id, const GLbyte *addr);
typedef void ( * PFNGLVARIANTSVEXTPROC) (GLuint id, const GLshort *addr);
typedef void ( * PFNGLVARIANTIVEXTPROC) (GLuint id, const GLint *addr);
typedef void ( * PFNGLVARIANTFVEXTPROC) (GLuint id, const GLfloat *addr);
typedef void ( * PFNGLVARIANTDVEXTPROC) (GLuint id, const GLdouble *addr);
typedef void ( * PFNGLVARIANTUBVEXTPROC) (GLuint id, const GLubyte *addr);
typedef void ( * PFNGLVARIANTUSVEXTPROC) (GLuint id, const GLushort *addr);
typedef void ( * PFNGLVARIANTUIVEXTPROC) (GLuint id, const GLuint *addr);
typedef void ( * PFNGLVARIANTPOINTEREXTPROC) (GLuint id, GLenum type, GLuint stride, const GLvoid *addr);
typedef void ( * PFNGLENABLEVARIANTCLIENTSTATEEXTPROC) (GLuint id);
typedef void ( * PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC) (GLuint id);
typedef GLuint ( * PFNGLBINDLIGHTPARAMETEREXTPROC) (GLenum light, GLenum value);
typedef GLuint ( * PFNGLBINDMATERIALPARAMETEREXTPROC) (GLenum face, GLenum value);
typedef GLuint ( * PFNGLBINDTEXGENPARAMETEREXTPROC) (GLenum unit, GLenum coord, GLenum value);
typedef GLuint ( * PFNGLBINDTEXTUREUNITPARAMETEREXTPROC) (GLenum unit, GLenum value);
typedef GLuint ( * PFNGLBINDPARAMETEREXTPROC) (GLenum value);
typedef GLboolean ( * PFNGLISVARIANTENABLEDEXTPROC) (GLuint id, GLenum cap);
typedef void ( * PFNGLGETVARIANTBOOLEANVEXTPROC) (GLuint id, GLenum value, GLboolean *data);
typedef void ( * PFNGLGETVARIANTINTEGERVEXTPROC) (GLuint id, GLenum value, GLint *data);
typedef void ( * PFNGLGETVARIANTFLOATVEXTPROC) (GLuint id, GLenum value, GLfloat *data);
typedef void ( * PFNGLGETVARIANTPOINTERVEXTPROC) (GLuint id, GLenum value, GLvoid* *data);
typedef void ( * PFNGLGETINVARIANTBOOLEANVEXTPROC) (GLuint id, GLenum value, GLboolean *data);
typedef void ( * PFNGLGETINVARIANTINTEGERVEXTPROC) (GLuint id, GLenum value, GLint *data);
typedef void ( * PFNGLGETINVARIANTFLOATVEXTPROC) (GLuint id, GLenum value, GLfloat *data);
typedef void ( * PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC) (GLuint id, GLenum value, GLboolean *data);
typedef void ( * PFNGLGETLOCALCONSTANTINTEGERVEXTPROC) (GLuint id, GLenum value, GLint *data);
typedef void ( * PFNGLGETLOCALCONSTANTFLOATVEXTPROC) (GLuint id, GLenum value, GLfloat *data);
# 7153 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLVERTEXSTREAM1SATIPROC) (GLenum stream, GLshort x);
typedef void ( * PFNGLVERTEXSTREAM1SVATIPROC) (GLenum stream, const GLshort *coords);
typedef void ( * PFNGLVERTEXSTREAM1IATIPROC) (GLenum stream, GLint x);
typedef void ( * PFNGLVERTEXSTREAM1IVATIPROC) (GLenum stream, const GLint *coords);
typedef void ( * PFNGLVERTEXSTREAM1FATIPROC) (GLenum stream, GLfloat x);
typedef void ( * PFNGLVERTEXSTREAM1FVATIPROC) (GLenum stream, const GLfloat *coords);
typedef void ( * PFNGLVERTEXSTREAM1DATIPROC) (GLenum stream, GLdouble x);
typedef void ( * PFNGLVERTEXSTREAM1DVATIPROC) (GLenum stream, const GLdouble *coords);
typedef void ( * PFNGLVERTEXSTREAM2SATIPROC) (GLenum stream, GLshort x, GLshort y);
typedef void ( * PFNGLVERTEXSTREAM2SVATIPROC) (GLenum stream, const GLshort *coords);
typedef void ( * PFNGLVERTEXSTREAM2IATIPROC) (GLenum stream, GLint x, GLint y);
typedef void ( * PFNGLVERTEXSTREAM2IVATIPROC) (GLenum stream, const GLint *coords);
typedef void ( * PFNGLVERTEXSTREAM2FATIPROC) (GLenum stream, GLfloat x, GLfloat y);
typedef void ( * PFNGLVERTEXSTREAM2FVATIPROC) (GLenum stream, const GLfloat *coords);
typedef void ( * PFNGLVERTEXSTREAM2DATIPROC) (GLenum stream, GLdouble x, GLdouble y);
typedef void ( * PFNGLVERTEXSTREAM2DVATIPROC) (GLenum stream, const GLdouble *coords);
typedef void ( * PFNGLVERTEXSTREAM3SATIPROC) (GLenum stream, GLshort x, GLshort y, GLshort z);
typedef void ( * PFNGLVERTEXSTREAM3SVATIPROC) (GLenum stream, const GLshort *coords);
typedef void ( * PFNGLVERTEXSTREAM3IATIPROC) (GLenum stream, GLint x, GLint y, GLint z);
typedef void ( * PFNGLVERTEXSTREAM3IVATIPROC) (GLenum stream, const GLint *coords);
typedef void ( * PFNGLVERTEXSTREAM3FATIPROC) (GLenum stream, GLfloat x, GLfloat y, GLfloat z);
typedef void ( * PFNGLVERTEXSTREAM3FVATIPROC) (GLenum stream, const GLfloat *coords);
typedef void ( * PFNGLVERTEXSTREAM3DATIPROC) (GLenum stream, GLdouble x, GLdouble y, GLdouble z);
typedef void ( * PFNGLVERTEXSTREAM3DVATIPROC) (GLenum stream, const GLdouble *coords);
typedef void ( * PFNGLVERTEXSTREAM4SATIPROC) (GLenum stream, GLshort x, GLshort y, GLshort z, GLshort w);
typedef void ( * PFNGLVERTEXSTREAM4SVATIPROC) (GLenum stream, const GLshort *coords);
typedef void ( * PFNGLVERTEXSTREAM4IATIPROC) (GLenum stream, GLint x, GLint y, GLint z, GLint w);
typedef void ( * PFNGLVERTEXSTREAM4IVATIPROC) (GLenum stream, const GLint *coords);
typedef void ( * PFNGLVERTEXSTREAM4FATIPROC) (GLenum stream, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void ( * PFNGLVERTEXSTREAM4FVATIPROC) (GLenum stream, const GLfloat *coords);
typedef void ( * PFNGLVERTEXSTREAM4DATIPROC) (GLenum stream, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void ( * PFNGLVERTEXSTREAM4DVATIPROC) (GLenum stream, const GLdouble *coords);
typedef void ( * PFNGLNORMALSTREAM3BATIPROC) (GLenum stream, GLbyte nx, GLbyte ny, GLbyte nz);
typedef void ( * PFNGLNORMALSTREAM3BVATIPROC) (GLenum stream, const GLbyte *coords);
typedef void ( * PFNGLNORMALSTREAM3SATIPROC) (GLenum stream, GLshort nx, GLshort ny, GLshort nz);
typedef void ( * PFNGLNORMALSTREAM3SVATIPROC) (GLenum stream, const GLshort *coords);
typedef void ( * PFNGLNORMALSTREAM3IATIPROC) (GLenum stream, GLint nx, GLint ny, GLint nz);
typedef void ( * PFNGLNORMALSTREAM3IVATIPROC) (GLenum stream, const GLint *coords);
typedef void ( * PFNGLNORMALSTREAM3FATIPROC) (GLenum stream, GLfloat nx, GLfloat ny, GLfloat nz);
typedef void ( * PFNGLNORMALSTREAM3FVATIPROC) (GLenum stream, const GLfloat *coords);
typedef void ( * PFNGLNORMALSTREAM3DATIPROC) (GLenum stream, GLdouble nx, GLdouble ny, GLdouble nz);
typedef void ( * PFNGLNORMALSTREAM3DVATIPROC) (GLenum stream, const GLdouble *coords);
typedef void ( * PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC) (GLenum stream);
typedef void ( * PFNGLVERTEXBLENDENVIATIPROC) (GLenum pname, GLint param);
typedef void ( * PFNGLVERTEXBLENDENVFATIPROC) (GLenum pname, GLfloat param);
# 7207 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLELEMENTPOINTERATIPROC) (GLenum type, const GLvoid *pointer);
typedef void ( * PFNGLDRAWELEMENTARRAYATIPROC) (GLenum mode, GLsizei count);
typedef void ( * PFNGLDRAWRANGEELEMENTARRAYATIPROC) (GLenum mode, GLuint start, GLuint end, GLsizei count);







typedef void ( * PFNGLDRAWMESHARRAYSSUNPROC) (GLenum mode, GLint first, GLsizei count, GLsizei width);
# 7243 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLGENOCCLUSIONQUERIESNVPROC) (GLsizei n, GLuint *ids);
typedef void ( * PFNGLDELETEOCCLUSIONQUERIESNVPROC) (GLsizei n, const GLuint *ids);
typedef GLboolean ( * PFNGLISOCCLUSIONQUERYNVPROC) (GLuint id);
typedef void ( * PFNGLBEGINOCCLUSIONQUERYNVPROC) (GLuint id);
typedef void ( * PFNGLENDOCCLUSIONQUERYNVPROC) (void);
typedef void ( * PFNGLGETOCCLUSIONQUERYIVNVPROC) (GLuint id, GLenum pname, GLint *params);
typedef void ( * PFNGLGETOCCLUSIONQUERYUIVNVPROC) (GLuint id, GLenum pname, GLuint *params);
# 7258 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLPOINTPARAMETERINVPROC) (GLenum pname, GLint param);
typedef void ( * PFNGLPOINTPARAMETERIVNVPROC) (GLenum pname, const GLint *params);
# 7279 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLACTIVESTENCILFACEEXTPROC) (GLenum face);
# 7299 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLELEMENTPOINTERAPPLEPROC) (GLenum type, const GLvoid *pointer);
typedef void ( * PFNGLDRAWELEMENTARRAYAPPLEPROC) (GLenum mode, GLint first, GLsizei count);
typedef void ( * PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC) (GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count);
typedef void ( * PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC) (GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount);
typedef void ( * PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC) (GLenum mode, GLuint start, GLuint end, const GLint *first, const GLsizei *count, GLsizei primcount);
# 7318 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLGENFENCESAPPLEPROC) (GLsizei n, GLuint *fences);
typedef void ( * PFNGLDELETEFENCESAPPLEPROC) (GLsizei n, const GLuint *fences);
typedef void ( * PFNGLSETFENCEAPPLEPROC) (GLuint fence);
typedef GLboolean ( * PFNGLISFENCEAPPLEPROC) (GLuint fence);
typedef GLboolean ( * PFNGLTESTFENCEAPPLEPROC) (GLuint fence);
typedef void ( * PFNGLFINISHFENCEAPPLEPROC) (GLuint fence);
typedef GLboolean ( * PFNGLTESTOBJECTAPPLEPROC) (GLenum object, GLuint name);
typedef void ( * PFNGLFINISHOBJECTAPPLEPROC) (GLenum object, GLint name);
# 7336 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLBINDVERTEXARRAYAPPLEPROC) (GLuint array);
typedef void ( * PFNGLDELETEVERTEXARRAYSAPPLEPROC) (GLsizei n, const GLuint *arrays);
typedef void ( * PFNGLGENVERTEXARRAYSAPPLEPROC) (GLsizei n, GLuint *arrays);
typedef GLboolean ( * PFNGLISVERTEXARRAYAPPLEPROC) (GLuint array);
# 7349 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLVERTEXARRAYRANGEAPPLEPROC) (GLsizei length, GLvoid *pointer);
typedef void ( * PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC) (GLsizei length, GLvoid *pointer);
typedef void ( * PFNGLVERTEXARRAYPARAMETERIAPPLEPROC) (GLenum pname, GLint param);
# 7367 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLDRAWBUFFERSATIPROC) (GLsizei n, const GLenum *bufs);
# 7400 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLPROGRAMNAMEDPARAMETER4FNVPROC) (GLuint id, GLsizei len, const GLubyte *name, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void ( * PFNGLPROGRAMNAMEDPARAMETER4DNVPROC) (GLuint id, GLsizei len, const GLubyte *name, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void ( * PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC) (GLuint id, GLsizei len, const GLubyte *name, const GLfloat *v);
typedef void ( * PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC) (GLuint id, GLsizei len, const GLubyte *name, const GLdouble *v);
typedef void ( * PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC) (GLuint id, GLsizei len, const GLubyte *name, GLfloat *params);
typedef void ( * PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC) (GLuint id, GLsizei len, const GLubyte *name, GLdouble *params);
# 7458 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLVERTEX2HNVPROC) (GLhalfNV x, GLhalfNV y);
typedef void ( * PFNGLVERTEX2HVNVPROC) (const GLhalfNV *v);
typedef void ( * PFNGLVERTEX3HNVPROC) (GLhalfNV x, GLhalfNV y, GLhalfNV z);
typedef void ( * PFNGLVERTEX3HVNVPROC) (const GLhalfNV *v);
typedef void ( * PFNGLVERTEX4HNVPROC) (GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w);
typedef void ( * PFNGLVERTEX4HVNVPROC) (const GLhalfNV *v);
typedef void ( * PFNGLNORMAL3HNVPROC) (GLhalfNV nx, GLhalfNV ny, GLhalfNV nz);
typedef void ( * PFNGLNORMAL3HVNVPROC) (const GLhalfNV *v);
typedef void ( * PFNGLCOLOR3HNVPROC) (GLhalfNV red, GLhalfNV green, GLhalfNV blue);
typedef void ( * PFNGLCOLOR3HVNVPROC) (const GLhalfNV *v);
typedef void ( * PFNGLCOLOR4HNVPROC) (GLhalfNV red, GLhalfNV green, GLhalfNV blue, GLhalfNV alpha);
typedef void ( * PFNGLCOLOR4HVNVPROC) (const GLhalfNV *v);
typedef void ( * PFNGLTEXCOORD1HNVPROC) (GLhalfNV s);
typedef void ( * PFNGLTEXCOORD1HVNVPROC) (const GLhalfNV *v);
typedef void ( * PFNGLTEXCOORD2HNVPROC) (GLhalfNV s, GLhalfNV t);
typedef void ( * PFNGLTEXCOORD2HVNVPROC) (const GLhalfNV *v);
typedef void ( * PFNGLTEXCOORD3HNVPROC) (GLhalfNV s, GLhalfNV t, GLhalfNV r);
typedef void ( * PFNGLTEXCOORD3HVNVPROC) (const GLhalfNV *v);
typedef void ( * PFNGLTEXCOORD4HNVPROC) (GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q);
typedef void ( * PFNGLTEXCOORD4HVNVPROC) (const GLhalfNV *v);
typedef void ( * PFNGLMULTITEXCOORD1HNVPROC) (GLenum target, GLhalfNV s);
typedef void ( * PFNGLMULTITEXCOORD1HVNVPROC) (GLenum target, const GLhalfNV *v);
typedef void ( * PFNGLMULTITEXCOORD2HNVPROC) (GLenum target, GLhalfNV s, GLhalfNV t);
typedef void ( * PFNGLMULTITEXCOORD2HVNVPROC) (GLenum target, const GLhalfNV *v);
typedef void ( * PFNGLMULTITEXCOORD3HNVPROC) (GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r);
typedef void ( * PFNGLMULTITEXCOORD3HVNVPROC) (GLenum target, const GLhalfNV *v);
typedef void ( * PFNGLMULTITEXCOORD4HNVPROC) (GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q);
typedef void ( * PFNGLMULTITEXCOORD4HVNVPROC) (GLenum target, const GLhalfNV *v);
typedef void ( * PFNGLFOGCOORDHNVPROC) (GLhalfNV fog);
typedef void ( * PFNGLFOGCOORDHVNVPROC) (const GLhalfNV *fog);
typedef void ( * PFNGLSECONDARYCOLOR3HNVPROC) (GLhalfNV red, GLhalfNV green, GLhalfNV blue);
typedef void ( * PFNGLSECONDARYCOLOR3HVNVPROC) (const GLhalfNV *v);
typedef void ( * PFNGLVERTEXWEIGHTHNVPROC) (GLhalfNV weight);
typedef void ( * PFNGLVERTEXWEIGHTHVNVPROC) (const GLhalfNV *weight);
typedef void ( * PFNGLVERTEXATTRIB1HNVPROC) (GLuint index, GLhalfNV x);
typedef void ( * PFNGLVERTEXATTRIB1HVNVPROC) (GLuint index, const GLhalfNV *v);
typedef void ( * PFNGLVERTEXATTRIB2HNVPROC) (GLuint index, GLhalfNV x, GLhalfNV y);
typedef void ( * PFNGLVERTEXATTRIB2HVNVPROC) (GLuint index, const GLhalfNV *v);
typedef void ( * PFNGLVERTEXATTRIB3HNVPROC) (GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z);
typedef void ( * PFNGLVERTEXATTRIB3HVNVPROC) (GLuint index, const GLhalfNV *v);
typedef void ( * PFNGLVERTEXATTRIB4HNVPROC) (GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w);
typedef void ( * PFNGLVERTEXATTRIB4HVNVPROC) (GLuint index, const GLhalfNV *v);
typedef void ( * PFNGLVERTEXATTRIBS1HVNVPROC) (GLuint index, GLsizei n, const GLhalfNV *v);
typedef void ( * PFNGLVERTEXATTRIBS2HVNVPROC) (GLuint index, GLsizei n, const GLhalfNV *v);
typedef void ( * PFNGLVERTEXATTRIBS3HVNVPROC) (GLuint index, GLsizei n, const GLhalfNV *v);
typedef void ( * PFNGLVERTEXATTRIBS4HVNVPROC) (GLuint index, GLsizei n, const GLhalfNV *v);
# 7512 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLPIXELDATARANGENVPROC) (GLenum target, GLsizei length, GLvoid *pointer);
typedef void ( * PFNGLFLUSHPIXELDATARANGENVPROC) (GLenum target);
# 7522 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLPRIMITIVERESTARTNVPROC) (void);
typedef void ( * PFNGLPRIMITIVERESTARTINDEXNVPROC) (GLuint index);
# 7540 "/usr/include/GL/glext.h" 3 4
typedef GLvoid* ( * PFNGLMAPOBJECTBUFFERATIPROC) (GLuint buffer);
typedef void ( * PFNGLUNMAPOBJECTBUFFERATIPROC) (GLuint buffer);
# 7550 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLSTENCILOPSEPARATEATIPROC) (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
typedef void ( * PFNGLSTENCILFUNCSEPARATEATIPROC) (GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask);
# 7561 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLVERTEXATTRIBARRAYOBJECTATIPROC) (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLuint buffer, GLuint offset);
typedef void ( * PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC) (GLuint index, GLenum pname, GLfloat *params);
typedef void ( * PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC) (GLuint index, GLenum pname, GLint *params);
# 7575 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLDEPTHBOUNDSEXTPROC) (GLclampd zmin, GLclampd zmax);
# 7587 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLBLENDEQUATIONSEPARATEEXTPROC) (GLenum modeRGB, GLenum modeAlpha);
# 7639 "/usr/include/GL/glext.h" 3 4
typedef GLboolean ( * PFNGLISRENDERBUFFEREXTPROC) (GLuint renderbuffer);
typedef void ( * PFNGLBINDRENDERBUFFEREXTPROC) (GLenum target, GLuint renderbuffer);
typedef void ( * PFNGLDELETERENDERBUFFERSEXTPROC) (GLsizei n, const GLuint *renderbuffers);
typedef void ( * PFNGLGENRENDERBUFFERSEXTPROC) (GLsizei n, GLuint *renderbuffers);
typedef void ( * PFNGLRENDERBUFFERSTORAGEEXTPROC) (GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
typedef void ( * PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC) (GLenum target, GLenum pname, GLint *params);
typedef GLboolean ( * PFNGLISFRAMEBUFFEREXTPROC) (GLuint framebuffer);
typedef void ( * PFNGLBINDFRAMEBUFFEREXTPROC) (GLenum target, GLuint framebuffer);
typedef void ( * PFNGLDELETEFRAMEBUFFERSEXTPROC) (GLsizei n, const GLuint *framebuffers);
typedef void ( * PFNGLGENFRAMEBUFFERSEXTPROC) (GLsizei n, GLuint *framebuffers);
typedef GLenum ( * PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC) (GLenum target);
typedef void ( * PFNGLFRAMEBUFFERTEXTURE1DEXTPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void ( * PFNGLFRAMEBUFFERTEXTURE2DEXTPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void ( * PFNGLFRAMEBUFFERTEXTURE3DEXTPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
typedef void ( * PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC) (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef void ( * PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC) (GLenum target, GLenum attachment, GLenum pname, GLint *params);
typedef void ( * PFNGLGENERATEMIPMAPEXTPROC) (GLenum target);







typedef void ( * PFNGLSTRINGMARKERGREMEDYPROC) (GLsizei len, const GLvoid *string);
# 7675 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLSTENCILCLEARTAGEXTPROC) (GLsizei stencilTagBits, GLuint stencilClearTag);
# 7687 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLBLITFRAMEBUFFEREXTPROC) (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);







typedef void ( * PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
# 7708 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLGETQUERYOBJECTI64VEXTPROC) (GLuint id, GLenum pname, GLint64EXT *params);
typedef void ( * PFNGLGETQUERYOBJECTUI64VEXTPROC) (GLuint id, GLenum pname, GLuint64EXT *params);
# 7718 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLPROGRAMENVPARAMETERS4FVEXTPROC) (GLenum target, GLuint index, GLsizei count, const GLfloat *params);
typedef void ( * PFNGLPROGRAMLOCALPARAMETERS4FVEXTPROC) (GLenum target, GLuint index, GLsizei count, const GLfloat *params);
# 7728 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLBUFFERPARAMETERIAPPLEPROC) (GLenum target, GLenum pname, GLint param);
typedef void ( * PFNGLFLUSHMAPPEDBUFFERRANGEAPPLEPROC) (GLenum target, GLintptr offset, GLsizeiptr size);
# 7752 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLPROGRAMLOCALPARAMETERI4INVPROC) (GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w);
typedef void ( * PFNGLPROGRAMLOCALPARAMETERI4IVNVPROC) (GLenum target, GLuint index, const GLint *params);
typedef void ( * PFNGLPROGRAMLOCALPARAMETERSI4IVNVPROC) (GLenum target, GLuint index, GLsizei count, const GLint *params);
typedef void ( * PFNGLPROGRAMLOCALPARAMETERI4UINVPROC) (GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
typedef void ( * PFNGLPROGRAMLOCALPARAMETERI4UIVNVPROC) (GLenum target, GLuint index, const GLuint *params);
typedef void ( * PFNGLPROGRAMLOCALPARAMETERSI4UIVNVPROC) (GLenum target, GLuint index, GLsizei count, const GLuint *params);
typedef void ( * PFNGLPROGRAMENVPARAMETERI4INVPROC) (GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w);
typedef void ( * PFNGLPROGRAMENVPARAMETERI4IVNVPROC) (GLenum target, GLuint index, const GLint *params);
typedef void ( * PFNGLPROGRAMENVPARAMETERSI4IVNVPROC) (GLenum target, GLuint index, GLsizei count, const GLint *params);
typedef void ( * PFNGLPROGRAMENVPARAMETERI4UINVPROC) (GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
typedef void ( * PFNGLPROGRAMENVPARAMETERI4UIVNVPROC) (GLenum target, GLuint index, const GLuint *params);
typedef void ( * PFNGLPROGRAMENVPARAMETERSI4UIVNVPROC) (GLenum target, GLuint index, GLsizei count, const GLuint *params);
typedef void ( * PFNGLGETPROGRAMLOCALPARAMETERIIVNVPROC) (GLenum target, GLuint index, GLint *params);
typedef void ( * PFNGLGETPROGRAMLOCALPARAMETERIUIVNVPROC) (GLenum target, GLuint index, GLuint *params);
typedef void ( * PFNGLGETPROGRAMENVPARAMETERIIVNVPROC) (GLenum target, GLuint index, GLint *params);
typedef void ( * PFNGLGETPROGRAMENVPARAMETERIUIVNVPROC) (GLenum target, GLuint index, GLuint *params);
# 7778 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLPROGRAMVERTEXLIMITNVPROC) (GLenum target, GLint limit);
typedef void ( * PFNGLFRAMEBUFFERTEXTUREEXTPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level);
typedef void ( * PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
typedef void ( * PFNGLFRAMEBUFFERTEXTUREFACEEXTPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face);







typedef void ( * PFNGLPROGRAMPARAMETERIEXTPROC) (GLuint program, GLenum pname, GLint value);
# 7819 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLVERTEXATTRIBI1IEXTPROC) (GLuint index, GLint x);
typedef void ( * PFNGLVERTEXATTRIBI2IEXTPROC) (GLuint index, GLint x, GLint y);
typedef void ( * PFNGLVERTEXATTRIBI3IEXTPROC) (GLuint index, GLint x, GLint y, GLint z);
typedef void ( * PFNGLVERTEXATTRIBI4IEXTPROC) (GLuint index, GLint x, GLint y, GLint z, GLint w);
typedef void ( * PFNGLVERTEXATTRIBI1UIEXTPROC) (GLuint index, GLuint x);
typedef void ( * PFNGLVERTEXATTRIBI2UIEXTPROC) (GLuint index, GLuint x, GLuint y);
typedef void ( * PFNGLVERTEXATTRIBI3UIEXTPROC) (GLuint index, GLuint x, GLuint y, GLuint z);
typedef void ( * PFNGLVERTEXATTRIBI4UIEXTPROC) (GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
typedef void ( * PFNGLVERTEXATTRIBI1IVEXTPROC) (GLuint index, const GLint *v);
typedef void ( * PFNGLVERTEXATTRIBI2IVEXTPROC) (GLuint index, const GLint *v);
typedef void ( * PFNGLVERTEXATTRIBI3IVEXTPROC) (GLuint index, const GLint *v);
typedef void ( * PFNGLVERTEXATTRIBI4IVEXTPROC) (GLuint index, const GLint *v);
typedef void ( * PFNGLVERTEXATTRIBI1UIVEXTPROC) (GLuint index, const GLuint *v);
typedef void ( * PFNGLVERTEXATTRIBI2UIVEXTPROC) (GLuint index, const GLuint *v);
typedef void ( * PFNGLVERTEXATTRIBI3UIVEXTPROC) (GLuint index, const GLuint *v);
typedef void ( * PFNGLVERTEXATTRIBI4UIVEXTPROC) (GLuint index, const GLuint *v);
typedef void ( * PFNGLVERTEXATTRIBI4BVEXTPROC) (GLuint index, const GLbyte *v);
typedef void ( * PFNGLVERTEXATTRIBI4SVEXTPROC) (GLuint index, const GLshort *v);
typedef void ( * PFNGLVERTEXATTRIBI4UBVEXTPROC) (GLuint index, const GLubyte *v);
typedef void ( * PFNGLVERTEXATTRIBI4USVEXTPROC) (GLuint index, const GLushort *v);
typedef void ( * PFNGLVERTEXATTRIBIPOINTEREXTPROC) (GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
typedef void ( * PFNGLGETVERTEXATTRIBIIVEXTPROC) (GLuint index, GLenum pname, GLint *params);
typedef void ( * PFNGLGETVERTEXATTRIBIUIVEXTPROC) (GLuint index, GLenum pname, GLuint *params);
# 7859 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLGETUNIFORMUIVEXTPROC) (GLuint program, GLint location, GLuint *params);
typedef void ( * PFNGLBINDFRAGDATALOCATIONEXTPROC) (GLuint program, GLuint color, const GLchar *name);
typedef GLint ( * PFNGLGETFRAGDATALOCATIONEXTPROC) (GLuint program, const GLchar *name);
typedef void ( * PFNGLUNIFORM1UIEXTPROC) (GLint location, GLuint v0);
typedef void ( * PFNGLUNIFORM2UIEXTPROC) (GLint location, GLuint v0, GLuint v1);
typedef void ( * PFNGLUNIFORM3UIEXTPROC) (GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void ( * PFNGLUNIFORM4UIEXTPROC) (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void ( * PFNGLUNIFORM1UIVEXTPROC) (GLint location, GLsizei count, const GLuint *value);
typedef void ( * PFNGLUNIFORM2UIVEXTPROC) (GLint location, GLsizei count, const GLuint *value);
typedef void ( * PFNGLUNIFORM3UIVEXTPROC) (GLint location, GLsizei count, const GLuint *value);
typedef void ( * PFNGLUNIFORM4UIVEXTPROC) (GLint location, GLsizei count, const GLuint *value);
# 7878 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLDRAWARRAYSINSTANCEDEXTPROC) (GLenum mode, GLint start, GLsizei count, GLsizei primcount);
typedef void ( * PFNGLDRAWELEMENTSINSTANCEDEXTPROC) (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount);
# 7895 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLTEXBUFFEREXTPROC) (GLenum target, GLenum internalformat, GLuint buffer);
# 7917 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLDEPTHRANGEDNVPROC) (GLdouble zNear, GLdouble zFar);
typedef void ( * PFNGLCLEARDEPTHDNVPROC) (GLdouble depth);
typedef void ( * PFNGLDEPTHBOUNDSDNVPROC) (GLdouble zmin, GLdouble zmax);
# 7931 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC) (GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height);
# 7949 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLPROGRAMBUFFERPARAMETERSFVNVPROC) (GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLfloat *params);
typedef void ( * PFNGLPROGRAMBUFFERPARAMETERSIIVNVPROC) (GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLint *params);
typedef void ( * PFNGLPROGRAMBUFFERPARAMETERSIUIVNVPROC) (GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLuint *params);
# 7964 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLCOLORMASKINDEXEDEXTPROC) (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
typedef void ( * PFNGLGETBOOLEANINDEXEDVEXTPROC) (GLenum target, GLuint index, GLboolean *data);
typedef void ( * PFNGLGETINTEGERINDEXEDVEXTPROC) (GLenum target, GLuint index, GLint *data);
typedef void ( * PFNGLENABLEINDEXEDEXTPROC) (GLenum target, GLuint index);
typedef void ( * PFNGLDISABLEINDEXEDEXTPROC) (GLenum target, GLuint index);
typedef GLboolean ( * PFNGLISENABLEDINDEXEDEXTPROC) (GLenum target, GLuint index);
# 7987 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLBEGINTRANSFORMFEEDBACKNVPROC) (GLenum primitiveMode);
typedef void ( * PFNGLENDTRANSFORMFEEDBACKNVPROC) (void);
typedef void ( * PFNGLTRANSFORMFEEDBACKATTRIBSNVPROC) (GLuint count, const GLint *attribs, GLenum bufferMode);
typedef void ( * PFNGLBINDBUFFERRANGENVPROC) (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void ( * PFNGLBINDBUFFEROFFSETNVPROC) (GLenum target, GLuint index, GLuint buffer, GLintptr offset);
typedef void ( * PFNGLBINDBUFFERBASENVPROC) (GLenum target, GLuint index, GLuint buffer);
typedef void ( * PFNGLTRANSFORMFEEDBACKVARYINGSNVPROC) (GLuint program, GLsizei count, const GLint *locations, GLenum bufferMode);
typedef void ( * PFNGLACTIVEVARYINGNVPROC) (GLuint program, const GLchar *name);
typedef GLint ( * PFNGLGETVARYINGLOCATIONNVPROC) (GLuint program, const GLchar *name);
typedef void ( * PFNGLGETACTIVEVARYINGNVPROC) (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
typedef void ( * PFNGLGETTRANSFORMFEEDBACKVARYINGNVPROC) (GLuint program, GLuint index, GLint *location);
# 8007 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLUNIFORMBUFFEREXTPROC) (GLuint program, GLint location, GLuint buffer);
typedef GLint ( * PFNGLGETUNIFORMBUFFERSIZEEXTPROC) (GLuint program, GLint location);
typedef GLintptr ( * PFNGLGETUNIFORMOFFSETEXTPROC) (GLuint program, GLint location);
# 8022 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLTEXPARAMETERIIVEXTPROC) (GLenum target, GLenum pname, const GLint *params);
typedef void ( * PFNGLTEXPARAMETERIUIVEXTPROC) (GLenum target, GLenum pname, const GLuint *params);
typedef void ( * PFNGLGETTEXPARAMETERIIVEXTPROC) (GLenum target, GLenum pname, GLint *params);
typedef void ( * PFNGLGETTEXPARAMETERIUIVEXTPROC) (GLenum target, GLenum pname, GLuint *params);
typedef void ( * PFNGLCLEARCOLORIIEXTPROC) (GLint red, GLint green, GLint blue, GLint alpha);
typedef void ( * PFNGLCLEARCOLORIUIEXTPROC) (GLuint red, GLuint green, GLuint blue, GLuint alpha);







typedef void ( * PFNGLFRAMETERMINATORGREMEDYPROC) (void);
# 8044 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLBEGINCONDITIONALRENDERNVPROC) (GLuint id, GLenum mode);
typedef void ( * PFNGLENDCONDITIONALRENDERNVPROC) (void);
# 8059 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLPRESENTFRAMEKEYEDNVPROC) (GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLuint key0, GLenum target1, GLuint fill1, GLuint key1);
typedef void ( * PFNGLPRESENTFRAMEDUALFILLNVPROC) (GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLenum target1, GLuint fill1, GLenum target2, GLuint fill2, GLenum target3, GLuint fill3);
typedef void ( * PFNGLGETVIDEOIVNVPROC) (GLuint video_slot, GLenum pname, GLint *params);
typedef void ( * PFNGLGETVIDEOUIVNVPROC) (GLuint video_slot, GLenum pname, GLuint *params);
typedef void ( * PFNGLGETVIDEOI64VNVPROC) (GLuint video_slot, GLenum pname, GLint64EXT *params);
typedef void ( * PFNGLGETVIDEOUI64VNVPROC) (GLuint video_slot, GLenum pname, GLuint64EXT *params);
typedef void ( * PFNGLVIDEOPARAMETERIVNVPROC) (GLuint video_slot, GLenum pname, const GLint *params);
# 8079 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLBEGINTRANSFORMFEEDBACKEXTPROC) (GLenum primitiveMode);
typedef void ( * PFNGLENDTRANSFORMFEEDBACKEXTPROC) (void);
typedef void ( * PFNGLBINDBUFFERRANGEEXTPROC) (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void ( * PFNGLBINDBUFFEROFFSETEXTPROC) (GLenum target, GLuint index, GLuint buffer, GLintptr offset);
typedef void ( * PFNGLBINDBUFFERBASEEXTPROC) (GLenum target, GLuint index, GLuint buffer);
typedef void ( * PFNGLTRANSFORMFEEDBACKVARYINGSEXTPROC) (GLuint program, GLsizei count, const GLchar* *varyings, GLenum bufferMode);
typedef void ( * PFNGLGETTRANSFORMFEEDBACKVARYINGEXTPROC) (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
# 8278 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLCLIENTATTRIBDEFAULTEXTPROC) (GLbitfield mask);
typedef void ( * PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC) (GLbitfield mask);
typedef void ( * PFNGLMATRIXLOADFEXTPROC) (GLenum mode, const GLfloat *m);
typedef void ( * PFNGLMATRIXLOADDEXTPROC) (GLenum mode, const GLdouble *m);
typedef void ( * PFNGLMATRIXMULTFEXTPROC) (GLenum mode, const GLfloat *m);
typedef void ( * PFNGLMATRIXMULTDEXTPROC) (GLenum mode, const GLdouble *m);
typedef void ( * PFNGLMATRIXLOADIDENTITYEXTPROC) (GLenum mode);
typedef void ( * PFNGLMATRIXROTATEFEXTPROC) (GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
typedef void ( * PFNGLMATRIXROTATEDEXTPROC) (GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
typedef void ( * PFNGLMATRIXSCALEFEXTPROC) (GLenum mode, GLfloat x, GLfloat y, GLfloat z);
typedef void ( * PFNGLMATRIXSCALEDEXTPROC) (GLenum mode, GLdouble x, GLdouble y, GLdouble z);
typedef void ( * PFNGLMATRIXTRANSLATEFEXTPROC) (GLenum mode, GLfloat x, GLfloat y, GLfloat z);
typedef void ( * PFNGLMATRIXTRANSLATEDEXTPROC) (GLenum mode, GLdouble x, GLdouble y, GLdouble z);
typedef void ( * PFNGLMATRIXFRUSTUMEXTPROC) (GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
typedef void ( * PFNGLMATRIXORTHOEXTPROC) (GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
typedef void ( * PFNGLMATRIXPOPEXTPROC) (GLenum mode);
typedef void ( * PFNGLMATRIXPUSHEXTPROC) (GLenum mode);
typedef void ( * PFNGLMATRIXLOADTRANSPOSEFEXTPROC) (GLenum mode, const GLfloat *m);
typedef void ( * PFNGLMATRIXLOADTRANSPOSEDEXTPROC) (GLenum mode, const GLdouble *m);
typedef void ( * PFNGLMATRIXMULTTRANSPOSEFEXTPROC) (GLenum mode, const GLfloat *m);
typedef void ( * PFNGLMATRIXMULTTRANSPOSEDEXTPROC) (GLenum mode, const GLdouble *m);
typedef void ( * PFNGLTEXTUREPARAMETERFEXTPROC) (GLuint texture, GLenum target, GLenum pname, GLfloat param);
typedef void ( * PFNGLTEXTUREPARAMETERFVEXTPROC) (GLuint texture, GLenum target, GLenum pname, const GLfloat *params);
typedef void ( * PFNGLTEXTUREPARAMETERIEXTPROC) (GLuint texture, GLenum target, GLenum pname, GLint param);
typedef void ( * PFNGLTEXTUREPARAMETERIVEXTPROC) (GLuint texture, GLenum target, GLenum pname, const GLint *params);
typedef void ( * PFNGLTEXTUREIMAGE1DEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
typedef void ( * PFNGLTEXTUREIMAGE2DEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
typedef void ( * PFNGLTEXTURESUBIMAGE1DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels);
typedef void ( * PFNGLTEXTURESUBIMAGE2DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels);
typedef void ( * PFNGLCOPYTEXTUREIMAGE1DEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
typedef void ( * PFNGLCOPYTEXTUREIMAGE2DEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
typedef void ( * PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
typedef void ( * PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void ( * PFNGLGETTEXTUREIMAGEEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels);
typedef void ( * PFNGLGETTEXTUREPARAMETERFVEXTPROC) (GLuint texture, GLenum target, GLenum pname, GLfloat *params);
typedef void ( * PFNGLGETTEXTUREPARAMETERIVEXTPROC) (GLuint texture, GLenum target, GLenum pname, GLint *params);
typedef void ( * PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat *params);
typedef void ( * PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum pname, GLint *params);
typedef void ( * PFNGLTEXTUREIMAGE3DEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
typedef void ( * PFNGLTEXTURESUBIMAGE3DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels);
typedef void ( * PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void ( * PFNGLMULTITEXPARAMETERFEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLfloat param);
typedef void ( * PFNGLMULTITEXPARAMETERFVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, const GLfloat *params);
typedef void ( * PFNGLMULTITEXPARAMETERIEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLint param);
typedef void ( * PFNGLMULTITEXPARAMETERIVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, const GLint *params);
typedef void ( * PFNGLMULTITEXIMAGE1DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
typedef void ( * PFNGLMULTITEXIMAGE2DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
typedef void ( * PFNGLMULTITEXSUBIMAGE1DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels);
typedef void ( * PFNGLMULTITEXSUBIMAGE2DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels);
typedef void ( * PFNGLCOPYMULTITEXIMAGE1DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
typedef void ( * PFNGLCOPYMULTITEXIMAGE2DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
typedef void ( * PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
typedef void ( * PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void ( * PFNGLGETMULTITEXIMAGEEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels);
typedef void ( * PFNGLGETMULTITEXPARAMETERFVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLfloat *params);
typedef void ( * PFNGLGETMULTITEXPARAMETERIVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLint *params);
typedef void ( * PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat *params);
typedef void ( * PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum pname, GLint *params);
typedef void ( * PFNGLMULTITEXIMAGE3DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
typedef void ( * PFNGLMULTITEXSUBIMAGE3DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels);
typedef void ( * PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void ( * PFNGLBINDMULTITEXTUREEXTPROC) (GLenum texunit, GLenum target, GLuint texture);
typedef void ( * PFNGLENABLECLIENTSTATEINDEXEDEXTPROC) (GLenum array, GLuint index);
typedef void ( * PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC) (GLenum array, GLuint index);
typedef void ( * PFNGLMULTITEXCOORDPOINTEREXTPROC) (GLenum texunit, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
typedef void ( * PFNGLMULTITEXENVFEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLfloat param);
typedef void ( * PFNGLMULTITEXENVFVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, const GLfloat *params);
typedef void ( * PFNGLMULTITEXENVIEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLint param);
typedef void ( * PFNGLMULTITEXENVIVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, const GLint *params);
typedef void ( * PFNGLMULTITEXGENDEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, GLdouble param);
typedef void ( * PFNGLMULTITEXGENDVEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, const GLdouble *params);
typedef void ( * PFNGLMULTITEXGENFEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, GLfloat param);
typedef void ( * PFNGLMULTITEXGENFVEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, const GLfloat *params);
typedef void ( * PFNGLMULTITEXGENIEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, GLint param);
typedef void ( * PFNGLMULTITEXGENIVEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, const GLint *params);
typedef void ( * PFNGLGETMULTITEXENVFVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLfloat *params);
typedef void ( * PFNGLGETMULTITEXENVIVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLint *params);
typedef void ( * PFNGLGETMULTITEXGENDVEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, GLdouble *params);
typedef void ( * PFNGLGETMULTITEXGENFVEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, GLfloat *params);
typedef void ( * PFNGLGETMULTITEXGENIVEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, GLint *params);
typedef void ( * PFNGLGETFLOATINDEXEDVEXTPROC) (GLenum target, GLuint index, GLfloat *data);
typedef void ( * PFNGLGETDOUBLEINDEXEDVEXTPROC) (GLenum target, GLuint index, GLdouble *data);
typedef void ( * PFNGLGETPOINTERINDEXEDVEXTPROC) (GLenum target, GLuint index, GLvoid* *data);
typedef void ( * PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *bits);
typedef void ( * PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *bits);
typedef void ( * PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *bits);
typedef void ( * PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *bits);
typedef void ( * PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *bits);
typedef void ( * PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *bits);
typedef void ( * PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC) (GLuint texture, GLenum target, GLint lod, GLvoid *img);
typedef void ( * PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *bits);
typedef void ( * PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *bits);
typedef void ( * PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *bits);
typedef void ( * PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *bits);
typedef void ( * PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *bits);
typedef void ( * PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *bits);
typedef void ( * PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC) (GLenum texunit, GLenum target, GLint lod, GLvoid *img);
typedef void ( * PFNGLNAMEDPROGRAMSTRINGEXTPROC) (GLuint program, GLenum target, GLenum format, GLsizei len, const GLvoid *string);
typedef void ( * PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC) (GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void ( * PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC) (GLuint program, GLenum target, GLuint index, const GLdouble *params);
typedef void ( * PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC) (GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void ( * PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC) (GLuint program, GLenum target, GLuint index, const GLfloat *params);
typedef void ( * PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC) (GLuint program, GLenum target, GLuint index, GLdouble *params);
typedef void ( * PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC) (GLuint program, GLenum target, GLuint index, GLfloat *params);
typedef void ( * PFNGLGETNAMEDPROGRAMIVEXTPROC) (GLuint program, GLenum target, GLenum pname, GLint *params);
typedef void ( * PFNGLGETNAMEDPROGRAMSTRINGEXTPROC) (GLuint program, GLenum target, GLenum pname, GLvoid *string);
typedef void ( * PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC) (GLuint program, GLenum target, GLuint index, GLsizei count, const GLfloat *params);
typedef void ( * PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC) (GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w);
typedef void ( * PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC) (GLuint program, GLenum target, GLuint index, const GLint *params);
typedef void ( * PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC) (GLuint program, GLenum target, GLuint index, GLsizei count, const GLint *params);
typedef void ( * PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC) (GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
typedef void ( * PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC) (GLuint program, GLenum target, GLuint index, const GLuint *params);
typedef void ( * PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC) (GLuint program, GLenum target, GLuint index, GLsizei count, const GLuint *params);
typedef void ( * PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC) (GLuint program, GLenum target, GLuint index, GLint *params);
typedef void ( * PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC) (GLuint program, GLenum target, GLuint index, GLuint *params);
typedef void ( * PFNGLTEXTUREPARAMETERIIVEXTPROC) (GLuint texture, GLenum target, GLenum pname, const GLint *params);
typedef void ( * PFNGLTEXTUREPARAMETERIUIVEXTPROC) (GLuint texture, GLenum target, GLenum pname, const GLuint *params);
typedef void ( * PFNGLGETTEXTUREPARAMETERIIVEXTPROC) (GLuint texture, GLenum target, GLenum pname, GLint *params);
typedef void ( * PFNGLGETTEXTUREPARAMETERIUIVEXTPROC) (GLuint texture, GLenum target, GLenum pname, GLuint *params);
typedef void ( * PFNGLMULTITEXPARAMETERIIVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, const GLint *params);
typedef void ( * PFNGLMULTITEXPARAMETERIUIVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, const GLuint *params);
typedef void ( * PFNGLGETMULTITEXPARAMETERIIVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLint *params);
typedef void ( * PFNGLGETMULTITEXPARAMETERIUIVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLuint *params);
typedef void ( * PFNGLPROGRAMUNIFORM1FEXTPROC) (GLuint program, GLint location, GLfloat v0);
typedef void ( * PFNGLPROGRAMUNIFORM2FEXTPROC) (GLuint program, GLint location, GLfloat v0, GLfloat v1);
typedef void ( * PFNGLPROGRAMUNIFORM3FEXTPROC) (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void ( * PFNGLPROGRAMUNIFORM4FEXTPROC) (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void ( * PFNGLPROGRAMUNIFORM1IEXTPROC) (GLuint program, GLint location, GLint v0);
typedef void ( * PFNGLPROGRAMUNIFORM2IEXTPROC) (GLuint program, GLint location, GLint v0, GLint v1);
typedef void ( * PFNGLPROGRAMUNIFORM3IEXTPROC) (GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
typedef void ( * PFNGLPROGRAMUNIFORM4IEXTPROC) (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void ( * PFNGLPROGRAMUNIFORM1FVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void ( * PFNGLPROGRAMUNIFORM2FVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void ( * PFNGLPROGRAMUNIFORM3FVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void ( * PFNGLPROGRAMUNIFORM4FVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void ( * PFNGLPROGRAMUNIFORM1IVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void ( * PFNGLPROGRAMUNIFORM2IVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void ( * PFNGLPROGRAMUNIFORM3IVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void ( * PFNGLPROGRAMUNIFORM4IVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void ( * PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void ( * PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void ( * PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void ( * PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void ( * PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void ( * PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void ( * PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void ( * PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void ( * PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void ( * PFNGLPROGRAMUNIFORM1UIEXTPROC) (GLuint program, GLint location, GLuint v0);
typedef void ( * PFNGLPROGRAMUNIFORM2UIEXTPROC) (GLuint program, GLint location, GLuint v0, GLuint v1);
typedef void ( * PFNGLPROGRAMUNIFORM3UIEXTPROC) (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void ( * PFNGLPROGRAMUNIFORM4UIEXTPROC) (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void ( * PFNGLPROGRAMUNIFORM1UIVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void ( * PFNGLPROGRAMUNIFORM2UIVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void ( * PFNGLPROGRAMUNIFORM3UIVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void ( * PFNGLPROGRAMUNIFORM4UIVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void ( * PFNGLNAMEDBUFFERDATAEXTPROC) (GLuint buffer, GLsizeiptr size, const GLvoid *data, GLenum usage);
typedef void ( * PFNGLNAMEDBUFFERSUBDATAEXTPROC) (GLuint buffer, GLintptr offset, GLsizeiptr size, const GLvoid *data);
typedef GLvoid* ( * PFNGLMAPNAMEDBUFFEREXTPROC) (GLuint buffer, GLenum access);
typedef GLboolean ( * PFNGLUNMAPNAMEDBUFFEREXTPROC) (GLuint buffer);
typedef void ( * PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC) (GLuint buffer, GLenum pname, GLint *params);
typedef void ( * PFNGLGETNAMEDBUFFERPOINTERVEXTPROC) (GLuint buffer, GLenum pname, GLvoid* *params);
typedef void ( * PFNGLGETNAMEDBUFFERSUBDATAEXTPROC) (GLuint buffer, GLintptr offset, GLsizeiptr size, GLvoid *data);
typedef void ( * PFNGLTEXTUREBUFFEREXTPROC) (GLuint texture, GLenum target, GLenum internalformat, GLuint buffer);
typedef void ( * PFNGLMULTITEXBUFFEREXTPROC) (GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer);
typedef void ( * PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC) (GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
typedef void ( * PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC) (GLuint renderbuffer, GLenum pname, GLint *params);
typedef GLenum ( * PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC) (GLuint framebuffer, GLenum target);
typedef void ( * PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC) (GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void ( * PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC) (GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void ( * PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC) (GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
typedef void ( * PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC) (GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef void ( * PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC) (GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params);
typedef void ( * PFNGLGENERATETEXTUREMIPMAPEXTPROC) (GLuint texture, GLenum target);
typedef void ( * PFNGLGENERATEMULTITEXMIPMAPEXTPROC) (GLenum texunit, GLenum target);
typedef void ( * PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC) (GLuint framebuffer, GLenum mode);
typedef void ( * PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC) (GLuint framebuffer, GLsizei n, const GLenum *bufs);
typedef void ( * PFNGLFRAMEBUFFERREADBUFFEREXTPROC) (GLuint framebuffer, GLenum mode);
typedef void ( * PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC) (GLuint framebuffer, GLenum pname, GLint *params);
typedef void ( * PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC) (GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void ( * PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC) (GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void ( * PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC) (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
typedef void ( * PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC) (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
typedef void ( * PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC) (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face);
typedef void ( * PFNGLTEXTURERENDERBUFFEREXTPROC) (GLuint texture, GLenum target, GLuint renderbuffer);
typedef void ( * PFNGLMULTITEXRENDERBUFFEREXTPROC) (GLenum texunit, GLenum target, GLuint renderbuffer);
# 8481 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLGETMULTISAMPLEFVNVPROC) (GLenum pname, GLuint index, GLfloat *val);
typedef void ( * PFNGLSAMPLEMASKINDEXEDNVPROC) (GLuint index, GLbitfield mask);
typedef void ( * PFNGLTEXRENDERBUFFERNVPROC) (GLenum target, GLuint renderbuffer);
# 8497 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLBINDTRANSFORMFEEDBACKNVPROC) (GLenum target, GLuint id);
typedef void ( * PFNGLDELETETRANSFORMFEEDBACKSNVPROC) (GLsizei n, const GLuint *ids);
typedef void ( * PFNGLGENTRANSFORMFEEDBACKSNVPROC) (GLsizei n, GLuint *ids);
typedef GLboolean ( * PFNGLISTRANSFORMFEEDBACKNVPROC) (GLuint id);
typedef void ( * PFNGLPAUSETRANSFORMFEEDBACKNVPROC) (void);
typedef void ( * PFNGLRESUMETRANSFORMFEEDBACKNVPROC) (void);
typedef void ( * PFNGLDRAWTRANSFORMFEEDBACKNVPROC) (GLenum mode, GLuint id);
# 8525 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLGETPERFMONITORGROUPSAMDPROC) (GLint *numGroups, GLsizei groupsSize, GLuint *groups);
typedef void ( * PFNGLGETPERFMONITORCOUNTERSAMDPROC) (GLuint group, GLint *numCounters, GLint *maxActiveCounters, GLsizei counterSize, GLuint *counters);
typedef void ( * PFNGLGETPERFMONITORGROUPSTRINGAMDPROC) (GLuint group, GLsizei bufSize, GLsizei *length, GLchar *groupString);
typedef void ( * PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC) (GLuint group, GLuint counter, GLsizei bufSize, GLsizei *length, GLchar *counterString);
typedef void ( * PFNGLGETPERFMONITORCOUNTERINFOAMDPROC) (GLuint group, GLuint counter, GLenum pname, void *data);
typedef void ( * PFNGLGENPERFMONITORSAMDPROC) (GLsizei n, GLuint *monitors);
typedef void ( * PFNGLDELETEPERFMONITORSAMDPROC) (GLsizei n, GLuint *monitors);
typedef void ( * PFNGLSELECTPERFMONITORCOUNTERSAMDPROC) (GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint *counterList);
typedef void ( * PFNGLBEGINPERFMONITORAMDPROC) (GLuint monitor);
typedef void ( * PFNGLENDPERFMONITORAMDPROC) (GLuint monitor);
typedef void ( * PFNGLGETPERFMONITORCOUNTERDATAAMDPROC) (GLuint monitor, GLenum pname, GLsizei dataSize, GLuint *data, GLint *bytesWritten);
# 8548 "/usr/include/GL/glext.h" 3 4
typedef void ( * PFNGLTESSELLATIONFACTORAMDPROC) (GLfloat factor);
typedef void ( * PFNGLTESSELLATIONMODEAMDPROC) (GLenum mode);







typedef void ( * PFNGLPROVOKINGVERTEXEXTPROC) (GLenum mode);
# 2151 "/usr/include/GL/gl.h" 2 3 4
# 2165 "/usr/include/GL/gl.h" 3 4
__attribute__((visibility("default"))) GLhandleARB glCreateDebugObjectMESA (void);
__attribute__((visibility("default"))) void glClearDebugLogMESA (GLhandleARB obj, GLenum logType, GLenum shaderType);
__attribute__((visibility("default"))) void glGetDebugLogMESA (GLhandleARB obj, GLenum logType, GLenum shaderType, GLsizei maxLength,
                                         GLsizei *length, GLcharARB *debugLog);
__attribute__((visibility("default"))) GLsizei glGetDebugLogLengthMESA (GLhandleARB obj, GLenum logType, GLenum shaderType);
# 2204 "/usr/include/GL/gl.h" 3 4
typedef void (*GLprogramcallbackMESA)(GLenum target, GLvoid *data);

__attribute__((visibility("default"))) void glProgramCallbackMESA(GLenum target, GLprogramcallbackMESA callback, GLvoid *data);

__attribute__((visibility("default"))) void glGetProgramRegisterfvMESA(GLenum target, GLsizei len, const GLubyte *name, GLfloat *v);
# 2251 "/usr/include/GL/gl.h" 3 4
__attribute__((visibility("default"))) void glBlendEquationSeparateATI( GLenum modeRGB, GLenum modeA );
typedef void ( * PFNGLBLENDEQUATIONSEPARATEATIPROC) (GLenum modeRGB, GLenum modeA);
# 177 "types.h" 2
# 1 "config.h" 1
# 178 "types.h" 2


struct HashTable;
# 189 "types.h"
   typedef GLshort GLaccum;
# 199 "types.h"
   typedef GLubyte GLstencil;
# 210 "types.h"
   typedef GLushort GLdepth;
# 219 "types.h"
# 1 "fixed.h" 1
# 42 "fixed.h"
typedef int GLfixed;
# 220 "types.h" 2



typedef struct gl_visual GLvisual;

typedef struct gl_context GLcontext;

typedef struct gl_frame_buffer GLframebuffer;






typedef void (*points_func)( GLcontext *ctx, GLuint first, GLuint last );

typedef void (*line_func)( GLcontext *ctx, GLuint v1, GLuint v2, GLuint pv );

typedef void (*triangle_func)( GLcontext *ctx,
                               GLuint v1, GLuint v2, GLuint v3, GLuint pv );

typedef void (*quad_func)( GLcontext *ctx, GLuint v1, GLuint v2,
                           GLuint v3, GLuint v4, GLuint pv );

typedef void (*rect_func)( GLcontext *ctx, GLint x, GLint y,
                           GLint width, GLint height );






struct gl_texture_object;

typedef void (*TextureSampleFunc)( const struct gl_texture_object *tObj,
                                   GLuint n,
                                   const GLfloat s[], const GLfloat t[],
                                   const GLfloat u[], const GLfloat lambda[],
                                   GLubyte r[], GLubyte g[],
                                   GLubyte b[],GLubyte a[] );



struct gl_image {
 GLint Width;
 GLint Height;
 GLint Depth;
 GLint Components;
        GLenum Format;
 GLenum Type;
 GLvoid *Data;
 GLboolean Interleaved;





 GLint RefCount;
};




struct gl_texture_image {
 GLenum Format;



 GLenum IntFormat;
 GLuint Border;
 GLuint Width;
 GLuint Height;
 GLuint Depth;
 GLuint Width2;
 GLuint Height2;
 GLuint Depth2;
 GLuint WidthLog2;
 GLuint HeightLog2;
 GLuint DepthLog2;
 GLuint MaxLog2;
 GLubyte *Data;


 void *DriverData;
};






struct gl_api_table {
   void (*Accum)( GLcontext *, GLenum, GLfloat );
   void (*AlphaFunc)( GLcontext *, GLenum, GLclampf );
   GLboolean (*AreTexturesResident)( GLcontext *, GLsizei,
                                     const GLuint *, GLboolean * );
   void (*ArrayElement)( GLcontext *, GLint );
   void (*Begin)( GLcontext *, GLenum );
   void (*BindTexture)( GLcontext *, GLenum, GLuint );
   void (*Bitmap)( GLcontext *, GLsizei, GLsizei, GLfloat, GLfloat,
       GLfloat, GLfloat, const struct gl_image *bitmap );
   void (*BlendColor)( GLcontext *, GLclampf, GLclampf, GLclampf, GLclampf);
   void (*BlendEquation)( GLcontext *, GLenum );
   void (*BlendFunc)( GLcontext *, GLenum, GLenum );
   void (*CallList)( GLcontext *, GLuint list );
   void (*CallLists)( GLcontext *, GLsizei, GLenum, const GLvoid * );
   void (*Clear)( GLcontext *, GLbitfield );
   void (*ClearAccum)( GLcontext *, GLfloat, GLfloat, GLfloat, GLfloat );
   void (*ClearColor)( GLcontext *, GLclampf, GLclampf, GLclampf, GLclampf );
   void (*ClearDepth)( GLcontext *, GLclampd );
   void (*ClearIndex)( GLcontext *, GLfloat );
   void (*ClearStencil)( GLcontext *, GLint );
   void (*ClipPlane)( GLcontext *, GLenum, const GLfloat * );
   void (*Color3f)( GLcontext *, GLfloat, GLfloat, GLfloat );
   void (*Color3fv)( GLcontext *, const GLfloat * );
   void (*Color4f)( GLcontext *, GLfloat, GLfloat, GLfloat, GLfloat );
   void (*Color4fv)( GLcontext *, const GLfloat * );
   void (*Color4ub)( GLcontext *, GLubyte, GLubyte, GLubyte, GLubyte );
   void (*Color4ubv)( GLcontext *, const GLubyte * );
   void (*ColorMask)( GLcontext *,
   GLboolean, GLboolean, GLboolean, GLboolean );
   void (*ColorMaterial)( GLcontext *, GLenum, GLenum );
   void (*ColorPointer)( GLcontext *, GLint, GLenum, GLsizei, const GLvoid * );
   void (*ColorTable)( GLcontext *, GLenum, GLenum, struct gl_image * );
   void (*ColorSubTable)( GLcontext *, GLenum, GLsizei, struct gl_image * );
   void (*CopyPixels)( GLcontext *, GLint, GLint, GLsizei, GLsizei, GLenum );
   void (*CopyTexImage1D)( GLcontext *, GLenum, GLint, GLenum,
                           GLint, GLint, GLsizei, GLint );
   void (*CopyTexImage2D)( GLcontext *, GLenum, GLint, GLenum,
                           GLint, GLint, GLsizei, GLsizei, GLint );
   void (*CopyTexSubImage1D)( GLcontext *, GLenum, GLint, GLint,
                              GLint, GLint, GLsizei );
   void (*CopyTexSubImage2D)( GLcontext *, GLenum, GLint, GLint, GLint,
                              GLint, GLint, GLsizei, GLsizei );
   void (*CopyTexSubImage3DEXT)(GLcontext *,
                                GLenum , GLint ,
                                GLint , GLint , GLint ,
                                GLint , GLint ,
                                GLsizei , GLsizei );
   void (*CullFace)( GLcontext *, GLenum );
   void (*DeleteLists)( GLcontext *, GLuint, GLsizei );
   void (*DeleteTextures)( GLcontext *, GLsizei, const GLuint *);
   void (*DepthFunc)( GLcontext *, GLenum );
   void (*DepthMask)( GLcontext *, GLboolean );
   void (*DepthRange)( GLcontext *, GLclampd, GLclampd );
   void (*Disable)( GLcontext *, GLenum );
   void (*DisableClientState)( GLcontext *, GLenum );
   void (*DrawArrays)( GLcontext *, GLenum, GLint, GLsizei );
   void (*DrawBuffer)( GLcontext *, GLenum );
   void (*DrawElements)( GLcontext *, GLenum, GLsizei, GLenum, const GLvoid *);
   void (*DrawPixels)( GLcontext *,
                       GLsizei, GLsizei, GLenum, GLenum, const GLvoid * );
   void (*EdgeFlag)( GLcontext *, GLboolean );
   void (*EdgeFlagPointer)( GLcontext *, GLsizei, const GLboolean * );
   void (*Enable)( GLcontext *, GLenum );
   void (*EnableClientState)( GLcontext *, GLenum );
   void (*End)( GLcontext * );
   void (*EndList)( GLcontext * );
   void (*EvalCoord1f)( GLcontext *, GLfloat );
   void (*EvalCoord2f)( GLcontext *, GLfloat , GLfloat );
   void (*EvalMesh1)( GLcontext *, GLenum, GLint, GLint );
   void (*EvalMesh2)( GLcontext *, GLenum, GLint, GLint, GLint, GLint );
   void (*EvalPoint1)( GLcontext *, GLint );
   void (*EvalPoint2)( GLcontext *, GLint, GLint );
   void (*FeedbackBuffer)( GLcontext *, GLsizei, GLenum, GLfloat * );
   void (*Finish)( GLcontext * );
   void (*Flush)( GLcontext * );
   void (*Fogfv)( GLcontext *, GLenum, const GLfloat * );
   void (*FrontFace)( GLcontext *, GLenum );
   void (*Frustum)( GLcontext *, GLdouble, GLdouble, GLdouble, GLdouble,
                    GLdouble, GLdouble );
   GLuint (*GenLists)( GLcontext *, GLsizei );
   void (*GenTextures)( GLcontext *, GLsizei, GLuint * );
   void (*GetBooleanv)( GLcontext *, GLenum, GLboolean * );
   void (*GetClipPlane)( GLcontext *, GLenum, GLdouble * );
   void (*GetColorTable)( GLcontext *, GLenum, GLenum, GLenum, GLvoid *);
   void (*GetColorTableParameteriv)( GLcontext *, GLenum, GLenum, GLint *);
   void (*GetDoublev)( GLcontext *, GLenum, GLdouble * );
   GLenum (*GetError)( GLcontext * );
   void (*GetFloatv)( GLcontext *, GLenum, GLfloat * );
   void (*GetIntegerv)( GLcontext *, GLenum, GLint * );
   const GLubyte* (*GetString)( GLcontext *, GLenum name );
   void (*GetLightfv)( GLcontext *, GLenum light, GLenum, GLfloat * );
   void (*GetLightiv)( GLcontext *, GLenum light, GLenum, GLint * );
   void (*GetMapdv)( GLcontext *, GLenum, GLenum, GLdouble * );
   void (*GetMapfv)( GLcontext *, GLenum, GLenum, GLfloat * );
   void (*GetMapiv)( GLcontext *, GLenum, GLenum, GLint * );
   void (*GetMaterialfv)( GLcontext *, GLenum, GLenum, GLfloat * );
   void (*GetMaterialiv)( GLcontext *, GLenum, GLenum, GLint * );
   void (*GetPixelMapfv)( GLcontext *, GLenum, GLfloat * );
   void (*GetPixelMapuiv)( GLcontext *, GLenum, GLuint * );
   void (*GetPixelMapusv)( GLcontext *, GLenum, GLushort * );
   void (*GetPointerv)( GLcontext *, GLenum, GLvoid ** );
   void (*GetPolygonStipple)( GLcontext *, GLubyte * );
   void (*PrioritizeTextures)( GLcontext *, GLsizei, const GLuint *,
                               const GLclampf * );
   void (*GetTexEnvfv)( GLcontext *, GLenum, GLenum, GLfloat * );
   void (*GetTexEnviv)( GLcontext *, GLenum, GLenum, GLint * );
   void (*GetTexGendv)( GLcontext *, GLenum coord, GLenum, GLdouble * );
   void (*GetTexGenfv)( GLcontext *, GLenum coord, GLenum, GLfloat * );
   void (*GetTexGeniv)( GLcontext *, GLenum coord, GLenum, GLint * );
   void (*GetTexImage)( GLcontext *, GLenum, GLint level, GLenum, GLenum,
                        GLvoid * );
   void (*GetTexLevelParameterfv)( GLcontext *,
         GLenum, GLint, GLenum, GLfloat * );
   void (*GetTexLevelParameteriv)( GLcontext *,
         GLenum, GLint, GLenum, GLint * );
   void (*GetTexParameterfv)( GLcontext *, GLenum, GLenum, GLfloat *);
   void (*GetTexParameteriv)( GLcontext *, GLenum, GLenum, GLint * );
   void (*Hint)( GLcontext *, GLenum, GLenum );
   void (*IndexMask)( GLcontext *, GLuint );
   void (*Indexf)( GLcontext *, GLfloat c );
   void (*Indexi)( GLcontext *, GLint c );
   void (*IndexPointer)( GLcontext *, GLenum, GLsizei, const GLvoid * );
   void (*InitNames)( GLcontext * );
   void (*InterleavedArrays)( GLcontext *, GLenum, GLsizei, const GLvoid * );
   GLboolean (*IsEnabled)( GLcontext *, GLenum );
   GLboolean (*IsList)( GLcontext *, GLuint );
   GLboolean (*IsTexture)( GLcontext *, GLuint );
   void (*LightModelfv)( GLcontext *, GLenum, const GLfloat * );
   void (*Lightfv)( GLcontext *, GLenum light, GLenum, const GLfloat *, GLint);
   void (*LineStipple)( GLcontext *, GLint factor, GLushort );
   void (*LineWidth)( GLcontext *, GLfloat );
   void (*ListBase)( GLcontext *, GLuint );
   void (*LoadIdentity)( GLcontext * );

   void (*LoadMatrixf)( GLcontext *, const GLfloat * );
   void (*LoadName)( GLcontext *, GLuint );
   void (*LogicOp)( GLcontext *, GLenum );
   void (*Map1f)( GLcontext *, GLenum, GLfloat, GLfloat, GLint, GLint,
    const GLfloat *, GLboolean );
   void (*Map2f)( GLcontext *, GLenum, GLfloat, GLfloat, GLint, GLint,
    GLfloat, GLfloat, GLint, GLint, const GLfloat *,
    GLboolean );
   void (*MapGrid1f)( GLcontext *, GLint, GLfloat, GLfloat );
   void (*MapGrid2f)( GLcontext *, GLint, GLfloat, GLfloat,
   GLint, GLfloat, GLfloat );
   void (*Materialfv)( GLcontext *, GLenum, GLenum, const GLfloat * );
   void (*MatrixMode)( GLcontext *, GLenum );

   void (*MultMatrixf)( GLcontext *, const GLfloat * );
   void (*NewList)( GLcontext *, GLuint list, GLenum );
   void (*Normal3f)( GLcontext *, GLfloat, GLfloat, GLfloat );
   void (*Normal3fv)( GLcontext *, const GLfloat * );
   void (*NormalPointer)( GLcontext *, GLenum, GLsizei, const GLvoid * );
   void (*Ortho)( GLcontext *, GLdouble, GLdouble, GLdouble, GLdouble,
                  GLdouble, GLdouble );
   void (*PassThrough)( GLcontext *, GLfloat );
   void (*PixelMapfv)( GLcontext *, GLenum, GLint, const GLfloat * );
   void (*PixelStorei)( GLcontext *, GLenum, GLint );
   void (*PixelTransferf)( GLcontext *, GLenum, GLfloat );
   void (*PixelZoom)( GLcontext *, GLfloat, GLfloat );
   void (*PointParameterfvEXT)( GLcontext *, GLenum, const GLfloat * );
   void (*PointSize)( GLcontext *, GLfloat );
   void (*PolygonMode)( GLcontext *, GLenum, GLenum );
   void (*PolygonOffset)( GLcontext *, GLfloat, GLfloat );
   void (*PolygonStipple)( GLcontext *, const GLubyte * );
   void (*PopAttrib)( GLcontext * );
   void (*PopClientAttrib)( GLcontext * );
   void (*PopMatrix)( GLcontext * );
   void (*PopName)( GLcontext * );
   void (*PushAttrib)( GLcontext *, GLbitfield );
   void (*PushClientAttrib)( GLcontext *, GLbitfield );
   void (*PushMatrix)( GLcontext * );
   void (*PushName)( GLcontext *, GLuint );
   void (*RasterPos4f)( GLcontext *,
                        GLfloat x, GLfloat y, GLfloat z, GLfloat w );
   void (*ReadBuffer)( GLcontext *, GLenum );
   void (*ReadPixels)( GLcontext *, GLint, GLint, GLsizei, GLsizei, GLenum,
    GLenum, GLvoid * );
   void (*Rectf)( GLcontext *, GLfloat, GLfloat, GLfloat, GLfloat );
   GLint (*RenderMode)( GLcontext *, GLenum );
   void (*Rotatef)( GLcontext *, GLfloat, GLfloat, GLfloat, GLfloat );
   void (*Scalef)( GLcontext *, GLfloat, GLfloat, GLfloat );
   void (*Scissor)( GLcontext *, GLint, GLint, GLsizei, GLsizei);
   void (*SelectBuffer)( GLcontext *, GLsizei, GLuint * );
   void (*ShadeModel)( GLcontext *, GLenum );
   void (*StencilFunc)( GLcontext *, GLenum, GLint, GLuint );
   void (*StencilMask)( GLcontext *, GLuint );
   void (*StencilOp)( GLcontext *, GLenum, GLenum, GLenum );
   void (*TexCoord2f)( GLcontext *, GLfloat, GLfloat );
   void (*TexCoord4f)( GLcontext *, GLfloat, GLfloat, GLfloat, GLfloat );
   void (*TexCoordPointer)( GLcontext *, GLint, GLenum, GLsizei,
                            const GLvoid *);
   void (*TexEnvfv)( GLcontext *, GLenum, GLenum, const GLfloat * );
   void (*TexGenfv)( GLcontext *, GLenum coord, GLenum, const GLfloat * );
   void (*TexImage1D)( GLcontext *, GLenum, GLint, GLint, GLsizei,
                       GLint, GLenum, GLenum, struct gl_image * );
   void (*TexImage2D)( GLcontext *, GLenum, GLint, GLint, GLsizei, GLsizei,
                       GLint, GLenum, GLenum, struct gl_image * );
   void (*TexSubImage1D)( GLcontext *, GLenum, GLint, GLint, GLsizei,
                          GLenum, GLenum, struct gl_image * );
   void (*TexSubImage2D)( GLcontext *, GLenum, GLint, GLint, GLint,
                          GLsizei, GLsizei, GLenum, GLenum,
                          struct gl_image * );
   void (*TexImage3DEXT)(GLcontext *,
                         GLenum , GLint , GLint ,
                         GLsizei , GLsizei , GLsizei ,
                         GLint ,
                         GLenum , GLenum ,
                         struct gl_image * );
   void (*TexSubImage3DEXT)(GLcontext *,
                            GLenum , GLint ,
                            GLint , GLint , GLint,
                            GLsizei , GLsizei , GLsizei ,
                            GLenum , GLenum ,
                            struct gl_image * );
   void (*TexParameterfv)( GLcontext *, GLenum, GLenum, const GLfloat * );

   void (*Translatef)( GLcontext *, GLfloat, GLfloat, GLfloat );
   void (*Vertex2f)( GLcontext *, GLfloat, GLfloat );
   void (*Vertex3f)( GLcontext *, GLfloat, GLfloat, GLfloat );
   void (*Vertex4f)( GLcontext *, GLfloat, GLfloat, GLfloat, GLfloat );
   void (*Vertex3fv)( GLcontext *, const GLfloat * );
   void (*VertexPointer)( GLcontext *, GLint, GLenum, GLsizei, const GLvoid *);
   void (*Viewport)( GLcontext *, GLint, GLint, GLsizei, GLsizei );


   void (*WindowPos4fMESA)( GLcontext *, GLfloat, GLfloat, GLfloat, GLfloat );


   void (*ResizeBuffersMESA)( GLcontext * );
};



# 1 "dd.h" 1
# 150 "dd.h"
struct dd_function_table {






   const char * (*RendererString)(void);






   void (*UpdateState)( GLcontext *ctx );






   void (*ClearIndex)( GLcontext *ctx, GLuint index );





   void (*ClearColor)( GLcontext *ctx, GLubyte red, GLubyte green,
                                        GLubyte blue, GLubyte alpha );





   void (*Clear)( GLcontext *ctx,
                  GLboolean all, GLint x, GLint y, GLint width, GLint height );





   void (*Index)( GLcontext *ctx, GLuint index );




   void (*Color)( GLcontext *ctx,
                  GLubyte red, GLubyte green, GLubyte glue, GLubyte alpha );




   GLboolean (*SetBuffer)( GLcontext *ctx, GLenum mode );





   void (*GetBufferSize)( GLcontext *ctx,
                          GLuint *width, GLuint *height );
# 218 "dd.h"
   void (*WriteColorSpan)( GLcontext *ctx,
                           GLuint n, GLint x, GLint y,
      const GLubyte red[], const GLubyte green[],
      const GLubyte blue[], const GLubyte alpha[],
      const GLubyte mask[] );




   void (*WriteMonocolorSpan)( GLcontext *ctx,
                               GLuint n, GLint x, GLint y,
          const GLubyte mask[] );




   void (*WriteColorPixels)( GLcontext *ctx,
                             GLuint n, const GLint x[], const GLint y[],
        const GLubyte red[], const GLubyte green[],
        const GLubyte blue[], const GLubyte alpha[],
        const GLubyte mask[] );




   void (*WriteMonocolorPixels)( GLcontext *ctx,
                                 GLuint n, const GLint x[], const GLint y[],
     const GLubyte mask[] );




   void (*WriteIndexSpan)( GLcontext *ctx,
                           GLuint n, GLint x, GLint y, const GLuint index[],
                           const GLubyte mask[] );




   void (*WriteMonoindexSpan)( GLcontext *ctx,
                               GLuint n, GLint x, GLint y,
          const GLubyte mask[] );




   void (*WriteIndexPixels)( GLcontext *ctx,
                             GLuint n, const GLint x[], const GLint y[],
                             const GLuint index[], const GLubyte mask[] );




   void (*WriteMonoindexPixels)( GLcontext *ctx,
                                 GLuint n, const GLint x[], const GLint y[],
     const GLubyte mask[] );







   void (*ReadIndexSpan)( GLcontext *ctx,
                          GLuint n, GLint x, GLint y, GLuint index[] );




   void (*ReadColorSpan)( GLcontext *ctx,
                          GLuint n, GLint x, GLint y,
     GLubyte red[], GLubyte green[],
     GLubyte blue[], GLubyte alpha[] );




   void (*ReadIndexPixels)( GLcontext *ctx,
                            GLuint n, const GLint x[], const GLint y[],
       GLuint indx[], const GLubyte mask[] );




   void (*ReadColorPixels)( GLcontext *ctx,
                            GLuint n, const GLint x[], const GLint y[],
       GLubyte red[], GLubyte green[],
       GLubyte blue[], GLubyte alpha[],
                            const GLubyte mask[] );
# 320 "dd.h"
   void (*Finish)( GLcontext *ctx );




   void (*Flush)( GLcontext *ctx );




   GLboolean (*IndexMask)( GLcontext *ctx, GLuint mask );




   GLboolean (*ColorMask)( GLcontext *ctx,
                           GLboolean rmask, GLboolean gmask,
                           GLboolean bmask, GLboolean amask );




   GLboolean (*LogicOp)( GLcontext *ctx, GLenum op );




   void (*Dither)( GLcontext *ctx, GLboolean enable );




   void (*Error)( GLcontext *ctx );





   void (*NearFar)( GLcontext *ctx, GLfloat nearVal, GLfloat farVal );
# 370 "dd.h"
   void (*AllocDepthBuffer)( GLcontext *ctx );




   void (*ClearDepthBuffer)( GLcontext *ctx );




   GLuint (*DepthTestSpan)( GLcontext *ctx,
                            GLuint n, GLint x, GLint y, const GLdepth z[],
                            GLubyte mask[] );
   void (*DepthTestPixels)( GLcontext *ctx,
                            GLuint n, const GLint x[], const GLint y[],
                            const GLdepth z[], GLubyte mask[] );






   void (*ReadDepthSpanFloat)( GLcontext *ctx,
                               GLuint n, GLint x, GLint y, GLfloat depth[]);
   void (*ReadDepthSpanInt)( GLcontext *ctx,
                             GLuint n, GLint x, GLint y, GLdepth depth[] );
# 407 "dd.h"
   points_func PointsFunc;




   line_func LineFunc;




   triangle_func TriangleFunc;




   quad_func QuadFunc;




   rect_func RectFunc;




   GLboolean (*DrawPixels)( GLcontext *ctx,
                            GLint x, GLint y, GLsizei width, GLsizei height,
                            GLenum format, GLenum type, GLboolean packed,
                            const GLvoid *pixels );




   GLboolean (*Bitmap)( GLcontext *ctx, GLsizei width, GLsizei height,
                        GLfloat xorig, GLfloat yorig,
                        GLfloat xmove, GLfloat ymove,
                        const struct gl_image *bitmap );




   void (*Begin)( GLcontext *ctx, GLenum mode );
   void (*End)( GLcontext *ctx );






   void (*RasterSetup)( GLcontext *ctx, GLuint start, GLuint end );
# 465 "dd.h"
   GLboolean (*RenderVB)( GLcontext *ctx, GLboolean allDone );
# 478 "dd.h"
   void (*TexEnv)( GLcontext *ctx, GLenum pname, const GLfloat *param );







   void (*TexImage)( GLcontext *ctx, GLenum target,
                     struct gl_texture_object *tObj, GLint level,
                     GLint internalFormat,
                     const struct gl_texture_image *image );
# 499 "dd.h"
   void (*TexParameter)( GLcontext *ctx, GLenum target,
                         struct gl_texture_object *tObj,
                         GLenum pname, const GLfloat *params );
# 511 "dd.h"
   void (*BindTexture)( GLcontext *ctx, GLenum target,
                        struct gl_texture_object *tObj );





   void (*DeleteTexture)( GLcontext *ctx, struct gl_texture_object *tObj );




   void (*UpdateTexturePalette)( GLcontext *ctx,
                                 struct gl_texture_object *tObj );






   void (*UseGlobalTexturePalette)( GLcontext *ctx, GLboolean state );




};
# 547 "types.h" 2
# 583 "types.h"
struct gl_light {
 GLfloat Ambient[4];
 GLfloat Diffuse[4];
 GLfloat Specular[4];
 GLfloat Position[4];
 GLfloat Direction[4];
 GLfloat SpotExponent;
 GLfloat SpotCutoff;
        GLfloat CosCutoff;
 GLfloat ConstantAttenuation;
 GLfloat LinearAttenuation;
 GLfloat QuadraticAttenuation;
 GLboolean Enabled;

 struct gl_light *NextEnabled;


 GLfloat VP_inf_norm[3];
 GLfloat h_inf_norm[3];
        GLfloat NormDirection[3];
        GLfloat SpotExpTable[512][2];
 GLfloat MatAmbient[2][3];
 GLfloat MatDiffuse[2][3];
 GLfloat MatSpecular[2][3];
 GLfloat dli;
 GLfloat sli;
};


struct gl_lightmodel {
 GLfloat Ambient[4];
 GLboolean LocalViewer;
 GLboolean TwoSide;
};


struct gl_material {
 GLfloat Ambient[4];
 GLfloat Diffuse[4];
 GLfloat Specular[4];
 GLfloat Emission[4];
 GLfloat Shininess;
 GLfloat AmbientIndex;
 GLfloat DiffuseIndex;
 GLfloat SpecularIndex;
        GLfloat ShineTable[200];
};
# 640 "types.h"
struct gl_accum_attrib {
 GLfloat ClearColor[4];
};


struct gl_colorbuffer_attrib {
 GLuint ClearIndex;
 GLfloat ClearColor[4];

 GLuint IndexMask;
 GLuint ColorMask;
        GLboolean SWmasking;

 GLenum DrawBuffer;


 GLboolean AlphaEnabled;
 GLenum AlphaFunc;
 GLfloat AlphaRef;
 GLubyte AlphaRefUbyte;


 GLboolean BlendEnabled;
 GLenum BlendSrc;
 GLenum BlendDst;
 GLenum BlendEquation;
 GLfloat BlendColor[4];


 GLenum LogicOp;
 GLboolean IndexLogicOpEnabled;
 GLboolean ColorLogicOpEnabled;
 GLboolean SWLogicOpEnabled;

 GLboolean DitherFlag;
};


struct gl_current_attrib {
 GLubyte ByteColor[4];
 GLuint Index;
 GLfloat Normal[3];
 GLfloat TexCoord[4];
 GLfloat RasterPos[4];
 GLfloat RasterDistance;
 GLfloat RasterColor[4];
 GLuint RasterIndex;
 GLfloat RasterTexCoord[4];
 GLboolean RasterPosValid;
 GLboolean EdgeFlag;
};


struct gl_depthbuffer_attrib {
 GLenum Func;
 GLfloat Clear;
 GLboolean Test;
 GLboolean Mask;
};


struct gl_enable_attrib {
 GLboolean AlphaTest;
 GLboolean AutoNormal;
 GLboolean Blend;
 GLboolean ClipPlane[6];
 GLboolean ColorMaterial;
 GLboolean CullFace;
 GLboolean DepthTest;
 GLboolean Dither;
 GLboolean Fog;
 GLboolean Light[8];
 GLboolean Lighting;
 GLboolean LineSmooth;
 GLboolean LineStipple;
 GLboolean IndexLogicOp;
 GLboolean ColorLogicOp;
 GLboolean Map1Color4;
 GLboolean Map1Index;
 GLboolean Map1Normal;
 GLboolean Map1TextureCoord1;
 GLboolean Map1TextureCoord2;
 GLboolean Map1TextureCoord3;
 GLboolean Map1TextureCoord4;
 GLboolean Map1Vertex3;
 GLboolean Map1Vertex4;
 GLboolean Map2Color4;
 GLboolean Map2Index;
 GLboolean Map2Normal;
 GLboolean Map2TextureCoord1;
 GLboolean Map2TextureCoord2;
 GLboolean Map2TextureCoord3;
 GLboolean Map2TextureCoord4;
 GLboolean Map2Vertex3;
 GLboolean Map2Vertex4;
 GLboolean Normalize;
 GLboolean PointSmooth;
 GLboolean PolygonOffsetPoint;
 GLboolean PolygonOffsetLine;
 GLboolean PolygonOffsetFill;
 GLboolean PolygonSmooth;
 GLboolean PolygonStipple;
 GLboolean Scissor;
 GLboolean Stencil;
 GLuint Texture;
 GLuint TexGen;
};


struct gl_eval_attrib {

 GLboolean Map1Color4;
 GLboolean Map1Index;
 GLboolean Map1Normal;
 GLboolean Map1TextureCoord1;
 GLboolean Map1TextureCoord2;
 GLboolean Map1TextureCoord3;
 GLboolean Map1TextureCoord4;
 GLboolean Map1Vertex3;
 GLboolean Map1Vertex4;
 GLboolean Map2Color4;
 GLboolean Map2Index;
 GLboolean Map2Normal;
 GLboolean Map2TextureCoord1;
 GLboolean Map2TextureCoord2;
 GLboolean Map2TextureCoord3;
 GLboolean Map2TextureCoord4;
 GLboolean Map2Vertex3;
 GLboolean Map2Vertex4;
 GLboolean AutoNormal;

 GLuint MapGrid1un;
 GLfloat MapGrid1u1, MapGrid1u2;
 GLuint MapGrid2un, MapGrid2vn;
 GLfloat MapGrid2u1, MapGrid2u2;
 GLfloat MapGrid2v1, MapGrid2v2;
};


struct gl_fog_attrib {
 GLboolean Enabled;
 GLfloat Color[4];
 GLfloat Density;
 GLfloat Start;
 GLfloat End;
 GLfloat Index;
 GLenum Mode;
};


struct gl_hint_attrib {

 GLenum PerspectiveCorrection;
 GLenum PointSmooth;
 GLenum LineSmooth;
 GLenum PolygonSmooth;
 GLenum Fog;
};


struct gl_light_attrib {
   struct gl_light Light[8];
   struct gl_lightmodel Model;
   struct gl_material Material[2];
   GLboolean Enabled;
   GLenum ShadeModel;
   GLenum ColorMaterialFace;
   GLenum ColorMaterialMode;
   GLuint ColorMaterialBitmask;
   GLboolean ColorMaterialEnabled;


   struct gl_light *FirstEnabled;
   GLboolean Fast;
   GLfloat BaseColor[2][4];
};


struct gl_line_attrib {
 GLboolean SmoothFlag;
 GLboolean StippleFlag;
 GLushort StipplePattern;
 GLint StippleFactor;
 GLfloat Width;
};


struct gl_list_attrib {
 GLuint ListBase;
};


struct gl_pixel_attrib {
 GLenum ReadBuffer;
 GLfloat RedBias, RedScale;
 GLfloat GreenBias, GreenScale;
 GLfloat BlueBias, BlueScale;
 GLfloat AlphaBias, AlphaScale;
 GLfloat DepthBias, DepthScale;
 GLint IndexShift;
 GLint IndexOffset;
 GLboolean MapColorFlag;
 GLboolean MapStencilFlag;
 GLfloat ZoomX;
 GLfloat ZoomY;

 GLint MapStoSsize;
 GLint MapItoIsize;
 GLint MapItoRsize;
 GLint MapItoGsize;
 GLint MapItoBsize;
 GLint MapItoAsize;
 GLint MapRtoRsize;
 GLint MapGtoGsize;
 GLint MapBtoBsize;
 GLint MapAtoAsize;
 GLint MapStoS[256];
 GLint MapItoI[256];
 GLfloat MapItoR[256];
 GLfloat MapItoG[256];
 GLfloat MapItoB[256];
 GLfloat MapItoA[256];
 GLfloat MapRtoR[256];
 GLfloat MapGtoG[256];
 GLfloat MapBtoB[256];
 GLfloat MapAtoA[256];
};


struct gl_point_attrib {
 GLboolean SmoothFlag;
 GLfloat Size;
 GLfloat Params[3];

 GLfloat MinSize;
 GLfloat MaxSize;
 GLfloat Threshold;
};


struct gl_polygon_attrib {
 GLenum FrontFace;
 GLenum FrontMode;
 GLenum BackMode;
 GLboolean Unfilled;
 GLboolean CullFlag;
 GLenum CullFaceMode;
        GLuint CullBits;
 GLboolean SmoothFlag;
 GLboolean StippleFlag;
        GLfloat OffsetFactor;
        GLfloat OffsetUnits;
        GLboolean OffsetPoint;
        GLboolean OffsetLine;
        GLboolean OffsetFill;
        GLboolean OffsetAny;
};


struct gl_scissor_attrib {
 GLboolean Enabled;
 GLint X, Y;
 GLsizei Width, Height;
};


struct gl_stencil_attrib {
 GLboolean Enabled;
 GLenum Function;
 GLenum FailFunc;
 GLenum ZPassFunc;
 GLenum ZFailFunc;
 GLstencil Ref;
 GLstencil ValueMask;
 GLstencil Clear;
 GLstencil WriteMask;
};
# 929 "types.h"
struct gl_texture_attrib {
 GLuint Enabled;
 GLenum EnvMode;
 GLfloat EnvColor[4];
 GLuint TexGenEnabled;
 GLenum GenModeS;
 GLenum GenModeT;
 GLenum GenModeR;
 GLenum GenModeQ;
 GLfloat ObjectPlaneS[4];
 GLfloat ObjectPlaneT[4];
 GLfloat ObjectPlaneR[4];
 GLfloat ObjectPlaneQ[4];
 GLfloat EyePlaneS[4];
 GLfloat EyePlaneT[4];
 GLfloat EyePlaneR[4];
 GLfloat EyePlaneQ[4];
 struct gl_texture_object *Current1D;
 struct gl_texture_object *Current2D;
 struct gl_texture_object *Current3D;
 struct gl_texture_object *Current;

 struct gl_texture_object *Proxy1D;
 struct gl_texture_object *Proxy2D;
 struct gl_texture_object *Proxy3D;


 GLboolean SharedPalette;
 GLubyte Palette[256*4];
 GLuint PaletteSize;
 GLenum PaletteIntFormat;
 GLenum PaletteFormat;
};


struct gl_transform_attrib {
 GLenum MatrixMode;
 GLfloat ClipEquation[6][4];
 GLboolean ClipEnabled[6];
 GLboolean AnyClip;
 GLboolean Normalize;
};


struct gl_viewport_attrib {
 GLint X, Y;
 GLsizei Width, Height;
 GLfloat Near, Far;
 GLfloat Sx, Sy, Sz;
 GLfloat Tx, Ty, Tz;
};



struct gl_attrib_node {
 GLbitfield kind;
 void *data;
 struct gl_attrib_node *next;
};






struct gl_pixelstore_attrib {
 GLint Alignment;
 GLint RowLength;
 GLint SkipPixels;
 GLint SkipRows;
 GLint ImageHeight;
 GLint SkipImages;
 GLboolean SwapBytes;
 GLboolean LsbFirst;
};





struct gl_array_attrib {
 GLint VertexSize;
 GLenum VertexType;
 GLsizei VertexStride;
 GLsizei VertexStrideB;
 void *VertexPtr;
 GLboolean VertexEnabled;

 GLenum NormalType;
 GLsizei NormalStride;
 GLsizei NormalStrideB;
 void *NormalPtr;
 GLboolean NormalEnabled;

 GLint ColorSize;
 GLenum ColorType;
 GLsizei ColorStride;
 GLsizei ColorStrideB;
 void *ColorPtr;
 GLboolean ColorEnabled;

 GLenum IndexType;
 GLsizei IndexStride;
 GLsizei IndexStrideB;
 void *IndexPtr;
 GLboolean IndexEnabled;

 GLint TexCoordSize;
 GLenum TexCoordType;
 GLsizei TexCoordStride;
 GLsizei TexCoordStrideB;
 void *TexCoordPtr;
 GLboolean TexCoordEnabled;

 GLsizei EdgeFlagStride;
 GLsizei EdgeFlagStrideB;
 GLboolean *EdgeFlagPtr;
 GLboolean EdgeFlagEnabled;
};



struct gl_feedback {
 GLenum Type;
 GLuint Mask;
 GLfloat *Buffer;
 GLuint BufferSize;
 GLuint Count;
};



struct gl_selection {
 GLuint *Buffer;
 GLuint BufferSize;
 GLuint BufferCount;
 GLuint Hits;
 GLuint NameStackDepth;
 GLuint NameStack[64];
 GLboolean HitFlag;
 GLfloat HitMinZ, HitMaxZ;
};






struct gl_1d_map {
 GLuint Order;
 GLfloat u1, u2;
 GLfloat *Points;
 GLboolean Retain;
};





struct gl_2d_map {
 GLuint Uorder;
 GLuint Vorder;
 GLfloat u1, u2;
 GLfloat v1, v2;
 GLfloat *Points;
 GLboolean Retain;
};





struct gl_evaluators {

 struct gl_1d_map Map1Vertex3;
 struct gl_1d_map Map1Vertex4;
 struct gl_1d_map Map1Index;
 struct gl_1d_map Map1Color4;
 struct gl_1d_map Map1Normal;
 struct gl_1d_map Map1Texture1;
 struct gl_1d_map Map1Texture2;
 struct gl_1d_map Map1Texture3;
 struct gl_1d_map Map1Texture4;


 struct gl_2d_map Map2Vertex3;
 struct gl_2d_map Map2Vertex4;
 struct gl_2d_map Map2Index;
 struct gl_2d_map Map2Color4;
 struct gl_2d_map Map2Normal;
 struct gl_2d_map Map2Texture1;
 struct gl_2d_map Map2Texture2;
 struct gl_2d_map Map2Texture3;
 struct gl_2d_map Map2Texture4;
};




struct gl_texture_object {
 GLint RefCount;
 GLuint Name;
 GLuint Dimensions;
 GLfloat Priority;
 GLint BorderColor[4];
 GLenum WrapS;
 GLenum WrapT;
 GLenum WrapR;
 GLenum MinFilter;
 GLenum MagFilter;
 GLfloat MinMagThresh;
 struct gl_texture_image *Image[11];


 GLubyte Palette[256*4];
 GLuint PaletteSize;
 GLenum PaletteIntFormat;
 GLenum PaletteFormat;


 GLboolean Dirty;
 void *DriverData;

 GLboolean Complete;
 TextureSampleFunc SampleFunc;
 struct gl_texture_object *Next;
};






struct gl_shared_state {
   GLint RefCount;
   struct HashTable *DisplayList;
   struct HashTable *TexObjects;
   struct gl_texture_object *TexObjectList;
   struct gl_texture_object *Default1D;
   struct gl_texture_object *Default2D;
   struct gl_texture_object *Default3D;
};






struct gl_visual {
 GLboolean RGBAflag;
 GLboolean DBflag;

 GLfloat RedScale;
 GLfloat GreenScale;
 GLfloat BlueScale;
 GLfloat AlphaScale;


 GLboolean EightBitColor;

        GLfloat InvRedScale;
        GLfloat InvGreenScale;
        GLfloat InvBlueScale;
        GLfloat InvAlphaScale;

 GLint RedBits;
 GLint GreenBits;
 GLint BlueBits;
 GLint AlphaBits;

 GLint IndexBits;

 GLint AccumBits;
 GLint DepthBits;
 GLint StencilBits;


 GLboolean FrontAlphaEnabled;
 GLboolean BackAlphaEnabled;
};







struct gl_frame_buffer {
 GLvisual *Visual;

 GLint Width;
 GLint Height;

 GLdepth *Depth;


 GLstencil *Stencil;


 GLaccum *Accum;


 GLubyte *FrontAlpha;
 GLubyte *BackAlpha;
 GLubyte *Alpha;


 GLint Xmin, Xmax, Ymin, Ymax;




};
# 1301 "types.h"
struct gl_context {

 struct gl_shared_state *Shared;


 struct gl_api_table API;
 struct gl_api_table Save;
 struct gl_api_table Exec;

        GLvisual *Visual;
        GLframebuffer *Buffer;


 struct dd_function_table Driver;

 void *DriverCtx;
 void *DriverMgrCtx;


 GLboolean NewModelViewMatrix;
 GLuint ModelViewMatrixType;
 GLfloat ModelViewMatrix[16];
 GLfloat ModelViewInv[16];
 GLuint ModelViewStackDepth;
 GLfloat ModelViewStack[32][16];


 GLboolean NewProjectionMatrix;
 GLuint ProjectionMatrixType;
 GLfloat ProjectionMatrix[16];
 GLuint ProjectionStackDepth;
 GLfloat ProjectionStack[32][16];
 GLfloat NearFarStack[32][2];


 GLboolean NewTextureMatrix;
 GLuint TextureMatrixType;
 GLfloat TextureMatrix[16];
 GLuint TextureStackDepth;
 GLfloat TextureStack[10][16];


 GLuint CallDepth;
 GLboolean ExecuteFlag;
 GLboolean CompileFlag;


 GLuint AttribStackDepth;
 struct gl_attrib_node *AttribStack[16];


 struct gl_accum_attrib Accum;
 struct gl_colorbuffer_attrib Color;
 struct gl_current_attrib Current;
 struct gl_depthbuffer_attrib Depth;
 struct gl_eval_attrib Eval;
 struct gl_fog_attrib Fog;
 struct gl_hint_attrib Hint;
 struct gl_light_attrib Light;
 struct gl_line_attrib Line;
 struct gl_list_attrib List;
 struct gl_pixel_attrib Pixel;
 struct gl_point_attrib Point;
 struct gl_polygon_attrib Polygon;
 GLuint PolygonStipple[32];
 struct gl_scissor_attrib Scissor;
 struct gl_stencil_attrib Stencil;
 struct gl_texture_attrib Texture;
 struct gl_transform_attrib Transform;
 struct gl_viewport_attrib Viewport;


 GLuint ClientAttribStackDepth;
 struct gl_attrib_node *ClientAttribStack[16];

 struct gl_array_attrib Array;
 struct gl_pixelstore_attrib Pack;
 struct gl_pixelstore_attrib Unpack;

 struct gl_evaluators EvalMap;
 struct gl_feedback Feedback;
 struct gl_selection Select;

 GLenum ErrorValue;

 GLboolean DirectContext;


        GLuint NewState;
 GLenum RenderMode;
 GLenum Primitive;
 GLuint StippleCounter;
 GLuint ClipMask;
 GLuint RasterMask;
 GLboolean LightTwoSide;
 GLboolean DirectTriangles;
 GLfloat PolygonZoffset;
 GLfloat LineZoffset;
 GLfloat PointZoffset;
 GLboolean NeedNormals;
        GLboolean FastDrawPixels;
        GLboolean MutablePixels;
        GLboolean MonoPixels;


        points_func PointsFunc;
        line_func LineFunc;
        triangle_func TriangleFunc;
        quad_func QuadFunc;
        rect_func RectFunc;


        struct vertex_buffer* VB;


        struct pixel_buffer* PB;
# 1437 "types.h"
        GLboolean NoRaster;


        GLboolean NoDither;
};
# 64 "context.h" 2
# 76 "context.h"
   extern GLcontext *CC;
# 102 "context.h"
extern GLvisual *gl_create_visual( GLboolean rgb_flag,
                                   GLboolean alpha_flag,
                                   GLboolean db_flag,
                                   GLint depth_bits,
                                   GLint stencil_bits,
                                   GLint accum_bits,
                                   GLint index_bits,
                                   GLfloat red_scale,
                                   GLfloat green_scale,
                                   GLfloat blue_scale,
                                   GLfloat alpha_scale,
                                   GLint red_bits,
                                   GLint green_bits,
                                   GLint blue_bits,
                                   GLint alpha_bits );

extern void gl_destroy_visual( GLvisual *vis );






extern GLcontext *gl_create_context( GLvisual *visual,
                                     GLcontext *share_list,
                                     void *driver_ctx );

extern void gl_destroy_context( GLcontext *ctx );







extern GLframebuffer *gl_create_framebuffer( GLvisual *visual );

extern void gl_destroy_framebuffer( GLframebuffer *buffer );



extern void gl_make_current( GLcontext *ctx, GLframebuffer *buffer );

extern GLcontext *gl_get_current_context(void);

extern void gl_copy_context(const GLcontext *src, GLcontext *dst, GLuint mask);

extern void gl_set_api_table( GLcontext *ctx, const struct gl_api_table *api );






extern void gl_ResizeBuffersMESA( GLcontext *ctx );







extern void gl_problem( const GLcontext *ctx, const char *s );

extern void gl_warning( const GLcontext *ctx, const char *s );

extern void gl_error( GLcontext *ctx, GLenum error, const char *s );

extern GLenum gl_GetError( GLcontext *ctx );


extern void gl_update_state( GLcontext *ctx );
# 103 "osmesa.c" 2
# 1 "depth.h" 1
# 54 "depth.h"
extern GLuint
gl_depth_test_span_generic( GLcontext* ctx, GLuint n, GLint x, GLint y,
                            const GLdepth z[], GLubyte mask[] );

extern GLuint
gl_depth_test_span_less( GLcontext* ctx, GLuint n, GLint x, GLint y,
                         const GLdepth z[], GLubyte mask[] );

extern GLuint
gl_depth_test_span_greater( GLcontext* ctx, GLuint n, GLint x, GLint y,
                            const GLdepth z[], GLubyte mask[] );



extern void
gl_depth_test_pixels_generic( GLcontext* ctx,
                              GLuint n, const GLint x[], const GLint y[],
                              const GLdepth z[], GLubyte mask[] );

extern void
gl_depth_test_pixels_less( GLcontext* ctx,
                           GLuint n, const GLint x[], const GLint y[],
                           const GLdepth z[], GLubyte mask[] );

extern void
gl_depth_test_pixels_greater( GLcontext* ctx,
                              GLuint n, const GLint x[], const GLint y[],
                              const GLdepth z[], GLubyte mask[] );


extern void gl_read_depth_span_float( GLcontext* ctx,
                                      GLuint n, GLint x, GLint y,
                                      GLfloat depth[] );


extern void gl_read_depth_span_int( GLcontext* ctx, GLuint n, GLint x, GLint y,
                                    GLdepth depth[] );


extern void gl_alloc_depth_buffer( GLcontext* ctx );


extern void gl_clear_depth_buffer( GLcontext* ctx );


extern void gl_ClearDepth( GLcontext* ctx, GLclampd depth );
extern void gl_DepthFunc( GLcontext* ctx, GLenum func );
extern void gl_DepthMask( GLcontext* ctx, GLboolean flag );
extern void gl_DepthRange( GLcontext* ctx, GLclampd nearval, GLclampd farval );
# 104 "osmesa.c" 2
# 1 "macros.h" 1
# 75 "macros.h"
# 1 "/usr/include/math.h" 1 3 4
# 30 "/usr/include/math.h" 3 4




# 1 "/usr/include/bits/huge_val.h" 1 3 4
# 35 "/usr/include/math.h" 2 3 4

# 1 "/usr/include/bits/huge_valf.h" 1 3 4
# 37 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/bits/huge_vall.h" 1 3 4
# 38 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/bits/inf.h" 1 3 4
# 41 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/bits/nan.h" 1 3 4
# 44 "/usr/include/math.h" 2 3 4



# 1 "/usr/include/bits/mathdef.h" 1 3 4
# 26 "/usr/include/bits/mathdef.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 27 "/usr/include/bits/mathdef.h" 2 3 4
# 38 "/usr/include/bits/mathdef.h" 3 4
typedef long double float_t;

typedef long double double_t;
# 48 "/usr/include/math.h" 2 3 4
# 71 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4


extern double acos (double __x) __attribute__ ((__nothrow__)); extern double __acos (double __x) __attribute__ ((__nothrow__));

extern double asin (double __x) __attribute__ ((__nothrow__)); extern double __asin (double __x) __attribute__ ((__nothrow__));

extern double atan (double __x) __attribute__ ((__nothrow__)); extern double __atan (double __x) __attribute__ ((__nothrow__));

extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__)); extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__));


extern double cos (double __x) __attribute__ ((__nothrow__)); extern double __cos (double __x) __attribute__ ((__nothrow__));

extern double sin (double __x) __attribute__ ((__nothrow__)); extern double __sin (double __x) __attribute__ ((__nothrow__));

extern double tan (double __x) __attribute__ ((__nothrow__)); extern double __tan (double __x) __attribute__ ((__nothrow__));




extern double cosh (double __x) __attribute__ ((__nothrow__)); extern double __cosh (double __x) __attribute__ ((__nothrow__));

extern double sinh (double __x) __attribute__ ((__nothrow__)); extern double __sinh (double __x) __attribute__ ((__nothrow__));

extern double tanh (double __x) __attribute__ ((__nothrow__)); extern double __tanh (double __x) __attribute__ ((__nothrow__));

# 87 "/usr/include/bits/mathcalls.h" 3 4


extern double acosh (double __x) __attribute__ ((__nothrow__)); extern double __acosh (double __x) __attribute__ ((__nothrow__));

extern double asinh (double __x) __attribute__ ((__nothrow__)); extern double __asinh (double __x) __attribute__ ((__nothrow__));

extern double atanh (double __x) __attribute__ ((__nothrow__)); extern double __atanh (double __x) __attribute__ ((__nothrow__));







extern double exp (double __x) __attribute__ ((__nothrow__)); extern double __exp (double __x) __attribute__ ((__nothrow__));


extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__)); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__));


extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__)); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__));


extern double log (double __x) __attribute__ ((__nothrow__)); extern double __log (double __x) __attribute__ ((__nothrow__));


extern double log10 (double __x) __attribute__ ((__nothrow__)); extern double __log10 (double __x) __attribute__ ((__nothrow__));


extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__)); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__));

# 127 "/usr/include/bits/mathcalls.h" 3 4


extern double expm1 (double __x) __attribute__ ((__nothrow__)); extern double __expm1 (double __x) __attribute__ ((__nothrow__));


extern double log1p (double __x) __attribute__ ((__nothrow__)); extern double __log1p (double __x) __attribute__ ((__nothrow__));


extern double logb (double __x) __attribute__ ((__nothrow__)); extern double __logb (double __x) __attribute__ ((__nothrow__));






extern double exp2 (double __x) __attribute__ ((__nothrow__)); extern double __exp2 (double __x) __attribute__ ((__nothrow__));


extern double log2 (double __x) __attribute__ ((__nothrow__)); extern double __log2 (double __x) __attribute__ ((__nothrow__));








extern double pow (double __x, double __y) __attribute__ ((__nothrow__)); extern double __pow (double __x, double __y) __attribute__ ((__nothrow__));


extern double sqrt (double __x) __attribute__ ((__nothrow__)); extern double __sqrt (double __x) __attribute__ ((__nothrow__));





extern double hypot (double __x, double __y) __attribute__ ((__nothrow__)); extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__));






extern double cbrt (double __x) __attribute__ ((__nothrow__)); extern double __cbrt (double __x) __attribute__ ((__nothrow__));








extern double ceil (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __ceil (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double fabs (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __fabs (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double floor (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __floor (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double fmod (double __x, double __y) __attribute__ ((__nothrow__)); extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__));




extern int __isinf (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int __finite (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int isinf (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int finite (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double drem (double __x, double __y) __attribute__ ((__nothrow__)); extern double __drem (double __x, double __y) __attribute__ ((__nothrow__));



extern double significand (double __x) __attribute__ ((__nothrow__)); extern double __significand (double __x) __attribute__ ((__nothrow__));





extern double copysign (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));






extern double nan (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __nan (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int __isnan (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern int isnan (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double j0 (double) __attribute__ ((__nothrow__)); extern double __j0 (double) __attribute__ ((__nothrow__));
extern double j1 (double) __attribute__ ((__nothrow__)); extern double __j1 (double) __attribute__ ((__nothrow__));
extern double jn (int, double) __attribute__ ((__nothrow__)); extern double __jn (int, double) __attribute__ ((__nothrow__));
extern double y0 (double) __attribute__ ((__nothrow__)); extern double __y0 (double) __attribute__ ((__nothrow__));
extern double y1 (double) __attribute__ ((__nothrow__)); extern double __y1 (double) __attribute__ ((__nothrow__));
extern double yn (int, double) __attribute__ ((__nothrow__)); extern double __yn (int, double) __attribute__ ((__nothrow__));






extern double erf (double) __attribute__ ((__nothrow__)); extern double __erf (double) __attribute__ ((__nothrow__));
extern double erfc (double) __attribute__ ((__nothrow__)); extern double __erfc (double) __attribute__ ((__nothrow__));
extern double lgamma (double) __attribute__ ((__nothrow__)); extern double __lgamma (double) __attribute__ ((__nothrow__));






extern double tgamma (double) __attribute__ ((__nothrow__)); extern double __tgamma (double) __attribute__ ((__nothrow__));





extern double gamma (double) __attribute__ ((__nothrow__)); extern double __gamma (double) __attribute__ ((__nothrow__));






extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__)); extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__));







extern double rint (double __x) __attribute__ ((__nothrow__)); extern double __rint (double __x) __attribute__ ((__nothrow__));


extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));

extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern double remainder (double __x, double __y) __attribute__ ((__nothrow__)); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__));



extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__)); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__));



extern int ilogb (double __x) __attribute__ ((__nothrow__)); extern int __ilogb (double __x) __attribute__ ((__nothrow__));




extern double scalbln (double __x, long int __n) __attribute__ ((__nothrow__)); extern double __scalbln (double __x, long int __n) __attribute__ ((__nothrow__));



extern double nearbyint (double __x) __attribute__ ((__nothrow__)); extern double __nearbyint (double __x) __attribute__ ((__nothrow__));



extern double round (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __round (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern double trunc (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __trunc (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__)); extern double __remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__));






extern long int lrint (double __x) __attribute__ ((__nothrow__)); extern long int __lrint (double __x) __attribute__ ((__nothrow__));
extern long long int llrint (double __x) __attribute__ ((__nothrow__)); extern long long int __llrint (double __x) __attribute__ ((__nothrow__));



extern long int lround (double __x) __attribute__ ((__nothrow__)); extern long int __lround (double __x) __attribute__ ((__nothrow__));
extern long long int llround (double __x) __attribute__ ((__nothrow__)); extern long long int __llround (double __x) __attribute__ ((__nothrow__));



extern double fdim (double __x, double __y) __attribute__ ((__nothrow__)); extern double __fdim (double __x, double __y) __attribute__ ((__nothrow__));


extern double fmax (double __x, double __y) __attribute__ ((__nothrow__)); extern double __fmax (double __x, double __y) __attribute__ ((__nothrow__));


extern double fmin (double __x, double __y) __attribute__ ((__nothrow__)); extern double __fmin (double __x, double __y) __attribute__ ((__nothrow__));



extern int __fpclassify (double __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));


extern int __signbit (double __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__)); extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__));








extern double scalb (double __x, double __n) __attribute__ ((__nothrow__)); extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__));
# 72 "/usr/include/math.h" 2 3 4
# 94 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4


extern float acosf (float __x) __attribute__ ((__nothrow__)); extern float __acosf (float __x) __attribute__ ((__nothrow__));

extern float asinf (float __x) __attribute__ ((__nothrow__)); extern float __asinf (float __x) __attribute__ ((__nothrow__));

extern float atanf (float __x) __attribute__ ((__nothrow__)); extern float __atanf (float __x) __attribute__ ((__nothrow__));

extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__)); extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__));


extern float cosf (float __x) __attribute__ ((__nothrow__)); extern float __cosf (float __x) __attribute__ ((__nothrow__));

extern float sinf (float __x) __attribute__ ((__nothrow__)); extern float __sinf (float __x) __attribute__ ((__nothrow__));

extern float tanf (float __x) __attribute__ ((__nothrow__)); extern float __tanf (float __x) __attribute__ ((__nothrow__));




extern float coshf (float __x) __attribute__ ((__nothrow__)); extern float __coshf (float __x) __attribute__ ((__nothrow__));

extern float sinhf (float __x) __attribute__ ((__nothrow__)); extern float __sinhf (float __x) __attribute__ ((__nothrow__));

extern float tanhf (float __x) __attribute__ ((__nothrow__)); extern float __tanhf (float __x) __attribute__ ((__nothrow__));

# 87 "/usr/include/bits/mathcalls.h" 3 4


extern float acoshf (float __x) __attribute__ ((__nothrow__)); extern float __acoshf (float __x) __attribute__ ((__nothrow__));

extern float asinhf (float __x) __attribute__ ((__nothrow__)); extern float __asinhf (float __x) __attribute__ ((__nothrow__));

extern float atanhf (float __x) __attribute__ ((__nothrow__)); extern float __atanhf (float __x) __attribute__ ((__nothrow__));







extern float expf (float __x) __attribute__ ((__nothrow__)); extern float __expf (float __x) __attribute__ ((__nothrow__));


extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__)); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__));


extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__)); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__));


extern float logf (float __x) __attribute__ ((__nothrow__)); extern float __logf (float __x) __attribute__ ((__nothrow__));


extern float log10f (float __x) __attribute__ ((__nothrow__)); extern float __log10f (float __x) __attribute__ ((__nothrow__));


extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__)); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__));

# 127 "/usr/include/bits/mathcalls.h" 3 4


extern float expm1f (float __x) __attribute__ ((__nothrow__)); extern float __expm1f (float __x) __attribute__ ((__nothrow__));


extern float log1pf (float __x) __attribute__ ((__nothrow__)); extern float __log1pf (float __x) __attribute__ ((__nothrow__));


extern float logbf (float __x) __attribute__ ((__nothrow__)); extern float __logbf (float __x) __attribute__ ((__nothrow__));






extern float exp2f (float __x) __attribute__ ((__nothrow__)); extern float __exp2f (float __x) __attribute__ ((__nothrow__));


extern float log2f (float __x) __attribute__ ((__nothrow__)); extern float __log2f (float __x) __attribute__ ((__nothrow__));








extern float powf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __powf (float __x, float __y) __attribute__ ((__nothrow__));


extern float sqrtf (float __x) __attribute__ ((__nothrow__)); extern float __sqrtf (float __x) __attribute__ ((__nothrow__));





extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__));






extern float cbrtf (float __x) __attribute__ ((__nothrow__)); extern float __cbrtf (float __x) __attribute__ ((__nothrow__));








extern float ceilf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __ceilf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float fabsf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __fabsf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float floorf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __floorf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__));




extern int __isinff (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int __finitef (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int isinff (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int finitef (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float dremf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__));



extern float significandf (float __x) __attribute__ ((__nothrow__)); extern float __significandf (float __x) __attribute__ ((__nothrow__));





extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));






extern float nanf (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __nanf (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int __isnanf (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern int isnanf (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float j0f (float) __attribute__ ((__nothrow__)); extern float __j0f (float) __attribute__ ((__nothrow__));
extern float j1f (float) __attribute__ ((__nothrow__)); extern float __j1f (float) __attribute__ ((__nothrow__));
extern float jnf (int, float) __attribute__ ((__nothrow__)); extern float __jnf (int, float) __attribute__ ((__nothrow__));
extern float y0f (float) __attribute__ ((__nothrow__)); extern float __y0f (float) __attribute__ ((__nothrow__));
extern float y1f (float) __attribute__ ((__nothrow__)); extern float __y1f (float) __attribute__ ((__nothrow__));
extern float ynf (int, float) __attribute__ ((__nothrow__)); extern float __ynf (int, float) __attribute__ ((__nothrow__));






extern float erff (float) __attribute__ ((__nothrow__)); extern float __erff (float) __attribute__ ((__nothrow__));
extern float erfcf (float) __attribute__ ((__nothrow__)); extern float __erfcf (float) __attribute__ ((__nothrow__));
extern float lgammaf (float) __attribute__ ((__nothrow__)); extern float __lgammaf (float) __attribute__ ((__nothrow__));






extern float tgammaf (float) __attribute__ ((__nothrow__)); extern float __tgammaf (float) __attribute__ ((__nothrow__));





extern float gammaf (float) __attribute__ ((__nothrow__)); extern float __gammaf (float) __attribute__ ((__nothrow__));






extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__)); extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__));







extern float rintf (float __x) __attribute__ ((__nothrow__)); extern float __rintf (float __x) __attribute__ ((__nothrow__));


extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));

extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__));



extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__)); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__));



extern int ilogbf (float __x) __attribute__ ((__nothrow__)); extern int __ilogbf (float __x) __attribute__ ((__nothrow__));




extern float scalblnf (float __x, long int __n) __attribute__ ((__nothrow__)); extern float __scalblnf (float __x, long int __n) __attribute__ ((__nothrow__));



extern float nearbyintf (float __x) __attribute__ ((__nothrow__)); extern float __nearbyintf (float __x) __attribute__ ((__nothrow__));



extern float roundf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __roundf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern float truncf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __truncf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__)); extern float __remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__));






extern long int lrintf (float __x) __attribute__ ((__nothrow__)); extern long int __lrintf (float __x) __attribute__ ((__nothrow__));
extern long long int llrintf (float __x) __attribute__ ((__nothrow__)); extern long long int __llrintf (float __x) __attribute__ ((__nothrow__));



extern long int lroundf (float __x) __attribute__ ((__nothrow__)); extern long int __lroundf (float __x) __attribute__ ((__nothrow__));
extern long long int llroundf (float __x) __attribute__ ((__nothrow__)); extern long long int __llroundf (float __x) __attribute__ ((__nothrow__));



extern float fdimf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __fdimf (float __x, float __y) __attribute__ ((__nothrow__));


extern float fmaxf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __fmaxf (float __x, float __y) __attribute__ ((__nothrow__));


extern float fminf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __fminf (float __x, float __y) __attribute__ ((__nothrow__));



extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));


extern int __signbitf (float __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__)); extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__));








extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__)); extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__));
# 95 "/usr/include/math.h" 2 3 4
# 141 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4


extern long double acosl (long double __x) __attribute__ ((__nothrow__)); extern long double __acosl (long double __x) __attribute__ ((__nothrow__));

extern long double asinl (long double __x) __attribute__ ((__nothrow__)); extern long double __asinl (long double __x) __attribute__ ((__nothrow__));

extern long double atanl (long double __x) __attribute__ ((__nothrow__)); extern long double __atanl (long double __x) __attribute__ ((__nothrow__));

extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__)); extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__));


extern long double cosl (long double __x) __attribute__ ((__nothrow__)); extern long double __cosl (long double __x) __attribute__ ((__nothrow__));

extern long double sinl (long double __x) __attribute__ ((__nothrow__)); extern long double __sinl (long double __x) __attribute__ ((__nothrow__));

extern long double tanl (long double __x) __attribute__ ((__nothrow__)); extern long double __tanl (long double __x) __attribute__ ((__nothrow__));




extern long double coshl (long double __x) __attribute__ ((__nothrow__)); extern long double __coshl (long double __x) __attribute__ ((__nothrow__));

extern long double sinhl (long double __x) __attribute__ ((__nothrow__)); extern long double __sinhl (long double __x) __attribute__ ((__nothrow__));

extern long double tanhl (long double __x) __attribute__ ((__nothrow__)); extern long double __tanhl (long double __x) __attribute__ ((__nothrow__));

# 87 "/usr/include/bits/mathcalls.h" 3 4


extern long double acoshl (long double __x) __attribute__ ((__nothrow__)); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__));

extern long double asinhl (long double __x) __attribute__ ((__nothrow__)); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__));

extern long double atanhl (long double __x) __attribute__ ((__nothrow__)); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__));







extern long double expl (long double __x) __attribute__ ((__nothrow__)); extern long double __expl (long double __x) __attribute__ ((__nothrow__));


extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__)); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__));


extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__)); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__));


extern long double logl (long double __x) __attribute__ ((__nothrow__)); extern long double __logl (long double __x) __attribute__ ((__nothrow__));


extern long double log10l (long double __x) __attribute__ ((__nothrow__)); extern long double __log10l (long double __x) __attribute__ ((__nothrow__));


extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__)); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__));

# 127 "/usr/include/bits/mathcalls.h" 3 4


extern long double expm1l (long double __x) __attribute__ ((__nothrow__)); extern long double __expm1l (long double __x) __attribute__ ((__nothrow__));


extern long double log1pl (long double __x) __attribute__ ((__nothrow__)); extern long double __log1pl (long double __x) __attribute__ ((__nothrow__));


extern long double logbl (long double __x) __attribute__ ((__nothrow__)); extern long double __logbl (long double __x) __attribute__ ((__nothrow__));






extern long double exp2l (long double __x) __attribute__ ((__nothrow__)); extern long double __exp2l (long double __x) __attribute__ ((__nothrow__));


extern long double log2l (long double __x) __attribute__ ((__nothrow__)); extern long double __log2l (long double __x) __attribute__ ((__nothrow__));








extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__));


extern long double sqrtl (long double __x) __attribute__ ((__nothrow__)); extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__));





extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__));






extern long double cbrtl (long double __x) __attribute__ ((__nothrow__)); extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__));








extern long double ceill (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __ceill (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double fabsl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __fabsl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double floorl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __floorl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__));




extern int __isinfl (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int __finitel (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int isinfl (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int finitel (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__));



extern long double significandl (long double __x) __attribute__ ((__nothrow__)); extern long double __significandl (long double __x) __attribute__ ((__nothrow__));





extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));






extern long double nanl (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __nanl (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int __isnanl (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern int isnanl (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double j0l (long double) __attribute__ ((__nothrow__)); extern long double __j0l (long double) __attribute__ ((__nothrow__));
extern long double j1l (long double) __attribute__ ((__nothrow__)); extern long double __j1l (long double) __attribute__ ((__nothrow__));
extern long double jnl (int, long double) __attribute__ ((__nothrow__)); extern long double __jnl (int, long double) __attribute__ ((__nothrow__));
extern long double y0l (long double) __attribute__ ((__nothrow__)); extern long double __y0l (long double) __attribute__ ((__nothrow__));
extern long double y1l (long double) __attribute__ ((__nothrow__)); extern long double __y1l (long double) __attribute__ ((__nothrow__));
extern long double ynl (int, long double) __attribute__ ((__nothrow__)); extern long double __ynl (int, long double) __attribute__ ((__nothrow__));






extern long double erfl (long double) __attribute__ ((__nothrow__)); extern long double __erfl (long double) __attribute__ ((__nothrow__));
extern long double erfcl (long double) __attribute__ ((__nothrow__)); extern long double __erfcl (long double) __attribute__ ((__nothrow__));
extern long double lgammal (long double) __attribute__ ((__nothrow__)); extern long double __lgammal (long double) __attribute__ ((__nothrow__));






extern long double tgammal (long double) __attribute__ ((__nothrow__)); extern long double __tgammal (long double) __attribute__ ((__nothrow__));





extern long double gammal (long double) __attribute__ ((__nothrow__)); extern long double __gammal (long double) __attribute__ ((__nothrow__));






extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__)); extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__));







extern long double rintl (long double __x) __attribute__ ((__nothrow__)); extern long double __rintl (long double __x) __attribute__ ((__nothrow__));


extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));

extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__));



extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__)); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__));



extern int ilogbl (long double __x) __attribute__ ((__nothrow__)); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__));




extern long double scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__)); extern long double __scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__));



extern long double nearbyintl (long double __x) __attribute__ ((__nothrow__)); extern long double __nearbyintl (long double __x) __attribute__ ((__nothrow__));



extern long double roundl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __roundl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern long double truncl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __truncl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__)); extern long double __remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__));






extern long int lrintl (long double __x) __attribute__ ((__nothrow__)); extern long int __lrintl (long double __x) __attribute__ ((__nothrow__));
extern long long int llrintl (long double __x) __attribute__ ((__nothrow__)); extern long long int __llrintl (long double __x) __attribute__ ((__nothrow__));



extern long int lroundl (long double __x) __attribute__ ((__nothrow__)); extern long int __lroundl (long double __x) __attribute__ ((__nothrow__));
extern long long int llroundl (long double __x) __attribute__ ((__nothrow__)); extern long long int __llroundl (long double __x) __attribute__ ((__nothrow__));



extern long double fdiml (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __fdiml (long double __x, long double __y) __attribute__ ((__nothrow__));


extern long double fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__));


extern long double fminl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __fminl (long double __x, long double __y) __attribute__ ((__nothrow__));



extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));


extern int __signbitl (long double __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__)); extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__));








extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__)); extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__));
# 142 "/usr/include/math.h" 2 3 4
# 157 "/usr/include/math.h" 3 4
extern int signgam;
# 198 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN,

    FP_INFINITE,

    FP_ZERO,

    FP_SUBNORMAL,

    FP_NORMAL

  };
# 284 "/usr/include/math.h" 3 4
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
# 309 "/usr/include/math.h" 3 4
struct exception

  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };




extern int matherr (struct exception *__exc);
# 465 "/usr/include/math.h" 3 4

# 76 "macros.h" 2
# 105 "osmesa.c" 2
# 1 "matrix.h" 1
# 49 "matrix.h"
extern void gl_analyze_modelview_matrix( GLcontext *ctx );

extern void gl_analyze_projection_matrix( GLcontext *ctx );

extern void gl_analyze_texture_matrix( GLcontext *ctx );



extern void gl_rotation_matrix( GLfloat angle, GLfloat x, GLfloat y, GLfloat z,
                                GLfloat m[] );



extern void gl_Frustum( GLcontext *ctx,
                        GLdouble left, GLdouble right,
                        GLdouble bottom, GLdouble top,
                        GLdouble nearval, GLdouble farval );

extern void gl_Ortho( GLcontext *ctx,
                      GLdouble left, GLdouble right,
                      GLdouble bottom, GLdouble top,
                      GLdouble nearval, GLdouble farval );

extern void gl_PushMatrix( GLcontext *ctx );

extern void gl_PopMatrix( GLcontext *ctx );

extern void gl_LoadIdentity( GLcontext *ctx );

extern void gl_LoadMatrixf( GLcontext *ctx, const GLfloat *m );

extern void gl_MatrixMode( GLcontext *ctx, GLenum mode );

extern void gl_MultMatrixf( GLcontext *ctx, const GLfloat *m );

extern void gl_Viewport( GLcontext *ctx,
                         GLint x, GLint y, GLsizei width, GLsizei height );

extern void gl_Rotatef( GLcontext *ctx,
                        GLfloat angle, GLfloat x, GLfloat y, GLfloat z );

extern void gl_Scalef( GLcontext *ctx, GLfloat x, GLfloat y, GLfloat z );

extern void gl_Translatef( GLcontext *ctx, GLfloat x, GLfloat y, GLfloat z );
# 106 "osmesa.c" 2

# 1 "vb.h" 1
# 106 "vb.h"
struct vertex_buffer {
   GLfloat Obj[(480 + 2 * (6 + 6))][4];
   GLfloat Eye[(480 + 2 * (6 + 6))][4];
   GLfloat Clip[(480 + 2 * (6 + 6))][4];
   GLfloat Win[(480 + 2 * (6 + 6))][3];

   GLfloat Normal[(480 + 2 * (6 + 6))][3];

   GLubyte Fcolor[(480 + 2 * (6 + 6))][4];
   GLubyte Bcolor[(480 + 2 * (6 + 6))][4];
   GLubyte (*Color)[4];

   GLuint Findex[(480 + 2 * (6 + 6))];
   GLuint Bindex[(480 + 2 * (6 + 6))];
   GLuint *Index;

   GLboolean Edgeflag[(480 + 2 * (6 + 6))];

   GLfloat TexCoord[(480 + 2 * (6 + 6))][4];

   GLubyte ClipMask[(480 + 2 * (6 + 6))];
   GLubyte ClipOrMask;
   GLubyte ClipAndMask;

   GLuint Start;
   GLuint Count;
   GLuint Free;

   GLuint VertexSizeMask;
   GLuint TexCoordSize;
   GLboolean MonoColor;
   GLboolean MonoNormal;
   GLboolean MonoMaterial;


   GLuint MaterialMask[(480 + 2 * (6 + 6))];
   struct gl_material Material[(480 + 2 * (6 + 6))][2];
};
# 162 "vb.h"
extern struct vertex_buffer *gl_alloc_vb(void);
# 108 "osmesa.c" 2



struct osmesa_context {
   GLcontext *gl_ctx;
   GLvisual *gl_visual;
   GLframebuffer *gl_buffer;
   GLenum format;
   void *buffer;
   GLint width, height;
   GLuint pixel;
   GLuint clearpixel;
   GLint rowlength;
   GLint userRowLength;
   GLint rshift, gshift;
   GLint bshift, ashift;
   GLint rind, gind, bind;
   void *rowaddr[1200];
   GLboolean yup;

};
# 137 "osmesa.c"
   static OSMesaContext Current = ((void *)0);





static void osmesa_setup_DD_pointers( GLcontext *ctx );
# 161 "osmesa.c"
OSMesaContext OSMesaCreateContext( GLenum format, OSMesaContext sharelist )
{
   OSMesaContext osmesa;
   GLfloat rscale, gscale, bscale, ascale;
   GLint rshift, gshift, bshift, ashift;
   GLint rind, gind, bind;
   GLint index_bits;
   GLboolean rgbmode;
   GLboolean swalpha;
   GLuint i4 = 1;
   GLubyte *i1 = (GLubyte *) &i4;
   GLint little_endian = *i1;

   swalpha = 0x0;
   rind = gind = bind = 0;
   if (format==OSMESA_COLOR_INDEX) {
      rscale = gscale = bscale = ascale = 0.0;
      index_bits = 8;
      rshift = gshift = bshift = ashift = 0;
      rgbmode = 0x0;
   }
   else if (format==OSMESA_RGBA) {
      rscale = gscale = bscale = ascale = 255.0;
      index_bits = 0;
      if (little_endian) {
         rshift = 0;
         gshift = 8;
         bshift = 16;
         ashift = 24;
      }
      else {
         rshift = 24;
         gshift = 16;
         bshift = 8;
         ashift = 0;
      }
      rgbmode = 0x1;
   }
   else if (format==OSMESA_BGRA) {
      rscale = gscale = bscale = ascale = 255.0;
      index_bits = 0;
      if (little_endian) {
         ashift = 0;
         rshift = 8;
         gshift = 16;
         bshift = 24;
      }
      else {
         bshift = 24;
         gshift = 16;
         rshift = 8;
         ashift = 0;
      }
      rgbmode = 0x1;
   }
   else if (format==OSMESA_ARGB) {
      rscale = gscale = bscale = ascale = 255.0;
      index_bits = 0;
      if (little_endian) {
         bshift = 0;
         gshift = 8;
         rshift = 16;
         ashift = 24;
      }
      else {
         ashift = 24;
         rshift = 16;
         gshift = 8;
         bshift = 0;
      }
      rgbmode = 0x1;
   }
   else if (format==OSMESA_RGB) {
      rscale = gscale = bscale = ascale = 255.0;
      index_bits = 0;
      bshift = 0;
      gshift = 8;
      rshift = 16;
      ashift = 24;
      bind = 2;
      gind = 1;
      rind = 0;
      rgbmode = 0x1;
      swalpha = 0x1;
   }
   else if (format==OSMESA_BGR) {
      rscale = gscale = bscale = ascale = 255.0;
      index_bits = 0;
      bshift = 0;
      gshift = 8;
      rshift = 16;
      ashift = 24;
      bind = 0;
      gind = 1;
      rind = 2;
      rgbmode = 0x1;
      swalpha = 0x1;
   }
   else {
      return ((void *)0);
   }


   osmesa = (OSMesaContext) calloc( 1, sizeof(struct osmesa_context) );
   if (osmesa) {
      osmesa->gl_visual = gl_create_visual( rgbmode,
         swalpha,
                                            0x0,
                                            16,
                                            8,
                                            16,
                                            index_bits,
                                            rscale, gscale, bscale, ascale,
                                            8, 8, 8, 0 );
      if (!osmesa->gl_visual) {
         return ((void *)0);
      }

      osmesa->gl_ctx = gl_create_context( osmesa->gl_visual,
                                          sharelist ? sharelist->gl_ctx : ((void *)0),
                                          (void *) osmesa );
      if (!osmesa->gl_ctx) {
         gl_destroy_visual( osmesa->gl_visual );
         free(osmesa);
         return ((void *)0);
      }
      osmesa->gl_buffer = gl_create_framebuffer( osmesa->gl_visual );
      if (!osmesa->gl_buffer) {
         gl_destroy_visual( osmesa->gl_visual );
         gl_destroy_context( osmesa->gl_ctx );
         free(osmesa);
         return ((void *)0);
      }
      osmesa->format = format;
      osmesa->buffer = ((void *)0);
      osmesa->width = 0;
      osmesa->height = 0;
      osmesa->pixel = 0;
      osmesa->clearpixel = 0;
      osmesa->userRowLength = 0;
      osmesa->rowlength = 0;
      osmesa->yup = 0x1;
      osmesa->rshift = rshift;
      osmesa->gshift = gshift;
      osmesa->bshift = bshift;
      osmesa->ashift = ashift;
      osmesa->rind = rind;
      osmesa->gind = gind;
      osmesa->bind = bind;
   }
   return osmesa;
}
# 321 "osmesa.c"
void OSMesaDestroyContext( OSMesaContext ctx )
{
   if (ctx) {
      gl_destroy_visual( ctx->gl_visual );
      gl_destroy_framebuffer( ctx->gl_buffer );
      gl_destroy_context( ctx->gl_ctx );
      free( ctx );
   }
}






static void compute_row_addresses( OSMesaContext ctx )
{
   GLint i;

   if (ctx->yup) {

      if (ctx->format==OSMESA_COLOR_INDEX) {

         GLubyte *origin = (GLubyte *) ctx->buffer;
         for (i=0;i<1200;i++) {
            ctx->rowaddr[i] = origin + i * ctx->rowlength;
         }
      }
      else {
         if ((ctx->format==OSMESA_RGB) || (ctx->format==OSMESA_BGR)) {

            GLubyte *origin = (GLubyte *) ctx->buffer;
            for (i=0;i<1200;i++) {
               ctx->rowaddr[i] = origin + (i * (ctx->rowlength*3));
            }
         } else {

            GLuint *origin = (GLuint *) ctx->buffer;
            for (i=0;i<1200;i++) {
               ctx->rowaddr[i] = origin + i * ctx->rowlength;
            }
         }
      }
   }
   else {

      if (ctx->format==OSMESA_COLOR_INDEX) {

         GLubyte *origin = (GLubyte *) ctx->buffer;
         for (i=0;i<1200;i++) {
            ctx->rowaddr[i] = origin + (ctx->height-i-1) * ctx->rowlength;
         }
      }
      else {
         if ((ctx->format==OSMESA_RGB) || (ctx->format==OSMESA_BGR)) {

            GLubyte *origin = (GLubyte *) ctx->buffer;
            for (i=0;i<1200;i++) {
               ctx->rowaddr[i] = origin + ((ctx->height-i-1) * (ctx->rowlength*3));
            }
         } else {

            GLuint *origin = (GLuint *) ctx->buffer;
            for (i=0;i<1200;i++) {
               ctx->rowaddr[i] = origin + (ctx->height-i-1) * ctx->rowlength;
            }
         }
      }
   }
}
# 420 "osmesa.c"
GLboolean OSMesaMakeCurrent( OSMesaContext ctx, void *buffer, GLenum type,
                             GLsizei width, GLsizei height )
{
   if (!ctx || !buffer || type!=0x1401
       || width<1 || height<1 || width>1600 || height>1200) {
      return 0x0;
   }

   gl_make_current( ctx->gl_ctx, ctx->gl_buffer );

   ctx->buffer = buffer;
   ctx->width = width;
   ctx->height = height;
   if (ctx->userRowLength)
      ctx->rowlength = ctx->userRowLength;
   else
      ctx->rowlength = width;

   osmesa_setup_DD_pointers( ctx->gl_ctx );






   Current = ctx;


   compute_row_addresses( ctx );


   if (ctx->gl_ctx->Viewport.Width==0) {

      gl_Viewport( ctx->gl_ctx, 0, 0, width, height );
      ctx->gl_ctx->Scissor.Width = width;
      ctx->gl_ctx->Scissor.Height = height;
   }

   return 0x1;
}




OSMesaContext OSMesaGetCurrentContext( void )
{




   return Current;

}



void OSMesaPixelStore( GLint pname, GLint value )
{
   OSMesaContext ctx = OSMesaGetCurrentContext();

   switch (pname) {
      case OSMESA_ROW_LENGTH:
         if (value<0) {
            gl_error( ctx->gl_ctx, 0x0501,
                      "OSMesaPixelStore(value)" );
            return;
         }
         ctx->userRowLength = value;
         ctx->rowlength = value;
         break;
      case OSMESA_Y_UP:
         ctx->yup = value ? 0x1 : 0x0;
         break;
      default:
         gl_error( ctx->gl_ctx, 0x0500, "OSMesaPixelStore(pname)" );
         return;
   }

   compute_row_addresses( ctx );
}


void OSMesaGetIntegerv( GLint pname, GLint *value )
{
   OSMesaContext ctx = OSMesaGetCurrentContext();

   switch (pname) {
      case OSMESA_WIDTH:
         *value = ctx->width;
         return;
      case OSMESA_HEIGHT:
         *value = ctx->height;
         return;
      case OSMESA_FORMAT:
         *value = ctx->format;
         return;
      case OSMESA_TYPE:
         *value = 0x1401;
         return;
      case OSMESA_ROW_LENGTH:
         *value = ctx->rowlength;
         return;
      case OSMESA_Y_UP:
         *value = ctx->yup;
         return;
      default:
         gl_error( ctx->gl_ctx, 0x0500, "OSMesaGetIntergerv(pname)" );
         return;
   }
}
# 541 "osmesa.c"
GLboolean OSMesaGetDepthBuffer( OSMesaContext c, GLint *width, GLint *height,
                                GLint *bytesPerValue, void **buffer )
{
   if ((!c->gl_buffer) || (!c->gl_buffer->Depth)) {
      *width = 0;
      *height = 0;
      *bytesPerValue = 0;
      *buffer = 0;
      return 0x0;
   }
   else {
      *width = c->gl_buffer->Width;
      *height = c->gl_buffer->Height;
      *bytesPerValue = sizeof(GLdepth);
      *buffer = c->gl_buffer->Depth;
      return 0x1;
   }
}
# 593 "osmesa.c"
static GLboolean set_buffer( GLcontext *ctx, GLenum mode )
{
   if (mode==0x0404) {
      return 0x1;
   }
   else {
      return 0x0;
   }
}


static void clear_index( GLcontext *ctx, GLuint index )
{
   OSMesaContext osmesa = (OSMesaContext) ctx->DriverCtx;
   osmesa->clearpixel = index;
}



static void clear_color( GLcontext *ctx,
                         GLubyte r, GLubyte g, GLubyte b, GLubyte a )
{
   OSMesaContext osmesa = (OSMesaContext) ctx->DriverCtx;
   osmesa->clearpixel = ( ((r) << osmesa->rshift) | ((g) << osmesa->gshift) | ((b) << osmesa->bshift) | ((a) << osmesa->ashift) );
}



static void clear( GLcontext *ctx,
                   GLboolean all, GLint x, GLint y, GLint width, GLint height )
{
   OSMesaContext osmesa = (OSMesaContext) ctx->DriverCtx;
   if (osmesa->format==OSMESA_COLOR_INDEX) {
      if (all) {

         memset( (void *) (osmesa->buffer), (int) (osmesa->clearpixel), (size_t) (osmesa->rowlength*osmesa->height) );
      }
      else {

         GLuint i, j;
         for (i=0;i<height;i++) {
            GLubyte *ptr1 = ((GLubyte *) osmesa->rowaddr[(y+i)] + (x));
            for (j=0;j<width;j++) {
               *ptr1++ = osmesa->clearpixel;
            }
         }
      }
   }
   else if ((osmesa->format==OSMESA_RGB)||(osmesa->format==OSMESA_BGR)) {
      GLubyte rval = (((osmesa->clearpixel) >> osmesa->rshift) & 0xff);
      GLubyte gval = (((osmesa->clearpixel) >> osmesa->gshift) & 0xff);
      GLubyte bval = (((osmesa->clearpixel) >> osmesa->bshift) & 0xff);
      GLint rind = osmesa->rind;
      GLint gind = osmesa->gind;
      GLint bind = osmesa->bind;
      if (all) {
         GLuint i, n;
         GLubyte *ptr3 = (GLubyte *) osmesa->buffer;

         n = osmesa->rowlength * osmesa->height;
         for (i=0;i<n;i++) {
            ptr3[rind] = rval;
            ptr3[gind] = gval;
            ptr3[bind] = bval;
            ptr3 += 3;
         }
      }
      else {

         GLuint i, j;
         for (i=0;i<height;i++) {
            GLubyte *ptr3 = ((GLubyte *) osmesa->rowaddr[(y+i)] + ((x)*3));
            for (j=0;j<width;j++) {
               ptr3[rind] = rval;
               ptr3[gind] = gval;
               ptr3[bind] = bval;
               ptr3 += 3;
            }
         }
      }
   }
   else {
      if (all) {

         GLuint i, n, *ptr4;
         n = osmesa->rowlength * osmesa->height;
         ptr4 = (GLuint *) osmesa->buffer;
         for (i=0;i<n;i++) {
            *ptr4++ = osmesa->clearpixel;
         }
      }
      else {

         GLuint i, j;
         for (i=0;i<height;i++) {
            GLuint *ptr4 = ((GLuint *) osmesa->rowaddr[(y+i)] + (x));
            for (j=0;j<width;j++) {
               *ptr4++ = osmesa->clearpixel;
            }
         }
      }
   }
}



static void set_index( GLcontext *ctx, GLuint index )
{
   OSMesaContext osmesa = (OSMesaContext) ctx->DriverCtx;
   osmesa->pixel = index;
}



static void set_color( GLcontext *ctx,
                       GLubyte r, GLubyte g, GLubyte b, GLubyte a )
{
   OSMesaContext osmesa = (OSMesaContext) ctx->DriverCtx;
   osmesa->pixel = ( ((r) << osmesa->rshift) | ((g) << osmesa->gshift) | ((b) << osmesa->bshift) | ((a) << osmesa->ashift) );
}



static void buffer_size( GLcontext *ctx, GLuint *width, GLuint *height )
{
   OSMesaContext osmesa = (OSMesaContext) ctx->DriverCtx;
   *width = osmesa->width;
   *height = osmesa->height;
}






static void write_color_span( GLcontext *ctx,
                              GLuint n, GLint x, GLint y,
                              const GLubyte red[], const GLubyte green[],
         const GLubyte blue[], const GLubyte alpha[],
         const GLubyte mask[] )
{
   OSMesaContext osmesa = (OSMesaContext) ctx->DriverCtx;
   GLuint *ptr4 = ((GLuint *) osmesa->rowaddr[y] + (x));
   GLuint i;
   GLint rshift = osmesa->rshift;
   GLint gshift = osmesa->gshift;
   GLint bshift = osmesa->bshift;
   GLint ashift = osmesa->ashift;
   if (mask) {
      for (i=0;i<n;i++,ptr4++) {
         if (mask[i]) {
            *ptr4 = ( ((red[i]) << rshift) | ((green[i]) << gshift) | ((blue[i]) << bshift) | ((alpha[i]) << ashift) );
         }
      }
   }
   else {
      for (i=0;i<n;i++,ptr4++) {
         *ptr4 = ( ((red[i]) << rshift) | ((green[i]) << gshift) | ((blue[i]) << bshift) | ((alpha[i]) << ashift) );
      }
   }
}



static void write_monocolor_span( GLcontext *ctx,
                                  GLuint n, GLint x, GLint y,
      const GLubyte mask[] )
{
   OSMesaContext osmesa = (OSMesaContext) ctx->DriverCtx;
   GLuint *ptr4 = ((GLuint *) osmesa->rowaddr[y] + (x));
   GLuint i;
   for (i=0;i<n;i++,ptr4++) {
      if (mask[i]) {
         *ptr4 = osmesa->pixel;
      }
   }
}



static void write_color_pixels( GLcontext *ctx,
                                GLuint n, const GLint x[], const GLint y[],
                                const GLubyte red[], const GLubyte green[],
           const GLubyte blue[], const GLubyte alpha[],
           const GLubyte mask[] )
{
   OSMesaContext osmesa = (OSMesaContext) ctx->DriverCtx;
   GLuint i;
   GLint rshift = osmesa->rshift;
   GLint gshift = osmesa->gshift;
   GLint bshift = osmesa->bshift;
   GLint ashift = osmesa->ashift;
   for (i=0;i<n;i++) {
      if (mask[i]) {
         GLuint *ptr4 = ((GLuint *) osmesa->rowaddr[y[i]] + (x[i]));
         *ptr4 = ( ((red[i]) << rshift) | ((green[i]) << gshift) | ((blue[i]) << bshift) | ((alpha[i]) << ashift) );
      }
   }
}



static void write_monocolor_pixels( GLcontext *ctx,
                                    GLuint n, const GLint x[], const GLint y[],
        const GLubyte mask[] )
{
   OSMesaContext osmesa = (OSMesaContext) ctx->DriverCtx;
   GLuint i;
   for (i=0;i<n;i++) {
      if (mask[i]) {
         GLuint *ptr4 = ((GLuint *) osmesa->rowaddr[y[i]] + (x[i]));
         *ptr4 = osmesa->pixel;
      }
   }
}



static void write_index_span( GLcontext *ctx,
                              GLuint n, GLint x, GLint y, const GLuint index[],
         const GLubyte mask[] )
{
   OSMesaContext osmesa = (OSMesaContext) ctx->DriverCtx;
   GLubyte *ptr1 = ((GLubyte *) osmesa->rowaddr[y] + (x));
   GLuint i;
   for (i=0;i<n;i++,ptr1++) {
      if (mask[i]) {
         *ptr1 = (GLubyte) index[i];
      }
   }
}



static void write_monoindex_span( GLcontext *ctx,
                                  GLuint n, GLint x, GLint y,
      const GLubyte mask[] )
{
   OSMesaContext osmesa = (OSMesaContext) ctx->DriverCtx;
   GLubyte *ptr1 = ((GLubyte *) osmesa->rowaddr[y] + (x));
   GLuint i;
   for (i=0;i<n;i++,ptr1++) {
      if (mask[i]) {
         *ptr1 = (GLubyte) osmesa->pixel;
      }
   }
}



static void write_index_pixels( GLcontext *ctx,
                                GLuint n, const GLint x[], const GLint y[],
           const GLuint index[], const GLubyte mask[] )
{
   OSMesaContext osmesa = (OSMesaContext) ctx->DriverCtx;
   GLuint i;
   for (i=0;i<n;i++) {
      if (mask[i]) {
         GLubyte *ptr1 = ((GLubyte *) osmesa->rowaddr[y[i]] + (x[i]));
         *ptr1 = (GLubyte) index[i];
      }
   }
}



static void write_monoindex_pixels( GLcontext *ctx,
                                    GLuint n, const GLint x[], const GLint y[],
        const GLubyte mask[] )
{
   OSMesaContext osmesa = (OSMesaContext) ctx->DriverCtx;
   GLuint i;
   for (i=0;i<n;i++) {
      if (mask[i]) {
         GLubyte *ptr1 = ((GLubyte *) osmesa->rowaddr[y[i]] + (x[i]));
         *ptr1 = (GLubyte) osmesa->pixel;
      }
   }
}



static void read_index_span( GLcontext *ctx,
                             GLuint n, GLint x, GLint y, GLuint index[] )
{
   OSMesaContext osmesa = (OSMesaContext) ctx->DriverCtx;
   GLuint i;
   GLubyte *ptr1 = ((GLubyte *) osmesa->rowaddr[y] + (x));
   for (i=0;i<n;i++,ptr1++) {
      index[i] = (GLuint) *ptr1;
   }
}


static void read_color_span( GLcontext *ctx,
                             GLuint n, GLint x, GLint y,
                             GLubyte red[], GLubyte green[],
        GLubyte blue[], GLubyte alpha[] )
{
   OSMesaContext osmesa = (OSMesaContext) ctx->DriverCtx;
   GLuint i;
   GLuint *ptr4 = ((GLuint *) osmesa->rowaddr[y] + (x));
   for (i=0;i<n;i++) {
      GLuint pixel = *ptr4++;
      red[i] = (((pixel) >> osmesa->rshift) & 0xff);
      green[i] = (((pixel) >> osmesa->gshift) & 0xff);
      blue[i] = (((pixel) >> osmesa->bshift) & 0xff);
      alpha[i] = (((pixel) >> osmesa->ashift) & 0xff);
   }
}


static void read_index_pixels( GLcontext *ctx,
                               GLuint n, const GLint x[], const GLint y[],
          GLuint index[], const GLubyte mask[] )
{
   OSMesaContext osmesa = (OSMesaContext) ctx->DriverCtx;
   GLuint i;
   for (i=0;i<n;i++) {
      if (mask[i] ) {
         GLubyte *ptr1 = ((GLubyte *) osmesa->rowaddr[y[i]] + (x[i]));
         index[i] = (GLuint) *ptr1;
      }
   }
}


static void read_color_pixels( GLcontext *ctx,
                               GLuint n, const GLint x[], const GLint y[],
          GLubyte red[], GLubyte green[],
          GLubyte blue[], GLubyte alpha[],
                               const GLubyte mask[] )
{
   OSMesaContext osmesa = (OSMesaContext) ctx->DriverCtx;
   GLuint i;
   for (i=0;i<n;i++) {
      if (mask[i]) {
         GLuint *ptr4 = ((GLuint *) osmesa->rowaddr[y[i]] + (x[i]));
         GLuint pixel = *ptr4;
         red[i] = (((pixel) >> osmesa->rshift) & 0xff);
         green[i] = (((pixel) >> osmesa->gshift) & 0xff);
         blue[i] = (((pixel) >> osmesa->bshift) & 0xff);
         alpha[i] = (((pixel) >> osmesa->ashift) & 0xff);
      }
   }
}





static void write_color_span3( GLcontext *ctx,
                              GLuint n, GLint x, GLint y,
                              const GLubyte red[], const GLubyte green[],
         const GLubyte blue[], const GLubyte alpha[],
         const GLubyte mask[] )
{
   OSMesaContext osmesa = (OSMesaContext) ctx->DriverCtx;
   GLubyte *ptr3 = ((GLubyte *) osmesa->rowaddr[y] + ((x)*3));
   GLuint i;
   GLint rind = osmesa->rind;
   GLint gind = osmesa->gind;
   GLint bind = osmesa->bind;
   if (mask) {
      for (i=0;i<n;i++,ptr3+=3) {
         if (mask[i]) {
            ptr3[rind] = red[i];
            ptr3[gind] = green[i];
            ptr3[bind] = blue[i];
         }
      }
   }
   else {
      for (i=0;i<n;i++,ptr3+=3) {
         ptr3[rind] = red[i];
         ptr3[gind] = green[i];
         ptr3[bind] = blue[i];
      }
   }
}

static void write_monocolor_span3( GLcontext *ctx,
                                  GLuint n, GLint x, GLint y,
      const GLubyte mask[] )
{
   OSMesaContext osmesa = (OSMesaContext) ctx->DriverCtx;

   GLubyte rval = (((osmesa->pixel) >> osmesa->rshift) & 0xff);
   GLubyte gval = (((osmesa->pixel) >> osmesa->gshift) & 0xff);
   GLubyte bval = (((osmesa->pixel) >> osmesa->bshift) & 0xff);
   GLint rind = osmesa->rind;
   GLint gind = osmesa->gind;
   GLint bind = osmesa->bind;


   GLubyte *ptr3 = ((GLubyte *) osmesa->rowaddr[y] + ((x)*3));
   GLuint i;
   for (i=0;i<n;i++,ptr3+=3) {
      if (mask[i]) {
         ptr3[rind] = rval;
         ptr3[gind] = gval;
         ptr3[bind] = bval;
      }
   }
}

static void write_color_pixels3( GLcontext *ctx,
                                GLuint n, const GLint x[], const GLint y[],
                                const GLubyte red[], const GLubyte green[],
           const GLubyte blue[], const GLubyte alpha[],
           const GLubyte mask[] )
{
   OSMesaContext osmesa = (OSMesaContext) ctx->DriverCtx;
   GLuint i;
   GLint rind = osmesa->rind;
   GLint gind = osmesa->gind;
   GLint bind = osmesa->bind;

   for (i=0;i<n;i++) {
      if (mask[i]) {
         GLubyte *ptr3 = ((GLubyte *) osmesa->rowaddr[y[i]] + ((x[i])*3));
         ptr3[rind] = red[i];
         ptr3[gind] = green[i];
         ptr3[bind] = blue[i];
      }
   }
}

static void write_monocolor_pixels3( GLcontext *ctx,
                                    GLuint n, const GLint x[], const GLint y[],
        const GLubyte mask[] )
{
   OSMesaContext osmesa = (OSMesaContext) ctx->DriverCtx;
   GLuint i;
   GLint rind = osmesa->rind;
   GLint gind = osmesa->gind;
   GLint bind = osmesa->bind;
   GLubyte rval = (((osmesa->pixel) >> osmesa->rshift) & 0xff);
   GLubyte gval = (((osmesa->pixel) >> osmesa->gshift) & 0xff);
   GLubyte bval = (((osmesa->pixel) >> osmesa->bshift) & 0xff);
   for (i=0;i<n;i++) {
      if (mask[i]) {
         GLubyte *ptr3 = ((GLubyte *) osmesa->rowaddr[y[i]] + ((x[i])*3));
         ptr3[rind] = rval;
         ptr3[gind] = gval;
         ptr3[bind] = bval;
      }
   }
}

static void read_color_span3( GLcontext *ctx,
                             GLuint n, GLint x, GLint y,
                             GLubyte red[], GLubyte green[],
        GLubyte blue[], GLubyte alpha[] )
{
   OSMesaContext osmesa = (OSMesaContext) ctx->DriverCtx;
   GLuint i;
   GLint rind = osmesa->rind;
   GLint gind = osmesa->gind;
   GLint bind = osmesa->bind;
   GLubyte *ptr3 = ((GLubyte *) osmesa->rowaddr[y] + ((x)*3));
   for (i=0;i<n;i++,ptr3+=3) {
      red[i] = ptr3[rind];
      green[i] = ptr3[gind];
      blue[i] = ptr3[bind];
      alpha[i] = 0;
   }
}

static void read_color_pixels3( GLcontext *ctx,
                               GLuint n, const GLint x[], const GLint y[],
          GLubyte red[], GLubyte green[],
          GLubyte blue[], GLubyte alpha[],
                               const GLubyte mask[] )
{
   OSMesaContext osmesa = (OSMesaContext) ctx->DriverCtx;
   GLuint i;
   GLint rind = osmesa->rind;
   GLint gind = osmesa->gind;
   GLint bind = osmesa->bind;
   for (i=0;i<n;i++) {
      if (mask[i]) {
         GLubyte *ptr3 = ((GLubyte *) osmesa->rowaddr[y[i]] + ((x[i])*3));
         red[i] = ptr3[rind];
         green[i] = ptr3[gind];
         blue[i] = ptr3[bind];
         alpha[i] = 0;
      }
   }
}
# 1093 "osmesa.c"
static void flat_color_line( GLcontext *ctx,
                             GLuint vert0, GLuint vert1, GLuint pvert )
{
   OSMesaContext osmesa = (OSMesaContext) ctx->DriverCtx;
   GLubyte *color = ctx->VB->Color[pvert];
   unsigned long pixel = ( ((color[0]) << osmesa->rshift) | ((color[1]) << osmesa->gshift) | ((color[2]) << osmesa->bshift) | ((color[3]) << osmesa->ashift) );





# 1 "linetemp.h" 1
# 89 "linetemp.h"
{
   struct vertex_buffer *VB = ctx->VB;




   GLint x0 = (GLint) VB->Win[vert0][0], x1 = (GLint) VB->Win[vert1][0];
   GLint y0 = (GLint) VB->Win[vert0][1], y1 = (GLint) VB->Win[vert1][1];
   GLint dx, dy;

   GLint xstep, ystep;
# 155 "linetemp.h"
   {
      GLint w = ctx->Buffer->Width;
      GLint h = ctx->Buffer->Height;
      if ((x0==w) | (x1==w)) {
         if ((x0==w) & (x1==w))
           return;
         x0 -= x0==w;
         x1 -= x1==w;
      }
      if ((y0==h) | (y1==h)) {
         if ((y0==h) & (y1==h))
           return;
         y0 -= y0==h;
         y1 -= y1==h;
      }
   }

   dx = x1 - x0;
   dy = y1 - y0;
   if (dx==0 && dy==0) {
      return;
   }
# 199 "linetemp.h"
   if (dx<0) {
      dx = -dx;

      xstep = -1;







   }
   else {

      xstep = 1;







   }

   if (dy<0) {
      dy = -dy;

      ystep = -1;







   }
   else {

      ystep = 1;







   }





   if (dx>dy) {



      GLint i;
      GLint errorInc = dy+dy;
      GLint error = errorInc-dx;
      GLint errorDec = error-dx;
# 289 "linetemp.h"
      for (i=0;i<dx;i++) {
# 316 "linetemp.h"
            { GLuint *ptr4 = ((GLuint *) osmesa->rowaddr[y0] + (x0)); *ptr4 = pixel; };







         x0 += xstep;
# 357 "linetemp.h"
         if (error<0) {
            error += errorInc;
         }
         else {
            error += errorDec;

            y0 += ystep;







         }
      }
   }
   else {



      GLint i;
      GLint errorInc = dx+dx;
      GLint error = errorInc-dy;
      GLint errorDec = error-dy;
# 412 "linetemp.h"
      for (i=0;i<dy;i++) {
# 439 "linetemp.h"
            { GLuint *ptr4 = ((GLuint *) osmesa->rowaddr[y0] + (x0)); *ptr4 = pixel; };







         y0 += ystep;
# 480 "linetemp.h"
         if (error<0) {
            error += errorInc;
         }
         else {
            error += errorDec;

            x0 += xstep;







         }
      }
   }

}
# 1105 "osmesa.c" 2
}





static void flat_color_z_line( GLcontext *ctx,
                               GLuint vert0, GLuint vert1, GLuint pvert )
{
   OSMesaContext osmesa = (OSMesaContext) ctx->DriverCtx;
   GLubyte *color = ctx->VB->Color[pvert];
   unsigned long pixel = ( ((color[0]) << osmesa->rshift) | ((color[1]) << osmesa->gshift) | ((color[2]) << osmesa->bshift) | ((color[3]) << osmesa->ashift) );
# 1128 "osmesa.c"
# 1 "linetemp.h" 1
# 89 "linetemp.h"
{
   struct vertex_buffer *VB = ctx->VB;




   GLint x0 = (GLint) VB->Win[vert0][0], x1 = (GLint) VB->Win[vert1][0];
   GLint y0 = (GLint) VB->Win[vert0][1], y1 = (GLint) VB->Win[vert1][1];
   GLint dx, dy;

   GLint xstep, ystep;


   GLint z0, z1, dz, zPtrXstep, zPtrYstep;
   GLdepth *zPtr;
# 155 "linetemp.h"
   {
      GLint w = ctx->Buffer->Width;
      GLint h = ctx->Buffer->Height;
      if ((x0==w) | (x1==w)) {
         if ((x0==w) & (x1==w))
           return;
         x0 -= x0==w;
         x1 -= x1==w;
      }
      if ((y0==h) | (y1==h)) {
         if ((y0==h) & (y1==h))
           return;
         y0 -= y0==h;
         y1 -= y1==h;
      }
   }

   dx = x1 - x0;
   dy = y1 - y0;
   if (dx==0 && dy==0) {
      return;
   }
# 186 "linetemp.h"
   zPtr = ((ctx)->Buffer->Depth + (ctx)->Buffer->Width * (y0) + (x0));

      z0 = ((GLfixed) ((VB->Win[vert0][2]) * 2048.0f));
      z1 = ((GLfixed) ((VB->Win[vert1][2]) * 2048.0f));
# 199 "linetemp.h"
   if (dx<0) {
      dx = -dx;

      xstep = -1;


      zPtrXstep = -sizeof(GLdepth);




   }
   else {

      xstep = 1;


      zPtrXstep = sizeof(GLdepth);




   }

   if (dy<0) {
      dy = -dy;

      ystep = -1;


      zPtrYstep = -ctx->Buffer->Width * sizeof(GLdepth);




   }
   else {

      ystep = 1;


      zPtrYstep = ctx->Buffer->Width * sizeof(GLdepth);




   }





   if (dx>dy) {



      GLint i;
      GLint errorInc = dy+dy;
      GLint error = errorInc-dx;
      GLint errorDec = error-dx;

      dz = (z1-z0) / dx;
# 289 "linetemp.h"
      for (i=0;i<dx;i++) {







            GLdepth Z = ((z0) >> 11);
# 316 "linetemp.h"
            if (Z < *zPtr) { GLuint *ptr4 = ((GLuint *) osmesa->rowaddr[y0] + (x0)); *ptr4 = pixel; *zPtr = Z; };







         x0 += xstep;


         zPtr = (GLdepth *) ((GLubyte*) zPtr + zPtrXstep);
         z0 += dz;
# 357 "linetemp.h"
         if (error<0) {
            error += errorInc;
         }
         else {
            error += errorDec;

            y0 += ystep;


            zPtr = (GLdepth *) ((GLubyte*) zPtr + zPtrYstep);




         }
      }
   }
   else {



      GLint i;
      GLint errorInc = dx+dx;
      GLint error = errorInc-dy;
      GLint errorDec = error-dy;

      dz = (z1-z0) / dy;
# 412 "linetemp.h"
      for (i=0;i<dy;i++) {







            GLdepth Z = ((z0) >> 11);
# 439 "linetemp.h"
            if (Z < *zPtr) { GLuint *ptr4 = ((GLuint *) osmesa->rowaddr[y0] + (x0)); *ptr4 = pixel; *zPtr = Z; };







         y0 += ystep;


         zPtr = (GLdepth *) ((GLubyte*) zPtr + zPtrYstep);
         z0 += dz;
# 480 "linetemp.h"
         if (error<0) {
            error += errorInc;
         }
         else {
            error += errorDec;

            x0 += xstep;


            zPtr = (GLdepth *) ((GLubyte*) zPtr + zPtrXstep);




         }
      }
   }

}
# 1129 "osmesa.c" 2
}





static void flat_blend_color_line( GLcontext *ctx,
                                 GLuint vert0, GLuint vert1, GLuint pvert )
{
   OSMesaContext osmesa = (OSMesaContext) ctx->DriverCtx;
   struct vertex_buffer *VB = ctx->VB;
   GLint rshift = osmesa->rshift;
   GLint gshift = osmesa->gshift;
   GLint bshift = osmesa->bshift;
   GLint avalue = VB->Color[pvert][3];
   GLint msavalue = 255 - avalue;
   GLint rvalue = VB->Color[pvert][0]*avalue;
   GLint gvalue = VB->Color[pvert][1]*avalue;
   GLint bvalue = VB->Color[pvert][2]*avalue;
# 1160 "osmesa.c"
# 1 "linetemp.h" 1
# 89 "linetemp.h"
{
   struct vertex_buffer *VB = ctx->VB;




   GLint x0 = (GLint) VB->Win[vert0][0], x1 = (GLint) VB->Win[vert1][0];
   GLint y0 = (GLint) VB->Win[vert0][1], y1 = (GLint) VB->Win[vert1][1];
   GLint dx, dy;

   GLint xstep, ystep;
# 155 "linetemp.h"
   {
      GLint w = ctx->Buffer->Width;
      GLint h = ctx->Buffer->Height;
      if ((x0==w) | (x1==w)) {
         if ((x0==w) & (x1==w))
           return;
         x0 -= x0==w;
         x1 -= x1==w;
      }
      if ((y0==h) | (y1==h)) {
         if ((y0==h) & (y1==h))
           return;
         y0 -= y0==h;
         y1 -= y1==h;
      }
   }

   dx = x1 - x0;
   dy = y1 - y0;
   if (dx==0 && dy==0) {
      return;
   }
# 199 "linetemp.h"
   if (dx<0) {
      dx = -dx;

      xstep = -1;







   }
   else {

      xstep = 1;







   }

   if (dy<0) {
      dy = -dy;

      ystep = -1;







   }
   else {

      ystep = 1;







   }





   if (dx>dy) {



      GLint i;
      GLint errorInc = dy+dy;
      GLint error = errorInc-dx;
      GLint errorDec = error-dx;
# 289 "linetemp.h"
      for (i=0;i<dx;i++) {
# 316 "linetemp.h"
            { GLuint *ptr4 = ((GLuint *) osmesa->rowaddr[y0] + (x0)); GLuint pixel = 0; pixel |=((((((*ptr4) >> rshift) & 0xff)*msavalue+rvalue)>>8) << rshift); pixel |=((((((*ptr4) >> gshift) & 0xff)*msavalue+gvalue)>>8) << gshift); pixel |=((((((*ptr4) >> bshift) & 0xff)*msavalue+bvalue)>>8) << bshift); *ptr4 = pixel; };







         x0 += xstep;
# 357 "linetemp.h"
         if (error<0) {
            error += errorInc;
         }
         else {
            error += errorDec;

            y0 += ystep;







         }
      }
   }
   else {



      GLint i;
      GLint errorInc = dx+dx;
      GLint error = errorInc-dy;
      GLint errorDec = error-dy;
# 412 "linetemp.h"
      for (i=0;i<dy;i++) {
# 439 "linetemp.h"
            { GLuint *ptr4 = ((GLuint *) osmesa->rowaddr[y0] + (x0)); GLuint pixel = 0; pixel |=((((((*ptr4) >> rshift) & 0xff)*msavalue+rvalue)>>8) << rshift); pixel |=((((((*ptr4) >> gshift) & 0xff)*msavalue+gvalue)>>8) << gshift); pixel |=((((((*ptr4) >> bshift) & 0xff)*msavalue+bvalue)>>8) << bshift); *ptr4 = pixel; };







         y0 += ystep;
# 480 "linetemp.h"
         if (error<0) {
            error += errorInc;
         }
         else {
            error += errorDec;

            x0 += xstep;







         }
      }
   }

}
# 1161 "osmesa.c" 2
}




static void flat_blend_color_z_line( GLcontext *ctx,
                                   GLuint vert0, GLuint vert1, GLuint pvert )
{
   OSMesaContext osmesa = (OSMesaContext) ctx->DriverCtx;
   struct vertex_buffer *VB = ctx->VB;
   GLint rshift = osmesa->rshift;
   GLint gshift = osmesa->gshift;
   GLint bshift = osmesa->bshift;
   GLint avalue = VB->Color[pvert][3];
   GLint msavalue = 256 - avalue;
   GLint rvalue = VB->Color[pvert][0]*avalue;
   GLint gvalue = VB->Color[pvert][1]*avalue;
   GLint bvalue = VB->Color[pvert][2]*avalue;
# 1194 "osmesa.c"
# 1 "linetemp.h" 1
# 89 "linetemp.h"
{
   struct vertex_buffer *VB = ctx->VB;




   GLint x0 = (GLint) VB->Win[vert0][0], x1 = (GLint) VB->Win[vert1][0];
   GLint y0 = (GLint) VB->Win[vert0][1], y1 = (GLint) VB->Win[vert1][1];
   GLint dx, dy;

   GLint xstep, ystep;


   GLint z0, z1, dz, zPtrXstep, zPtrYstep;
   GLdepth *zPtr;
# 155 "linetemp.h"
   {
      GLint w = ctx->Buffer->Width;
      GLint h = ctx->Buffer->Height;
      if ((x0==w) | (x1==w)) {
         if ((x0==w) & (x1==w))
           return;
         x0 -= x0==w;
         x1 -= x1==w;
      }
      if ((y0==h) | (y1==h)) {
         if ((y0==h) & (y1==h))
           return;
         y0 -= y0==h;
         y1 -= y1==h;
      }
   }

   dx = x1 - x0;
   dy = y1 - y0;
   if (dx==0 && dy==0) {
      return;
   }
# 186 "linetemp.h"
   zPtr = ((ctx)->Buffer->Depth + (ctx)->Buffer->Width * (y0) + (x0));

      z0 = ((GLfixed) ((VB->Win[vert0][2]) * 2048.0f));
      z1 = ((GLfixed) ((VB->Win[vert1][2]) * 2048.0f));
# 199 "linetemp.h"
   if (dx<0) {
      dx = -dx;

      xstep = -1;


      zPtrXstep = -sizeof(GLdepth);




   }
   else {

      xstep = 1;


      zPtrXstep = sizeof(GLdepth);




   }

   if (dy<0) {
      dy = -dy;

      ystep = -1;


      zPtrYstep = -ctx->Buffer->Width * sizeof(GLdepth);




   }
   else {

      ystep = 1;


      zPtrYstep = ctx->Buffer->Width * sizeof(GLdepth);




   }





   if (dx>dy) {



      GLint i;
      GLint errorInc = dy+dy;
      GLint error = errorInc-dx;
      GLint errorDec = error-dx;

      dz = (z1-z0) / dx;
# 289 "linetemp.h"
      for (i=0;i<dx;i++) {







            GLdepth Z = ((z0) >> 11);
# 316 "linetemp.h"
            if (Z < *zPtr) { { GLuint *ptr4 = ((GLuint *) osmesa->rowaddr[y0] + (x0)); GLuint pixel = 0; pixel |=((((((*ptr4) >> rshift) & 0xff)*msavalue+rvalue)>>8) << rshift); pixel |=((((((*ptr4) >> gshift) & 0xff)*msavalue+gvalue)>>8) << gshift); pixel |=((((((*ptr4) >> bshift) & 0xff)*msavalue+bvalue)>>8) << bshift); *ptr4 = pixel; } };







         x0 += xstep;


         zPtr = (GLdepth *) ((GLubyte*) zPtr + zPtrXstep);
         z0 += dz;
# 357 "linetemp.h"
         if (error<0) {
            error += errorInc;
         }
         else {
            error += errorDec;

            y0 += ystep;


            zPtr = (GLdepth *) ((GLubyte*) zPtr + zPtrYstep);




         }
      }
   }
   else {



      GLint i;
      GLint errorInc = dx+dx;
      GLint error = errorInc-dy;
      GLint errorDec = error-dy;

      dz = (z1-z0) / dy;
# 412 "linetemp.h"
      for (i=0;i<dy;i++) {







            GLdepth Z = ((z0) >> 11);
# 439 "linetemp.h"
            if (Z < *zPtr) { { GLuint *ptr4 = ((GLuint *) osmesa->rowaddr[y0] + (x0)); GLuint pixel = 0; pixel |=((((((*ptr4) >> rshift) & 0xff)*msavalue+rvalue)>>8) << rshift); pixel |=((((((*ptr4) >> gshift) & 0xff)*msavalue+gvalue)>>8) << gshift); pixel |=((((((*ptr4) >> bshift) & 0xff)*msavalue+bvalue)>>8) << bshift); *ptr4 = pixel; } };







         y0 += ystep;


         zPtr = (GLdepth *) ((GLubyte*) zPtr + zPtrYstep);
         z0 += dz;
# 480 "linetemp.h"
         if (error<0) {
            error += errorInc;
         }
         else {
            error += errorDec;

            x0 += xstep;


            zPtr = (GLdepth *) ((GLubyte*) zPtr + zPtrXstep);




         }
      }
   }

}
# 1195 "osmesa.c" 2
}




static void flat_blend_color_z_line_write( GLcontext *ctx,
                                   GLuint vert0, GLuint vert1, GLuint pvert )
{
   OSMesaContext osmesa = (OSMesaContext) ctx->DriverCtx;
   struct vertex_buffer *VB = ctx->VB;
   GLint rshift = osmesa->rshift;
   GLint gshift = osmesa->gshift;
   GLint bshift = osmesa->bshift;
   GLint avalue = VB->Color[pvert][3];
   GLint msavalue = 256 - avalue;
   GLint rvalue = VB->Color[pvert][0]*avalue;
   GLint gvalue = VB->Color[pvert][1]*avalue;
   GLint bvalue = VB->Color[pvert][2]*avalue;
# 1229 "osmesa.c"
# 1 "linetemp.h" 1
# 89 "linetemp.h"
{
   struct vertex_buffer *VB = ctx->VB;




   GLint x0 = (GLint) VB->Win[vert0][0], x1 = (GLint) VB->Win[vert1][0];
   GLint y0 = (GLint) VB->Win[vert0][1], y1 = (GLint) VB->Win[vert1][1];
   GLint dx, dy;

   GLint xstep, ystep;


   GLint z0, z1, dz, zPtrXstep, zPtrYstep;
   GLdepth *zPtr;
# 155 "linetemp.h"
   {
      GLint w = ctx->Buffer->Width;
      GLint h = ctx->Buffer->Height;
      if ((x0==w) | (x1==w)) {
         if ((x0==w) & (x1==w))
           return;
         x0 -= x0==w;
         x1 -= x1==w;
      }
      if ((y0==h) | (y1==h)) {
         if ((y0==h) & (y1==h))
           return;
         y0 -= y0==h;
         y1 -= y1==h;
      }
   }

   dx = x1 - x0;
   dy = y1 - y0;
   if (dx==0 && dy==0) {
      return;
   }
# 186 "linetemp.h"
   zPtr = ((ctx)->Buffer->Depth + (ctx)->Buffer->Width * (y0) + (x0));

      z0 = ((GLfixed) ((VB->Win[vert0][2]) * 2048.0f));
      z1 = ((GLfixed) ((VB->Win[vert1][2]) * 2048.0f));
# 199 "linetemp.h"
   if (dx<0) {
      dx = -dx;

      xstep = -1;


      zPtrXstep = -sizeof(GLdepth);




   }
   else {

      xstep = 1;


      zPtrXstep = sizeof(GLdepth);




   }

   if (dy<0) {
      dy = -dy;

      ystep = -1;


      zPtrYstep = -ctx->Buffer->Width * sizeof(GLdepth);




   }
   else {

      ystep = 1;


      zPtrYstep = ctx->Buffer->Width * sizeof(GLdepth);




   }





   if (dx>dy) {



      GLint i;
      GLint errorInc = dy+dy;
      GLint error = errorInc-dx;
      GLint errorDec = error-dx;

      dz = (z1-z0) / dx;
# 289 "linetemp.h"
      for (i=0;i<dx;i++) {







            GLdepth Z = ((z0) >> 11);
# 316 "linetemp.h"
            if (Z < *zPtr) { { GLuint *ptr4 = ((GLuint *) osmesa->rowaddr[y0] + (x0)); GLuint pixel = 0; pixel |=((((((*ptr4) >> rshift) & 0xff)*msavalue+rvalue)>>8) << rshift); pixel |=((((((*ptr4) >> gshift) & 0xff)*msavalue+gvalue)>>8) << gshift); pixel |=((((((*ptr4) >> bshift) & 0xff)*msavalue+bvalue)>>8) << bshift); *ptr4 = pixel; } *zPtr = Z; };







         x0 += xstep;


         zPtr = (GLdepth *) ((GLubyte*) zPtr + zPtrXstep);
         z0 += dz;
# 357 "linetemp.h"
         if (error<0) {
            error += errorInc;
         }
         else {
            error += errorDec;

            y0 += ystep;


            zPtr = (GLdepth *) ((GLubyte*) zPtr + zPtrYstep);




         }
      }
   }
   else {



      GLint i;
      GLint errorInc = dx+dx;
      GLint error = errorInc-dy;
      GLint errorDec = error-dy;

      dz = (z1-z0) / dy;
# 412 "linetemp.h"
      for (i=0;i<dy;i++) {







            GLdepth Z = ((z0) >> 11);
# 439 "linetemp.h"
            if (Z < *zPtr) { { GLuint *ptr4 = ((GLuint *) osmesa->rowaddr[y0] + (x0)); GLuint pixel = 0; pixel |=((((((*ptr4) >> rshift) & 0xff)*msavalue+rvalue)>>8) << rshift); pixel |=((((((*ptr4) >> gshift) & 0xff)*msavalue+gvalue)>>8) << gshift); pixel |=((((((*ptr4) >> bshift) & 0xff)*msavalue+bvalue)>>8) << bshift); *ptr4 = pixel; } *zPtr = Z; };







         y0 += ystep;


         zPtr = (GLdepth *) ((GLubyte*) zPtr + zPtrYstep);
         z0 += dz;
# 480 "linetemp.h"
         if (error<0) {
            error += errorInc;
         }
         else {
            error += errorDec;

            x0 += xstep;


            zPtr = (GLdepth *) ((GLubyte*) zPtr + zPtrXstep);




         }
      }
   }

}
# 1230 "osmesa.c" 2
}






static line_func choose_line_function( GLcontext *ctx )
{
   OSMesaContext osmesa = (OSMesaContext) ctx->DriverCtx;

   if (ctx->Line.SmoothFlag) return ((void *)0);
   if (ctx->Texture.Enabled) return ((void *)0);
   if (ctx->Light.ShadeModel!=0x1D00) return ((void *)0);

   if (ctx->Line.Width==1.0F
       && ctx->Line.StippleFlag==0x0) {

       if (ctx->RasterMask==0x004
           && ctx->Depth.Func==0x0201
           && ctx->Depth.Mask==0x1) {
           switch(osmesa->format) {
         case OSMESA_RGBA:
         case OSMESA_BGRA:
         case OSMESA_ARGB:
          return flat_color_z_line;
          break;
         default:
          return ((void *)0);
          break;
           }
       }

       if (ctx->RasterMask==0) {
           switch(osmesa->format) {
         case OSMESA_RGBA:
         case OSMESA_BGRA:
         case OSMESA_ARGB:
          return flat_color_line;
          break;
         default:
          return ((void *)0);
          break;
           }
       }

       if (ctx->RasterMask==(0x004|0x002)
           && ctx->Depth.Func==0x0201
           && ctx->Depth.Mask==0x1
           && ctx->Color.BlendSrc==0x0302
           && ctx->Color.BlendDst==0x0303
           && ctx->Color.BlendEquation==0x8006) {
           switch(osmesa->format) {
         case OSMESA_RGBA:
         case OSMESA_BGRA:
         case OSMESA_ARGB:
          return flat_blend_color_z_line_write;
          break;
         default:
          return ((void *)0);
          break;
           }
       }

       if (ctx->RasterMask==(0x004|0x002)
           && ctx->Depth.Func==0x0201
           && ctx->Depth.Mask==0x0
           && ctx->Color.BlendSrc==0x0302
           && ctx->Color.BlendDst==0x0303
           && ctx->Color.BlendEquation==0x8006) {
           switch(osmesa->format) {
         case OSMESA_RGBA:
         case OSMESA_BGRA:
         case OSMESA_ARGB:
          return flat_blend_color_z_line;
          break;
         default:
          return ((void *)0);
          break;
           }
       }

       if (ctx->RasterMask==0x002
           && ctx->Color.BlendSrc==0x0302
           && ctx->Color.BlendDst==0x0303
           && ctx->Color.BlendEquation==0x8006) {
           switch(osmesa->format) {
         case OSMESA_RGBA:
         case OSMESA_BGRA:
         case OSMESA_ARGB:
          return flat_blend_color_line;
          break;
         default:
          return ((void *)0);
          break;
           }
       }

   }
   return ((void *)0);
}
# 1341 "osmesa.c"
static void smooth_color_z_triangle( GLcontext *ctx, GLuint v0, GLuint v1,
                                     GLuint v2, GLuint pv )
{
   OSMesaContext osmesa = (OSMesaContext) ctx->DriverCtx;
   GLint rshift = osmesa->rshift;
   GLint gshift = osmesa->gshift;
   GLint bshift = osmesa->bshift;
   GLint ashift = osmesa->ashift;
# 1367 "osmesa.c"
# 1 "tritemp.h" 1
# 126 "tritemp.h"
{
   typedef struct {
        GLint v0, v1;
 GLfloat dx;
 GLfloat dy;
 GLfixed fdxdy;
 GLfixed fsx;
 GLfixed fsy;
 GLfloat adjy;
 GLint lines;
 GLfixed fx0;
   } EdgeT;

   struct vertex_buffer *VB = ctx->VB;
   EdgeT eMaj, eTop, eBot;
   GLfloat oneOverArea;
   int vMin, vMid, vMax;


   {
      GLfloat y0 = VB->Win[v0][1];
      GLfloat y1 = VB->Win[v1][1];
      GLfloat y2 = VB->Win[v2][1];

      if (y0<=y1) {
  if (y1<=y2) {
     vMin = v0; vMid = v1; vMax = v2;
  }
  else if (y2<=y0) {
     vMin = v2; vMid = v0; vMax = v1;
  }
  else {
     vMin = v0; vMid = v2; vMax = v1;
  }
      }
      else {
  if (y0<=y2) {
     vMin = v1; vMid = v0; vMax = v2;
  }
  else if (y2<=y1) {
     vMin = v2; vMid = v1; vMax = v0;
  }
  else {
     vMin = v1; vMid = v2; vMax = v0;
  }
      }
   }


   eMaj.v0 = vMin; eMaj.v1 = vMax;
   eTop.v0 = vMid; eTop.v1 = vMax;
   eBot.v0 = vMin; eBot.v1 = vMid;


   eMaj.dx = VB->Win[vMax][0] - VB->Win[vMin][0];
   eMaj.dy = VB->Win[vMax][1] - VB->Win[vMin][1];
   eTop.dx = VB->Win[vMax][0] - VB->Win[vMid][0];
   eTop.dy = VB->Win[vMax][1] - VB->Win[vMid][1];
   eBot.dx = VB->Win[vMid][0] - VB->Win[vMin][0];
   eBot.dy = VB->Win[vMid][1] - VB->Win[vMin][1];


   {
      GLfloat area = eMaj.dx * eBot.dy - eBot.dx * eMaj.dy;
      if (area>-0.05f && area<0.05f) {
         return;
      }
      oneOverArea = 1.0F / area;
   }


   {

      GLfixed vMin_fx = ((GLfixed) ((VB->Win[vMin][0] + 0.5F) * 2048.0f));
      GLfixed vMin_fy = ((GLfixed) ((VB->Win[vMin][1] - 0.5F) * 2048.0f));
      GLfixed vMid_fx = ((GLfixed) ((VB->Win[vMid][0] + 0.5F) * 2048.0f));
      GLfixed vMid_fy = ((GLfixed) ((VB->Win[vMid][1] - 0.5F) * 2048.0f));
      GLfixed vMax_fy = ((GLfixed) ((VB->Win[vMax][1] - 0.5F) * 2048.0f));

      eMaj.fsy = (((vMin_fy) + 0x00000800 - 1) & (~0x000007FF));
      eMaj.lines = ((vMax_fy + 0x00000800 - 1 - eMaj.fsy) >> 11);
      if (eMaj.lines > 0) {
         GLfloat dxdy = eMaj.dx / eMaj.dy;
         eMaj.fdxdy = ((GLfixed) ((dxdy) * 2048.0f));
         eMaj.adjy = (GLfloat) (eMaj.fsy - vMin_fy);
         eMaj.fx0 = vMin_fx;
         eMaj.fsx = eMaj.fx0 + (GLfixed) (eMaj.adjy * dxdy);
      }
      else {
         return;
      }

      eTop.fsy = (((vMid_fy) + 0x00000800 - 1) & (~0x000007FF));
      eTop.lines = ((vMax_fy + 0x00000800 - 1 - eTop.fsy) >> 11);
      if (eTop.lines > 0) {
         GLfloat dxdy = eTop.dx / eTop.dy;
         eTop.fdxdy = ((GLfixed) ((dxdy) * 2048.0f));
         eTop.adjy = (GLfloat) (eTop.fsy - vMid_fy);
         eTop.fx0 = vMid_fx;
         eTop.fsx = eTop.fx0 + (GLfixed) (eTop.adjy * dxdy);
      }

      eBot.fsy = (((vMin_fy) + 0x00000800 - 1) & (~0x000007FF));
      eBot.lines = ((vMid_fy + 0x00000800 - 1 - eBot.fsy) >> 11);
      if (eBot.lines > 0) {
         GLfloat dxdy = eBot.dx / eBot.dy;
         eBot.fdxdy = ((GLfixed) ((dxdy) * 2048.0f));
         eBot.adjy = (GLfloat) (eBot.fsy - vMin_fy);
         eBot.fx0 = vMin_fx;
         eBot.fsx = eBot.fx0 + (GLfixed) (eBot.adjy * dxdy);
      }
   }
# 273 "tritemp.h"
   {
      GLint ltor;

      GLfloat dzdx, dzdy; GLfixed fdzdx;


      GLfloat drdx, drdy; GLfixed fdrdx;
      GLfloat dgdx, dgdy; GLfixed fdgdx;
      GLfloat dbdx, dbdy; GLfixed fdbdx;


      GLfloat dadx, dady; GLfixed fdadx;
# 310 "tritemp.h"
      ltor = (oneOverArea < 0.0F);



      {
         GLfloat eMaj_dz, eBot_dz;
         eMaj_dz = VB->Win[vMax][2] - VB->Win[vMin][2];
         eBot_dz = VB->Win[vMid][2] - VB->Win[vMin][2];
         dzdx = oneOverArea * (eMaj_dz * eBot.dy - eMaj.dy * eBot_dz);
         if (dzdx>65535.0F || dzdx<-65535.0F) {

            dzdx = 0.0;
            dzdy = 0.0;
         }
         else {
            dzdy = oneOverArea * (eMaj.dx * eBot_dz - eMaj_dz * eBot.dx);
         }

         fdzdx = ((GLfixed) ((dzdx) * 2048.0f));



      }


      {
         GLfloat eMaj_dr, eBot_dr;
         eMaj_dr = (GLint) VB->Color[vMax][0] - (GLint) VB->Color[vMin][0];
         eBot_dr = (GLint) VB->Color[vMid][0] - (GLint) VB->Color[vMin][0];
         drdx = oneOverArea * (eMaj_dr * eBot.dy - eMaj.dy * eBot_dr);
         fdrdx = ((GLfixed) ((drdx) * 2048.0f));
         drdy = oneOverArea * (eMaj.dx * eBot_dr - eMaj_dr * eBot.dx);
      }
      {
         GLfloat eMaj_dg, eBot_dg;
         eMaj_dg = (GLint) VB->Color[vMax][1] - (GLint) VB->Color[vMin][1];
  eBot_dg = (GLint) VB->Color[vMid][1] - (GLint) VB->Color[vMin][1];
         dgdx = oneOverArea * (eMaj_dg * eBot.dy - eMaj.dy * eBot_dg);
         fdgdx = ((GLfixed) ((dgdx) * 2048.0f));
         dgdy = oneOverArea * (eMaj.dx * eBot_dg - eMaj_dg * eBot.dx);
      }
      {
         GLfloat eMaj_db, eBot_db;
         eMaj_db = (GLint) VB->Color[vMax][2] - (GLint) VB->Color[vMin][2];
         eBot_db = (GLint) VB->Color[vMid][2] - (GLint) VB->Color[vMin][2];
         dbdx = oneOverArea * (eMaj_db * eBot.dy - eMaj.dy * eBot_db);
         fdbdx = ((GLfixed) ((dbdx) * 2048.0f));
  dbdy = oneOverArea * (eMaj.dx * eBot_db - eMaj_db * eBot.dx);
      }


      {
         GLfloat eMaj_da, eBot_da;
         eMaj_da = (GLint) VB->Color[vMax][3] - (GLint) VB->Color[vMin][3];
         eBot_da = (GLint) VB->Color[vMid][3] - (GLint) VB->Color[vMin][3];
         dadx = oneOverArea * (eMaj_da * eBot.dy - eMaj.dy * eBot_da);
         fdadx = ((GLfixed) ((dadx) * 2048.0f));
         dady = oneOverArea * (eMaj.dx * eBot_da - eMaj_da * eBot.dx);
      }
# 486 "tritemp.h"
      {
         int subTriangle;
         GLfixed fx, fxLeftEdge, fxRightEdge, fdxLeftEdge, fdxRightEdge;
         GLfixed fdxOuter;
         int idxOuter;
         float dxOuter;
         GLfixed fError, fdError;
         float adjx, adjy;
         GLfixed fy;
         int iy;





         GLdepth *zRow;
         int dZRowOuter, dZRowInner;
         GLfixed fz, fdzOuter, fdzInner;


         GLfixed fr, fdrOuter, fdrInner;
         GLfixed fg, fdgOuter, fdgInner;
         GLfixed fb, fdbOuter, fdbInner;


         GLfixed fa, fdaOuter, fdaInner;
# 530 "tritemp.h"
         for (subTriangle=0; subTriangle<=1; subTriangle++) {
            EdgeT *eLeft, *eRight;
            int setupLeft, setupRight;
            int lines;

            if (subTriangle==0) {

               if (ltor) {
                  eLeft = &eMaj;
                  eRight = &eBot;
                  lines = eRight->lines;
                  setupLeft = 1;
                  setupRight = 1;
               }
               else {
                  eLeft = &eBot;
                  eRight = &eMaj;
                  lines = eLeft->lines;
                  setupLeft = 1;
                  setupRight = 1;
               }
            }
            else {

               if (ltor) {
                  eLeft = &eMaj;
                  eRight = &eTop;
                  lines = eRight->lines;
                  setupLeft = 0;
                  setupRight = 1;
               }
               else {
                  eLeft = &eTop;
                  eRight = &eMaj;
                  lines = eLeft->lines;
                  setupLeft = 1;
                  setupRight = 0;
               }
               if (lines==0) return;
            }

            if (setupLeft && eLeft->lines>0) {
               GLint vLower;
               GLfixed fsx = eLeft->fsx;
               fx = (((fsx) + 0x00000800 - 1) & (~0x000007FF));
               fError = fx - fsx - 0x00000800;
               fxLeftEdge = fsx - 1;
               fdxLeftEdge = eLeft->fdxdy;
               fdxOuter = ((fdxLeftEdge - 1) & (~0x000007FF));
               fdError = fdxOuter - fdxLeftEdge + 0x00000800;
               idxOuter = ((fdxOuter) >> 11);
               dxOuter = (float) idxOuter;

               fy = eLeft->fsy;
               iy = ((fy) >> 11);

               adjx = (float)(fx - eLeft->fx0);
               adjy = eLeft->adjy;

               vLower = eLeft->v0;
# 609 "tritemp.h"
               {
                  GLfloat z0, tmp;
                  z0 = VB->Win[vLower][2] + ctx->PolygonZoffset;


                  tmp = (z0 * 2048.0f + dzdx * adjx + dzdy * adjy) + 0x00000400;
                  if (tmp < 0xffffffff/2)
                     fz = (GLfixed) tmp;
                  else
                     fz = 0xffffffff/2;
                  fdzOuter = ((GLfixed) ((dzdy + dxOuter * dzdx) * 2048.0f));





                  zRow = ((ctx)->Buffer->Depth + (ctx)->Buffer->Width * (iy) + (((fxLeftEdge) >> 11)));
                  dZRowOuter = (ctx->Buffer->Width + idxOuter) * sizeof(GLdepth);
               }


               fr = (GLfixed)(((VB->Color[vLower][0]) << 11) + drdx * adjx + drdy * adjy)
                    + 0x00000400;
               fdrOuter = ((GLfixed) ((drdy + dxOuter * drdx) * 2048.0f));

               fg = (GLfixed)(((VB->Color[vLower][1]) << 11) + dgdx * adjx + dgdy * adjy)
                    + 0x00000400;
               fdgOuter = ((GLfixed) ((dgdy + dxOuter * dgdx) * 2048.0f));

               fb = (GLfixed)(((VB->Color[vLower][2]) << 11) + dbdx * adjx + dbdy * adjy)
                    + 0x00000400;
               fdbOuter = ((GLfixed) ((dbdy + dxOuter * dbdx) * 2048.0f));


               fa = (GLfixed)(((VB->Color[vLower][3]) << 11) + dadx * adjx + dady * adjy)
                    + 0x00000400;
               fdaOuter = ((GLfixed) ((dady + dxOuter * dadx) * 2048.0f));
# 687 "tritemp.h"
            }


            if (setupRight && eRight->lines>0) {
               fxRightEdge = eRight->fsx - 1;
               fdxRightEdge = eRight->fdxdy;
            }

            if (lines==0) {
               continue;
            }







            dZRowInner = dZRowOuter + sizeof(GLdepth);
            fdzInner = fdzOuter + fdzdx;


            fdrInner = fdrOuter + fdrdx;
            fdgInner = fdgOuter + fdgdx;
            fdbInner = fdbOuter + fdbdx;


            fdaInner = fdaOuter + fdadx;
# 733 "tritemp.h"
            while (lines>0) {



               GLfixed ffz = fz;



               GLfixed ffr = fr, ffg = fg, ffb = fb;


               GLfixed ffa = fa;
# 758 "tritemp.h"
               GLint left = ((fxLeftEdge) >> 11);
               GLint right = ((fxRightEdge) >> 11);


               {

                  GLfixed ffrend = ffr+(right-left-1)*fdrdx;
                  GLfixed ffgend = ffg+(right-left-1)*fdgdx;
                  GLfixed ffbend = ffb+(right-left-1)*fdbdx;
                  if (ffrend<0) ffr -= ffrend;
                  if (ffgend<0) ffg -= ffgend;
                  if (ffbend<0) ffb -= ffbend;
                  if (ffr<0) ffr = 0;
                  if (ffg<0) ffg = 0;
                  if (ffb<0) ffb = 0;
               }


               {
                  GLfixed ffaend = ffa+(right-left-1)*fdadx;
                  if (ffaend<0) ffa -= ffaend;
                  if (ffa<0) ffa = 0;
               }





               { GLint i, len = right-left; GLuint *img = ((GLuint *) osmesa->rowaddr[iy] + (left)); for (i=0;i<len;i++,img++) { GLdepth z = ((ffz) >> 11); if (z < zRow[i]) { *img = ( ((((ffr) >> 11)) << rshift) | ((((ffg) >> 11)) << gshift) | ((((ffb) >> 11)) << bshift) | ((((ffa) >> 11)) << ashift) ); zRow[i] = z; } ffr += fdrdx; ffg += fdgdx; ffb += fdbdx; ffa += fdadx; ffz += fdzdx; } };







               iy++;
               lines--;

               fxLeftEdge += fdxLeftEdge;
               fxRightEdge += fdxRightEdge;


               fError += fdError;
               if (fError >= 0) {
                  fError -= 0x00000800;




                  zRow = (GLdepth*) ((GLubyte*)zRow + dZRowOuter);
                  fz += fdzOuter;


                  fr += fdrOuter; fg += fdgOuter; fb += fdbOuter;


                  fa += fdaOuter;
# 832 "tritemp.h"
               }
               else {




                  zRow = (GLdepth*) ((GLubyte*)zRow + dZRowInner);
                  fz += fdzInner;


                  fr += fdrInner; fg += fdgInner; fb += fdbInner;


                  fa += fdaInner;
# 862 "tritemp.h"
               }
            }

         }

      }
   }
}
# 1368 "osmesa.c" 2
}







static void flat_color_z_triangle( GLcontext *ctx, GLuint v0, GLuint v1,
                                   GLuint v2, GLuint pv )
{
   OSMesaContext osmesa = (OSMesaContext) ctx->DriverCtx;
# 1401 "osmesa.c"
# 1 "tritemp.h" 1
# 126 "tritemp.h"
{
   typedef struct {
        GLint v0, v1;
 GLfloat dx;
 GLfloat dy;
 GLfixed fdxdy;
 GLfixed fsx;
 GLfixed fsy;
 GLfloat adjy;
 GLint lines;
 GLfixed fx0;
   } EdgeT;

   struct vertex_buffer *VB = ctx->VB;
   EdgeT eMaj, eTop, eBot;
   GLfloat oneOverArea;
   int vMin, vMid, vMax;


   {
      GLfloat y0 = VB->Win[v0][1];
      GLfloat y1 = VB->Win[v1][1];
      GLfloat y2 = VB->Win[v2][1];

      if (y0<=y1) {
  if (y1<=y2) {
     vMin = v0; vMid = v1; vMax = v2;
  }
  else if (y2<=y0) {
     vMin = v2; vMid = v0; vMax = v1;
  }
  else {
     vMin = v0; vMid = v2; vMax = v1;
  }
      }
      else {
  if (y0<=y2) {
     vMin = v1; vMid = v0; vMax = v2;
  }
  else if (y2<=y1) {
     vMin = v2; vMid = v1; vMax = v0;
  }
  else {
     vMin = v1; vMid = v2; vMax = v0;
  }
      }
   }


   eMaj.v0 = vMin; eMaj.v1 = vMax;
   eTop.v0 = vMid; eTop.v1 = vMax;
   eBot.v0 = vMin; eBot.v1 = vMid;


   eMaj.dx = VB->Win[vMax][0] - VB->Win[vMin][0];
   eMaj.dy = VB->Win[vMax][1] - VB->Win[vMin][1];
   eTop.dx = VB->Win[vMax][0] - VB->Win[vMid][0];
   eTop.dy = VB->Win[vMax][1] - VB->Win[vMid][1];
   eBot.dx = VB->Win[vMid][0] - VB->Win[vMin][0];
   eBot.dy = VB->Win[vMid][1] - VB->Win[vMin][1];


   {
      GLfloat area = eMaj.dx * eBot.dy - eBot.dx * eMaj.dy;
      if (area>-0.05f && area<0.05f) {
         return;
      }
      oneOverArea = 1.0F / area;
   }


   {

      GLfixed vMin_fx = ((GLfixed) ((VB->Win[vMin][0] + 0.5F) * 2048.0f));
      GLfixed vMin_fy = ((GLfixed) ((VB->Win[vMin][1] - 0.5F) * 2048.0f));
      GLfixed vMid_fx = ((GLfixed) ((VB->Win[vMid][0] + 0.5F) * 2048.0f));
      GLfixed vMid_fy = ((GLfixed) ((VB->Win[vMid][1] - 0.5F) * 2048.0f));
      GLfixed vMax_fy = ((GLfixed) ((VB->Win[vMax][1] - 0.5F) * 2048.0f));

      eMaj.fsy = (((vMin_fy) + 0x00000800 - 1) & (~0x000007FF));
      eMaj.lines = ((vMax_fy + 0x00000800 - 1 - eMaj.fsy) >> 11);
      if (eMaj.lines > 0) {
         GLfloat dxdy = eMaj.dx / eMaj.dy;
         eMaj.fdxdy = ((GLfixed) ((dxdy) * 2048.0f));
         eMaj.adjy = (GLfloat) (eMaj.fsy - vMin_fy);
         eMaj.fx0 = vMin_fx;
         eMaj.fsx = eMaj.fx0 + (GLfixed) (eMaj.adjy * dxdy);
      }
      else {
         return;
      }

      eTop.fsy = (((vMid_fy) + 0x00000800 - 1) & (~0x000007FF));
      eTop.lines = ((vMax_fy + 0x00000800 - 1 - eTop.fsy) >> 11);
      if (eTop.lines > 0) {
         GLfloat dxdy = eTop.dx / eTop.dy;
         eTop.fdxdy = ((GLfixed) ((dxdy) * 2048.0f));
         eTop.adjy = (GLfloat) (eTop.fsy - vMid_fy);
         eTop.fx0 = vMid_fx;
         eTop.fsx = eTop.fx0 + (GLfixed) (eTop.adjy * dxdy);
      }

      eBot.fsy = (((vMin_fy) + 0x00000800 - 1) & (~0x000007FF));
      eBot.lines = ((vMid_fy + 0x00000800 - 1 - eBot.fsy) >> 11);
      if (eBot.lines > 0) {
         GLfloat dxdy = eBot.dx / eBot.dy;
         eBot.fdxdy = ((GLfixed) ((dxdy) * 2048.0f));
         eBot.adjy = (GLfloat) (eBot.fsy - vMin_fy);
         eBot.fx0 = vMin_fx;
         eBot.fsx = eBot.fx0 + (GLfixed) (eBot.adjy * dxdy);
      }
   }
# 273 "tritemp.h"
   {
      GLint ltor;

      GLfloat dzdx, dzdy; GLfixed fdzdx;
# 307 "tritemp.h"
      GLubyte r = VB->Color[pv][0]; GLubyte g = VB->Color[pv][1]; GLubyte b = VB->Color[pv][2]; GLubyte a = VB->Color[pv][3]; GLuint pixel = ( ((r) << osmesa->rshift) | ((g) << osmesa->gshift) | ((b) << osmesa->bshift) | ((a) << osmesa->ashift) );


      ltor = (oneOverArea < 0.0F);



      {
         GLfloat eMaj_dz, eBot_dz;
         eMaj_dz = VB->Win[vMax][2] - VB->Win[vMin][2];
         eBot_dz = VB->Win[vMid][2] - VB->Win[vMin][2];
         dzdx = oneOverArea * (eMaj_dz * eBot.dy - eMaj.dy * eBot_dz);
         if (dzdx>65535.0F || dzdx<-65535.0F) {

            dzdx = 0.0;
            dzdy = 0.0;
         }
         else {
            dzdy = oneOverArea * (eMaj.dx * eBot_dz - eMaj_dz * eBot.dx);
         }

         fdzdx = ((GLfixed) ((dzdx) * 2048.0f));



      }
# 486 "tritemp.h"
      {
         int subTriangle;
         GLfixed fx, fxLeftEdge, fxRightEdge, fdxLeftEdge, fdxRightEdge;
         GLfixed fdxOuter;
         int idxOuter;
         float dxOuter;
         GLfixed fError, fdError;
         float adjx, adjy;
         GLfixed fy;
         int iy;





         GLdepth *zRow;
         int dZRowOuter, dZRowInner;
         GLfixed fz, fdzOuter, fdzInner;
# 530 "tritemp.h"
         for (subTriangle=0; subTriangle<=1; subTriangle++) {
            EdgeT *eLeft, *eRight;
            int setupLeft, setupRight;
            int lines;

            if (subTriangle==0) {

               if (ltor) {
                  eLeft = &eMaj;
                  eRight = &eBot;
                  lines = eRight->lines;
                  setupLeft = 1;
                  setupRight = 1;
               }
               else {
                  eLeft = &eBot;
                  eRight = &eMaj;
                  lines = eLeft->lines;
                  setupLeft = 1;
                  setupRight = 1;
               }
            }
            else {

               if (ltor) {
                  eLeft = &eMaj;
                  eRight = &eTop;
                  lines = eRight->lines;
                  setupLeft = 0;
                  setupRight = 1;
               }
               else {
                  eLeft = &eTop;
                  eRight = &eMaj;
                  lines = eLeft->lines;
                  setupLeft = 1;
                  setupRight = 0;
               }
               if (lines==0) return;
            }

            if (setupLeft && eLeft->lines>0) {
               GLint vLower;
               GLfixed fsx = eLeft->fsx;
               fx = (((fsx) + 0x00000800 - 1) & (~0x000007FF));
               fError = fx - fsx - 0x00000800;
               fxLeftEdge = fsx - 1;
               fdxLeftEdge = eLeft->fdxdy;
               fdxOuter = ((fdxLeftEdge - 1) & (~0x000007FF));
               fdError = fdxOuter - fdxLeftEdge + 0x00000800;
               idxOuter = ((fdxOuter) >> 11);
               dxOuter = (float) idxOuter;

               fy = eLeft->fsy;
               iy = ((fy) >> 11);

               adjx = (float)(fx - eLeft->fx0);
               adjy = eLeft->adjy;

               vLower = eLeft->v0;
# 609 "tritemp.h"
               {
                  GLfloat z0, tmp;
                  z0 = VB->Win[vLower][2] + ctx->PolygonZoffset;


                  tmp = (z0 * 2048.0f + dzdx * adjx + dzdy * adjy) + 0x00000400;
                  if (tmp < 0xffffffff/2)
                     fz = (GLfixed) tmp;
                  else
                     fz = 0xffffffff/2;
                  fdzOuter = ((GLfixed) ((dzdy + dxOuter * dzdx) * 2048.0f));





                  zRow = ((ctx)->Buffer->Depth + (ctx)->Buffer->Width * (iy) + (((fxLeftEdge) >> 11)));
                  dZRowOuter = (ctx->Buffer->Width + idxOuter) * sizeof(GLdepth);
               }
# 687 "tritemp.h"
            }


            if (setupRight && eRight->lines>0) {
               fxRightEdge = eRight->fsx - 1;
               fdxRightEdge = eRight->fdxdy;
            }

            if (lines==0) {
               continue;
            }







            dZRowInner = dZRowOuter + sizeof(GLdepth);
            fdzInner = fdzOuter + fdzdx;
# 733 "tritemp.h"
            while (lines>0) {



               GLfixed ffz = fz;
# 758 "tritemp.h"
               GLint left = ((fxLeftEdge) >> 11);
               GLint right = ((fxRightEdge) >> 11);
# 786 "tritemp.h"
               { GLint i, len = right-left; GLuint *img = ((GLuint *) osmesa->rowaddr[iy] + (left)); for (i=0;i<len;i++,img++) { GLdepth z = ((ffz) >> 11); if (z < zRow[i]) { *img = pixel; zRow[i] = z; } ffz += fdzdx; } };







               iy++;
               lines--;

               fxLeftEdge += fdxLeftEdge;
               fxRightEdge += fdxRightEdge;


               fError += fdError;
               if (fError >= 0) {
                  fError -= 0x00000800;




                  zRow = (GLdepth*) ((GLubyte*)zRow + dZRowOuter);
                  fz += fdzOuter;
# 832 "tritemp.h"
               }
               else {




                  zRow = (GLdepth*) ((GLubyte*)zRow + dZRowInner);
                  fz += fdzInner;
# 862 "tritemp.h"
               }
            }

         }

      }
   }
}
# 1402 "osmesa.c" 2
}






static triangle_func choose_triangle_function( GLcontext *ctx )
{
   OSMesaContext osmesa = (OSMesaContext) ctx->DriverCtx;

   if ((osmesa->format==OSMESA_RGB)||(osmesa->format==OSMESA_BGR)) return ((void *)0);

   if (ctx->Polygon.SmoothFlag) return ((void *)0);
   if (ctx->Polygon.StippleFlag) return ((void *)0);
   if (ctx->Texture.Enabled) return ((void *)0);

   if (ctx->RasterMask==0x004
       && ctx->Depth.Func==0x0201
       && ctx->Depth.Mask==0x1
       && osmesa->format!=OSMESA_COLOR_INDEX) {
      if (ctx->Light.ShadeModel==0x1D01) {
         return smooth_color_z_triangle;
      }
      else {
         return flat_color_z_triangle;
      }
   }
   return ((void *)0);
}



static const char *renderer_string(void)
{
   return "OffScreen";
}


static void osmesa_setup_DD_pointers( GLcontext *ctx )
{
   OSMesaContext osmesa = (OSMesaContext) ctx->DriverCtx;

   ctx->Driver.RendererString = renderer_string;
   ctx->Driver.UpdateState = osmesa_setup_DD_pointers;

   ctx->Driver.SetBuffer = set_buffer;
   ctx->Driver.Color = set_color;
   ctx->Driver.Index = set_index;
   ctx->Driver.ClearIndex = clear_index;
   ctx->Driver.ClearColor = clear_color;
   ctx->Driver.Clear = clear;

   ctx->Driver.GetBufferSize = buffer_size;

   ctx->Driver.PointsFunc = ((void *)0);
   ctx->Driver.LineFunc = choose_line_function( ctx );
   ctx->Driver.TriangleFunc = choose_triangle_function( ctx );


   if ((osmesa->format==OSMESA_RGB) || (osmesa->format==OSMESA_BGR)) {
      ctx->Driver.WriteColorSpan = write_color_span3;
      ctx->Driver.WriteColorPixels = write_color_pixels3;
      ctx->Driver.WriteMonocolorSpan = write_monocolor_span3;
      ctx->Driver.WriteMonocolorPixels = write_monocolor_pixels3;
      ctx->Driver.ReadColorSpan = read_color_span3;
      ctx->Driver.ReadColorPixels = read_color_pixels3;
   }
   else {
      ctx->Driver.WriteColorSpan = write_color_span;
      ctx->Driver.WriteColorPixels = write_color_pixels;
      ctx->Driver.WriteMonocolorSpan = write_monocolor_span;
      ctx->Driver.WriteMonocolorPixels = write_monocolor_pixels;
      ctx->Driver.ReadColorSpan = read_color_span;
      ctx->Driver.ReadColorPixels = read_color_pixels;
   }


   ctx->Driver.WriteIndexSpan = write_index_span;
   ctx->Driver.WriteMonoindexSpan = write_monoindex_span;
   ctx->Driver.WriteIndexPixels = write_index_pixels;
   ctx->Driver.WriteMonoindexPixels = write_monoindex_pixels;
   ctx->Driver.ReadIndexSpan = read_index_span;
   ctx->Driver.ReadIndexPixels = read_index_pixels;
}
