# 1 "found/test0049.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "found/test0049.c"
# 10 "found/test0049.c"
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
# 11 "found/test0049.c" 2


long __undefined;


struct S0 {
   uint32_t f0;
   uint32_t f1;
   int64_t f2;
   uint64_t f3;
   uint16_t f4;
   const volatile uint32_t f5;
   volatile uint8_t f6;
};


uint8_t g_2[8] = {0U, 0U, 0xABL, 0xECL, 0x16L, 0xECL, 0xABL, 0U};
int32_t g_25 = 0xE0D1B713L;
int32_t * volatile g_26[5][2][2] = {{{&g_25, &g_25}, {&g_25, &g_25}}, {{&g_25, &g_25}, {&g_25, &g_25}}, {{&g_25, &g_25}, {&g_25, &g_25}}, {{&g_25, &g_25}, {&g_25, &g_25}}, {{&g_25, &g_25}, {&g_25, &g_25}}};
int32_t g_61 = 0x51ECDE47L;
int32_t *g_64 = &g_25;
int32_t ** volatile g_63 = &g_64;
int32_t * volatile g_75 = &g_61;
int32_t *g_91 = 0;
int32_t g_93[5] = {0L, 0L, 0L, 0L, 0L};
const int32_t *g_101 = &g_93[0];
const int32_t **g_100 = &g_101;
struct S0 g_103 = {0U,0xA4B52006L,1L,18446744073709551609U,0x4C00L,0U,255U};
int32_t * volatile g_141 = &g_93[4];
const uint16_t g_151 = 65535U;
struct S0 *g_203[5] = {&g_103, &g_103, &g_103, &g_103, &g_103};
struct S0 ** const volatile g_202 = &g_203[1];
struct S0 **g_207 = &g_203[1];
struct S0 *** volatile g_206 = &g_207;
int32_t *g_323[9][8] = {{&g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2]}, {&g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2]}, {&g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2]}, {&g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2]}, {&g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2]}, {&g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2]}, {&g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2]}, {&g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2]}, {&g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2], &g_93[2]}};
int32_t g_423 = 0x828D54BFL;
uint64_t g_477 = 8U;
struct S0 *** const volatile g_500 = &g_207;



const uint16_t func_1(void);
int64_t func_18(uint32_t p_19, uint64_t p_20, uint32_t p_21, uint16_t p_22);
uint64_t func_29(uint16_t p_30, int8_t p_31, int32_t * p_32, int32_t * p_33, const int32_t ** p_34);
int32_t * func_39(const int32_t * p_40, int32_t ** p_41, int32_t * p_42);
int32_t * func_43(int64_t p_44, int32_t * p_45, int64_t p_46, uint64_t p_47);
int8_t func_51(uint16_t p_52);
int32_t func_53(int32_t * p_54);
int32_t * func_55(uint8_t p_56);
int32_t func_83(int32_t * p_84, int32_t p_85);
int32_t * func_86(uint32_t p_87, const uint64_t p_88, uint16_t p_89, int8_t p_90);
# 70 "found/test0049.c"
const uint16_t func_1(void)
{
    uint32_t l_11 = 0x3B01D91EL;
    int32_t *l_555[5][6];
    int64_t l_560 = 0x90D8F606652C4A15LL;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
            l_555[i][j] = &g_61;
    }
    (*g_141) = (((!g_2[7]) || (safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u((safe_add_func_int32_t_s_s(g_2[7], g_2[0])), (g_2[7] && l_11))), 12)), 1))) && ((safe_add_func_int64_t_s_s(g_2[2], (safe_mod_func_uint32_t_u_u((safe_mod_func_int64_t_s_s(func_18(l_11, g_423, g_2[2], g_93[1]), (l_11 & g_103.f2))), g_2[7])))) == g_151));
    (*g_141) &= (*g_64);
    l_560 ^= (safe_lshift_func_uint16_t_u_s(65535U, (safe_rshift_func_uint8_t_u_u(func_83(l_555[0][2], g_93[0]), 5))));
    return g_2[5];
}







int64_t func_18(uint32_t p_19, uint64_t p_20, uint32_t p_21, uint16_t p_22)
{
    int32_t *l_24 = &g_25;
    int32_t **l_23[4];
    struct S0 ** const *l_538 = &g_207;
    struct S0 * const *l_543 = 0;
    uint32_t l_548 = 0U;
    int i;
    for (i = 0; i < 4; i++)
        l_23[i] = &l_24;
    g_26[4][1][0] = 0;
    l_548 &= (safe_mod_func_uint64_t_u_u((*l_24), (((safe_unary_minus_func_int16_t_s((l_538 == &g_207))) && (safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s((g_151 < g_103.f4), ((*l_538) != l_543))), (safe_sub_func_int64_t_s_s((g_25 & p_19), (safe_div_func_int64_t_s_s(g_93[1], p_19))))))) & (p_19 > (((!p_19) != (*l_24)) < (*l_24))))));
    for (g_103.f3 = (-29); (g_103.f3 > 5); g_103.f3 = safe_add_func_uint8_t_u_u(g_103.f3, 1))
    {
        uint32_t l_551 = 0U;
        struct S0 ***l_552 = &g_207;
        if (l_551)
            break;
        (*l_552) = 0;
        (*g_100) = 0;
        for (p_19 = 0; (p_19 != 20); p_19 = safe_add_func_int8_t_s_s(p_19, 4))
        {
            return g_477;
        }
    }
    return p_22;
}







uint64_t func_29(uint16_t p_30, int8_t p_31, int32_t * p_32, int32_t * p_33, const int32_t ** p_34)
{
    int32_t *l_35[4];
    int i;
    for (i = 0; i < 4; i++)
        l_35[i] = &g_25;
    l_35[2] = 0;
    (*p_33) |= (0xD9C8L != (g_2[6] | (safe_unary_minus_func_uint32_t_u((0 == l_35[2])))));
    return g_2[5];
}







int32_t * func_39(const int32_t * p_40, int32_t ** p_41, int32_t * p_42)
{
    uint8_t l_516 = 9U;
    struct S0 **l_517 = &g_203[1];
    int32_t **l_520 = 0;
    int16_t l_525[8] = {0x8024L, 0x8024L, 6L, 1L, 0xC4C8L, 1L, 6L, 0x8024L};
    int32_t *l_528 = 0;
    int i;
    (*p_41) = l_528;
    for (g_61 = 0; (g_61 == (-4)); g_61 = safe_sub_func_int32_t_s_s(g_61, 3))
    {
        int16_t l_533 = 6L;
        struct S0 **l_534[3][5][3];
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 5; j++)
            {
                for (k = 0; k < 3; k++)
                    l_534[i][j][k] = 0;
            }
        }
        (*p_42) = (safe_div_func_int64_t_s_s(((0U != (l_533 && (l_534[0][2][2] != (*g_206)))) <= 0L), l_533));
        if ((**g_100))
            continue;
    }
    (*g_100) = func_55(g_423);
    (*p_42) = (safe_add_func_int32_t_s_s((l_517 == (*g_500)), ((0xAB6A6ED4E03C8B1DLL | g_151) & g_103.f3)));
    return (*g_63);
}







int32_t * func_43(int64_t p_44, int32_t * p_45, int64_t p_46, uint64_t p_47)
{
    uint8_t l_48 = 1U;
    struct S0 * const *l_312[10];
    const int32_t **l_322 = &g_101;
    int32_t *l_383 = &g_93[0];
    uint32_t l_387 = 0U;
    int16_t l_509[6];
    int i;
    for (i = 0; i < 10; i++)
        l_312[i] = &g_203[1];
    for (i = 0; i < 6; i++)
        l_509[i] = (-1L);
lbl_448:
    (*p_45) ^= 0xC18A0A82L;
    if (l_48)
    {
        struct S0 *** const l_308 = &g_207;
        int32_t l_320 = 0L;
        int32_t *l_321[9];
        uint16_t l_362 = 0xB2E1L;
        int32_t *l_447 = 0;
        int i, j, k;
        for (i = 0; i < 9; i++)
            l_321[i] = 0;
        for (p_47 = 0; p_47 < 5; p_47 += 1)
        {
            for (p_44 = 1; p_44 < 2; p_44 += 1)
            {
                for (l_48 = 0; l_48 < 2; l_48 += 1)
                {
                    uint8_t l_307 = 0xA1L;
                    struct S0 *l_339 = 0;
                    for (p_46 = 0; (p_46 <= (-15)); p_46 = safe_sub_func_int8_t_s_s(p_46, 4))
                    {
                        uint64_t l_301 = 1U;
                        int32_t *l_309 = &g_93[0];
                        const int32_t **l_324[6][7][1];
                        int i, j, k;
                        for (i = 0; i < 6; i++)
                        {
                            for (j = 0; j < 7; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_324[i][j][k] = 0;
                            }
                        }
                        if ((func_51(p_46) > p_44))
                        {
                            for (g_103.f1 = 0; (g_103.f1 <= 57); g_103.f1 = safe_add_func_uint8_t_u_u(g_103.f1, 1))
                            {
                                int32_t l_304 = 8L;
                                l_309 = (*g_63);
                            }
                            (*p_45) = (~(*p_45));
                        }
                        else
                        {
                            uint32_t l_315 = 8U;
                            (*l_309) = (safe_div_func_uint32_t_u_u(0xE9B237B2L, (((l_312[7] == (*g_206)) >= (p_46 ^ (safe_mul_func_uint8_t_u_u(g_151, (l_315 || p_44))))) || p_46)));
                        }
                        (*p_45) |= ((safe_mul_func_uint16_t_u_u(0xC52CL, g_103.f2)) | (*g_141));
                        (*p_45) = ((((safe_div_func_uint8_t_u_u((0 != (*g_100)), 0x8BL)) < p_47) <= func_29((0xB3D6F203CD6E0BD6LL < g_103.f5), l_320, l_321[1], &l_320, l_322)) != (p_46 && func_29(p_44, func_29(p_47, g_93[0], g_323[2][6], &g_93[0], l_324[5][3][0]), p_45, p_45, &g_101)));
                    }
                    if ((*g_141))
                    {
                        const int8_t l_334 = (-1L);
                        (*l_322) = func_86(l_307, (g_93[0] >= (safe_mul_func_int8_t_s_s(((safe_unary_minus_func_uint16_t_u((safe_div_func_int8_t_s_s(p_44, p_46)))) > (safe_mul_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(g_93[4], l_334)), (p_46 == p_46)))), (safe_sub_func_int32_t_s_s(((p_46 == g_2[7]) >= (*p_45)), 4294967295U))))), 65535U, (-7L));
                        (*p_45) |= (safe_add_func_uint32_t_u_u((l_339 == (*g_202)), (safe_mod_func_uint8_t_u_u(((safe_unary_minus_func_uint64_t_u(g_93[0])) == (safe_lshift_func_uint16_t_u_u(0U, 9))), (g_93[0] && g_103.f2)))));
                        for (g_103.f1 = 0; (g_103.f1 >= 18); g_103.f1 = safe_add_func_uint16_t_u_u(g_103.f1, 7))
                        {
                            for (g_103.f1 = (-8); (g_103.f1 <= 26); g_103.f1 = safe_add_func_uint32_t_u_u(g_103.f1, 1))
                            {
                                const struct S0 *l_349 = 0;
                                int32_t l_350 = 0x0440AC5AL;
                                (*p_45) = (p_47 != (l_349 != 0));
                                (*p_45) = l_307;
                                l_350 ^= (*p_45);
                                (*g_100) = p_45;
                            }
                        }
                    }
                    else
                    {
                        for (g_103.f1 = 0; (g_103.f1 != 38); g_103.f1 = safe_add_func_uint64_t_u_u(g_103.f1, 1))
                        {
                            for (g_103.f4 = (-2); (g_103.f4 != 23); g_103.f4 = safe_add_func_uint32_t_u_u(g_103.f4, 6))
                            {
                                int8_t l_357 = 0xE9L;
                                l_339 = (**g_206);
                                (*g_63) = p_45;
                                (*g_64) ^= l_357;
                            }
                        }
                    }
                }
            }
        }
        if ((((g_93[0] | (safe_add_func_int8_t_s_s((&p_45 != &p_45), g_103.f2))) == (safe_mod_func_uint16_t_u_u((p_46 <= ((p_46 && g_61) > p_44)), (l_48 & (g_93[0] < ((*p_45) != p_44)))))) | l_362))
        {
            struct S0 ***l_377 = &g_207;
            int32_t l_378 = 1L;
            const int32_t l_386 = 2L;
            struct S0 **l_388 = 0;
            int32_t *l_397 = &g_93[2];
            int i;
lbl_370:
            for (g_103.f2 = 5; g_103.f2 < 10; g_103.f2 += 7)
            {
                int32_t l_365 = (-7L);
                int i;
            }
            if ((**g_63))
            {
                int32_t *l_371 = &g_61;
                if (p_46)
                    goto lbl_370;
                (*g_100) = (*l_322);
                return l_371;
            }
            else
            {
                int32_t l_375 = (-9L);
                struct S0 * const **l_376 = &l_312[0];
                int i, j, k;
                for (g_103.f6 = 0; g_103.f6 < 5; g_103.f6 += 5)
                {
                    for (g_103.f3 = 0; g_103.f3 < 2; g_103.f3 += 2)
                    {
                        for (g_103.f4 = 1; g_103.f4 < 2; g_103.f4 += 1)
                        {
                            int i;
                        }
                    }
                }
                for (g_103.f4 = (-22); (g_103.f4 <= 26); g_103.f4 = safe_add_func_uint64_t_u_u(g_103.f4, 1))
                {
                    for (l_362 = 0; (l_362 != 2); l_362 = safe_add_func_uint8_t_u_u(l_362, 3))
                    {
                        return p_45;
                    }
                    if ((*g_141))
                    {
                        (*p_45) |= (g_2[7] == 0xE9466CD48A2287F0LL);
                    }
                    else
                    {
                        return l_383;
                    }
                }
                (*p_45) |= (-1L);
            }
            (*l_322) = (*g_63);
            if ((func_83(0, p_46) <= (g_151 < (((l_377 != 0) == ((safe_add_func_uint32_t_u_u(p_47, l_386)) ^ (l_387 & (*p_45)))) && (&g_203[0] != l_388)))))
            {
                uint64_t l_395 = 0x7231DB953C488983LL;
                for (l_387 = (-26); (l_387 >= 33); l_387 = safe_add_func_uint16_t_u_u(l_387, 1))
                {
                    const int32_t **l_398 = &g_101;
                    int i;
                    for (g_103.f0 = 4; g_103.f0 < 5; g_103.f0 += 1)
                    {
                        uint64_t l_396 = 7U;
                        (*p_45) = (((safe_sub_func_int8_t_s_s((p_47 <= (safe_sub_func_uint32_t_u_u((&g_93[(g_103.f0) % 5] != (*l_322)), (*g_141)))), (p_46 == 0x3D09A280L))) | g_93[(g_103.f0) % 5]) & g_93[(g_103.f0) % 5]);
                        (*g_100) = p_45;
                        g_93[(g_103.f0) % 5] = ((*p_45) > (g_103.f3 ^ (p_44 & ((g_103.f2 > 0x3CL) & p_47))));
                    }
                    if ((*p_45))
                        break;
                    for (g_103.f0 = 0; (g_103.f0 != 49); g_103.f0 = safe_add_func_int8_t_s_s(g_103.f0, 1))
                    {
                        (*g_100) = p_45;
                    }
                    (*g_100) = func_86(1U, g_2[4], p_47, g_103.f4);
                }
                (*g_100) = 0;
            }
            else
            {
                int32_t *l_424[6][2][1];
                const int32_t **l_457 = 0;
                int i, j, k;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_424[i][j][k] = &g_25;
                    }
                }
                if (((*l_383) ^ (p_46 | (safe_lshift_func_int16_t_s_s(((safe_unary_minus_func_int16_t_s(g_2[7])) | (0x4CL == g_103.f6)), 12)))))
                {
                    int32_t *l_430 = &g_93[2];
                    struct S0 ** const l_439 = &g_203[4];
                    if ((*p_45))
                    {
                        return l_430;
                    }
                    else
                    {
                        int64_t l_440 = 0xA5E2A0ED4432CD75LL;
                        (*p_45) = (safe_div_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(p_46, g_103.f1)), (safe_sub_func_int32_t_s_s((((l_439 == l_312[7]) | func_29(l_440, g_103.f4, (*g_63), &g_93[1], l_322)) != (-1L)), (*g_64))))), p_46));
                        (*l_397) &= 0x80E38D54L;
                        (*l_383) ^= (g_103.f6 >= ((*p_45) ^ (p_46 && (p_45 != p_45))));
                        (*l_322) = p_45;
                    }
                    (*l_322) = func_86(p_44, p_47, 0x7BA1L, (-6L));
                    if (g_103.f0)
                        goto lbl_448;
                }
                else
                {
                    struct S0 ** const *l_449 = 0;
                    int i;
                    if ((func_51(g_2[7]) & 0U))
                    {
                        (*g_207) = 0;
                        (*l_397) = (l_449 != &l_312[7]);
                    }
                    else
                    {
                        (*l_397) = 0xEA11E0E5L;
                        return p_45;
                    }
                    for (g_103.f3 = 0; g_103.f3 < 5; g_103.f3 += 1)
                    {
                        (*p_45) = (safe_lshift_func_int16_t_s_s(g_93[0], 9));
                    }
                }
                (*p_45) |= (*l_383);
                for (l_320 = 0; (l_320 >= (-21)); l_320 = safe_sub_func_int32_t_s_s(l_320, 1))
                {
                    const int32_t **l_469 = &g_101;
                    int i;
                    for (p_46 = 28; (p_46 <= 0); p_46 = safe_sub_func_uint8_t_u_u(p_46, 8))
                    {
                        int32_t *l_456 = &l_320;
                        uint64_t l_458 = 0x3321925539DB3BD3LL;
                        (*g_141) &= ((*p_45) > l_458);
                        (*l_397) |= (p_46 ^ (~(~g_103.f4)));
                    }
                    if (p_46)
                        goto lbl_466;
lbl_466:
                    for (g_103.f3 = 2; g_103.f3 < 5; g_103.f3 += 3)
                    {
                        int8_t l_463[2][10] = {{(-5L), (-5L), 4L, (-8L), 0x61L, (-8L), 4L, (-5L), (-5L), 4L}, {(-5L), (-5L), 4L, (-8L), 0x61L, (-8L), 4L, (-5L), (-5L), 4L}};
                        int i, j;
                        (*p_45) &= (+(g_93[(g_103.f3) % 5] > (safe_rshift_func_int8_t_s_u(((safe_mul_func_uint16_t_u_u((g_93[(g_103.f3) % 5] < l_463[1][7]), (l_463[0][5] == g_25))) ^ (safe_mod_func_int16_t_s_s(((*l_383) > g_93[(g_103.f3) % 5]), g_93[(g_103.f3) % 5]))), 6))));
                    }
                    (*l_383) = (safe_sub_func_int16_t_s_s(p_46, (1L | p_44)));
                    (*p_45) &= (safe_div_func_int32_t_s_s(func_53(func_55(g_151)), (p_44 ^ (-1L))));
                }
                (*l_383) = (*g_75);
            }
        }
        else
        {
            return l_383;
        }
    }
    else
    {
        uint64_t l_475 = 0xFB466774B2E43A9CLL;
        struct S0 *l_484 = &g_103;
        if (func_51(g_2[7]))
        {
            uint32_t l_476 = 4U;
            const int32_t **l_479 = &g_101;
            int32_t l_486 = 0L;
            for (g_103.f3 = (-24); (g_103.f3 == 21); g_103.f3 = safe_add_func_uint64_t_u_u(g_103.f3, 8))
            {
                uint64_t l_474 = 0xC3E6C5A9529CCDEELL;
                int i;
                (*l_383) = l_474;
                for (g_423 = 1; g_423 < 5; g_423 += 1)
                {
                    int16_t l_478[2];
                    struct S0 *l_485[10][7][1];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_478[i] = 4L;
                    for (i = 0; i < 10; i++)
                    {
                        for (j = 0; j < 7; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_485[i][j][k] = 0;
                        }
                    }
                    (*p_45) ^= (-7L);
                    if (l_475)
                        continue;
                    (*l_383) |= (func_29(g_151, (l_476 && (((p_47 < p_46) || (g_477 || l_478[1])) > (*p_45))), p_45, p_45, l_479) || (safe_lshift_func_int16_t_s_u(g_103.f6, 7)));
                    for (l_476 = 0; (l_476 <= 14); l_476 = safe_add_func_uint32_t_u_u(l_476, 1))
                    {
                        int32_t **l_497[10][4];
                        const int32_t *l_499 = &l_486;
                        const int32_t **l_498 = &l_499;
                        int i, j;
                        for (i = 0; i < 10; i++)
                        {
                            for (j = 0; j < 4; j++)
                                l_497[i][j] = &g_323[2][6];
                        }
                        (*p_45) = (0xB18B57B5L & (-1L));
                        (*g_75) |= g_93[(uint32_t)(g_423) % 5];
                    }
                }
                (*g_63) = 0;
            }
        }
        else
        {
            (*g_500) = (*g_206);
            return p_45;
        }
    }
    (*l_383) = ((g_151 | 0x9FE4L) == ((*l_383) & (p_47 <= (safe_lshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s((g_25 || p_44), (p_47 || g_103.f6))), 7)))));
    (*g_100) = (*g_100);
    return (*g_63);
}







int8_t func_51(uint16_t p_52)
{
    int32_t *l_245[8][3];
    int i, j;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
            l_245[i][j] = &g_25;
    }
    (*g_75) = func_53(l_245[5][2]);
    (*g_141) = p_52;
    for (g_61 = 0; g_61 < 8; g_61 += 7)
    {
        for (g_103.f2 = 0; g_103.f2 < 3; g_103.f2 += 3)
        {
            int32_t *l_256 = &g_25;
            int32_t l_262 = 0x785FCD99L;
            int32_t *l_279 = &g_93[0];
            for (g_103.f3 = 0; (g_103.f3 != 3); g_103.f3 = safe_add_func_int64_t_s_s(g_103.f3, 1))
            {
                uint16_t l_248 = 0x9B5DL;
                int32_t l_260 = 0x8DC90489L;
                const int32_t **l_270 = &g_101;
                int16_t l_271 = (-1L);
                struct S0 *l_294 = &g_103;
                l_248 = (*g_141);
                for (g_103.f0 = 0; (g_103.f0 >= 47); g_103.f0 = safe_add_func_uint16_t_u_u(g_103.f0, 1))
                {
                    struct S0 ***l_253[4];
                    int32_t l_269 = (-6L);
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_253[i] = &g_207;
                    for (g_103.f4 = 3; g_103.f4 < 8; g_103.f4 += 8)
                    {
                        for (p_52 = 0; p_52 < 3; p_52 += 1)
                        {
                            return p_52;
                        }
                    }
                    if (((safe_div_func_uint16_t_u_u(((&g_202 != l_253[0]) ^ (safe_lshift_func_uint8_t_u_s(g_61, 4))), l_248)) && (safe_mul_func_int8_t_s_s(p_52, 0x98L))))
                    {
                        int i, j, k;
                        for (g_103.f4 = 0; g_103.f4 < 5; g_103.f4 += 4)
                        {
                            for (g_103.f1 = 0; g_103.f1 < 2; g_103.f1 += 1)
                            {
                                for (l_248 = 1; l_248 < 2; l_248 += 1)
                                {
                                    int32_t l_261 = 0x2BCD5C98L;
                                    l_260 = (safe_unary_minus_func_int8_t_s(g_103.f0));
                                    l_261 &= (*g_64);
                                    l_262 &= l_261;
                                }
                            }
                        }
                    }
                    else
                    {
                        int8_t l_273 = 3L;
                        int32_t l_274 = 4L;
                        const int32_t **l_280 = &g_101;
                        l_262 |= (*g_141);
                        if ((~(safe_mul_func_int16_t_s_s(l_260, g_103.f4))))
                        {
                            uint32_t l_265 = 4294967295U;
                            int32_t l_266 = 0x130D131BL;
                            l_262 ^= p_52;
                            l_265 &= p_52;
                            l_266 |= l_265;
                        }
                        else
                        {
                            int32_t *l_272 = &l_262;
                            l_273 = (*l_272);
                            l_274 |= (*g_75);
                            l_274 &= (*l_272);
                        }
                        for (l_248 = 0; (l_248 <= 45); l_248 = safe_add_func_uint64_t_u_u(l_248, 1))
                        {
                            int8_t l_285 = 0L;
                            (*l_279) = (safe_lshift_func_int8_t_s_s((g_93[0] & ((safe_mod_func_uint16_t_u_u(l_285, (safe_rshift_func_uint16_t_u_s((!g_93[0]), 2)))) & 1L)), 5));
                        }
                        (*l_279) &= p_52;
                    }
                    l_260 = 0x82DAD234L;
                }
                if ((*g_141))
                {
                    (*l_279) = (&g_91 != l_270);
                }
                else
                {
                    if ((+(safe_mod_func_uint16_t_u_u((*l_279), 0x302AL))))
                    {
                        uint64_t l_291[3][1];
                        int i, j;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_291[i][j] = 8U;
                        }
                        return l_291[1][0];
                    }
                    else
                    {
                        int i, j;
                        (*l_270) = l_245[5][2];
                        for (l_271 = 4; l_271 < 8; l_271 += 1)
                        {
                            for (g_103.f4 = 2; g_103.f4 < 3; g_103.f4 += 1)
                            {
                                uint32_t l_292[3] = {0xA8006184L, 5U, 0xA8006184L};
                                int32_t l_293 = 0x29478A32L;
                                int i;
                                l_293 |= (p_52 == (!(((*l_279) <= p_52) < ((*l_256) >= ((p_52 && p_52) || l_292[2])))));
                            }
                        }
                    }
                    (*g_207) = l_294;
                }
                (*l_279) ^= (safe_mod_func_int8_t_s_s(g_61, g_103.f5));
            }
        }
    }
    return g_103.f2;
}







int32_t func_53(int32_t * p_54)
{
    int32_t *l_244 = &g_93[2];
    l_244 = func_55(0xF7L);
    return (*p_54);
}







int32_t * func_55(uint8_t p_56)
{
    int32_t *l_69 = &g_25;
    const int32_t **l_166[10];
    struct S0 *l_201 = &g_103;
    int32_t *l_229[7][7];
    struct S0 ***l_238 = &g_207;
    int64_t l_243[2][8] = {{0L, 0xCEF54B6F45FEBA7BLL, 4L, 4L, 0xCEF54B6F45FEBA7BLL, 0L, 0xCEF54B6F45FEBA7BLL, 4L}, {0L, 0xCEF54B6F45FEBA7BLL, 4L, 4L, 0xCEF54B6F45FEBA7BLL, 0L, 0xCEF54B6F45FEBA7BLL, 4L}};
    int i, j;
    for (i = 0; i < 10; i++)
        l_166[i] = &g_101;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
            l_229[i][j] = &g_93[3];
    }
    for (p_56 = 0; (p_56 == 36); p_56 = safe_add_func_uint32_t_u_u(p_56, 2))
    {
        uint32_t l_59 = 0x74E37A2EL;
        int32_t *l_62 = &g_25;
        int32_t l_72[8][6];
        const int32_t *l_81 = &l_72[5][3];
        const int32_t **l_80[7][8];
        int32_t l_159 = 0x96616590L;
        struct S0 *l_182 = 0;
        int32_t l_204 = (-6L);
        int i, j;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 6; j++)
                l_72[i][j] = 0xA3D0676DL;
        }
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 8; j++)
                l_80[i][j] = &l_81;
        }
        if (l_59)
        {
            int32_t *l_60 = &g_61;
            (*l_60) = 1L;
        }
        else
        {
            const int32_t *l_71 = &g_61;
            const int32_t **l_70 = &l_71;
            uint64_t l_79 = 0x713981DC8A068CF1LL;
            int32_t l_82 = 0xEC4F4D12L;
            int32_t *l_165 = &g_93[0];
            int32_t *l_215 = &l_204;
            (*g_63) = l_62;
            for (l_59 = 0; (l_59 >= 17); l_59 = safe_add_func_int16_t_s_s(l_59, 6))
            {
                uint8_t l_67 = 0xC0L;
                int32_t *l_68 = &g_25;
                l_72[4][0] |= (*l_71);
                return (*g_63);
            }
            for (l_59 = 24; (l_59 == 5); l_59 = safe_sub_func_uint32_t_u_u(l_59, 1))
            {
                int32_t *l_76[9];
                struct S0 ** const l_205 = 0;
                int32_t *l_214[2];
                int i;
                for (i = 0; i < 9; i++)
                    l_76[i] = &l_72[4][0];
                for (i = 0; i < 2; i++)
                    l_214[i] = 0;
                (*g_75) = p_56;
                (*g_75) &= 0L;
                for (g_61 = 0; (g_61 < 13); g_61 = safe_add_func_uint8_t_u_u(g_61, 7))
                {
                    int32_t *l_154 = &l_72[4][0];
                    if (l_79)
                    {
                        l_82 &= p_56;
                    }
                    else
                    {
                        return (*g_63);
                    }
                    if (p_56)
                        break;
                    if ((*g_64))
                    {
                        l_82 = p_56;
                        (*l_70) = l_69;
                        l_82 ^= (safe_unary_minus_func_int64_t_s((safe_mod_func_uint16_t_u_u(65535U, p_56))));
                        (*l_154) = (-1L);
                    }
                    else
                    {
                        (*l_70) = l_69;
                    }
                    (*l_154) = (safe_rshift_func_int16_t_s_s(p_56, 7));
                }
            }
            (*l_215) |= func_83(func_86(((g_93[1] && (((**l_70) > p_56) & (&l_165 != &l_69))) > p_56), g_103.f0, (*l_71), g_103.f1), g_25);
        }
        for (g_103.f1 = 4; g_103.f1 < 7; g_103.f1 += 1)
        {
            for (l_59 = 0; l_59 < 8; l_59 += 1)
            {
                if (func_29(0x8F45L, g_103.f4, (*g_63), &l_72[4][0], &l_81))
                {
                    for (g_103.f0 = (-15); (g_103.f0 == 45); g_103.f0 = safe_add_func_int16_t_s_s(g_103.f0, 6))
                    {
                        return (*g_63);
                    }
                }
                else
                {
                    int32_t *l_218 = &g_93[2];
                    return l_218;
                }
                (*g_100) = (*g_100);
            }
        }
        return l_69;
    }
    for (g_103.f4 = 0; (g_103.f4 != 37); g_103.f4 = safe_add_func_int64_t_s_s(g_103.f4, 4))
    {
        uint32_t l_223 = 0xE8A177C5L;
        int32_t *l_226 = &g_25;
        int32_t l_230[8][3][1];
        int i, j, k;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 1; k++)
                    l_230[i][j][k] = 0xA24DCB8FL;
            }
        }
        l_230[4][2][0] = (1U <= g_2[2]);
        g_93[0] ^= (**g_63);
    }
    for (g_103.f2 = 0; (g_103.f2 > (-19)); g_103.f2 = safe_sub_func_int16_t_s_s(g_103.f2, 1))
    {
        int32_t * const *l_235 = 0;
        (*g_141) ^= (-1L);
        (*g_141) = (safe_div_func_uint32_t_u_u((&g_26[4][1][0] != l_235), p_56));
    }
    (*g_141) = (((~p_56) || g_103.f1) >= g_2[3]);
    return l_229[4][1];
}







int32_t func_83(int32_t * p_84, int32_t p_85)
{
    const uint16_t l_144[4][3] = {{0x6D79L, 0x6D79L, 0x6D79L}, {0x6D79L, 0x6D79L, 0x6D79L}, {0x6D79L, 0x6D79L, 0x6D79L}, {0x6D79L, 0x6D79L, 0x6D79L}};
    struct S0 *l_153 = &g_103;
    struct S0 **l_152 = &l_153;
    int i, j;
    (*g_100) = func_86(g_93[2], l_144[0][1], (safe_mod_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(p_85, (p_85 ^ l_144[2][2]))), (g_151 <= (g_103.f4 & l_144[0][1])))) <= ((l_152 == &l_153) & p_85)), p_85)), g_93[0]);
    return l_144[0][1];
}







int32_t * func_86(uint32_t p_87, const uint64_t p_88, uint16_t p_89, int8_t p_90)
{
    struct S0 * const l_102 = &g_103;
    int32_t l_108[9] = {0xFDF84107L, 0x5F2C5FDDL, 0x812ED699L, 0x5F2C5FDDL, 0xFDF84107L, 0xF448C364L, 0xFDF84107L, 0x5F2C5FDDL, 0x812ED699L};
    const int32_t **l_138[9][3];
    int32_t l_139 = 7L;
    int i, j, k;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
            l_138[i][j] = &g_101;
    }
    for (p_90 = 0; p_90 < 5; p_90 += 5)
    {
        for (p_89 = 1; p_89 < 2; p_89 += 1)
        {
            for (g_61 = 0; g_61 < 2; g_61 += 1)
            {
                return g_91;
            }
        }
    }
    if ((**g_63))
    {
        int32_t *l_92 = &g_93[0];
        uint16_t l_129[10][10][1];
        int i, j, k;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 10; j++)
            {
                for (k = 0; k < 1; k++)
                    l_129[i][j][k] = 65527U;
            }
        }
        (*l_92) &= (*g_75);
        (*l_92) = ((safe_rshift_func_uint16_t_u_u(((((*l_92) & 0x3419813DA773CE50LL) && g_93[0]) || p_87), 12)) | p_87);
        if ((**g_63))
        {
            uint16_t l_98[5][1][10] = {{{0x3E70L, 0x3E70L, 0x3A64L, 0U, 6U, 0U, 0x3A64L, 0x3E70L, 0x3E70L, 0x3A64L}}, {{0x3E70L, 0x3E70L, 0x3A64L, 0U, 6U, 0U, 0x3A64L, 0x3E70L, 0x3E70L, 0x3A64L}}, {{0x3E70L, 0x3E70L, 0x3A64L, 0U, 6U, 0U, 0x3A64L, 0x3E70L, 0x3E70L, 0x3A64L}}, {{0x3E70L, 0x3E70L, 0x3A64L, 0U, 6U, 0U, 0x3A64L, 0x3E70L, 0x3E70L, 0x3A64L}}, {{0x3E70L, 0x3E70L, 0x3A64L, 0U, 6U, 0U, 0x3A64L, 0x3E70L, 0x3E70L, 0x3A64L}}};
            int32_t *l_99 = &g_93[0];
            int i, j, k;
            (*g_75) = (safe_rshift_func_int16_t_s_s(g_25, 7));
            for (p_87 = 0; p_87 < 5; p_87 += 1)
            {
                struct S0 *l_105 = &g_103;
                struct S0 **l_104 = &l_105;
                (*l_104) = l_102;
            }
            return (*g_63);
        }
        else
        {
            uint8_t l_113 = 255U;
            int32_t *l_121 = &g_61;
            (*l_92) &= (safe_add_func_uint16_t_u_u(g_103.f5, l_108[3]));
            (*l_92) &= (safe_div_func_int8_t_s_s(p_88, (g_2[7] ^ p_90)));
            for (g_103.f2 = (-6); (g_103.f2 < 6); g_103.f2 = safe_add_func_int32_t_s_s(g_103.f2, 1))
            {
                const int32_t **l_122 = &g_101;
                int i, j, k;
                l_113 = p_88;
                for (g_61 = 0; g_61 < 5; g_61 += 3)
                {
                    for (g_103.f3 = 0; g_103.f3 < 2; g_103.f3 += 2)
                    {
                        for (l_113 = 0; l_113 < 2; l_113 += 2)
                        {
                            uint32_t l_117 = 9U;
                            int32_t **l_120 = &l_92;
                        }
                    }
                }
                (*l_92) |= 0x461874A8L;
            }
            l_108[3] ^= p_87;
        }
        l_139 |= (safe_sub_func_uint16_t_u_u(p_90, (safe_lshift_func_int8_t_s_u(p_87, (!(safe_mul_func_int16_t_s_s(func_29(g_103.f6, func_29(g_103.f3, g_103.f3, &g_25, &l_108[3], l_138[7][1]), &g_25, &g_93[0], &g_101), 0x9879L)))))));
    }
    else
    {
        int i;
        for (g_103.f3 = 0; g_103.f3 < 9; g_103.f3 += 1)
        {
            int i, j, k;
            for (p_87 = 3; p_87 < 5; p_87 += 1)
            {
                for (p_89 = 0; p_89 < 2; p_89 += 1)
                {
                    for (g_103.f2 = 0; g_103.f2 < 2; g_103.f2 += 1)
                    {
                        int32_t l_140 = 1L;
                        l_140 = (**g_63);
                        for (g_103.f1 = 0; g_103.f1 < 5; g_103.f1 += 1)
                        {
                            for (g_103.f6 = 0; g_103.f6 < 2; g_103.f6 += 1)
                            {
                                for (l_140 = 0; l_140 < 2; l_140 += 1)
                                {
                                    g_26[g_103.f1][g_103.f6][l_140] = 0;
                                }
                            }
                        }
                        (*g_141) ^= p_87;
                    }
                }
            }
        }
        for (p_89 = 0; (p_89 <= 32); p_89 = safe_add_func_int64_t_s_s(p_89, 1))
        {
            return (*g_63);
        }
        for (g_103.f4 = 0; g_103.f4 < 5; g_103.f4 += 1)
        {
            g_93[g_103.f4] = 8L;
        }
    }
    return (*g_63);
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_93[i], "g_93[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_103.f0, "g_103.f0", print_hash_value);
    transparent_crc(g_103.f1, "g_103.f1", print_hash_value);
    transparent_crc(g_103.f2, "g_103.f2", print_hash_value);
    transparent_crc(g_103.f3, "g_103.f3", print_hash_value);
    transparent_crc(g_103.f4, "g_103.f4", print_hash_value);
    transparent_crc(g_103.f5, "g_103.f5", print_hash_value);
    transparent_crc(g_103.f6, "g_103.f6", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_423, "g_423", print_hash_value);
    transparent_crc(g_477, "g_477", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL);
    return 0;
}
