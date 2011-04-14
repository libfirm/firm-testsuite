# 1 "found/test0001.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "found/test0001.c"
# 10 "found/test0001.c"
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
# 11 "found/test0001.c" 2


long __undefined;



int32_t * volatile g_16 = 0;
uint32_t g_24[2][6][2] = {{{0U, 0U}, {0U, 0U}, {0U, 0U}, {0U, 0U}, {0U, 0U}, {0U, 0U}}, {{0U, 0U}, {0U, 0U}, {0U, 0U}, {0U, 0U}, {0U, 0U}, {0U, 0U}}};
int32_t g_26 = 0L;
int32_t g_51 = 0x085BB31CL;
int16_t g_68[4][3] = {{0x2BABL, 0x2BABL, 0x2BABL}, {0x2BABL, 0x2BABL, 0x2BABL}, {0x2BABL, 0x2BABL, 0x2BABL}, {0x2BABL, 0x2BABL, 0x2BABL}};
int32_t *g_85 = &g_26;
int32_t **g_84[7][3][1] = {{{&g_85}, {&g_85}, {&g_85}}, {{&g_85}, {&g_85}, {&g_85}}, {{&g_85}, {&g_85}, {&g_85}}, {{&g_85}, {&g_85}, {&g_85}}, {{&g_85}, {&g_85}, {&g_85}}, {{&g_85}, {&g_85}, {&g_85}}, {{&g_85}, {&g_85}, {&g_85}}};
int32_t g_127 = 1L;
int32_t g_128 = 5L;
int32_t g_139 = (-1L);
int32_t g_176 = 0L;
int8_t g_192 = (-6L);
int32_t * const *g_204 = 0;
int32_t g_268 = 0x6030DB31L;
int32_t g_305 = 0x5B750937L;
int32_t g_326[5][6] = {{0L, 0L, 0x9C36C5F9L, 0L, 0L, 0x9C36C5F9L}, {0L, 0L, 0x9C36C5F9L, 0L, 0L, 0x9C36C5F9L}, {0L, 0L, 0x9C36C5F9L, 0L, 0L, 0x9C36C5F9L}, {0L, 0L, 0x9C36C5F9L, 0L, 0L, 0x9C36C5F9L}, {0L, 0L, 0x9C36C5F9L, 0L, 0L, 0x9C36C5F9L}};
uint16_t g_336 = 9U;
uint64_t g_412 = 0x81FEB96D176C35AELL;
uint8_t g_452 = 0xE2L;
int32_t g_504 = 3L;
uint32_t g_507[10][2] = {{6U, 6U}, {6U, 6U}, {6U, 6U}, {6U, 6U}, {6U, 6U}, {6U, 6U}, {6U, 6U}, {6U, 6U}, {6U, 6U}, {6U, 6U}};
int32_t ** volatile g_667 = &g_85;
int32_t *g_763 = 0;
volatile uint64_t g_796 = 0x1299B50DF9546FA5LL;
volatile uint16_t g_868 = 0x24D3L;
int32_t g_932 = (-1L);
int32_t ** volatile g_938 = &g_763;
const uint64_t g_959 = 18446744073709551607U;
int32_t ** volatile g_979 = &g_85;
int32_t ** volatile g_999 = &g_763;
int32_t ** volatile g_1086 = &g_763;



uint32_t func_1(void);
int8_t func_2(uint32_t p_3, uint8_t p_4, uint16_t p_5, uint32_t p_6, int8_t p_7);
int32_t * func_8(int32_t * const p_9, uint64_t p_10, const int32_t p_11, int32_t p_12, uint16_t p_13);
int16_t func_17(uint64_t p_18, int64_t p_19, int16_t p_20, int32_t p_21);
int64_t func_43(int32_t * p_44, uint64_t p_45, int32_t * p_46, int32_t * p_47);
int32_t func_62(int8_t p_63, uint32_t p_64, int32_t * p_65, uint32_t p_66, int32_t p_67);
const int16_t func_91(int32_t * p_92, int8_t p_93, const uint32_t p_94);
int32_t func_107(uint64_t p_108);
int32_t func_109(int32_t p_110, const int32_t * p_111);
int8_t func_115(int32_t p_116, uint8_t p_117, int32_t p_118);
# 69 "found/test0001.c"
uint32_t func_1(void)
{
    uint8_t l_915 = 0x52L;
    uint32_t l_916[2];
    const int32_t *l_917 = &g_128;
    int64_t l_928 = (-1L);
    int32_t *l_931 = &g_932;
    uint32_t l_947[5] = {0x2FAC9165L, 0U, 0x2FAC9165L, 0U, 0x2FAC9165L};
    int32_t *l_958 = 0;
    int32_t ***l_1025 = &g_84[5][1][0];
    int32_t *l_1038 = &g_305;
    uint64_t l_1047 = 18446744073709551606U;
    int16_t l_1084 = (-2L);
    int32_t *l_1085 = &g_139;
    int32_t l_1087 = 0L;
    int i;
    for (i = 0; i < 2; i++)
        l_916[i] = 5U;
    (*l_931) ^= (6L >= (func_2(((safe_sub_func_uint64_t_u_u((l_915 <= g_507[8][0]), (+l_915))) >= func_109(l_916[1], l_917)), g_412, ((g_336 ^ (safe_add_func_int16_t_s_s(g_452, g_68[1][2]))) | (safe_add_func_uint8_t_u_u(g_412, g_176))), (&g_763 != &g_16), g_268) != ((safe_mod_func_int16_t_s_s((l_916[1] || g_68[0][2]), g_268)) && (g_326[3][2] > (safe_lshift_func_uint8_t_u_s((safe_sub_func_int64_t_s_s(l_928, g_68[2][1])), (safe_add_func_uint64_t_u_u(g_326[1][2], g_24[0][3][0]))))))));
    for (l_928 = 0; (l_928 <= (-10)); l_928 = safe_sub_func_uint8_t_u_u(l_928, 1))
    {
        const uint64_t l_968[3] = {18446744073709551615U, 0x7A76D1130FB6D446LL, 18446744073709551615U};
        int32_t *l_977 = &g_51;
        int32_t * const l_978 = &g_26;
        int32_t * const l_1052 = 0;
        const int8_t l_1067 = 0xF3L;
        int32_t **l_1082 = 0;
        int64_t l_1083 = 0x28906F51B07814F4LL;
        int i;
        for (g_128 = 6; (g_128 < 25); g_128 = safe_add_func_uint64_t_u_u(g_128, 7))
        {
            int32_t *l_937 = &g_932;
            (*g_938) = l_937;
            (*l_931) = 0xC36CDD41L;
        }
        for (g_412 = 0; (g_412 == 2); g_412 = safe_add_func_uint16_t_u_u(g_412, 4))
        {
            uint16_t l_949 = 0x8512L;
            uint8_t l_974 = 0U;
            int32_t **l_992[3][10][1];
            int32_t *l_998 = &g_139;
            uint32_t l_1011 = 0U;
            int32_t *l_1019 = &g_51;
            uint32_t l_1023 = 4294967295U;
            int32_t *l_1037 = &g_128;
            const int16_t l_1055 = 0xDBDEL;
            int32_t *l_1061 = 0;
            int32_t *l_1066 = 0;
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 10; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_992[i][j][k] = 0;
                }
            }
            for (g_268 = 3; (g_268 <= 24); g_268 = safe_add_func_uint64_t_u_u(g_268, 1))
            {
                uint32_t l_948[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_948[i] = 1U;
                for (g_128 = 0; g_128 < 7; g_128 += 1)
                {
                    for (g_176 = 0; g_176 < 3; g_176 += 1)
                    {
                        for (g_192 = 0; g_192 < 1; g_192 += 1)
                        {
                            g_84[g_128][g_176][g_192] = 0;
                        }
                    }
                }
                (*l_931) = ((*l_931) <= l_949);
            }
        }
        (*g_1086) = l_1085;
    }
    (*l_1038) = l_1087;
    return (*l_1085);
}







int8_t func_2(uint32_t p_3, uint8_t p_4, uint16_t p_5, uint32_t p_6, int8_t p_7)
{
    int32_t * const l_666 = &g_26;
    int32_t *l_673 = &g_127;
    uint32_t l_692 = 0x4D06534FL;
    int32_t l_716[6][8] = {{0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}, {0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}, {0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}, {0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}, {0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}, {0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}};
    int32_t *l_736[10][5];
    const int32_t *l_739 = 0;
    uint32_t l_790 = 6U;
    uint8_t l_794[10][9] = {{255U, 0U, 255U, 0U, 255U, 0U, 255U, 0U, 255U}, {255U, 0U, 255U, 0U, 255U, 0U, 255U, 0U, 255U}, {255U, 0U, 255U, 0U, 255U, 0U, 255U, 0U, 255U}, {255U, 0U, 255U, 0U, 255U, 0U, 255U, 0U, 255U}, {255U, 0U, 255U, 0U, 255U, 0U, 255U, 0U, 255U}, {255U, 0U, 255U, 0U, 255U, 0U, 255U, 0U, 255U}, {255U, 0U, 255U, 0U, 255U, 0U, 255U, 0U, 255U}, {255U, 0U, 255U, 0U, 255U, 0U, 255U, 0U, 255U}, {255U, 0U, 255U, 0U, 255U, 0U, 255U, 0U, 255U}, {255U, 0U, 255U, 0U, 255U, 0U, 255U, 0U, 255U}};
    const uint32_t l_805 = 8U;
    const int64_t l_837 = 0L;
    int32_t ***l_849 = &g_84[2][0][0];
    int32_t l_856 = (-3L);
    int32_t *l_876 = 0;
    int32_t * const l_897 = &g_128;
    uint8_t l_911 = 0U;
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
            l_736[i][j] = &g_305;
    }
    (*g_667) = func_8(l_666, (*l_666), p_4, (-1L), p_3);
    for (g_176 = 0; (g_176 < (-19)); g_176 = safe_sub_func_int8_t_s_s(g_176, 3))
    {
        int32_t **l_679 = &l_673;
        uint8_t l_695 = 0xB0L;
        int32_t l_700 = (-2L);
        int i, j;
    }
    if (((safe_add_func_int16_t_s_s((*l_666), (safe_div_func_int32_t_s_s((l_673 == 0), ((l_666 == l_673) && (g_51 >= 0U)))))) == g_336))
    {
        uint8_t l_708 = 0x02L;
        int32_t *l_761 = &g_128;
        const uint8_t l_762 = 0xF8L;
        uint8_t l_787[5];
        int32_t **l_795 = &g_85;
        int i;
        for (i = 0; i < 5; i++)
            l_787[i] = 0x24L;
        for (l_692 = 4; (l_692 > 47); l_692 = safe_add_func_int64_t_s_s(l_692, 7))
        {
            int16_t l_707 = 0xF15CL;
            (*l_673) |= (l_707 ^ l_707);
        }
        if ((*l_673))
        {
            int i, j;
            (*l_666) ^= (-9L);
            for (g_127 = 4; g_127 < 10; g_127 += 8)
            {
                for (g_51 = 0; g_51 < 2; g_51 += 2)
                {
                    (*l_666) = 0x051FFD45L;
                }
            }
            return l_708;
        }
        else
        {
            uint16_t l_713[5] = {0xE854L, 0xE854L, 0xC5CDL, 0xE854L, 0xE854L};
            int32_t *l_723[1];
            int32_t **l_730 = &l_723[0];
            int32_t *l_756 = 0;
            uint32_t l_769 = 0U;
            int i;
            for (i = 0; i < 1; i++)
                l_723[i] = &g_51;
            if ((g_504 && (0x2B79L && (1U | (-4L)))))
            {
                int32_t ** const l_717 = &l_673;
                int i;
                if ((safe_add_func_uint32_t_u_u(p_3, ((p_5 | g_268) & ((l_717 != &g_85) ^ g_326[4][1])))))
                {
                    for (g_412 = 0; g_412 < 5; g_412 += 1)
                    {
                        l_713[g_412] = 0x7D63L;
                    }
                    (**l_717) |= (safe_lshift_func_int16_t_s_s(l_713[4], 0));
                }
                else
                {
                    int32_t *l_720 = &g_26;
                    if ((0 != (*l_717)))
                    {
                        (*l_673) ^= ((-1L) >= l_713[2]);
                        return g_452;
                    }
                    else
                    {
                        l_720 = 0;
                        return g_176;
                    }
                }
                for (p_5 = 0; p_5 < 5; p_5 += 1)
                {
                    int32_t ***l_721 = 0;
                }
                l_736[0][0] = func_8(&l_716[0][5], func_17(1U, p_5, l_708, ((g_68[0][0] <= l_708) ^ (6U ^ (p_7 | (&l_666 == l_717))))), (*l_673), p_4, g_507[4][0]);
                (*l_666) |= ((l_708 != g_176) <= (safe_sub_func_int64_t_s_s(g_504, g_127)));
            }
            else
            {
                uint64_t l_750 = 0U;
                int32_t l_758 = (-1L);
                int32_t **l_784 = &l_673;
                if ((safe_lshift_func_int8_t_s_u((((safe_lshift_func_uint8_t_u_s(p_5, ((safe_lshift_func_int8_t_s_u(p_4, (*l_673))) || (&l_736[6][2] == &l_736[0][0])))) && (safe_sub_func_uint32_t_u_u(l_708, 0U))) == ((safe_lshift_func_int8_t_s_s(func_17(l_750, p_4, g_26, (g_24[1][2][1] >= g_326[1][5])), 3)) && (-9L))), 3)))
                {
                    (*l_666) = (l_750 ^ (2L > (~g_128)));
                }
                else
                {
                    uint16_t l_768[4][7] = {{1U, 65527U, 1U, 65527U, 1U, 65527U, 1U}, {1U, 65527U, 1U, 65527U, 1U, 65527U, 1U}, {1U, 65527U, 1U, 65527U, 1U, 65527U, 1U}, {1U, 65527U, 1U, 65527U, 1U, 65527U, 1U}};
                    int8_t l_778 = 8L;
                    int32_t *l_779 = &g_127;
                    int i, j;
                    if (p_3)
                    {
                        uint64_t l_751 = 0xC3B558EB8DC9D09DLL;
                        (*l_730) = func_8(&l_716[0][5], l_751, p_5, (g_51 | (safe_mul_func_int8_t_s_s(g_507[4][0], (0 != l_756)))), (*l_666));
                    }
                    else
                    {
                        int32_t l_757 = 0x371AE5C2L;
                        l_758 |= (g_127 == (l_757 <= ((p_5 >= 1L) | func_17((1L ^ g_51), g_305, p_5, func_17((p_5 < g_412), func_17(g_192, g_268, g_24[0][5][1], p_3), p_6, g_326[1][2])))));
                        return g_507[9][1];
                    }
                    for (p_3 = 0; (p_3 >= 54); p_3 = safe_add_func_uint16_t_u_u(p_3, 2))
                    {
                        (*l_730) = l_761;
                    }
                    l_779 = (*l_730);
                }
                for (l_758 = 0; l_758 < 1; l_758 += 1)
                {
                    l_723[l_758] = &g_176;
                }
                (*l_673) ^= (safe_mul_func_uint16_t_u_u(((*l_761) | ((safe_add_func_uint32_t_u_u(g_268, (g_68[2][0] | (&g_16 == l_784)))) ^ (-1L))), (&l_723[0] == &l_761)));
                l_736[0][0] = (*l_784);
            }
            (*l_730) = (*g_667);
        }
        (*l_673) &= (safe_add_func_uint64_t_u_u(l_787[2], func_17(g_68[3][1], ((safe_mul_func_int16_t_s_s((((*l_761) & g_26) && 0x99L), l_790)) != (safe_unary_minus_func_uint8_t_u((safe_div_func_int64_t_s_s(g_68[2][1], ((*l_761) | p_3)))))), 0x29BDL, l_794[7][2])));
        (*l_795) = &l_716[3][4];
    }
    else
    {
        int32_t **l_797 = &l_673;
        int32_t *l_822[3];
        int64_t l_838[2][9][5];
        uint8_t l_863 = 0x45L;
        const uint64_t l_871 = 0x48EB4513F7B34A14LL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_822[i] = &g_176;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 9; j++)
            {
                for (k = 0; k < 5; k++)
                    l_838[i][j][k] = 1L;
            }
        }
        g_796 &= 6L;
        (*l_797) = 0;
        for (g_127 = 0; (g_127 != (-2)); g_127 = safe_sub_func_int16_t_s_s(g_127, 1))
        {
            const int32_t l_804 = 0x38237710L;
            int32_t *l_806 = &l_716[0][5];
lbl_874:
            if ((safe_rshift_func_uint16_t_u_s(((safe_add_func_int64_t_s_s(0x53D16B7F8CA30BC8LL, g_305)) & p_6), 8)))
            {
                int16_t l_817[6][3][1];
                int32_t *l_818 = &g_26;
                int i, j, k;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_817[i][j][k] = 0x3F46L;
                    }
                }
                (*l_666) ^= (safe_div_func_int32_t_s_s((p_5 | (safe_mul_func_int8_t_s_s(((+(*l_806)) != g_504), (-7L)))), (safe_div_func_int8_t_s_s(((((g_128 > p_4) < (*l_806)) || (*l_806)) && ((p_4 > (safe_add_func_uint8_t_u_u(g_268, g_412))) < (safe_sub_func_uint8_t_u_u(p_5, g_305)))), 255U))));
                if (p_7)
                {
                    int32_t *** const l_824 = &l_797;
                    if (l_817[1][1][0])
                    {
                        int64_t l_823[9][9] = {{0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL}, {0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL}, {0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL}, {0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL}, {0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL}, {0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL}, {0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL}, {0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL}, {0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL, 0x2601891B5028AADCLL, 0xE285B2209488D1F1LL}};
                        int i, j;
                        (*l_818) &= p_5;
                        (*l_666) = ((g_796 | g_127) && (safe_rshift_func_uint16_t_u_s((p_7 || (*l_818)), 1)));
                    }
                    else
                    {
                        return p_6;
                    }
                    if ((safe_add_func_int64_t_s_s(0x7B81014FF18D15B3LL, (safe_rshift_func_uint16_t_u_u((&l_716[1][7] != 0), p_7)))))
                    {
                        int8_t l_831 = 0L;
                        return l_831;
                    }
                    else
                    {
                        const int64_t l_832 = 3L;
                        (*l_818) = (l_832 && (0L >= (((safe_div_func_int64_t_s_s(0x0177ECA8F2E2FDF1LL, (p_3 && l_837))) ^ (p_7 > p_5)) < g_326[3][0])));
                        return g_139;
                    }
                }
                else
                {
                    uint8_t l_839 = 246U;
                    if (l_838[0][1][3])
                    {
                        (*l_666) &= p_3;
                        (*l_818) = l_839;
                    }
                    else
                    {
                        uint32_t l_840 = 0x71F47770L;
                        (*l_818) |= l_840;
                    }
                }
            }
            else
            {
                int32_t *l_841 = &g_51;
                (*l_797) = &l_716[0][5];
                for (g_128 = (-10); (g_128 >= (-5)); g_128 = safe_add_func_int16_t_s_s(g_128, 1))
                {
                    int64_t l_846 = 0x5B09B3059F593915LL;
                }
                if ((**l_797))
                {
                    (*l_666) = p_5;
                    for (g_26 = 0; g_26 < 10; g_26 += 1)
                    {
                        for (g_51 = 0; g_51 < 2; g_51 += 1)
                        {
                            g_507[g_26][g_51] = 8U;
                        }
                    }
                    return g_139;
                }
                else
                {
                    int32_t * const l_854 = &l_716[0][5];
                    for (p_5 = 0; (p_5 > 32); p_5 = safe_add_func_int64_t_s_s(p_5, 1))
                    {
                        const int64_t l_855[10][8][1] = {{{0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}}, {{0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}}, {{0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}}, {{0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}}, {{0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}}, {{0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}}, {{0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}}, {{0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}}, {{0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}}, {{0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}, {0x345FF301055B25B1LL}}};
                        int i, j, k;
                        (*l_673) |= (g_268 > p_4);
                        (*l_841) = ((((*l_841) && (p_3 || (l_856 || ((*l_806) < p_7)))) > (safe_mul_func_uint16_t_u_u(0xDA74L, g_504))) ^ p_7);
                    }
                    (*l_841) ^= (*l_854);
                }
                if (p_4)
                    continue;
            }
            (*l_797) = func_8(l_806, 18446744073709551615U, (safe_mul_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(((g_507[4][0] && p_3) & l_863), 5)) == (safe_mul_func_int16_t_s_s((+g_24[0][3][0]), (safe_mod_func_int64_t_s_s((g_868 && g_192), (safe_div_func_uint16_t_u_u(g_507[9][0], g_51))))))), func_17((*l_806), ((l_871 & (safe_mul_func_int8_t_s_s(p_4, g_305))) | p_3), p_6, p_7))), p_3, p_7);
            if (l_863)
                goto lbl_874;
        }
    }
    for (g_412 = 0; g_412 < 5; g_412 += 1)
    {
        for (p_6 = 0; p_6 < 6; p_6 += 1)
        {
            int32_t *l_875 = &l_716[2][5];
            if (p_3)
            {
                int32_t * const l_877 = &g_51;
                (**l_849) = l_877;
            }
            else
            {
                const int32_t l_882 = 0xD23D3B4CL;
                int32_t **l_912[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_912[i] = &l_736[0][0];
                for (g_504 = 0; (g_504 > 14); g_504 = safe_add_func_int16_t_s_s(g_504, 1))
                {
                    uint16_t l_887 = 2U;
                    for (g_192 = 0; (g_192 <= (-11)); g_192 = safe_sub_func_int16_t_s_s(g_192, 7))
                    {
                        const int32_t **l_888 = &l_739;
                        (*l_666) = (l_887 == (-1L));
                        (*l_888) = &l_882;
                    }
                    (*l_666) = (p_4 & (safe_add_func_int8_t_s_s((p_3 < p_5), (safe_rshift_func_uint16_t_u_s(func_17(p_6, g_176, g_51, (safe_lshift_func_uint16_t_u_s((l_849 == &g_667), (&g_204 == l_849)))), ((l_875 == l_875) && p_4))))));
                }
                for (g_26 = 0; (g_26 == 20); g_26 = safe_add_func_int64_t_s_s(g_26, 1))
                {
                    uint8_t l_898 = 0x3CL;
                    int32_t *l_899 = &g_176;
                    int32_t *l_910 = &l_716[1][6];
                    (*l_899) &= (((g_507[4][0] == (g_452 == g_128)) && p_6) || (*l_875));
                    (*l_910) = (safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((((g_796 & g_305) == (p_7 == g_128)) >= g_139) < ((safe_sub_func_int16_t_s_s((safe_add_func_uint8_t_u_u(l_882, (*l_875))), p_4)) ^ ((safe_div_func_uint16_t_u_u(g_452, l_882)) | l_911))), g_326[(g_412) % 5][((p_6 + 1)) % 6])), g_192));
                }
                if (g_326[(g_412) % 5][(p_6) % 6])
                    continue;
                if ((0 == l_912[1]))
                {
                    return p_4;
                }
                else
                {
                    (**l_849) = 0;
                }
            }
            l_875 = func_8(l_875, p_6, (*l_875), g_326[(g_412) % 5][(p_6) % 6], g_868);
            (*l_666) &= (&g_84[2][0][0] == 0);
        }
    }
    return p_5;
}







int32_t * func_8(int32_t * const p_9, uint64_t p_10, const int32_t p_11, int32_t p_12, uint16_t p_13)
{
    int64_t l_664 = 0xEEFF4FBE43DCD19DLL;
    int32_t *l_665 = 0;
    (*p_9) = (safe_mul_func_uint16_t_u_u((g_16 != 0), func_17(18446744073709551615U, l_664, p_13, l_664)));
    return l_665;
}







int16_t func_17(uint64_t p_18, int64_t p_19, int16_t p_20, int32_t p_21)
{
    int8_t l_31 = (-1L);
    int32_t *l_651 = &g_127;
    int32_t ***l_662 = 0;
    int32_t ***l_663 = &g_84[4][0][0];
    for (p_21 = 0; (p_21 != (-19)); p_21 = safe_sub_func_int32_t_s_s(p_21, 1))
    {
        int32_t *l_650 = &g_127;
        int i, j, k;
        for (p_18 = 0; p_18 < 2; p_18 += 1)
        {
            for (p_19 = 0; p_19 < 6; p_19 += 1)
            {
                for (p_20 = 0; p_20 < 2; p_20 += 2)
                {
                    int32_t *l_25 = &g_26;
                    l_25 = l_25;
                }
            }
        }
        for (g_26 = 0; (g_26 != 15); g_26 = safe_add_func_uint16_t_u_u(g_26, 9))
        {
            int16_t l_32 = 0xC257L;
            int32_t *l_33 = &g_26;
            uint32_t l_40 = 4294967286U;
            int32_t l_661 = 0L;
            (*l_33) |= ((safe_sub_func_uint8_t_u_u(l_31, l_32)) ^ g_24[(p_18) % 2][(uint64_t)(p_19) % 6][(uint16_t)(p_20) % 2]);
        }
    }
    (*l_663) = &g_85;
    return g_507[4][0];
}







int64_t func_43(int32_t * p_44, uint64_t p_45, int32_t * p_46, int32_t * p_47)
{
    int64_t l_80 = 0L;
    int32_t *l_81 = &g_51;
    uint32_t l_614 = 1U;
    int32_t ** const *l_638 = 0;
    for (p_45 = 0; (p_45 != 27); p_45 = safe_add_func_uint16_t_u_u(p_45, 1))
    {
        uint16_t l_50[3];
        int32_t *l_101 = &g_51;
        int i;
        for (i = 0; i < 3; i++)
            l_50[i] = 6U;
        for (g_51 = 1; g_51 < 3; g_51 += 3)
        {
            int32_t l_82 = (-1L);
            int32_t **l_83 = 0;
        }
    }
    for (p_45 = 0; (p_45 <= 2); p_45 = safe_add_func_uint8_t_u_u(p_45, 1))
    {
        int32_t * const l_533 = &g_176;
        uint32_t l_556 = 0x64C02F99L;
        uint64_t l_585 = 2U;
        int32_t *l_612 = &g_139;
        int32_t l_628 = 0xFEC58325L;
        int i, j;
        for (g_139 = 0; (g_139 < 23); g_139 = safe_add_func_int64_t_s_s(g_139, 1))
        {
            int32_t ***l_524 = &g_84[3][1][0];
            int64_t l_613 = (-4L);
            int i, j;
            (*p_44) ^= ((0 == l_524) ^ (safe_div_func_int16_t_s_s(g_176, p_45)));
        }
        for (g_127 = 0; g_127 < 10; g_127 += 1)
        {
            for (g_336 = 1; g_336 < 2; g_336 += 1)
            {
                int64_t l_627 = 1L;
            }
        }
        (*p_47) ^= (func_115(l_628, ((safe_mul_func_int16_t_s_s(g_336, (1L & p_45))) == g_139), (*l_81)) == (*l_533));
        (*l_533) = 0xE4F31DF2L;
    }
    for (g_128 = (-26); (g_128 >= 3); g_128 = safe_add_func_int64_t_s_s(g_128, 1))
    {
        uint16_t l_635 = 65534U;
        uint32_t l_636 = 0x8B8C142BL;
        uint32_t l_639 = 0xB0B98E63L;
        int32_t *l_642 = &g_128;
        const int8_t l_647[1][7][4] = {{{0x68L, 0x68L, 9L, 0x68L}, {0x68L, 0x68L, 9L, 0x68L}, {0x68L, 0x68L, 9L, 0x68L}, {0x68L, 0x68L, 9L, 0x68L}, {0x68L, 0x68L, 9L, 0x68L}, {0x68L, 0x68L, 9L, 0x68L}, {0x68L, 0x68L, 9L, 0x68L}}};
        int32_t **l_648 = 0;
        int32_t **l_649 = &l_81;
        int i, j, k;
        (*p_44) = ((p_45 && (((safe_add_func_uint16_t_u_u((l_635 ^ g_336), l_635)) <= (func_115(l_636, l_636, (*p_44)) < (safe_unary_minus_func_uint32_t_u(g_176)))) | ((0 != l_638) & (g_326[3][1] & l_639)))) <= (safe_mul_func_int8_t_s_s(g_176, g_68[3][2])));
        (*l_649) = 0;
        (*p_47) &= (&l_642 == &g_85);
    }
    for (l_614 = 0; l_614 < 7; l_614 += 1)
    {
        for (g_504 = 0; g_504 < 3; g_504 += 1)
        {
            for (g_412 = 0; g_412 < 1; g_412 += 1)
            {
                g_84[l_614][g_504][g_412] = 0;
            }
        }
    }
    return g_452;
}







int32_t func_62(int8_t p_63, uint32_t p_64, int32_t * p_65, uint32_t p_66, int32_t p_67)
{
    int32_t *l_70 = &g_26;
    int32_t **l_69 = &l_70;
    int i, j;
    for (g_51 = 0; g_51 < 4; g_51 += 4)
    {
        for (p_64 = 0; p_64 < 3; p_64 += 1)
        {
            (*p_65) = (*p_65);
            if (g_68[(uint32_t)((g_51 + 3)) % 4][(p_64) % 3])
                continue;
        }
    }
    (*l_69) = 0;
    return g_68[1][1];
}







const int16_t func_91(int32_t * p_92, int8_t p_93, const uint32_t p_94)
{
    uint8_t l_97 = 5U;
    int32_t l_98 = 0x713999EAL;
    int32_t *l_99 = &l_98;
    uint32_t l_100 = 7U;
    for (g_51 = 0; (g_51 > 20); g_51 = safe_add_func_uint16_t_u_u(g_51, 1))
    {
        (*p_92) = l_97;
        return l_97;
    }
    (*p_92) ^= (*p_92);
    l_98 = l_97;
    l_100 |= func_62(p_94, (l_99 == &l_98), p_92, g_24[0][2][1], (*l_99));
    return g_24[0][3][0];
}







int32_t func_107(uint64_t p_108)
{
    const uint32_t l_266 = 0xBE601683L;
    int32_t *l_267[10][10];
    uint8_t l_417 = 0U;
    int16_t l_442 = 0x77B7L;
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
            l_267[i][j] = &g_26;
    }
    if (func_109((l_266 ^ ((p_108 | 0xBD15AE11L) && g_268)), l_267[0][2]))
    {
        const int32_t *l_272 = &g_128;
        int32_t l_280 = 0xB8728311L;
        int32_t *l_314 = &g_128;
        int32_t *** const l_331 = &g_84[2][0][0];
        int i, j;
        for (g_128 = 0; (g_128 > 28); g_128 = safe_add_func_uint16_t_u_u(g_128, 9))
        {
            int32_t l_271 = 0x983454C0L;
            int32_t l_273 = 0xBAE6FE1DL;
            int32_t *l_281 = &g_139;
            int32_t ***l_304 = &g_84[2][1][0];
            int i, j;
            l_273 |= l_271;
            if ((!p_108))
            {
                int32_t l_274 = 0x321AE1D1L;
                int32_t l_275[2][2];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_275[i][j] = 0x092662B4L;
                }
                l_275[1][1] ^= l_273;
            }
            else
            {
                int16_t l_286 = (-1L);
                l_280 |= (((safe_mul_func_int16_t_s_s(g_128, (0x9AL | (safe_add_func_uint64_t_u_u(5U, (p_108 <= p_108)))))) >= 0xC5BCE7AADA582EAELL) ^ (&g_204 != &g_204));
                l_281 = &l_280;
                for (l_273 = (-4); (l_273 >= (-8)); l_273 = safe_sub_func_int16_t_s_s(l_273, 1))
                {
                    int32_t *l_289 = &g_176;
                    uint16_t l_296 = 0U;
                    int32_t ***l_298 = &g_84[2][0][0];
                    if ((safe_add_func_int16_t_s_s(l_286, func_62(p_108, (~(safe_rshift_func_int16_t_s_s(g_68[2][2], 2))), l_289, (*l_281), l_286))))
                    {
                        int32_t *l_292 = &g_139;
                        int32_t **l_295 = &l_281;
                        (*l_289) = ((0x7CF94E75L ^ (p_108 > (+(g_139 != (g_127 < p_108))))) && (safe_rshift_func_int16_t_s_s(p_108, 6)));
                        (*l_295) = l_292;
                        (*l_292) |= l_296;
                    }
                    else
                    {
                        int32_t **l_297 = &l_267[2][2];
                        l_289 = l_267[1][0];
                        (*l_297) = l_267[0][2];
                    }
                    (*l_298) = &g_85;
                }
            }
            for (g_176 = 2; g_176 < 10; g_176 += 4)
            {
                for (g_127 = 6; g_127 < 10; g_127 += 3)
                {
                    int32_t *l_299 = &g_127;
                    l_281 = l_299;
                    if ((0U && (p_108 & g_24[0][5][0])))
                    {
                        return p_108;
                    }
                    else
                    {
                        uint32_t l_303 = 0x755DABCFL;
                        for (g_139 = 0; (g_139 >= (-7)); g_139 = safe_sub_func_int64_t_s_s(g_139, 6))
                        {
                            int32_t *l_302 = &l_271;
                            l_299 = l_302;
                            (*l_302) = (-4L);
                            (*l_302) = (*l_272);
                        }
                        l_303 = p_108;
                        return p_108;
                    }
                }
            }
            (*l_304) = &l_281;
        }
        g_305 |= p_108;
        for (g_305 = 0; g_305 < 10; g_305 += 1)
        {
            for (g_192 = 0; g_192 < 10; g_192 += 10)
            {
                uint32_t l_308[4][5] = {{0xFF269783L, 0xFF269783L, 1U, 0xFF269783L, 0xFF269783L}, {0xFF269783L, 0xFF269783L, 1U, 0xFF269783L, 0xFF269783L}, {0xFF269783L, 0xFF269783L, 1U, 0xFF269783L, 0xFF269783L}, {0xFF269783L, 0xFF269783L, 1U, 0xFF269783L, 0xFF269783L}};
                int i, j;
                for (p_108 = 15; (p_108 > 31); p_108 = safe_add_func_uint64_t_u_u(p_108, 7))
                {
                    uint32_t l_309 = 4294967289U;
                    int32_t *l_311 = &l_280;
                    int64_t l_324 = (-1L);
                    if (l_308[0][1])
                    {
                        int32_t **l_310[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_310[i] = &g_85;
                        l_309 = p_108;
                        l_311 = &l_280;
                        return (*l_272);
                    }
                    else
                    {
                        int32_t *l_318 = &g_127;
                        int32_t **l_320 = 0;
                        int32_t ** const l_321 = &l_267[2][6];
                        uint32_t l_323 = 0x81D988B7L;
                        int i, j;
                        if ((safe_div_func_int16_t_s_s((p_108 >= p_108), p_108)))
                        {
                            int32_t **l_315 = 0;
                            int32_t **l_316 = 0;
                            int32_t **l_317 = &l_267[7][8];
                            (*l_317) = l_314;
                        }
                        else
                        {
                            int32_t **l_319 = &g_85;
                            l_318 = l_267[8][3];
                            (*l_319) = &l_280;
                            (**l_319) ^= p_108;
                            return p_108;
                        }
                        l_267[8][2] = &l_280;
                        l_318 = &l_280;
                        for (g_128 = 0; g_128 < 4; g_128 += 1)
                        {
                            for (g_139 = 4; g_139 < 5; g_139 += 5)
                            {
                                int32_t ***l_322 = &l_320;
                                (*l_322) = l_321;
                                (*l_318) = (l_323 > 0x0017A15DE5484CA5LL);
                                (*l_311) = (l_324 != ((254U || l_308[0][1]) ^ (7U == g_176)));
                                (*l_311) = ((safe_div_func_int64_t_s_s((safe_sub_func_uint16_t_u_u((*l_311), (0 != l_331))), (safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s(g_336, 14)) || 0xF0L), 9)))) < l_308[(uint32_t)((g_128 + 1)) % 4][(uint32_t)(g_139) % 5]);
                            }
                        }
                    }
                    (*l_314) |= p_108;
                }
                (*l_314) = 7L;
                if (p_108)
                    continue;
            }
        }
    }
    else
    {
        int32_t l_339[7][3][1];
        const int32_t *l_340 = 0;
        int32_t l_341 = 0xCD13B23EL;
        uint32_t l_346 = 0U;
        uint16_t l_347 = 1U;
        int32_t *l_370 = &l_341;
        int32_t *l_392 = &g_51;
        int i, j, k;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 1; k++)
                    l_339[i][j][k] = 0xB4CC9C1CL;
            }
        }
        for (g_139 = 0; (g_139 == (-1)); g_139 = safe_sub_func_uint8_t_u_u(g_139, 9))
        {
            return l_339[5][2][0];
        }
        l_341 &= l_339[4][0][0];
        if (((p_108 == l_347) != (g_326[4][4] ^ p_108)))
        {
            int32_t l_357 = (-2L);
            int i, j, k;
            for (g_127 = 0; g_127 < 7; g_127 += 1)
            {
                for (l_347 = 0; l_347 < 3; l_347 += 1)
                {
                    for (l_341 = 0; l_341 < 1; l_341 += 1)
                    {
                        int32_t l_352 = 0x7FDB8AA2L;
                        int32_t l_354 = 1L;
                        if (l_352)
                        {
                            int64_t l_353 = (-1L);
                            l_354 = (g_336 && p_108);
                            for (l_346 = 0; (l_346 > 44); l_346 = safe_add_func_int64_t_s_s(l_346, 9))
                            {
                                l_354 = p_108;
                            }
                            l_357 ^= p_108;
                        }
                        else
                        {
                            uint16_t l_358[3][9] = {{65528U, 65528U, 3U, 0x9C4FL, 0U, 0x9C4FL, 3U, 65528U, 65528U}, {65528U, 65528U, 3U, 0x9C4FL, 0U, 0x9C4FL, 3U, 65528U, 65528U}, {65528U, 65528U, 3U, 0x9C4FL, 0U, 0x9C4FL, 3U, 65528U, 65528U}};
                            const int32_t *l_359 = &g_176;
                            const int32_t **l_361 = &l_340;
                            const int32_t ***l_360 = &l_361;
                            int i, j;
                            l_354 = ((g_24[1][3][0] > (p_108 != ((l_360 != 0) == (safe_lshift_func_uint16_t_u_s((*l_359), p_108))))) != g_336);
                            if (p_108)
                                continue;
                            l_354 = p_108;
                            (**l_360) = (*l_361);
                        }
                        return p_108;
                    }
                }
            }
            l_357 |= (safe_div_func_uint32_t_u_u((3L <= p_108), g_139));
        }
        else
        {
            int32_t l_391 = (-5L);
            l_267[0][2] = &l_341;
            for (l_346 = 0; (l_346 == 46); l_346 = safe_add_func_uint16_t_u_u(l_346, 5))
            {
                int32_t l_371 = 0L;
                int i, j;
                for (g_51 = 1; g_51 < 10; g_51 += 1)
                {
                    for (l_347 = 7; l_347 < 10; l_347 += 4)
                    {
                        int32_t **l_368 = 0;
                        int32_t **l_369[5][9];
                        int i, j;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 9; j++)
                                l_369[i][j] = &g_85;
                        }
                        l_370 = l_267[(uint32_t)(g_51) % 10][(l_347) % 10];
                        l_371 ^= p_108;
                    }
                }
            }
            if (p_108)
            {
                int32_t *l_376 = &g_139;
                (*l_376) &= (0xAF5D53E3L ^ ((safe_mul_func_uint64_t_u_u(p_108, ((safe_mod_func_int16_t_s_s(((*l_370) <= g_127), g_68[2][0])) < (l_267[1][3] != l_376)))) | p_108));
                (*l_376) = (p_108 == g_268);
            }
            else
            {
                int32_t ***l_387 = &g_84[2][0][0];
                int32_t l_388 = 0L;
                l_388 &= (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_u(((g_176 == p_108) <= 8L), (safe_rshift_func_uint8_t_u_s(g_51, 6)))) <= (l_387 != &g_84[2][0][0])), 13)), 1));
                (*l_392) = (safe_mul_func_int8_t_s_s(func_62(g_326[1][0], l_391, l_392, 0xF39AA6E7L, l_388), g_68[3][1]));
                for (g_128 = 0; (g_128 < 28); g_128 = safe_add_func_uint16_t_u_u(g_128, 1))
                {
                    int32_t **l_401[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_401[i] = 0;
                    (*l_392) = (safe_lshift_func_uint16_t_u_u(g_139, (safe_lshift_func_int8_t_s_u((safe_add_func_uint64_t_u_u(0xEFFC92DF9E6AD514LL, (l_401[1] != 0))), 5))));
                    (*l_392) = l_391;
                }
            }
        }
        for (l_346 = 6; l_346 < 7; l_346 += 7)
        {
            for (g_139 = 1; g_139 < 3; g_139 += 2)
            {
                for (l_347 = 0; l_347 < 1; l_347 += 1)
                {
                    return p_108;
                }
            }
        }
    }
    for (g_128 = 10; (g_128 <= (-9)); g_128 = safe_sub_func_int64_t_s_s(g_128, 1))
    {
        uint32_t l_404 = 0x5972E405L;
        int32_t *l_427 = &g_26;
        int32_t ***l_479 = 0;
        int32_t l_500 = (-8L);
        const int32_t *l_501 = &g_51;
        if (l_404)
        {
            int32_t *l_411 = &g_176;
            int32_t l_437[1][6][10] = {{{(-1L), (-2L), 0x155530BCL, 0x6D55C451L, 0x6D55C451L, 0x155530BCL, (-2L), (-1L), 0x155530BCL, (-1L)}, {(-1L), (-2L), 0x155530BCL, 0x6D55C451L, 0x6D55C451L, 0x155530BCL, (-2L), (-1L), 0x155530BCL, (-1L)}, {(-1L), (-2L), 0x155530BCL, 0x6D55C451L, 0x6D55C451L, 0x155530BCL, (-2L), (-1L), 0x155530BCL, (-1L)}, {(-1L), (-2L), 0x155530BCL, 0x6D55C451L, 0x6D55C451L, 0x155530BCL, (-2L), (-1L), 0x155530BCL, (-1L)}, {(-1L), (-2L), 0x155530BCL, 0x6D55C451L, 0x6D55C451L, 0x155530BCL, (-2L), (-1L), 0x155530BCL, (-1L)}, {(-1L), (-2L), 0x155530BCL, 0x6D55C451L, 0x6D55C451L, 0x155530BCL, (-2L), (-1L), 0x155530BCL, (-1L)}}};
            int32_t l_455 = 0x814BA9D9L;
            int i, j, k;
            for (g_51 = 0; (g_51 == 28); g_51 = safe_add_func_uint16_t_u_u(g_51, 1))
            {
                int32_t l_409[7] = {1L, 0x7A4DC308L, 1L, 0x7A4DC308L, 1L, 0x7A4DC308L, 1L};
                int32_t *l_413 = &g_128;
                uint16_t l_444[8][9] = {{0U, 0x5327L, 0x3300L, 0x5327L, 0U, 0x5327L, 0x3300L, 0x5327L, 0U}, {0U, 0x5327L, 0x3300L, 0x5327L, 0U, 0x5327L, 0x3300L, 0x5327L, 0U}, {0U, 0x5327L, 0x3300L, 0x5327L, 0U, 0x5327L, 0x3300L, 0x5327L, 0U}, {0U, 0x5327L, 0x3300L, 0x5327L, 0U, 0x5327L, 0x3300L, 0x5327L, 0U}, {0U, 0x5327L, 0x3300L, 0x5327L, 0U, 0x5327L, 0x3300L, 0x5327L, 0U}, {0U, 0x5327L, 0x3300L, 0x5327L, 0U, 0x5327L, 0x3300L, 0x5327L, 0U}, {0U, 0x5327L, 0x3300L, 0x5327L, 0U, 0x5327L, 0x3300L, 0x5327L, 0U}, {0U, 0x5327L, 0x3300L, 0x5327L, 0U, 0x5327L, 0x3300L, 0x5327L, 0U}};
                int32_t *l_453 = &g_51;
                int i, j;
                for (l_404 = 0; (l_404 < 48); l_404 = safe_add_func_uint64_t_u_u(l_404, 8))
                {
                    uint32_t l_410 = 3U;
                    for (g_268 = 0; g_268 < 10; g_268 += 1)
                    {
                        for (g_139 = 0; g_139 < 10; g_139 += 1)
                        {
                            l_267[g_268][g_139] = &g_26;
                        }
                    }
                    l_410 = l_409[1];
                    if (p_108)
                    {
                        int32_t **l_414 = &l_267[0][2];
                        (*l_414) = l_413;
                        return p_108;
                    }
                    else
                    {
                        (*l_411) = (-1L);
                    }
                }
                for (l_404 = 0; (l_404 != 49); l_404 = safe_add_func_int64_t_s_s(l_404, 1))
                {
                    (*l_411) |= l_417;
                }
            }
        }
        else
        {
            int64_t l_461 = 4L;
            int32_t l_466 = (-4L);
            for (g_127 = 0; (g_127 > 3); g_127 = safe_add_func_int8_t_s_s(g_127, 1))
            {
                int32_t *l_458 = &g_51;
                int8_t l_475[1][2][7];
                int32_t * const **l_478 = &g_204;
                const int32_t *l_483 = 0;
                int32_t l_491 = (-2L);
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 7; k++)
                            l_475[i][j][k] = 0x5AL;
                    }
                }
                l_267[0][2] = l_458;
                for (l_417 = 0; (l_417 < 16); l_417 = safe_add_func_int64_t_s_s(l_417, 1))
                {
                    int32_t *l_465[8][10][1];
                    int64_t l_472 = 0x60D9BFE809754E80LL;
                    int32_t *l_480 = &g_139;
                    int i, j, k;
                    for (i = 0; i < 8; i++)
                    {
                        for (j = 0; j < 10; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_465[i][j][k] = &g_176;
                        }
                    }
                    if (p_108)
                    {
                        const int32_t *l_464 = 0;
                        const int32_t **l_467 = &l_464;
                        l_466 = (safe_mul_func_uint16_t_u_u((g_192 > 0xF3E5404E3BB2D702LL), func_62(l_461, g_326[2][0], l_465[6][9][0], g_68[1][1], 0x2DD61B08L)));
                        (*l_467) = l_464;
                        (*l_467) = &l_466;
                    }
                    else
                    {
                        const uint32_t l_468[3][1] = {{0xB63B4B6CL}, {0xB63B4B6CL}, {0xB63B4B6CL}};
                        int32_t l_469 = 0xA78C5826L;
                        int i, j;
                        l_458 = l_427;
                        l_469 &= l_468[2][0];
                    }
                    (*l_480) |= (safe_add_func_int16_t_s_s(((l_461 > (l_472 & 0U)) & ((safe_sub_func_uint16_t_u_u(l_475[0][1][3], (p_108 || p_108))) ^ (safe_mul_func_uint16_t_u_u(g_326[2][2], (l_480 != l_480))))), (((safe_div_func_int16_t_s_s(p_108, (safe_lshift_func_int16_t_s_s((g_128 & l_461), g_326[4][2])))) < (l_465[6][9][0] == 0)) == g_326[3][1])));
                }
                if ((p_108 | ((*l_458) >= (safe_div_func_uint8_t_u_u((((safe_sub_func_uint64_t_u_u(g_336, g_326[1][2])) & p_108) == p_108), 0x93L)))))
                {
                    const int32_t *l_490 = &g_51;
                    int32_t l_492 = 0xA7488B1EL;
                    if (p_108)
                    {
                        return (*l_458);
                    }
                    else
                    {
                        uint16_t l_495 = 0x7FBFL;
                        l_491 &= (*l_490);
                        l_492 = p_108;
                        l_500 ^= (p_108 != ((*l_458) < ((safe_lshift_func_int16_t_s_s(g_268, 12)) >= (p_108 | (safe_lshift_func_int8_t_s_s((p_108 || l_466), l_495))))));
                    }
                    if ((5L != (p_108 && p_108)))
                    {
                        uint64_t l_502 = 0U;
                        int32_t l_503 = 0L;
                        l_503 = l_502;
                        l_492 = g_504;
                    }
                    else
                    {
                        uint8_t l_505 = 255U;
                        l_505 ^= p_108;
                    }
                }
                else
                {
                    int8_t l_506[9] = {0x18L, 0x4EL, 0x1DL, 0x1DL, 0x4EL, 0x18L, 0x4EL, 0x1DL, 0x1DL};
                    int i;
                    return l_506[3];
                }
            }
        }
    }
    return g_507[4][0];
}







int32_t func_109(int32_t p_110, const int32_t * p_111)
{
    int32_t ***l_112 = &g_84[2][0][0];
    int32_t l_231 = 1L;
    uint32_t l_243 = 0U;
    (*l_112) = &g_85;
    l_231 |= (safe_mod_func_uint16_t_u_u(g_51, (((p_110 == func_115((***l_112), (***l_112), func_115((***l_112), p_110, (*g_85)))) | (+(18446744073709551611U || (safe_lshift_func_uint8_t_u_s((***l_112), 5))))) ^ g_68[3][1])));
    if ((p_110 > (safe_mul_func_uint8_t_u_u(0x0AL, g_139))))
    {
        uint32_t l_256 = 0x64F97EB9L;
        int32_t l_257 = 0x31E3E466L;
        (**l_112) = &p_110;
        (***l_112) = (l_112 == l_112);
        if ((*p_111))
        {
            int8_t l_234 = 0L;
            int32_t **l_237 = &g_85;
            if (((-3L) <= l_234))
            {
                int32_t l_238 = 0x9E197986L;
                if (((p_110 >= (safe_rshift_func_int16_t_s_u(l_234, (l_237 == 0)))) | func_115(l_238, g_176, l_238)))
                {
                    l_238 = (safe_mod_func_uint64_t_u_u((((safe_mod_func_int16_t_s_s((p_110 | 0x2F8FE37CL), p_110)) == g_51) != func_115((**l_237), g_128, l_243)), (safe_mod_func_uint32_t_u_u(((safe_div_func_uint64_t_u_u(g_26, p_110)) | (p_110 ^ p_110)), g_128))));
                }
                else
                {
                    return (*p_111);
                }
                (*l_237) = &p_110;
                if ((((!p_110) >= g_139) || l_238))
                {
                    int i, j, k;
                    for (p_110 = 0; p_110 < 7; p_110 += 2)
                    {
                        for (l_243 = 2; l_243 < 3; l_243 += 3)
                        {
                            for (g_127 = 0; g_127 < 1; g_127 += 1)
                            {
                                return (*p_111);
                            }
                        }
                    }
                }
                else
                {
                    (*l_237) = (*l_237);
                }
                for (g_128 = 0; (g_128 > 20); g_128 = safe_add_func_int16_t_s_s(g_128, 1))
                {
                    int32_t *l_253 = &g_26;
                    int32_t *l_254[8][10];
                    int i, j;
                    for (i = 0; i < 8; i++)
                    {
                        for (j = 0; j < 10; j++)
                            l_254[i][j] = &g_51;
                    }
                    l_231 |= ((safe_mul_func_int16_t_s_s(g_26, (func_115((*p_111), g_176, ((safe_unary_minus_func_uint8_t_u(l_238)) && p_110)) == g_128))) ^ (0 == l_253));
                }
            }
            else
            {
                int32_t *l_255 = 0;
                l_257 ^= (***l_112);
                (*g_85) = (((safe_div_func_int16_t_s_s(p_110, 0x0573L)) | 0x3BE6B133L) == func_115((***l_112), func_115((*g_85), p_110, (safe_sub_func_uint8_t_u_u(p_110, func_115((p_110 >= l_257), (safe_sub_func_uint8_t_u_u(g_68[3][2], p_110)), (*p_111))))), (*p_111)));
            }
            (*g_85) |= (*p_111);
            (*l_112) = &g_85;
            return (*p_111);
        }
        else
        {
            uint64_t l_264 = 0xD169B56A995A4DF9LL;
            (***l_112) = func_62(l_264, l_257, (**l_112), g_68[0][1], (*p_111));
        }
    }
    else
    {
        int32_t *l_265 = 0;
        (**l_112) = &p_110;
        (**l_112) = l_265;
    }
    return (*p_111);
}







int8_t func_115(int32_t p_116, uint8_t p_117, int32_t p_118)
{
    int32_t *l_228[2];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_228[i] = 0;
    for (p_118 = 1; p_118 < 7; p_118 += 1)
    {
        for (p_117 = 2; p_117 < 3; p_117 += 1)
        {
            for (p_116 = 0; p_116 < 1; p_116 += 1)
            {
                int16_t l_125 = 0xF57BL;
                uint64_t l_137 = 18446744073709551609U;
                int32_t *l_188 = &g_127;
                int32_t ***l_221[8][1][5];
                int i, j, k;
                for (i = 0; i < 8; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 5; k++)
                            l_221[i][j][k] = &g_84[(uint32_t)(p_118) % 7][((p_117 + 2)) % 3][(uint32_t)(p_116) % 1];
                    }
                }
                if ((safe_lshift_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u((g_68[2][1] != (g_24[1][1][0] || g_26)), p_118)) == (+(safe_mod_func_int8_t_s_s((p_118 > p_117), 0x8EL)))) != l_125), 13)))
                {
                    int32_t *l_126 = &g_127;
                    (*l_126) |= (*g_85);
                }
                else
                {
                    const int32_t l_136 = 2L;
                    int32_t *l_152 = &g_127;
                    int32_t l_191 = 0x60C6884EL;
                    int32_t *l_222 = &g_176;
                    int i, j, k;
                }
                (*l_188) &= (g_24[1][1][1] < 0xE0470432E41012E1LL);
                (*l_188) = ((safe_rshift_func_int8_t_s_u(g_128, 7)) <= (((5L | (safe_lshift_func_uint16_t_u_s((p_116 || p_117), (p_118 || g_68[1][1])))) <= g_26) < p_117));
            }
        }
    }
    for (g_192 = 0; g_192 < 7; g_192 += 1)
    {
        for (g_139 = 2; g_139 < 3; g_139 += 1)
        {
            for (p_117 = 0; p_117 < 1; p_117 += 1)
            {
                int32_t l_227 = (-6L);
                l_227 ^= p_116;
            }
        }
    }
    p_118 = p_118;
    return p_116;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_24[i][j][k], "g_24[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_68[i][j], "g_68[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_268, "g_268", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_326[i][j], "g_326[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_336, "g_336", print_hash_value);
    transparent_crc(g_412, "g_412", print_hash_value);
    transparent_crc(g_452, "g_452", print_hash_value);
    transparent_crc(g_504, "g_504", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_507[i][j], "g_507[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_796, "g_796", print_hash_value);
    transparent_crc(g_868, "g_868", print_hash_value);
    transparent_crc(g_932, "g_932", print_hash_value);
    transparent_crc(g_959, "g_959", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL);
    return 0;
}
