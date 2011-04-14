# 1 "found/test0021.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "found/test0021.c"
# 10 "found/test0021.c"
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
# 11 "found/test0021.c" 2


long __undefined;



volatile int32_t g_3 = 0x5252CB13L;
volatile int32_t g_4 = 0x54C3C69AL;
int32_t g_5 = 8L;
int32_t g_6 = 1L;
int32_t g_7[8][10][1] = {{{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}};
volatile int32_t g_8 = 0xCCCDDD1DL;
int32_t * volatile g_27 = &g_7[1][7][0];
int32_t g_28[2] = {0x1B0CE7AEL, 0x1B0CE7AEL};
volatile int32_t *g_41 = &g_4;
volatile int32_t ** volatile g_40[9][1][2] = {{{&g_41, &g_41}}, {{&g_41, &g_41}}, {{&g_41, &g_41}}, {{&g_41, &g_41}}, {{&g_41, &g_41}}, {{&g_41, &g_41}}, {{&g_41, &g_41}}, {{&g_41, &g_41}}, {{&g_41, &g_41}}};
int32_t *g_93 = &g_28[0];
int32_t **g_92 = &g_93;
int32_t g_116 = 0x30D4DDF0L;
int32_t ** volatile g_205 = &g_93;
uint8_t g_287 = 5U;
int32_t g_321 = 0x01626821L;
int32_t g_327 = (-6L);
int32_t *** volatile g_332 = &g_92;
const int32_t *g_384 = 0;
const int32_t **g_383 = &g_384;
int32_t **g_419 = &g_93;
const int16_t g_421 = (-7L);
volatile int32_t g_486 = 1L;
int32_t *** volatile g_642 = &g_419;
int32_t *** volatile g_729 = 0;
uint32_t g_777 = 0xFD2F073DL;



int64_t func_1(void);
int32_t * func_11(uint32_t p_12);
uint8_t func_14(uint16_t p_15);
const int32_t * func_29(uint16_t p_30, uint8_t p_31, int16_t p_32, int32_t * p_33, int8_t p_34);
uint32_t func_47(int32_t ** p_48, uint32_t p_49, uint8_t p_50, int16_t p_51);
uint8_t func_53(int32_t * p_54, int32_t ** p_55, int32_t * p_56, int8_t p_57);
int32_t ** func_58(uint8_t p_59);
int32_t * func_60(int16_t p_61, uint8_t p_62, int16_t p_63);
uint32_t func_73(uint32_t p_74, uint32_t p_75, int32_t p_76, uint16_t p_77, int32_t ** p_78);
uint32_t func_79(const int32_t ** p_80, const int32_t * p_81, uint32_t p_82);
# 64 "found/test0021.c"
int64_t func_1(void)
{
    int8_t l_2[5][1][8] = {{{0xDAL, 1L, 0xDAL, 1L, 0xDAL, 1L, 0xDAL, 1L}}, {{0xDAL, 1L, 0xDAL, 1L, 0xDAL, 1L, 0xDAL, 1L}}, {{0xDAL, 1L, 0xDAL, 1L, 0xDAL, 1L, 0xDAL, 1L}}, {{0xDAL, 1L, 0xDAL, 1L, 0xDAL, 1L, 0xDAL, 1L}}, {{0xDAL, 1L, 0xDAL, 1L, 0xDAL, 1L, 0xDAL, 1L}}};
    int32_t l_797 = 7L;
    int i, j, k;
    for (g_3 = 0; g_3 < 5; g_3 += 3)
    {
        for (g_4 = 0; g_4 < 1; g_4 += 1)
        {
            for (g_5 = 0; g_5 < 8; g_5 += 1)
            {
                int32_t *l_23 = &g_6;
                int32_t l_803 = 0x0565D68CL;
                int i, j, k;
            }
        }
    }
    return g_777;
}







int32_t * func_11(uint32_t p_12)
{
    int32_t l_13 = 0x722BA7B7L;
    int32_t *l_21 = &g_6;
    (*l_21) ^= (p_12 <= (((g_8 != ((l_13 != p_12) < (p_12 > p_12))) ^ ((func_14(g_7[0][5][0]) == g_7[7][9][0]) ^ (&l_13 == &g_7[1][7][0]))) <= ((p_12 ^ ((l_13 < p_12) < (g_7[3][8][0] <= l_13))) && l_13)));
    return &g_7[2][3][0];
}







uint8_t func_14(uint16_t p_15)
{
    uint16_t l_19 = 0x9A01L;
    int32_t *l_20 = &g_5;
    for (p_15 = (-20); (p_15 <= 21); p_15 = safe_add_func_uint8_t_u_u(p_15, 1))
    {
        uint16_t l_18 = 65535U;
        return l_18;
    }
    (*l_20) = l_19;
    return p_15;
}







const int32_t * func_29(uint16_t p_30, uint8_t p_31, int16_t p_32, int32_t * p_33, int8_t p_34)
{
    uint32_t l_35 = 0xA8D1D9D6L;
    uint8_t l_724 = 0x25L;
    int32_t **l_731 = &g_93;
    int16_t l_753 = 0x0D54L;
    uint8_t l_782 = 1U;
    (*p_33) &= (g_5 | (0U && l_35));
    for (g_6 = (-15); (g_6 != (-3)); g_6 = safe_add_func_uint8_t_u_u(g_6, 1))
    {
        int32_t l_688[6];
        int32_t **l_709 = 0;
        int32_t **l_712 = &g_93;
        const int32_t **l_738 = 0;
        uint32_t l_750 = 1U;
        int i;
        for (i = 0; i < 6; i++)
            l_688[i] = 0x53474502L;
    }
    return p_33;
}







uint32_t func_47(int32_t ** p_48, uint32_t p_49, uint8_t p_50, int16_t p_51)
{
    const int16_t l_52[5][8][1] = {{{8L}, {8L}, {8L}, {8L}, {8L}, {8L}, {8L}, {8L}}, {{8L}, {8L}, {8L}, {8L}, {8L}, {8L}, {8L}, {8L}}, {{8L}, {8L}, {8L}, {8L}, {8L}, {8L}, {8L}, {8L}}, {{8L}, {8L}, {8L}, {8L}, {8L}, {8L}, {8L}, {8L}}, {{8L}, {8L}, {8L}, {8L}, {8L}, {8L}, {8L}, {8L}}};
    int32_t *l_420 = 0;
    const int32_t **l_422 = &g_384;
    int8_t l_469[7];
    int64_t l_554 = 5L;
    uint8_t l_560 = 1U;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_469[i] = 0x18L;
    (*g_41) = (-1L);
    if (l_52[0][5][0])
    {
        uint8_t l_425[4] = {0x7CL, 255U, 0x7CL, 255U};
        int16_t l_426 = 1L;
        int32_t l_433[4][6] = {{0x96B69F79L, 0xD14B2B6DL, 0x96B69F79L, 0xD14B2B6DL, 0x96B69F79L, 0xD14B2B6DL}, {0x96B69F79L, 0xD14B2B6DL, 0x96B69F79L, 0xD14B2B6DL, 0x96B69F79L, 0xD14B2B6DL}, {0x96B69F79L, 0xD14B2B6DL, 0x96B69F79L, 0xD14B2B6DL, 0x96B69F79L, 0xD14B2B6DL}, {0x96B69F79L, 0xD14B2B6DL, 0x96B69F79L, 0xD14B2B6DL, 0x96B69F79L, 0xD14B2B6DL}};
        int i, j;
        (*g_41) = ((func_53(0, func_58(g_5), l_420, p_50) <= (0 != &g_41)) < g_421);
        l_433[1][1] |= (*g_27);
    }
    else
    {
        int32_t l_438[5];
        int32_t **l_470 = &g_93;
        uint8_t l_538 = 0x0FL;
        int32_t l_606 = 0xDC73D433L;
        int i;
        for (i = 0; i < 5; i++)
            l_438[i] = 0x7830615CL;
        for (g_6 = 0; (g_6 == 19); g_6 = safe_add_func_int8_t_s_s(g_6, 1))
        {
            int32_t l_478 = 0x805FF6CDL;
            int64_t l_483[1];
            int32_t ***l_501 = &l_470;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_483[i] = 0L;
        }
        if (((**l_470) < (p_51 & g_4)))
        {
            (**g_419) = (l_470 != 0);
            return g_116;
        }
        else
        {
            int32_t l_571 = 0x4A9D03E4L;
            int32_t l_583 = 0x7FAAA410L;
            int32_t *l_605 = &g_28[0];
            int8_t l_680 = 0x56L;
            (*g_93) &= (-1L);
            if ((**g_92))
            {
                int32_t l_579 = (-7L);
                int32_t l_592 = 0xCF7FC1C7L;
                int16_t l_597 = (-1L);
                uint8_t l_598 = 255U;
                for (g_116 = (-16); (g_116 == 25); g_116 = safe_add_func_int8_t_s_s(g_116, 3))
                {
                    int32_t l_568 = 0x8A3E0786L;
                    const int32_t *l_572 = &g_6;
                    int32_t ***l_580[5][2];
                    int16_t l_586 = 0x88E1L;
                    int i, j;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_580[i][j] = &l_470;
                    }
                    for (g_6 = 0; (g_6 >= (-24)); g_6 = safe_sub_func_uint64_t_u_u(g_6, 9))
                    {
                        const int32_t **l_565 = 0;
                        (*g_41) &= (**g_92);
                        (*g_41) ^= l_568;
                        (**g_92) = l_571;
                        l_583 |= (g_7[1][6][0] && (safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(func_14(((l_579 == p_51) >= g_6)), (func_73((g_4 && p_51), (**l_470), p_51, (&g_383 == l_580[4][0]), p_48) != g_321))), (safe_rshift_func_int16_t_s_u(l_571, 1)))));
                    }
                    for (g_287 = (-7); (g_287 <= 30); g_287 = safe_add_func_int64_t_s_s(g_287, 1))
                    {
                        (*g_41) |= (*g_93);
                        (*g_41) = l_586;
                    }
                    (*g_41) &= (0 != &g_40[5][0][1]);
                    for (l_583 = 0; (l_583 <= (-3)); l_583 = safe_sub_func_int64_t_s_s(l_583, 1))
                    {
                        int32_t *l_591 = &g_327;
                        (**l_470) = (*l_572);
                        (**l_470) = (safe_div_func_int16_t_s_s((func_73(func_53(l_591, (*g_332), (*p_48), p_50), g_421, g_421, p_49, &g_93) <= ((g_327 && l_592) | 1U)), g_28[0]));
                        (*g_383) = (*l_422);
                    }
                }
                (*l_470) = func_60(func_53(func_11(((safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(p_51, g_6)), l_597)) & ((l_598 | (*g_27)) >= 0x1CL))), &g_93, (*g_92), (func_53(l_420, &g_93, (*g_419), (1U | g_116)) && l_579)), g_327, (func_73((**l_470), 0x51FD21F0L, (**l_470), l_592, p_48) > (safe_lshift_func_uint16_t_u_u(g_28[1], 4))));
                l_606 ^= (func_14(p_51) ^ (safe_rshift_func_int16_t_s_u(g_116, (safe_mul_func_uint8_t_u_u(func_53((*g_205), l_470, l_605, g_28[0]), ((*l_605) ^ func_53((*g_92), p_48, (*p_48), p_51)))))));
            }
            else
            {
                uint16_t l_633[10] = {0x6830L, 1U, 0x6830L, 1U, 0x6830L, 1U, 0x6830L, 1U, 0x6830L, 1U};
                int32_t *l_638[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_638[i] = &g_28[1];
                if ((p_49 >= func_53(&l_583, func_58(g_287), (*p_48), g_421)))
                {
                    if (((safe_lshift_func_uint16_t_u_s((*l_605), 7)) > (safe_mul_func_int8_t_s_s(func_53(&l_571, p_48, func_11(((*l_605) <= p_51)), g_28[1]), (safe_mul_func_uint16_t_u_u((g_28[1] && (0x3F69L & ((*l_605) >= g_7[1][7][0]))), (safe_lshift_func_uint8_t_u_u(((p_49 <= g_421) & g_28[1]), 4))))))))
                    {
                        (*l_605) = 0xFBFDBF61L;
                    }
                    else
                    {
                        (*l_422) = func_11(p_49);
                    }
                }
                else
                {
                    int32_t l_621 = (-1L);
                    if ((p_50 != (safe_sub_func_int8_t_s_s(((!g_5) <= func_73(g_287, (*l_605), (safe_div_func_uint8_t_u_u((g_4 ^ g_116), 0xCBL)), (g_28[1] <= func_73(p_51, g_5, (*l_605), p_50, p_48)), p_48)), 0U))))
                    {
                        const int32_t **l_626[10];
                        int i;
                        for (i = 0; i < 10; i++)
                            l_626[i] = &g_384;
                        (*l_605) = (*l_605);
                        (*g_27) = (safe_mod_func_uint8_t_u_u(l_621, (safe_rshift_func_uint8_t_u_s(func_73(((safe_add_func_uint32_t_u_u(0xB2F84B74L, g_3)) <= (safe_mod_func_int64_t_s_s((&p_48 == &g_92), (safe_mul_func_int16_t_s_s(p_50, p_51))))), ((safe_mod_func_uint16_t_u_u(9U, p_50)) > p_51), 0x6A805355L, l_633[1], &g_93), ((*l_470) == (*g_419))))));
                    }
                    else
                    {
                        (*g_419) = l_638[0];
                    }
                    (*l_605) = p_49;
                }
            }
            (*g_41) |= ((*l_605) >= p_51);
            if ((*l_605))
            {
                int32_t *l_645 = &g_5;
                for (g_6 = 0; (g_6 <= 4); g_6 = safe_add_func_uint8_t_u_u(g_6, 1))
                {
                    int32_t **l_641 = &g_93;
                    (*g_642) = l_641;
                    for (g_287 = (-17); (g_287 != 19); g_287 = safe_add_func_uint8_t_u_u(g_287, 1))
                    {
                        l_645 = (*g_205);
                        (*l_605) &= (*g_41);
                        (*g_41) = func_14(p_50);
                        (*g_41) &= func_14(p_50);
                    }
                    (*l_422) = (*p_48);
                    (*g_383) = (*l_470);
                }
                return p_50;
            }
            else
            {
                uint32_t l_670 = 1U;
                const int32_t *l_673 = &g_5;
                int32_t l_675 = 0x730C2AA7L;
                for (g_327 = 0; (g_327 != 0); g_327 = safe_add_func_uint64_t_u_u(g_327, 6))
                {
                    int64_t l_656 = 0xDF47C42DF65B01A7LL;
                    int i;
                    if ((safe_mod_func_uint16_t_u_u(0xB1CDL, (safe_rshift_func_int8_t_s_s(p_50, ((g_5 == (safe_sub_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((*g_41), p_50)), func_73(p_50, p_51, g_7[1][7][0], g_28[1], l_470)))) | l_656))))))
                    {
                        int8_t l_662 = 0xFEL;
                        uint32_t l_669 = 0xF6AA859AL;
                        g_321 &= (safe_mul_func_uint8_t_u_u((safe_unary_minus_func_int64_t_s((func_14((p_49 == func_14(g_28[1]))) && (safe_mod_func_int32_t_s_s(l_662, l_662))))), (safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(g_8, 9)), ((&g_419 == &g_92) == (safe_lshift_func_int16_t_s_u(3L, 4)))))));
                        (*l_605) = l_662;
                        (*l_605) = l_669;
                    }
                    else
                    {
                        (*p_48) = (*p_48);
                        (*l_605) &= (safe_rshift_func_int8_t_s_u((g_287 < g_4), 3));
                        return g_116;
                    }
                    for (p_51 = 0; p_51 < 5; p_51 += 1)
                    {
                        (*l_605) |= (~p_50);
                        return g_3;
                    }
                }
                if ((*g_41))
                {
                    int32_t ***l_679 = 0;
                    int i;
                    for (g_287 = 0; g_287 < 2; g_287 += 1)
                    {
                        uint32_t l_674 = 0xA5133EA0L;
                        l_675 &= l_674;
                    }
                    if ((&g_92 == 0))
                    {
                        uint32_t l_676 = 4294967295U;
                        (*l_605) = p_49;
                        (*g_419) = &l_571;
                        l_675 |= l_676;
                        return g_116;
                    }
                    else
                    {
                        (*g_41) ^= ((safe_rshift_func_uint8_t_u_u(g_327, 7)) >= (g_287 && (l_679 != &l_422)));
                        return p_51;
                    }
                }
                else
                {
                    l_680 = (*l_673);
                }
            }
        }
        return g_28[1];
    }
    return p_50;
}







uint8_t func_53(int32_t * p_54, int32_t ** p_55, int32_t * p_56, int8_t p_57)
{
    return p_57;
}







int32_t ** func_58(uint8_t p_59)
{
    int32_t *l_319 = 0;
    int32_t **l_318 = &l_319;
    int32_t *l_320 = &g_321;
    int32_t *l_326 = &g_327;
    int32_t ** const l_379 = &g_93;
    int32_t l_382[2][5];
    int32_t **l_416[8];
    int32_t **l_418 = &l_319;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
            l_382[i][j] = 0xC01C5CEDL;
    }
    for (i = 0; i < 8; i++)
        l_416[i] = &l_320;
    (*l_326) ^= (!(func_53(func_60(4L, g_28[0], g_5), l_318, l_320, (((*l_318) != (*l_318)) ^ (safe_sub_func_uint16_t_u_u(0xF503L, (safe_mod_func_int64_t_s_s(p_59, g_321)))))) >= p_59));
    for (g_4 = 0; g_4 < 2; g_4 += 1)
    {
        int16_t l_328 = (-1L);
        int32_t **l_341 = 0;
        uint8_t l_348 = 0xFFL;
        int32_t *l_395 = &g_116;
        int32_t **l_414 = &l_395;
        int32_t **l_417 = &l_395;
        if (func_73(p_59, 1U, (*l_320), g_5, &l_326))
        {
            int32_t **l_331 = &l_326;
            int32_t *l_354 = &g_327;
            if ((l_328 > ((func_53(&g_28[(uint32_t)(g_4) % 2], &g_93, (*g_92), g_28[(uint32_t)(g_4) % 2]) < 0x752BL) || (*g_27))))
            {
                for (g_6 = 0; (g_6 > 24); g_6 = safe_add_func_int8_t_s_s(g_6, 1))
                {
                    return &g_93;
                }
                (*g_332) = l_331;
            }
            else
            {
                int32_t l_344 = 0xBEF0A756L;
                (*l_320) ^= func_73(2U, ((((~(safe_mod_func_uint16_t_u_u(p_59, g_28[(uint32_t)(g_4) % 2]))) < (safe_lshift_func_uint16_t_u_u(0x9D2EL, 2))) && g_28[(uint32_t)(g_4) % 2]) != 0x1C72L), g_287, (**l_331), l_331);
                for (g_116 = 0; (g_116 >= 29); g_116 = safe_add_func_int16_t_s_s(g_116, 1))
                {
                    int64_t l_347 = 0L;
                    if ((*g_41))
                        break;
                    (*l_331) = func_11(((*l_326) && p_59));
                    (**l_331) &= p_59;
                    if ((safe_div_func_uint16_t_u_u((l_341 != l_331), (g_287 | (!(p_59 || l_344))))))
                    {
                        int32_t *l_351 = &g_321;
                        (*l_320) = (safe_add_func_uint16_t_u_u((p_59 || (p_59 >= (((*l_326) ^ l_347) != g_7[2][6][0]))), ((~func_73(g_5, l_348, (safe_add_func_int32_t_s_s(func_53(l_351, &g_93, (*g_92), g_6), (g_116 < g_28[0]))), (safe_add_func_int64_t_s_s(l_344, (**l_331))), &g_93)) != (func_53(l_354, &l_351, (*l_331), p_59) || (safe_rshift_func_int8_t_s_s(g_321, (p_59 != (g_7[1][7][0] | g_7[1][7][0]))))))));
                        return l_341;
                    }
                    else
                    {
                        (*g_41) = p_59;
                    }
                }
                (*l_326) ^= 0L;
            }
            (*l_326) = g_28[(uint32_t)(g_4) % 2];
        }
        else
        {
            int32_t l_375 = 0x384D2E44L;
            int64_t l_394 = 0x6BC35C1B076C08D8LL;
            int i;
            for (p_59 = 0; p_59 < 2; p_59 += 1)
            {
                int32_t ***l_361 = 0;
                if ((safe_rshift_func_int8_t_s_u(g_28[(p_59) % 2], (p_59 != (safe_mul_func_uint64_t_u_u((&g_40[5][0][1] == l_361), (0x54CBL >= g_28[(p_59) % 2])))))))
                {
                    const int16_t l_366 = 1L;
                    int32_t **l_372 = &g_93;
                    for (g_6 = 0; (g_6 <= (-14)); g_6 = safe_sub_func_uint32_t_u_u(g_6, 7))
                    {
                        int32_t *l_369 = &g_28[(p_59) % 2];
                        (*l_320) ^= (g_28[((p_59 + 1)) % 2] ^ g_28[(p_59) % 2]);
                        l_375 |= ((safe_lshift_func_int8_t_s_u(l_366, (safe_div_func_uint16_t_u_u(((!func_53((*g_205), &g_93, l_369, p_59)) | (~p_59)), func_73(p_59, l_366, p_59, (!(safe_sub_func_int32_t_s_s(p_59, g_287))), l_372))))) < (safe_div_func_uint16_t_u_u(g_116, g_28[(p_59) % 2])));
                    }
                    (*g_92) = func_11(p_59);
                    if (((g_28[(p_59) % 2] && (safe_unary_minus_func_int16_t_s(func_73(g_28[(p_59) % 2], g_321, (0x86F3C0F87B1ACB9FLL | p_59), g_28[((p_59 + 1)) % 2], 0)))) != p_59))
                    {
                        (*g_93) = g_28[(p_59) % 2];
                        (*l_326) ^= p_59;
                        g_28[((p_59 + 1)) % 2] = (*g_27);
                    }
                    else
                    {
                        (*g_41) |= (p_59 & g_28[1]);
                        (*g_92) = func_60(g_28[(p_59) % 2], ((safe_mul_func_int16_t_s_s(g_6, ((*g_332) != l_379))) | func_14(p_59)), 0xA158L);
                        (*g_27) |= g_28[(p_59) % 2];
                    }
                }
                else
                {
                    uint16_t l_385 = 65535U;
                    int i, j, k;
                    if ((func_14(func_73(g_28[((p_59 + 1)) % 2], g_28[1], (l_375 >= ((g_4 | p_59) <= (safe_lshift_func_uint16_t_u_s(g_28[(p_59) % 2], 15)))), l_382[1][4], l_341)) ^ p_59))
                    {
                        (*l_320) |= p_59;
                        (*l_326) ^= ((0 != (*g_332)) && (0x9FDCL != ((0x5AEF02EEL & 0x000E1589L) >= p_59)));
                        (*g_383) = &g_28[((p_59 + 1)) % 2];
                    }
                    else
                    {
                        int32_t **l_388 = &l_320;
                        (*g_92) = &g_28[(p_59) % 2];
                        (**l_379) ^= (*g_27);
                        (*l_326) = (safe_mul_func_uint16_t_u_u(func_53((*g_205), l_388, 0, g_116), g_5));
                        (*g_92) = func_11(0xBA4E0764L);
                    }
                    for (g_5 = 0; g_5 < 8; g_5 += 1)
                    {
                        for (l_375 = 0; l_375 < 10; l_375 += 1)
                        {
                            for (g_287 = 0; g_287 < 1; g_287 += 1)
                            {
                                int8_t l_391 = 0x8CL;
                                l_391 |= (((safe_rshift_func_int16_t_s_s((((p_59 < p_59) ^ (g_8 > g_7[1][7][0])) | g_7[(uint32_t)(g_5) % 8][(uint32_t)(l_375) % 10][(g_287) % 1]), 9)) | (g_327 && g_7[(uint32_t)(g_5) % 8][(uint32_t)(l_375) % 10][(g_287) % 1])) == g_327);
                                (*l_379) = (*g_92);
                                (*l_379) = 0;
                            }
                        }
                    }
                    (*l_318) = func_11(g_3);
                }
                (*l_320) ^= func_53(l_395, &l_395, &l_375, 0xD0L);
            }
            for (l_394 = 0; l_394 < 9; l_394 += 1)
            {
                for (g_327 = 0; g_327 < 1; g_327 += 1)
                {
                    for (g_6 = 0; g_6 < 2; g_6 += 1)
                    {
                        g_40[l_394][g_327][g_6] = &g_41;
                    }
                }
            }
            for (l_375 = 26; (l_375 == 10); l_375 = safe_sub_func_int8_t_s_s(l_375, 1))
            {
                (*g_383) = &l_375;
                (*l_320) = 1L;
            }
        }
        for (g_287 = 0; (g_287 < 18); g_287 = safe_add_func_int64_t_s_s(g_287, 1))
        {
            uint64_t l_407[2];
            const int32_t *l_413 = &g_5;
            int32_t **l_415 = 0;
            int i;
            for (i = 0; i < 2; i++)
                l_407[i] = 0U;
            if (g_28[(uint32_t)((g_4 + 1)) % 2])
            {
                int32_t *l_406 = &g_7[7][5][0];
                for (l_328 = (-8); (l_328 <= 6); l_328 = safe_add_func_uint64_t_u_u(l_328, 1))
                {
                    int32_t l_409 = 0xF9CA66A1L;
                    const int32_t **l_412 = 0;
                    if (g_28[(uint32_t)((g_4 + 1)) % 2])
                    {
                        uint32_t l_408 = 0xB46EE753L;
                        (*l_320) &= (0xFA195717L && (safe_mul_func_int16_t_s_s((((l_406 != l_406) ^ (func_14(g_5) >= func_73((*l_395), l_407[0], p_59, l_408, &g_93))) < l_409), (safe_div_func_int8_t_s_s(func_53(&g_28[(uint32_t)(g_4) % 2], &l_320, 0, g_327), g_28[1])))));
                        (*l_406) = (*g_27);
                        (*g_92) = 0;
                    }
                    else
                    {
                        (*g_41) = g_28[(uint32_t)(g_4) % 2];
                        l_409 |= ((*g_332) != &g_41);
                    }
                    (*l_379) = l_406;
                    return l_415;
                }
                (*l_318) = 0;
            }
            else
            {
                (*l_326) |= 0L;
            }
        }
        return g_419;
    }
    return (*g_332);
}







int32_t * func_60(int16_t p_61, uint8_t p_62, int16_t p_63)
{
    int8_t l_66 = 0x67L;
    int32_t *l_233 = &g_7[2][9][0];
    const int32_t **l_262 = 0;
    if ((safe_mul_func_int8_t_s_s(l_66, g_4)))
    {
        const int32_t *l_163 = 0;
        const int32_t **l_162 = &l_163;
        int8_t l_166 = 0x72L;
        int32_t *l_185 = 0;
        int32_t l_187 = 1L;
        int32_t *l_211 = &g_5;
        int32_t l_243[9][5];
        const int32_t *l_276 = &l_243[3][2];
        int i, j;
        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 5; j++)
                l_243[i][j] = (-2L);
        }
        if ((*g_41))
        {
            int32_t l_72 = 0x178915D4L;
            int32_t **l_202 = &l_185;
            int i, j, k;
            for (p_63 = 0; p_63 < 9; p_63 += 1)
            {
                for (p_61 = 0; p_61 < 1; p_61 += 1)
                {
                    for (g_3 = 0; g_3 < 2; g_3 += 2)
                    {
                        uint16_t l_67 = 0x406CL;
                        if (l_67)
                        {
                            int16_t l_176 = 0L;
                            int32_t l_177 = (-9L);
                            if (((safe_rshift_func_uint16_t_u_u(65529U, 5)) || (safe_sub_func_uint8_t_u_u((l_72 == func_73(p_61, g_6, p_61, g_7[1][7][0], &g_93)), 0x8EL))))
                            {
                                int32_t l_175 = (-7L);
                                l_177 = (safe_lshift_func_uint16_t_u_u((func_14(g_6) <= (((safe_mod_func_uint64_t_u_u(g_3, l_72)) || (safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(g_28[1], l_175)), (l_176 && g_7[5][2][0])))) >= (l_67 <= ((l_66 & l_67) && (p_62 < l_72))))), 10));
                            }
                            else
                            {
                                (*l_162) = func_11(g_5);
                                return (*g_92);
                            }
                        }
                        else
                        {
                            int16_t l_182 = 2L;
                            int i, j, k;
                            for (l_166 = 29; (l_166 < (-9)); l_166 = safe_sub_func_int16_t_s_s(l_166, 1))
                            {
                                l_182 |= (safe_lshift_func_int16_t_s_s(p_61, 6));
                                l_72 = l_182;
                            }
                            for (g_116 = 27; (g_116 != (-10)); g_116 = safe_sub_func_uint8_t_u_u(g_116, 1))
                            {
                                (*g_92) = func_11(l_66);
                            }
                            for (l_72 = 0; l_72 < 8; l_72 += 5)
                            {
                                for (g_6 = 7; g_6 < 10; g_6 += 1)
                                {
                                    for (g_4 = 0; g_4 < 1; g_4 += 1)
                                    {
                                        int32_t l_186[5] = {1L, (-1L), 1L, (-1L), 1L};
                                        int i;
                                        l_185 = 0;
                                        (*g_93) = ((l_186[3] < (p_63 <= (g_3 || (l_187 == (safe_add_func_uint16_t_u_u(p_63, p_61)))))) >= ((safe_div_func_uint8_t_u_u(p_63, l_186[3])) || (safe_lshift_func_uint16_t_u_s((safe_div_func_int32_t_s_s(func_14((safe_rshift_func_uint8_t_u_s(p_61, 2))), (-6L))), 13))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
            (*g_41) = (g_28[1] & (safe_mul_func_int8_t_s_s(func_73(g_8, 0U, (func_53(&l_72, &l_185, &l_72, (safe_rshift_func_int8_t_s_u(l_72, p_61))) != func_14(g_7[1][7][0])), p_63, l_202), g_6)));
            if (l_66)
            {
                int32_t * const l_203 = &g_7[2][2][0];
                int32_t **l_204[7][10];
                int i, j;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 10; j++)
                        l_204[i][j] = &l_185;
                }
                (*g_205) = l_203;
                if ((**g_92))
                {
                    int i, j, k;
                    for (p_61 = 2; p_61 < 8; p_61 += 1)
                    {
                        for (p_63 = 5; p_63 < 10; p_63 += 1)
                        {
                            for (l_66 = 0; l_66 < 1; l_66 += 1)
                            {
                                (*g_41) &= (safe_lshift_func_int8_t_s_u((g_7[(uint16_t)(p_61) % 8][(uint16_t)(p_63) % 10][(uint8_t)(l_66) % 1] > p_62), g_5));
                            }
                        }
                    }
                }
                else
                {
                    (*g_41) &= (**g_92);
                    (*g_205) = func_11(g_4);
                    for (p_63 = 7; (p_63 < (-17)); p_63 = safe_sub_func_uint32_t_u_u(p_63, 1))
                    {
                        int32_t *l_210 = 0;
                        return l_210;
                    }
                }
                (*g_92) = l_211;
                (*l_162) = 0;
            }
            else
            {
                int32_t **l_217 = &g_93;
                const int32_t **l_256 = &l_163;
                if (l_66)
                {
                    int32_t *l_216 = 0;
                    (*l_202) = func_11(func_14(((g_5 || 6U) | 0xB9759969L)));
                    (**g_92) = (safe_mul_func_uint16_t_u_u(l_66, func_73(p_63, 2U, p_63, (*l_185), &l_185)));
                    for (g_6 = 0; (g_6 < (-8)); g_6 = safe_sub_func_int32_t_s_s(g_6, 1))
                    {
                        (*l_202) = l_216;
                    }
                    if (((g_4 != func_53((*g_92), l_217, (*g_92), p_63)) || (safe_mul_func_uint16_t_u_u(0U, (+65535U)))))
                    {
                        int32_t *l_228[4][5][2];
                        int i, j, k;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 5; j++)
                            {
                                for (k = 0; k < 2; k++)
                                    l_228[i][j][k] = &g_6;
                            }
                        }
                        (*g_93) |= 0x56DCA7D6L;
                        (**l_217) &= (safe_mul_func_int8_t_s_s(func_53(l_211, &l_211, l_211, func_14(p_62)), (0 != (*l_202))));
                        (*l_211) ^= ((safe_mul_func_int8_t_s_s(p_62, ((safe_div_func_int16_t_s_s(((*l_162) != l_228[3][2][1]), 65535U)) || ((l_202 != &g_41) == ((g_28[1] & p_62) != g_6))))) && p_61);
                    }
                    else
                    {
                        int32_t **l_234 = &g_93;
                        l_243[3][2] |= (p_63 | (g_4 & func_73((safe_rshift_func_int8_t_s_s(func_53(l_233, l_234, l_233, p_61), 1)), 0x16AD88BDL, p_61, (func_73(1U, g_7[1][7][0], (*l_211), g_7[1][7][0], &l_185) && (safe_div_func_int64_t_s_s(((*l_233) < p_63), (**l_234)))), &l_185)));
                        (*l_217) = func_11((**l_234));
                        (*l_217) = func_11(g_3);
                        (*g_41) |= 0xAC3F2620L;
                    }
                }
                else
                {
                    int32_t l_250 = 0L;
                    int32_t **l_253 = 0;
                    int i, j, k;
                    for (g_5 = (-19); (g_5 != 20); g_5 = safe_add_func_uint32_t_u_u(g_5, 1))
                    {
                        (**g_92) = (safe_add_func_uint8_t_u_u(0x0EL, p_62));
                        (*l_202) = 0;
                        (*g_41) = (**g_92);
                        (*l_233) = ((safe_lshift_func_int16_t_s_u(p_63, l_250)) & (((*g_27) | (*g_93)) > g_5));
                    }
                    for (p_62 = 0; p_62 < 9; p_62 += 1)
                    {
                        for (l_72 = 0; l_72 < 1; l_72 += 1)
                        {
                            for (p_61 = 0; p_61 < 2; p_61 += 2)
                            {
                                const int32_t *l_257 = &l_243[6][0];
                                (*l_211) &= func_53(0, l_217, (*g_92), g_7[1][7][0]);
                                (*g_93) = ((safe_add_func_uint64_t_u_u((l_253 != g_40[(p_62) % 9][(uint32_t)(l_72) % 1][(uint16_t)(p_61) % 2]), ((safe_rshift_func_uint8_t_u_u(p_61, 0)) != g_28[1]))) || (safe_lshift_func_uint8_t_u_s((g_4 | (safe_mod_func_int8_t_s_s(func_14(p_62), (*l_257)))), 0)));
                            }
                        }
                    }
                }
            }
            for (g_6 = (-1); (g_6 != 25); g_6 = safe_add_func_uint32_t_u_u(g_6, 6))
            {
                int32_t *l_271 = &g_7[0][5][0];
                (*g_92) = 0;
                for (l_187 = (-10); (l_187 < (-16)); l_187 = safe_sub_func_int64_t_s_s(l_187, 1))
                {
                    int32_t l_277[8][1][7];
                    int32_t **l_303 = &l_211;
                    int i, j, k;
                    for (i = 0; i < 8; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 7; k++)
                                l_277[i][j][k] = 0x9AD63D6FL;
                        }
                    }
                    for (l_72 = (-30); (l_72 >= (-25)); l_72 = safe_add_func_uint16_t_u_u(l_72, 1))
                    {
                        return l_271;
                    }
                    for (l_66 = 0; (l_66 != (-3)); l_66 = safe_sub_func_int16_t_s_s(l_66, 1))
                    {
                        uint32_t l_274 = 3U;
                        int32_t *l_275 = &l_243[1][3];
                        (*l_233) = l_274;
                        (*l_271) = p_62;
                        l_275 = l_271;
                        l_276 = (*l_162);
                    }
                    if (l_277[1][0][4])
                    {
                        uint16_t l_278 = 0xD399L;
                        (*l_211) ^= l_278;
                        return l_233;
                    }
                    else
                    {
                        (*l_271) &= func_14(((safe_lshift_func_uint16_t_u_s(65527U, (6U != (&g_41 != &g_41)))) <= (safe_sub_func_uint32_t_u_u(p_63, (g_5 || ((safe_rshift_func_int8_t_s_u(l_277[1][0][4], p_61)) >= p_61))))));
                    }
                    if ((safe_div_func_uint16_t_u_u(func_73(g_116, p_63, g_287, (safe_sub_func_int16_t_s_s(0xF6D5L, 0L)), l_202), (safe_div_func_uint16_t_u_u(p_61, 2U)))))
                    {
                        int8_t l_292 = (-3L);
                        (*g_41) &= l_292;
                        return l_271;
                    }
                    else
                    {
                        uint32_t l_297 = 4294967295U;
                        int32_t *l_300 = &l_243[1][3];
                        (*l_300) = (((safe_mul_func_uint8_t_u_u(255U, p_63)) ^ func_73(g_4, (safe_mod_func_int64_t_s_s(func_14(l_297), (safe_mul_func_int8_t_s_s(func_53(l_300, &l_271, l_233, p_63), (*l_300))))), (0 != (*l_202)), g_28[1], &l_185)) <= func_73(p_61, func_53(0, 0, l_233, (*l_233)), (p_61 || ((0 == (*l_202)) == (0x31048562396B6792LL == (safe_rshift_func_int8_t_s_s(g_28[1], p_61))))), (*l_300), l_303));
                    }
                }
            }
        }
        else
        {
            int32_t **l_308 = &l_233;
            int i;
            for (p_61 = 0; p_61 < 2; p_61 += 2)
            {
                (*l_211) = (safe_add_func_int64_t_s_s(((safe_rshift_func_int16_t_s_u(p_61, (l_308 == 0))) > g_28[(uint16_t)(p_61) % 2]), p_62));
            }
        }
        (*l_162) = func_11((+((safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s(p_61, 0x678CL)), (-1L))) && p_63)));
        (*l_233) |= (4294967295U <= (0 == (*g_92)));
    }
    else
    {
        int32_t **l_313 = &g_93;
        (*g_93) = ((0x8B080ABBFA448F8ALL | (p_63 > func_53(func_11(g_5), l_313, (*g_92), (safe_rshift_func_uint16_t_u_u(g_7[1][7][0], (safe_mod_func_uint16_t_u_u(g_7[1][7][0], p_61))))))) >= (*l_233));
    }
    return (*g_205);
}







uint32_t func_73(uint32_t p_74, uint32_t p_75, int32_t p_76, uint16_t p_77, int32_t ** p_78)
{
    return p_76;
}







uint32_t func_79(const int32_t ** p_80, const int32_t * p_81, uint32_t p_82)
{
    const int8_t l_87 = 1L;
    int32_t **l_112 = &g_93;
    if ((0x4EE4L > (safe_mod_func_uint8_t_u_u(func_14(((safe_mod_func_int64_t_s_s((p_82 && l_87), g_5)) | p_82)), (safe_lshift_func_uint16_t_u_u(p_82, l_87))))))
    {
        (*p_80) = &g_28[1];
    }
    else
    {
        uint32_t l_90 = 0xC1BBB80EL;
        int32_t * const l_91 = &g_7[1][7][0];
        int32_t **l_122 = 0;
        (*p_80) = (*p_80);
        if ((func_73(0xC69BB0CEL, 0xF543A9B1L, l_90, (l_91 != l_91), g_92) >= g_7[1][7][0]))
        {
            (*g_93) = (-1L);
            (*g_93) ^= func_14(0xC847L);
        }
        else
        {
            int32_t l_96 = 7L;
            int32_t **l_151[3][10];
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 10; j++)
                    l_151[i][j] = &g_93;
            }
            for (g_5 = 4; g_5 < 8; g_5 += 4)
            {
                for (p_82 = 0; p_82 < 10; p_82 += 1)
                {
                    for (g_6 = 0; g_6 < 1; g_6 += 1)
                    {
                        int32_t *l_113 = &g_28[1];
                        int i, j, k;
                        for (l_90 = (-15); (l_90 < 54); l_90 = safe_add_func_int64_t_s_s(l_90, 1))
                        {
                            return l_96;
                        }
                        for (l_96 = 2; (l_96 != (-13)); l_96 = safe_sub_func_int8_t_s_s(l_96, 7))
                        {
                            int32_t **l_109[2][2][3];
                            int i, j, k;
                            for (i = 0; i < 2; i++)
                            {
                                for (j = 0; j < 2; j++)
                                {
                                    for (k = 0; k < 3; k++)
                                        l_109[i][j][k] = &g_93;
                                }
                            }
                        }
                    }
                }
            }
            for (p_82 = (-28); (p_82 >= 4); p_82 = safe_add_func_uint16_t_u_u(p_82, 5))
            {
                (*g_92) = (*g_92);
                for (l_90 = 0; (l_90 == 16); l_90 = safe_add_func_uint64_t_u_u(l_90, 8))
                {
                    if ((**l_112))
                        break;
                    if ((*p_81))
                        continue;
                }
                if ((*p_81))
                {
                    if ((**l_112))
                        break;
                    (**l_112) &= (0x8D53L > p_82);
                }
                else
                {
                    uint32_t l_136 = 0xAC2CC221L;
                    (**g_92) = l_136;
                }
            }
            for (g_5 = 3; g_5 < 8; g_5 += 4)
            {
                for (g_116 = 0; g_116 < 10; g_116 += 4)
                {
                    for (l_90 = 0; l_90 < 1; l_90 += 1)
                    {
                        uint16_t l_137 = 0xFAF2L;
                        int32_t *l_160 = &g_7[2][7][0];
                        (**g_92) ^= 0xB3387B99L;
                        (**l_112) = l_137;
                        (**g_92) = (g_28[0] == (g_28[0] == (safe_lshift_func_uint8_t_u_s(g_7[3][4][0], 2))));
                        if ((safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(g_7[1][7][0], func_53((*l_112), &g_93, (*g_92), p_82))), (safe_add_func_int32_t_s_s((*p_81), ((*p_80) != (*g_92)))))), (p_82 >= (0x7DBBL <= (!(safe_lshift_func_uint16_t_u_s(p_82, 5))))))))
                        {
                            uint32_t l_150 = 0x40C6877BL;
                            uint32_t l_156 = 0x17702E8EL;
                            if (func_73(g_7[(uint32_t)(g_5) % 8][(uint32_t)((g_116 + 5)) % 10][((l_90 + 1)) % 1], (*l_91), g_5, p_82, l_122))
                            {
                                (*g_93) &= ((l_150 > (l_151[2][1] != &g_41)) && (safe_mul_func_int16_t_s_s((p_82 < 0xDFL), g_7[(uint32_t)(g_5) % 8][(uint32_t)((g_116 + 5)) % 10][((l_90 + 1)) % 1])));
                            }
                            else
                            {
                                (**g_92) = (safe_mod_func_int16_t_s_s(func_53((*l_112), l_122, (*g_92), g_7[(uint32_t)(g_5) % 8][(uint32_t)((g_116 + 5)) % 10][((l_90 + 1)) % 1]), (l_156 || (p_82 < g_6))));
                            }
                        }
                        else
                        {
                            const int32_t * const l_161 = &g_5;
                            for (g_6 = (-29); (g_6 >= 17); g_6 = safe_add_func_int16_t_s_s(g_6, 1))
                            {
                                uint32_t l_159 = 0x1B20E94AL;
                                (**l_112) &= (*p_81);
                                l_159 ^= g_7[(uint32_t)(g_5) % 8][(uint32_t)(g_116) % 10][(l_90) % 1];
                            }
                            if ((**l_112))
                                continue;
                            (*g_93) ^= ((l_160 == l_161) >= 2L);
                        }
                    }
                }
            }
            (**g_92) ^= (g_7[2][1][0] < 0x47512D44L);
        }
        (**g_92) = (*g_93);
    }
    return g_116;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_7[i][j][k], "g_7[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_8, "g_8", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_28[i], "g_28[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_287, "g_287", print_hash_value);
    transparent_crc(g_321, "g_321", print_hash_value);
    transparent_crc(g_327, "g_327", print_hash_value);
    transparent_crc(g_421, "g_421", print_hash_value);
    transparent_crc(g_486, "g_486", print_hash_value);
    transparent_crc(g_777, "g_777", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL);
    return 0;
}
