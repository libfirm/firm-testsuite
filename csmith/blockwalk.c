# 1 "found/test0019.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "found/test0019.c"
# 10 "found/test0019.c"
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
# 11 "found/test0019.c" 2


long __undefined;


struct S0 {
   int32_t f0;
   const volatile uint16_t f1;
   volatile int32_t f2;
   uint32_t f3;
   uint8_t f4;
   const uint32_t f5;
   volatile uint8_t f6;
   const uint32_t f7;
};

struct S1 {
   const int64_t f0;
   int16_t f1;
   volatile int64_t f2;
   int32_t f3;
   volatile int64_t f4;
   volatile uint64_t f5;
   uint8_t f6;
   uint16_t f7;
};

struct S2 {
   const struct S1 f0;
   uint64_t f1;
   int32_t f2;
   struct S1 f3;
   volatile int8_t f4;
   struct S1 f5;
   struct S1 f6;
   const uint32_t f7;
};


volatile int32_t *g_7 = 0;
volatile int32_t ** volatile g_8 = &g_7;
volatile int8_t g_17 = (-1L);
int32_t g_21 = 0xFD03B15AL;
volatile int32_t **g_27 = &g_7;
volatile int32_t *** volatile g_26 = &g_27;
struct S1 g_36 = {1L,0x7DF2L,0xDFDAF0B56FE18BD2LL,-6L,0L,18446744073709551615U,0x40L,0xC49AL};
volatile struct S1 g_38 = {0x3D7FBA349A2DD318LL,0x31BBL,0x7CF3D0097E410F71LL,1L,-5L,18446744073709551615U,254U,65530U};
volatile struct S1 * volatile g_37 = &g_38;
int32_t *g_44 = &g_21;
int32_t ** volatile g_43[4][4][1] = {{{&g_44}, {&g_44}, {&g_44}, {&g_44}}, {{&g_44}, {&g_44}, {&g_44}, {&g_44}}, {{&g_44}, {&g_44}, {&g_44}, {&g_44}}, {{&g_44}, {&g_44}, {&g_44}, {&g_44}}};
uint8_t g_58[8] = {0xC6L, 0x67L, 248U, 248U, 0x67L, 0xC6L, 0x67L, 248U};
int32_t g_65 = 0x186757ACL;
int32_t g_69 = 0L;
struct S0 g_113 = {0xDB386A5BL,1U,6L,1U,1U,0x2CDD4D06L,1U,1U};
struct S1 g_116 = {0xAD4FDB33FCDF6E60LL,1L,1L,0xD701D6BCL,0xD07CA36F24FD69A8LL,0x6771FCFF4A0CBBBBLL,251U,65528U};
struct S0 g_129[7] = {{0L,65531U,0x78AB42ECL,0x55036077L,0x2AL,0x2B5AE5FBL,0x77L,4294967295U}, {0L,65531U,0x78AB42ECL,0x55036077L,0x2AL,0x2B5AE5FBL,0x77L,4294967295U}, {0L,65531U,0x78AB42ECL,0x55036077L,0x2AL,0x2B5AE5FBL,0x77L,4294967295U}, {0L,65531U,0x78AB42ECL,0x55036077L,0x2AL,0x2B5AE5FBL,0x77L,4294967295U}, {0L,65531U,0x78AB42ECL,0x55036077L,0x2AL,0x2B5AE5FBL,0x77L,4294967295U}, {0L,65531U,0x78AB42ECL,0x55036077L,0x2AL,0x2B5AE5FBL,0x77L,4294967295U}, {0L,65531U,0x78AB42ECL,0x55036077L,0x2AL,0x2B5AE5FBL,0x77L,4294967295U}};
struct S0 *g_128 = &g_129[6];
struct S1 g_131[7] = {{0x9EAB44AF1E809F82LL,0x083BL,0x7DFA0F4C7584E37ELL,0L,-1L,0x64B9299A07EF0612LL,247U,65535U}, {0x9EAB44AF1E809F82LL,0x083BL,0x7DFA0F4C7584E37ELL,0L,-1L,0x64B9299A07EF0612LL,247U,65535U}, {0x9EAB44AF1E809F82LL,0x083BL,0x7DFA0F4C7584E37ELL,0L,-1L,0x64B9299A07EF0612LL,247U,65535U}, {0x9EAB44AF1E809F82LL,0x083BL,0x7DFA0F4C7584E37ELL,0L,-1L,0x64B9299A07EF0612LL,247U,65535U}, {0x9EAB44AF1E809F82LL,0x083BL,0x7DFA0F4C7584E37ELL,0L,-1L,0x64B9299A07EF0612LL,247U,65535U}, {0x9EAB44AF1E809F82LL,0x083BL,0x7DFA0F4C7584E37ELL,0L,-1L,0x64B9299A07EF0612LL,247U,65535U}, {0x9EAB44AF1E809F82LL,0x083BL,0x7DFA0F4C7584E37ELL,0L,-1L,0x64B9299A07EF0612LL,247U,65535U}};
volatile struct S1 **g_158 = 0;
struct S1 g_161 = {1L,0x72CAL,0xA7E9AD55411A6625LL,0x1DCDCBB9L,0x0F0A5B6558982A7ELL,0xDD48EE826CDD16A1LL,0xD2L,7U};
struct S1 *g_160 = &g_161;
struct S1 **g_159[2][8] = {{&g_160, &g_160, &g_160, &g_160, &g_160, &g_160, &g_160, &g_160}, {&g_160, &g_160, &g_160, &g_160, &g_160, &g_160, &g_160, &g_160}};
struct S1 g_171 = {-1L,-1L,0L,1L,-9L,0x21F5EDDB6F6008F0LL,249U,65535U};
struct S1 g_173[7] = {{0x87C9332BA1A25AEDLL,0x211EL,0L,1L,0L,0x261D9612183A9A7DLL,0xD6L,1U}, {0x87C9332BA1A25AEDLL,0x211EL,0L,1L,0L,0x261D9612183A9A7DLL,0xD6L,1U}, {0x87C9332BA1A25AEDLL,0x211EL,0L,1L,0L,0x261D9612183A9A7DLL,0xD6L,1U}, {0x87C9332BA1A25AEDLL,0x211EL,0L,1L,0L,0x261D9612183A9A7DLL,0xD6L,1U}, {0x87C9332BA1A25AEDLL,0x211EL,0L,1L,0L,0x261D9612183A9A7DLL,0xD6L,1U}, {0x87C9332BA1A25AEDLL,0x211EL,0L,1L,0L,0x261D9612183A9A7DLL,0xD6L,1U}, {0x87C9332BA1A25AEDLL,0x211EL,0L,1L,0L,0x261D9612183A9A7DLL,0xD6L,1U}};
struct S0 g_206 = {5L,65535U,6L,0xD3E02F51L,5U,4294967295U,248U,0xF4D9A014L};
volatile int32_t g_229 = 0x256FD156L;
struct S1 g_288 = {-9L,0xD8C9L,0xF244529B8D93B701LL,0xB648E4A0L,-4L,3U,255U,0xE949L};
uint32_t g_314 = 0x9EC8A6BBL;
struct S2 g_370 = {{0L,0L,-1L,-1L,-1L,1U,0x4CL,0x2854L},0xEEDB1D599A5114C9LL,0x139A6BB7L,{0x221C5459F6F8027CLL,0x7B53L,0x73F408891F53D3AFLL,0xEE60F88EL,-1L,0U,0x28L,0xFD14L},0x5FL,{0x90D86D0E1961F1A6LL,0L,-3L,0x7E433B84L,-5L,18446744073709551614U,0x52L,0xE1FAL},{1L,1L,0x55EA48497D294ABALL,0x1FE3246DL,0x285BB274697E7A68LL,0x1196864273B3ADBELL,0xA5L,9U},4294967287U};
struct S1 g_389 = {0xDA9A81F95636F13CLL,0x5BEEL,0x314A90D1A0A2916BLL,0xE848159AL,1L,0xA723FE81FB4EB6AFLL,0x3CL,1U};
struct S0 g_411 = {0L,1U,-7L,5U,0x29L,0U,0U,0xF54A64B2L};
struct S2 *g_421 = 0;
const struct S1 g_428 = {1L,-6L,-3L,1L,0x5FE4B67363E014B9LL,1U,255U,65527U};
volatile struct S0 g_445 = {2L,0x764CL,0xEAE149A9L,0x41EF78B6L,0x00L,0xC1AA73F9L,4U,0x1A296D00L};
volatile struct S0 * volatile g_444[1] = {&g_445};
volatile struct S0 * volatile *g_443 = &g_444[0];
struct S1 g_452 = {1L,-1L,1L,0L,0x8EF2461E19B156C8LL,0xDA012C6015A3CE27LL,249U,0x68AFL};
struct S2 g_459 = {{0xBC4A577A698D87ACLL,0x749EL,0xCF89285C79E6988DLL,1L,1L,0U,246U,0x45ADL},0xA4144EE5FFFB8E56LL,-4L,{0xBC4DABD73BBAA280LL,0xF014L,4L,0x06861174L,-4L,0xB74DEC6D6CFC3111LL,0x0DL,0U},0xA9L,{0L,0L,0x44F86216416DD6A9LL,-8L,0x207EE8DCCD0DA9D6LL,0x3EA0A8831E0D733ALL,0xC6L,0x7321L},{1L,0xA2C8L,-2L,0xCAF782BFL,6L,0U,251U,0xF682L},0xFB1EA330L};
struct S0 g_468 = {0xBCBD315EL,0xF914L,-1L,3U,249U,0x5A466EF3L,0x22L,1U};
struct S1 g_475 = {0x92E31FD890B7200CLL,1L,-2L,-7L,-1L,0U,0xACL,6U};
struct S1 g_518 = {-9L,-1L,0x7EB5A85B7E8AE7EFLL,0x7BA54B7EL,0xB86F41053F6E468ALL,6U,0U,0x94A0L};
struct S2 g_537 = {{0xA3E66F1F6D6D7691LL,1L,0xAD270FFD1B05F9BCLL,0L,6L,0xDCD3B71875B53FB0LL,0x88L,1U},0x2286C82FCC29A070LL,0x5D8BC06AL,{5L,1L,0x894E31E63FED35E9LL,0x79586532L,0xD9DF9C07CABDA119LL,18446744073709551609U,0x2FL,0x1B9FL},-9L,{0x23573E6FE5E8F94ALL,0x7ECFL,-3L,-1L,6L,4U,0U,65535U},{1L,-1L,1L,0xC43CD10EL,1L,0xDC1BAAAEB6FD9C09LL,0x2FL,0U},0x8D6E92C0L};
struct S1 g_549[5] = {{0x9A6F872AC11DD320LL,0x0C5DL,0x8145B78812756EE0LL,0x4024034EL,0x560DCD8EA76DFCE9LL,0x3646EBBA300C765ALL,0x76L,0x9B48L}, {0x9A6F872AC11DD320LL,0x0C5DL,0x8145B78812756EE0LL,0x4024034EL,0x560DCD8EA76DFCE9LL,0x3646EBBA300C765ALL,0x76L,0x9B48L}, {0x9A6F872AC11DD320LL,0x0C5DL,0x8145B78812756EE0LL,0x4024034EL,0x560DCD8EA76DFCE9LL,0x3646EBBA300C765ALL,0x76L,0x9B48L}, {0x9A6F872AC11DD320LL,0x0C5DL,0x8145B78812756EE0LL,0x4024034EL,0x560DCD8EA76DFCE9LL,0x3646EBBA300C765ALL,0x76L,0x9B48L}, {0x9A6F872AC11DD320LL,0x0C5DL,0x8145B78812756EE0LL,0x4024034EL,0x560DCD8EA76DFCE9LL,0x3646EBBA300C765ALL,0x76L,0x9B48L}};
struct S2 * const g_557 = 0;
int64_t g_559 = (-3L);
int32_t * const *g_563 = &g_44;
struct S1 g_580 = {0L,0xE54DL,-5L,-1L,9L,0x0A23398D60BE8875LL,0x6DL,0xD10DL};
struct S1 g_582 = {0L,-9L,0xB7B8E23471601165LL,0xBC1B812FL,0x9130DBBA3AC6B347LL,0x938AF954AE5F485ALL,247U,65530U};
struct S0 g_596 = {0x31A4846FL,0U,0x00A836DAL,0x33276626L,255U,0U,250U,0U};
struct S1 g_622 = {0x9F563EF4C22F00C5LL,-6L,4L,1L,6L,3U,0xAAL,0x459EL};
struct S0 g_631 = {0x15079872L,65534U,0xC5409D16L,4294967295U,250U,4294967295U,248U,0x1A3252EBL};
struct S1 g_643[7] = {{0x853D430AE609E272LL,0x0C72L,0x63D5300F635EB218LL,1L,1L,1U,1U,0xA4C9L}, {0x853D430AE609E272LL,0x0C72L,0x63D5300F635EB218LL,1L,1L,1U,1U,0xA4C9L}, {0x853D430AE609E272LL,0x0C72L,0x63D5300F635EB218LL,1L,1L,1U,1U,0xA4C9L}, {0x853D430AE609E272LL,0x0C72L,0x63D5300F635EB218LL,1L,1L,1U,1U,0xA4C9L}, {0x853D430AE609E272LL,0x0C72L,0x63D5300F635EB218LL,1L,1L,1U,1U,0xA4C9L}, {0x853D430AE609E272LL,0x0C72L,0x63D5300F635EB218LL,1L,1L,1U,1U,0xA4C9L}, {0x853D430AE609E272LL,0x0C72L,0x63D5300F635EB218LL,1L,1L,1U,1U,0xA4C9L}};



int64_t func_1(void);
int16_t func_2(int64_t p_3, uint8_t p_4, int32_t p_5, int32_t p_6);
int32_t * const func_28(int32_t *** p_29, uint32_t p_30, int32_t ** p_31, int32_t *** p_32, int32_t * p_33);
int64_t func_52(int64_t p_53, struct S1 ** p_54, int32_t * const * p_55);
uint8_t func_61(int32_t ** p_62, struct S1 * p_63);
uint32_t func_73(struct S1 * p_74, const struct S1 * p_75);
int32_t func_76(int32_t p_77, int32_t * p_78, int32_t p_79, const int32_t * p_80);
int32_t * func_97(int64_t p_98, int32_t * p_99);
const int16_t func_102(uint32_t p_103, int16_t p_104, uint8_t p_105);
struct S0 * func_106(int64_t p_107, uint64_t p_108, struct S1 * p_109, uint16_t p_110);
# 124 "found/test0019.c"
int64_t func_1(void)
{
    uint16_t l_688 = 5U;
    struct S2 *l_694[4][10];
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
            l_694[i][j] = &g_537;
    }
lbl_696:
    (*g_44) = (func_2(0xC0E12267A789E860LL, g_370.f5.f0, l_688, 0x24ABFCD4L) || g_459.f6.f0);
    for (g_559 = 1; g_559 < 4; g_559 += 1)
    {
        for (g_537.f6.f2 = 0; g_537.f6.f2 < 4; g_537.f6.f2 += 2)
        {
            for (g_537.f3.f4 = 0; g_537.f3.f4 < 1; g_537.f3.f4 += 1)
            {
                struct S1 **l_695 = &g_160;
                int32_t l_705 = 0x0282A1B5L;
                int i;
                for (g_452.f5 = 7; g_452.f5 < 8; g_452.f5 += 2)
                {
                    uint16_t l_689 = 0x83F4L;
                    int32_t *l_706 = &g_206.f0;
                    (*g_44) |= l_689;
                    (**g_563) = (safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((l_694[3][6] == &g_537), (l_695 != &g_37))), g_459.f3.f5));
                    if (l_688)
                        goto lbl_696;
                    (*l_706) &= ((safe_lshift_func_int16_t_s_u(g_58[(g_452.f5) % 8], 7)) < (safe_rshift_func_uint16_t_u_s(((safe_sub_func_int16_t_s_s(1L, (4294967290U != func_102(l_689, l_688, l_689)))) & ((safe_lshift_func_uint8_t_u_u(0xFCL, 2)) != g_370.f3.f7)), l_705)));
                }
                (**g_563) = g_58[(g_452.f5) % 8];
                (*g_44) = ((-2L) > g_582.f3);
            }
        }
    }
    return g_428.f2;
}







int16_t func_2(int64_t p_3, uint8_t p_4, int32_t p_5, int32_t p_6)
{
    int32_t l_11 = 0x1C58BDFAL;
    int32_t *l_20 = &g_21;
    int32_t ***l_40 = 0;
    (*g_8) = g_7;
    for (p_4 = 0; (p_4 != 41); p_4 = safe_add_func_int16_t_s_s(p_4, 1))
    {
        uint64_t l_24[1][5][7] = {{{2U, 18446744073709551615U, 2U, 18446744073709551615U, 2U, 18446744073709551615U, 2U}, {2U, 18446744073709551615U, 2U, 18446744073709551615U, 2U, 18446744073709551615U, 2U}, {2U, 18446744073709551615U, 2U, 18446744073709551615U, 2U, 18446744073709551615U, 2U}, {2U, 18446744073709551615U, 2U, 18446744073709551615U, 2U, 18446744073709551615U, 2U}, {2U, 18446744073709551615U, 2U, 18446744073709551615U, 2U, 18446744073709551615U, 2U}}};
        int i, j, k;
        l_11 |= p_5;
        for (p_6 = 0; (p_6 >= 26); p_6 = safe_add_func_uint8_t_u_u(p_6, 1))
        {
            const uint16_t l_14 = 65535U;
            int32_t **l_41 = &l_20;
        }
    }
    return g_116.f3;
}







int32_t * const func_28(int32_t *** p_29, uint32_t p_30, int32_t ** p_31, int32_t *** p_32, int32_t * p_33)
{
    struct S1 *l_35 = &g_36;
    struct S1 **l_34[3][10][1];
    int32_t * const l_39 = 0;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 1; k++)
                l_34[i][j][k] = &l_35;
        }
    }
    g_37 = 0;
    return l_39;
}







int64_t func_52(int64_t p_53, struct S1 ** p_54, int32_t * const * p_55)
{
    int32_t * const *l_57[10];
    int32_t * const **l_56[1][3];
    struct S1 *l_426 = 0;
    int16_t l_460 = 0L;
    int32_t *l_461 = 0;
    struct S2 **l_476[10];
    struct S1 **l_550 = &g_160;
    struct S0 **l_561[3];
    const int64_t l_599 = 0x4BFD5958C155E385LL;
    int32_t l_617 = 5L;
    int64_t l_641 = 0x02A012AB33C57FA7LL;
    uint32_t l_681 = 4294967289U;
    int i, j;
    for (i = 0; i < 10; i++)
        l_57[i] = &g_44;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_56[i][j] = &l_57[5];
    }
    for (i = 0; i < 10; i++)
        l_476[i] = &g_421;
    for (i = 0; i < 3; i++)
        l_561[i] = &g_128;
    p_55 = p_55;
    g_58[4] ^= (*g_44);
    for (g_36.f6 = 0; g_36.f6 < 1; g_36.f6 += 1)
    {
        for (g_36.f7 = 1; g_36.f7 < 3; g_36.f7 += 1)
        {
            uint8_t l_423 = 0xD8L;
            int32_t l_446 = 0x2185ECD8L;
            struct S1 *l_450 = 0;
            struct S2 *l_458[9];
            struct S0 *l_467 = &g_468;
            uint16_t l_493 = 65533U;
            struct S1 *l_517 = &g_518;
            int32_t l_533[10][2];
            int32_t **l_554[3][1];
            int i, j;
            for (i = 0; i < 9; i++)
                l_458[i] = &g_459;
            for (i = 0; i < 10; i++)
            {
                for (j = 0; j < 2; j++)
                    l_533[i][j] = 0x7C101DCEL;
            }
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_554[i][j] = &g_44;
            }
            if ((safe_lshift_func_uint8_t_u_u(0U, p_53)))
            {
                int8_t l_429 = 0x27L;
                struct S1 *l_431[7];
                int32_t l_432[6][10][1];
                int16_t l_488[4];
                struct S0 ** const l_523 = 0;
                int i, j, k;
                for (i = 0; i < 7; i++)
                    l_431[i] = 0;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 10; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_432[i][j][k] = 0L;
                    }
                }
                for (i = 0; i < 4; i++)
                    l_488[i] = 0x054FL;
                if ((l_423 > ((safe_rshift_func_int16_t_s_u(g_411.f7, (~func_73((*p_54), (*p_54))))) == l_423)))
                {
                    uint16_t l_440 = 0x801BL;
                    struct S1 *l_451 = &g_452;
                    int32_t *l_464 = 0;
                    if (p_53)
                    {
                        const struct S1 *l_427 = &g_428;
                        int32_t **l_430 = 0;
                        if (func_73(l_426, l_427))
                        {
                            l_429 |= (*g_44);
                            (*g_27) = (*g_27);
                        }
                        else
                        {
                            l_432[3][9][0] &= (g_428.f6 & 0x67L);
                            (*p_54) = 0;
                        }
                    }
                    else
                    {
                        int8_t l_435 = 0x2AL;
                        int32_t l_436 = 0x4DA73571L;
                        int32_t **l_449 = &g_44;
                        int i;
                        for (g_161.f1 = 9; (g_161.f1 <= 11); g_161.f1 = safe_add_func_int64_t_s_s(g_161.f1, 1))
                        {
                            return l_435;
                        }
                        l_436 &= ((*g_44) <= g_161.f3);
                        for (g_389.f3 = 1; g_389.f3 < 8; g_389.f3 += 1)
                        {
                            int32_t * const *l_437[4][8];
                            int i, j;
                            for (i = 0; i < 4; i++)
                            {
                                for (j = 0; j < 8; j++)
                                    l_437[i][j] = 0;
                            }
                            g_69 = l_432[3][9][0];
                            l_437[2][5] = p_55;
                            return p_53;
                        }
                        if ((safe_div_func_int64_t_s_s((p_53 ^ (g_173[5].f7 ^ func_102(p_53, p_53, g_428.f0))), (~(safe_sub_func_uint32_t_u_u(p_53, (255U & (g_443 == g_443))))))))
                        {
                            l_446 |= p_53;
                        }
                        else
                        {
                            int32_t *l_455 = &g_65;
                            (*l_449) = func_97(((((safe_lshift_func_uint16_t_u_s(g_116.f6, p_53)) ^ (p_53 && func_73(l_451, (*p_54)))) && (safe_lshift_func_int8_t_s_s(((l_432[4][1][0] != p_53) | p_53), 4))) >= g_428.f6), l_455);
                        }
                    }
                    g_411.f0 = (p_53 < g_171.f7);
                    g_206.f0 |= (*g_44);
                    for (l_429 = 0; (l_429 <= 17); l_429 = safe_add_func_int8_t_s_s(l_429, 8))
                    {
                        l_458[5] = g_421;
                        if (l_460)
                        {
                            int32_t **l_462 = &l_461;
                            int32_t l_463 = 0L;
                            l_461 = (*p_55);
                            g_129[6].f0 = (*g_44);
                            l_463 ^= (*g_44);
                            l_464 = func_97(l_440, &l_446);
                        }
                        else
                        {
                            int32_t **l_465 = 0;
                            int32_t **l_466 = &l_461;
                            (*l_466) = func_97(g_161.f1, func_97(g_288.f6, &g_69));
                            l_432[5][4][0] = (0x05L < p_53);
                            return g_370.f3.f1;
                        }
                    }
                }
                else
                {
                    uint32_t l_489 = 4294967295U;
                    int32_t l_503[10] = {1L, 1L, 0x2D02CD69L, 0x18147C04L, 0x18147C04L, 0x2D02CD69L, 1L, 1L, 0x2D02CD69L, 1L};
                    int i;
                    g_468.f0 = (l_467 != g_128);
                    if (l_446)
                    {
                        struct S2 **l_469 = &l_458[8];
                        struct S1 *l_474 = &g_475;
                        int32_t **l_479 = &l_461;
                        (*l_469) = g_421;
                        (*l_479) = func_97((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(l_432[3][9][0], g_171.f6)), func_73(l_474, l_474))), func_97(g_468.f7, func_97((((p_53 | l_446) | (&g_421 != l_476[8])) <= (safe_mul_func_int16_t_s_s(((*g_44) <= l_432[0][0][0]), (g_370.f6.f0 >= g_459.f3.f1)))), func_97(l_432[3][9][0], &g_21))));
                    }
                    else
                    {
                        int i, j;
                        g_411.f0 ^= (safe_sub_func_int32_t_s_s(0xF4B9C93AL, (safe_sub_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u((p_53 < l_489), (+(-10L)))), func_102(g_161.f0, g_475.f3, g_113.f5)))));
                        for (g_314 = 0; g_314 < 2; g_314 += 1)
                        {
                            for (g_65 = 0; g_65 < 8; g_65 += 1)
                            {
                                int32_t **l_492 = &l_461;
                                g_129[6].f0 = (+(safe_lshift_func_int16_t_s_s(p_53, 12)));
                                g_113.f0 = 0xF75FD002L;
                                (*l_492) = func_97((l_431[3] != 0), &g_65);
                            }
                        }
                    }
                    if (func_102(l_493, p_53, 247U))
                    {
                        for (g_459.f6.f7 = (-25); (g_459.f6.f7 == 30); g_459.f6.f7 = safe_add_func_int32_t_s_s(g_459.f6.f7, 1))
                        {
                            int32_t l_496 = 0x653ADFECL;
                            int64_t l_499 = 0x1CCB86FA16A528A8LL;
                            int32_t l_500[2][8][1];
                            int i, j, k;
                            for (i = 0; i < 2; i++)
                            {
                                for (j = 0; j < 8; j++)
                                {
                                    for (k = 0; k < 1; k++)
                                        l_500[i][j][k] = 0xDDC57BA0L;
                                }
                            }
                            l_496 |= (*g_44);
                            l_500[1][1][0] = (safe_mod_func_int32_t_s_s(l_499, (*g_44)));
                        }
                        for (g_65 = (-28); (g_65 >= (-15)); g_65 = safe_add_func_uint64_t_u_u(g_65, 1))
                        {
                            l_503[6] = l_493;
                        }
                    }
                    else
                    {
                        int32_t l_516 = 0x13105167L;
                        int32_t l_524 = 1L;
                        l_503[1] = (((*g_27) == &l_503[6]) && ((safe_div_func_int64_t_s_s(((*g_44) > (l_503[6] == (safe_div_func_uint8_t_u_u(p_53, l_429)))), (safe_add_func_uint32_t_u_u(l_488[2], (*g_44))))) & p_53));
                        for (g_411.f0 = (-18); (g_411.f0 < (-21)); g_411.f0 = safe_sub_func_uint64_t_u_u(g_411.f0, 1))
                        {
                            g_129[6].f0 &= (l_489 <= ((safe_mul_func_uint8_t_u_u(g_161.f3, ((safe_mul_func_int16_t_s_s(g_206.f3, l_516)) >= (l_450 == l_517)))) & (((safe_lshift_func_uint8_t_u_s((p_53 & g_370.f3.f3), g_36.f0)) != 2L) && (0 != l_523))));
                            l_524 = (*g_44);
                            l_503[6] ^= l_423;
                        }
                        for (p_53 = 0; (p_53 > 3); p_53 = safe_add_func_int16_t_s_s(p_53, 5))
                        {
                            g_129[6].f0 = (p_53 ^ g_370.f5.f3);
                        }
                    }
                }
                g_69 &= l_488[2];
            }
            else
            {
                return g_173[5].f6;
            }
            l_446 = (safe_mod_func_int64_t_s_s(l_493, p_53));
        }
    }
    g_129[6].f0 |= (*g_44);
    return l_681;
}







uint8_t func_61(int32_t ** p_62, struct S1 * p_63)
{
    int32_t *l_64 = &g_65;
    struct S1 *l_388[8];
    int i;
    for (i = 0; i < 8; i++)
        l_388[i] = &g_389;
lbl_70:
    (*l_64) = (*g_44);
    for (g_36.f7 = 0; (g_36.f7 == 18); g_36.f7 = safe_add_func_uint8_t_u_u(g_36.f7, 1))
    {
        int32_t *l_68 = &g_69;
        (*l_68) ^= (*l_64);
        if (g_65)
            goto lbl_70;
    }
    if (((safe_sub_func_int16_t_s_s(g_36.f1, ((*l_64) >= func_73(l_388[5], l_388[0])))) >= ((*l_64) && (*l_64))))
    {
        int32_t l_392 = 0xFA789A4CL;
        int8_t l_393[1][2][10] = {{{0x86L, 0x4BL, 0x86L, 0x4BL, 0x86L, 0x4BL, 0x86L, 0x4BL, 0x86L, 0x4BL}, {0x86L, 0x4BL, 0x86L, 0x4BL, 0x86L, 0x4BL, 0x86L, 0x4BL, 0x86L, 0x4BL}}};
        int i, j, k;
        l_393[0][1][4] ^= (safe_mul_func_int8_t_s_s((func_102((*l_64), (*l_64), l_392) & g_129[6].f5), (*l_64)));
        for (g_389.f1 = 0; (g_389.f1 == (-11)); g_389.f1 = safe_sub_func_uint32_t_u_u(g_389.f1, 1))
        {
            int32_t * const l_402 = 0;
            struct S2 **l_422 = &g_421;
            g_113.f0 = ((safe_rshift_func_uint8_t_u_s(((safe_mul_func_uint16_t_u_u(0U, ((safe_lshift_func_int16_t_s_u((*l_64), 6)) & (l_402 == (*p_62))))) != l_393[0][0][2]), (l_393[0][0][2] == (l_393[0][0][3] & ((*g_44) == (g_389.f3 > (*l_64))))))) == 2L);
            if (g_389.f1)
                goto lbl_403;
lbl_403:
            if ((*g_44))
                continue;
            for (g_171.f1 = (-26); (g_171.f1 <= 23); g_171.f1 = safe_add_func_uint8_t_u_u(g_171.f1, 1))
            {
                struct S0 *l_410 = &g_411;
                int32_t l_412 = 5L;
                for (g_116.f3 = 0; (g_116.f3 <= (-25)); g_116.f3 = safe_sub_func_int8_t_s_s(g_116.f3, 1))
                {
                    l_412 ^= (safe_sub_func_uint64_t_u_u(((-3L) <= func_102((18446744073709551608U ^ ((l_410 != l_410) < 0x11DEL)), g_171.f6, l_393[0][1][4])), l_392));
                }
                if ((*l_64))
                    break;
                for (g_370.f6.f3 = 0; (g_370.f6.f3 == (-16)); g_370.f6.f3 = safe_sub_func_uint16_t_u_u(g_370.f6.f3, 1))
                {
                    for (g_370.f3.f1 = (-8); (g_370.f3.f1 >= (-16)); g_370.f3.f1 = safe_sub_func_int16_t_s_s(g_370.f3.f1, 2))
                    {
                        int32_t **l_418 = &g_44;
                        int32_t ***l_417 = &l_418;
                        (*l_417) = p_62;
                        (*l_64) = 6L;
                    }
                    (*l_64) ^= (l_412 & l_412);
                    for (l_392 = 0; (l_392 > (-21)); l_392 = safe_sub_func_uint32_t_u_u(l_392, 1))
                    {
                        (*g_27) = (*g_27);
                        (*l_64) = (*g_44);
                    }
                }
            }
            (*l_422) = g_421;
        }
    }
    else
    {
        (*l_64) ^= (*g_44);
        (*l_64) |= (*g_44);
    }
    return (*l_64);
}







uint32_t func_73(struct S1 * p_74, const struct S1 * p_75)
{
    uint32_t l_367 = 0xBFAE00D6L;
    struct S2 *l_369[1];
    struct S2 * const *l_368[1];
    int32_t *l_371 = &g_21;
    int32_t *l_372 = &g_129[6].f0;
    int64_t l_378 = 1L;
    struct S2 **l_383 = &l_369[0];
    int i;
    for (i = 0; i < 1; i++)
        l_369[i] = &g_370;
    for (i = 0; i < 1; i++)
        l_368[i] = &l_369[0];
    (*l_372) = (*l_371);
    if ((*l_371))
    {
        int16_t l_373 = 0L;
        return l_373;
    }
    else
    {
        const int8_t l_375 = (-2L);
        (*l_372) = (*g_44);
        (*l_372) &= ((safe_unary_minus_func_uint8_t_u(((func_102((g_113.f5 > l_375), (safe_div_func_uint16_t_u_u(g_206.f4, l_375)), (l_375 & l_378)) <= g_171.f0) && 6U))) && (safe_div_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(g_288.f3, l_375)), l_375)));
    }
    (*l_372) = ((l_383 != 0) <= (safe_mul_func_int16_t_s_s(1L, ((*l_372) && (0 != p_75)))));
    return (*l_372);
}







int32_t func_76(int32_t p_77, int32_t * p_78, int32_t p_79, const int32_t * p_80)
{
    uint32_t l_81 = 0x00DAEFF8L;
    int64_t l_90 = 0xDC5EB77D2D86EA79LL;
    int64_t l_153 = (-5L);
    struct S1 *l_170[1];
    struct S0 *l_205 = &g_206;
    volatile int32_t *l_228 = &g_229;
    int32_t *l_257 = 0;
    int32_t *l_263 = &g_65;
    struct S2 **l_316[2];
    int i;
    for (i = 0; i < 1; i++)
        l_170[i] = &g_171;
    for (i = 0; i < 2; i++)
        l_316[i] = 0;
    if (l_81)
    {
        int16_t l_92 = (-10L);
        int32_t l_264 = 0x14F3CCC8L;
        (*p_78) = 0xF831B5E3L;
        if (l_81)
        {
            int32_t l_91[1][1][9] = {{{0x8E5C63B6L, 0x20CA5725L, 1L, 1L, 0x20CA5725L, 0x8E5C63B6L, 0x20CA5725L, 1L, 1L}}};
            int32_t *l_188 = &g_65;
            int i, j, k;
            (*p_78) = 3L;
lbl_198:
            if ((safe_sub_func_int16_t_s_s((((safe_mul_func_int8_t_s_s(((safe_div_func_int64_t_s_s(l_81, p_77)) || (safe_rshift_func_uint16_t_u_s(l_90, p_79))), ((l_91[0][0][1] != l_91[0][0][5]) < p_77))) <= l_92) & 255U), (l_81 && g_58[6]))))
            {
                int32_t l_101 = (-1L);
                struct S1 *l_172 = &g_173[5];
                g_69 = (safe_lshift_func_uint8_t_u_s(250U, 1));
                for (g_69 = 0; (g_69 <= 13); g_69 = safe_add_func_uint32_t_u_u(g_69, 1))
                {
                    for (g_36.f6 = 0; g_36.f6 < 8; g_36.f6 += 1)
                    {
                        g_58[g_36.f6] = 0U;
                    }
                }
                if ((18446744073709551615U <= 0xF3A5E7C9E8429083LL))
                {
                    int32_t **l_162 = &g_44;
                    int i;
                    (*l_162) = func_97((l_101 <= ((~g_21) & (func_102(p_79, func_102(p_77, l_101, l_101), (l_81 || l_153)) | (safe_div_func_uint8_t_u_u(1U, (safe_lshift_func_uint16_t_u_u(l_92, 0))))))), func_97((g_158 == g_159[0][3]), &l_101));
                    for (g_36.f3 = 0; (g_36.f3 <= 20); g_36.f3 = safe_add_func_uint16_t_u_u(g_36.f3, 1))
                    {
                        int32_t l_169 = 0L;
                        (*p_78) = (*g_44);
                        (*p_78) = (safe_mod_func_uint8_t_u_u((p_79 == g_131[3].f0), 0x93L));
                        g_69 = (l_169 != ((l_170[0] != l_172) >= func_102(0xC82959A0L, (-1L), g_131[3].f7)));
                    }
                    for (g_116.f3 = 0; (g_116.f3 != (-2)); g_116.f3 = safe_sub_func_int32_t_s_s(g_116.f3, 6))
                    {
                        g_113.f0 = l_92;
                    }
                    for (g_161.f7 = 0; g_161.f7 < 8; g_161.f7 += 1)
                    {
                        (*p_78) = (*p_78);
                        (*g_27) = (*g_27);
                    }
                }
                else
                {
                    struct S2 *l_176 = 0;
                    struct S2 **l_177 = &l_176;
                    (*p_78) = (-2L);
                    (*p_78) ^= func_102(p_79, func_102(l_81, l_101, l_91[0][0][1]), g_173[5].f3);
                    (*l_177) = l_176;
                }
                (*p_78) &= (0x3B96202EL != 0x2957CE5DL);
            }
            else
            {
                uint8_t l_193 = 0xB2L;
                int32_t l_194 = 0xD8A1F484L;
                (*p_78) &= (safe_rshift_func_int16_t_s_s(g_171.f6, 12));
                (*p_78) = (safe_mod_func_int64_t_s_s((0xEAL == g_131[3].f7), func_102(((&g_160 != &g_160) || (func_102(l_92, (safe_lshift_func_uint8_t_u_u(g_116.f1, 3)), l_91[0][0][6]) <= 0xB10CL)), l_81, p_79)));
                (*p_78) = ((safe_lshift_func_int16_t_s_s(func_102(g_129[6].f0, p_79, 0xA5L), (&p_77 != l_188))) & ((((((*l_188) ^ l_92) > (safe_lshift_func_uint16_t_u_u(p_77, 15))) && (safe_mul_func_uint8_t_u_u((g_161.f6 || p_77), (g_129[6].f4 != p_79)))) >= l_193) < (l_90 && (&g_160 != &l_170[0]))));
                l_194 = (-1L);
            }
            for (g_116.f1 = 6; g_116.f1 < 8; g_116.f1 += 1)
            {
                int64_t l_197 = 0L;
                (*p_78) &= (+((safe_rshift_func_int8_t_s_s(g_161.f0, (g_58[(uint16_t)(g_116.f1) % 8] > func_102((*l_188), p_77, (l_197 > g_161.f1))))) | p_77));
            }
            if (l_81)
                goto lbl_198;
        }
        else
        {
            int32_t *l_199 = &g_65;
            int32_t **l_200 = &l_199;
            (*l_200) = func_97(6L, l_199);
            if (func_102(4294967289U, g_36.f6, 0x1EL))
            {
                uint8_t l_219 = 0U;
                struct S0 **l_224 = &g_128;
                uint64_t l_227 = 0x359ED160961C7848LL;
                int32_t l_245[8] = {0xB215FF56L, 0xA9858D23L, 0xB215FF56L, 0xA9858D23L, 0xB215FF56L, 0xA9858D23L, 0xB215FF56L, 0xA9858D23L};
                uint8_t l_252[9][7][1];
                int8_t l_255 = 0x80L;
                int16_t l_256 = 0L;
                int i, j, k;
                for (i = 0; i < 9; i++)
                {
                    for (j = 0; j < 7; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_252[i][j][k] = 8U;
                    }
                }
                if ((safe_mul_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((l_205 != g_128), (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u(g_206.f3, g_113.f5)), g_206.f5)), (!0x26E7L))))) ^ l_92), ((0xD151L <= (safe_mod_func_uint32_t_u_u((&p_80 != 0), ((*p_78) | (safe_add_func_uint64_t_u_u(l_219, g_171.f6)))))) > ((safe_sub_func_uint64_t_u_u((safe_div_func_int16_t_s_s(g_206.f7, p_77)), (&l_205 == l_224))) < l_153)))))
                {
                    uint16_t l_230 = 65526U;
                    if (func_102((safe_mul_func_uint16_t_u_u(g_161.f1, (**l_200))), p_77, (**l_200)))
                    {
                        (*p_78) |= func_102(g_161.f3, g_129[6].f0, l_227);
                        l_228 = (*g_27);
                        (*p_78) = (*p_80);
                    }
                    else
                    {
                        (*p_78) = l_230;
                        return (*p_80);
                    }
                    if (g_206.f5)
                        goto lbl_231;
                }
                else
                {
lbl_231:
                    (*p_78) = (p_79 ^ (+p_77));
                    (*p_78) = (((safe_unary_minus_func_int32_t_s((safe_mod_func_int16_t_s_s((&l_200 == &g_27), (safe_sub_func_uint8_t_u_u((p_79 && g_116.f7), (g_116.f0 == p_77))))))) != (safe_add_func_int16_t_s_s((-7L), (((~(*g_44)) != (safe_rshift_func_int8_t_s_u(g_161.f0, (*l_199)))) | (*p_80))))) <= (0x1F7A3D56L | (func_102(l_92, g_113.f3, g_58[4]) & (safe_lshift_func_int8_t_s_u((((*g_44) >= g_36.f6) < (safe_mul_func_uint16_t_u_u(g_116.f7, l_245[7]))), 7)))));
                }
                if ((+((safe_mul_func_int8_t_s_s(0L, func_102(g_206.f7, (*l_199), (*l_199)))) < (~p_77))))
                {
                    for (l_92 = (-16); (l_92 > (-2)); l_92 = safe_add_func_uint64_t_u_u(l_92, 1))
                    {
                        (*p_78) |= 5L;
                        (*l_200) = func_97(func_102(g_206.f7, (((safe_div_func_int8_t_s_s(1L, l_252[3][1][0])) <= ((safe_sub_func_uint32_t_u_u(p_77, l_90)) | (l_255 > g_58[0]))) == (!l_256)), 0U), &g_21);
                        (*l_200) = func_97(p_79, func_97(g_206.f3, func_97((p_77 & func_102(g_131[3].f7, func_102(g_161.f3, l_92, l_92), g_131[3].f7)), l_257)));
                    }
                }
                else
                {
                    int64_t l_260[8][1];
                    int i, j;
                    for (i = 0; i < 8; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_260[i][j] = 0xED5134EBF0AE526CLL;
                    }
                    (*p_78) = (safe_sub_func_uint16_t_u_u((l_260[2][0] != 6L), p_77));
                    return (*p_80);
                }
                return (*p_80);
            }
            else
            {
                int8_t l_261 = 0xE7L;
                int32_t l_262 = 0x402E813DL;
                (*l_200) = func_97(l_92, func_97(p_79, func_97((-2L), (*l_200))));
                (*p_78) = l_261;
                l_262 = l_261;
            }
            (*l_200) = func_97(p_77, func_97(func_102((*l_199), p_79, (g_206.f4 != (*p_78))), l_263));
        }
        return l_264;
    }
    else
    {
        int16_t l_271[3][3][9] = {{{0x29C7L, 0x29C7L, 5L, 0x1DF5L, 1L, 0x1DF5L, 5L, 0x29C7L, 0x29C7L}, {0x29C7L, 0x29C7L, 5L, 0x1DF5L, 1L, 0x1DF5L, 5L, 0x29C7L, 0x29C7L}, {0x29C7L, 0x29C7L, 5L, 0x1DF5L, 1L, 0x1DF5L, 5L, 0x29C7L, 0x29C7L}}, {{0x29C7L, 0x29C7L, 5L, 0x1DF5L, 1L, 0x1DF5L, 5L, 0x29C7L, 0x29C7L}, {0x29C7L, 0x29C7L, 5L, 0x1DF5L, 1L, 0x1DF5L, 5L, 0x29C7L, 0x29C7L}, {0x29C7L, 0x29C7L, 5L, 0x1DF5L, 1L, 0x1DF5L, 5L, 0x29C7L, 0x29C7L}}, {{0x29C7L, 0x29C7L, 5L, 0x1DF5L, 1L, 0x1DF5L, 5L, 0x29C7L, 0x29C7L}, {0x29C7L, 0x29C7L, 5L, 0x1DF5L, 1L, 0x1DF5L, 5L, 0x29C7L, 0x29C7L}, {0x29C7L, 0x29C7L, 5L, 0x1DF5L, 1L, 0x1DF5L, 5L, 0x29C7L, 0x29C7L}}};
        struct S1 *l_287 = &g_288;
        int32_t l_305[1][1][1];
        struct S2 *l_313 = 0;
        struct S2 * const *l_312 = &l_313;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_305[i][j][k] = (-1L);
            }
        }
        for (p_79 = (-26); (p_79 > (-28)); p_79 = safe_sub_func_uint64_t_u_u(p_79, 1))
        {
            int16_t l_272 = (-1L);
            const int32_t l_300[8][5][1] = {{{0x21089FC9L}, {0x21089FC9L}, {0x21089FC9L}, {0x21089FC9L}, {0x21089FC9L}}, {{0x21089FC9L}, {0x21089FC9L}, {0x21089FC9L}, {0x21089FC9L}, {0x21089FC9L}}, {{0x21089FC9L}, {0x21089FC9L}, {0x21089FC9L}, {0x21089FC9L}, {0x21089FC9L}}, {{0x21089FC9L}, {0x21089FC9L}, {0x21089FC9L}, {0x21089FC9L}, {0x21089FC9L}}, {{0x21089FC9L}, {0x21089FC9L}, {0x21089FC9L}, {0x21089FC9L}, {0x21089FC9L}}, {{0x21089FC9L}, {0x21089FC9L}, {0x21089FC9L}, {0x21089FC9L}, {0x21089FC9L}}, {{0x21089FC9L}, {0x21089FC9L}, {0x21089FC9L}, {0x21089FC9L}, {0x21089FC9L}}, {{0x21089FC9L}, {0x21089FC9L}, {0x21089FC9L}, {0x21089FC9L}, {0x21089FC9L}}};
            int i, j, k;
            if ((safe_mod_func_int64_t_s_s((safe_div_func_uint8_t_u_u((func_102((*l_263), func_102(l_271[0][2][8], p_77, g_161.f1), ((l_272 <= g_173[5].f7) ^ (safe_mul_func_int8_t_s_s(l_272, p_77)))) || p_77), l_272)), (safe_lshift_func_uint16_t_u_u((g_21 >= ((safe_div_func_int64_t_s_s(((*g_44) >= (*l_263)), (safe_div_func_uint32_t_u_u(p_79, p_79)))) ^ ((safe_mul_func_uint8_t_u_u(g_173[5].f3, g_131[3].f3)) || (l_272 & g_113.f4)))), (((safe_sub_func_int16_t_s_s(p_77, (safe_sub_func_uint8_t_u_u(p_79, g_131[3].f1)))) <= l_272) | (l_287 != l_170[0])))))))
            {
                uint32_t l_293 = 0x59FC88F5L;
                int16_t l_308 = 0x3346L;
                uint32_t l_331 = 0U;
                if ((safe_add_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u(func_102(l_293, l_271[0][2][8], (safe_mod_func_uint64_t_u_u(func_102(g_173[5].f6, p_77, g_206.f3), g_173[5].f7))), g_161.f1)) != (safe_rshift_func_int8_t_s_u((l_272 | ((p_77 <= l_272) == (g_173[5].f6 <= l_300[3][2][0]))), ((safe_mod_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(g_288.f0, l_305[0][0][0])), (p_77 ^ p_77))) & (safe_mod_func_int32_t_s_s(1L, (l_272 && l_308))))))), g_36.f0)))
                {
                    struct S2 **l_311 = 0;
                    l_305[0][0][0] ^= (p_79 | (safe_add_func_int8_t_s_s(0L, (l_311 != l_312))));
                }
                else
                {
                    int32_t l_334[1][4] = {{(-1L), (-1L), 0x7F022DFCL, (-1L)}};
                    const struct S0 **l_338 = 0;
                    int i, j, k;
                    for (g_116.f7 = 0; g_116.f7 < 1; g_116.f7 += 1)
                    {
                        for (g_69 = 0; g_69 < 1; g_69 += 1)
                        {
                            for (g_206.f0 = 0; g_206.f0 < 1; g_206.f0 += 1)
                            {
                                int64_t l_315 = 0x00122506C6AAB39FLL;
                                (*p_78) = (0xB6F88C86E7D8582BLL ^ g_314);
                                (*p_78) &= (((*g_44) < p_79) != l_305[(g_116.f7) % 1][(uint32_t)(g_69) % 1][(uint32_t)(g_206.f0) % 1]);
                            }
                        }
                    }
                    if ((safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(p_79, g_206.f4)), func_102(p_77, func_102((safe_lshift_func_int8_t_s_u(func_102(l_308, g_288.f3, p_79), 6)), p_79, (safe_mod_func_int64_t_s_s(g_131[3].f3, (safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(l_300[3][2][0], 2)), (safe_add_func_uint8_t_u_u(g_21, l_331))))))), (p_77 && (((safe_mul_func_int8_t_s_s(g_131[3].f0, l_305[0][0][0])) ^ l_334[0][0]) <= 0x9A7E04E4066CF73ALL))))))
                    {
                        uint64_t l_335 = 18446744073709551614U;
                        (*p_78) |= (func_102(g_288.f0, l_335, l_305[0][0][0]) > ((safe_lshift_func_int16_t_s_s((g_206.f3 < 0x9E8DL), 13)) ^ (l_338 != l_338)));
                        l_334[0][2] |= l_335;
                        return l_305[(g_116.f7) % 1][(uint32_t)(g_69) % 1][(uint32_t)(g_206.f0) % 1];
                    }
                    else
                    {
                        int32_t **l_341 = &l_263;
                        (*p_78) &= l_271[1][0][5];
                        (*l_341) = func_97(p_79, func_97((safe_rshift_func_int16_t_s_s((g_113.f3 ^ ((*g_27) == 0)), 11)), &g_21));
                        (*p_78) |= (*p_78);
                    }
                }
                return (*l_263);
            }
            else
            {
                int32_t l_342[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_342[i] = 0x8E014A86L;
                (*p_78) = (func_102(g_173[5].f7, g_206.f0, l_342[0]) & (safe_mod_func_uint8_t_u_u(g_161.f1, (5U | ((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(l_342[0], 2)), ((*l_263) == g_171.f6))) >= ((p_77 >= (*l_263)) == 0x7225953BL))))));
                return (*p_80);
            }
        }
        (*p_78) ^= (func_102((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(65535U, (l_305[0][0][0] >= g_171.f6))), 12)), l_305[0][0][0], p_79) != (safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s(((safe_add_func_int16_t_s_s((g_131[3].f0 != g_171.f1), p_79)) ^ ((g_113.f0 >= p_77) ^ (g_113.f7 && g_116.f0))), g_116.f0)), (*l_263))));
    }
    return (*l_263);
}







int32_t * func_97(int64_t p_98, int32_t * p_99)
{
    int32_t *l_100 = &g_21;
    return l_100;
}







const int16_t func_102(uint32_t p_103, int16_t p_104, uint8_t p_105)
{
    struct S1 *l_130[2];
    int32_t l_132[8][9][1];
    struct S0 **l_133 = &g_128;
    int32_t **l_136[4][3][1];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_130[i] = &g_131[3];
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 1; k++)
                l_132[i][j][k] = 0xA0ACF185L;
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
                l_136[i][j][k] = 0;
        }
    }
    (*l_133) = func_106(p_103, p_103, l_130[1], l_132[7][3][0]);
    g_69 = ((safe_add_func_uint16_t_u_u((l_136[2][1][0] == 0), (safe_add_func_int8_t_s_s(g_36.f6, (safe_mul_func_uint16_t_u_u(p_105, (safe_lshift_func_int8_t_s_u(g_116.f7, 0)))))))) <= ((p_105 < ((safe_lshift_func_uint8_t_u_s(0xC5L, 6)) >= (safe_add_func_int16_t_s_s((safe_div_func_int32_t_s_s(p_104, p_103)), g_36.f0)))) != (+(safe_lshift_func_int16_t_s_s(p_103, 3)))));
    return g_116.f1;
}







struct S0 * func_106(int64_t p_107, uint64_t p_108, struct S1 * p_109, uint16_t p_110)
{
    struct S0 * const l_111 = 0;
    struct S0 *l_112 = &g_113;
    struct S1 *l_115 = &g_116;
    struct S1 **l_114 = &l_115;
    int32_t l_117 = (-8L);
    int32_t *l_127 = &g_69;
    l_112 = l_111;
    (*l_114) = p_109;
    (*l_127) &= (l_117 >= (safe_mul_func_int8_t_s_s((((safe_unary_minus_func_uint8_t_u((safe_mod_func_int64_t_s_s(g_21, g_36.f7)))) && p_107) > (safe_add_func_uint64_t_u_u(l_117, (safe_sub_func_int32_t_s_s(l_117, l_117))))), g_116.f6)));
    (*g_27) = 0;
    return g_128;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_36.f0, "g_36.f0", print_hash_value);
    transparent_crc(g_36.f1, "g_36.f1", print_hash_value);
    transparent_crc(g_36.f2, "g_36.f2", print_hash_value);
    transparent_crc(g_36.f3, "g_36.f3", print_hash_value);
    transparent_crc(g_36.f4, "g_36.f4", print_hash_value);
    transparent_crc(g_36.f5, "g_36.f5", print_hash_value);
    transparent_crc(g_36.f6, "g_36.f6", print_hash_value);
    transparent_crc(g_36.f7, "g_36.f7", print_hash_value);
    transparent_crc(g_38.f0, "g_38.f0", print_hash_value);
    transparent_crc(g_38.f1, "g_38.f1", print_hash_value);
    transparent_crc(g_38.f2, "g_38.f2", print_hash_value);
    transparent_crc(g_38.f3, "g_38.f3", print_hash_value);
    transparent_crc(g_38.f4, "g_38.f4", print_hash_value);
    transparent_crc(g_38.f5, "g_38.f5", print_hash_value);
    transparent_crc(g_38.f6, "g_38.f6", print_hash_value);
    transparent_crc(g_38.f7, "g_38.f7", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_58[i], "g_58[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_113.f0, "g_113.f0", print_hash_value);
    transparent_crc(g_113.f1, "g_113.f1", print_hash_value);
    transparent_crc(g_113.f2, "g_113.f2", print_hash_value);
    transparent_crc(g_113.f3, "g_113.f3", print_hash_value);
    transparent_crc(g_113.f4, "g_113.f4", print_hash_value);
    transparent_crc(g_113.f5, "g_113.f5", print_hash_value);
    transparent_crc(g_113.f6, "g_113.f6", print_hash_value);
    transparent_crc(g_113.f7, "g_113.f7", print_hash_value);
    transparent_crc(g_116.f0, "g_116.f0", print_hash_value);
    transparent_crc(g_116.f1, "g_116.f1", print_hash_value);
    transparent_crc(g_116.f2, "g_116.f2", print_hash_value);
    transparent_crc(g_116.f3, "g_116.f3", print_hash_value);
    transparent_crc(g_116.f4, "g_116.f4", print_hash_value);
    transparent_crc(g_116.f5, "g_116.f5", print_hash_value);
    transparent_crc(g_116.f6, "g_116.f6", print_hash_value);
    transparent_crc(g_116.f7, "g_116.f7", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_129[i].f0, "g_129[i].f0", print_hash_value);
        transparent_crc(g_129[i].f1, "g_129[i].f1", print_hash_value);
        transparent_crc(g_129[i].f2, "g_129[i].f2", print_hash_value);
        transparent_crc(g_129[i].f3, "g_129[i].f3", print_hash_value);
        transparent_crc(g_129[i].f4, "g_129[i].f4", print_hash_value);
        transparent_crc(g_129[i].f5, "g_129[i].f5", print_hash_value);
        transparent_crc(g_129[i].f6, "g_129[i].f6", print_hash_value);
        transparent_crc(g_129[i].f7, "g_129[i].f7", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_131[i].f0, "g_131[i].f0", print_hash_value);
        transparent_crc(g_131[i].f1, "g_131[i].f1", print_hash_value);
        transparent_crc(g_131[i].f2, "g_131[i].f2", print_hash_value);
        transparent_crc(g_131[i].f3, "g_131[i].f3", print_hash_value);
        transparent_crc(g_131[i].f4, "g_131[i].f4", print_hash_value);
        transparent_crc(g_131[i].f5, "g_131[i].f5", print_hash_value);
        transparent_crc(g_131[i].f6, "g_131[i].f6", print_hash_value);
        transparent_crc(g_131[i].f7, "g_131[i].f7", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_161.f0, "g_161.f0", print_hash_value);
    transparent_crc(g_161.f1, "g_161.f1", print_hash_value);
    transparent_crc(g_161.f2, "g_161.f2", print_hash_value);
    transparent_crc(g_161.f3, "g_161.f3", print_hash_value);
    transparent_crc(g_161.f4, "g_161.f4", print_hash_value);
    transparent_crc(g_161.f5, "g_161.f5", print_hash_value);
    transparent_crc(g_161.f6, "g_161.f6", print_hash_value);
    transparent_crc(g_161.f7, "g_161.f7", print_hash_value);
    transparent_crc(g_171.f0, "g_171.f0", print_hash_value);
    transparent_crc(g_171.f1, "g_171.f1", print_hash_value);
    transparent_crc(g_171.f2, "g_171.f2", print_hash_value);
    transparent_crc(g_171.f3, "g_171.f3", print_hash_value);
    transparent_crc(g_171.f4, "g_171.f4", print_hash_value);
    transparent_crc(g_171.f5, "g_171.f5", print_hash_value);
    transparent_crc(g_171.f6, "g_171.f6", print_hash_value);
    transparent_crc(g_171.f7, "g_171.f7", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_173[i].f0, "g_173[i].f0", print_hash_value);
        transparent_crc(g_173[i].f1, "g_173[i].f1", print_hash_value);
        transparent_crc(g_173[i].f2, "g_173[i].f2", print_hash_value);
        transparent_crc(g_173[i].f3, "g_173[i].f3", print_hash_value);
        transparent_crc(g_173[i].f4, "g_173[i].f4", print_hash_value);
        transparent_crc(g_173[i].f5, "g_173[i].f5", print_hash_value);
        transparent_crc(g_173[i].f6, "g_173[i].f6", print_hash_value);
        transparent_crc(g_173[i].f7, "g_173[i].f7", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_206.f0, "g_206.f0", print_hash_value);
    transparent_crc(g_206.f1, "g_206.f1", print_hash_value);
    transparent_crc(g_206.f2, "g_206.f2", print_hash_value);
    transparent_crc(g_206.f3, "g_206.f3", print_hash_value);
    transparent_crc(g_206.f4, "g_206.f4", print_hash_value);
    transparent_crc(g_206.f5, "g_206.f5", print_hash_value);
    transparent_crc(g_206.f6, "g_206.f6", print_hash_value);
    transparent_crc(g_206.f7, "g_206.f7", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_288.f0, "g_288.f0", print_hash_value);
    transparent_crc(g_288.f1, "g_288.f1", print_hash_value);
    transparent_crc(g_288.f2, "g_288.f2", print_hash_value);
    transparent_crc(g_288.f3, "g_288.f3", print_hash_value);
    transparent_crc(g_288.f4, "g_288.f4", print_hash_value);
    transparent_crc(g_288.f5, "g_288.f5", print_hash_value);
    transparent_crc(g_288.f6, "g_288.f6", print_hash_value);
    transparent_crc(g_288.f7, "g_288.f7", print_hash_value);
    transparent_crc(g_314, "g_314", print_hash_value);
    transparent_crc(g_370.f0.f0, "g_370.f0.f0", print_hash_value);
    transparent_crc(g_370.f0.f1, "g_370.f0.f1", print_hash_value);
    transparent_crc(g_370.f0.f2, "g_370.f0.f2", print_hash_value);
    transparent_crc(g_370.f0.f3, "g_370.f0.f3", print_hash_value);
    transparent_crc(g_370.f0.f4, "g_370.f0.f4", print_hash_value);
    transparent_crc(g_370.f0.f5, "g_370.f0.f5", print_hash_value);
    transparent_crc(g_370.f0.f6, "g_370.f0.f6", print_hash_value);
    transparent_crc(g_370.f0.f7, "g_370.f0.f7", print_hash_value);
    transparent_crc(g_370.f1, "g_370.f1", print_hash_value);
    transparent_crc(g_370.f2, "g_370.f2", print_hash_value);
    transparent_crc(g_370.f3.f0, "g_370.f3.f0", print_hash_value);
    transparent_crc(g_370.f3.f1, "g_370.f3.f1", print_hash_value);
    transparent_crc(g_370.f3.f2, "g_370.f3.f2", print_hash_value);
    transparent_crc(g_370.f3.f3, "g_370.f3.f3", print_hash_value);
    transparent_crc(g_370.f3.f4, "g_370.f3.f4", print_hash_value);
    transparent_crc(g_370.f3.f5, "g_370.f3.f5", print_hash_value);
    transparent_crc(g_370.f3.f6, "g_370.f3.f6", print_hash_value);
    transparent_crc(g_370.f3.f7, "g_370.f3.f7", print_hash_value);
    transparent_crc(g_370.f4, "g_370.f4", print_hash_value);
    transparent_crc(g_370.f5.f0, "g_370.f5.f0", print_hash_value);
    transparent_crc(g_370.f5.f1, "g_370.f5.f1", print_hash_value);
    transparent_crc(g_370.f5.f2, "g_370.f5.f2", print_hash_value);
    transparent_crc(g_370.f5.f3, "g_370.f5.f3", print_hash_value);
    transparent_crc(g_370.f5.f4, "g_370.f5.f4", print_hash_value);
    transparent_crc(g_370.f5.f5, "g_370.f5.f5", print_hash_value);
    transparent_crc(g_370.f5.f6, "g_370.f5.f6", print_hash_value);
    transparent_crc(g_370.f5.f7, "g_370.f5.f7", print_hash_value);
    transparent_crc(g_370.f6.f0, "g_370.f6.f0", print_hash_value);
    transparent_crc(g_370.f6.f1, "g_370.f6.f1", print_hash_value);
    transparent_crc(g_370.f6.f2, "g_370.f6.f2", print_hash_value);
    transparent_crc(g_370.f6.f3, "g_370.f6.f3", print_hash_value);
    transparent_crc(g_370.f6.f4, "g_370.f6.f4", print_hash_value);
    transparent_crc(g_370.f6.f5, "g_370.f6.f5", print_hash_value);
    transparent_crc(g_370.f6.f6, "g_370.f6.f6", print_hash_value);
    transparent_crc(g_370.f6.f7, "g_370.f6.f7", print_hash_value);
    transparent_crc(g_370.f7, "g_370.f7", print_hash_value);
    transparent_crc(g_389.f0, "g_389.f0", print_hash_value);
    transparent_crc(g_389.f1, "g_389.f1", print_hash_value);
    transparent_crc(g_389.f2, "g_389.f2", print_hash_value);
    transparent_crc(g_389.f3, "g_389.f3", print_hash_value);
    transparent_crc(g_389.f4, "g_389.f4", print_hash_value);
    transparent_crc(g_389.f5, "g_389.f5", print_hash_value);
    transparent_crc(g_389.f6, "g_389.f6", print_hash_value);
    transparent_crc(g_389.f7, "g_389.f7", print_hash_value);
    transparent_crc(g_411.f0, "g_411.f0", print_hash_value);
    transparent_crc(g_411.f1, "g_411.f1", print_hash_value);
    transparent_crc(g_411.f2, "g_411.f2", print_hash_value);
    transparent_crc(g_411.f3, "g_411.f3", print_hash_value);
    transparent_crc(g_411.f4, "g_411.f4", print_hash_value);
    transparent_crc(g_411.f5, "g_411.f5", print_hash_value);
    transparent_crc(g_411.f6, "g_411.f6", print_hash_value);
    transparent_crc(g_411.f7, "g_411.f7", print_hash_value);
    transparent_crc(g_428.f0, "g_428.f0", print_hash_value);
    transparent_crc(g_428.f1, "g_428.f1", print_hash_value);
    transparent_crc(g_428.f2, "g_428.f2", print_hash_value);
    transparent_crc(g_428.f3, "g_428.f3", print_hash_value);
    transparent_crc(g_428.f4, "g_428.f4", print_hash_value);
    transparent_crc(g_428.f5, "g_428.f5", print_hash_value);
    transparent_crc(g_428.f6, "g_428.f6", print_hash_value);
    transparent_crc(g_428.f7, "g_428.f7", print_hash_value);
    transparent_crc(g_445.f0, "g_445.f0", print_hash_value);
    transparent_crc(g_445.f1, "g_445.f1", print_hash_value);
    transparent_crc(g_445.f2, "g_445.f2", print_hash_value);
    transparent_crc(g_445.f3, "g_445.f3", print_hash_value);
    transparent_crc(g_445.f4, "g_445.f4", print_hash_value);
    transparent_crc(g_445.f5, "g_445.f5", print_hash_value);
    transparent_crc(g_445.f6, "g_445.f6", print_hash_value);
    transparent_crc(g_445.f7, "g_445.f7", print_hash_value);
    transparent_crc(g_452.f0, "g_452.f0", print_hash_value);
    transparent_crc(g_452.f1, "g_452.f1", print_hash_value);
    transparent_crc(g_452.f2, "g_452.f2", print_hash_value);
    transparent_crc(g_452.f3, "g_452.f3", print_hash_value);
    transparent_crc(g_452.f4, "g_452.f4", print_hash_value);
    transparent_crc(g_452.f5, "g_452.f5", print_hash_value);
    transparent_crc(g_452.f6, "g_452.f6", print_hash_value);
    transparent_crc(g_452.f7, "g_452.f7", print_hash_value);
    transparent_crc(g_459.f0.f0, "g_459.f0.f0", print_hash_value);
    transparent_crc(g_459.f0.f1, "g_459.f0.f1", print_hash_value);
    transparent_crc(g_459.f0.f2, "g_459.f0.f2", print_hash_value);
    transparent_crc(g_459.f0.f3, "g_459.f0.f3", print_hash_value);
    transparent_crc(g_459.f0.f4, "g_459.f0.f4", print_hash_value);
    transparent_crc(g_459.f0.f5, "g_459.f0.f5", print_hash_value);
    transparent_crc(g_459.f0.f6, "g_459.f0.f6", print_hash_value);
    transparent_crc(g_459.f0.f7, "g_459.f0.f7", print_hash_value);
    transparent_crc(g_459.f1, "g_459.f1", print_hash_value);
    transparent_crc(g_459.f2, "g_459.f2", print_hash_value);
    transparent_crc(g_459.f3.f0, "g_459.f3.f0", print_hash_value);
    transparent_crc(g_459.f3.f1, "g_459.f3.f1", print_hash_value);
    transparent_crc(g_459.f3.f2, "g_459.f3.f2", print_hash_value);
    transparent_crc(g_459.f3.f3, "g_459.f3.f3", print_hash_value);
    transparent_crc(g_459.f3.f4, "g_459.f3.f4", print_hash_value);
    transparent_crc(g_459.f3.f5, "g_459.f3.f5", print_hash_value);
    transparent_crc(g_459.f3.f6, "g_459.f3.f6", print_hash_value);
    transparent_crc(g_459.f3.f7, "g_459.f3.f7", print_hash_value);
    transparent_crc(g_459.f4, "g_459.f4", print_hash_value);
    transparent_crc(g_459.f5.f0, "g_459.f5.f0", print_hash_value);
    transparent_crc(g_459.f5.f1, "g_459.f5.f1", print_hash_value);
    transparent_crc(g_459.f5.f2, "g_459.f5.f2", print_hash_value);
    transparent_crc(g_459.f5.f3, "g_459.f5.f3", print_hash_value);
    transparent_crc(g_459.f5.f4, "g_459.f5.f4", print_hash_value);
    transparent_crc(g_459.f5.f5, "g_459.f5.f5", print_hash_value);
    transparent_crc(g_459.f5.f6, "g_459.f5.f6", print_hash_value);
    transparent_crc(g_459.f5.f7, "g_459.f5.f7", print_hash_value);
    transparent_crc(g_459.f6.f0, "g_459.f6.f0", print_hash_value);
    transparent_crc(g_459.f6.f1, "g_459.f6.f1", print_hash_value);
    transparent_crc(g_459.f6.f2, "g_459.f6.f2", print_hash_value);
    transparent_crc(g_459.f6.f3, "g_459.f6.f3", print_hash_value);
    transparent_crc(g_459.f6.f4, "g_459.f6.f4", print_hash_value);
    transparent_crc(g_459.f6.f5, "g_459.f6.f5", print_hash_value);
    transparent_crc(g_459.f6.f6, "g_459.f6.f6", print_hash_value);
    transparent_crc(g_459.f6.f7, "g_459.f6.f7", print_hash_value);
    transparent_crc(g_459.f7, "g_459.f7", print_hash_value);
    transparent_crc(g_468.f0, "g_468.f0", print_hash_value);
    transparent_crc(g_468.f1, "g_468.f1", print_hash_value);
    transparent_crc(g_468.f2, "g_468.f2", print_hash_value);
    transparent_crc(g_468.f3, "g_468.f3", print_hash_value);
    transparent_crc(g_468.f4, "g_468.f4", print_hash_value);
    transparent_crc(g_468.f5, "g_468.f5", print_hash_value);
    transparent_crc(g_468.f6, "g_468.f6", print_hash_value);
    transparent_crc(g_468.f7, "g_468.f7", print_hash_value);
    transparent_crc(g_475.f0, "g_475.f0", print_hash_value);
    transparent_crc(g_475.f1, "g_475.f1", print_hash_value);
    transparent_crc(g_475.f2, "g_475.f2", print_hash_value);
    transparent_crc(g_475.f3, "g_475.f3", print_hash_value);
    transparent_crc(g_475.f4, "g_475.f4", print_hash_value);
    transparent_crc(g_475.f5, "g_475.f5", print_hash_value);
    transparent_crc(g_475.f6, "g_475.f6", print_hash_value);
    transparent_crc(g_475.f7, "g_475.f7", print_hash_value);
    transparent_crc(g_518.f0, "g_518.f0", print_hash_value);
    transparent_crc(g_518.f1, "g_518.f1", print_hash_value);
    transparent_crc(g_518.f2, "g_518.f2", print_hash_value);
    transparent_crc(g_518.f3, "g_518.f3", print_hash_value);
    transparent_crc(g_518.f4, "g_518.f4", print_hash_value);
    transparent_crc(g_518.f5, "g_518.f5", print_hash_value);
    transparent_crc(g_518.f6, "g_518.f6", print_hash_value);
    transparent_crc(g_518.f7, "g_518.f7", print_hash_value);
    transparent_crc(g_537.f0.f0, "g_537.f0.f0", print_hash_value);
    transparent_crc(g_537.f0.f1, "g_537.f0.f1", print_hash_value);
    transparent_crc(g_537.f0.f2, "g_537.f0.f2", print_hash_value);
    transparent_crc(g_537.f0.f3, "g_537.f0.f3", print_hash_value);
    transparent_crc(g_537.f0.f4, "g_537.f0.f4", print_hash_value);
    transparent_crc(g_537.f0.f5, "g_537.f0.f5", print_hash_value);
    transparent_crc(g_537.f0.f6, "g_537.f0.f6", print_hash_value);
    transparent_crc(g_537.f0.f7, "g_537.f0.f7", print_hash_value);
    transparent_crc(g_537.f1, "g_537.f1", print_hash_value);
    transparent_crc(g_537.f2, "g_537.f2", print_hash_value);
    transparent_crc(g_537.f3.f0, "g_537.f3.f0", print_hash_value);
    transparent_crc(g_537.f3.f1, "g_537.f3.f1", print_hash_value);
    transparent_crc(g_537.f3.f2, "g_537.f3.f2", print_hash_value);
    transparent_crc(g_537.f3.f3, "g_537.f3.f3", print_hash_value);
    transparent_crc(g_537.f3.f4, "g_537.f3.f4", print_hash_value);
    transparent_crc(g_537.f3.f5, "g_537.f3.f5", print_hash_value);
    transparent_crc(g_537.f3.f6, "g_537.f3.f6", print_hash_value);
    transparent_crc(g_537.f3.f7, "g_537.f3.f7", print_hash_value);
    transparent_crc(g_537.f4, "g_537.f4", print_hash_value);
    transparent_crc(g_537.f5.f0, "g_537.f5.f0", print_hash_value);
    transparent_crc(g_537.f5.f1, "g_537.f5.f1", print_hash_value);
    transparent_crc(g_537.f5.f2, "g_537.f5.f2", print_hash_value);
    transparent_crc(g_537.f5.f3, "g_537.f5.f3", print_hash_value);
    transparent_crc(g_537.f5.f4, "g_537.f5.f4", print_hash_value);
    transparent_crc(g_537.f5.f5, "g_537.f5.f5", print_hash_value);
    transparent_crc(g_537.f5.f6, "g_537.f5.f6", print_hash_value);
    transparent_crc(g_537.f5.f7, "g_537.f5.f7", print_hash_value);
    transparent_crc(g_537.f6.f0, "g_537.f6.f0", print_hash_value);
    transparent_crc(g_537.f6.f1, "g_537.f6.f1", print_hash_value);
    transparent_crc(g_537.f6.f2, "g_537.f6.f2", print_hash_value);
    transparent_crc(g_537.f6.f3, "g_537.f6.f3", print_hash_value);
    transparent_crc(g_537.f6.f4, "g_537.f6.f4", print_hash_value);
    transparent_crc(g_537.f6.f5, "g_537.f6.f5", print_hash_value);
    transparent_crc(g_537.f6.f6, "g_537.f6.f6", print_hash_value);
    transparent_crc(g_537.f6.f7, "g_537.f6.f7", print_hash_value);
    transparent_crc(g_537.f7, "g_537.f7", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_549[i].f0, "g_549[i].f0", print_hash_value);
        transparent_crc(g_549[i].f1, "g_549[i].f1", print_hash_value);
        transparent_crc(g_549[i].f2, "g_549[i].f2", print_hash_value);
        transparent_crc(g_549[i].f3, "g_549[i].f3", print_hash_value);
        transparent_crc(g_549[i].f4, "g_549[i].f4", print_hash_value);
        transparent_crc(g_549[i].f5, "g_549[i].f5", print_hash_value);
        transparent_crc(g_549[i].f6, "g_549[i].f6", print_hash_value);
        transparent_crc(g_549[i].f7, "g_549[i].f7", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_559, "g_559", print_hash_value);
    transparent_crc(g_580.f0, "g_580.f0", print_hash_value);
    transparent_crc(g_580.f1, "g_580.f1", print_hash_value);
    transparent_crc(g_580.f2, "g_580.f2", print_hash_value);
    transparent_crc(g_580.f3, "g_580.f3", print_hash_value);
    transparent_crc(g_580.f4, "g_580.f4", print_hash_value);
    transparent_crc(g_580.f5, "g_580.f5", print_hash_value);
    transparent_crc(g_580.f6, "g_580.f6", print_hash_value);
    transparent_crc(g_580.f7, "g_580.f7", print_hash_value);
    transparent_crc(g_582.f0, "g_582.f0", print_hash_value);
    transparent_crc(g_582.f1, "g_582.f1", print_hash_value);
    transparent_crc(g_582.f2, "g_582.f2", print_hash_value);
    transparent_crc(g_582.f3, "g_582.f3", print_hash_value);
    transparent_crc(g_582.f4, "g_582.f4", print_hash_value);
    transparent_crc(g_582.f5, "g_582.f5", print_hash_value);
    transparent_crc(g_582.f6, "g_582.f6", print_hash_value);
    transparent_crc(g_582.f7, "g_582.f7", print_hash_value);
    transparent_crc(g_596.f0, "g_596.f0", print_hash_value);
    transparent_crc(g_596.f1, "g_596.f1", print_hash_value);
    transparent_crc(g_596.f2, "g_596.f2", print_hash_value);
    transparent_crc(g_596.f3, "g_596.f3", print_hash_value);
    transparent_crc(g_596.f4, "g_596.f4", print_hash_value);
    transparent_crc(g_596.f5, "g_596.f5", print_hash_value);
    transparent_crc(g_596.f6, "g_596.f6", print_hash_value);
    transparent_crc(g_596.f7, "g_596.f7", print_hash_value);
    transparent_crc(g_622.f0, "g_622.f0", print_hash_value);
    transparent_crc(g_622.f1, "g_622.f1", print_hash_value);
    transparent_crc(g_622.f2, "g_622.f2", print_hash_value);
    transparent_crc(g_622.f3, "g_622.f3", print_hash_value);
    transparent_crc(g_622.f4, "g_622.f4", print_hash_value);
    transparent_crc(g_622.f5, "g_622.f5", print_hash_value);
    transparent_crc(g_622.f6, "g_622.f6", print_hash_value);
    transparent_crc(g_622.f7, "g_622.f7", print_hash_value);
    transparent_crc(g_631.f0, "g_631.f0", print_hash_value);
    transparent_crc(g_631.f1, "g_631.f1", print_hash_value);
    transparent_crc(g_631.f2, "g_631.f2", print_hash_value);
    transparent_crc(g_631.f3, "g_631.f3", print_hash_value);
    transparent_crc(g_631.f4, "g_631.f4", print_hash_value);
    transparent_crc(g_631.f5, "g_631.f5", print_hash_value);
    transparent_crc(g_631.f6, "g_631.f6", print_hash_value);
    transparent_crc(g_631.f7, "g_631.f7", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_643[i].f0, "g_643[i].f0", print_hash_value);
        transparent_crc(g_643[i].f1, "g_643[i].f1", print_hash_value);
        transparent_crc(g_643[i].f2, "g_643[i].f2", print_hash_value);
        transparent_crc(g_643[i].f3, "g_643[i].f3", print_hash_value);
        transparent_crc(g_643[i].f4, "g_643[i].f4", print_hash_value);
        transparent_crc(g_643[i].f5, "g_643[i].f5", print_hash_value);
        transparent_crc(g_643[i].f6, "g_643[i].f6", print_hash_value);
        transparent_crc(g_643[i].f7, "g_643[i].f7", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL);
    return 0;
}
