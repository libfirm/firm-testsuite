# 1 "found/test0087.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "found/test0087.c"
# 10 "found/test0087.c"
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
# 11 "found/test0087.c" 2


long __undefined;


struct S0 {
   volatile uint32_t f0;
};

struct S1 {
   int16_t f0;
   int16_t f1;
};


int64_t g_17[6][9] = {{(-1L), 0x5720B963AB1943C6LL, (-1L), 0x5720B963AB1943C6LL, (-1L), 0x5720B963AB1943C6LL, (-1L), 0x5720B963AB1943C6LL, (-1L)}, {(-1L), 0x5720B963AB1943C6LL, (-1L), 0x5720B963AB1943C6LL, (-1L), 0x5720B963AB1943C6LL, (-1L), 0x5720B963AB1943C6LL, (-1L)}, {(-1L), 0x5720B963AB1943C6LL, (-1L), 0x5720B963AB1943C6LL, (-1L), 0x5720B963AB1943C6LL, (-1L), 0x5720B963AB1943C6LL, (-1L)}, {(-1L), 0x5720B963AB1943C6LL, (-1L), 0x5720B963AB1943C6LL, (-1L), 0x5720B963AB1943C6LL, (-1L), 0x5720B963AB1943C6LL, (-1L)}, {(-1L), 0x5720B963AB1943C6LL, (-1L), 0x5720B963AB1943C6LL, (-1L), 0x5720B963AB1943C6LL, (-1L), 0x5720B963AB1943C6LL, (-1L)}, {(-1L), 0x5720B963AB1943C6LL, (-1L), 0x5720B963AB1943C6LL, (-1L), 0x5720B963AB1943C6LL, (-1L), 0x5720B963AB1943C6LL, (-1L)}};
volatile int32_t g_18 = 0L;
volatile int32_t g_21 = 0xA1E1C5A3L;
int32_t g_22 = 3L;
volatile int32_t * volatile g_39 = &g_18;
struct S1 g_42 = {0xDFD9L,-2L};
struct S1 * volatile g_41 = &g_42;
int32_t * volatile g_47 = &g_22;
int32_t *g_49 = 0;
int32_t ** volatile g_48 = &g_49;
volatile uint16_t g_55 = 0U;
volatile struct S0 g_98 = {0x56F59619L};
volatile struct S0 g_99 = {0xAE8CE1F6L};
volatile struct S1 *g_130 = 0;
volatile struct S1 **g_129 = &g_130;
volatile struct S0 g_140 = {0U};
volatile struct S0 g_142 = {0xD5AEA95DL};
struct S0 g_169 = {0xBB67B204L};
struct S0 ** volatile g_170 = 0;
volatile struct S0 g_174 = {0xC6209D16L};
int32_t g_179[3][6][2] = {{{0xCF354A03L, 0xCF354A03L}, {0xCF354A03L, 0xCF354A03L}, {0xCF354A03L, 0xCF354A03L}, {0xCF354A03L, 0xCF354A03L}, {0xCF354A03L, 0xCF354A03L}, {0xCF354A03L, 0xCF354A03L}}, {{0xCF354A03L, 0xCF354A03L}, {0xCF354A03L, 0xCF354A03L}, {0xCF354A03L, 0xCF354A03L}, {0xCF354A03L, 0xCF354A03L}, {0xCF354A03L, 0xCF354A03L}, {0xCF354A03L, 0xCF354A03L}}, {{0xCF354A03L, 0xCF354A03L}, {0xCF354A03L, 0xCF354A03L}, {0xCF354A03L, 0xCF354A03L}, {0xCF354A03L, 0xCF354A03L}, {0xCF354A03L, 0xCF354A03L}, {0xCF354A03L, 0xCF354A03L}}};
int32_t * const g_189 = 0;
volatile struct S0 g_214 = {0x03195652L};
volatile struct S0 g_215 = {0xA0318852L};
struct S0 *g_236[8] = {&g_169, &g_169, &g_169, &g_169, &g_169, &g_169, &g_169, &g_169};
struct S0 ** volatile g_235[1][7] = {{&g_236[3], &g_236[3], &g_236[3], &g_236[3], &g_236[3], &g_236[3], &g_236[3]}};
struct S0 ** volatile g_237[1][2] = {{&g_236[3], &g_236[3]}};
struct S0 ** volatile g_238[8] = {&g_236[3], &g_236[3], &g_236[3], &g_236[3], &g_236[3], &g_236[3], &g_236[3], &g_236[3]};
uint32_t g_247 = 0x0F112F4CL;
int32_t * volatile g_313 = &g_22;
volatile struct S0 g_337 = {4294967286U};
volatile struct S0 g_338[6][9] = {{{0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}}, {{0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}}, {{0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}}, {{0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}}, {{0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}}, {{0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}, {0xF4879D23L}}};
const int32_t *g_355 = &g_22;
volatile int32_t *g_357 = 0;
const volatile struct S0 g_381 = {0x6EA9D6E6L};
int32_t g_417[2] = {0L, 0L};
int32_t ** const volatile g_459 = &g_49;
int32_t ** volatile g_460[2][9][1] = {{{0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}}, {{0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}}};
struct S1 g_474 = {-9L,0xB0DEL};
volatile struct S1 *** volatile g_482 = &g_129;
volatile int32_t * volatile *g_504 = &g_357;
volatile int32_t * volatile **g_503 = &g_504;
struct S0 g_524[5][4][3] = {{{{5U}, {5U}, {5U}}, {{5U}, {5U}, {5U}}, {{5U}, {5U}, {5U}}, {{5U}, {5U}, {5U}}}, {{{5U}, {5U}, {5U}}, {{5U}, {5U}, {5U}}, {{5U}, {5U}, {5U}}, {{5U}, {5U}, {5U}}}, {{{5U}, {5U}, {5U}}, {{5U}, {5U}, {5U}}, {{5U}, {5U}, {5U}}, {{5U}, {5U}, {5U}}}, {{{5U}, {5U}, {5U}}, {{5U}, {5U}, {5U}}, {{5U}, {5U}, {5U}}, {{5U}, {5U}, {5U}}}, {{{5U}, {5U}, {5U}}, {{5U}, {5U}, {5U}}, {{5U}, {5U}, {5U}}, {{5U}, {5U}, {5U}}}};
struct S0 g_526 = {2U};
struct S0 *g_525 = &g_526;
const volatile uint32_t g_527 = 0x25CABFE9L;
struct S0 g_558 = {4294967288U};
const int32_t ** volatile g_560 = &g_355;
struct S1 g_600 = {0xE981L,0L};
struct S1 *g_599[9] = {&g_600, &g_600, &g_600, &g_600, &g_600, &g_600, &g_600, &g_600, &g_600};
int32_t g_605[8] = {0x171E36E5L, 0x171E36E5L, 1L, 0x0F213D79L, 0xD714CB2EL, 0x0F213D79L, 1L, 0x171E36E5L};
int32_t g_619 = 0xF454D577L;
struct S0 ** volatile g_626 = &g_236[6];
volatile struct S0 g_637 = {0xA542B23AL};
struct S0 g_679 = {0xF769661EL};
const struct S0 g_690 = {0U};
struct S0 g_691 = {4294967287U};
int32_t **g_694 = &g_49;
int32_t *** volatile g_693 = &g_694;
struct S0 g_730[5][7][2] = {{{{0xDC3161FDL}, {0xDC3161FDL}}, {{0xDC3161FDL}, {0xDC3161FDL}}, {{0xDC3161FDL}, {0xDC3161FDL}}, {{0xDC3161FDL}, {0xDC3161FDL}}, {{0xDC3161FDL}, {0xDC3161FDL}}, {{0xDC3161FDL}, {0xDC3161FDL}}, {{0xDC3161FDL}, {0xDC3161FDL}}}, {{{0xDC3161FDL}, {0xDC3161FDL}}, {{0xDC3161FDL}, {0xDC3161FDL}}, {{0xDC3161FDL}, {0xDC3161FDL}}, {{0xDC3161FDL}, {0xDC3161FDL}}, {{0xDC3161FDL}, {0xDC3161FDL}}, {{0xDC3161FDL}, {0xDC3161FDL}}, {{0xDC3161FDL}, {0xDC3161FDL}}}, {{{0xDC3161FDL}, {0xDC3161FDL}}, {{0xDC3161FDL}, {0xDC3161FDL}}, {{0xDC3161FDL}, {0xDC3161FDL}}, {{0xDC3161FDL}, {0xDC3161FDL}}, {{0xDC3161FDL}, {0xDC3161FDL}}, {{0xDC3161FDL}, {0xDC3161FDL}}, {{0xDC3161FDL}, {0xDC3161FDL}}}, {{{0xDC3161FDL}, {0xDC3161FDL}}, {{0xDC3161FDL}, {0xDC3161FDL}}, {{0xDC3161FDL}, {0xDC3161FDL}}, {{0xDC3161FDL}, {0xDC3161FDL}}, {{0xDC3161FDL}, {0xDC3161FDL}}, {{0xDC3161FDL}, {0xDC3161FDL}}, {{0xDC3161FDL}, {0xDC3161FDL}}}, {{{0xDC3161FDL}, {0xDC3161FDL}}, {{0xDC3161FDL}, {0xDC3161FDL}}, {{0xDC3161FDL}, {0xDC3161FDL}}, {{0xDC3161FDL}, {0xDC3161FDL}}, {{0xDC3161FDL}, {0xDC3161FDL}}, {{0xDC3161FDL}, {0xDC3161FDL}}, {{0xDC3161FDL}, {0xDC3161FDL}}}};
struct S1 * volatile g_759 = 0;
struct S1 * volatile g_760 = &g_42;
struct S0 g_774 = {0x092C838BL};
int32_t g_789 = 0xF850BEC4L;
struct S0 g_800[8][8] = {{{1U}, {1U}, {1U}, {1U}, {1U}, {1U}, {1U}, {1U}}, {{1U}, {1U}, {1U}, {1U}, {1U}, {1U}, {1U}, {1U}}, {{1U}, {1U}, {1U}, {1U}, {1U}, {1U}, {1U}, {1U}}, {{1U}, {1U}, {1U}, {1U}, {1U}, {1U}, {1U}, {1U}}, {{1U}, {1U}, {1U}, {1U}, {1U}, {1U}, {1U}, {1U}}, {{1U}, {1U}, {1U}, {1U}, {1U}, {1U}, {1U}, {1U}}, {{1U}, {1U}, {1U}, {1U}, {1U}, {1U}, {1U}, {1U}}, {{1U}, {1U}, {1U}, {1U}, {1U}, {1U}, {1U}, {1U}}};
const struct S0 g_897[2][7] = {{{0x762AB1EBL}, {0x762AB1EBL}, {0x762AB1EBL}, {0x762AB1EBL}, {0x762AB1EBL}, {0x762AB1EBL}, {0x762AB1EBL}}, {{0x762AB1EBL}, {0x762AB1EBL}, {0x762AB1EBL}, {0x762AB1EBL}, {0x762AB1EBL}, {0x762AB1EBL}, {0x762AB1EBL}}};
struct S0 g_904 = {0U};
struct S1 * volatile g_929 = 0;



int64_t func_1(void);
struct S1 func_2(int64_t p_3, int16_t p_4, int32_t p_5);
uint8_t func_8(uint32_t p_9, int32_t p_10, uint32_t p_11, int32_t p_12);
uint64_t func_13(uint8_t p_14, const int8_t p_15, const uint32_t p_16);
int32_t func_25(struct S1 p_26, uint32_t p_27, uint64_t p_28, uint8_t p_29, uint8_t p_30);
uint32_t func_35(uint8_t p_36);
int32_t * func_44(int32_t p_45);
int32_t func_50(int8_t p_51);
uint64_t func_74(int32_t p_75, int32_t ** p_76, const struct S1 * p_77, uint32_t p_78, const int32_t * p_79);
int8_t func_90(const uint32_t p_91, int32_t p_92, int32_t * const p_93);
# 115 "found/test0087.c"
int64_t func_1(void)
{
    int32_t l_928[2];
    struct S1 *l_930[3][6][1];
    int32_t l_934[8][1][4] = {{{1L, 1L, 0xAF8E1B95L, 1L}}, {{1L, 1L, 0xAF8E1B95L, 1L}}, {{1L, 1L, 0xAF8E1B95L, 1L}}, {{1L, 1L, 0xAF8E1B95L, 1L}}, {{1L, 1L, 0xAF8E1B95L, 1L}}, {{1L, 1L, 0xAF8E1B95L, 1L}}, {{1L, 1L, 0xAF8E1B95L, 1L}}, {{1L, 1L, 0xAF8E1B95L, 1L}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_928[i] = 0xDB619A4EL;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 1; k++)
                l_930[i][j][k] = &g_474;
        }
    }
    return l_934[4][0][2];
}







struct S1 func_2(int64_t p_3, int16_t p_4, int32_t p_5)
{
    int32_t l_778 = 0x954E45C7L;
    struct S1 l_781 = {0x517EL,0x3AE3L};
    uint32_t l_782 = 4294967290U;
    uint32_t l_783 = 1U;
    int32_t l_786 = 0xEE8B1620L;
    int32_t ***l_790 = &g_694;
    struct S0 * const *l_821 = &g_236[5];
    const int64_t l_826 = (-2L);
    int32_t l_827[2];
    uint32_t l_853 = 0U;
    int i;
    for (i = 0; i < 2; i++)
        l_827[i] = 0xF855C0A2L;
    if ((((safe_add_func_uint8_t_u_u(l_786, (safe_sub_func_int16_t_s_s(g_789, (l_790 != 0))))) & (0 != (*l_790))) > func_8(((((safe_unary_minus_func_uint64_t_u(p_5)) ^ (-6L)) != (safe_lshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s(p_5, p_4)), 6))) & (safe_add_func_uint8_t_u_u(((p_5 > g_18) <= (*g_355)), (safe_mul_func_int8_t_s_s(0xBBL, (p_4 < p_3)))))), p_5, g_22, g_17[1][2])))
    {
lbl_927:
        (*g_525) = g_800[7][0];
    }
    else
    {
        uint16_t l_817 = 7U;
        int32_t **l_837[2][4];
        struct S1 *l_852 = &l_781;
        uint32_t l_872 = 9U;
        const struct S0 *l_903[8];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 4; j++)
                l_837[i][j] = &g_49;
        }
        for (i = 0; i < 8; i++)
            l_903[i] = &g_904;
        for (l_778 = (-7); (l_778 <= 23); l_778 = safe_add_func_int64_t_s_s(l_778, 3))
        {
            uint8_t l_808 = 0xD4L;
            int32_t * const l_818 = 0;
            int32_t l_830 = 0xFF8403A8L;
            struct S1 *l_896[7];
            struct S0 *l_923 = &g_526;
            struct S1 l_924 = {-8L,0L};
            int i;
            for (i = 0; i < 7; i++)
                l_896[i] = 0;
            if (p_3)
                break;
lbl_883:
            for (g_600.f0 = 0; (g_600.f0 == (-17)); g_600.f0 = safe_sub_func_uint32_t_u_u(g_600.f0, 1))
            {
                int32_t *l_805 = &g_619;
                (*l_805) ^= (*g_313);
            }
            if ((safe_add_func_uint32_t_u_u(l_808, (safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_mul_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(l_817, g_417[1])), 0U)) || func_90(p_4, p_3, l_818)), (safe_mod_func_int8_t_s_s(((l_821 != &g_525) < (g_42.f1 <= p_4)), (safe_mod_func_uint16_t_u_u(p_4, (p_3 || p_4))))))), p_5)))))
            {
                const struct S1 *l_831 = &l_781;
                int32_t l_833 = 0x412640F0L;
                struct S0 *l_854 = &g_800[5][2];
                int32_t l_869[3][6] = {{1L, (-1L), 1L, 1L, (-1L), 1L}, {1L, (-1L), 1L, 1L, (-1L), 1L}, {1L, (-1L), 1L, 1L, (-1L), 1L}};
                int i, j, k;
                if (((safe_mod_func_uint64_t_u_u(0x5F1643C4F876F79DLL, (func_13(p_3, l_817, l_826) ^ l_827[0]))) != 0xF50CD02DF0A3F159LL))
                {
                    const int32_t *l_832 = &g_605[2];
                    struct S1 **l_849[7][9][1];
                    struct S1 ***l_848 = &l_849[4][3][0];
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 9; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_849[i][j][k] = &g_599[0];
                        }
                    }
                    l_830 &= ((*g_355) >= ((3L > (0x75F23656L <= p_4)) == p_5));
                    if ((l_833 | 18446744073709551614U))
                    {
                        return l_781;
                    }
                    else
                    {
                        int32_t l_836[1][9][8] = {{{1L, 1L, 0xEAB0C560L, 1L, 1L, (-1L), 1L, 1L}, {1L, 1L, 0xEAB0C560L, 1L, 1L, (-1L), 1L, 1L}, {1L, 1L, 0xEAB0C560L, 1L, 1L, (-1L), 1L, 1L}, {1L, 1L, 0xEAB0C560L, 1L, 1L, (-1L), 1L, 1L}, {1L, 1L, 0xEAB0C560L, 1L, 1L, (-1L), 1L, 1L}, {1L, 1L, 0xEAB0C560L, 1L, 1L, (-1L), 1L, 1L}, {1L, 1L, 0xEAB0C560L, 1L, 1L, (-1L), 1L, 1L}, {1L, 1L, 0xEAB0C560L, 1L, 1L, (-1L), 1L, 1L}, {1L, 1L, 0xEAB0C560L, 1L, 1L, (-1L), 1L, 1L}}};
                        int i, j, k;
                        (**l_790) = func_44((p_4 != ((((g_600.f1 <= g_142.f0) > l_836[0][2][2]) ^ g_474.f0) != (&l_818 != l_837[1][1]))));
                        p_5 |= (safe_add_func_int32_t_s_s(0x30B2C847L, g_337.f0));
                        (*g_49) |= 0x8675AC42L;
                    }
                    for (g_691.f0 = 0; g_691.f0 < 6; g_691.f0 += 1)
                    {
                        for (g_21 = 5; g_21 < 9; g_21 += 7)
                        {
                            uint8_t l_845 = 0x5AL;
                            int32_t l_857 = 1L;
                            (**g_694) = p_3;
                            l_845 &= (((safe_unary_minus_func_uint16_t_u((func_90((p_3 > p_5), p_5, func_44(p_3)) && (l_808 >= (safe_add_func_uint64_t_u_u(p_3, p_5)))))) != (p_3 == g_600.f0)) && ((p_4 <= (((*g_693) == (*g_503)) == ((safe_mod_func_uint8_t_u_u(g_42.f0, g_247)) || (~p_3)))) <= ((p_4 | p_4) == 0x24CA10DAL)));
                            (***l_790) &= (((safe_div_func_uint16_t_u_u((0xF643L >= (l_848 == &l_849[6][0][0])), 0xDB44L)) ^ (0 != (*g_482))) == (safe_lshift_func_uint16_t_u_s(65531U, (0 != &l_831))));
                            l_857 = ((p_3 == l_853) >= ((0xECF6DC53L != ((l_854 != &g_338[(g_691.f0) % 6][(uint32_t)(g_21) % 9]) < (safe_mul_func_uint16_t_u_u(g_730[0][1][0].f0, (p_3 & (*g_49)))))) & 0x2C38L));
                        }
                    }
                }
                else
                {
                    struct S0 **l_858 = &g_525;
                    int32_t l_859 = (-1L);
                    int32_t **l_860 = 0;
                    (*l_858) = (*l_821);
                    p_5 |= p_4;
                    return l_781;
                }
                for (l_853 = 0; l_853 < 5; l_853 += 1)
                {
                    for (p_4 = 0; p_4 < 7; p_4 += 1)
                    {
                        for (g_22 = 0; g_22 < 2; g_22 += 1)
                        {
                            struct S0 tmp = {2U};
                            g_730[l_853][p_4][g_22] = tmp;
                        }
                    }
                }
                for (l_808 = 2; l_808 < 5; l_808 += 2)
                {
                    for (g_474.f0 = 5; g_474.f0 < 7; g_474.f0 += 2)
                    {
                        for (g_337.f0 = 0; g_337.f0 < 2; g_337.f0 += 1)
                        {
                            int32_t l_868 = 0x7F102A46L;
                            int i;
                            l_869[2][0] &= func_13(g_417[1], (safe_mod_func_int16_t_s_s(l_833, (safe_unary_minus_func_uint16_t_u((((g_17[2][1] >= g_600.f1) ^ p_5) & (safe_mod_func_int8_t_s_s((~l_833), (safe_mod_func_uint32_t_u_u(p_4, l_868))))))))), 0x47F9DD7FL);
                            for (g_619 = 0; g_619 < 8; g_619 += 1)
                            {
                                int32_t l_875 = 1L;
                            }
                            return (*g_41);
                        }
                    }
                }
            }
            else
            {
                uint32_t l_879[6][10] = {{4294967287U, 0xD7F3CA26L, 4294967287U, 0xD7F3CA26L, 4294967287U, 0xD7F3CA26L, 4294967287U, 0xD7F3CA26L, 4294967287U, 0xD7F3CA26L}, {4294967287U, 0xD7F3CA26L, 4294967287U, 0xD7F3CA26L, 4294967287U, 0xD7F3CA26L, 4294967287U, 0xD7F3CA26L, 4294967287U, 0xD7F3CA26L}, {4294967287U, 0xD7F3CA26L, 4294967287U, 0xD7F3CA26L, 4294967287U, 0xD7F3CA26L, 4294967287U, 0xD7F3CA26L, 4294967287U, 0xD7F3CA26L}, {4294967287U, 0xD7F3CA26L, 4294967287U, 0xD7F3CA26L, 4294967287U, 0xD7F3CA26L, 4294967287U, 0xD7F3CA26L, 4294967287U, 0xD7F3CA26L}, {4294967287U, 0xD7F3CA26L, 4294967287U, 0xD7F3CA26L, 4294967287U, 0xD7F3CA26L, 4294967287U, 0xD7F3CA26L, 4294967287U, 0xD7F3CA26L}, {4294967287U, 0xD7F3CA26L, 4294967287U, 0xD7F3CA26L, 4294967287U, 0xD7F3CA26L, 4294967287U, 0xD7F3CA26L, 4294967287U, 0xD7F3CA26L}};
                struct S1 l_882 = {-6L,2L};
                int32_t l_886 = 0L;
                uint32_t l_891 = 5U;
                int i, j;
                for (l_781.f0 = 13; (l_781.f0 <= 6); l_781.f0 = safe_sub_func_int32_t_s_s(l_781.f0, 5))
                {
                    int8_t l_878 = (-1L);
                    l_879[1][2] ^= l_878;
                    for (p_5 = 0; (p_5 > 3); p_5 = safe_add_func_int32_t_s_s(p_5, 1))
                    {
                        l_781 = l_882;
                    }
                }
                if (p_4)
                {
                    if (g_600.f1)
                        goto lbl_883;
                    l_886 ^= (safe_mul_func_uint8_t_u_u(func_35(p_5), l_879[1][2]));
                    g_619 &= (safe_add_func_int64_t_s_s(p_3, (func_8(g_637.f0, 0xF11625DBL, g_600.f0, g_474.f0) < (safe_mod_func_uint8_t_u_u(l_891, p_3)))));
                }
                else
                {
                    int32_t l_894 = (-3L);
                    int32_t **l_902 = &g_49;
                    int i, j;
                    p_5 ^= (safe_rshift_func_int8_t_s_s((&l_781 != l_852), g_690.f0));
                    for (p_5 = 0; p_5 < 6; p_5 += 1)
                    {
                        for (g_21 = 7; g_21 < 9; g_21 += 7)
                        {
                            struct S1 * const l_895 = &g_600;
                            l_894 = p_3;
                            l_896[2] = l_895;
                            (*g_525) = g_897[0][5];
                            (*g_694) = func_44(l_894);
                        }
                    }
                    (*g_694) = func_44((safe_sub_func_uint64_t_u_u(((((*g_355) || l_879[1][2]) == g_730[0][1][0].f0) < (0 != l_903[6])), p_3)));
                    for (p_4 = 26; (p_4 != (-5)); p_4 = safe_sub_func_int16_t_s_s(p_4, 1))
                    {
                        const int8_t l_909 = 0x30L;
                        struct S0 *l_922[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_922[i] = &g_904;
                        (***l_790) = ((0xE1L > ((safe_sub_func_int8_t_s_s((!func_13(g_605[0], g_774.f0, l_909)), ((safe_div_func_int16_t_s_s(g_179[1][5][1], p_3)) < (safe_mul_func_int8_t_s_s(p_4, g_42.f0))))) >= (safe_add_func_int16_t_s_s((safe_add_func_int64_t_s_s(g_605[2], (safe_mul_func_int16_t_s_s(l_909, p_5)))), p_3)))) != (safe_lshift_func_int16_t_s_u(g_474.f0, 5)));
                        (**g_694) = p_3;
                        (*l_902) = func_44(g_417[0]);
                        l_923 = l_922[0];
                    }
                }
            }
            return l_924;
        }
        l_786 |= (safe_sub_func_uint64_t_u_u(g_18, p_3));
        if (g_600.f1)
            goto lbl_927;
    }
    return l_781;
}







uint8_t func_8(uint32_t p_9, int32_t p_10, uint32_t p_11, int32_t p_12)
{
    uint32_t l_717 = 0xBB5BF995L;
    const struct S0 *l_720 = 0;
    int32_t l_729 = (-1L);
    struct S1 l_742 = {0x3E12L,0x9404L};
lbl_727:
    (*g_313) = ((+p_10) < func_13(l_717, ((safe_add_func_int8_t_s_s((func_35(g_526.f0) || (l_720 != l_720)), (safe_add_func_uint32_t_u_u(l_717, 1L)))) || 0xFDL), (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(g_17[1][2], 12)), 0x562AL))));
    if ((p_10 > 65528U))
    {
        const uint32_t l_728 = 0x2871F3C8L;
        if (p_10)
            goto lbl_727;
        l_729 &= func_90(l_728, l_728, func_44(p_12));
        (*g_525) = g_730[0][1][0];
    }
    else
    {
        int32_t **l_735 = 0;
        const struct S1 *l_736 = 0;
        const int32_t *l_738 = &g_605[2];
        volatile struct S1 **l_771 = &g_130;
        const int16_t l_773 = 0xE40AL;
        int i;
        for (g_679.f0 = 1; g_679.f0 < 8; g_679.f0 += 1)
        {
            const struct S1 *l_737 = &g_474;
            int32_t *l_741 = 0;
            if ((safe_rshift_func_int16_t_s_u(((0U != (safe_mod_func_uint16_t_u_u(8U, p_11))) != ((*g_355) < (safe_rshift_func_uint16_t_u_s(g_381.f0, 9)))), (g_600.f1 <= (-1L)))))
            {
                l_741 = func_44(0L);
            }
            else
            {
                uint8_t l_747 = 0xD1L;
                int32_t *l_754 = &l_729;
                struct S1 l_761 = {1L,1L};
                l_742 = l_742;
                if (p_12)
                    continue;
                if (g_42.f0)
                    goto lbl_755;
lbl_755:
                (*l_754) ^= ((g_22 <= 0xBA63L) <= (safe_sub_func_int64_t_s_s(((safe_add_func_int64_t_s_s(l_747, (safe_sub_func_uint32_t_u_u((safe_add_func_int64_t_s_s(g_605[(g_679.f0) % 8], g_605[2])), p_9)))) & ((g_22 < p_10) != p_10)), (safe_lshift_func_int8_t_s_s((-8L), 1)))));
                for (p_10 = (-9); (p_10 >= 8); p_10 = safe_add_func_int16_t_s_s(p_10, 1))
                {
                    int32_t l_758 = 1L;
                    int32_t **l_768 = &l_741;
                    int i;
                    if (l_758)
                        break;
                }
            }
            (*g_313) ^= p_12;
        }
        for (l_729 = 0; (l_729 <= 14); l_729 = safe_add_func_int16_t_s_s(l_729, 4))
        {
            uint32_t l_772 = 1U;
            l_771 = (*g_482);
            if (l_772)
                break;
            if (g_42.f0)
                goto lbl_727;
        }
        l_729 = l_773;
    }
    (*g_525) = g_774;
    for (g_42.f1 = 0; (g_42.f1 == (-12)); g_42.f1 = safe_sub_func_int16_t_s_s(g_42.f1, 1))
    {
        int32_t *l_777 = &g_605[2];
        (*l_777) = p_11;
    }
    return p_9;
}







uint64_t func_13(uint8_t p_14, const int8_t p_15, const uint32_t p_16)
{
    uint16_t l_602 = 0xE46CL;
    int32_t *l_604 = &g_605[2];
    int32_t **l_603 = &l_604;
    for (p_14 = 0; p_14 < 6; p_14 += 1)
    {
        for (g_18 = 0; g_18 < 9; g_18 += 1)
        {
            g_17[p_14][g_18] = 0x08531D14CD49598ALL;
        }
    }
    for (p_14 = 0; (p_14 >= 23); p_14 = safe_add_func_uint32_t_u_u(p_14, 1))
    {
        struct S1 *l_601 = &g_600;
        int32_t l_612 = 0xACE549A2L;
        struct S0 **l_695[9];
        int i;
        for (i = 0; i < 9; i++)
            l_695[i] = &g_236[3];
        for (g_22 = 23; (g_22 < 17); g_22 = safe_sub_func_int8_t_s_s(g_22, 5))
        {
            struct S1 l_592 = {0x4582L,1L};
            int32_t ***l_617 = &l_603;
            int32_t *l_618 = &g_619;
        }
    }
    return p_15;
}







int32_t func_25(struct S1 p_26, uint32_t p_27, uint64_t p_28, uint8_t p_29, uint8_t p_30)
{
    int32_t *l_32 = &g_22;
    int32_t **l_31 = &l_32;
    struct S1 *l_473 = &g_474;
    struct S1 **l_472 = &l_473;
    struct S0 *l_513 = &g_169;
    (*l_31) = &g_22;
    g_18 &= p_29;
    if ((safe_sub_func_uint32_t_u_u(func_35(g_247), (safe_lshift_func_int16_t_s_u(0x23B8L, (1U & (l_472 == &l_473)))))))
    {
        const int32_t l_476 = 7L;
        int32_t * const *l_496 = &g_189;
        int32_t * const **l_495[2][1][6];
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 6; k++)
                    l_495[i][j][k] = &l_496;
            }
        }
        if ((safe_unary_minus_func_int64_t_s(func_90(l_476, p_26.f1, (*l_31)))))
        {
            (*l_31) = func_44(g_22);
        }
        else
        {
            int32_t l_477 = 8L;
            int32_t l_491 = (-1L);
            if ((~l_477))
            {
                int32_t l_498[1];
                uint16_t l_505[9][7][1];
                struct S0 *l_523 = &g_524[4][0][1];
                int8_t l_537 = 1L;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_498[i] = 0L;
                for (i = 0; i < 9; i++)
                {
                    for (j = 0; j < 7; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_505[i][j][k] = 0x8F47L;
                    }
                }
                for (g_247 = 0; (g_247 == 33); g_247 = safe_add_func_uint16_t_u_u(g_247, 5))
                {
                    for (p_26.f0 = (-18); (p_26.f0 >= (-26)); p_26.f0 = safe_sub_func_uint16_t_u_u(p_26.f0, 1))
                    {
                        (*l_31) = 0;
                    }
                }
                for (p_26.f1 = 0; p_26.f1 < 3; p_26.f1 += 3)
                {
                    for (p_29 = 4; p_29 < 6; p_29 += 1)
                    {
                        for (g_22 = 0; g_22 < 2; g_22 += 2)
                        {
                            (*g_482) = &g_130;
                            return g_179[(uint16_t)(p_26.f1) % 3][(p_29) % 6][(uint32_t)((g_22 + 1)) % 2];
                        }
                    }
                }
                if ((p_27 >= ((safe_mul_func_uint16_t_u_u(p_26.f0, 65535U)) ^ (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(g_179[(uint16_t)(p_26.f1) % 3][(p_29) % 6][(uint32_t)(g_22) % 2], 0)), 4)))))
                {
                    uint64_t l_512[7][8] = {{0U, 5U, 0U, 0U, 5U, 0U, 5U, 0U}, {0U, 5U, 0U, 0U, 5U, 0U, 5U, 0U}, {0U, 5U, 0U, 0U, 5U, 0U, 5U, 0U}, {0U, 5U, 0U, 0U, 5U, 0U, 5U, 0U}, {0U, 5U, 0U, 0U, 5U, 0U, 5U, 0U}, {0U, 5U, 0U, 0U, 5U, 0U, 5U, 0U}, {0U, 5U, 0U, 0U, 5U, 0U, 5U, 0U}};
                    int32_t l_516[6] = {0xE76A8AA7L, 0x0E619196L, 0xE76A8AA7L, 0x0E619196L, 0xE76A8AA7L, 0x0E619196L};
                    struct S1 l_517 = {0x3753L,0x6E92L};
                    int32_t **l_520 = &l_32;
                    int16_t l_551 = (-1L);
                    int i, j;
                    if ((safe_sub_func_uint16_t_u_u((65533U == l_491), (-8L))))
                    {
                        const struct S1 *l_492 = &g_474;
                        int32_t l_497 = 0x769B8B89L;
                        uint32_t l_499 = 0x4C185567L;
                        l_497 = (0x23730888E49BA462LL || ((func_74(p_26.f1, &l_32, l_492, g_179[(uint16_t)(p_26.f1) % 3][(p_29) % 6][(uint32_t)((g_22 + 1)) % 2], &l_491) > (safe_lshift_func_int16_t_s_u(l_476, 1))) ^ (0 == l_495[0][0][5])));
                        (*g_39) = (((((0x46D1E40FL ^ l_498[0]) || func_90(g_214.f0, l_499, &g_22)) != (&g_130 != 0)) == ((((safe_unary_minus_func_uint64_t_u(g_42.f1)) < (safe_add_func_uint16_t_u_u(g_42.f0, p_26.f1))) < (p_26.f0 <= (&l_496 == g_503))) == g_474.f1)) && ((l_505[5][6][0] != (safe_add_func_uint16_t_u_u(func_90((g_21 <= l_477), (safe_mul_func_uint16_t_u_u(g_42.f0, p_30)), &g_22), ((safe_sub_func_int32_t_s_s(l_491, l_505[5][6][0])) < l_512[6][4])))) >= (0 != &g_504)));
                    }
                    else
                    {
                        struct S0 **l_514 = 0;
                        struct S0 **l_515 = &g_236[5];
                        (*l_515) = l_513;
                        (*l_31) = &l_498[0];
                        l_516[5] &= 0xF50A1A2DL;
                        (*l_32) &= (*g_313);
                    }
                    (*l_473) = l_517;
                    (*g_49) &= l_477;
                    if ((((safe_sub_func_int16_t_s_s((func_74((l_477 ^ g_215.f0), l_520, &g_42, g_417[1], &l_498[0]) || func_50(g_169.f0)), p_30)) == (safe_lshift_func_int16_t_s_s((l_523 != g_525), 0))) && (((0L > g_527) || p_26.f1) < (safe_div_func_uint32_t_u_u((safe_unary_minus_func_int64_t_s((safe_mod_func_uint64_t_u_u(g_417[0], p_26.f1)))), (safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(g_247, (l_537 >= g_22))), ((g_17[1][2] == g_179[1][4][0]) <= (*g_355)))))))))
                    {
                        const int32_t *l_538[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_538[i] = &g_22;
                        (*g_39) = (g_140.f0 > (safe_rshift_func_int8_t_s_u(((0 == &g_130) > (safe_lshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u(p_30, (safe_div_func_uint8_t_u_u(g_474.f0, g_247)))), 4))), 4)));
                        (*l_31) = func_44(g_98.f0);
                        (*l_520) = func_44(l_505[7][3][0]);
                    }
                    else
                    {
                        int8_t l_552 = 0xCAL;
                        l_477 ^= 4L;
                        (*g_525) = (*l_523);
                        l_552 = (p_28 < l_551);
                    }
                }
                else
                {
                    struct S1 **l_553 = 0;
                    int32_t l_568 = (-6L);
                    struct S1 *l_569 = &g_474;
                    uint32_t l_584[5] = {0xA86136CEL, 0xA86136CEL, 4294967292U, 0xA86136CEL, 0xA86136CEL};
                    int i;
                    if (((g_17[5][3] & l_477) >= func_90(l_477, ((0 != l_553) && (safe_div_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((p_26.f0 ^ g_21), l_477)), l_491))), (*l_496))))
                    {
                        const int32_t *l_559 = &l_498[0];
                        (*g_525) = g_558;
                        (*g_560) = l_559;
                    }
                    else
                    {
                        l_568 = (safe_unary_minus_func_int32_t_s(((safe_rshift_func_uint8_t_u_u(func_50(g_99.f0), ((safe_add_func_int64_t_s_s((-1L), l_505[6][6][0])) ^ ((~g_474.f0) != 0xCF208EF9871B7479LL)))) <= (g_417[1] || ((safe_add_func_uint16_t_u_u((g_417[1] | l_568), ((*g_129) == l_569))) > g_417[1])))));
                    }
                    for (g_42.f0 = 11; (g_42.f0 != (-4)); g_42.f0 = safe_sub_func_int8_t_s_s(g_42.f0, 1))
                    {
                        int32_t *l_587[9];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_587[i] = &l_568;
                        l_477 = (**g_560);
                        (*g_47) = (safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(p_30, ((((*g_39) | l_537) & (safe_rshift_func_int16_t_s_s(0x3082L, 6))) == l_491))), (p_29 == ((safe_rshift_func_int16_t_s_s(p_26.f1, ((safe_mul_func_uint16_t_u_u(p_26.f0, p_29)) == (l_477 && p_29)))) || (((safe_sub_func_uint8_t_u_u(p_28, l_584[0])) <= 0xF8F73E7CL) < (safe_rshift_func_uint8_t_u_u((g_417[1] > l_491), (g_474.f1 && g_417[0]))))))));
                        (*l_31) = l_587[7];
                    }
                }
            }
            else
            {
                int i, j;
                (*g_49) = 0x9BC06319L;
                (**l_31) &= p_26.f1;
                for (g_42.f1 = 2; g_42.f1 < 6; g_42.f1 += 2)
                {
                    for (p_27 = 0; p_27 < 9; p_27 += 1)
                    {
                        (*l_32) ^= (p_26.f1 <= p_28);
                    }
                }
            }
            for (p_29 = (-23); (p_29 == 7); p_29 = safe_add_func_int32_t_s_s(p_29, 1))
            {
                (*l_31) = func_44(p_30);
            }
            (*g_504) = (*g_504);
        }
    }
    else
    {
        struct S1 **l_590 = &l_473;
        int32_t l_591 = (-3L);
        (**l_31) = p_29;
        l_591 = (l_590 != &l_473);
    }
    return p_26.f0;
}







uint32_t func_35(uint8_t p_36)
{
    uint16_t l_40[9][5] = {{1U, 1U, 0x1E0FL, 1U, 1U}, {1U, 1U, 0x1E0FL, 1U, 1U}, {1U, 1U, 0x1E0FL, 1U, 1U}, {1U, 1U, 0x1E0FL, 1U, 1U}, {1U, 1U, 0x1E0FL, 1U, 1U}, {1U, 1U, 0x1E0FL, 1U, 1U}, {1U, 1U, 0x1E0FL, 1U, 1U}, {1U, 1U, 0x1E0FL, 1U, 1U}, {1U, 1U, 0x1E0FL, 1U, 1U}};
    struct S1 * volatile l_43 = &g_42;
    int32_t *l_455 = &g_22;
    int16_t l_464 = (-3L);
    int16_t l_467 = (-7L);
    struct S0 *l_468 = &g_169;
    int32_t **l_469[3][3];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            l_469[i][j] = &l_455;
    }
    for (p_36 = 0; (p_36 < 41); p_36 = safe_add_func_uint64_t_u_u(p_36, 7))
    {
        int8_t l_454[2][8][1];
        int32_t l_465 = 1L;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 8; j++)
            {
                for (k = 0; k < 1; k++)
                    l_454[i][j][k] = 0x27L;
            }
        }
        (*g_39) = g_18;
        if (l_40[6][0])
        {
            return g_17[3][2];
        }
        else
        {
            int8_t l_457 = 1L;
            int32_t *l_466[5][10];
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 10; j++)
                    l_466[i][j] = &l_465;
            }
            l_43 = g_41;
            (*g_48) = func_44(p_36);
            if (func_50(l_454[0][7][0]))
            {
                const int8_t l_456 = (-2L);
                l_455 = func_44(g_381.f0);
                (*g_129) = (*g_129);
                if (l_456)
                    break;
                if (l_454[0][7][0])
                {
                    (*l_455) |= (-5L);
                    if ((!(4294967295U | 0xDAB2AEFCL)))
                    {
                        return l_456;
                    }
                    else
                    {
                        int32_t **l_458 = 0;
                        (*g_459) = func_44(l_457);
                        return p_36;
                    }
                }
                else
                {
                    int32_t **l_461 = 0;
                    int32_t **l_462[10][3];
                    int i, j;
                    for (i = 0; i < 10; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_462[i][j] = &g_49;
                    }
                    (*g_459) = func_44(l_456);
                }
            }
            else
            {
                uint8_t l_463[6] = {0x39L, 0x39L, 0x45L, 0x39L, 0x39L, 0x45L};
                int i;
                (*l_455) = l_463[3];
                l_465 = l_464;
            }
            l_466[4][6] = func_44(g_179[0][5][0]);
        }
        if (l_467)
            break;
    }
    (*l_455) = (0 == l_468);
    (*g_48) = l_455;
    return (*l_455);
}







int32_t * func_44(int32_t p_45)
{
    int32_t l_46[4] = {0x53D97512L, 0x53D97512L, (-9L), 0x53D97512L};
    int i;
    (*g_47) |= l_46[0];
    return &g_22;
}







int32_t func_50(int8_t p_51)
{
    int32_t l_61 = 0xADF6F6D7L;
    int32_t **l_231 = &g_49;
    struct S0 **l_242 = &g_236[0];
    int32_t *l_245 = 0;
    int32_t *l_246[6];
    int i, j;
    for (i = 0; i < 6; i++)
        l_246[i] = &l_61;
    for (p_51 = 5; p_51 < 6; p_51 += 1)
    {
        for (g_42.f0 = 0; g_42.f0 < 9; g_42.f0 += 3)
        {
            const int8_t l_54 = 0xD1L;
            int32_t * const l_243 = &g_22;
            struct S0 *l_244 = 0;
            for (g_22 = 0; (g_22 > (-12)); g_22 = safe_sub_func_int64_t_s_s(g_22, 3))
            {
                uint16_t l_56[8][10] = {{0x0C17L, 0x0C17L, 0U, 0xA10FL, 0U, 0xA10FL, 0U, 0x0C17L, 0x0C17L, 0U}, {0x0C17L, 0x0C17L, 0U, 0xA10FL, 0U, 0xA10FL, 0U, 0x0C17L, 0x0C17L, 0U}, {0x0C17L, 0x0C17L, 0U, 0xA10FL, 0U, 0xA10FL, 0U, 0x0C17L, 0x0C17L, 0U}, {0x0C17L, 0x0C17L, 0U, 0xA10FL, 0U, 0xA10FL, 0U, 0x0C17L, 0x0C17L, 0U}, {0x0C17L, 0x0C17L, 0U, 0xA10FL, 0U, 0xA10FL, 0U, 0x0C17L, 0x0C17L, 0U}, {0x0C17L, 0x0C17L, 0U, 0xA10FL, 0U, 0xA10FL, 0U, 0x0C17L, 0x0C17L, 0U}, {0x0C17L, 0x0C17L, 0U, 0xA10FL, 0U, 0xA10FL, 0U, 0x0C17L, 0x0C17L, 0U}, {0x0C17L, 0x0C17L, 0U, 0xA10FL, 0U, 0xA10FL, 0U, 0x0C17L, 0x0C17L, 0U}};
                int i, j;
                if (l_54)
                {
                    uint8_t l_60 = 251U;
                    if ((g_55 == g_17[(uint32_t)((p_51 + 1)) % 6][(uint16_t)(g_42.f0) % 9]))
                    {
                        int32_t *l_57[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_57[i] = 0;
                        (*g_39) |= l_56[6][2];
                        for (g_42.f1 = 0; (g_42.f1 != 19); g_42.f1 = safe_add_func_int32_t_s_s(g_42.f1, 1))
                        {
                            return l_60;
                        }
                        l_61 = 0x8BE49C90L;
                    }
                    else
                    {
                        for (l_61 = 21; (l_61 <= (-27)); l_61 = safe_sub_func_uint32_t_u_u(l_61, 1))
                        {
                            const int32_t *l_232 = &g_22;
                            int32_t l_233 = 0xAB8839ADL;
                            l_233 = (safe_div_func_int64_t_s_s((~(safe_div_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((g_17[(uint8_t)(p_51) % 6][(uint16_t)(g_42.f0) % 9] <= g_17[(uint32_t)((p_51 + 1)) % 6][(uint16_t)(g_42.f0) % 9]), (safe_mod_func_uint8_t_u_u(p_51, p_51)))), (-2L))), ((-1L) | l_60)))), (-4L)));
                        }
                        return (**g_48);
                    }
                }
                else
                {
                    struct S0 * const l_234 = 0;
                    struct S0 **l_239 = &g_236[3];
                    (*l_239) = l_234;
                }
            }
            if (p_51)
                continue;
            (*l_243) = ((!((g_17[4][6] && (safe_rshift_func_int8_t_s_u((**l_231), 2))) || func_90((l_242 != l_242), (**l_231), l_243))) != p_51);
            (*l_242) = l_244;
        }
    }
    g_247 ^= (**g_48);
    if (func_90((**l_231), (*g_47), &g_22))
    {
        int32_t l_250[2][6] = {{0x4E14BB8DL, 0x80373609L, 1L, 1L, 0x80373609L, 0x4E14BB8DL}, {0x4E14BB8DL, 0x80373609L, 1L, 1L, 0x80373609L, 0x4E14BB8DL}};
        int32_t l_251 = 1L;
        int32_t **l_287[2];
        struct S1 *l_291 = 0;
        struct S0 **l_307 = 0;
        int32_t * volatile l_315 = &l_251;
        uint16_t l_326 = 6U;
        const uint64_t l_343 = 0xF104CF704929BF38LL;
        int i, j;
        for (i = 0; i < 2; i++)
            l_287[i] = 0;
        if ((safe_mod_func_uint16_t_u_u(g_214.f0, g_42.f0)))
        {
            uint8_t l_257[5] = {0xDEL, 0x75L, 0xDEL, 0x75L, 0xDEL};
            const struct S1 *l_288 = &g_42;
            int32_t l_290 = 1L;
            int i;
            l_251 |= ((l_250[1][0] > (*g_47)) >= ((p_51 != 0L) & g_179[1][3][0]));
            for (p_51 = (-2); (p_51 < (-9)); p_51 = safe_sub_func_uint8_t_u_u(p_51, 1))
            {
                int32_t * const l_254 = 0;
                uint8_t l_272 = 0x1EL;
                int32_t l_292 = (-9L);
                l_251 = func_90((g_99.f0 && g_215.f0), (l_250[0][2] != 0xA504EC7D9E8CB06ALL), l_254);
                for (l_61 = 0; (l_61 < 9); l_61 = safe_add_func_uint8_t_u_u(l_61, 1))
                {
                    int16_t l_279 = 6L;
                    struct S0 **l_286 = &g_236[3];
                    int32_t l_295 = 6L;
                    l_279 = ((func_90((l_257[2] ^ (p_51 <= (safe_lshift_func_int16_t_s_s(p_51, g_142.f0)))), p_51, &g_22) != ((safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s((p_51 | l_250[0][2]), 7)), ((safe_sub_func_uint32_t_u_u(g_42.f1, l_257[0])) ^ (safe_div_func_uint64_t_u_u(g_179[1][0][0], l_257[2]))))) >= 0xC0818C2B6535DD0ELL)) & (safe_lshift_func_int16_t_s_u((safe_div_func_int32_t_s_s((l_272 && (safe_div_func_uint64_t_u_u(p_51, (g_247 & p_51)))), (safe_add_func_uint8_t_u_u((g_247 ^ (g_42.f0 <= g_17[1][0])), (safe_add_func_int64_t_s_s(g_42.f0, (g_42.f0 >= g_179[0][3][1]))))))), 2)));
                    for (g_42.f0 = 0; (g_42.f0 < 16); g_42.f0 = safe_add_func_int16_t_s_s(g_42.f0, 1))
                    {
                        const int32_t *l_289 = &l_251;
                        l_290 &= (safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((-1L) == ((0 == l_286) || (g_99.f0 || 0xA37BL))), p_51)), (-2L)));
                        l_291 = l_291;
                        l_292 ^= (*g_47);
                        l_295 = (safe_mod_func_uint16_t_u_u(p_51, func_74(p_51, &g_49, &g_42, l_290, l_289)));
                    }
                    (*l_231) = func_44(0xF77BA6C6L);
                }
                if ((*g_49))
                    continue;
            }
        }
        else
        {
            int16_t l_296[2];
            const uint32_t l_320 = 0x4D5B5BBEL;
            struct S0 *l_344 = 0;
            int32_t *l_345[2];
            int i;
            for (i = 0; i < 2; i++)
                l_296[i] = 1L;
            for (i = 0; i < 2; i++)
                l_345[i] = &l_250[1][0];
            (*g_39) |= l_296[0];
            if ((g_215.f0 > (((**l_231) >= (safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_mod_func_int8_t_s_s(g_247, p_51)), p_51)), l_296[0]))) || ((((safe_div_func_uint16_t_u_u(p_51, p_51)) < (p_51 <= g_22)) != ((safe_rshift_func_int16_t_s_u(l_296[0], 0)) == (g_42.f1 < p_51))) != (l_307 != l_307)))))
            {
                uint16_t l_312 = 65531U;
                for (g_247 = 0; (g_247 > 23); g_247 = safe_add_func_int16_t_s_s(g_247, 1))
                {
                    int32_t * volatile *l_314[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_314[i] = &l_245;
                    for (p_51 = 0; (p_51 != 12); p_51 = safe_add_func_uint16_t_u_u(p_51, 1))
                    {
                        (*g_48) = (*g_48);
                        return p_51;
                    }
                    if (l_312)
                        continue;
                    l_315 = g_313;
                }
            }
            else
            {
                (**l_231) &= 0xC968B535L;
                for (l_251 = 0; l_251 < 2; l_251 += 1)
                {
                    l_287[l_251] = 0;
                }
            }
            for (g_22 = 1; g_22 < 6; g_22 += 1)
            {
                int32_t l_335 = 0L;
                int i;
            }
            (*g_49) = (safe_rshift_func_uint16_t_u_s(65531U, 8));
        }
        if (p_51)
        {
            int32_t *l_350 = &g_22;
            (*g_49) = ((*l_231) == l_350);
            (*l_315) = p_51;
        }
        else
        {
            (**l_231) = (safe_mul_func_int8_t_s_s(0x8CL, (+0x11L)));
        }
        if ((**l_231))
        {
            int32_t *l_356 = &l_250[1][0];
            (*l_231) = l_356;
        }
        else
        {
            volatile int32_t **l_358[5];
            struct S1 * const l_359 = 0;
            struct S1 **l_360 = &l_291;
            int i;
            for (i = 0; i < 5; i++)
                l_358[i] = &g_357;
            g_357 = g_357;
            (*l_315) = (*g_313);
            (*l_360) = l_359;
            if (((safe_sub_func_uint16_t_u_u(g_55, (p_51 & (g_42.f0 || g_22)))) == ((g_179[1][2][1] >= (safe_unary_minus_func_int8_t_s((safe_mul_func_uint8_t_u_u(p_51, (p_51 ^ g_179[2][0][0])))))) != (safe_rshift_func_int16_t_s_u(((&g_130 != &l_291) ^ (safe_rshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(g_42.f1, p_51)), (safe_rshift_func_uint16_t_u_u(g_42.f1, g_247))))), 1)))))
            {
                return p_51;
            }
            else
            {
                int32_t l_377[6][1][2];
                int i, j, k;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_377[i][j][k] = 0xC09F5A17L;
                    }
                }
                for (g_42.f1 = 0; (g_42.f1 < 11); g_42.f1 = safe_add_func_uint8_t_u_u(g_42.f1, 5))
                {
                    int8_t l_376[6] = {0x92L, 0x92L, (-1L), 0x92L, 0x92L, (-1L)};
                    int i;
                    return l_376[0];
                }
                return l_377[3][0][0];
            }
        }
    }
    else
    {
        uint16_t l_380 = 65533U;
        int32_t l_404 = (-4L);
        int32_t **l_427 = &l_246[2];
        int64_t l_442 = 1L;
        for (l_61 = 0; (l_61 != 25); l_61 = safe_add_func_uint8_t_u_u(l_61, 7))
        {
            (*g_49) = p_51;
        }
        if (l_380)
        {
            volatile struct S0 *l_382 = &g_142;
            const int32_t *l_394[10][6];
            int32_t l_408 = 0x10D2EE36L;
            const struct S1 *l_409[9];
            const int64_t l_436 = 3L;
            int i, j, k;
            for (i = 0; i < 10; i++)
            {
                for (j = 0; j < 6; j++)
                    l_394[i][j] = &g_22;
            }
            for (i = 0; i < 9; i++)
                l_409[i] = &g_42;
            (*l_382) = g_381;
            for (g_22 = 0; (g_22 > 21); g_22 = safe_add_func_int32_t_s_s(g_22, 1))
            {
                uint16_t l_391[7] = {1U, 1U, 0xD4A8L, 1U, 1U, 0xD4A8L, 1U};
                int i;
                for (p_51 = 0; (p_51 >= 19); p_51 = safe_add_func_int8_t_s_s(p_51, 7))
                {
                    struct S0 *l_399 = &g_169;
                    int32_t l_400[4][3] = {{1L, 0x6765D163L, 1L}, {1L, 0x6765D163L, 1L}, {1L, 0x6765D163L, 1L}, {1L, 0x6765D163L, 1L}};
                    int i, j;
                    if ((**g_48))
                    {
                        uint32_t l_392 = 1U;
                        (*l_231) = (*g_48);
                        l_392 |= l_391[5];
                    }
                    else
                    {
                        int32_t **l_393 = &l_246[4];
                        (**l_393) = (p_51 || (safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(p_51, p_51)), (g_215.f0 != (**l_393)))));
                        l_400[3][1] |= (l_399 != (*l_242));
                    }
                }
                if ((*g_355))
                    break;
                for (l_61 = 0; (l_61 < (-28)); l_61 = safe_sub_func_uint16_t_u_u(l_61, 1))
                {
                    int32_t l_403 = 6L;
                    l_404 = l_403;
                }
            }
            for (g_55 = 0; g_55 < 3; g_55 += 1)
            {
                for (g_18 = 0; g_18 < 6; g_18 += 3)
                {
                    for (l_380 = 0; l_380 < 2; l_380 += 1)
                    {
                        int32_t **l_426 = &g_49;
                        for (g_42.f0 = 0; (g_42.f0 <= (-22)); g_42.f0 = safe_sub_func_int64_t_s_s(g_42.f0, 8))
                        {
                            int32_t l_416 = 1L;
                            int32_t * const l_418 = 0;
                            int32_t l_419 = 0L;
                            l_404 |= (*g_313);
                            l_408 = (*g_355);
                            if (p_51)
                            {
                                return (*g_47);
                            }
                            else
                            {
                                (*g_313) = 1L;
                                l_419 ^= func_90((p_51 != (((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(l_404, g_179[(g_55) % 3][(uint32_t)(g_18) % 6][(l_380) % 2])), (safe_div_func_uint32_t_u_u(g_22, l_416)))) || g_179[(g_55) % 3][(uint32_t)(g_18) % 6][(l_380) % 2]) & 0xF104C48CL)), g_417[1], l_418);
                            }
                            return p_51;
                        }
                        for (p_51 = 0; (p_51 >= (-8)); p_51 = safe_sub_func_uint32_t_u_u(p_51, 2))
                        {
                            int64_t l_432 = 0x67D72D5C1FE2523DLL;
                            uint32_t l_433 = 4294967295U;
                            struct S1 *l_437 = 0;
                            (*g_49) |= 8L;
                            l_408 &= (((g_179[(g_55) % 3][(uint32_t)(g_18) % 6][((l_380 + 1)) % 2] <= ((p_51 | (p_51 == g_42.f0)) & ((safe_mul_func_uint8_t_u_u(g_42.f0, g_179[1][5][0])) == g_417[1]))) | (safe_mod_func_int64_t_s_s(((l_426 == l_427) & (safe_div_func_int8_t_s_s((safe_sub_func_int8_t_s_s(l_432, l_433)), g_42.f0))), (**l_427)))) <= ((safe_mul_func_int16_t_s_s((l_436 && (0 == l_437)), ((safe_add_func_uint16_t_u_u((l_442 ^ p_51), ((**l_231) < p_51))) & ((g_417[1] < g_179[1][4][1]) < (safe_mul_func_uint8_t_u_u(p_51, (**l_426))))))) <= (-3L)));
                        }
                    }
                }
            }
        }
        else
        {
            int32_t l_445 = 0xF89602C3L;
            const struct S1 *l_448 = &g_42;
            int i;
            l_445 = (g_417[1] && (-1L));
            for (g_140.f0 = 0; g_140.f0 < 6; g_140.f0 += 6)
            {
                for (l_445 = (-18); (l_445 == 15); l_445 = safe_add_func_uint8_t_u_u(l_445, 1))
                {
                    int32_t *l_449 = &l_404;
                    (*l_231) = l_246[(g_140.f0) % 6];
                    if ((*g_47))
                        break;
                }
            }
        }
        for (l_404 = 0; (l_404 <= (-19)); l_404 = safe_sub_func_int32_t_s_s(l_404, 8))
        {
            (**l_427) = (**l_427);
            return (*g_47);
        }
    }
    for (g_247 = (-26); (g_247 <= 46); g_247 = safe_add_func_uint16_t_u_u(g_247, 1))
    {
        (*l_231) = func_44(p_51);
    }
    return (*g_313);
}







uint64_t func_74(int32_t p_75, int32_t ** p_76, const struct S1 * p_77, uint32_t p_78, const int32_t * p_79)
{
    int32_t *l_80 = &g_22;
    uint64_t l_85 = 0x3FFEA361F882D778LL;
    int16_t l_139 = 0xBE4CL;
    struct S0 *l_184 = &g_169;
    (*l_80) = (((*g_48) == l_80) && (*p_79));
    l_85 |= (((safe_mul_func_int8_t_s_s((p_78 ^ (0 != l_80)), (p_75 ^ p_78))) >= (*p_79)) ^ (*l_80));
    if ((safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(func_90(p_78, (*l_80), 0), (safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u(g_17[4][3], g_42.f1)), 65530U)))), 1)))
    {
        int32_t **l_138 = &g_49;
        int32_t l_145 = 0xFC1DF0E7L;
        uint64_t l_187 = 1U;
        (*g_49) = ((&g_47 != l_138) && (**l_138));
        if (l_139)
        {
            volatile struct S0 *l_141[7];
            int i;
            for (i = 0; i < 7; i++)
                l_141[i] = 0;
            g_142 = g_140;
        }
        else
        {
            int8_t l_146 = 0x65L;
            int32_t **l_185 = 0;
            int16_t l_199 = 0x806CL;
            int8_t l_213 = 1L;
            int i, j, k;
            if ((func_90((**l_138), (**l_138), l_80) | ((safe_rshift_func_uint16_t_u_u((l_145 & 0L), 3)) | (l_146 != (safe_lshift_func_int16_t_s_u(p_75, 9))))))
            {
                uint8_t l_153 = 0xD4L;
                for (p_78 = (-5); (p_78 <= 13); p_78 = safe_add_func_uint16_t_u_u(p_78, 1))
                {
                    uint16_t l_156 = 0x997AL;
                    for (g_42.f1 = 0; (g_42.f1 < (-30)); g_42.f1 = safe_sub_func_int64_t_s_s(g_42.f1, 6))
                    {
                        return p_75;
                    }
                    (*l_80) ^= (*p_79);
                    if (((l_153 != (func_90(p_78, ((safe_rshift_func_int8_t_s_s(p_78, p_75)) > p_75), func_44((**l_138))) > l_156)) <= (safe_mul_func_int16_t_s_s(g_42.f1, g_17[4][8]))))
                    {
                        int32_t *l_159 = &l_145;
                        struct S0 *l_168 = &g_169;
                        struct S0 **l_171 = 0;
                        struct S0 **l_172 = 0;
                        struct S0 **l_173 = &l_168;
                        (*l_159) ^= (*g_49);
                        (*l_80) = ((g_21 == (g_17[3][5] & ((safe_sub_func_uint64_t_u_u((safe_div_func_int8_t_s_s(g_17[1][7], (**l_138))), (p_78 && p_78))) >= ((*p_79) ^ (safe_add_func_uint8_t_u_u((*l_159), g_17[2][2])))))) != (g_22 || (**l_138)));
                        (*l_173) = l_168;
                    }
                    else
                    {
                        volatile struct S0 *l_175 = &g_98;
                        const int32_t *l_178 = 0;
                        const int32_t **l_177 = &l_178;
                        const int32_t ***l_176 = &l_177;
                        (*l_175) = g_174;
                        (*l_176) = &p_79;
                    }
                }
            }
            else
            {
                struct S0 *l_183 = &g_169;
                int i, j, k;
                for (g_174.f0 = 0; g_174.f0 < 3; g_174.f0 += 1)
                {
                    for (l_146 = 0; l_146 < 6; l_146 += 2)
                    {
                        for (l_85 = 0; l_85 < 2; l_85 += 1)
                        {
                            int32_t l_182 = 0x92E3B7FEL;
                            (*l_80) = ((p_78 < (safe_div_func_int64_t_s_s(l_182, g_140.f0))) <= (**l_138));
                        }
                    }
                }
                (*l_80) = (*p_79);
                (*l_138) = func_44((l_183 != l_184));
            }
            for (g_18 = 1; g_18 < 3; g_18 += 3)
            {
                for (g_142.f0 = 5; g_142.f0 < 6; g_142.f0 += 1)
                {
                    for (g_169.f0 = 1; g_169.f0 < 2; g_169.f0 += 1)
                    {
                        int32_t l_186 = 0x2842BFFAL;
                        uint32_t l_188 = 0xEFAF6FF1L;
                        int32_t *l_207 = &l_145;
                        struct S1 **l_212 = 0;
                        struct S0 **l_224 = &l_184;
                        int32_t *l_227 = &g_22;
                        if ((*g_47))
                        {
                            int16_t l_190 = 0x272EL;
                            int32_t l_191[10][1][5] = {{{0xD8E95E8CL, 0xB7537BB7L, 0xD8E95E8CL, 0xB7537BB7L, 0xD8E95E8CL}}, {{0xD8E95E8CL, 0xB7537BB7L, 0xD8E95E8CL, 0xB7537BB7L, 0xD8E95E8CL}}, {{0xD8E95E8CL, 0xB7537BB7L, 0xD8E95E8CL, 0xB7537BB7L, 0xD8E95E8CL}}, {{0xD8E95E8CL, 0xB7537BB7L, 0xD8E95E8CL, 0xB7537BB7L, 0xD8E95E8CL}}, {{0xD8E95E8CL, 0xB7537BB7L, 0xD8E95E8CL, 0xB7537BB7L, 0xD8E95E8CL}}, {{0xD8E95E8CL, 0xB7537BB7L, 0xD8E95E8CL, 0xB7537BB7L, 0xD8E95E8CL}}, {{0xD8E95E8CL, 0xB7537BB7L, 0xD8E95E8CL, 0xB7537BB7L, 0xD8E95E8CL}}, {{0xD8E95E8CL, 0xB7537BB7L, 0xD8E95E8CL, 0xB7537BB7L, 0xD8E95E8CL}}, {{0xD8E95E8CL, 0xB7537BB7L, 0xD8E95E8CL, 0xB7537BB7L, 0xD8E95E8CL}}, {{0xD8E95E8CL, 0xB7537BB7L, 0xD8E95E8CL, 0xB7537BB7L, 0xD8E95E8CL}}};
                            struct S1 l_192 = {0xB267L,0x477EL};
                            struct S1 *l_193 = &l_192;
                            int i, j, k;
                            p_75 = func_90(func_90((l_185 != &g_49), (253U & func_90((func_90(p_78, l_186, (*g_48)) | (l_187 > l_188)), (*p_79), g_189)), g_189), (l_190 & g_179[0][5][0]), g_189);
                            for (g_42.f1 = 1; g_42.f1 < 3; g_42.f1 += 1)
                            {
                                for (l_186 = 2; l_186 < 6; l_186 += 1)
                                {
                                    for (g_174.f0 = 0; g_174.f0 < 2; g_174.f0 += 1)
                                    {
                                        l_191[1][0][4] = func_90(4294967295U, (**l_138), (*g_48));
                                        (*g_49) = (*g_49);
                                        (*l_138) = (*l_138);
                                    }
                                }
                            }
                            (*l_193) = l_192;
                        }
                        else
                        {
                            int64_t l_196 = (-1L);
                            (**l_138) = (safe_rshift_func_uint8_t_u_u((g_21 < l_196), 6));
                            (*l_138) = (*g_48);
                        }
                        if ((safe_div_func_uint8_t_u_u(l_188, l_199)))
                        {
                            const uint32_t l_200 = 0x18311241L;
                            if (l_188)
                            {
                                (*l_138) = func_44(g_179[(uint32_t)(g_18) % 3][(g_142.f0) % 6][(g_169.f0) % 2]);
                            }
                            else
                            {
                                (**l_138) &= (g_21 > g_179[2][4][0]);
                                (*p_76) = func_44(g_179[(uint32_t)(g_18) % 3][(g_142.f0) % 6][(g_169.f0) % 2]);
                            }
                            (*g_49) &= l_200;
                            for (p_78 = (-30); (p_78 > 32); p_78 = safe_add_func_uint32_t_u_u(p_78, 3))
                            {
                                int32_t * const *l_204 = &g_189;
                                int32_t * const **l_203 = &l_204;
                                (*l_203) = &g_189;
                            }
                        }
                        else
                        {
                            for (l_199 = 0; (l_199 < 1); l_199 = safe_add_func_uint8_t_u_u(l_199, 1))
                            {
                                (*l_138) = func_44(1L);
                                (*l_80) &= (-1L);
                            }
                        }
                        (*l_207) |= func_90(l_186, 0L, (*p_76));
                        for (l_186 = 0; (l_186 < (-2)); l_186 = safe_sub_func_uint8_t_u_u(l_186, 2))
                        {
                            const int32_t l_222 = (-1L);
                            for (l_188 = 0; (l_188 >= 4); l_188 = safe_add_func_uint32_t_u_u(l_188, 1))
                            {
                                (*l_138) = (*l_138);
                            }
                            if ((&g_130 != l_212))
                            {
                                (*l_207) |= l_213;
                                (*l_184) = g_214;
                                (*l_184) = g_215;
                                (*g_49) = g_179[(uint32_t)(g_18) % 3][(g_142.f0) % 6][(g_169.f0) % 2];
                            }
                            else
                            {
                                int64_t l_223 = 0x223A29AB7E0C7B68LL;
                                l_223 &= func_90(g_18, (safe_add_func_uint64_t_u_u((safe_sub_func_int32_t_s_s(0x882EDD94L, (safe_mod_func_int64_t_s_s(((g_179[2][0][0] <= l_222) > (p_75 | (*g_49))), p_75)))), p_75)), &g_22);
                                return g_179[(uint32_t)(g_18) % 3][(g_142.f0) % 6][(g_169.f0) % 2];
                            }
                            if ((((l_224 == l_224) == g_179[(uint32_t)(g_18) % 3][(g_142.f0) % 6][(g_169.f0) % 2]) > g_179[2][5][1]))
                            {
                                (**l_138) = (safe_rshift_func_uint8_t_u_u(0U, (l_227 == (*g_48))));
                                (*l_80) |= ((p_75 & g_42.f1) <= g_179[(uint32_t)(g_18) % 3][(g_142.f0) % 6][(g_169.f0) % 2]);
                                return g_42.f1;
                            }
                            else
                            {
                                uint32_t l_230 = 0xDAC31F8AL;
                                (*l_227) = (g_215.f0 == (0x341315DE78DB2353LL != (safe_mod_func_int8_t_s_s((&p_77 == &p_77), p_75))));
                                (*g_49) ^= l_230;
                            }
                        }
                    }
                }
            }
        }
    }
    else
    {
        (*g_47) = func_90((4294967287U < (**g_48)), (*l_80), (*p_76));
    }
    return g_55;
}







int8_t func_90(const uint32_t p_91, int32_t p_92, int32_t * const p_93)
{
    int32_t **l_94 = &g_49;
    (*l_94) = func_44(p_91);
    for (p_92 = 0; (p_92 == (-18)); p_92 = safe_sub_func_int32_t_s_s(p_92, 5))
    {
        struct S1 l_97[6][9][1] = {{{{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}}, {{{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}}, {{{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}}, {{{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}}, {{{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}}, {{{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}, {{0xA45FL,0x6EE0L}}}};
        int i, j, k;
    }
    return p_92;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_17[i][j], "g_17[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_42.f0, "g_42.f0", print_hash_value);
    transparent_crc(g_42.f1, "g_42.f1", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_98.f0, "g_98.f0", print_hash_value);
    transparent_crc(g_99.f0, "g_99.f0", print_hash_value);
    transparent_crc(g_140.f0, "g_140.f0", print_hash_value);
    transparent_crc(g_142.f0, "g_142.f0", print_hash_value);
    transparent_crc(g_169.f0, "g_169.f0", print_hash_value);
    transparent_crc(g_174.f0, "g_174.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_179[i][j][k], "g_179[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_214.f0, "g_214.f0", print_hash_value);
    transparent_crc(g_215.f0, "g_215.f0", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_337.f0, "g_337.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_338[i][j].f0, "g_338[i][j].f0", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_381.f0, "g_381.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_417[i], "g_417[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_474.f0, "g_474.f0", print_hash_value);
    transparent_crc(g_474.f1, "g_474.f1", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_524[i][j][k].f0, "g_524[i][j][k].f0", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_526.f0, "g_526.f0", print_hash_value);
    transparent_crc(g_527, "g_527", print_hash_value);
    transparent_crc(g_558.f0, "g_558.f0", print_hash_value);
    transparent_crc(g_600.f0, "g_600.f0", print_hash_value);
    transparent_crc(g_600.f1, "g_600.f1", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_605[i], "g_605[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_619, "g_619", print_hash_value);
    transparent_crc(g_637.f0, "g_637.f0", print_hash_value);
    transparent_crc(g_679.f0, "g_679.f0", print_hash_value);
    transparent_crc(g_690.f0, "g_690.f0", print_hash_value);
    transparent_crc(g_691.f0, "g_691.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_730[i][j][k].f0, "g_730[i][j][k].f0", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_774.f0, "g_774.f0", print_hash_value);
    transparent_crc(g_789, "g_789", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_800[i][j].f0, "g_800[i][j].f0", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_897[i][j].f0, "g_897[i][j].f0", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_904.f0, "g_904.f0", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL);
    return 0;
}
