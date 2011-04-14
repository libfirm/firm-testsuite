# 1 "found/test0013.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "found/test0013.c"
# 10 "found/test0013.c"
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
# 11 "found/test0013.c" 2


long __undefined;


struct S0 {
   int16_t f0;
};


int32_t g_2 = 0xC05BAF43L;
volatile int32_t g_6 = 9L;
int32_t g_7[9] = {0xC5534BF8L, (-5L), 0xC5534BF8L, (-5L), 0xC5534BF8L, (-5L), 0xC5534BF8L, (-5L), 0xC5534BF8L};
int32_t * volatile g_15 = &g_2;
struct S0 g_26 = {0L};
struct S0 * volatile g_25 = &g_26;
int32_t *g_37 = &g_2;
int32_t * const *g_36 = &g_37;
int32_t * const ** volatile g_35[10][7] = {{&g_36, &g_36, &g_36, &g_36, &g_36, &g_36, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, &g_36, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, &g_36, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, &g_36, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, &g_36, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, &g_36, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, &g_36, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, &g_36, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, &g_36, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, &g_36, &g_36}};
int32_t * const ** volatile g_38 = &g_36;
int32_t ** const volatile g_77 = &g_37;
struct S0 * const g_156 = &g_26;
struct S0 * const *g_155[7] = {&g_156, &g_156, &g_156, &g_156, &g_156, &g_156, &g_156};
int16_t g_184 = (-6L);
uint32_t g_192 = 0x73F8B2FEL;
struct S0 g_439 = {7L};
struct S0 *g_438 = &g_439;
uint32_t g_493 = 1U;
int64_t g_598 = 1L;
uint16_t g_689 = 0x6193L;
uint32_t g_818 = 0U;
uint8_t g_895 = 5U;
int16_t g_932 = (-6L);
volatile int32_t *g_948 = 0;
uint16_t g_1019 = 0xB976L;
struct S0 ** const volatile g_1044 = &g_438;
int16_t g_1062[6][9][1] = {{{(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}}, {{(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}}, {{(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}}, {{(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}}, {{(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}}, {{(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}}};
int16_t g_1155 = (-8L);
struct S0 ** volatile g_1157 = &g_438;
int32_t g_1180[5] = {0L, 0xCA7F2CC0L, 0L, 0xCA7F2CC0L, 0L};
int32_t **g_1256 = &g_37;
int32_t *** volatile g_1255[3][9] = {{&g_1256, &g_1256, &g_1256, &g_1256, &g_1256, &g_1256, &g_1256, &g_1256, &g_1256}, {&g_1256, &g_1256, &g_1256, &g_1256, &g_1256, &g_1256, &g_1256, &g_1256, &g_1256}, {&g_1256, &g_1256, &g_1256, &g_1256, &g_1256, &g_1256, &g_1256, &g_1256, &g_1256}};
struct S0 *g_1299 = 0;
int32_t g_1335 = (-1L);
struct S0 g_1368 = {5L};
int32_t g_1407 = 0x0D527202L;
struct S0 g_1476 = {0xF910L};
const uint8_t g_1496 = 0xCFL;
int32_t g_1535 = 1L;
uint32_t g_1591[9][4] = {{1U, 1U, 0U, 1U}, {1U, 1U, 0U, 1U}, {1U, 1U, 0U, 1U}, {1U, 1U, 0U, 1U}, {1U, 1U, 0U, 1U}, {1U, 1U, 0U, 1U}, {1U, 1U, 0U, 1U}, {1U, 1U, 0U, 1U}, {1U, 1U, 0U, 1U}};
int16_t g_1611 = 0L;
int16_t g_1613 = (-7L);
int32_t *g_1628 = &g_1335;
int32_t g_1678 = 2L;
int32_t g_1723 = 0x62751099L;



int64_t func_1(void);
int64_t func_20(int32_t * p_21, int32_t p_22, int32_t * p_23);
int8_t func_29(uint16_t p_30, struct S0 * p_31);
int32_t * func_49(int32_t * p_50, int64_t p_51, int8_t p_52, struct S0 * p_53, uint32_t p_54);
int32_t func_82(uint16_t p_83, const uint32_t p_84, int32_t p_85);
struct S0 * func_95(int32_t ** p_96);
struct S0 func_97(struct S0 p_98, int64_t p_99);
struct S0 func_102(int32_t * p_103, struct S0 * p_104, struct S0 p_105, int32_t * p_106, struct S0 p_107);
int32_t func_113(struct S0 * p_114, int32_t * const p_115, int32_t p_116);
uint16_t func_127(int8_t p_128, int32_t * p_129, int32_t * const ** p_130, struct S0 * p_131);
# 87 "found/test0013.c"
int64_t func_1(void)
{
    int32_t l_5[5][1];
    struct S0 *l_1360 = &g_439;
    int32_t l_1383 = 0x940DC29CL;
    int8_t l_1384 = 0x7EL;
    const uint32_t l_1433 = 1U;
    struct S0 l_1477 = {0xA007L};
    int32_t *l_1507 = &g_1180[1];
    int64_t l_1523 = 0L;
    int32_t * const **l_1536 = &g_36;
    int32_t *l_1558 = &g_1407;
    int32_t *l_1599 = &l_1383;
    int16_t l_1682[7] = {(-2L), (-2L), 1L, (-2L), (-2L), (-2L), (-2L)};
    int32_t *l_1757 = &g_1723;
    struct S0 ** const l_1797[10][2][1] = {{{0}, {0}}, {{0}, {0}}, {{0}, {0}}, {{0}, {0}}, {{0}, {0}}, {{0}, {0}}, {{0}, {0}}, {{0}, {0}}, {{0}, {0}}, {{0}, {0}}};
    struct S0 ** const *l_1796 = &l_1797[1][0][0];
    int32_t l_1802 = 0x5E8526FFL;
    int32_t l_1803 = 0xE218B3D6L;
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_5[i][j] = 0x4074DD03L;
    }
    for (g_2 = (-26); (g_2 == (-7)); g_2 = safe_add_func_int32_t_s_s(g_2, 3))
    {
        struct S0 *l_1365[8][2][5];
        struct S0 l_1366[4][7][1] = {{{{0xF0E9L}}, {{0xF0E9L}}, {{0xF0E9L}}, {{0xF0E9L}}, {{0xF0E9L}}, {{0xF0E9L}}, {{0xF0E9L}}}, {{{0xF0E9L}}, {{0xF0E9L}}, {{0xF0E9L}}, {{0xF0E9L}}, {{0xF0E9L}}, {{0xF0E9L}}, {{0xF0E9L}}}, {{{0xF0E9L}}, {{0xF0E9L}}, {{0xF0E9L}}, {{0xF0E9L}}, {{0xF0E9L}}, {{0xF0E9L}}, {{0xF0E9L}}}, {{{0xF0E9L}}, {{0xF0E9L}}, {{0xF0E9L}}, {{0xF0E9L}}, {{0xF0E9L}}, {{0xF0E9L}}, {{0xF0E9L}}}};
        int32_t *l_1372 = &g_1180[3];
        int32_t l_1478 = 0L;
        int32_t ***l_1505[10];
        int32_t **l_1524 = &l_1372;
        const int32_t * const **l_1532 = 0;
        int32_t *l_1537 = &g_1407;
        int8_t l_1541 = (-5L);
        struct S0 l_1543 = {-8L};
        int32_t *l_1544 = &g_7[3];
        struct S0 l_1545[3] = {{0xBF00L}, {0xBF00L}, {0xBF00L}};
        struct S0 l_1590[7][8] = {{{0x2FF4L}, {0x2FF4L}, {0x2FF4L}, {0x2FF4L}, {0x2FF4L}, {0x2FF4L}, {0x2FF4L}, {0x2FF4L}}, {{0x2FF4L}, {0x2FF4L}, {0x2FF4L}, {0x2FF4L}, {0x2FF4L}, {0x2FF4L}, {0x2FF4L}, {0x2FF4L}}, {{0x2FF4L}, {0x2FF4L}, {0x2FF4L}, {0x2FF4L}, {0x2FF4L}, {0x2FF4L}, {0x2FF4L}, {0x2FF4L}}, {{0x2FF4L}, {0x2FF4L}, {0x2FF4L}, {0x2FF4L}, {0x2FF4L}, {0x2FF4L}, {0x2FF4L}, {0x2FF4L}}, {{0x2FF4L}, {0x2FF4L}, {0x2FF4L}, {0x2FF4L}, {0x2FF4L}, {0x2FF4L}, {0x2FF4L}, {0x2FF4L}}, {{0x2FF4L}, {0x2FF4L}, {0x2FF4L}, {0x2FF4L}, {0x2FF4L}, {0x2FF4L}, {0x2FF4L}, {0x2FF4L}}, {{0x2FF4L}, {0x2FF4L}, {0x2FF4L}, {0x2FF4L}, {0x2FF4L}, {0x2FF4L}, {0x2FF4L}, {0x2FF4L}}};
        int64_t l_1596 = 0x8E02F1A1B3F36EEDLL;
        uint32_t l_1612[1][10][10] = {{{4294967295U, 0xB7D257B4L, 0x56E80F64L, 0x56E80F64L, 0xB7D257B4L, 4294967295U, 0xB7D257B4L, 0x56E80F64L, 0x56E80F64L, 0xB7D257B4L}, {4294967295U, 0xB7D257B4L, 0x56E80F64L, 0x56E80F64L, 0xB7D257B4L, 4294967295U, 0xB7D257B4L, 0x56E80F64L, 0x56E80F64L, 0xB7D257B4L}, {4294967295U, 0xB7D257B4L, 0x56E80F64L, 0x56E80F64L, 0xB7D257B4L, 4294967295U, 0xB7D257B4L, 0x56E80F64L, 0x56E80F64L, 0xB7D257B4L}, {4294967295U, 0xB7D257B4L, 0x56E80F64L, 0x56E80F64L, 0xB7D257B4L, 4294967295U, 0xB7D257B4L, 0x56E80F64L, 0x56E80F64L, 0xB7D257B4L}, {4294967295U, 0xB7D257B4L, 0x56E80F64L, 0x56E80F64L, 0xB7D257B4L, 4294967295U, 0xB7D257B4L, 0x56E80F64L, 0x56E80F64L, 0xB7D257B4L}, {4294967295U, 0xB7D257B4L, 0x56E80F64L, 0x56E80F64L, 0xB7D257B4L, 4294967295U, 0xB7D257B4L, 0x56E80F64L, 0x56E80F64L, 0xB7D257B4L}, {4294967295U, 0xB7D257B4L, 0x56E80F64L, 0x56E80F64L, 0xB7D257B4L, 4294967295U, 0xB7D257B4L, 0x56E80F64L, 0x56E80F64L, 0xB7D257B4L}, {4294967295U, 0xB7D257B4L, 0x56E80F64L, 0x56E80F64L, 0xB7D257B4L, 4294967295U, 0xB7D257B4L, 0x56E80F64L, 0x56E80F64L, 0xB7D257B4L}, {4294967295U, 0xB7D257B4L, 0x56E80F64L, 0x56E80F64L, 0xB7D257B4L, 4294967295U, 0xB7D257B4L, 0x56E80F64L, 0x56E80F64L, 0xB7D257B4L}, {4294967295U, 0xB7D257B4L, 0x56E80F64L, 0x56E80F64L, 0xB7D257B4L, 4294967295U, 0xB7D257B4L, 0x56E80F64L, 0x56E80F64L, 0xB7D257B4L}}};
        int32_t *l_1701 = &g_1335;
        const int8_t l_1705[5] = {1L, 1L, 1L, 1L, 1L};
        struct S0 l_1714 = {1L};
        int i, j, k;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 5; k++)
                    l_1365[i][j][k] = &g_439;
            }
        }
        for (i = 0; i < 10; i++)
            l_1505[i] = &g_1256;
    }
    for (g_818 = 0; (g_818 == 59); g_818 = safe_add_func_int8_t_s_s(g_818, 1))
    {
        int32_t * const l_1738 = &g_1335;
        uint64_t l_1742 = 0x5519E7FA01F13136LL;
        uint32_t l_1755[5] = {0x53AD6978L, 0x53AD6978L, 0x54610B84L, 0x53AD6978L, 0x53AD6978L};
        struct S0 *l_1773 = &g_439;
        int16_t l_1795[3] = {(-5L), (-1L), (-5L)};
        int i;
    }
    (*l_1757) = ((((0 != l_1796) || (*l_1558)) == ((0 == (*g_1157)) ^ (safe_mod_func_int8_t_s_s(0xD3L, 0x67L)))) > (safe_add_func_uint32_t_u_u(((((g_1591[1][0] & l_1802) > (*l_1558)) >= (g_1613 | g_1591[1][0])) > (~(*l_1507))), l_1803)));
    return g_1019;
}







int64_t func_20(int32_t * p_21, int32_t p_22, int32_t * p_23)
{
    struct S0 l_24 = {0x3BA6L};
    struct S0 *l_39 = 0;
    int32_t *l_73 = &g_7[1];
    struct S0 * const l_1231 = &l_24;
    struct S0 *l_1303 = &g_26;
    uint64_t l_1323 = 7U;
    int32_t *l_1334[9][3];
    int32_t *l_1346 = &g_7[8];
    int i, j;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
            l_1334[i][j] = &g_1335;
    }
    (*g_25) = l_24;
    if (((((!l_24.f0) ^ (safe_mul_func_uint8_t_u_u(246U, (&l_24 == 0)))) & (l_24.f0 ^ ((~func_29(g_7[3], l_39)) != 0x72L))) == (*g_37)))
    {
        int32_t *l_68 = &g_7[8];
        int32_t **l_1254 = &l_73;
        struct S0 l_1262 = {-5L};
        int i, j;
        for (p_22 = (-17); (p_22 == 6); p_22 = safe_add_func_uint32_t_u_u(p_22, 3))
        {
            int32_t l_48 = 0x66798564L;
            int32_t *l_76[8][9];
            int i, j;
            for (i = 0; i < 8; i++)
            {
                for (j = 0; j < 9; j++)
                    l_76[i][j] = &g_7[5];
            }
            (*g_37) = (safe_rshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s(p_22, (safe_sub_func_uint32_t_u_u(g_6, (~((l_24.f0 ^ l_24.f0) < (p_22 < l_24.f0))))))), 6));
            if (l_48)
                break;
            if ((*g_37))
                continue;
            l_76[4][2] = func_49(l_68, (safe_div_func_int64_t_s_s((safe_mul_func_int16_t_s_s(g_7[3], ((l_73 == &p_22) == g_2))), (safe_mod_func_int8_t_s_s(p_22, g_26.f0)))), g_7[1], &g_26, p_22);
        }
        (*g_77) = l_68;
        for (g_26.f0 = 0; (g_26.f0 <= (-20)); g_26.f0 = safe_sub_func_int64_t_s_s(g_26.f0, 1))
        {
            int32_t *l_1219[8];
            struct S0 *l_1230 = 0;
            int32_t **l_1261 = &l_1219[2];
            int32_t * const *l_1267[6];
            struct S0 l_1268 = {4L};
            int16_t l_1285 = 0L;
            int i;
            for (i = 0; i < 8; i++)
                l_1219[i] = 0;
            for (i = 0; i < 6; i++)
                l_1267[i] = &l_1219[4];
            for (l_24.f0 = 0; (l_24.f0 < 23); l_24.f0 = safe_add_func_uint16_t_u_u(l_24.f0, 3))
            {
                uint32_t l_1218 = 1U;
                if ((*g_37))
                {
                    const uint16_t l_1222 = 1U;
                    int32_t *l_1225[10];
                    int i;
                    for (i = 0; i < 10; i++)
                        l_1225[i] = &g_7[2];
                    (*g_77) = l_1225[1];
                }
                else
                {
                    struct S0 **l_1245 = &l_39;
                    int i, j, k;
                    for (g_184 = 0; g_184 < 6; g_184 += 1)
                    {
                        for (g_1019 = 1; g_1019 < 9; g_1019 += 1)
                        {
                            for (g_598 = 0; g_598 < 1; g_598 += 1)
                            {
                                int32_t * const **l_1238 = &g_36;
                                struct S0 **l_1246 = 0;
                                (*p_21) = ((safe_add_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(p_22, ((*p_23) == (g_1019 || (l_1230 == l_1231))))), g_1062[(uint16_t)(g_184) % 6][(g_1019) % 9][(uint64_t)(g_598) % 1])) && ((*l_68) != (safe_div_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(1U, 9)), (safe_add_func_int16_t_s_s(p_22, (*l_73)))))));
                                (*l_68) &= (*g_15);
                                (*p_21) &= (safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(p_22, (!(safe_add_func_uint32_t_u_u((0x03L | (g_1062[(uint16_t)(g_184) % 6][(g_1019) % 9][(uint64_t)(g_598) % 1] <= (*l_73))), ((l_1245 != l_1246) > g_689)))))), 1U));
                            }
                        }
                    }
                    for (g_493 = 29; (g_493 >= 52); g_493 = safe_add_func_uint16_t_u_u(g_493, 1))
                    {
                        const int32_t l_1249[5] = {0xAE30756EL, 0xAE30756EL, (-1L), 0xAE30756EL, 0xAE30756EL};
                        int32_t **l_1251 = &l_73;
                        int32_t ***l_1250 = &l_1251;
                        int i;
                        (*p_23) = l_1218;
                        (*l_1250) = &l_1219[4];
                        return g_1062[4][2][0];
                    }
                    for (g_689 = (-8); (g_689 >= 29); g_689 = safe_add_func_int8_t_s_s(g_689, 7))
                    {
                        int32_t ***l_1257 = &g_1256;
                        int8_t l_1260[5][10][1];
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 10; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_1260[i][j][k] = 0xEFL;
                            }
                        }
                        (*l_1257) = l_1254;
                        (*g_15) &= (((((((**l_1254) >= g_1062[(uint16_t)(g_184) % 6][(g_1019) % 9][(uint64_t)(g_598) % 1]) != p_22) >= (p_22 | (g_192 <= (*l_73)))) | l_1260[4][1][0]) < 1L) && (-1L));
                    }
                }
            }
            (*g_438) = (*l_1231);
            if ((*l_68))
                break;
            for (l_1262.f0 = 27; (l_1262.f0 > (-2)); l_1262.f0 = safe_sub_func_int8_t_s_s(l_1262.f0, 1))
            {
                uint32_t l_1271 = 2U;
                int32_t l_1272[9] = {0xD4B35E58L, 0xD4B35E58L, 0x7573005AL, 0x5A74037DL, 0xDCACDB20L, 0x5A74037DL, 0x7573005AL, 0xD4B35E58L, 0xD4B35E58L};
                int i;
                (*g_1256) = &p_22;
lbl_1295:
                for (g_689 = 3; g_689 < 6; g_689 += 2)
                {
                    int64_t l_1277[1];
                    int32_t *l_1288 = &l_1272[3];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1277[i] = 0xFCC0D5BE93AF7759LL;
                    if ((safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(l_1277[0], (p_22 ^ ((l_1277[0] && g_1180[2]) == l_1277[0])))), g_1155)))
                    {
                        (*l_1254) = &p_22;
                        (*l_1261) = &p_22;
                    }
                    else
                    {
                        (*l_1261) = l_1288;
                        if (l_1262.f0)
                            goto lbl_1295;
                        (*l_1288) ^= (0xB9L | (safe_lshift_func_int16_t_s_u((g_598 >= (p_22 && (safe_mod_func_uint16_t_u_u(g_1019, (safe_add_func_uint8_t_u_u(g_7[3], p_22)))))), 9)));
                    }
                }
                (*p_23) ^= 0L;
            }
        }
        for (l_24.f0 = 0; l_24.f0 < 10; l_24.f0 += 3)
        {
            for (g_26.f0 = 3; g_26.f0 < 7; g_26.f0 += 1)
            {
                for (g_192 = 0; g_192 < 3; g_192 += 1)
                {
                    for (g_493 = 0; g_493 < 9; g_493 += 1)
                    {
                        g_1255[g_192][g_493] = &g_1256;
                    }
                }
            }
        }
    }
    else
    {
        uint32_t l_1302 = 1U;
        int32_t *l_1304 = &g_1180[2];
        struct S0 l_1309 = {0L};
        int32_t * const **l_1312 = 0;
        int32_t l_1337 = (-1L);
        int8_t l_1340 = 0xF4L;
        (*p_21) ^= (*l_73);
        (*g_438) = func_97((*l_1231), ((safe_mod_func_int16_t_s_s((*l_73), (safe_mul_func_uint16_t_u_u(0x7743L, ((safe_rshift_func_uint8_t_u_u(p_22, 1)) >= (g_1180[3] < (*l_73))))))) || func_29(g_689, &l_24)));
        for (g_598 = 10; (g_598 != (-5)); g_598 = safe_sub_func_uint32_t_u_u(g_598, 8))
        {
            uint16_t l_1324 = 0x174EL;
            int32_t *l_1325 = &g_1180[0];
            struct S0 l_1336[7][10] = {{{0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}}, {{0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}}, {{0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}}, {{0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}}, {{0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}}, {{0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}}, {{0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}, {0xA338L}}};
            int i, j, k;
            (*g_438) = func_97(l_1309, 0xE20718E91F0A983BLL);
            (*p_23) = l_1337;
            for (g_26.f0 = 0; g_26.f0 < 6; g_26.f0 += 6)
            {
                for (g_818 = 1; g_818 < 9; g_818 += 1)
                {
                    for (p_22 = 0; p_22 < 1; p_22 += 1)
                    {
                        for (g_1019 = 0; (g_1019 != 47); g_1019 = safe_add_func_int64_t_s_s(g_1019, 1))
                        {
                            return g_1019;
                        }
                        if ((*p_21))
                            continue;
                        if (l_1340)
                        {
                            uint16_t l_1345 = 1U;
                            struct S0 l_1347 = {0L};
                            (*l_1231) = l_1336[4][7];
                        }
                        else
                        {
                            if (func_29((safe_lshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s(g_6, 8L)), (0 != l_1325))), 4L)), (*l_1325))), 0))
                            {
                                p_23 = 0;
                            }
                            else
                            {
                                (*l_1304) = (0L && p_22);
                                return g_1062[(uint16_t)(g_26.f0) % 6][(g_818) % 9][(uint32_t)(p_22) % 1];
                            }
                            if ((*l_1325))
                            {
                                (*g_1256) = (*g_1256);
                                (*l_1325) ^= (*l_73);
                                return g_1062[(uint16_t)(g_26.f0) % 6][(g_818) % 9][(uint32_t)(p_22) % 1];
                            }
                            else
                            {
                                return p_22;
                            }
                        }
                    }
                }
            }
            (*g_1256) = 0;
        }
        return p_22;
    }
    return (*l_1346);
}







int8_t func_29(uint16_t p_30, struct S0 * p_31)
{
    int32_t *l_34 = &g_7[(uint32_t)(g_6) % 9];
    int32_t * const *l_33 = &l_34;
    int i;
    for (g_6 = 0; g_6 < 9; g_6 += 1)
    {
        uint32_t l_32 = 0U;
        if (l_32)
            break;
    }
    (*g_38) = l_33;
    (**g_36) = (+(**l_33));
    return (**l_33);
}







int32_t * func_49(int32_t * p_50, int64_t p_51, int8_t p_52, struct S0 * p_53, uint32_t p_54)
{
    int32_t *l_67[2];
    int i;
    for (i = 0; i < 2; i++)
        l_67[i] = 0;
    for (g_26.f0 = (-20); (g_26.f0 >= 1); g_26.f0 = safe_add_func_uint32_t_u_u(g_26.f0, 1))
    {
        if ((*g_37))
            break;
        for (p_52 = (-19); (p_52 != (-4)); p_52 = safe_add_func_uint64_t_u_u(p_52, 1))
        {
            int32_t *l_59 = 0;
            return l_59;
        }
    }
    for (g_2 = 0; (g_2 != 13); g_2 = safe_add_func_int32_t_s_s(g_2, 1))
    {
        for (p_51 = 0; (p_51 <= 5); p_51 = safe_add_func_uint64_t_u_u(p_51, 2))
        {
            uint32_t l_66 = 0x28F0FC5AL;
            (*p_50) = ((safe_mul_func_int8_t_s_s(g_26.f0, g_26.f0)) >= ((l_66 && 4L) < g_26.f0));
        }
    }
    return l_67[0];
}







int32_t func_82(uint16_t p_83, const uint32_t p_84, int32_t p_85)
{
    const int32_t l_94[8][7][1] = {{{(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}}, {{(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}}, {{(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}}, {{(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}}, {{(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}}, {{(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}}, {{(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}}, {{(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}}};
    struct S0 *l_1038 = &g_26;
    int32_t **l_1039 = &g_37;
    int32_t l_1040 = 0L;
    uint32_t l_1045[3][7][1];
    uint16_t l_1080 = 0x10BAL;
    uint32_t l_1115 = 0xEE248F0CL;
    uint32_t l_1145[4][5];
    uint16_t l_1197[8];
    struct S0 l_1215 = {0x5563L};
    uint64_t l_1217 = 0U;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
                l_1045[i][j][k] = 4294967295U;
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
            l_1145[i][j] = 0U;
    }
    for (i = 0; i < 8; i++)
        l_1197[i] = 2U;
    for (p_85 = 0; (p_85 <= (-10)); p_85 = safe_sub_func_uint32_t_u_u(p_85, 1))
    {
        int32_t **l_1034 = &g_37;
        struct S0 *l_1037[1];
        int i;
        for (i = 0; i < 1; i++)
            l_1037[i] = &g_439;
    }
    for (l_1040 = 0; l_1040 < 10; l_1040 += 3)
    {
        for (g_493 = 0; g_493 < 7; g_493 += 1)
        {
            int i, j;
            for (g_26.f0 = 0; g_26.f0 < 10; g_26.f0 += 6)
            {
                for (g_689 = 3; g_689 < 7; g_689 += 1)
                {
                    return (*g_37);
                }
            }
        }
    }
    for (g_6 = 1; g_6 < 10; g_6 += 2)
    {
        for (p_83 = 6; p_83 < 7; p_83 += 7)
        {
            int16_t l_1046 = 0x85B5L;
            int32_t *l_1073 = &g_7[3];
            int32_t * const **l_1078 = &g_36;
            struct S0 *l_1079 = &g_26;
            struct S0 l_1081 = {0x154CL};
            int64_t l_1096 = 0x4191DABF615AABD7LL;
            int8_t l_1126 = 0x67L;
            int i;
            if (l_1045[1][2][0])
            {
                const uint64_t l_1053[2][6] = {{0x951A1922F87FE105LL, 0x8A4CF7A62FFA2859LL, 0x951A1922F87FE105LL, 0x8A4CF7A62FFA2859LL, 0x951A1922F87FE105LL, 0x8A4CF7A62FFA2859LL}, {0x951A1922F87FE105LL, 0x8A4CF7A62FFA2859LL, 0x951A1922F87FE105LL, 0x8A4CF7A62FFA2859LL, 0x951A1922F87FE105LL, 0x8A4CF7A62FFA2859LL}};
                struct S0 *l_1054 = 0;
                int32_t * const l_1055 = &l_1040;
                int32_t * const **l_1058 = 0;
                int32_t l_1082 = 0xA4C782AAL;
                int16_t l_1083 = 0L;
                int32_t *l_1090 = &l_1082;
                int i, j;
                l_1046 &= (*g_37);
                if (((safe_mod_func_int32_t_s_s(l_1046, (safe_mul_func_uint8_t_u_u(l_1053[0][2], (p_84 && (safe_rshift_func_int8_t_s_u(g_493, l_1046))))))) || (0x4DL <= g_493)))
                {
                    return p_84;
                }
                else
                {
                    int16_t l_1061[6][9][1];
                    struct S0 *l_1071 = &g_439;
                    int32_t l_1072 = 0xFFC26921L;
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 9; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_1061[i][j][k] = (-4L);
                        }
                    }
                    (*l_1038) = func_97(func_97(func_97((*g_156), (safe_add_func_uint8_t_u_u(((l_1061[2][1][0] >= g_192) >= (!l_1061[2][1][0])), p_84))), (*l_1055)), g_1062[3][7][0]);
                    l_1073 = func_49((*g_77), g_818, (safe_div_func_int32_t_s_s((*g_37), (g_689 & (safe_add_func_int64_t_s_s(((safe_rshift_func_int8_t_s_s(g_818, 3)) ^ (p_83 == p_85)), (safe_rshift_func_int16_t_s_u((p_85 > g_7[1]), 13))))))), l_1071, l_1072);
                    (**l_1039) = (safe_div_func_uint64_t_u_u((g_1019 || (((!l_1061[1][1][0]) != 6L) > ((g_1062[3][7][0] || (*l_1055)) <= l_1080))), l_1072));
                }
                (*l_1038) = (*l_1079);
            }
            else
            {
                int16_t l_1095 = (-1L);
                int32_t **l_1097[8][8];
                struct S0 l_1111 = {0x7548L};
                const struct S0 *l_1119 = 0;
                const struct S0 **l_1118 = &l_1119;
                int i, j;
                for (i = 0; i < 8; i++)
                {
                    for (j = 0; j < 8; j++)
                        l_1097[i][j] = &l_1073;
                }
                for (g_184 = (-15); (g_184 <= 19); g_184 = safe_add_func_int64_t_s_s(g_184, 1))
                {
                    int32_t l_1104 = 1L;
                    (*l_1039) = func_49((*l_1039), g_895, g_2, (*g_1044), ((*g_37) | (g_26.f0 <= l_1095)));
                    (*g_77) = &p_85;
                    (**l_1039) |= 0xCE8A35E0L;
                }
                for (g_184 = 0; (g_184 == (-20)); g_184 = safe_sub_func_uint64_t_u_u(g_184, 5))
                {
                    int8_t l_1107[9];
                    int16_t l_1108 = 0xF0CAL;
                    int32_t *l_1109[2];
                    struct S0 *l_1110 = &g_26;
                    int16_t l_1114 = 0xD988L;
                    int i;
                    for (i = 0; i < 9; i++)
                        l_1107[i] = 4L;
                    for (i = 0; i < 2; i++)
                        l_1109[i] = 0;
                    (*l_1073) = (-1L);
                    (*l_1073) ^= ((g_439.f0 ^ (((l_1107[6] <= p_83) != p_84) != g_818)) | l_1108);
                    (*l_1038) = func_97(func_97((*l_1079), g_689), (g_6 >= (safe_mul_func_int8_t_s_s(l_1114, ((l_1115 && g_1062[4][4][0]) != (safe_rshift_func_uint16_t_u_s(((**l_1039) | p_85), g_818)))))));
                }
                if ((l_1118 == &g_25))
                {
                    (*l_1118) = func_95(l_1097[5][0]);
                }
                else
                {
                    return (*l_1073);
                }
            }
            (*l_1039) = &p_85;
        }
    }
    if ((**l_1039))
    {
        int i, j, k;
        (*g_37) = (*g_15);
        (*g_1157) = l_1038;
        for (g_439.f0 = 2; g_439.f0 < 3; g_439.f0 += 1)
        {
            for (g_6 = 0; g_6 < 7; g_6 += 1)
            {
                for (g_895 = 0; g_895 < 1; g_895 += 1)
                {
                    int32_t *l_1158 = &g_2;
                    int32_t *l_1159 = &l_1040;
                    l_1159 = func_49(l_1158, g_1155, (*l_1158), func_95(l_1039), l_1045[(uint16_t)(g_439.f0) % 3][(uint32_t)(g_6) % 7][(g_895) % 1]);
                }
            }
        }
        for (g_184 = 22; (g_184 >= 9); g_184 = safe_sub_func_int8_t_s_s(g_184, 8))
        {
            int32_t l_1164 = 1L;
            int i;
            for (p_83 = (-15); (p_83 != 50); p_83 = safe_add_func_uint8_t_u_u(p_83, 1))
            {
                return l_1164;
            }
            for (l_1040 = 0; l_1040 < 9; l_1040 += 3)
            {
                int32_t ***l_1165 = &l_1039;
                (*l_1165) = 0;
            }
        }
    }
    else
    {
        struct S0 **l_1173 = &g_438;
        int32_t * const l_1183 = &g_7[3];
        int32_t l_1184 = (-6L);
        int32_t ***l_1216 = &l_1039;
        int i, j, k;
        for (g_689 = 0; g_689 < 3; g_689 += 1)
        {
            for (g_26.f0 = 0; g_26.f0 < 7; g_26.f0 += 1)
            {
                for (g_192 = 0; g_192 < 1; g_192 += 1)
                {
                    int32_t l_1188 = 0x19EE432CL;
                    int i, j, k;
                }
            }
        }
        (*g_15) = (safe_lshift_func_uint16_t_u_s(g_493, (func_29(func_29((*l_1183), (*g_1044)), l_1038) < g_1180[3])));
        (*l_1038) = (*g_25);
        (*l_1039) = (**l_1216);
    }
    return l_1217;
}







struct S0 * func_95(int32_t ** p_96)
{
    int32_t l_1011 = 0x49CD1855L;
    struct S0 *l_1012 = &g_439;
    int32_t **l_1014 = &g_37;
    int32_t ***l_1013 = &l_1014;
    int32_t * const **l_1015[4];
    const uint32_t l_1016 = 1U;
    int8_t l_1022[6][4];
    int64_t l_1028[2][2][1];
    uint16_t l_1031 = 0xB8CFL;
    uint32_t l_1032 = 1U;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1015[i] = &g_36;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
            l_1022[i][j] = (-1L);
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
                l_1028[i][j][k] = 0L;
        }
    }
    (*g_156) = func_97((*g_156), (safe_rshift_func_int16_t_s_u(g_1019, 5)));
lbl_1033:
    l_1032 &= (safe_sub_func_uint32_t_u_u(((g_598 ^ (0x36A2L >= l_1022[3][1])) ^ (safe_unary_minus_func_int16_t_s(g_7[0]))), (g_818 > (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((!(g_689 <= l_1028[1][1][0])), (g_895 < ((***l_1013) >= g_439.f0)))), l_1031)))));
    (**l_1014) = (*g_37);
    if (g_598)
        goto lbl_1033;
    return l_1012;
}







struct S0 func_97(struct S0 p_98, int64_t p_99)
{
    const int32_t *l_100 = &g_7[0];
    struct S0 l_101[7] = {{-7L}, {-7L}, {-7L}, {-7L}, {-7L}, {-7L}, {-7L}};
    int i;
    l_100 = l_100;
    return l_101[5];
}







struct S0 func_102(int32_t * p_103, struct S0 * p_104, struct S0 p_105, int32_t * p_106, struct S0 p_107)
{
    struct S0 l_108[4][6][3] = {{{{0x2958L}, {0x2958L}, {0x2958L}}, {{0x2958L}, {0x2958L}, {0x2958L}}, {{0x2958L}, {0x2958L}, {0x2958L}}, {{0x2958L}, {0x2958L}, {0x2958L}}, {{0x2958L}, {0x2958L}, {0x2958L}}, {{0x2958L}, {0x2958L}, {0x2958L}}}, {{{0x2958L}, {0x2958L}, {0x2958L}}, {{0x2958L}, {0x2958L}, {0x2958L}}, {{0x2958L}, {0x2958L}, {0x2958L}}, {{0x2958L}, {0x2958L}, {0x2958L}}, {{0x2958L}, {0x2958L}, {0x2958L}}, {{0x2958L}, {0x2958L}, {0x2958L}}}, {{{0x2958L}, {0x2958L}, {0x2958L}}, {{0x2958L}, {0x2958L}, {0x2958L}}, {{0x2958L}, {0x2958L}, {0x2958L}}, {{0x2958L}, {0x2958L}, {0x2958L}}, {{0x2958L}, {0x2958L}, {0x2958L}}, {{0x2958L}, {0x2958L}, {0x2958L}}}, {{{0x2958L}, {0x2958L}, {0x2958L}}, {{0x2958L}, {0x2958L}, {0x2958L}}, {{0x2958L}, {0x2958L}, {0x2958L}}, {{0x2958L}, {0x2958L}, {0x2958L}}, {{0x2958L}, {0x2958L}, {0x2958L}}, {{0x2958L}, {0x2958L}, {0x2958L}}}};
    struct S0 *l_1007[7];
    int32_t *l_1010 = 0;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_1007[i] = 0;
    (*p_104) = func_97(func_97(l_108[2][0][2], 0x066EE5324E311B86LL), (((0xE0CE775BL || (safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u(g_7[3], 0)), g_26.f0))) ^ ((g_7[3] | (!g_7[3])) && (l_108[2][0][2].f0 & (l_108[2][0][2].f0 | g_7[3])))) || g_7[3]));
    (*p_106) |= (*p_106);
    (*p_106) = (*g_37);
    return (*p_104);
}







int32_t func_113(struct S0 * p_114, int32_t * const p_115, int32_t p_116)
{
    struct S0 *l_636 = &g_439;
    int32_t l_643 = 0x9CB603A9L;
    int32_t **l_670 = 0;
    int32_t * const **l_699 = &g_36;
    uint32_t l_751[5][10] = {{0xFA2DF2F7L, 0xFA2DF2F7L, 1U, 4294967295U, 0xF5D2659EL, 4294967295U, 1U, 0xFA2DF2F7L, 0xFA2DF2F7L, 1U}, {0xFA2DF2F7L, 0xFA2DF2F7L, 1U, 4294967295U, 0xF5D2659EL, 4294967295U, 1U, 0xFA2DF2F7L, 0xFA2DF2F7L, 1U}, {0xFA2DF2F7L, 0xFA2DF2F7L, 1U, 4294967295U, 0xF5D2659EL, 4294967295U, 1U, 0xFA2DF2F7L, 0xFA2DF2F7L, 1U}, {0xFA2DF2F7L, 0xFA2DF2F7L, 1U, 4294967295U, 0xF5D2659EL, 4294967295U, 1U, 0xFA2DF2F7L, 0xFA2DF2F7L, 1U}, {0xFA2DF2F7L, 0xFA2DF2F7L, 1U, 4294967295U, 0xF5D2659EL, 4294967295U, 1U, 0xFA2DF2F7L, 0xFA2DF2F7L, 1U}};
    uint32_t l_841 = 0xA5F23EA0L;
    const int32_t l_876[4][10][1] = {{{0x778AA142L}, {0x778AA142L}, {0x778AA142L}, {0x778AA142L}, {0x778AA142L}, {0x778AA142L}, {0x778AA142L}, {0x778AA142L}, {0x778AA142L}, {0x778AA142L}}, {{0x778AA142L}, {0x778AA142L}, {0x778AA142L}, {0x778AA142L}, {0x778AA142L}, {0x778AA142L}, {0x778AA142L}, {0x778AA142L}, {0x778AA142L}, {0x778AA142L}}, {{0x778AA142L}, {0x778AA142L}, {0x778AA142L}, {0x778AA142L}, {0x778AA142L}, {0x778AA142L}, {0x778AA142L}, {0x778AA142L}, {0x778AA142L}, {0x778AA142L}}, {{0x778AA142L}, {0x778AA142L}, {0x778AA142L}, {0x778AA142L}, {0x778AA142L}, {0x778AA142L}, {0x778AA142L}, {0x778AA142L}, {0x778AA142L}, {0x778AA142L}}};
    int64_t l_913 = 0x84C39B13244E0952LL;
    int32_t *l_935 = &g_7[(uint32_t)((g_26.f0 + 4)) % 9];
    int32_t * const **l_953 = &g_36;
    int8_t l_998[1];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_998[i] = (-4L);
    for (p_116 = 0; (p_116 == (-10)); p_116 = safe_sub_func_uint64_t_u_u(p_116, 4))
    {
        int32_t **l_126 = &g_37;
        int32_t ** const *l_125[6];
        uint32_t l_647 = 1U;
        struct S0 *l_698 = &g_439;
        int32_t * const **l_730 = &g_36;
        int32_t *l_749 = &g_7[3];
        uint64_t l_768[5] = {0xDAAAD415CB8369F3LL, 0x8C6F8D211CC07AF7LL, 0xDAAAD415CB8369F3LL, 0x8C6F8D211CC07AF7LL, 0xDAAAD415CB8369F3LL};
        int64_t l_787 = 0xEED52E01D37402DELL;
        int i;
        for (i = 0; i < 6; i++)
            l_125[i] = &l_126;
    }
    for (g_26.f0 = 0; g_26.f0 < 9; g_26.f0 += 1)
    {
        int32_t *l_816 = &l_643;
        const uint32_t l_846 = 0xFB872388L;
        struct S0 *l_875 = &g_439;
        int32_t *l_877 = &g_7[(uint32_t)((g_26.f0 + 1)) % 9];
        int32_t * const **l_880 = &g_36;
        int64_t l_909[5] = {4L, 7L, 4L, 7L, 4L};
        int32_t * const **l_930[10][1];
        struct S0 *l_936 = 0;
        int32_t * const *l_964 = &l_877;
        int i, j;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 1; j++)
                l_930[i][j] = &g_36;
        }
        for (g_493 = 4; (g_493 == 10); g_493 = safe_add_func_uint16_t_u_u(g_493, 5))
        {
            int32_t *l_817 = &g_7[3];
            int32_t **l_821[5];
            uint32_t l_824 = 0xCD02DF0AL;
            int i;
            for (i = 0; i < 5; i++)
                l_821[i] = 0;
            l_816 = p_115;
            if ((&g_36 != &l_670))
            {
                (*p_115) = (0xA6L < (~0xF1L));
            }
            else
            {
                (*l_816) ^= (safe_lshift_func_int16_t_s_s(0x6673L, 4));
                if ((*l_816))
                    break;
                return (*g_37);
            }
            (*g_156) = func_97(func_97(func_97(func_97(func_97((*p_114), l_824), p_116), g_7[(uint16_t)(g_26.f0) % 9]), (*l_816)), 0x82EB567ECE39943DLL);
            (*g_37) = (*p_115);
        }
        if ((~(l_636 == l_636)))
        {
            int32_t **l_825 = &l_816;
            struct S0 *l_857 = &g_26;
            int32_t * const **l_865 = &g_36;
            int32_t l_887 = 0x2E91C490L;
            int32_t **l_891 = &l_877;
            (*l_825) = p_115;
            for (g_192 = (-14); (g_192 == 40); g_192 = safe_add_func_int64_t_s_s(g_192, 9))
            {
                int32_t *l_832 = 0;
                struct S0 *l_838 = &g_439;
                int32_t * const **l_872 = &g_36;
                for (g_2 = 20; (g_2 == (-24)); g_2 = safe_sub_func_uint8_t_u_u(g_2, 8))
                {
                    uint64_t l_833 = 18446744073709551610U;
                    int32_t *l_854 = &g_7[(uint32_t)((g_26.f0 + 5)) % 9];
                    for (l_643 = 7; (l_643 > 1); l_643 = safe_sub_func_uint16_t_u_u(l_643, 1))
                    {
                        int32_t **l_839[2];
                        int32_t **l_840 = &l_816;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_839[i] = &l_832;
                        (*l_840) = p_115;
                        g_7[(uint16_t)(g_26.f0) % 9] &= 0x24181C6FL;
                        return l_841;
                    }
lbl_859:
                    if ((((safe_rshift_func_uint8_t_u_u(1U, g_7[(uint32_t)((g_26.f0 + 1)) % 9])) | 4U) > g_7[(uint32_t)((g_26.f0 + 5)) % 9]))
                    {
                        int8_t l_847 = 1L;
                        int32_t *l_858 = 0;
                        (*l_825) = l_858;
                        (*p_115) ^= (*p_115);
                        if (p_116)
                            goto lbl_859;
                    }
                    else
                    {
                        return (*p_115);
                    }
                    if ((0xE854L < g_689))
                    {
                        struct S0 **l_860 = &l_636;
                        (*l_857) = (*p_114);
                        (*p_115) ^= (0 != &g_37);
                        (*l_860) = l_857;
                    }
                    else
                    {
                        int32_t **l_861 = 0;
                        int32_t **l_862 = &g_37;
                        (*l_862) = p_115;
                        (*g_37) |= (safe_mul_func_uint16_t_u_u((*l_854), (g_7[(uint16_t)(g_26.f0) % 9] & g_7[(uint16_t)(g_26.f0) % 9])));
                    }
                    (*l_699) = &g_37;
                }
                g_7[(uint16_t)(g_26.f0) % 9] = ((*g_37) < (safe_div_func_uint16_t_u_u(0x419FL, (g_184 | ((&l_816 == &p_115) < ((safe_add_func_int16_t_s_s(g_439.f0, g_7[(uint16_t)(g_26.f0) % 9])) != (safe_rshift_func_int16_t_s_s(g_7[4], g_7[(uint32_t)((g_26.f0 + 2)) % 9]))))))));
                if ((*p_115))
                {
                    (*g_37) ^= (*p_115);
                    (*p_115) ^= (*p_115);
                    (*p_115) &= (0x647F9DD7L ^ (&g_36 != &g_36));
                }
                else
                {
                    (*l_825) = &g_7[(uint16_t)(g_26.f0) % 9];
                }
                (*g_37) = (l_876[1][6][0] ^ g_7[4]);
            }
            (*l_891) = p_115;
            if ((*g_37))
            {
                const uint16_t l_905 = 65535U;
                if ((*g_37))
                {
                    uint32_t l_894 = 0x8F3B4AE8L;
                    (**l_891) |= (+0L);
                    for (g_689 = (-7); (g_689 == 10); g_689 = safe_add_func_uint8_t_u_u(g_689, 1))
                    {
                        (*p_115) = (g_818 | p_116);
                    }
                    (*p_115) &= (l_894 && (g_895 & ((safe_unary_minus_func_int64_t_s(g_7[(uint16_t)(g_26.f0) % 9])) > (&p_115 != 0))));
                }
                else
                {
                    for (g_493 = 0; (g_493 >= 51); g_493 = safe_add_func_uint8_t_u_u(g_493, 1))
                    {
                        (*l_877) = ((p_116 >= (0x7AL == p_116)) | (p_116 < (p_116 ^ (0L && (0xD1C079F2L | l_905)))));
                    }
                }
                return l_905;
            }
            else
            {
                int32_t *l_906 = &g_7[3];
                struct S0 *l_911 = &g_439;
                int32_t ***l_921 = &l_825;
                if ((*g_37))
                {
                    (*p_114) = func_97((*p_114), (*l_877));
                    return (*g_37);
                }
                else
                {
                    struct S0 l_908 = {0x38C0L};
                    int32_t ***l_910 = &l_825;
                    int64_t l_920[9][1];
                    int i, j;
                    for (i = 0; i < 9; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_920[i][j] = (-3L);
                    }
                    for (g_895 = 3; g_895 < 9; g_895 += 8)
                    {
                        int32_t **l_907 = &l_877;
                        (*l_907) = p_115;
                        (*l_636) = l_908;
                        g_7[(g_895) % 9] = (*p_115);
                    }
                    if (((g_689 <= 0x34AEL) || g_7[(g_895) % 9]))
                    {
                        uint32_t l_912 = 0U;
                        (**l_891) &= (*p_115);
                        (**l_891) |= (*g_37);
                    }
                    else
                    {
                        int32_t *** const l_922 = &l_825;
                        int32_t l_923 = (-1L);
                        int32_t **l_931 = &g_37;
                        (*l_636) = func_97(func_97(func_97(func_97(func_97(func_97((*g_156), (*l_877)), p_116), g_7[3]), g_598), g_26.f0), (safe_mul_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(((safe_mul_func_uint16_t_u_u((*l_906), l_920[3][0])) > 7L), 6)) == (((g_7[(uint16_t)(g_26.f0) % 9] <= (*l_877)) | (l_921 == l_922)) == l_923)), (safe_lshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((p_116 <= (p_114 != p_114)), (~(+p_116)))), 2)))));
                        (*l_931) = p_115;
                    }
                }
                (*g_37) = (0x896982CC6E3B461CLL & (**l_891));
                (*g_37) &= (*p_115);
            }
        }
        else
        {
            struct S0 l_937 = {0x2A8CL};
            (*l_636) = l_937;
            if (g_7[(uint32_t)((g_26.f0 + 1)) % 9])
                continue;
            (*g_37) = ((safe_sub_func_int64_t_s_s((l_930[1][0] != &g_36), g_7[(uint32_t)((g_26.f0 + 1)) % 9])) | ((((*l_935) > g_26.f0) && g_7[3]) | (p_116 < (~(*l_816)))));
        }
        for (g_2 = 0; (g_2 > (-12)); g_2 = safe_sub_func_int16_t_s_s(g_2, 3))
        {
            int32_t *l_952 = &g_7[(uint32_t)((g_26.f0 + 2)) % 9];
            int i, j;
            for (l_643 = 0; l_643 < 5; l_643 += 2)
            {
                for (g_895 = 6; g_895 < 10; g_895 += 6)
                {
                    int32_t *l_942 = &g_7[(uint32_t)((g_26.f0 + 4)) % 9];
                    l_942 = l_942;
                    for (g_818 = 15; (g_818 == 28); g_818 = safe_add_func_uint8_t_u_u(g_818, 1))
                    {
                        int32_t *l_947 = &g_7[(uint32_t)((g_26.f0 + 5)) % 9];
                        struct S0 *l_951 = &g_439;
                        int16_t l_962 = 0xBBDDL;
                    }
                }
            }
            l_964 = &p_115;
        }
        for (g_2 = 0; g_2 < 10; g_2 += 6)
        {
            for (g_598 = 0; g_598 < 1; g_598 += 1)
            {
                int32_t *l_973 = &g_7[(uint16_t)(g_26.f0) % 9];
                int32_t *l_986 = 0;
                uint32_t l_995 = 4294967286U;
                if (((p_116 < (safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((-9L), (safe_mul_func_uint16_t_u_u(p_116, p_116)))), g_932))) || g_439.f0))
                {
                    (*l_875) = func_97((*p_114), (-1L));
                    (*p_115) ^= (*p_115);
                }
                else
                {
                    uint16_t l_999 = 0x02E8L;
                    for (p_116 = 0; (p_116 > 26); p_116 = safe_add_func_uint16_t_u_u(p_116, 1))
                    {
                        struct S0 l_977 = {9L};
                        int32_t ***l_991 = &l_670;
                        if (((g_7[3] > g_932) | (-4L)))
                        {
                            int32_t **l_974 = &l_816;
                            int32_t **l_975 = 0;
                            int32_t **l_976 = &l_877;
                            struct S0 **l_980 = 0;
                            struct S0 **l_981[3];
                            int i;
                            for (i = 0; i < 3; i++)
                                l_981[i] = &g_438;
                            (*l_974) = l_973;
                            (*l_976) = p_115;
                            (*g_156) = func_97(func_97(func_97(func_97(func_97(func_97(l_977, g_192), g_26.f0), p_116), (safe_rshift_func_int8_t_s_s(g_7[4], 4))), 0L), g_26.f0);
                            g_438 = p_114;
                        }
                        else
                        {
                            struct S0 * const *l_994 = 0;
                            (*p_115) = ((((~((safe_rshift_func_int16_t_s_s(g_689, (*l_973))) && g_439.f0)) || p_116) & ((l_986 == l_986) & 0L)) != (((safe_add_func_int32_t_s_s((*p_115), ((p_116 >= p_116) ^ (l_977.f0 <= p_116)))) >= (safe_rshift_func_int8_t_s_u((l_991 == 0), 4))) > (safe_mul_func_uint16_t_u_u(((l_994 == &p_114) | (0 != p_114)), (l_995 || 1U)))));
                            (*g_37) &= (l_999 >= p_116);
                            return (*p_115);
                        }
                        for (l_999 = (-8); (l_999 >= 45); l_999 = safe_add_func_uint64_t_u_u(l_999, 5))
                        {
                            int32_t **l_1004 = &l_986;
                            (*l_1004) = p_115;
                            (*l_986) &= (*p_115);
                            (*p_115) &= (*g_37);
                            return (*p_115);
                        }
                    }
                }
                (*g_438) = func_97((*g_438), ((*l_973) == (p_116 <= g_439.f0)));
            }
        }
    }
    (*p_115) &= (g_689 > ((0x1AL && (*l_935)) > ((safe_rshift_func_uint8_t_u_u((*l_935), p_116)) >= (0x8722L >= 1U))));
    return (*l_935);
}







uint16_t func_127(int8_t p_128, int32_t * p_129, int32_t * const ** p_130, struct S0 * p_131)
{
    uint32_t l_137 = 0x386FCCF6L;
    int32_t l_144[7] = {0xF443C0C3L, 0x1DF8105AL, 0xF443C0C3L, 0x1DF8105AL, 0xF443C0C3L, 0x1DF8105AL, 0xF443C0C3L};
    int8_t l_145 = (-7L);
    int32_t * const *l_228 = &g_37;
    struct S0 *l_249 = &g_26;
    struct S0 **l_248 = &l_249;
    int32_t * const **l_401 = &l_228;
    int i;
    if ((safe_rshift_func_uint16_t_u_s(p_128, ((safe_unary_minus_func_uint16_t_u(l_137)) ^ ((*p_129) > (p_128 || ((safe_add_func_int32_t_s_s(l_137, l_144[1])) == ((*p_129) <= l_145))))))))
    {
        int32_t l_146[3] = {0x3D27CF1AL, 0xA1361802L, 0x3D27CF1AL};
        int32_t *l_157 = &l_144[1];
        uint16_t l_173 = 65535U;
        int32_t l_198[9][5][1];
        int32_t *l_205 = &g_7[4];
        struct S0 l_236 = {0xD942L};
        int16_t l_277 = 0xB342L;
        int16_t l_310 = (-1L);
        const int32_t l_334 = 0x2FE9E5AFL;
        int i, j, k;
        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 5; j++)
            {
                for (k = 0; k < 1; k++)
                    l_198[i][j][k] = (-1L);
            }
        }
        if (l_146[2])
        {
            struct S0 *l_154[6];
            struct S0 * const *l_153 = &l_154[3];
            int32_t l_171 = (-1L);
            int32_t l_214 = 0xA88FD382L;
            int32_t l_243 = 0x085B8020L;
            int64_t l_259 = 0L;
            int32_t **l_276 = 0;
            int32_t *l_341[7];
            int i;
            for (i = 0; i < 6; i++)
                l_154[i] = &g_26;
            for (i = 0; i < 7; i++)
                l_341[i] = &g_7[3];
            if ((safe_div_func_uint8_t_u_u((safe_add_func_int8_t_s_s(p_128, p_128)), l_146[2])))
            {
                int32_t ***l_172 = 0;
                struct S0 *l_213 = &g_26;
                uint32_t l_220[6] = {4294967295U, 0x176D0589L, 4294967295U, 0x176D0589L, 4294967295U, 0x176D0589L};
                int i;
                for (g_26.f0 = (-26); (g_26.f0 != (-20)); g_26.f0 = safe_add_func_int16_t_s_s(g_26.f0, 1))
                {
                    int64_t l_158 = (-1L);
                    g_155[1] = l_153;
                    (*p_129) ^= (((0 == l_157) != (l_158 == (safe_rshift_func_int8_t_s_s(p_128, 4)))) > (((*l_157) != (safe_rshift_func_uint8_t_u_u(((*l_157) & (&l_144[1] == l_157)), l_158))) & (*p_129)));
                }
                if ((safe_add_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((((p_128 != g_2) ^ (safe_rshift_func_int16_t_s_s(l_171, 8))) | (&g_36 != l_172)), (+(!(l_173 && (*g_37)))))), 0x1853L)), p_128)))
                {
                    uint32_t l_183 = 4294967295U;
                    int i;
                    for (l_137 = 0; l_137 < 9; l_137 += 1)
                    {
                        p_129 = func_49(&g_7[3], (p_128 & g_7[2]), (safe_rshift_func_uint8_t_u_s(g_26.f0, (safe_add_func_int64_t_s_s(((0 != &g_7[5]) > ((g_26.f0 || p_128) == (g_26.f0 && p_128))), p_128)))), p_131, p_128);
                    }
                    g_37 = &g_7[2];
                    for (p_128 = 22; (p_128 > 4); p_128 = safe_sub_func_uint32_t_u_u(p_128, 1))
                    {
                        int32_t **l_180 = &l_157;
                        (*l_180) = func_49(&g_7[3], g_7[(l_137) % 9], (g_7[(l_137) % 9] && (l_171 < ((p_128 == p_128) >= ((*p_130) == &g_37)))), &g_26, g_7[3]);
                        g_184 &= ((p_128 && (g_2 ^ g_7[3])) ^ (1U && ((safe_rshift_func_int8_t_s_u(((g_7[3] && g_7[(l_137) % 9]) > (g_2 >= l_183)), ((g_7[3] || g_26.f0) && l_183))) < ((p_128 != (l_171 >= p_128)) && ((g_7[(l_137) % 9] >= g_2) == 65526U)))));
                    }
                    for (g_26.f0 = (-21); (g_26.f0 > (-26)); g_26.f0 = safe_sub_func_uint64_t_u_u(g_26.f0, 1))
                    {
                        (*g_37) ^= 0L;
                    }
                }
                else
                {
                    uint8_t l_212[10] = {0x6EL, 9U, 253U, 252U, 252U, 253U, 9U, 0x6EL, 253U, 0x6EL};
                    int i;
                    (*p_129) = (safe_div_func_int8_t_s_s(0x5FL, (g_26.f0 | l_145)));
                    for (l_173 = (-17); (l_173 != 12); l_173 = safe_add_func_uint32_t_u_u(l_173, 1))
                    {
                        uint64_t l_197 = 0x0246D126375140D4LL;
                        struct S0 *l_201 = &g_26;
                        int32_t **l_202 = &l_157;
                        (*g_37) = ((&g_36 != 0) >= (p_128 || (((safe_unary_minus_func_int64_t_s(1L)) ^ ((g_2 ^ g_192) != (safe_sub_func_uint64_t_u_u(g_7[3], g_2)))) > (p_128 != p_128))));
                        (*l_202) = func_49(l_157, l_171, (*l_157), l_154[4], 0xD5BCDDAFL);
                        (*l_202) = &l_144[4];
                        return p_128;
                    }
                    for (l_137 = 23; (l_137 < 50); l_137 = safe_add_func_int16_t_s_s(l_137, 1))
                    {
                        int32_t **l_215 = &l_205;
                        g_37 = l_205;
                        (*l_205) &= 2L;
                        (*l_215) = &l_144[1];
                        (*g_37) = (-1L);
                    }
                    (*g_156) = (*p_131);
                }
                l_171 &= (*g_37);
                for (l_137 = (-30); (l_137 <= 27); l_137 = safe_add_func_int8_t_s_s(l_137, 1))
                {
                    int32_t **l_221 = &l_157;
                    (*l_205) = (safe_mod_func_uint32_t_u_u(l_137, 0x9D5BE663L));
                    if (l_220[0])
                        break;
                    (*l_221) = &l_171;
                }
            }
            else
            {
                uint16_t l_229[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_229[i] = 0x8F9DL;
                if ((safe_add_func_int64_t_s_s((safe_div_func_uint32_t_u_u(((((safe_rshift_func_uint8_t_u_u(p_128, 5)) & (l_171 != p_128)) != (0 == l_228)) || ((g_2 | g_192) == ((l_229[0] | (*p_129)) || g_184))), (*p_129))), (p_128 < (g_7[7] <= ((safe_mul_func_uint16_t_u_u(((*p_129) ^ (**l_228)), p_128)) ^ ((safe_div_func_int16_t_s_s(g_2, l_214)) | (g_2 && (*l_157)))))))))
                {
                    (*p_129) = (**l_228);
                    return p_128;
                }
                else
                {
                    struct S0 *l_241[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_241[i] = &l_236;
                    (*g_156) = func_97(l_236, ((safe_lshift_func_int8_t_s_s(0L, 6)) > g_2));
                    for (l_214 = 0; (l_214 < 4); l_214 = safe_add_func_int32_t_s_s(l_214, 1))
                    {
                        struct S0 **l_242 = &l_154[3];
                        (*l_242) = l_241[5];
                        return g_26.f0;
                    }
                }
                if (((-10L) != ((+(!((l_243 && l_229[0]) & (safe_add_func_uint16_t_u_u(l_243, g_7[8]))))) || p_128)))
                {
                    struct S0 ** const l_250 = &l_154[3];
                    if (((safe_mul_func_int8_t_s_s(p_128, (((**l_228) > ((+g_7[8]) & ((*l_157) && g_184))) > ((l_248 != l_250) > 5L)))) ^ (+(safe_add_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(p_128, l_259)), (p_128 <= (*l_157)))), g_26.f0)), l_229[0])))))
                    {
                        (*g_37) = (g_7[3] && (p_128 == 1U));
                    }
                    else
                    {
                        uint32_t l_266 = 6U;
                        int32_t * const *l_273[9][6];
                        int i, j;
                        for (i = 0; i < 9; i++)
                        {
                            for (j = 0; j < 6; j++)
                                l_273[i][j] = &l_157;
                        }
                        (**l_228) = (safe_rshift_func_int8_t_s_u(((g_2 >= (0 == p_130)) == (safe_add_func_int32_t_s_s(0x51558E0FL, ((l_266 > (safe_add_func_uint16_t_u_u(p_128, p_128))) & g_184)))), (0L >= (safe_add_func_int64_t_s_s((safe_div_func_int64_t_s_s(0x5F7610E747D80A4BLL, (*l_157))), (0 != l_273[6][4]))))));
                    }
                    return p_128;
                }
                else
                {
                    for (g_184 = 0; (g_184 <= (-7)); g_184 = safe_sub_func_int8_t_s_s(g_184, 1))
                    {
                        return p_128;
                    }
                }
                (**l_228) = (((l_276 == &g_37) <= l_277) <= (((safe_mod_func_uint8_t_u_u(p_128, 0x33L)) == (safe_mul_func_int8_t_s_s(g_7[3], (g_7[2] || (safe_mul_func_uint16_t_u_u((*l_205), (*l_157))))))) >= (safe_mod_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((g_7[3] && ((*g_37) != (*p_129))), (safe_mul_func_int8_t_s_s((l_229[0] < g_184), (safe_sub_func_uint8_t_u_u(p_128, p_128)))))), ((safe_add_func_int32_t_s_s((-1L), (&g_7[7] == (*l_228)))) & (*l_157))))));
            }
            for (g_184 = (-12); (g_184 >= (-3)); g_184 = safe_add_func_uint16_t_u_u(g_184, 4))
            {
                uint32_t l_313 = 0U;
                struct S0 *l_327 = &l_236;
                uint8_t l_347 = 0U;
                uint16_t l_362 = 1U;
                int32_t l_367 = 1L;
                int i, j, k;
            }
        }
        else
        {
            uint32_t l_396[8][8][1];
            uint32_t l_402 = 0xCC3E4EA6L;
            int i, j, k;
            for (i = 0; i < 8; i++)
            {
                for (j = 0; j < 8; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_396[i][j][k] = 0xD324B573L;
                }
            }
            for (p_128 = 0; p_128 < 7; p_128 += 1)
            {
                l_144[p_128] = 7L;
            }
            l_402 |= (safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u((g_7[3] < l_396[3][2][0]), 1L)) && (**l_228)), (safe_div_func_int64_t_s_s((safe_mul_func_int8_t_s_s((~(*l_157)), (p_128 || g_192))), p_128)))), 1)), (&g_36 == l_401)));
            for (l_310 = 0; (l_310 < 17); l_310 = safe_add_func_uint64_t_u_u(l_310, 1))
            {
                int i;
                for (l_173 = 3; l_173 < 7; l_173 += 1)
                {
                    int i, j, k;
                    for (g_192 = 0; g_192 < 9; g_192 += 1)
                    {
                        for (g_2 = 0; g_2 < 5; g_2 += 4)
                        {
                            for (l_236.f0 = 0; l_236.f0 < 1; l_236.f0 += 1)
                            {
                                g_37 = p_129;
                            }
                        }
                    }
                }
                if ((*g_37))
                    break;
            }
        }
        (**l_248) = func_97(func_97(func_97(func_97(func_97(func_97((**l_248), p_128), p_128), g_7[0]), p_128), 0x90A3C8533CA28AB6LL), p_128);
    }
    else
    {
        int64_t l_409 = 0xCD342D46C6D65459LL;
        struct S0 l_417 = {0x773AL};
        int32_t *l_423 = &g_7[3];
        int64_t l_449 = 4L;
        int8_t l_479[10] = {0x5FL, 0x08L, 0x5FL, 0x08L, 0x5FL, 0x08L, 0x5FL, 0x08L, 0x5FL, 0x08L};
        int i;
        if (((((safe_div_func_uint64_t_u_u(p_128, ((safe_mod_func_int8_t_s_s(l_409, p_128)) && (&g_36 == &l_228)))) ^ (**l_228)) && (***l_401)) & g_7[3]))
        {
            uint8_t l_427[8] = {248U, 0U, 248U, 0U, 248U, 0U, 248U, 0U};
            int32_t *l_428 = 0;
            uint32_t l_429 = 4294967295U;
            uint64_t l_433[7] = {0xEA800BAB020CAECFLL, 0x80A0A2A0B72BA6D8LL, 0xEA800BAB020CAECFLL, 0x80A0A2A0B72BA6D8LL, 0xEA800BAB020CAECFLL, 0x80A0A2A0B72BA6D8LL, 0xEA800BAB020CAECFLL};
            uint64_t l_481 = 0x2341E351419D0CF3LL;
            int16_t l_482 = 0xA9F1L;
            int i;
            for (g_192 = 3; (g_192 == 35); g_192 = safe_add_func_uint64_t_u_u(g_192, 3))
            {
                uint16_t l_414 = 0x32A6L;
                struct S0 *l_465 = &g_439;
                struct S0 *l_474 = &l_417;
                (*g_37) = (safe_div_func_int8_t_s_s(p_128, l_414));
                if ((*p_129))
                {
                    for (g_2 = 0; (g_2 == (-1)); g_2 = safe_sub_func_uint16_t_u_u(g_2, 1))
                    {
                        int64_t l_420 = 0x4D40C0448F3F0D8ELL;
                        (**l_248) = func_97(func_97(l_417, (((safe_mod_func_uint8_t_u_u(g_184, g_26.f0)) & ((*p_129) >= (p_128 == l_420))) | 0x7DL)), p_128);
                        (*p_129) ^= 0xA5E73E8AL;
                    }
                }
                else
                {
                    const int32_t l_426[1] = {0x929365FEL};
                    int32_t **l_441 = &l_428;
                    int i;
                    (*g_37) = (safe_add_func_int32_t_s_s(l_409, g_7[7]));
                    for (p_128 = 4; p_128 < 7; p_128 += 2)
                    {
                        uint8_t l_432 = 0x96L;
                        int32_t **l_440 = &g_37;
                        (*l_440) = (*l_228);
                    }
                    (*l_441) = p_129;
                }
                if (l_414)
                    continue;
                if ((p_128 <= (&l_417 != 0)))
                {
                    int8_t l_448 = 0x2EL;
                    int32_t l_452 = 0x3C634273L;
                    int32_t *l_453[8];
                    int i;
                    for (i = 0; i < 8; i++)
                        l_453[i] = &g_2;
                    for (g_439.f0 = 12; (g_439.f0 < 9); g_439.f0 = safe_sub_func_uint32_t_u_u(g_439.f0, 2))
                    {
                        int32_t **l_444[2][7];
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 7; j++)
                                l_444[i][j] = &l_428;
                        }
                        g_37 = &g_7[3];
                        return p_128;
                    }
                    (*p_129) ^= (*g_37);
                    (*l_423) &= (p_128 < (6L ^ 18446744073709551613U));
                    if ((((((safe_unary_minus_func_uint64_t_u(p_128)) ^ (0 != &g_37)) | ((*l_423) & l_448)) | (**l_228)) & (((p_128 == ((!l_448) & (g_184 ^ l_449))) <= p_128) && (+(((g_192 & g_2) != g_184) < (safe_mod_func_uint32_t_u_u(l_452, ((*g_37) ^ (***l_401)))))))))
                    {
                        (*p_129) = (*p_129);
                    }
                    else
                    {
                        const uint8_t l_460 = 255U;
                        (***l_401) |= (g_184 || p_128);
                        l_428 = &g_7[3];
                    }
                }
                else
                {
                    (*p_129) ^= (p_130 != &g_36);
                }
            }
            (**l_228) = ((g_7[3] <= (safe_mod_func_int16_t_s_s((0x587FL != 0x4B10L), 0xA09AL))) >= (*l_423));
            if ((l_479[8] != (((safe_unary_minus_func_uint32_t_u(p_128)) | (0 == &l_423)) | ((*g_37) > 0xA2265083L))))
            {
                (*p_129) &= (g_7[0] ^ p_128);
            }
            else
            {
                l_482 ^= l_481;
            }
        }
        else
        {
            int i;
            for (g_184 = 0; g_184 < 10; g_184 += 1)
            {
                const int32_t *l_489 = &g_2;
                int16_t l_492 = 0xEA2FL;
                g_493 = (safe_mul_func_int16_t_s_s((((*p_130) == &g_37) == (l_479[(uint16_t)(g_184) % 10] | l_479[(uint16_t)(g_184) % 10])), (safe_sub_func_int8_t_s_s((safe_mul_func_uint32_t_u_u(g_26.f0, ((*l_423) != (((*l_228) == l_489) <= (safe_mod_func_int64_t_s_s(p_128, g_7[8])))))), ((*l_423) == ((*l_489) ^ l_492))))));
                if (((safe_sub_func_uint16_t_u_u((*l_489), (p_128 | p_128))) > (l_479[(uint16_t)(g_184) % 10] >= (((*p_130) != &g_37) < (safe_lshift_func_uint8_t_u_u(((&g_438 == &g_156) && ((*l_489) & l_479[(uint16_t)(g_184) % 10])), g_184))))))
                {
                    int32_t *l_500 = 0;
                    for (l_449 = 0; (l_449 <= 18); l_449 = safe_add_func_int64_t_s_s(l_449, 4))
                    {
                        int32_t **l_501 = &l_423;
                        (*l_423) = (*g_37);
                        (*l_501) = l_500;
                        (*g_37) |= (*p_129);
                        return l_479[(uint16_t)(g_184) % 10];
                    }
                    (*g_156) = func_97(func_97((*p_131), g_493), g_439.f0);
                    (*p_129) |= (safe_rshift_func_uint16_t_u_u((g_192 < (&g_438 == &g_438)), 3));
                    (*l_249) = (*p_131);
                }
                else
                {
                    (*p_129) = (0 != &l_228);
                }
            }
        }
        (*g_37) &= (&l_423 != (*l_401));
        if ((*g_37))
        {
            uint32_t l_510 = 0U;
            for (g_2 = 0; (g_2 <= 16); g_2 = safe_add_func_uint32_t_u_u(g_2, 4))
            {
                return g_2;
            }
            for (l_449 = 0; (l_449 == 6); l_449 = safe_add_func_int64_t_s_s(l_449, 1))
            {
                return (*l_423);
            }
            (*p_129) &= (0xCCC2L ^ (l_510 != ((safe_add_func_int32_t_s_s((((***l_401) <= g_7[3]) ^ g_493), (*p_129))) & (((p_128 & (*l_423)) >= (g_2 > g_192)) == ((safe_mul_func_int16_t_s_s(p_128, p_128)) || (p_128 == g_493))))));
        }
        else
        {
            int i;
            for (l_417.f0 = 0; l_417.f0 < 7; l_417.f0 += 1)
            {
                int32_t **l_520 = &l_423;
                int i;
                for (p_128 = 0; p_128 < 7; p_128 += 1)
                {
                    uint32_t l_517[6] = {2U, 0x71EA74E1L, 0xDB83C187L, 0xDB83C187L, 0x71EA74E1L, 2U};
                    int32_t **l_518 = &l_423;
                    int i;
                    g_438 = (*l_248);
                    if (l_409)
                        goto lbl_519;
lbl_519:
                    (*l_518) = func_49(p_129, (safe_mul_func_int16_t_s_s(0x2E51L, g_2)), (***l_401), &g_439, l_517[0]);
                    if ((*p_129))
                        break;
                }
                (*l_520) = (**l_401);
            }
            for (g_26.f0 = (-30); (g_26.f0 != (-5)); g_26.f0 = safe_add_func_uint64_t_u_u(g_26.f0, 1))
            {
                int i;
                for (l_145 = 0; l_145 < 10; l_145 += 7)
                {
                    int8_t l_527 = 5L;
                    l_527 ^= ((l_144[(uint16_t)(l_417.f0) % 7] < (((safe_add_func_uint32_t_u_u((l_479[(uint8_t)(l_145) % 10] ^ g_493), (safe_div_func_int64_t_s_s(g_7[2], p_128)))) && p_128) | l_144[(uint16_t)(l_417.f0) % 7])) | ((*g_37) | (!(*p_129))));
                    (*g_37) |= l_479[(uint8_t)(l_145) % 10];
                }
            }
            (*p_131) = (*g_156);
            (*p_129) = (*g_37);
        }
        if ((*g_37))
        {
            int32_t l_532[3];
            struct S0 *l_539[4][2][4];
            int32_t **l_544[7][9][1];
            int8_t l_570[2][1];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_532[i] = 4L;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_539[i][j][k] = &l_417;
                }
            }
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 9; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_544[i][j][k] = &g_37;
                }
            }
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_570[i][j] = (-2L);
            }
            for (l_409 = 0; (l_409 <= (-19)); l_409 = safe_sub_func_int32_t_s_s(l_409, 6))
            {
                int32_t **l_543 = &l_423;
                int i;
            }
            g_37 = func_49(p_129, (**l_228), g_184, &l_417, g_26.f0);
            if ((&l_249 == &p_131))
            {
                int i;
                for (l_145 = 0; l_145 < 10; l_145 += 7)
                {
                    int32_t l_549 = 2L;
                    for (g_2 = 19; (g_2 > 3); g_2 = safe_sub_func_int16_t_s_s(g_2, 1))
                    {
                        (*p_129) = (safe_mul_func_uint16_t_u_u(l_479[(uint8_t)(l_145) % 10], ((&g_36 == 0) & (0L != p_128))));
                    }
                    if ((l_549 || (safe_sub_func_uint8_t_u_u(((((safe_div_func_uint8_t_u_u(l_549, g_26.f0)) != (l_479[(uint8_t)(l_145) % 10] >= p_128)) < l_479[(uint8_t)(l_145) % 10]) && ((safe_add_func_uint8_t_u_u((l_479[(uint8_t)(l_145) % 10] >= p_128), p_128)) > ((safe_lshift_func_uint8_t_u_u(l_479[(uint8_t)(l_145) % 10], 1)) == g_184))), ((~((p_128 || l_479[(uint8_t)(l_145) % 10]) >= (&l_539[3][0][2] != &p_131))) >= (safe_add_func_int16_t_s_s(p_128, (safe_mul_func_uint16_t_u_u((p_128 & l_549), (safe_sub_func_int64_t_s_s(l_479[(uint8_t)(l_145) % 10], g_439.f0)))))))))))
                    {
                        (*l_423) = (*p_129);
                    }
                    else
                    {
                        (*p_129) = (safe_lshift_func_uint16_t_u_s(((g_439.f0 | (safe_lshift_func_uint8_t_u_s(((g_26.f0 < g_2) > 0x4CA14DCAE1B7B422LL), 5))) >= (&p_131 != &l_539[2][1][1])), 9));
                        return l_570[1][0];
                    }
                }
                (*l_423) = (g_184 ^ (safe_lshift_func_int8_t_s_u((-1L), (safe_mod_func_uint8_t_u_u((((p_128 != g_493) || (g_26.f0 <= (*l_423))) && (safe_mul_func_int16_t_s_s(p_128, (g_192 && p_128)))), g_192)))));
            }
            else
            {
                uint32_t l_586 = 0x5DF07A8AL;
                for (g_192 = 0; (g_192 >= 4); g_192 = safe_add_func_int16_t_s_s(g_192, 1))
                {
                    uint64_t l_587[5][8][1];
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 8; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_587[i][j][k] = 1U;
                        }
                    }
                    for (g_26.f0 = 14; (g_26.f0 >= (-19)); g_26.f0 = safe_sub_func_uint8_t_u_u(g_26.f0, 4))
                    {
                        uint8_t l_585 = 0x17L;
                    }
                }
                for (l_145 = 0; l_145 < 10; l_145 += 1)
                {
                    l_479[l_145] = 0x70L;
                }
                (*g_438) = func_97(func_97(func_97((*g_438), p_128), (((safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(l_586, (*l_423))), 3)) ^ g_26.f0) > g_184)), 0x23973744CB75A3F8LL);
            }
            for (g_439.f0 = 1; g_439.f0 < 3; g_439.f0 += 3)
            {
                int32_t l_601[6] = {(-1L), 0x4E525C4BL, (-1L), 0x4E525C4BL, (-1L), 0x4E525C4BL};
                int32_t **l_618[2][6];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 6; j++)
                        l_618[i][j] = &l_423;
                }
                (*p_129) &= (p_128 || ((0 != p_131) <= (safe_div_func_uint16_t_u_u((((*l_423) & (safe_rshift_func_int8_t_s_u(g_493, g_7[3]))) || (g_598 ^ ((*l_423) ^ p_128))), (safe_add_func_int8_t_s_s(((*p_129) < g_192), l_601[1]))))));
                (*l_249) = func_97(func_97(func_97(func_97(func_97(func_97((*p_131), g_2), g_184), (safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(g_26.f0, g_439.f0)), (*l_423)))), ((safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(g_493, g_439.f0)), ((*p_129) ^ (*p_129)))) != p_128)), l_532[(uint16_t)(g_439.f0) % 3]), ((safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((!g_26.f0) != (safe_rshift_func_int16_t_s_u(p_128, g_598))), ((p_128 ^ p_128) <= (g_439.f0 >= g_7[3])))), (safe_lshift_func_uint16_t_u_s(g_493, 13)))) <= ((-3L) || (((&l_423 == l_618[1][2]) >= (l_532[(uint16_t)(g_439.f0) % 3] & l_532[(uint32_t)((g_439.f0 + 2)) % 3])) | (*l_423)))));
            }
        }
        else
        {
            uint64_t l_627[1];
            int i;
            for (i = 0; i < 1; i++)
                l_627[i] = 18446744073709551611U;
            (*p_129) &= (**l_228);
            (***l_401) = (safe_mul_func_uint16_t_u_u(((&g_438 == &l_249) > ((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(l_627[0], g_7[7])), (g_26.f0 | p_128))), (safe_rshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s(g_493, p_128)), (p_128 >= g_184))))) ^ p_128)), (0x799945AEA661446CLL != (safe_mul_func_uint16_t_u_u(l_627[0], 1L)))));
        }
    }
    return p_128;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_7[i], "g_7[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_26.f0, "g_26.f0", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_439.f0, "g_439.f0", print_hash_value);
    transparent_crc(g_493, "g_493", print_hash_value);
    transparent_crc(g_598, "g_598", print_hash_value);
    transparent_crc(g_689, "g_689", print_hash_value);
    transparent_crc(g_818, "g_818", print_hash_value);
    transparent_crc(g_895, "g_895", print_hash_value);
    transparent_crc(g_932, "g_932", print_hash_value);
    transparent_crc(g_1019, "g_1019", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_1062[i][j][k], "g_1062[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1155, "g_1155", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1180[i], "g_1180[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1335, "g_1335", print_hash_value);
    transparent_crc(g_1368.f0, "g_1368.f0", print_hash_value);
    transparent_crc(g_1407, "g_1407", print_hash_value);
    transparent_crc(g_1476.f0, "g_1476.f0", print_hash_value);
    transparent_crc(g_1496, "g_1496", print_hash_value);
    transparent_crc(g_1535, "g_1535", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1591[i][j], "g_1591[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1611, "g_1611", print_hash_value);
    transparent_crc(g_1613, "g_1613", print_hash_value);
    transparent_crc(g_1678, "g_1678", print_hash_value);
    transparent_crc(g_1723, "g_1723", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL);
    return 0;
}
