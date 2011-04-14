# 1 "found/test0033.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "found/test0033.c"
# 10 "found/test0033.c"
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
# 11 "found/test0033.c" 2


long __undefined;


struct S0 {
   uint16_t f0;
   uint8_t f1;
};


int32_t g_4 = 1L;
uint8_t g_16 = 0xE9L;
int32_t g_18 = (-3L);
volatile int32_t g_28[7] = {1L, 0L, 0L, 0L, 0L, 1L, 0L};
int32_t g_33 = 0x1A8F1EDDL;
int32_t *g_40[8][6] = {{&g_33, &g_33, &g_33, &g_33, &g_33, &g_33}, {&g_33, &g_33, &g_33, &g_33, &g_33, &g_33}, {&g_33, &g_33, &g_33, &g_33, &g_33, &g_33}, {&g_33, &g_33, &g_33, &g_33, &g_33, &g_33}, {&g_33, &g_33, &g_33, &g_33, &g_33, &g_33}, {&g_33, &g_33, &g_33, &g_33, &g_33, &g_33}, {&g_33, &g_33, &g_33, &g_33, &g_33, &g_33}, {&g_33, &g_33, &g_33, &g_33, &g_33, &g_33}};
int32_t ** volatile g_39 = &g_40[3][3];
int32_t * const volatile g_79 = 0;
int32_t g_81 = 0xC0774064L;
int32_t * volatile g_80[6][10][1] = {{{&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}}, {{&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}}, {{&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}}, {{&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}}, {{&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}}, {{&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}, {&g_81}}};
int32_t **g_133 = &g_40[3][3];
int32_t *** volatile g_132 = &g_133;
volatile struct S0 g_183 = {5U,0xCBL};
struct S0 g_236[3][4][3] = {{{{0xC2E9L,1U}, {0xC2E9L,1U}, {0xC2E9L,1U}}, {{0xC2E9L,1U}, {0xC2E9L,1U}, {0xC2E9L,1U}}, {{0xC2E9L,1U}, {0xC2E9L,1U}, {0xC2E9L,1U}}, {{0xC2E9L,1U}, {0xC2E9L,1U}, {0xC2E9L,1U}}}, {{{0xC2E9L,1U}, {0xC2E9L,1U}, {0xC2E9L,1U}}, {{0xC2E9L,1U}, {0xC2E9L,1U}, {0xC2E9L,1U}}, {{0xC2E9L,1U}, {0xC2E9L,1U}, {0xC2E9L,1U}}, {{0xC2E9L,1U}, {0xC2E9L,1U}, {0xC2E9L,1U}}}, {{{0xC2E9L,1U}, {0xC2E9L,1U}, {0xC2E9L,1U}}, {{0xC2E9L,1U}, {0xC2E9L,1U}, {0xC2E9L,1U}}, {{0xC2E9L,1U}, {0xC2E9L,1U}, {0xC2E9L,1U}}, {{0xC2E9L,1U}, {0xC2E9L,1U}, {0xC2E9L,1U}}}};
struct S0 *g_235[1][8] = {{&g_236[0][3][2], &g_236[0][3][2], &g_236[0][3][2], &g_236[0][3][2], &g_236[0][3][2], &g_236[0][3][2], &g_236[0][3][2], &g_236[0][3][2]}};
volatile struct S0 *g_281[10] = {&g_183, &g_183, &g_183, &g_183, &g_183, &g_183, &g_183, &g_183, &g_183, &g_183};
volatile struct S0 **g_280 = &g_281[2];
volatile struct S0 ***g_279 = &g_280;
int8_t g_304 = 0xCCL;
int32_t *** const volatile g_407 = &g_133;
const int32_t *g_605 = &g_33;
const int32_t **g_604 = &g_605;
int32_t g_725 = 0xF19D98F4L;
int32_t g_749 = 0L;



int16_t func_1(void);
int16_t func_7(uint8_t p_8, int32_t p_9, const int8_t p_10);
int32_t * func_11(int32_t * p_12, uint8_t p_13, int32_t p_14, int32_t * p_15);
const uint8_t func_22(int32_t * p_23, int32_t ** p_24, const uint8_t p_25, int32_t p_26);
struct S0 func_29(int32_t * p_30);
const uint8_t func_43(int32_t * const * p_44, const int32_t ** p_45, uint32_t p_46, uint8_t p_47);
int16_t func_85(int32_t * p_86, uint8_t p_87, struct S0 p_88, uint8_t p_89);
int16_t func_92(uint32_t p_93, int32_t ** p_94, int32_t ** p_95, int32_t * p_96, uint8_t p_97);
int32_t func_100(uint64_t p_101);
struct S0 func_102(int32_t * p_103);
# 67 "found/test0033.c"
int16_t func_1(void)
{
    struct S0 **l_747 = &g_235[0][7];
    struct S0 ***l_746 = &l_747;
    int32_t *l_748[6][9][1];
    int64_t l_750 = 0L;
    uint8_t l_751 = 0x61L;
    int i, j, k;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 1; k++)
                l_748[i][j][k] = &g_749;
        }
    }
    l_750 ^= ((safe_div_func_uint64_t_u_u(g_4, (safe_sub_func_int16_t_s_s(func_7(g_16, (**g_604), (0U | g_304)), g_304)))) != (l_746 != &g_280));
    (*g_133) = 0;
    l_751 ^= (0 != (**g_407));
    return g_28[2];
}







int16_t func_7(uint8_t p_8, int32_t p_9, const int8_t p_10)
{
    int32_t *l_21 = &g_18;
    int32_t *l_720 = &g_33;
    struct S0 l_729 = {0U,0xDAL};
    int i;
    (*g_604) = func_11(l_21, p_9, ((*l_21) == ((g_183.f1 <= g_236[0][3][2].f0) < g_81)), func_11(l_720, (g_304 & (safe_sub_func_uint16_t_u_u(((safe_mod_func_uint64_t_u_u((*l_21), g_4)) == (g_725 | (*l_720))), ((safe_sub_func_int64_t_s_s(g_81, g_18)) <= 0x0BBCD5209BD081EELL)))), 1L, (*g_133)));
    for (g_725 = 0; g_725 < 7; g_725 += 4)
    {
        uint64_t l_728 = 0x4977D6AC2BE25CDELL;
        int32_t ***l_741 = &g_133;
        const struct S0 *l_744 = &l_729;
        if (g_28[(uint32_t)(g_725) % 7])
        {
            int64_t l_732 = (-1L);
            int32_t **l_735[10][8][1];
            int i, j, k;
            for (i = 0; i < 10; i++)
            {
                for (j = 0; j < 8; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_735[i][j][k] = 0;
                }
            }
            if (l_732)
                break;
            for (g_16 = 0; (g_16 == 41); g_16 = safe_add_func_int32_t_s_s(g_16, 9))
            {
                int32_t **l_736 = &l_21;
                p_9 |= g_28[(uint32_t)(g_725) % 7];
                for (p_8 = 0; (p_8 == 18); p_8 = safe_add_func_uint32_t_u_u(p_8, 1))
                {
                    return l_728;
                }
            }
            (***l_741) = ((safe_add_func_uint16_t_u_u((&l_735[6][2][0] != l_741), (safe_sub_func_uint64_t_u_u(((*l_720) & g_18), 1U)))) == (p_8 || (l_744 != 0)));
        }
        else
        {
            uint32_t l_745 = 0x11099A93L;
            (*l_21) = (0x73L || l_745);
        }
    }
    return p_9;
}







int32_t * func_11(int32_t * p_12, uint8_t p_13, int32_t p_14, int32_t * p_15)
{
    int32_t *l_17 = &g_18;
    int32_t **l_19 = &l_17;
    int8_t l_20[3] = {1L, 0x75L, 1L};
    int i;
    g_16 |= 0x50DB8561L;
    (*l_19) = l_17;
    for (p_13 = 0; p_13 < 3; p_13 += 1)
    {
        l_20[p_13] = (-3L);
    }
    return p_12;
}







const uint8_t func_22(int32_t * p_23, int32_t ** p_24, const uint8_t p_25, int32_t p_26)
{
    int32_t *l_699 = &g_18;
    struct S0 *l_716[8][3][1];
    int i, j, k;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
                l_716[i][j][k] = &g_236[2][1][0];
        }
    }
    if (((-1L) | g_4))
    {
        int16_t l_27[10][7][1];
        struct S0 * const l_697 = &g_236[0][3][1];
        int32_t **l_703 = &g_40[2][4];
        int i, j, k;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 7; j++)
            {
                for (k = 0; k < 1; k++)
                    l_27[i][j][k] = 0L;
            }
        }
        for (g_16 = 1; g_16 < 10; g_16 += 1)
        {
            for (p_26 = 1; p_26 < 7; p_26 += 7)
            {
                for (g_28[1] = 0; g_28[1] < 1; g_28[1] += 1)
                {
                    struct S0 *l_698 = 0;
                    int32_t *l_700 = &g_33;
                    (***g_279) = (*l_697);
                    return g_33;
                }
            }
        }
        for (g_81 = 0; (g_81 > (-12)); g_81 = safe_sub_func_uint64_t_u_u(g_81, 1))
        {
            int16_t l_704 = 0x9F85L;
            int32_t *l_705 = &g_18;
            (*g_604) = func_11(func_11((*g_133), (*l_699), (+p_25), l_705), g_81, p_26, 0);
        }
        (*p_23) |= (**l_703);
    }
    else
    {
        int32_t * const *l_718 = 0;
        if (((1L == ((*g_605) | ((*p_23) <= (safe_sub_func_uint64_t_u_u((safe_add_func_int32_t_s_s((*p_23), (**g_39))), ((**g_279) != l_716[2][0][0])))))) != (0x92L < 0x3AL)))
        {
            uint32_t l_717 = 1U;
            const int32_t **l_719 = &g_605;
            (*p_23) &= (l_717 < func_43(l_718, l_719, (*l_699), g_304));
            (**g_133) = (*p_23);
        }
        else
        {
            return g_28[1];
        }
    }
    return p_25;
}







struct S0 func_29(int32_t * p_30)
{
    uint32_t l_608 = 4294967287U;
    int32_t *l_609 = &g_18;
    const int32_t **l_656[1][4];
    int16_t l_664 = 0xBB37L;
    struct S0 l_687 = {0x9E07L,1U};
    uint16_t l_692 = 65533U;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_656[i][j] = &g_605;
    }
    for (g_16 = 0; (g_16 != 2); g_16 = safe_add_func_uint8_t_u_u(g_16, 7))
    {
        int32_t l_37 = 9L;
        int32_t *l_38[2][1][6];
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 6; k++)
                    l_38[i][j][k] = &g_18;
            }
        }
        for (g_33 = 0; (g_33 != (-29)); g_33 = safe_sub_func_uint16_t_u_u(g_33, 3))
        {
            int32_t *l_36 = &g_33;
            (*g_39) = p_30;
            if ((*l_36))
                continue;
            (*p_30) |= (*l_36);
            (*p_30) |= ((safe_add_func_int8_t_s_s(g_18, l_608)) && 0x31B0FFAEL);
        }
        for (g_33 = 0; g_33 < 3; g_33 += 1)
        {
            for (l_608 = 2; l_608 < 4; l_608 += 1)
            {
                for (g_81 = 0; g_81 < 3; g_81 += 1)
                {
                    const int32_t l_617 = 0x070BCD9AL;
                    uint8_t l_620 = 1U;
                    uint8_t l_627 = 0x1EL;
                    struct S0 l_638[5] = {{0xF324L,0x22L}, {0xF324L,0x22L}, {0xF324L,0x22L}, {0xF324L,0x22L}, {0xF324L,0x22L}};
                    int8_t l_686 = 0xF7L;
                    int i, j, k;
                }
            }
        }
        (*p_30) |= ((safe_lshift_func_uint8_t_u_u(g_33, (safe_lshift_func_int8_t_s_u((g_183.f1 ^ l_692), ((g_236[0][3][2].f1 && ((*p_30) > g_33)) != (g_81 > g_81)))))) == (g_16 == (safe_sub_func_uint64_t_u_u((*l_609), 18446744073709551610U))));
    }
    return l_687;
}







const uint8_t func_43(int32_t * const * p_44, const int32_t ** p_45, uint32_t p_46, uint8_t p_47)
{
    int32_t l_54 = 0x7BDE5156L;
    struct S0 l_582 = {65535U,246U};
    struct S0 **l_596 = &g_235[0][7];
    struct S0 **l_597[7];
    int i;
    for (i = 0; i < 7; i++)
        l_597[i] = &g_235[0][2];
    for (p_46 = 17; (p_46 <= 45); p_46 = safe_add_func_uint64_t_u_u(p_46, 3))
    {
        int16_t l_57 = 0xCC72L;
        struct S0 **l_585 = &g_235[0][6];
        struct S0 ***l_584 = &l_585;
        int32_t *l_589 = &g_81;
        if ((safe_mod_func_int32_t_s_s((safe_add_func_uint64_t_u_u(l_54, p_46)), (0x5AB171C2502870B1LL && ((l_54 & ((*g_39) == 0)) || (safe_div_func_int16_t_s_s(((g_16 >= l_54) & (l_57 | g_28[3])), (p_47 | p_46))))))))
        {
            int32_t l_63 = 8L;
            const struct S0 ***l_583 = 0;
            if ((safe_unary_minus_func_uint16_t_u(((l_57 > (safe_mul_func_uint16_t_u_u(p_47, g_4))) >= (p_47 == ((safe_lshift_func_int16_t_s_s(l_63, (safe_mod_func_int64_t_s_s(l_54, g_4)))) & (l_57 != (safe_rshift_func_uint8_t_u_s(p_47, 6)))))))))
            {
                int32_t *l_70 = &g_33;
                (*l_70) ^= (safe_add_func_uint16_t_u_u(l_54, g_28[4]));
                for (l_57 = 13; (l_57 == (-17)); l_57 = safe_sub_func_int16_t_s_s(l_57, 8))
                {
                    int i;
                    for (l_63 = 0; l_63 < 7; l_63 += 5)
                    {
                        return p_46;
                    }
                    for (g_33 = 0; (g_33 == 23); g_33 = safe_add_func_uint64_t_u_u(g_33, 1))
                    {
                        int32_t *l_82 = &g_81;
                        (*l_82) = (safe_sub_func_uint8_t_u_u((0 == &g_40[3][3]), (safe_mul_func_int16_t_s_s((l_63 ^ (**g_39)), p_47))));
                        if (g_4)
                            goto lbl_588;
                        return p_46;
                    }
                }
lbl_588:
                (*l_70) = (safe_sub_func_int16_t_s_s(g_28[4], ((!(**g_133)) && (0 == &g_40[2][0]))));
                return (*l_70);
            }
            else
            {
                return g_16;
            }
        }
        else
        {
            const int32_t *l_600 = 0;
            int32_t *l_601 = &g_18;
            int32_t l_603[8] = {0xA33B7725L, 0x8CFC6677L, (-6L), 0x8CFC6677L, 0xA33B7725L, 1L, 0xA33B7725L, 0x8CFC6677L};
            int i, j, k;
            for (g_304 = 0; g_304 < 3; g_304 += 1)
            {
                for (l_57 = 0; l_57 < 4; l_57 += 1)
                {
                    for (g_81 = 1; g_81 < 3; g_81 += 3)
                    {
                        int32_t *l_602[10][9];
                        int i, j;
                        for (i = 0; i < 10; i++)
                        {
                            for (j = 0; j < 9; j++)
                                l_602[i][j] = &g_33;
                        }
                        (*g_133) = func_11(l_589, g_81, (safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(5U, ((safe_rshift_func_int16_t_s_s((g_28[1] != (*l_589)), (g_18 == g_304))) > l_54))), (p_47 && 1U))), func_11(0, ((l_596 != l_597[3]) < (safe_mul_func_uint16_t_u_u((&g_133 == 0), g_236[0][3][2].f0))), g_18, &l_54));
                        (*g_133) = func_11((*g_133), g_33, (0 == l_600), l_601);
                        l_603[1] ^= (*l_589);
                    }
                }
            }
            return p_47;
        }
    }
    return g_4;
}







int16_t func_85(int32_t * p_86, uint8_t p_87, struct S0 p_88, uint8_t p_89)
{
    int32_t **l_512[4][5];
    struct S0 * const *l_526 = &g_235[0][6];
    int32_t *l_532 = &g_18;
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
            l_512[i][j] = &g_40[3][3];
    }
    (*p_86) &= (safe_lshift_func_int16_t_s_s(func_92(func_100(p_88.f0), &g_40[3][3], l_512[1][0], func_11(func_11(p_86, p_87, ((&g_40[3][3] == &p_86) && p_88.f0), (*g_133)), g_4, 0xCA436241L, p_86), g_236[0][3][2].f1), (((!(0x7B642941L && (g_236[0][3][2].f1 || p_89))) ^ (safe_sub_func_uint32_t_u_u(p_88.f0, ((safe_rshift_func_uint16_t_u_s(p_89, 11)) & g_4)))) & (0 == &p_86))));
    for (g_81 = 0; (g_81 >= (-15)); g_81 = safe_sub_func_int16_t_s_s(g_81, 1))
    {
        int32_t *l_527 = &g_81;
        if ((**g_39))
            break;
        for (g_304 = 0; (g_304 > 23); g_304 = safe_add_func_int64_t_s_s(g_304, 1))
        {
            int i, j, k;
        }
        return p_87;
    }
    for (p_88.f1 = 3; p_88.f1 < 8; p_88.f1 += 1)
    {
        for (g_183.f0 = 0; g_183.f0 < 6; g_183.f0 += 1)
        {
            int32_t l_564[5][7][1];
            uint32_t l_581 = 6U;
            int i, j, k;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 7; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_564[i][j][k] = (-6L);
                }
            }
            for (p_89 = 27; (p_89 < 19); p_89 = safe_sub_func_int16_t_s_s(p_89, 3))
            {
                uint32_t l_577 = 0x7BA3A6B2L;
                (*g_133) = p_86;
                for (p_88.f0 = (-6); (p_88.f0 != 57); p_88.f0 = safe_add_func_int32_t_s_s(p_88.f0, 1))
                {
                    struct S0 **l_548 = &g_235[0][6];
                    struct S0 ***l_547[1][4][9];
                    int32_t l_574 = (-1L);
                    uint8_t l_578 = 0xEEL;
                    int32_t ***l_579 = &l_512[1][0];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 4; j++)
                        {
                            for (k = 0; k < 9; k++)
                                l_547[i][j][k] = &l_548;
                        }
                    }
                    if ((6U || (safe_add_func_uint32_t_u_u((0 == l_547[0][0][0]), (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(g_28[1], g_18)), 0)) || 0U), 2))))))
                    {
                        int i;
                        for (p_89 = 3; p_89 < 10; p_89 += 3)
                        {
                            int16_t l_563 = 0xE39CL;
                            (*p_86) &= (safe_lshift_func_uint8_t_u_u(255U, p_88.f1));
                            (*g_133) = func_11(p_86, g_304, ((p_87 > 0x605D7226BE9E7426LL) > (safe_mod_func_int32_t_s_s((*p_86), (safe_mod_func_int8_t_s_s((l_563 >= (l_564[2][1][0] != p_88.f1)), p_88.f1))))), p_86);
                            p_86 = p_86;
                        }
                    }
                    else
                    {
                        uint32_t l_567 = 0x6AB611BEL;
                        (**l_526) = (**g_280);
                        for (p_89 = (-28); (p_89 < 6); p_89 = safe_add_func_uint16_t_u_u(p_89, 1))
                        {
                            uint8_t l_568 = 0x65L;
                            (*p_86) |= (*p_86);
                            (**g_133) ^= l_567;
                            (*p_86) &= l_568;
                            (**g_133) |= (safe_unary_minus_func_int16_t_s(((safe_div_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(l_574, ((safe_mod_func_uint16_t_u_u(p_88.f0, p_89)) >= p_89))), (-1L))) >= (p_87 & ((*l_532) != ((~g_4) | l_564[1][0][0]))))));
                        }
                    }
                    (**g_132) = func_11((**g_132), p_88.f0, l_577, (*g_133));
                    if (l_578)
                        continue;
                    (*l_579) = &g_40[(p_88.f1) % 8][(g_183.f0) % 6];
                }
                if ((*p_86))
                {
                    return p_88.f1;
                }
                else
                {
                    int i, j;
                    for (g_81 = 0; g_81 < 1; g_81 += 1)
                    {
                        for (p_89 = 6; p_89 < 8; p_89 += 8)
                        {
                            uint8_t l_580 = 0xCDL;
                            l_580 = 4L;
                        }
                    }
                    (*p_86) &= func_100(p_89);
                    (*p_86) = (***g_407);
                }
            }
            (**g_39) = (*l_532);
            (***g_132) |= l_581;
            for (g_16 = 0; g_16 < 5; g_16 += 1)
            {
                for (g_81 = 0; g_81 < 7; g_81 += 1)
                {
                    for (g_33 = 0; g_33 < 1; g_33 += 1)
                    {
                        l_564[g_16][g_81][g_33] = 1L;
                    }
                }
            }
        }
    }
    return p_88.f1;
}







int16_t func_92(uint32_t p_93, int32_t ** p_94, int32_t ** p_95, int32_t * p_96, uint8_t p_97)
{
    int16_t l_328 = 0xFFEAL;
    struct S0 * const *l_333 = &g_235[0][6];
    int32_t *l_340 = &g_18;
    int32_t l_369 = 0L;
    int16_t l_394 = 0L;
    uint16_t l_429 = 0x8F6AL;
    (*p_96) = (*p_96);
    if ((safe_rshift_func_int8_t_s_s(g_16, (func_100((func_100(l_328) > (safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s((*p_96), l_328)), (g_236[0][3][2].f1 | g_304))))) != (!g_81)))))
    {
        int32_t * const l_341 = &g_81;
        uint16_t l_397 = 0x17A7L;
        int32_t **l_409 = &g_40[3][3];
        int32_t *l_414 = &g_81;
        int i, j;
        for (g_16 = 0; g_16 < 1; g_16 += 1)
        {
            for (g_81 = 0; g_81 < 8; g_81 += 5)
            {
                uint64_t l_334 = 0x061E384F033530B6LL;
                uint32_t l_335 = 1U;
                int8_t l_342 = (-9L);
                int16_t l_354 = 0xE123L;
                struct S0 ** const l_372 = &g_235[(g_16) % 1][(uint32_t)(g_81) % 8];
                int32_t *l_385 = 0;
                const int32_t *l_387 = &g_33;
                int64_t l_413 = 0x5B7F2A978DFC9188LL;
                l_334 = (0 != l_333);
            }
        }
        (*p_96) = (safe_lshift_func_int8_t_s_u(0x56L, (safe_rshift_func_int8_t_s_u((((safe_mod_func_uint8_t_u_u(func_100((*l_340)), (safe_sub_func_int64_t_s_s((*l_340), g_16)))) | (safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(p_93, 5)), (p_97 == l_429)))) && p_93), g_16))));
        for (g_33 = (-17); (g_33 == 8); g_33 = safe_add_func_uint64_t_u_u(g_33, 1))
        {
            uint16_t l_432 = 0xC05EL;
            uint32_t l_443[8][1];
            int i, j;
            for (i = 0; i < 8; i++)
            {
                for (j = 0; j < 1; j++)
                    l_443[i][j] = 6U;
            }
        }
        return g_33;
    }
    else
    {
        int64_t l_446 = (-9L);
        int32_t *l_449 = &g_18;
        uint8_t l_488 = 1U;
        for (l_429 = (-19); (l_429 == 38); l_429 = safe_add_func_int8_t_s_s(l_429, 2))
        {
            uint32_t l_464 = 0x8FBD4BF0L;
            int32_t l_476 = 0x3DEE22F1L;
        }
        if ((*l_449))
        {
            (**g_133) = func_100((safe_sub_func_uint8_t_u_u((~(safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(0L, (*l_340))), 6))), ((-1L) == p_93))));
        }
        else
        {
            return g_4;
        }
        return g_18;
    }
}







int32_t func_100(uint64_t p_101)
{
    struct S0 l_326[9][6] = {{{1U,0xABL}, {1U,0xABL}, {1U,0xABL}, {1U,0xABL}, {1U,0xABL}, {1U,0xABL}}, {{1U,0xABL}, {1U,0xABL}, {1U,0xABL}, {1U,0xABL}, {1U,0xABL}, {1U,0xABL}}, {{1U,0xABL}, {1U,0xABL}, {1U,0xABL}, {1U,0xABL}, {1U,0xABL}, {1U,0xABL}}, {{1U,0xABL}, {1U,0xABL}, {1U,0xABL}, {1U,0xABL}, {1U,0xABL}, {1U,0xABL}}, {{1U,0xABL}, {1U,0xABL}, {1U,0xABL}, {1U,0xABL}, {1U,0xABL}, {1U,0xABL}}, {{1U,0xABL}, {1U,0xABL}, {1U,0xABL}, {1U,0xABL}, {1U,0xABL}, {1U,0xABL}}, {{1U,0xABL}, {1U,0xABL}, {1U,0xABL}, {1U,0xABL}, {1U,0xABL}, {1U,0xABL}}, {{1U,0xABL}, {1U,0xABL}, {1U,0xABL}, {1U,0xABL}, {1U,0xABL}, {1U,0xABL}}, {{1U,0xABL}, {1U,0xABL}, {1U,0xABL}, {1U,0xABL}, {1U,0xABL}, {1U,0xABL}}};
    int64_t l_327[4];
    int i, j;
    for (i = 0; i < 4; i++)
        l_327[i] = (-2L);
    (**g_280) = l_326[4][4];
    (**g_133) = p_101;
    return l_327[3];
}







struct S0 func_102(int32_t * p_103)
{
    const uint64_t l_104 = 0x9708E63FEEA102A8LL;
    int32_t *l_115 = &g_81;
    struct S0 l_117 = {1U,250U};
    int32_t ***l_143 = 0;
    int32_t * const *l_170 = &g_40[0][5];
    int32_t * const **l_169 = &l_170;
    uint32_t l_192 = 0U;
    (*p_103) |= l_104;
    return (**g_280);
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_28[i], "g_28[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_183.f0, "g_183.f0", print_hash_value);
    transparent_crc(g_183.f1, "g_183.f1", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_236[i][j][k].f0, "g_236[i][j][k].f0", print_hash_value);
                transparent_crc(g_236[i][j][k].f1, "g_236[i][j][k].f1", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_304, "g_304", print_hash_value);
    transparent_crc(g_725, "g_725", print_hash_value);
    transparent_crc(g_749, "g_749", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL);
    return 0;
}
