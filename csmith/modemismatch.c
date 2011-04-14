# 1 "found/test0025.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "found/test0025.c"
# 10 "found/test0025.c"
# 1 "../runtime/csmith.h" 1
# 45 "../runtime/csmith.h"
# 1 "../runtime/random_inc.h" 1
# 51 "../runtime/random_inc.h"
# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include-fixed/limits.h" 1 3 4
# 11 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include-fixed/limits.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include-fixed/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include-fixed/limits.h" 1 3 4
# 122 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include-fixed/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 27 "/usr/include/limits.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 322 "/usr/include/features.h" 3 4
# 1 "/usr/include/bits/predefs.h" 1 3 4
# 323 "/usr/include/features.h" 2 3 4
# 355 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 353 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 354 "/usr/include/sys/cdefs.h" 2 3 4
# 356 "/usr/include/features.h" 2 3 4
# 387 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4



# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 5 "/usr/include/gnu/stubs.h" 2 3 4


# 1 "/usr/include/gnu/stubs-32.h" 1 3 4
# 8 "/usr/include/gnu/stubs.h" 2 3 4
# 388 "/usr/include/features.h" 2 3 4
# 28 "/usr/include/limits.h" 2 3 4
# 145 "/usr/include/limits.h" 3 4
# 1 "/usr/include/bits/posix1_lim.h" 1 3 4
# 157 "/usr/include/bits/posix1_lim.h" 3 4
# 1 "/usr/include/bits/local_lim.h" 1 3 4
# 39 "/usr/include/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 40 "/usr/include/bits/local_lim.h" 2 3 4
# 158 "/usr/include/bits/posix1_lim.h" 2 3 4
# 146 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/bits/posix2_lim.h" 1 3 4
# 150 "/usr/include/limits.h" 2 3 4
# 123 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include-fixed/limits.h" 2 3 4
# 8 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include-fixed/syslimits.h" 2 3 4
# 12 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include-fixed/limits.h" 2 3 4
# 52 "../runtime/random_inc.h" 2



# 1 "/usr/include/stdint.h" 1 3 4
# 27 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/bits/wchar.h" 1 3 4
# 28 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 37 "/usr/include/stdint.h" 3 4
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;



__extension__
typedef long long int int64_t;




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
# 56 "../runtime/random_inc.h" 2







# 1 "/usr/include/string.h" 1 3 4
# 29 "/usr/include/string.h" 3 4





# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 211 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 3 4
typedef unsigned long size_t;
# 35 "/usr/include/string.h" 2 3 4









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
# 95 "/usr/include/string.h" 3 4
extern void *memchr (__const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 126 "/usr/include/string.h" 3 4


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






# 1 "/usr/include/xlocale.h" 1 3 4
# 28 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 163 "/usr/include/string.h" 2 3 4


extern int strcoll_l (__const char *__s1, __const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, __const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (__const char *__string, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 210 "/usr/include/string.h" 3 4

# 235 "/usr/include/string.h" 3 4
extern char *strchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 262 "/usr/include/string.h" 3 4
extern char *strrchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 281 "/usr/include/string.h" 3 4



extern size_t strcspn (__const char *__s, __const char *__reject)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 314 "/usr/include/string.h" 3 4
extern char *strpbrk (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 342 "/usr/include/string.h" 3 4
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
# 397 "/usr/include/string.h" 3 4


extern size_t strlen (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (__const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__));

# 427 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));
# 445 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (__const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 489 "/usr/include/string.h" 3 4
extern char *index (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 517 "/usr/include/string.h" 3 4
extern char *rindex (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
# 536 "/usr/include/string.h" 3 4
extern int strcasecmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 559 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
       __const char *__restrict __delim)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__));


extern char *__stpcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
# 646 "/usr/include/string.h" 3 4

# 64 "../runtime/random_inc.h" 2
# 93 "../runtime/random_inc.h"
# 1 "../runtime/platform_generic.h" 1
# 40 "../runtime/platform_generic.h"
# 1 "/usr/include/stdio.h" 1 3 4
# 30 "/usr/include/stdio.h" 3 4




# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 35 "/usr/include/stdio.h" 2 3 4

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
# 37 "/usr/include/stdio.h" 2 3 4
# 45 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 65 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 75 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 32 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 83 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4

typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 53 "/usr/include/_G_config.h" 3 4
typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));
# 33 "/usr/include/libio.h" 2 3 4
# 53 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 54 "/usr/include/libio.h" 2 3 4
# 170 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 180 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 203 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 271 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 319 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 328 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 364 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 416 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 460 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__));
# 490 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__));
# 76 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 91 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
# 103 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;




# 161 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 162 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (__const char *__filename) __attribute__ ((__nothrow__));

extern int rename (__const char *__old, __const char *__new) __attribute__ ((__nothrow__));




extern int renameat (int __oldfd, __const char *__old, int __newfd,
       __const char *__new) __attribute__ ((__nothrow__));








extern FILE *tmpfile (void) ;
# 206 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__)) ;
# 224 "/usr/include/stdio.h" 3 4
extern char *tempnam (__const char *__dir, __const char *__pfx)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 249 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 263 "/usr/include/stdio.h" 3 4






extern FILE *fopen (__const char *__restrict __filename,
      __const char *__restrict __modes) ;




extern FILE *freopen (__const char *__restrict __filename,
        __const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 292 "/usr/include/stdio.h" 3 4

# 303 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, __const char *__modes) __attribute__ ((__nothrow__)) ;
# 316 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, __const char *__modes)
  __attribute__ ((__nothrow__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__));








extern int fprintf (FILE *__restrict __stream,
      __const char *__restrict __format, ...);




extern int printf (__const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      __const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       __const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

# 414 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, __const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, __const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     __const char *__restrict __format, ...) ;




extern int scanf (__const char *__restrict __format, ...) ;

extern int sscanf (__const char *__restrict __s,
     __const char *__restrict __format, ...) __attribute__ ((__nothrow__));
# 445 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, __const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf") ;


extern int scanf (__const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf") ;

extern int sscanf (__const char *__restrict __s, __const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__));
# 465 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (__const char *__restrict __s,
      __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 496 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (__const char *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 524 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 552 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 563 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 596 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;






extern char *gets (char *__s) ;

# 658 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);





extern int puts (__const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

# 730 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 766 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 785 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, __const fpos_t *__pos);
# 808 "/usr/include/stdio.h" 3 4

# 817 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;








extern void perror (__const char *__s);






# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
# 27 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern __const char *__const sys_errlist[];
# 847 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
# 866 "/usr/include/stdio.h" 3 4
extern FILE *popen (__const char *__command, __const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__));
# 906 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__));
# 936 "/usr/include/stdio.h" 3 4

# 41 "../runtime/platform_generic.h" 2


static void
platform_main_begin(void)
{

}

static void
platform_main_end(uint32_t crc)
{



 printf ("checksum = %X\n", crc);
# 117 "../runtime/platform_generic.h"
}
# 94 "../runtime/random_inc.h" 2
# 104 "../runtime/random_inc.h"
# 1 "../runtime/safe_math.h" 1
# 13 "../runtime/safe_math.h"
static int8_t
(safe_unary_minus_func_int8_t_s)(int8_t si )
{

  return






    -si;
}

static int8_t
(safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{

  return






    (si1 + si2);
}

static int8_t
(safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{

  return






    (si1 - si2);
}

static int8_t
(safe_mul_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{

  return






    si1 * si2;
}

static int8_t
(safe_mod_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{

  return

    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static int8_t
(safe_div_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{

  return

    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static int8_t
(safe_lshift_func_int8_t_s_s)(int8_t left, int right )
{

  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static int8_t
(safe_lshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{

  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static int8_t
(safe_rshift_func_int8_t_s_s)(int8_t left, int right )
{

  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}

static int8_t
(safe_rshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{

  return

    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)right));
}



static int16_t
(safe_unary_minus_func_int16_t_s)(int16_t si )
{

  return






    -si;
}

static int16_t
(safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{

  return






    (si1 + si2);
}

static int16_t
(safe_sub_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{

  return






    (si1 - si2);
}

static int16_t
(safe_mul_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{

  return






    si1 * si2;
}

static int16_t
(safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{

  return

    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static int16_t
(safe_div_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{

  return

    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static int16_t
(safe_lshift_func_int16_t_s_s)(int16_t left, int right )
{

  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static int16_t
(safe_lshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{

  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static int16_t
(safe_rshift_func_int16_t_s_s)(int16_t left, int right )
{

  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}

static int16_t
(safe_rshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{

  return

    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)right));
}



static int32_t
(safe_unary_minus_func_int32_t_s)(int32_t si )
{

  return


    (si==(-2147483647-1)) ?
    ((si)) :


    -si;
}

static int32_t
(safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{

  return


    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :


    (si1 + si2);
}

static int32_t
(safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{

  return


    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :


    (si1 - si2);
}

static int32_t
(safe_mul_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{

  return


    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :


    si1 * si2;
}

static int32_t
(safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{

  return

    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static int32_t
(safe_div_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{

  return

    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static int32_t
(safe_lshift_func_int32_t_s_s)(int32_t left, int right )
{

  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static int32_t
(safe_lshift_func_int32_t_s_u)(int32_t left, unsigned int right )
{

  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static int32_t
(safe_rshift_func_int32_t_s_s)(int32_t left, int right )
{

  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}

static int32_t
(safe_rshift_func_int32_t_s_u)(int32_t left, unsigned int right )
{

  return

    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)right));
}




static int64_t
(safe_unary_minus_func_int64_t_s)(int64_t si )
{

  return


    (si==(-9223372036854775807LL -1)) ?
    ((si)) :


    -si;
}

static int64_t
(safe_add_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{

  return


    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807LL)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807LL -1)-si2)))) ?
    ((si1)) :


    (si1 + si2);
}

static int64_t
(safe_sub_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{

  return


    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807LL))))-si2)^si2)) < 0) ?
    ((si1)) :


    (si1 - si2);
}

static int64_t
(safe_mul_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{

  return


    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807LL) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807LL -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807LL -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807LL) / si1)))) ?
    ((si1)) :


    si1 * si2;
}

static int64_t
(safe_mod_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{

  return

    ((si2 == 0) || ((si1 == (-9223372036854775807LL -1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static int64_t
(safe_div_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{

  return

    ((si2 == 0) || ((si1 == (-9223372036854775807LL -1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static int64_t
(safe_lshift_func_int64_t_s_s)(int64_t left, int right )
{

  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807LL) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static int64_t
(safe_lshift_func_int64_t_s_u)(int64_t left, unsigned int right )
{

  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807LL) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static int64_t
(safe_rshift_func_int64_t_s_s)(int64_t left, int right )
{

  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}

static int64_t
(safe_rshift_func_int64_t_s_u)(int64_t left, unsigned int right )
{

  return

    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)right));
}







static uint8_t
(safe_unary_minus_func_uint8_t_u)(uint8_t ui )
{

  return -ui;
}

static uint8_t
(safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{

  return ui1 + ui2;
}

static uint8_t
(safe_sub_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{

  return ui1 - ui2;
}

static uint8_t
(safe_mul_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{

  return ((unsigned int)ui1) * ((unsigned int)ui2);
}

static uint8_t
(safe_mod_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{

  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static uint8_t
(safe_div_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{

  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 / ui2);
}

static uint8_t
(safe_lshift_func_uint8_t_u_s)(uint8_t left, int right )
{

  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static uint8_t
(safe_lshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{

  return

    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static uint8_t
(safe_rshift_func_uint8_t_u_s)(uint8_t left, int right )
{

  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static uint8_t
(safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{

  return

    (((unsigned int)right) >= 32) ?
    ((left)) :

    (left >> ((unsigned int)right));
}



static uint16_t
(safe_unary_minus_func_uint16_t_u)(uint16_t ui )
{

  return -ui;
}

static uint16_t
(safe_add_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{

  return ui1 + ui2;
}

static uint16_t
(safe_sub_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{

  return ui1 - ui2;
}

static uint16_t
(safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{

  return ((unsigned int)ui1) * ((unsigned int)ui2);
}

static uint16_t
(safe_mod_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{

  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static uint16_t
(safe_div_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{

  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 / ui2);
}

static uint16_t
(safe_lshift_func_uint16_t_u_s)(uint16_t left, int right )
{

  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static uint16_t
(safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{

  return

    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static uint16_t
(safe_rshift_func_uint16_t_u_s)(uint16_t left, int right )
{

  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static uint16_t
(safe_rshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{

  return

    (((unsigned int)right) >= 32) ?
    ((left)) :

    (left >> ((unsigned int)right));
}



static uint32_t
(safe_unary_minus_func_uint32_t_u)(uint32_t ui )
{

  return -ui;
}

static uint32_t
(safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{

  return ui1 + ui2;
}

static uint32_t
(safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{

  return ui1 - ui2;
}

static uint32_t
(safe_mul_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{

  return ((unsigned int)ui1) * ((unsigned int)ui2);
}

static uint32_t
(safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{

  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static uint32_t
(safe_div_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{

  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 / ui2);
}

static uint32_t
(safe_lshift_func_uint32_t_u_s)(uint32_t left, int right )
{

  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static uint32_t
(safe_lshift_func_uint32_t_u_u)(uint32_t left, unsigned int right )
{

  return

    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static uint32_t
(safe_rshift_func_uint32_t_u_s)(uint32_t left, int right )
{

  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static uint32_t
(safe_rshift_func_uint32_t_u_u)(uint32_t left, unsigned int right )
{

  return

    (((unsigned int)right) >= 32) ?
    ((left)) :

    (left >> ((unsigned int)right));
}




static uint64_t
(safe_unary_minus_func_uint64_t_u)(uint64_t ui )
{

  return -ui;
}

static uint64_t
(safe_add_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{

  return ui1 + ui2;
}

static uint64_t
(safe_sub_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{

  return ui1 - ui2;
}

static uint64_t
(safe_mul_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{

  return ((unsigned long long int)ui1) * ((unsigned long long int)ui2);
}

static uint64_t
(safe_mod_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{

  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static uint64_t
(safe_div_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{

  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 / ui2);
}

static uint64_t
(safe_lshift_func_uint64_t_u_s)(uint64_t left, int right )
{

  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615ULL) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static uint64_t
(safe_lshift_func_uint64_t_u_u)(uint64_t left, unsigned int right )
{

  return

    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615ULL) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static uint64_t
(safe_rshift_func_uint64_t_u_s)(uint64_t left, int right )
{

  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static uint64_t
(safe_rshift_func_uint64_t_u_u)(uint64_t left, unsigned int right )
{

  return

    (((unsigned int)right) >= 32) ?
    ((left)) :

    (left >> ((unsigned int)right));
}
# 105 "../runtime/random_inc.h" 2
# 46 "../runtime/csmith.h" 2

static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;

static void
crc32_gentab (void)
{
 uint32_t crc;
 const uint32_t poly = 0xEDB88320UL;
 int i, j;

 for (i = 0; i < 256; i++) {
  crc = i;
  for (j = 8; j > 0; j--) {
   if (crc & 1) {
    crc = (crc >> 1) ^ poly;
   } else {
    crc >>= 1;
   }
  }
  crc32_tab[i] = crc;
 }
}

static void
crc32_byte (uint8_t b) {
 crc32_context =
  ((crc32_context >> 8) & 0x00FFFFFF) ^
  crc32_tab[(crc32_context ^ b) & 0xFF];
}
# 96 "../runtime/csmith.h"
static void
crc32_8bytes (uint64_t val)
{
 crc32_byte ((val>>0) & 0xff);
 crc32_byte ((val>>8) & 0xff);
 crc32_byte ((val>>16) & 0xff);
 crc32_byte ((val>>24) & 0xff);
 crc32_byte ((val>>32) & 0xff);
 crc32_byte ((val>>40) & 0xff);
 crc32_byte ((val>>48) & 0xff);
 crc32_byte ((val>>56) & 0xff);
}

static void
transparent_crc (uint64_t val, char* vname, int flag)
{
 crc32_8bytes(val);
 if (flag) {
    printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);
 }
}
# 11 "found/test0025.c" 2


long __undefined;


struct S0 {
   int32_t f0;
   uint16_t f1;
};

struct S1 {
   struct S0 f0;
   int64_t f1;
   const struct S0 f2;
   uint32_t f3;
   int16_t f4;
   const int32_t f5;
   int8_t f6;
};


volatile int32_t g_13 = 0xB0815898L;
uint16_t g_23 = 65535U;
int32_t g_25[2] = {(-1L), (-1L)};
int16_t g_60 = (-6L);
struct S1 g_61 = {{0x4B3BEBDAL,0xFA0BL},0xBCDCEC458AF32651LL,{-1L,1U},0x4D7AEB8FL,5L,6L,-1L};
int32_t g_69[8] = {(-4L), (-4L), 0L, 1L, 7L, 1L, 0L, (-4L)};
int32_t ***g_72 = 0;
struct S0 g_91[2] = {{0xE73BF60CL,65534U}, {0xE73BF60CL,65534U}};
int32_t g_128[10] = {0xC6BD3C73L, 0xC6BD3C73L, 0xC6D2ED0BL, 0xC6BD3C73L, 0xC6BD3C73L, 0xC6D2ED0BL, 0xC6BD3C73L, 0xC6BD3C73L, 0xC6D2ED0BL, 0xC6BD3C73L};
struct S0 * volatile g_180 = &g_61.f0;
struct S0 * volatile *g_179[8] = {&g_180, &g_180, &g_180, &g_180, &g_180, &g_180, &g_180, &g_180};
const int32_t * volatile g_215 = &g_61.f0.f0;
const int32_t * volatile *g_214 = &g_215;
const int32_t * volatile **g_213[10] = {&g_214, &g_214, &g_214, &g_214, &g_214, &g_214, &g_214, &g_214, &g_214, &g_214};
struct S1 g_250[10][9][1] = {{{{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}}, {{{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}}, {{{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}}, {{{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}}, {{{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}}, {{{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}}, {{{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}}, {{{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}}, {{{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}}, {{{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}, {{{0x4B2A3510L,0U},0x5F0CBF23260E939ALL,{6L,0xC2C5L},4294967293U,0x5B49L,1L,-4L}}}};
const struct S0 g_441[3][9][1] = {{{{-1L,65532U}}, {{-1L,65532U}}, {{-1L,65532U}}, {{-1L,65532U}}, {{-1L,65532U}}, {{-1L,65532U}}, {{-1L,65532U}}, {{-1L,65532U}}, {{-1L,65532U}}}, {{{-1L,65532U}}, {{-1L,65532U}}, {{-1L,65532U}}, {{-1L,65532U}}, {{-1L,65532U}}, {{-1L,65532U}}, {{-1L,65532U}}, {{-1L,65532U}}, {{-1L,65532U}}}, {{{-1L,65532U}}, {{-1L,65532U}}, {{-1L,65532U}}, {{-1L,65532U}}, {{-1L,65532U}}, {{-1L,65532U}}, {{-1L,65532U}}, {{-1L,65532U}}, {{-1L,65532U}}}};
uint16_t g_442[10] = {0x8681L, 2U, 0x8681L, 2U, 0x8681L, 2U, 0x8681L, 2U, 0x8681L, 2U};
volatile struct S1 g_457 = {{7L,0U},0xEE686AA94C0A7CF9LL,{0xB8A44879L,6U},0xD1077F89L,-1L,-9L,0xEBL};
volatile struct S1 *g_456 = &g_457;
volatile struct S1 * volatile *g_455 = &g_456;
uint64_t g_472 = 0x57D6EC1892ABD192LL;
int64_t g_506 = 0x76470DD2177A2729LL;
struct S0 g_510 = {0x200B15A4L,65535U};
const struct S0 g_518 = {0L,0U};
volatile int32_t g_540 = 0L;
volatile int32_t *g_539 = &g_540;
struct S1 g_669 = {{0L,0x5809L},0x6C06B988126BE51DLL,{8L,0x17C9L},1U,0xA94BL,-1L,1L};
uint32_t g_678[7] = {0x9B2126B3L, 0x9B2126B3L, 0x9B2126B3L, 0x9B2126B3L, 0x9B2126B3L, 0x9B2126B3L, 0x9B2126B3L};
int32_t *g_729 = &g_510.f0;
int32_t **g_728 = &g_729;
int32_t *** const g_727[1][7][1] = {{{&g_728}, {&g_728}, {&g_728}, {&g_728}, {&g_728}, {&g_728}, {&g_728}}};
volatile struct S1 * volatile **g_753 = &g_455;
uint16_t g_780 = 0x27B3L;
int32_t * const * const * const g_827 = 0;
int32_t g_874 = 0xA5CCBBE8L;
uint8_t g_875 = 0U;
uint16_t g_878 = 0xF1EFL;
uint16_t g_991 = 1U;
int32_t *** const g_1011 = &g_728;
struct S1 *g_1051 = &g_250[9][0][0];
const int32_t ** const g_1178 = 0;
const int32_t ** const *g_1177 = &g_1178;
struct S0 * volatile g_1248[2] = {&g_61.f0, &g_61.f0};
int8_t g_1258 = 0x2CL;
uint8_t g_1273[3][3] = {{9U, 9U, 9U}, {9U, 9U, 9U}, {9U, 9U, 9U}};
int32_t **g_1281 = 0;
uint16_t g_1297 = 0x764BL;
struct S0 * volatile g_1307[2][8][1] = {{{&g_61.f0}, {&g_61.f0}, {&g_61.f0}, {&g_61.f0}, {&g_61.f0}, {&g_61.f0}, {&g_61.f0}, {&g_61.f0}}, {{&g_61.f0}, {&g_61.f0}, {&g_61.f0}, {&g_61.f0}, {&g_61.f0}, {&g_61.f0}, {&g_61.f0}, {&g_61.f0}}};
struct S0 * volatile g_1308 = 0;
struct S1 g_1350 = {{0L,1U},0xD92E851DBD2B0F3ALL,{-1L,0x8877L},0xE538FC50L,0L,0xD12AEBBAL,1L};
int8_t g_1366 = 0x6EL;



uint32_t func_1(void);
uint16_t func_14(int8_t p_15, uint32_t p_16, uint8_t p_17, uint8_t p_18, const uint16_t p_19);
int32_t * func_36(struct S1 p_37, int32_t *** p_38);
struct S1 func_52(uint8_t p_53);
int32_t *** func_65(int32_t p_66, int32_t ** p_67);
uint8_t func_81(int32_t ** p_82, int64_t p_83, const int32_t ** const * p_84);
int32_t func_86(int32_t ** const p_87, int32_t *** p_88, int32_t p_89, int32_t * const * const * const p_90);
int32_t *** func_92(int32_t ** p_93, uint32_t p_94, int32_t ** p_95, uint32_t p_96, int32_t ** p_97);
struct S0 func_98(struct S1 p_99, uint32_t p_100, int32_t *** const p_101, int32_t * p_102);
struct S0 func_106(uint64_t p_107, struct S0 p_108, const struct S0 p_109);
# 104 "found/test0025.c"
uint32_t func_1(void)
{
    int32_t l_6[1][6][7] = {{{(-1L), (-1L), 4L, (-1L), (-1L), 4L, (-1L)}, {(-1L), (-1L), 4L, (-1L), (-1L), 4L, (-1L)}, {(-1L), (-1L), 4L, (-1L), (-1L), 4L, (-1L)}, {(-1L), (-1L), 4L, (-1L), (-1L), 4L, (-1L)}, {(-1L), (-1L), 4L, (-1L), (-1L), 4L, (-1L)}, {(-1L), (-1L), 4L, (-1L), (-1L), 4L, (-1L)}}};
    int32_t *l_1186[3][9][2];
    const struct S0 *l_1195 = &g_91[0];
    const struct S0 **l_1194 = &l_1195;
    const struct S0 ***l_1193 = &l_1194;
    int32_t *** const l_1199 = &g_728;
    int32_t ***l_1222 = 0;
    uint32_t l_1231 = 4294967294U;
    struct S1 **l_1257 = 0;
    int32_t * const * const l_1285[8][4][1] = {{{0}, {0}, {0}, {0}}, {{0}, {0}, {0}, {0}}, {{0}, {0}, {0}, {0}}, {{0}, {0}, {0}, {0}}, {{0}, {0}, {0}, {0}}, {{0}, {0}, {0}, {0}}, {{0}, {0}, {0}, {0}}, {{0}, {0}, {0}, {0}}};
    int32_t * const * const * const l_1284 = &l_1285[4][1][0];
    struct S1 *l_1291 = 0;
    uint32_t l_1341 = 4294967293U;
    int32_t ***l_1345 = &g_728;
    struct S0 l_1354 = {-1L,65532U};
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 2; k++)
                l_1186[i][j][k] = &g_669.f0.f0;
        }
    }
    if ((safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s(l_6[0][1][0], (safe_add_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u(65535U, l_6[0][1][0])), (safe_sub_func_int16_t_s_s(g_13, func_14(g_472, (safe_mul_func_uint8_t_u_u(l_6[0][1][0], g_780)), l_6[0][1][0], (safe_rshift_func_int16_t_s_s(g_669.f1, l_6[0][1][0])), g_128[7]))))))), (0 != l_1186[0][7][0]))))
    {
        (***g_1011) = (safe_mod_func_int32_t_s_s(0x09A58DE1L, (*g_729)));
    }
    else
    {
        uint32_t l_1189 = 0x1A91279EL;
        struct S1 l_1200 = {{-1L,0x2F7DL},-10L,{-9L,65526U},4294967292U,1L,0x647F3084L,-1L};
        uint8_t l_1206 = 255U;
        const int32_t ** const *l_1223 = &g_1178;
        int32_t *l_1268 = &g_69[1];
        int32_t * const l_1269 = &g_61.f0.f0;
        int32_t ***l_1290 = &g_1281;
        uint8_t l_1311 = 0x06L;
        int32_t *** const l_1352 = &g_728;
        struct S0 *l_1361[7];
        struct S0 *l_1387 = &g_510;
        int i;
        for (i = 0; i < 7; i++)
            l_1361[i] = 0;
    }
    return g_250[9][0][0].f0.f0;
}







uint16_t func_14(int8_t p_15, uint32_t p_16, uint8_t p_17, uint8_t p_18, const uint16_t p_19)
{
    uint32_t l_20[10] = {0x11D01887L, 0x11D01887L, 0x20274952L, 0x11D01887L, 0x11D01887L, 0x20274952L, 0x11D01887L, 0x11D01887L, 0x20274952L, 0x11D01887L};
    int32_t *l_29 = &g_25[1];
    struct S0 *l_1173 = &g_669.f0;
    struct S0 ** const l_1172 = &l_1173;
    struct S0 ** const *l_1171 = &l_1172;
    const int32_t ** const *l_1181[7];
    int i;
    for (i = 0; i < 7; i++)
        l_1181[i] = &g_1178;
    for (p_18 = 5; p_18 < 10; p_18 += 1)
    {
        int32_t *l_30[5][9][1];
        int32_t **l_35[3][3];
        struct S1 **l_1160 = &g_1051;
        const int32_t *l_1166 = &g_250[9][0][0].f2.f0;
        const int32_t **l_1165 = &l_1166;
        const int32_t ** const *l_1164 = &l_1165;
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 9; j++)
            {
                for (k = 0; k < 1; k++)
                    l_30[i][j][k] = &g_25[1];
            }
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                l_35[i][j] = &l_29;
        }
        for (p_17 = 0; p_17 < 10; p_17 += 4)
        {
            uint16_t l_28[6] = {0xB933L, 0x66DEL, 1U, 1U, 0x66DEL, 0xB933L};
            int32_t **l_34[2][9][1];
            int32_t ***l_33[8];
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 9; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_34[i][j][k] = &l_30[1][6][0];
                }
            }
            for (i = 0; i < 8; i++)
                l_33[i] = &l_34[0][2][0];
            for (p_16 = 0; (p_16 <= 24); p_16 = safe_add_func_int8_t_s_s(p_16, 2))
            {
                int i;
                for (p_15 = 4; p_15 < 10; p_15 += 1)
                {
                    int32_t *l_24 = &g_25[0];
                    (*l_24) = g_23;
                    l_28[4] = (safe_lshift_func_int8_t_s_u(0L, 1));
                    if (g_25[0])
                        continue;
                }
                (*l_29) = (l_29 != l_30[2][6][0]);
                for (p_15 = 0; p_15 < 2; p_15 += 1)
                {
                    int32_t *l_31 = &g_25[0];
                    int32_t **l_32 = &l_30[2][6][0];
                    (*l_32) = l_31;
                }
            }
            l_35[1][0] = &l_30[2][7][0];
            if (g_25[0])
            {
                uint64_t l_76 = 0x98A20B4D66FC9E27LL;
                const int32_t *l_1159[3];
                const int32_t ** const l_1158[5][8][1] = {{{&l_1159[2]}, {&l_1159[2]}, {&l_1159[2]}, {&l_1159[2]}, {&l_1159[2]}, {&l_1159[2]}, {&l_1159[2]}, {&l_1159[2]}}, {{&l_1159[2]}, {&l_1159[2]}, {&l_1159[2]}, {&l_1159[2]}, {&l_1159[2]}, {&l_1159[2]}, {&l_1159[2]}, {&l_1159[2]}}, {{&l_1159[2]}, {&l_1159[2]}, {&l_1159[2]}, {&l_1159[2]}, {&l_1159[2]}, {&l_1159[2]}, {&l_1159[2]}, {&l_1159[2]}}, {{&l_1159[2]}, {&l_1159[2]}, {&l_1159[2]}, {&l_1159[2]}, {&l_1159[2]}, {&l_1159[2]}, {&l_1159[2]}, {&l_1159[2]}}, {{&l_1159[2]}, {&l_1159[2]}, {&l_1159[2]}, {&l_1159[2]}, {&l_1159[2]}, {&l_1159[2]}, {&l_1159[2]}, {&l_1159[2]}}};
                const int32_t ** const *l_1157 = &l_1158[0][5][0];
                int32_t **l_1163[10][10];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_1159[i] = &g_518.f0;
                for (i = 0; i < 10; i++)
                {
                    for (j = 0; j < 10; j++)
                        l_1163[i][j] = 0;
                }
                l_29 = func_36(func_52(((safe_mod_func_int32_t_s_s((safe_unary_minus_func_uint32_t_u(p_18)), 1L)) == p_15)), func_65((*l_29), &l_30[2][6][0]));
                (**g_728) ^= (((((p_16 > (p_18 > g_69[1])) <= (safe_unary_minus_func_uint8_t_u((safe_mul_func_int16_t_s_s(g_69[6], l_76))))) != (safe_rshift_func_uint16_t_u_s(g_61.f2.f1, g_25[1]))) ^ (0x92E7L < (safe_mul_func_uint8_t_u_u(0x7BL, func_81(&l_30[2][6][0], p_16, l_1157))))) < (((p_16 <= (-1L)) | (0 == l_1160)) | func_81(0, (safe_sub_func_int8_t_s_s(func_81(l_1163[6][3], g_518.f1, l_1164), (p_15 > l_20[(p_17) % 10]))), &l_1158[0][5][0])));
                (*g_729) = p_19;
            }
            else
            {
                return p_18;
            }
            if (g_23)
                goto lbl_1174;
        }
        if (l_20[(p_18) % 10])
            break;
lbl_1174:
        for (g_669.f6 = 6; (g_669.f6 <= 23); g_669.f6 = safe_add_func_int32_t_s_s(g_669.f6, 1))
        {
            for (g_510.f0 = 0; (g_510.f0 != (-9)); g_510.f0 = safe_sub_func_uint64_t_u_u(g_510.f0, 1))
            {
                if (l_20[(p_18) % 10])
                    break;
                if (p_18)
                    break;
            }
            (**g_728) ^= (*l_29);
            (*g_729) = (0 != l_1171);
        }
        (*g_729) |= (*l_29);
    }
    for (p_17 = (-24); (p_17 != 48); p_17 = safe_add_func_uint8_t_u_u(p_17, 8))
    {
        return g_250[9][0][0].f5;
    }
    if ((func_81(&l_29, (*l_29), g_1177) != func_81(&l_29, func_81((*g_1011), (safe_mod_func_int64_t_s_s(g_250[9][0][0].f5, g_250[9][0][0].f0.f0)), &g_1178), l_1181[3])))
    {
        return p_17;
    }
    else
    {
        (*g_728) = (*g_728);
        return g_669.f2.f0;
    }
}







int32_t * func_36(struct S1 p_37, int32_t *** p_38)
{
    int64_t l_47 = 0x42C8CDAB0B826FBCLL;
    int32_t l_48 = (-1L);
    l_48 = (safe_div_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(0xD9978317L, ((safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s(p_37.f2.f0, l_47)), (p_37.f4 ^ g_23))) == 0xE3970C0FL))) ^ g_25[0]), 0xECL));
    for (p_37.f0.f0 = (-7); (p_37.f0.f0 <= 19); p_37.f0.f0 = safe_add_func_int16_t_s_s(p_37.f0.f0, 3))
    {
        int32_t *l_51 = &l_48;
        (*l_51) = 0x6DAD3F04L;
    }
    return &g_25[0];
}







struct S1 func_52(uint8_t p_53)
{
    g_60 |= (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s((safe_mod_func_int64_t_s_s(4L, g_25[0])), (g_25[0] | g_23))), 0));
    return g_61;
}







int32_t *** func_65(int32_t p_66, int32_t ** p_67)
{
    int32_t *l_68 = &g_69[1];
    int32_t **l_71 = &l_68;
    int32_t ***l_70 = &l_71;
    (*l_68) = g_23;
    return g_72;
}







uint8_t func_81(int32_t ** p_82, int64_t p_83, const int32_t ** const * p_84)
{
    struct S0 l_85 = {0x0CC824F9L,65535U};
    int32_t ** const l_802[2][1] = {{&g_729}, {&g_729}};
    int32_t * const * const l_805 = 0;
    int32_t * const * const * const l_804 = &l_805;
    int32_t l_808 = 0x342A3C59L;
    int32_t l_820 = (-4L);
    int32_t ***l_822 = &g_728;
    int32_t *** const l_828[4][10] = {{&g_728, &g_728, &g_728, &g_728, &g_728, &g_728, &g_728, &g_728, &g_728, &g_728}, {&g_728, &g_728, &g_728, &g_728, &g_728, &g_728, &g_728, &g_728, &g_728, &g_728}, {&g_728, &g_728, &g_728, &g_728, &g_728, &g_728, &g_728, &g_728, &g_728, &g_728}, {&g_728, &g_728, &g_728, &g_728, &g_728, &g_728, &g_728, &g_728, &g_728, &g_728}};
    uint64_t l_879 = 1U;
    uint16_t l_915 = 0U;
    int16_t l_926 = (-3L);
    int32_t * const * const * const l_955[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    struct S1 * const l_957 = &g_669;
    uint8_t l_962 = 0x14L;
    uint32_t l_988 = 0xAE84604BL;
    uint64_t l_1019 = 18446744073709551615U;
    uint32_t l_1079 = 0xECD356CFL;
    struct S0 *l_1082[5][3][5];
    struct S0 **l_1081[8];
    int32_t ***l_1120 = &g_728;
    int16_t l_1135[1][3][10] = {{{0x1856L, 0x32FFL, 0x762FL, 0x32FFL, 0x1856L, 0x32FFL, 0x762FL, 0x32FFL, 0x1856L, 0x32FFL}, {0x1856L, 0x32FFL, 0x762FL, 0x32FFL, 0x1856L, 0x32FFL, 0x762FL, 0x32FFL, 0x1856L, 0x32FFL}, {0x1856L, 0x32FFL, 0x762FL, 0x32FFL, 0x1856L, 0x32FFL, 0x762FL, 0x32FFL, 0x1856L, 0x32FFL}}};
    struct S0 l_1154 = {1L,0xAE8AL};
    struct S0 l_1155[6][3] = {{{-1L,0xE089L}, {-1L,0xE089L}, {-1L,0xE089L}}, {{-1L,0xE089L}, {-1L,0xE089L}, {-1L,0xE089L}}, {{-1L,0xE089L}, {-1L,0xE089L}, {-1L,0xE089L}}, {{-1L,0xE089L}, {-1L,0xE089L}, {-1L,0xE089L}}, {{-1L,0xE089L}, {-1L,0xE089L}, {-1L,0xE089L}}, {{-1L,0xE089L}, {-1L,0xE089L}, {-1L,0xE089L}}};
    uint16_t l_1156 = 0xDEA7L;
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
                l_1082[i][j][k] = &l_85;
        }
    }
    for (i = 0; i < 8; i++)
        l_1081[i] = &l_1082[1][0][2];
    l_85 = l_85;
    return g_61.f0.f0;
}







int32_t func_86(int32_t ** const p_87, int32_t *** p_88, int32_t p_89, int32_t * const * const * const p_90)
{
    int32_t *l_567[5][9][1];
    int32_t **l_566 = &l_567[1][4][0];
    struct S0 *l_620 = &g_91[0];
    struct S0 **l_619 = &l_620;
    uint64_t l_731 = 18446744073709551615U;
    uint32_t l_749 = 0x22DA0A25L;
    struct S1 *l_752[4][9];
    struct S1 **l_751 = &l_752[1][1];
    struct S1 *** const l_750 = &l_751;
    struct S0 l_758 = {0xEFA72679L,0U};
    int8_t l_760 = 0xD8L;
    uint8_t l_773 = 0x9AL;
    int32_t ***l_783 = &l_566;
    int32_t l_800 = 0x0D6D3D5FL;
    uint32_t l_801 = 0x81AFD489L;
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 1; k++)
                l_567[i][j][k] = &g_25[1];
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 9; j++)
            l_752[i][j] = 0;
    }
    for (g_61.f0.f1 = 0; g_61.f0.f1 < 2; g_61.f0.f1 += 1)
    {
        uint32_t l_574 = 4294967295U;
        int32_t **l_575 = &l_567[0][4][0];
        struct S0 l_606 = {0L,2U};
        struct S0 **l_621 = &l_620;
        struct S1 l_767 = {{1L,1U},0xBF21CBE5820331F0LL,{0xC345F059L,0x12A4L},0xADA27B80L,-1L,0x34E1C315L,5L};
        int16_t l_775[2];
        int i;
        for (i = 0; i < 2; i++)
            l_775[i] = 0L;
        (*p_87) = func_36(g_61, func_92(l_566, (((safe_add_func_uint64_t_u_u((g_61.f2.f1 <= g_61.f4), (p_89 != g_69[6]))) <= (p_89 > p_89)) | (safe_mod_func_int32_t_s_s(((g_128[3] > p_89) != (g_60 | p_89)), ((safe_mod_func_uint32_t_u_u(p_89, l_574)) ^ (g_128[3] & (**l_566)))))), 0, p_89, l_575));
lbl_679:
        for (g_60 = 29; (g_60 == (-29)); g_60 = safe_sub_func_int8_t_s_s(g_60, 1))
        {
            int64_t l_582[10] = {1L, 0x8783C2FE79FCE088LL, 1L, 0x8783C2FE79FCE088LL, 1L, 0x8783C2FE79FCE088LL, 1L, 0x8783C2FE79FCE088LL, 1L, 0x8783C2FE79FCE088LL};
            const struct S0 *l_653 = &g_91[(g_61.f0.f1) % 2];
            const struct S0 **l_652 = &l_653;
            struct S1 *l_668 = &g_669;
            int32_t l_671 = 0L;
            int i;
            for (g_472 = (-3); (g_472 <= 43); g_472 = safe_add_func_uint64_t_u_u(g_472, 1))
            {
                struct S1 l_591 = {{0xEF8A137DL,0U},-1L,{-3L,0x1882L},0U,0x9556L,0L,1L};
                int32_t **l_594 = &l_567[4][1][0];
                struct S0 *l_605[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_605[i] = &g_61.f0;
            }
        }
        if ((g_61.f0.f1 >= (safe_sub_func_uint32_t_u_u((g_678[4] < g_69[3]), p_89))))
        {
            if (g_23)
                goto lbl_679;
            return (**l_566);
        }
        else
        {
            struct S1 *l_690[5];
            struct S1 **l_689 = &l_690[1];
            int32_t **l_693 = &l_567[0][8][0];
            int32_t **l_738 = &l_567[1][4][0];
            int32_t l_774 = 0L;
            int i;
            for (i = 0; i < 5; i++)
                l_690[i] = &g_669;
            (*p_87) = (*l_575);
            for (g_61.f4 = (-1); (g_61.f4 != (-26)); g_61.f4 = safe_sub_func_uint64_t_u_u(g_61.f4, 1))
            {
                int8_t l_684 = 0xB4L;
                int32_t l_705 = 1L;
                uint32_t l_759 = 0x904C255BL;
                for (g_23 = 0; (g_23 == 12); g_23 = safe_add_func_uint64_t_u_u(g_23, 1))
                {
                    return (**l_575);
                }
                if (l_684)
                    break;
                for (g_61.f0.f0 = 0; (g_61.f0.f0 < (-25)); g_61.f0.f0 = safe_sub_func_uint32_t_u_u(g_61.f0.f0, 1))
                {
                    int16_t l_691 = 0xCC97L;
                    struct S1 l_692 = {{-4L,1U},0x0AAC9F0B6112C0FDLL,{0xC1D0C884L,1U},0xD3E487BEL,-7L,1L,0x71L};
                    int32_t *l_694 = &g_91[(g_61.f0.f1) % 2].f0;
                    p_89 ^= (g_25[0] | g_250[9][0][0].f2.f1);
                    g_669.f0.f0 |= ((**l_575) >= (safe_div_func_uint16_t_u_u((l_689 != &l_690[2]), l_691)));
                    l_694 = func_36(l_692, func_92((*p_88), g_61.f3, l_693, p_89, (*p_88)));
                }
                if (p_89)
                {
                    int32_t **l_697 = &l_567[1][4][0];
                    struct S0 l_714 = {0x4344B854L,0x0651L};
                    for (g_23 = 13; (g_23 != 10); g_23 = safe_sub_func_uint64_t_u_u(g_23, 2))
                    {
                        (*l_693) = func_36(func_52(g_472), func_92(l_697, p_89, &l_567[1][3][0], (safe_unary_minus_func_uint64_t_u(0x784784100FC00DB7LL)), (*p_88)));
                        (*l_697) = func_36(func_52((safe_mul_func_int16_t_s_s(((((**l_575) == p_89) < (+g_128[3])) > p_89), p_89))), p_88);
                        l_705 &= (safe_div_func_int32_t_s_s((&g_456 != &g_456), (+(safe_rshift_func_uint16_t_u_s(((g_250[9][0][0].f0.f0 | l_684) == p_89), (**l_693))))));
                    }
                    if (((**l_697) || 0x38944EB55DE1E9BALL))
                    {
                        int32_t *l_713[5][7][1];
                        const struct S0 l_730 = {0L,1U};
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 7; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_713[i][j][k] = &g_510.f0;
                            }
                        }
                        (**l_621) = func_106(p_89, l_714, func_106((safe_div_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((safe_div_func_uint32_t_u_u(p_89, (**l_693))), (p_89 ^ g_678[6]))) < ((safe_lshift_func_int8_t_s_u(g_678[4], p_89)) > 0x8EBCL)), 4L)), l_714, l_730));
                        l_731 |= (**l_697);
                        l_749 ^= (safe_sub_func_uint8_t_u_u((((0x82L & g_441[0][2][0].f0) & (safe_add_func_int16_t_s_s(((*l_575) != (*p_87)), ((safe_mod_func_int16_t_s_s((**l_575), l_684)) & g_250[9][0][0].f2.f0)))) | ((0 == l_738) >= (safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((**l_566) != p_89), (!(**l_575)))), ((g_678[4] <= p_89) >= ((*g_729) & (**l_575))))))), (p_89 && ((safe_rshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((**l_575), g_472)), (~g_250[9][0][0].f6))), 2)) && g_250[9][0][0].f1))));
                    }
                    else
                    {
                        (**g_728) = (g_69[7] > (l_750 == g_753));
                        (*l_738) = func_36(func_52((**l_697)), p_88);
                    }
                    (**l_621) = func_106(g_250[9][0][0].f2.f0, l_714, func_106((**l_738), func_106((+l_705), l_758, (**l_621)), func_106((safe_div_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((g_250[9][0][0].f5 == g_60), g_69[1])), (0x9D64EF08L | (safe_add_func_uint64_t_u_u((**l_738), p_89))))), (**l_621), (**l_621))));
                    (*l_566) = func_36(l_767, &l_693);
                }
                else
                {
                    uint8_t l_770 = 0xA1L;
                    (**g_728) = (((((safe_mod_func_uint64_t_u_u(g_61.f1, (l_770 | p_89))) || p_89) == g_250[9][0][0].f2.f1) != ((safe_div_func_uint32_t_u_u((g_669.f3 || (g_61.f2.f1 & p_89)), p_89)) ^ p_89)) >= 0x7473026D93EAC41CLL);
                    if (l_684)
                        continue;
                    for (g_61.f3 = 0; g_61.f3 < 10; g_61.f3 += 1)
                    {
                        g_128[g_61.f3] = 0x1AAB0A90L;
                    }
                    (*g_729) = (**l_575);
                }
            }
            l_774 &= l_773;
            l_775[1] = (**l_738);
        }
        (*l_620) = func_106(0xBB6D65A1796FCEE5LL, func_106((**l_566), func_106(g_518.f1, func_106((safe_rshift_func_uint16_t_u_s(((**l_575) | g_518.f0), 8)), g_91[(g_61.f0.f1) % 2], (**l_619)), func_106((&l_567[0][6][0] != l_575), (**l_621), (*l_620))), func_106(0x4E32670A8FE62EA5LL, (*l_620), (*l_620))), func_106((**l_575), func_106(18446744073709551607U, func_106(((safe_div_func_uint32_t_u_u(p_89, (*g_729))) | 0x8634L), (**l_621), g_91[(g_61.f0.f1) % 2]), (*l_620)), (**l_621)));
    }
    (**g_728) = (p_89 || ((safe_lshift_func_int8_t_s_s(p_89, 0)) == g_250[9][0][0].f2.f0));
    (*l_750) = (*l_750);
    l_800 &= (safe_sub_func_uint32_t_u_u((((safe_add_func_uint16_t_u_u(0xBC74L, (g_669.f0.f1 <= (g_669.f1 > g_61.f0.f0)))) && ((+((***l_783) ^ (**g_728))) != (safe_sub_func_int64_t_s_s((safe_add_func_int8_t_s_s((**l_566), p_89)), p_89)))) || p_89), ((safe_add_func_uint8_t_u_u(g_61.f0.f1, (~((p_89 == p_89) || ((**l_566) | p_89))))) >= ((safe_add_func_int32_t_s_s((+(**g_728)), ((p_89 & g_506) <= g_669.f0.f1))) || (**l_566)))));
    return l_801;
}







int32_t *** func_92(int32_t ** p_93, uint32_t p_94, int32_t ** p_95, uint32_t p_96, int32_t ** p_97)
{
    const int32_t l_558[6][5] = {{(-1L), (-1L), (-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L), (-1L), (-1L)}};
    int32_t *l_563 = 0;
    int32_t **l_562 = &l_563;
    int32_t *** const l_561 = &l_562;
    struct S1 l_564 = {{6L,0xF264L},0xBBC5FF2AC0B9D952LL,{0x03F2F67CL,0x41B1L},7U,0x573EL,-3L,0x8FL};
    struct S0 *l_565 = &g_510;
    int i, j;
    (*l_565) = l_564.f2;
    return g_72;
}







struct S0 func_98(struct S1 p_99, uint32_t p_100, int32_t *** const p_101, int32_t * p_102)
{
    uint32_t l_431 = 0x8532303FL;
    const struct S0 l_433 = {0L,7U};
    int64_t l_447 = 0xA7702F78FB5F7BA5LL;
    struct S1 **l_471 = 0;
    int32_t l_477 = 0x1F482347L;
    const struct S0 l_508 = {0x44ED671CL,1U};
    struct S1 * const l_520 = 0;
    int32_t *l_537[9];
    int32_t **l_536[6][8];
    int32_t ***l_535 = &l_536[4][7];
    struct S0 *l_544 = &g_61.f0;
    struct S0 **l_543 = &l_544;
    struct S0 l_549 = {0xF6A5CFFBL,65535U};
    int i, j;
    for (i = 0; i < 9; i++)
        l_537[i] = &g_25[0];
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
            l_536[i][j] = &l_537[6];
    }
    for (p_99.f4 = 0; (p_99.f4 != 6); p_99.f4 = safe_add_func_uint16_t_u_u(p_99.f4, 5))
    {
        const uint16_t l_105 = 0x5BD2L;
        struct S0 l_440 = {-1L,65535U};
        struct S1 * const l_454 = 0;
        struct S1 * const *l_453 = &l_454;
        struct S0 l_467 = {1L,0U};
        struct S1 *l_534[4];
        struct S1 **l_533 = &l_534[2];
        struct S0 *l_538 = &g_250[9][0][0].f0;
        int i;
        for (i = 0; i < 4; i++)
            l_534[i] = &g_61;
    }
    g_539 = 0;
    (*p_102) ^= (safe_rshift_func_uint8_t_u_s(((((l_543 == g_179[4]) & p_99.f2.f0) == ((safe_div_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(g_441[0][2][0].f1, g_510.f0)), (*p_102))) | g_250[9][0][0].f2.f1)) <= (*p_102)), 4));
    return l_549;
}







struct S0 func_106(uint64_t p_107, struct S0 p_108, const struct S0 p_109)
{
    int32_t *l_112 = &g_25[1];
    const int32_t *l_188[7][10][1];
    const int32_t **l_187 = &l_188[3][8][0];
    const int32_t *** const l_186[1] = {&l_187};
    struct S0 *l_196[10];
    struct S0 **l_195 = &l_196[4];
    struct S0 *l_201[5][2][2];
    int32_t **l_305 = &l_112;
    int32_t ***l_304 = &l_305;
    struct S1 l_309[8][4] = {{{{0x586F34C1L,65535U},0x454A17C66CCFA5AELL,{3L,65535U},0xB3495F28L,0x6864L,0x590541D0L,0x2FL}, {{0x586F34C1L,65535U},0x454A17C66CCFA5AELL,{3L,65535U},0xB3495F28L,0x6864L,0x590541D0L,0x2FL}, {{0x586F34C1L,65535U},0x454A17C66CCFA5AELL,{3L,65535U},0xB3495F28L,0x6864L,0x590541D0L,0x2FL}, {{0x586F34C1L,65535U},0x454A17C66CCFA5AELL,{3L,65535U},0xB3495F28L,0x6864L,0x590541D0L,0x2FL}}, {{{0x586F34C1L,65535U},0x454A17C66CCFA5AELL,{3L,65535U},0xB3495F28L,0x6864L,0x590541D0L,0x2FL}, {{0x586F34C1L,65535U},0x454A17C66CCFA5AELL,{3L,65535U},0xB3495F28L,0x6864L,0x590541D0L,0x2FL}, {{0x586F34C1L,65535U},0x454A17C66CCFA5AELL,{3L,65535U},0xB3495F28L,0x6864L,0x590541D0L,0x2FL}, {{0x586F34C1L,65535U},0x454A17C66CCFA5AELL,{3L,65535U},0xB3495F28L,0x6864L,0x590541D0L,0x2FL}}, {{{0x586F34C1L,65535U},0x454A17C66CCFA5AELL,{3L,65535U},0xB3495F28L,0x6864L,0x590541D0L,0x2FL}, {{0x586F34C1L,65535U},0x454A17C66CCFA5AELL,{3L,65535U},0xB3495F28L,0x6864L,0x590541D0L,0x2FL}, {{0x586F34C1L,65535U},0x454A17C66CCFA5AELL,{3L,65535U},0xB3495F28L,0x6864L,0x590541D0L,0x2FL}, {{0x586F34C1L,65535U},0x454A17C66CCFA5AELL,{3L,65535U},0xB3495F28L,0x6864L,0x590541D0L,0x2FL}}, {{{0x586F34C1L,65535U},0x454A17C66CCFA5AELL,{3L,65535U},0xB3495F28L,0x6864L,0x590541D0L,0x2FL}, {{0x586F34C1L,65535U},0x454A17C66CCFA5AELL,{3L,65535U},0xB3495F28L,0x6864L,0x590541D0L,0x2FL}, {{0x586F34C1L,65535U},0x454A17C66CCFA5AELL,{3L,65535U},0xB3495F28L,0x6864L,0x590541D0L,0x2FL}, {{0x586F34C1L,65535U},0x454A17C66CCFA5AELL,{3L,65535U},0xB3495F28L,0x6864L,0x590541D0L,0x2FL}}, {{{0x586F34C1L,65535U},0x454A17C66CCFA5AELL,{3L,65535U},0xB3495F28L,0x6864L,0x590541D0L,0x2FL}, {{0x586F34C1L,65535U},0x454A17C66CCFA5AELL,{3L,65535U},0xB3495F28L,0x6864L,0x590541D0L,0x2FL}, {{0x586F34C1L,65535U},0x454A17C66CCFA5AELL,{3L,65535U},0xB3495F28L,0x6864L,0x590541D0L,0x2FL}, {{0x586F34C1L,65535U},0x454A17C66CCFA5AELL,{3L,65535U},0xB3495F28L,0x6864L,0x590541D0L,0x2FL}}, {{{0x586F34C1L,65535U},0x454A17C66CCFA5AELL,{3L,65535U},0xB3495F28L,0x6864L,0x590541D0L,0x2FL}, {{0x586F34C1L,65535U},0x454A17C66CCFA5AELL,{3L,65535U},0xB3495F28L,0x6864L,0x590541D0L,0x2FL}, {{0x586F34C1L,65535U},0x454A17C66CCFA5AELL,{3L,65535U},0xB3495F28L,0x6864L,0x590541D0L,0x2FL}, {{0x586F34C1L,65535U},0x454A17C66CCFA5AELL,{3L,65535U},0xB3495F28L,0x6864L,0x590541D0L,0x2FL}}, {{{0x586F34C1L,65535U},0x454A17C66CCFA5AELL,{3L,65535U},0xB3495F28L,0x6864L,0x590541D0L,0x2FL}, {{0x586F34C1L,65535U},0x454A17C66CCFA5AELL,{3L,65535U},0xB3495F28L,0x6864L,0x590541D0L,0x2FL}, {{0x586F34C1L,65535U},0x454A17C66CCFA5AELL,{3L,65535U},0xB3495F28L,0x6864L,0x590541D0L,0x2FL}, {{0x586F34C1L,65535U},0x454A17C66CCFA5AELL,{3L,65535U},0xB3495F28L,0x6864L,0x590541D0L,0x2FL}}, {{{0x586F34C1L,65535U},0x454A17C66CCFA5AELL,{3L,65535U},0xB3495F28L,0x6864L,0x590541D0L,0x2FL}, {{0x586F34C1L,65535U},0x454A17C66CCFA5AELL,{3L,65535U},0xB3495F28L,0x6864L,0x590541D0L,0x2FL}, {{0x586F34C1L,65535U},0x454A17C66CCFA5AELL,{3L,65535U},0xB3495F28L,0x6864L,0x590541D0L,0x2FL}, {{0x586F34C1L,65535U},0x454A17C66CCFA5AELL,{3L,65535U},0xB3495F28L,0x6864L,0x590541D0L,0x2FL}}};
    int32_t l_414 = 0x2055AE60L;
    uint8_t l_417 = 0x56L;
    int i, j, k;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 1; k++)
                l_188[i][j][k] = &g_61.f5;
        }
    }
    for (i = 0; i < 10; i++)
        l_196[i] = &g_61.f0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
                l_201[i][j][k] = &g_61.f0;
        }
    }
    return p_109;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_25[i], "g_25[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_61.f0.f0, "g_61.f0.f0", print_hash_value);
    transparent_crc(g_61.f0.f1, "g_61.f0.f1", print_hash_value);
    transparent_crc(g_61.f1, "g_61.f1", print_hash_value);
    transparent_crc(g_61.f2.f0, "g_61.f2.f0", print_hash_value);
    transparent_crc(g_61.f2.f1, "g_61.f2.f1", print_hash_value);
    transparent_crc(g_61.f3, "g_61.f3", print_hash_value);
    transparent_crc(g_61.f4, "g_61.f4", print_hash_value);
    transparent_crc(g_61.f5, "g_61.f5", print_hash_value);
    transparent_crc(g_61.f6, "g_61.f6", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_69[i], "g_69[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_91[i].f0, "g_91[i].f0", print_hash_value);
        transparent_crc(g_91[i].f1, "g_91[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_128[i], "g_128[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_250[i][j][k].f0.f0, "g_250[i][j][k].f0.f0", print_hash_value);
                transparent_crc(g_250[i][j][k].f0.f1, "g_250[i][j][k].f0.f1", print_hash_value);
                transparent_crc(g_250[i][j][k].f1, "g_250[i][j][k].f1", print_hash_value);
                transparent_crc(g_250[i][j][k].f2.f0, "g_250[i][j][k].f2.f0", print_hash_value);
                transparent_crc(g_250[i][j][k].f2.f1, "g_250[i][j][k].f2.f1", print_hash_value);
                transparent_crc(g_250[i][j][k].f3, "g_250[i][j][k].f3", print_hash_value);
                transparent_crc(g_250[i][j][k].f4, "g_250[i][j][k].f4", print_hash_value);
                transparent_crc(g_250[i][j][k].f5, "g_250[i][j][k].f5", print_hash_value);
                transparent_crc(g_250[i][j][k].f6, "g_250[i][j][k].f6", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_441[i][j][k].f0, "g_441[i][j][k].f0", print_hash_value);
                transparent_crc(g_441[i][j][k].f1, "g_441[i][j][k].f1", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_442[i], "g_442[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_457.f0.f0, "g_457.f0.f0", print_hash_value);
    transparent_crc(g_457.f0.f1, "g_457.f0.f1", print_hash_value);
    transparent_crc(g_457.f1, "g_457.f1", print_hash_value);
    transparent_crc(g_457.f2.f0, "g_457.f2.f0", print_hash_value);
    transparent_crc(g_457.f2.f1, "g_457.f2.f1", print_hash_value);
    transparent_crc(g_457.f3, "g_457.f3", print_hash_value);
    transparent_crc(g_457.f4, "g_457.f4", print_hash_value);
    transparent_crc(g_457.f5, "g_457.f5", print_hash_value);
    transparent_crc(g_457.f6, "g_457.f6", print_hash_value);
    transparent_crc(g_472, "g_472", print_hash_value);
    transparent_crc(g_506, "g_506", print_hash_value);
    transparent_crc(g_510.f0, "g_510.f0", print_hash_value);
    transparent_crc(g_510.f1, "g_510.f1", print_hash_value);
    transparent_crc(g_518.f0, "g_518.f0", print_hash_value);
    transparent_crc(g_518.f1, "g_518.f1", print_hash_value);
    transparent_crc(g_540, "g_540", print_hash_value);
    transparent_crc(g_669.f0.f0, "g_669.f0.f0", print_hash_value);
    transparent_crc(g_669.f0.f1, "g_669.f0.f1", print_hash_value);
    transparent_crc(g_669.f1, "g_669.f1", print_hash_value);
    transparent_crc(g_669.f2.f0, "g_669.f2.f0", print_hash_value);
    transparent_crc(g_669.f2.f1, "g_669.f2.f1", print_hash_value);
    transparent_crc(g_669.f3, "g_669.f3", print_hash_value);
    transparent_crc(g_669.f4, "g_669.f4", print_hash_value);
    transparent_crc(g_669.f5, "g_669.f5", print_hash_value);
    transparent_crc(g_669.f6, "g_669.f6", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_678[i], "g_678[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_780, "g_780", print_hash_value);
    transparent_crc(g_874, "g_874", print_hash_value);
    transparent_crc(g_875, "g_875", print_hash_value);
    transparent_crc(g_878, "g_878", print_hash_value);
    transparent_crc(g_991, "g_991", print_hash_value);
    transparent_crc(g_1258, "g_1258", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1273[i][j], "g_1273[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1297, "g_1297", print_hash_value);
    transparent_crc(g_1350.f0.f0, "g_1350.f0.f0", print_hash_value);
    transparent_crc(g_1350.f0.f1, "g_1350.f0.f1", print_hash_value);
    transparent_crc(g_1350.f1, "g_1350.f1", print_hash_value);
    transparent_crc(g_1350.f2.f0, "g_1350.f2.f0", print_hash_value);
    transparent_crc(g_1350.f2.f1, "g_1350.f2.f1", print_hash_value);
    transparent_crc(g_1350.f3, "g_1350.f3", print_hash_value);
    transparent_crc(g_1350.f4, "g_1350.f4", print_hash_value);
    transparent_crc(g_1350.f5, "g_1350.f5", print_hash_value);
    transparent_crc(g_1350.f6, "g_1350.f6", print_hash_value);
    transparent_crc(g_1366, "g_1366", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL);
    return 0;
}
