# 1 "found/test0028.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "found/test0028.c"
# 10 "found/test0028.c"
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
# 11 "found/test0028.c" 2


long __undefined;


struct S0 {
   uint16_t f0;
   volatile int32_t f1;
};


int32_t g_2 = 0x825E7A66L;
volatile int32_t g_7 = 0x40FC0272L;
int32_t g_29[9] = {4L, 1L, 4L, 1L, 4L, 1L, 4L, 1L, 4L};
struct S0 g_34 = {0x8E48L,0x92891F43L};
struct S0 g_54 = {0xFC6EL,1L};
struct S0 g_89 = {1U,0x451CF616L};
struct S0 * const volatile g_90 = &g_89;
volatile int32_t * volatile * volatile g_96 = 0;
int32_t * const volatile g_128 = &g_29[7];
int32_t * volatile g_160 = &g_29[3];
int32_t g_183 = 5L;
struct S0 g_200 = {0x9E29L,0x5A46D666L};
struct S0 *g_209 = &g_89;
int32_t *g_238[3] = {&g_29[4], &g_29[4], &g_29[4]};
int32_t ** volatile g_237 = &g_238[1];
struct S0 **g_241 = &g_209;
int32_t ** volatile g_243 = 0;
int32_t ** volatile g_244 = &g_238[0];
uint16_t g_259 = 3U;
const volatile struct S0 g_260 = {0x638FL,0x2CE6A807L};
const struct S0 g_273 = {0xF208L,0L};
int32_t ** volatile g_275 = &g_238[1];
const int32_t *g_278[6][5] = {{&g_183, &g_183, &g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183, &g_183, &g_183}};
const int32_t ** volatile g_277 = &g_278[2][0];
struct S0 g_436 = {0xE70CL,0x485A7D7BL};
volatile struct S0 g_512[10][8][1] = {{{{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}}, {{{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}}, {{{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}}, {{{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}}, {{{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}}, {{{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}}, {{{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}}, {{{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}}, {{{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}}, {{{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}, {{65530U,-2L}}}};
struct S0 g_581 = {0x004AL,0xA40AB474L};
struct S0 g_595 = {1U,0x83353D7DL};
struct S0 * const *g_611 = &g_209;
struct S0 * const ** const volatile g_610 = &g_611;
int32_t * volatile g_613[7][6] = {{0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0}};
int32_t * volatile g_614 = 0;
int32_t * volatile g_615 = &g_29[8];
struct S0 g_630[3] = {{0x9433L,1L}, {0x9433L,1L}, {0x9433L,1L}};
struct S0 g_640 = {0xA72EL,-1L};
int32_t * volatile g_674 = &g_183;
const struct S0 g_685 = {0xD988L,0x886E9F35L};
struct S0 g_698[6][1] = {{{0x5D95L,1L}}, {{0x5D95L,1L}}, {{0x5D95L,1L}}, {{0x5D95L,1L}}, {{0x5D95L,1L}}, {{0x5D95L,1L}}};
struct S0 g_718 = {0xEB76L,0L};
const volatile struct S0 g_722 = {0U,-3L};
struct S0 g_742[10][2][1] = {{{{0x5981L,-1L}}, {{0x5981L,-1L}}}, {{{0x5981L,-1L}}, {{0x5981L,-1L}}}, {{{0x5981L,-1L}}, {{0x5981L,-1L}}}, {{{0x5981L,-1L}}, {{0x5981L,-1L}}}, {{{0x5981L,-1L}}, {{0x5981L,-1L}}}, {{{0x5981L,-1L}}, {{0x5981L,-1L}}}, {{{0x5981L,-1L}}, {{0x5981L,-1L}}}, {{{0x5981L,-1L}}, {{0x5981L,-1L}}}, {{{0x5981L,-1L}}, {{0x5981L,-1L}}}, {{{0x5981L,-1L}}, {{0x5981L,-1L}}}};
const struct S0 *g_757 = &g_698[0][0];
const struct S0 ** volatile g_756 = &g_757;
volatile int32_t * volatile g_770 = &g_7;
volatile struct S0 g_797 = {0x2B24L,0x3BCF01B0L};
volatile struct S0 g_832 = {65531U,-1L};
int32_t ** volatile g_850 = 0;
int32_t ** volatile g_861[6][8][1] = {{{&g_238[2]}, {&g_238[2]}, {&g_238[2]}, {&g_238[2]}, {&g_238[2]}, {&g_238[2]}, {&g_238[2]}, {&g_238[2]}}, {{&g_238[2]}, {&g_238[2]}, {&g_238[2]}, {&g_238[2]}, {&g_238[2]}, {&g_238[2]}, {&g_238[2]}, {&g_238[2]}}, {{&g_238[2]}, {&g_238[2]}, {&g_238[2]}, {&g_238[2]}, {&g_238[2]}, {&g_238[2]}, {&g_238[2]}, {&g_238[2]}}, {{&g_238[2]}, {&g_238[2]}, {&g_238[2]}, {&g_238[2]}, {&g_238[2]}, {&g_238[2]}, {&g_238[2]}, {&g_238[2]}}, {{&g_238[2]}, {&g_238[2]}, {&g_238[2]}, {&g_238[2]}, {&g_238[2]}, {&g_238[2]}, {&g_238[2]}, {&g_238[2]}}, {{&g_238[2]}, {&g_238[2]}, {&g_238[2]}, {&g_238[2]}, {&g_238[2]}, {&g_238[2]}, {&g_238[2]}, {&g_238[2]}}};
uint64_t g_900 = 0x698A7F41DF0044B4LL;
struct S0 *** const volatile g_902 = &g_241;
struct S0 g_919 = {0x000CL,2L};



int32_t func_1(void);
int32_t func_10(uint8_t p_11, int8_t p_12, int8_t p_13, int8_t p_14);
int32_t func_16(int32_t p_17, uint64_t p_18, int64_t p_19, uint8_t p_20);
int32_t * func_21(int32_t * p_22, uint64_t p_23, uint32_t p_24, const uint32_t p_25);
int32_t func_32(int32_t ** p_33);
struct S0 func_45(int64_t p_46);
int32_t * func_58(int16_t p_59, const int32_t ** p_60, int32_t p_61, int32_t * p_62, uint8_t p_63);
int32_t * func_71(uint64_t p_72, uint64_t p_73, struct S0 * p_74);
int32_t * func_77(int8_t p_78);
int32_t func_83(int32_t p_84, uint32_t p_85, int8_t p_86);
# 94 "found/test0028.c"
int32_t func_1(void)
{
    uint32_t l_5 = 4294967295U;
    int32_t *l_842[4][4][4];
    int8_t l_875 = 0xADL;
    int8_t l_887 = 0x28L;
    struct S0 *l_918 = &g_919;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
                l_842[i][j][k] = &g_183;
        }
    }
    for (g_2 = 13; (g_2 > 15); g_2 = safe_add_func_uint32_t_u_u(g_2, 1))
    {
        uint8_t l_839 = 0xE4L;
        int32_t *l_849 = &g_29[6];
        uint8_t l_873[9] = {255U, 8U, 2U, 2U, 8U, 255U, 8U, 2U, 2U};
        int16_t l_905 = (-1L);
        int i;
        if (l_5)
        {
            uint8_t l_6[9][6];
            int32_t l_9[9] = {0x4C3F4F88L, 0x4C3F4F88L, 0x0D018D30L, 0x4C3F4F88L, 0x4C3F4F88L, 0x0D018D30L, 0x4C3F4F88L, 0x4C3F4F88L, 0x0D018D30L};
            int32_t *l_863 = &l_9[8];
            struct S0 **l_901 = &g_209;
            int i, j;
            for (i = 0; i < 9; i++)
            {
                for (j = 0; j < 6; j++)
                    l_6[i][j] = 255U;
            }
            for (l_5 = 4; l_5 < 9; l_5 += 4)
            {
                for (g_7 = 0; g_7 < 6; g_7 += 6)
                {
                    uint64_t l_8[6][5] = {{18446744073709551612U, 0x6F084217059141A9LL, 18446744073709551612U, 0x6F084217059141A9LL, 18446744073709551612U}, {18446744073709551612U, 0x6F084217059141A9LL, 18446744073709551612U, 0x6F084217059141A9LL, 18446744073709551612U}, {18446744073709551612U, 0x6F084217059141A9LL, 18446744073709551612U, 0x6F084217059141A9LL, 18446744073709551612U}, {18446744073709551612U, 0x6F084217059141A9LL, 18446744073709551612U, 0x6F084217059141A9LL, 18446744073709551612U}, {18446744073709551612U, 0x6F084217059141A9LL, 18446744073709551612U, 0x6F084217059141A9LL, 18446744073709551612U}, {18446744073709551612U, 0x6F084217059141A9LL, 18446744073709551612U, 0x6F084217059141A9LL, 18446744073709551612U}};
                    int i, j;
                    l_9[8] ^= ((g_7 <= l_8[4][4]) < (g_2 > (0x4D03L ^ g_2)));
                    if ((**g_275))
                    {
                        return l_6[((l_5 + 2)) % 9][(uint32_t)(g_7) % 6];
                    }
                    else
                    {
                        int32_t *l_852 = &g_183;
                        int i, j, k;
                        (*g_237) = l_849;
                        for (g_581.f0 = 8; g_581.f0 < 10; g_581.f0 += 1)
                        {
                            for (g_89.f1 = 1; g_89.f1 < 8; g_89.f1 += 7)
                            {
                                for (g_832.f1 = 0; g_832.f1 < 1; g_832.f1 += 1)
                                {
                                    int32_t **l_851[2][10][5];
                                    int i, j, k;
                                    for (i = 0; i < 2; i++)
                                    {
                                        for (j = 0; j < 10; j++)
                                        {
                                            for (k = 0; k < 5; k++)
                                                l_851[i][j][k] = 0;
                                        }
                                    }
                                    (*g_277) = l_842[0][3][0];
                                    l_852 = l_849;
                                }
                            }
                        }
                        (**g_611) = (**g_756);
                    }
                }
            }
            for (g_595.f0 = 0; (g_595.f0 != 36); g_595.f0 = safe_add_func_int64_t_s_s(g_595.f0, 1))
            {
                uint64_t l_857 = 0xDA26A9653904E5E4LL;
                const int32_t **l_866 = &g_278[2][0];
                int16_t l_874 = 0xA60EL;
                struct S0 **l_891 = &g_209;
                uint32_t l_912 = 0xAA947EE7L;
                for (g_54.f0 = 0; (g_54.f0 > 7); g_54.f0 = safe_add_func_uint64_t_u_u(g_54.f0, 1))
                {
                    const int32_t *l_865 = 0;
                    uint16_t l_876[4] = {2U, 0xD10EL, 2U, 0xD10EL};
                    int32_t l_886 = 3L;
                    int16_t l_888[6][1];
                    int64_t l_894 = 0x7FA0A190729D914CLL;
                    int64_t l_899[7] = {(-10L), (-7L), (-10L), (-7L), (-10L), (-7L), (-10L)};
                    int i, j;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_888[i][j] = 1L;
                    }
                }
            }
            for (g_200.f0 = 0; (g_200.f0 == 4); g_200.f0 = safe_add_func_uint64_t_u_u(g_200.f0, 8))
            {
                int32_t **l_920 = &l_863;
                (*l_920) = func_71(g_436.f0, g_7, l_918);
            }
        }
        else
        {
            for (g_581.f1 = 0; g_581.f1 < 3; g_581.f1 += 1)
            {
                struct S0 tmp = {0x17AFL,0xF678EB10L};
                g_630[g_581.f1] = tmp;
            }
            (*l_849) ^= (safe_div_func_uint32_t_u_u(g_273.f1, (g_54.f0 ^ 0x1D01299774314A0ELL)));
            (**g_611) = (*g_209);
        }
        (*l_849) = (safe_mul_func_int16_t_s_s((*l_849), (*l_849)));
    }
    return (*g_615);
}







int32_t func_10(uint8_t p_11, int8_t p_12, int8_t p_13, int8_t p_14)
{
    int8_t l_15[10][10] = {{(-8L), 1L, 0x14L, 1L, (-8L), 1L, 0x14L, 1L, (-8L), 1L}, {(-8L), 1L, 0x14L, 1L, (-8L), 1L, 0x14L, 1L, (-8L), 1L}, {(-8L), 1L, 0x14L, 1L, (-8L), 1L, 0x14L, 1L, (-8L), 1L}, {(-8L), 1L, 0x14L, 1L, (-8L), 1L, 0x14L, 1L, (-8L), 1L}, {(-8L), 1L, 0x14L, 1L, (-8L), 1L, 0x14L, 1L, (-8L), 1L}, {(-8L), 1L, 0x14L, 1L, (-8L), 1L, 0x14L, 1L, (-8L), 1L}, {(-8L), 1L, 0x14L, 1L, (-8L), 1L, 0x14L, 1L, (-8L), 1L}, {(-8L), 1L, 0x14L, 1L, (-8L), 1L, 0x14L, 1L, (-8L), 1L}, {(-8L), 1L, 0x14L, 1L, (-8L), 1L, 0x14L, 1L, (-8L), 1L}, {(-8L), 1L, 0x14L, 1L, (-8L), 1L, 0x14L, 1L, (-8L), 1L}};
    int32_t l_721 = (-8L);
    struct S0 *l_741 = &g_742[8][1][0];
    int32_t *l_779[4];
    int i, j;
    for (i = 0; i < 4; i++)
        l_779[i] = &l_721;
    for (p_11 = 0; p_11 < 10; p_11 += 4)
    {
        for (g_7 = 0; g_7 < 10; g_7 += 4)
        {
            uint32_t l_719 = 0x7DCD3ABDL;
            int32_t *l_738 = &g_29[5];
            struct S0 **l_749 = &g_209;
            struct S0 *l_808 = 0;
            uint64_t l_818 = 0x7BECC1E634E2971BLL;
            const int32_t **l_833 = 0;
            int i, j;
            for (p_12 = 3; p_12 < 10; p_12 += 1)
            {
                for (g_2 = 7; g_2 < 10; g_2 += 1)
                {
                    int16_t l_720[7] = {1L, 0xCA5AL, 0xA1E8L, 0xCA5AL, 1L, (-1L), 1L};
                    int32_t **l_734 = &g_238[1];
                    int i;
                    l_721 ^= l_15[(uint8_t)(p_12) % 10][(uint32_t)(g_2) % 10];
                    (**g_241) = g_722;
                }
            }
            for (g_2 = (-16); (g_2 >= 29); g_2 = safe_add_func_uint16_t_u_u(g_2, 1))
            {
                int32_t l_782 = 0L;
                int32_t **l_806 = &l_738;
                int32_t l_807 = 0x777CFBB9L;
                const int32_t l_815 = (-3L);
                struct S0 *l_834 = 0;
                int32_t **l_838 = 0;
                for (l_719 = 18; (l_719 <= 33); l_719 = safe_add_func_uint8_t_u_u(l_719, 3))
                {
                    int32_t l_787 = 0xAD6E3870L;
                    int32_t l_788 = 5L;
                    int32_t l_819[3][6] = {{5L, 0xC8F25B84L, 5L, 0xC8F25B84L, 5L, 0xC8F25B84L}, {5L, 0xC8F25B84L, 5L, 0xC8F25B84L, 5L, 0xC8F25B84L}, {5L, 0xC8F25B84L, 5L, 0xC8F25B84L, 5L, 0xC8F25B84L}};
                    uint64_t l_821 = 1U;
                    int i, j;
                }
                if (((*l_738) < (+0xE47DL)))
                {
                    uint32_t l_825 = 0x3E142894L;
                    uint32_t l_830[8] = {1U, 7U, 0x1498D79AL, 7U, 1U, 0x99D0C57EL, 1U, 7U};
                    int32_t l_831 = 0x232DBBB2L;
                    int i;
                    (*l_806) = func_71(0x588701BE0649A8FALL, l_825, 0);
                    if (g_2)
                        goto lbl_835;
                    l_830[1] &= ((safe_lshift_func_uint16_t_u_s((p_11 >= (g_640.f1 ^ p_12)), 5)) <= (safe_div_func_int64_t_s_s((0U | (**l_806)), (~0x16E80BBB103985E2LL))));
                    l_831 = (!0L);
                    (**l_749) = g_832;
                }
                else
                {
                    return p_13;
                }
lbl_835:
                (*l_806) = &l_721;
                (**l_806) &= (safe_lshift_func_int16_t_s_s(0x79A1L, (l_838 == &l_779[1])));
            }
        }
    }
    return (**g_237);
}







int32_t func_16(int32_t p_17, uint64_t p_18, int64_t p_19, uint8_t p_20)
{
    int32_t *l_710 = &g_29[4];
    uint64_t l_711 = 18446744073709551607U;
    int32_t **l_716[7][7];
    struct S0 *l_717 = &g_718;
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
            l_716[i][j] = &g_238[2];
    }
    (*g_244) = func_21(l_710, p_20, g_640.f0, func_83(g_200.f1, ((l_711 ^ p_19) == (safe_sub_func_uint16_t_u_u(((safe_div_func_uint64_t_u_u((*l_710), g_581.f0)) > p_17), p_17))), (5U >= 65535U)));
    (*g_244) = func_71(func_32(&l_710), p_17, l_717);
    return (**g_244);
}







int32_t * func_21(int32_t * p_22, uint64_t p_23, uint32_t p_24, const uint32_t p_25)
{
    int32_t **l_26 = 0;
    int32_t *l_28 = &g_2;
    int32_t **l_27 = &l_28;
    int i;
    (*l_27) = &g_2;
    for (p_23 = 0; p_23 < 9; p_23 += 9)
    {
        for (p_24 = 19; (p_24 >= 15); p_24 = safe_sub_func_uint8_t_u_u(p_24, 1))
        {
            int i;
            (*l_27) = 0;
        }
    }
    return (*g_244);
}







int32_t func_32(int32_t ** p_33)
{
    struct S0 *l_35 = &g_34;
    int32_t l_36 = 0x83DE7690L;
    int32_t l_663[4][9][1];
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 1; k++)
                l_663[i][j][k] = 0xB761A982L;
        }
    }
    (*l_35) = g_34;
    l_36 ^= g_34.f1;
    for (l_36 = (-10); (l_36 != (-26)); l_36 = safe_sub_func_uint8_t_u_u(l_36, 1))
    {
        int64_t l_39 = 0x5D3E8EA471603728LL;
        struct S0 **l_641 = &g_209;
        int32_t l_654 = (-1L);
        if (l_39)
            break;
        for (g_34.f0 = 3; (g_34.f0 > 54); g_34.f0 = safe_add_func_uint32_t_u_u(g_34.f0, 8))
        {
            int16_t l_42 = (-3L);
            int32_t l_645 = 0xD6E7B456L;
            if (((l_39 && 0x56A96DADL) & l_42))
            {
                int i;
                for (l_42 = 0; (l_42 == 18); l_42 = safe_add_func_int64_t_s_s(l_42, 1))
                {
                    int8_t l_637 = 0L;
                    if (g_34.f1)
                        break;
                    (**g_611) = g_640;
                }
                for (l_42 = 1; l_42 < 3; l_42 += 1)
                {
                    int i;
                }
            }
            else
            {
                int64_t l_650 = (-1L);
                int32_t l_652 = 0xE2743C9BL;
                int32_t l_653 = 0x35FBDE6BL;
                l_645 = (safe_mod_func_int16_t_s_s((p_33 != p_33), l_39));
                if ((func_83((safe_sub_func_uint16_t_u_u(func_83((safe_mod_func_int8_t_s_s(l_36, (l_36 ^ l_42))), l_39, g_273.f0), l_39)), 5U, l_36) < ((l_36 && l_645) >= l_36)))
                {
                    int32_t *l_651[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_651[i] = &g_183;
                    l_652 |= (l_39 < func_83(l_42, (func_83(g_273.f0, l_650, g_595.f1) < 0x2FF4L), l_39));
                    l_653 ^= l_36;
                    l_654 &= (~l_42);
                }
                else
                {
                    for (l_645 = 0; (l_645 != (-24)); l_645 = safe_sub_func_int8_t_s_s(l_645, 1))
                    {
                        int32_t *l_659 = &g_2;
                        (*l_659) &= (safe_mul_func_int16_t_s_s(((*p_33) == 0), 65535U));
                    }
                    return l_650;
                }
            }
        }
    }
    if (func_83(l_663[2][6][0], g_200.f1, g_2))
    {
        int32_t l_691 = 0L;
        int i;
        for (g_581.f0 = 0; g_581.f0 < 3; g_581.f0 += 1)
        {
            struct S0 *l_669[3];
            int32_t l_672[3][9][1];
            uint32_t l_673 = 0U;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_669[i] = 0;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 9; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_672[i][j][k] = (-3L);
                }
            }
            l_669[2] = (*g_241);
            (*g_674) = (l_36 & ((safe_div_func_int8_t_s_s(l_672[2][4][0], (func_83(l_673, g_29[8], g_34.f0) || l_673))) & 3U));
        }
        for (g_259 = 0; (g_259 == 35); g_259 = safe_add_func_int64_t_s_s(g_259, 1))
        {
            const struct S0 *l_684 = &g_685;
            const struct S0 * const *l_683 = &l_684;
            int32_t l_690 = (-2L);
            int8_t l_692 = 0x9EL;
            struct S0 *l_697 = &g_698[1][0];
            struct S0 ** const *l_707 = &g_241;
            uint32_t l_708 = 4294967287U;
            l_691 = (safe_rshift_func_uint16_t_u_u(g_640.f0, (0xB8834E9AL == (((*g_244) != g_238[(g_581.f0) % 3]) >= (safe_mod_func_int16_t_s_s((safe_div_func_int64_t_s_s((l_683 == &l_35), l_663[3][8][0])), (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(l_663[3][8][0], 7)), (l_690 != l_690)))))))));
            (*p_33) = func_58(g_29[5], &g_278[2][0], l_692, func_71(((safe_lshift_func_int16_t_s_u(1L, ((g_34.f1 & g_595.f0) != (safe_mul_func_uint16_t_u_u(l_36, l_692))))) > g_436.f0), l_663[3][6][0], l_697), (((l_690 != l_663[3][8][0]) > ((safe_add_func_uint64_t_u_u((g_183 < l_36), l_663[3][8][0])) <= ((safe_rshift_func_uint8_t_u_s(g_273.f0, g_183)) | (g_685.f0 ^ g_640.f0)))) == ((l_692 & (l_691 ^ l_690)) > g_436.f0)));
            (*g_209) = func_45((safe_mul_func_int16_t_s_s(((safe_div_func_uint64_t_u_u(0x0A9FB29B4FE453BFLL, func_83(g_260.f1, l_663[1][8][0], (l_663[3][8][0] != l_692)))) & ((&g_241 == l_707) || ((l_663[3][8][0] || l_691) && l_708))), g_698[1][0].f0)));
        }
        return l_663[3][8][0];
    }
    else
    {
        int32_t *l_709 = &g_183;
        int i;
        for (g_436.f0 = 8; g_436.f0 < 9; g_436.f0 += 1)
        {
            (*g_241) = 0;
        }
        (*l_709) &= func_83(l_663[1][3][0], g_200.f0, g_89.f0);
    }
    return l_663[0][8][0];
}







struct S0 func_45(int64_t p_46)
{
    int8_t l_520 = 0L;
    int32_t l_545[6][4] = {{0x8F4922FBL, 0x8F4922FBL, (-1L), 0x8F4922FBL}, {0x8F4922FBL, 0x8F4922FBL, (-1L), 0x8F4922FBL}, {0x8F4922FBL, 0x8F4922FBL, (-1L), 0x8F4922FBL}, {0x8F4922FBL, 0x8F4922FBL, (-1L), 0x8F4922FBL}, {0x8F4922FBL, 0x8F4922FBL, (-1L), 0x8F4922FBL}, {0x8F4922FBL, 0x8F4922FBL, (-1L), 0x8F4922FBL}};
    int32_t l_591 = 0x5BB4543EL;
    int32_t *l_612 = &g_2;
    uint32_t l_626 = 4294967295U;
    int32_t l_627 = 0x758EF842L;
    int32_t *l_628[4];
    uint16_t l_629 = 0x4A19L;
    int i, j;
    for (i = 0; i < 4; i++)
        l_628[i] = &l_545[5][1];
    for (g_2 = 0; (g_2 > 0); g_2 = safe_add_func_uint64_t_u_u(g_2, 9))
    {
        uint16_t l_57 = 0xBC12L;
        const int32_t **l_511 = &g_278[4][2];
        int32_t *l_521 = &g_2;
        uint32_t l_527 = 6U;
        uint32_t l_565[9][8] = {{4294967295U, 4294967295U, 1U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U}, {4294967295U, 4294967295U, 1U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U}, {4294967295U, 4294967295U, 1U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U}, {4294967295U, 4294967295U, 1U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U}, {4294967295U, 4294967295U, 1U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U}, {4294967295U, 4294967295U, 1U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U}, {4294967295U, 4294967295U, 1U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U}, {4294967295U, 4294967295U, 1U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U}, {4294967295U, 4294967295U, 1U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U}};
        struct S0 ** const l_609 = 0;
        int i, j;
        if ((safe_mul_func_int16_t_s_s(((+p_46) >= p_46), g_34.f0)))
        {
            uint16_t l_510 = 65535U;
            if (p_46)
            {
                int32_t *l_53 = &g_29[0];
                (*l_53) ^= (safe_div_func_int8_t_s_s(p_46, p_46));
            }
            else
            {
                int i;
                for (g_34.f0 = 0; g_34.f0 < 9; g_34.f0 += 6)
                {
                    return g_54;
                }
            }
            if (g_2)
                break;
            for (g_54.f0 = 8; (g_54.f0 == 19); g_54.f0 = safe_add_func_int16_t_s_s(g_54.f0, 1))
            {
                if (l_57)
                    break;
            }
            (*l_511) = (*g_275);
        }
        else
        {
            int8_t l_513[8];
            const int32_t **l_514 = &g_278[4][1];
            int32_t *l_519 = &g_29[5];
            int i;
            for (i = 0; i < 8; i++)
                l_513[i] = 0xE2L;
            (**g_241) = g_512[6][0][0];
            (*l_514) = (*l_511);
            (*l_519) = (safe_rshift_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(g_260.f0, g_34.f0)) ^ g_54.f0), g_200.f0));
            (*g_277) = (*l_514);
        }
        for (g_436.f0 = 0; g_436.f0 < 9; g_436.f0 += 1)
        {
            if (p_46)
                break;
        }
    }
    (*l_612) ^= p_46;
    (*g_615) &= (*l_612);
    l_629 ^= (p_46 ^ (safe_rshift_func_uint8_t_u_s(func_83((safe_div_func_int64_t_s_s(((safe_add_func_int64_t_s_s(p_46, g_436.f1)) < (safe_add_func_int32_t_s_s(p_46, (*l_612)))), (safe_add_func_int64_t_s_s(0L, (l_626 <= l_627))))), ((&g_238[0] == 0) && p_46), g_29[2]), (*l_612))));
    return g_630[2];
}







int32_t * func_58(int16_t p_59, const int32_t ** p_60, int32_t p_61, int32_t * p_62, uint8_t p_63)
{
    uint64_t l_502 = 1U;
    int32_t *l_509 = &g_29[1];
    for (p_59 = 0; (p_59 <= (-13)); p_59 = safe_sub_func_int8_t_s_s(p_59, 1))
    {
        struct S0 *l_506 = 0;
        const int32_t *l_507 = &g_29[0];
lbl_508:
        for (g_2 = 0; (g_2 == 25); g_2 = safe_add_func_uint16_t_u_u(g_2, 1))
        {
            struct S0 *l_68 = &g_54;
            int32_t l_505 = 0x544A2A81L;
            if (g_34.f1)
            {
                (*p_62) ^= (0 == l_68);
                (*p_62) |= (-10L);
            }
            else
            {
                if (g_7)
                    break;
            }
            for (p_61 = 0; (p_61 > 13); p_61 = safe_add_func_int64_t_s_s(p_61, 1))
            {
                (*l_68) = g_54;
                (*g_237) = func_71((safe_rshift_func_uint16_t_u_u((func_83(func_83(l_502, p_59, p_61), p_63, (safe_add_func_uint64_t_u_u(g_183, p_59))) < p_63), g_273.f0)), l_505, l_506);
                l_507 = (*p_60);
                if ((**g_244))
                    break;
            }
            if (g_89.f0)
                goto lbl_508;
        }
        (*p_60) = (*p_60);
        return l_509;
    }
    return l_509;
}







int32_t * func_71(uint64_t p_72, uint64_t p_73, struct S0 * p_74)
{
    int64_t l_438 = 0x7CD69401B6993E92LL;
    const int32_t *l_469 = 0;
    int32_t *l_499 = &g_29[6];
    for (p_73 = 0; (p_73 == 16); p_73 = safe_add_func_int16_t_s_s(p_73, 1))
    {
        int32_t **l_437 = &g_238[0];
        int32_t l_453[9][10][1];
        int i, j, k;
        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 10; j++)
            {
                for (k = 0; k < 1; k++)
                    l_453[i][j][k] = (-1L);
            }
        }
    }
    (*g_241) = (*g_241);
    for (g_54.f0 = 0; g_54.f0 < 3; g_54.f0 += 1)
    {
        g_238[g_54.f0] = &g_2;
    }
    return (*g_244);
}







int32_t * func_77(int8_t p_78)
{
    int64_t l_180 = 0L;
    int32_t l_204 = 1L;
    struct S0 *l_208 = &g_54;
    int32_t * const *l_303[10];
    int32_t l_428 = 0xAC760A83L;
    int i;
    for (i = 0; i < 10; i++)
        l_303[i] = &g_238[1];
    if ((1L == 0xE3L))
    {
        int16_t l_184[1][9] = {{(-1L), 3L, (-1L), 3L, (-1L), 3L, (-1L), 3L, (-1L)}};
        int32_t *l_186[8];
        const uint64_t l_271 = 0x5B68A7D9E7F87ACALL;
        const struct S0 *l_272 = &g_273;
        int i, j;
        for (i = 0; i < 8; i++)
            l_186[i] = &g_2;
        for (p_78 = 0; (p_78 < 16); p_78 = safe_add_func_int32_t_s_s(p_78, 1))
        {
            const uint32_t l_181 = 0x4E7BDFF3L;
            int32_t *l_185 = &g_29[7];
            int32_t l_197[6][3][1];
            int i, j, k;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_197[i][j][k] = 0L;
                }
            }
            for (g_2 = (-30); (g_2 <= 25); g_2 = safe_add_func_uint8_t_u_u(g_2, 2))
            {
                int32_t *l_175 = &g_29[2];
                int32_t **l_174 = &l_175;
                int32_t *l_182 = &g_183;
                (*l_182) |= func_83(((&g_160 != l_174) && (((safe_rshift_func_int8_t_s_s(l_180, func_83(p_78, g_7, g_29[0]))) <= 0x16L) == (0L & (g_2 & (~l_181))))), p_78, g_2);
                if (l_184[0][5])
                    break;
            }
            g_183 &= (func_83(l_184[0][5], p_78, (l_185 == l_186[4])) ^ (safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(g_2, p_78)) | g_2), g_34.f0)), (safe_div_func_int8_t_s_s(p_78, g_54.f0)))), 0x67E9L)));
            l_197[2][0][0] |= (*g_128);
            for (g_89.f0 = 0; (g_89.f0 != 38); g_89.f0 = safe_add_func_uint64_t_u_u(g_89.f0, 3))
            {
                struct S0 *l_201 = &g_34;
                (*l_201) = g_200;
                for (g_54.f0 = 0; (g_54.f0 >= 56); g_54.f0 = safe_add_func_int32_t_s_s(g_54.f0, 1))
                {
                    l_204 &= (*l_185);
                }
            }
        }
        for (g_2 = 25; (g_2 <= (-12)); g_2 = safe_sub_func_int16_t_s_s(g_2, 8))
        {
            const uint16_t l_207 = 0x7933L;
            int32_t l_274[9] = {0x16659D93L, 1L, 0x16659D93L, 1L, 0x16659D93L, 1L, 0x16659D93L, 1L, 0x16659D93L};
            uint8_t l_283 = 0x16L;
            int i;
lbl_296:
            if (l_207)
            {
                int32_t *l_213 = &g_29[6];
                int32_t l_253 = 0x5B995111L;
                int16_t l_254 = 0x4019L;
                g_209 = l_208;
                for (g_54.f0 = (-19); (g_54.f0 <= 52); g_54.f0 = safe_add_func_uint16_t_u_u(g_54.f0, 2))
                {
                    uint16_t l_212 = 0xD61EL;
                    const int32_t *l_226 = &g_183;
                    int32_t l_233 = 0x3274840AL;
                    l_204 &= (0x45L ^ l_212);
                    if ((*g_128))
                    {
                        int32_t **l_214[5][7][1];
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 7; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_214[i][j][k] = &l_186[4];
                            }
                        }
                        l_213 = l_213;
                    }
                    else
                    {
                        uint16_t l_219 = 0U;
                        uint32_t l_224 = 0x3724E75DL;
                        int32_t *l_225 = &g_183;
                        (*l_213) = (safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((l_219 >= (p_78 ^ g_29[8])), (*g_128))), ((safe_mod_func_int32_t_s_s((((g_89.f0 && p_78) | p_78) == g_200.f0), (safe_div_func_int8_t_s_s(((p_78 && l_224) | (l_225 != l_226)), (safe_sub_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s(g_29[0], 4)), (*l_213))))))) <= g_183)));
                    }
                    for (g_89.f0 = (-14); (g_89.f0 == 5); g_89.f0 = safe_add_func_int64_t_s_s(g_89.f0, 1))
                    {
                        l_233 = p_78;
                    }
                }
                if ((*g_128))
                {
                    int32_t *l_236 = &l_204;
                    for (g_54.f0 = (-14); (g_54.f0 != 13); g_54.f0 = safe_add_func_int64_t_s_s(g_54.f0, 4))
                    {
                        int32_t *l_239 = &g_29[8];
                        (*g_237) = l_236;
                        (*l_213) &= 0xDBCAAF73L;
                        return l_239;
                    }
                }
                else
                {
                    int i;
                    for (g_34.f1 = 0; g_34.f1 < 8; g_34.f1 += 1)
                    {
                        int32_t *l_240[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_240[i] = &g_183;
                        l_240[0] = l_186[4];
                    }
                }
                if (l_207)
                {
                    uint32_t l_269 = 1U;
                    if (l_207)
                    {
                        uint64_t l_242 = 0xB1A02258E7943EC4LL;
                        g_241 = &l_208;
                        l_242 = (!0xA685A1DFL);
                    }
                    else
                    {
                        (*g_244) = &l_204;
                        (*l_213) &= (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(p_78, 6)), l_207));
                    }
                    if ((func_83((-3L), p_78, (safe_rshift_func_int8_t_s_s(l_207, 5))) | (((g_34.f0 && p_78) && (safe_rshift_func_int8_t_s_s(((g_200.f0 != l_204) > (l_253 || l_180)), ((g_183 ^ p_78) == (p_78 > l_254))))) && (&l_186[4] != 0))))
                    {
                        (*l_213) = p_78;
                        (*g_237) = &l_253;
                        g_259 &= (1L != ((0 != &l_213) < (safe_sub_func_uint16_t_u_u(l_180, 1L))));
                    }
                    else
                    {
                        (*l_208) = g_260;
                    }
                    for (l_254 = 0; (l_254 >= 13); l_254 = safe_add_func_uint64_t_u_u(l_254, 1))
                    {
                        uint32_t l_270 = 4294967295U;
                        (*l_213) = (safe_add_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(l_269, func_83(p_78, g_89.f0, p_78))), ((*g_241) == l_208))) < (l_270 && (p_78 || ((~l_271) || (g_54.f0 && g_54.f0))))), (!p_78)));
                    }
                    if (l_180)
                        goto lbl_296;
                }
                else
                {
                    int i;
                    for (l_180 = 2; l_180 < 8; l_180 += 1)
                    {
                        l_274[7] |= (func_83(p_78, p_78, 3L) <= (l_272 != (*g_241)));
                        l_186[(uint64_t)(l_180) % 8] = 0;
                        (*g_275) = &l_253;
                    }
                }
            }
            else
            {
                const int32_t *l_276 = &l_204;
                int32_t l_295 = (-1L);
                (*g_277) = l_276;
                l_295 = (((-1L) && func_83(g_260.f1, (~p_78), (safe_lshift_func_uint16_t_u_u(g_29[5], (l_283 == (g_200.f0 || p_78)))))) ^ ((~(p_78 < (g_54.f0 ^ (g_54.f0 && g_183)))) >= (safe_sub_func_uint64_t_u_u((safe_unary_minus_func_uint64_t_u((safe_lshift_func_int8_t_s_u(g_200.f0, p_78)))), (safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u(l_180, 6)), ((safe_rshift_func_uint8_t_u_u(l_274[4], 2)) || ((*g_241) == l_208))))))));
            }
            return l_186[3];
        }
        for (g_200.f0 = 0; g_200.f0 < 8; g_200.f0 += 1)
        {
            int i;
            (**g_275) = p_78;
            for (g_2 = 0; g_2 < 9; g_2 += 3)
            {
                (**g_241) = (*l_272);
            }
        }
    }
    else
    {
        int32_t **l_302 = &g_238[0];
        uint32_t l_310[2];
        int32_t l_344[3] = {0x7F20AB2CL, (-5L), 0x7F20AB2CL};
        int i;
        for (i = 0; i < 2; i++)
            l_310[i] = 0x768CD56CL;
        l_310[1] ^= (func_83(g_2, g_54.f1, ((safe_rshift_func_int8_t_s_u(((safe_unary_minus_func_int32_t_s(l_180)) > 0xB1B9L), 1)) & (p_78 >= (l_204 < (l_302 != l_303[0]))))) && (safe_mul_func_int16_t_s_s(0L, (safe_add_func_uint32_t_u_u(p_78, (safe_lshift_func_int8_t_s_u(p_78, (0 == l_208))))))));
        (*l_302) = (*l_302);
        for (g_2 = (-19); (g_2 >= (-12)); g_2 = safe_add_func_uint32_t_u_u(g_2, 3))
        {
            int16_t l_322[2];
            int16_t l_335 = (-1L);
            int32_t *l_358 = &l_344[2];
            int32_t l_378 = 1L;
            int32_t *l_384 = &g_2;
            int i;
            for (i = 0; i < 2; i++)
                l_322[i] = 0xB8CEL;
            if (p_78)
            {
                uint16_t l_326 = 1U;
                for (p_78 = 0; (p_78 >= (-16)); p_78 = safe_sub_func_uint8_t_u_u(p_78, 1))
                {
                    uint32_t l_325 = 0xA96F2688L;
                    int32_t *l_330 = &g_183;
                    for (g_200.f0 = 6; (g_200.f0 != 35); g_200.f0 = safe_add_func_int32_t_s_s(g_200.f0, 1))
                    {
                        uint8_t l_329 = 247U;
                        l_329 |= func_83(g_273.f1, (safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(((safe_unary_minus_func_int32_t_s(l_322[0])) < (safe_lshift_func_int16_t_s_s(l_325, p_78))), 0L)) == (p_78 >= l_326)), 7)), (!(safe_lshift_func_uint16_t_u_u(l_322[1], 2))));
                        (*l_302) = l_330;
                    }
                }
            }
            else
            {
                uint32_t l_342[6];
                struct S0 **l_346 = &l_208;
                int32_t l_347 = 0x27AADBFAL;
                int i;
                for (i = 0; i < 6; i++)
                    l_342[i] = 4294967292U;
                for (g_34.f0 = 0; (g_34.f0 > 7); g_34.f0 = safe_add_func_uint64_t_u_u(g_34.f0, 7))
                {
                    int16_t l_345 = 5L;
                    if ((safe_add_func_uint32_t_u_u(g_260.f0, l_335)))
                    {
                        uint32_t l_343 = 4294967290U;
                        l_344[1] &= ((safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((**l_302), ((safe_mul_func_uint16_t_u_u(((*g_241) == (*g_241)), g_7)) <= l_342[5]))), g_54.f0)) >= l_343);
                        (*g_209) = (*l_208);
                    }
                    else
                    {
                        l_347 |= (func_83((**l_302), l_345, l_342[5]) >= (l_346 == &g_209));
                        l_344[1] |= func_83(g_200.f0, l_345, 0x97L);
                        return (*g_275);
                    }
                    for (g_183 = 2; (g_183 >= 1); g_183 = safe_sub_func_uint64_t_u_u(g_183, 1))
                    {
                        int16_t l_350 = (-1L);
                        int32_t l_351 = 0xACCDA130L;
                        l_351 ^= l_350;
                        (*l_302) = (*l_302);
                    }
                }
                if ((safe_rshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u(0xAA4E5B741154D9B2LL, p_78)), g_2)), 3)))
                {
                    if ((**l_302))
                    {
                        return (*g_237);
                    }
                    else
                    {
                        (*l_358) ^= (((*g_275) != l_358) || ((*g_237) != &g_183));
                        (*g_244) = 0;
lbl_359:
                        (**l_346) = (*g_209);
                        return (*g_244);
                    }
                }
                else
                {
                    int32_t **l_366 = &g_238[1];
                    int32_t l_373[7][2][1];
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_373[i][j][k] = (-1L);
                        }
                    }
                    (*l_302) = &l_347;
                    if (g_2)
                        goto lbl_359;
                    for (g_54.f0 = (-3); (g_54.f0 >= 18); g_54.f0 = safe_add_func_uint32_t_u_u(g_54.f0, 1))
                    {
                        uint16_t l_383 = 0x75C1L;
                        l_383 |= func_83(func_83(l_342[2], l_342[3], g_273.f1), (l_347 == 8U), ((safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(0xC260L, ((l_366 == l_302) & (p_78 <= p_78)))), 3)) != (safe_div_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((l_347 <= l_373[0][1][0]), p_78)), (0 != l_302))), (safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((g_259 & p_78), (p_78 >= l_378))), (safe_mod_func_uint32_t_u_u(((*l_358) | p_78), (safe_mod_func_uint32_t_u_u(p_78, p_78))))))))));
                        return l_384;
                    }
                }
                return l_384;
            }
        }
    }
    if ((**g_237))
    {
        uint32_t l_397 = 0xFC0D30A4L;
        const uint8_t l_415 = 2U;
        int32_t *l_431 = 0;
        int32_t l_435 = 0x8F557376L;
        int i;
        for (g_183 = 0; (g_183 == (-4)); g_183 = safe_sub_func_int32_t_s_s(g_183, 4))
        {
            int64_t l_402 = 7L;
            int32_t l_409 = 0x272699EAL;
            l_409 |= (safe_rshift_func_int16_t_s_u((((l_303[0] != 0) < (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(0U, 3)), 5))) <= (safe_sub_func_uint8_t_u_u(func_83(0L, (safe_mod_func_uint8_t_u_u(func_83(l_397, l_397, p_78), (p_78 & g_183))), g_54.f0), p_78))), (safe_add_func_int64_t_s_s((((safe_add_func_uint16_t_u_u((g_183 == l_397), (p_78 & l_397))) && g_259) ^ l_402), (safe_mul_func_uint16_t_u_u(g_183, (safe_sub_func_int64_t_s_s((-5L), (g_54.f0 == (safe_rshift_func_uint16_t_u_u(l_402, p_78)))))))))));
        }
        for (g_89.f0 = 0; g_89.f0 < 3; g_89.f0 += 3)
        {
            struct S0 *l_410[1][6];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 6; j++)
                    l_410[i][j] = &g_34;
            }
            (**g_244) = (l_397 >= g_7);
            (*g_241) = l_410[0][4];
        }
        (*g_128) &= p_78;
        for (g_2 = 0; (g_2 <= (-4)); g_2 = safe_sub_func_int16_t_s_s(g_2, 7))
        {
            int32_t l_416 = (-6L);
            int32_t *l_423[6];
            uint32_t l_429 = 4294967295U;
            int32_t l_430 = 0L;
            int i;
            for (i = 0; i < 6; i++)
                l_423[i] = &g_29[8];
            for (l_180 = 18; (l_180 >= (-23)); l_180 = safe_sub_func_int16_t_s_s(l_180, 2))
            {
                int i;
                for (g_54.f0 = 0; g_54.f0 < 3; g_54.f0 += 1)
                {
                    uint16_t l_427 = 0x9629L;
                    if (((((((l_415 ^ g_89.f0) & (l_416 & g_54.f0)) <= (safe_lshift_func_uint16_t_u_u(g_29[3], 4))) != (safe_mod_func_int16_t_s_s((g_54.f1 | g_29[8]), (safe_mul_func_uint16_t_u_u(l_416, (p_78 != g_200.f0)))))) <= (p_78 < g_200.f0)) != (0 != l_423[2])))
                    {
                        return g_238[(g_89.f0) % 3];
                    }
                    else
                    {
                        uint8_t l_424 = 255U;
                        l_424 |= p_78;
                        l_427 = (safe_rshift_func_int16_t_s_u(0xDE08L, 13));
                        (*g_160) = p_78;
                        l_428 = p_78;
                    }
                    if (((l_429 && (g_260.f0 >= (((l_430 || p_78) && p_78) | g_89.f0))) ^ (g_259 >= (0 != l_431))))
                    {
                        int32_t l_433 = (-5L);
                        l_433 = (safe_unary_minus_func_int32_t_s((-5L)));
                    }
                    else
                    {
                        uint32_t l_434 = 4294967290U;
                        (**g_237) = p_78;
                        l_435 = (g_260.f0 != l_434);
                        g_238[(g_54.f0) % 3] = (*g_275);
                    }
                    (**g_241) = g_436;
                }
            }
        }
    }
    else
    {
        return (*g_244);
    }
    return (*g_237);
}







int32_t func_83(int32_t p_84, uint32_t p_85, int8_t p_86)
{
    int32_t *l_98 = 0;
    int32_t **l_97 = &l_98;
    int32_t l_173[3];
    int i;
    for (i = 0; i < 3; i++)
        l_173[i] = 0x1E293497L;
    for (p_86 = 17; (p_86 <= (-19)); p_86 = safe_sub_func_int64_t_s_s(p_86, 1))
    {
        int32_t l_104 = 0x93D1D1CEL;
        int32_t **l_147 = &l_98;
        (*g_90) = g_89;
        for (p_85 = 0; (p_85 > 15); p_85 = safe_add_func_int16_t_s_s(p_85, 4))
        {
            struct S0 *l_93 = &g_89;
            int32_t l_101 = (-4L);
            const int32_t *l_134 = &g_2;
            (*l_93) = (*g_90);
            if (((((safe_mul_func_int8_t_s_s(((g_96 == l_97) < (safe_add_func_uint16_t_u_u(l_101, g_2))), (safe_add_func_uint8_t_u_u((p_85 || l_104), 0xE0L)))) != ((safe_div_func_uint8_t_u_u(l_104, (g_54.f0 ^ g_89.f0))) <= ((safe_add_func_uint8_t_u_u(p_86, p_84)) ^ (p_85 | l_104)))) == 18446744073709551611U) != 0x77L))
            {
                (*l_97) = 0;
            }
            else
            {
                int64_t l_139 = (-3L);
                int32_t *l_142 = 0;
                if (p_85)
                {
                    uint16_t l_127 = 9U;
                    (*g_128) = (l_104 || (safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_mod_func_int64_t_s_s((safe_div_func_uint16_t_u_u(l_101, p_84)), (safe_div_func_uint64_t_u_u(p_85, p_84)))), (safe_mod_func_uint64_t_u_u((p_86 ^ l_101), p_86)))), ((safe_mul_func_int16_t_s_s((g_7 <= g_34.f0), 0xEA07L)) && ((p_86 == p_84) < g_34.f0)))), (safe_add_func_int32_t_s_s((~l_127), g_89.f0)))));
                    g_29[0] &= (safe_add_func_uint64_t_u_u(18446744073709551615U, (65535U >= ((safe_sub_func_uint64_t_u_u((safe_unary_minus_func_uint64_t_u((l_134 == &l_104))), ((g_89.f1 | g_89.f0) > (p_86 && (*l_134))))) <= (&l_134 != &l_98)))));
                }
                else
                {
                    int32_t *l_141 = &g_29[4];
                    int8_t l_150[8][8] = {{0x17L, 1L, 0x17L, 1L, 0x17L, 1L, 0x17L, 1L}, {0x17L, 1L, 0x17L, 1L, 0x17L, 1L, 0x17L, 1L}, {0x17L, 1L, 0x17L, 1L, 0x17L, 1L, 0x17L, 1L}, {0x17L, 1L, 0x17L, 1L, 0x17L, 1L, 0x17L, 1L}, {0x17L, 1L, 0x17L, 1L, 0x17L, 1L, 0x17L, 1L}, {0x17L, 1L, 0x17L, 1L, 0x17L, 1L, 0x17L, 1L}, {0x17L, 1L, 0x17L, 1L, 0x17L, 1L, 0x17L, 1L}, {0x17L, 1L, 0x17L, 1L, 0x17L, 1L, 0x17L, 1L}};
                    int i, j;
                    if (((safe_sub_func_uint8_t_u_u((safe_div_func_int64_t_s_s((g_34.f0 <= 0L), ((g_29[5] | ((*l_134) >= p_86)) || g_89.f0))), (-6L))) | l_139))
                    {
                        int32_t *l_140 = &l_104;
                        (*l_140) |= (-1L);
                        (*l_97) = l_141;
                        (*l_140) |= ((l_140 == l_142) || (safe_lshift_func_int8_t_s_s((g_89.f1 && ((+(safe_mul_func_uint16_t_u_u(g_29[3], g_54.f0))) < (p_86 && (*g_128)))), 1)));
                        l_147 = &l_98;
                    }
                    else
                    {
                        l_150[1][5] = (safe_sub_func_uint32_t_u_u(0x3333429DL, p_85));
                        (*l_141) = (*l_134);
                        return (*g_128);
                    }
                    (*l_147) = (*l_147);
                    (**l_147) = (0xCBL != (safe_lshift_func_uint16_t_u_s(p_85, (safe_unary_minus_func_uint64_t_u((((safe_rshift_func_int8_t_s_s(p_86, p_85)) <= (+g_34.f0)) > ((g_89.f0 != g_7) >= g_34.f0)))))));
                }
                (*l_97) = &g_29[0];
                (*l_98) ^= (*l_134);
                (*l_147) = l_142;
            }
        }
        (*g_160) = (g_54.f1 | ((safe_div_func_int64_t_s_s(0x4D558848F550CB7CLL, g_54.f0)) <= (g_89.f0 || ((*l_97) != (*l_147)))));
        return (*g_128);
    }
    (*g_128) = (safe_mod_func_int8_t_s_s(p_86, (((safe_add_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(g_54.f1, g_29[0])), g_29[1])), p_86)) <= (((safe_sub_func_int64_t_s_s(g_2, g_89.f0)) && (!p_85)) | (safe_sub_func_uint8_t_u_u((p_84 && p_84), (g_29[6] && l_173[1]))))) & 0x35L)));
    (*l_97) = 0;
    return (*g_160);
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
    transparent_crc(g_7, "g_7", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_29[i], "g_29[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_34.f0, "g_34.f0", print_hash_value);
    transparent_crc(g_34.f1, "g_34.f1", print_hash_value);
    transparent_crc(g_54.f0, "g_54.f0", print_hash_value);
    transparent_crc(g_54.f1, "g_54.f1", print_hash_value);
    transparent_crc(g_89.f0, "g_89.f0", print_hash_value);
    transparent_crc(g_89.f1, "g_89.f1", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_200.f0, "g_200.f0", print_hash_value);
    transparent_crc(g_200.f1, "g_200.f1", print_hash_value);
    transparent_crc(g_259, "g_259", print_hash_value);
    transparent_crc(g_260.f0, "g_260.f0", print_hash_value);
    transparent_crc(g_260.f1, "g_260.f1", print_hash_value);
    transparent_crc(g_273.f0, "g_273.f0", print_hash_value);
    transparent_crc(g_273.f1, "g_273.f1", print_hash_value);
    transparent_crc(g_436.f0, "g_436.f0", print_hash_value);
    transparent_crc(g_436.f1, "g_436.f1", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_512[i][j][k].f0, "g_512[i][j][k].f0", print_hash_value);
                transparent_crc(g_512[i][j][k].f1, "g_512[i][j][k].f1", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_581.f0, "g_581.f0", print_hash_value);
    transparent_crc(g_581.f1, "g_581.f1", print_hash_value);
    transparent_crc(g_595.f0, "g_595.f0", print_hash_value);
    transparent_crc(g_595.f1, "g_595.f1", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_630[i].f0, "g_630[i].f0", print_hash_value);
        transparent_crc(g_630[i].f1, "g_630[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_640.f0, "g_640.f0", print_hash_value);
    transparent_crc(g_640.f1, "g_640.f1", print_hash_value);
    transparent_crc(g_685.f0, "g_685.f0", print_hash_value);
    transparent_crc(g_685.f1, "g_685.f1", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_698[i][j].f0, "g_698[i][j].f0", print_hash_value);
            transparent_crc(g_698[i][j].f1, "g_698[i][j].f1", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_718.f0, "g_718.f0", print_hash_value);
    transparent_crc(g_718.f1, "g_718.f1", print_hash_value);
    transparent_crc(g_722.f0, "g_722.f0", print_hash_value);
    transparent_crc(g_722.f1, "g_722.f1", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_742[i][j][k].f0, "g_742[i][j][k].f0", print_hash_value);
                transparent_crc(g_742[i][j][k].f1, "g_742[i][j][k].f1", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_797.f0, "g_797.f0", print_hash_value);
    transparent_crc(g_797.f1, "g_797.f1", print_hash_value);
    transparent_crc(g_832.f0, "g_832.f0", print_hash_value);
    transparent_crc(g_832.f1, "g_832.f1", print_hash_value);
    transparent_crc(g_900, "g_900", print_hash_value);
    transparent_crc(g_919.f0, "g_919.f0", print_hash_value);
    transparent_crc(g_919.f1, "g_919.f1", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL);
    return 0;
}
