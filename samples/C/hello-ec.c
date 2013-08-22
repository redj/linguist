/* Code generated from eC source file. */
#if defined(__GNUC__)
typedef long long int64;
typedef unsigned long long uint64;
#ifndef _WIN32
#define __declspec(x)
#endif
#elif defined(__TINYC__)
#include <stdarg.h>
#define __builtin_va_list va_list
#define __builtin_va_start va_start
#define __builtin_va_end va_end
#ifdef _WIN32
#define strcasecmp stricmp
#define strncasecmp strnicmp
#define __declspec(x) __attribute__((x))
#else
#define __declspec(x)
#endif
typedef long long int64;
typedef unsigned long long uint64;
#else
typedef __int64 int64;
typedef unsigned __int64 uint64;
#endif
#ifdef __BIG_ENDIAN__
#define __ENDIAN_PAD(x) (8 - (x))
#else
#define __ENDIAN_PAD(x) 0
#endif
typedef signed char int8_t;

#line 33 "hello-ec.c"

typedef short int int16_t;

#line 37 "hello-ec.c"

typedef int int32_t;

#line 41 "hello-ec.c"

typedef long int int64_t;

#line 45 "hello-ec.c"

typedef unsigned char uint8_t;

#line 49 "hello-ec.c"

typedef unsigned short int uint16_t;

#line 53 "hello-ec.c"

typedef unsigned int uint32_t;

#line 57 "hello-ec.c"

typedef unsigned long int uint64_t;

#line 61 "hello-ec.c"

typedef signed char int_least8_t;

#line 65 "hello-ec.c"

typedef short int int_least16_t;

#line 69 "hello-ec.c"

typedef int int_least32_t;

#line 73 "hello-ec.c"

typedef long int int_least64_t;

#line 77 "hello-ec.c"

typedef unsigned char uint_least8_t;

#line 81 "hello-ec.c"

typedef unsigned short int uint_least16_t;

#line 85 "hello-ec.c"

typedef unsigned int uint_least32_t;

#line 89 "hello-ec.c"

typedef unsigned long int uint_least64_t;

#line 93 "hello-ec.c"

typedef signed char int_fast8_t;

#line 97 "hello-ec.c"

typedef long int int_fast16_t;

#line 101 "hello-ec.c"

typedef long int int_fast32_t;

#line 105 "hello-ec.c"

typedef long int int_fast64_t;

#line 109 "hello-ec.c"

typedef unsigned char uint_fast8_t;

#line 113 "hello-ec.c"

typedef unsigned long int uint_fast16_t;

#line 117 "hello-ec.c"

typedef unsigned long int uint_fast32_t;

#line 121 "hello-ec.c"

typedef unsigned long int uint_fast64_t;

#line 125 "hello-ec.c"

typedef long int intptr_t;

#line 129 "hello-ec.c"

typedef unsigned long int uintptr_t;

#line 133 "hello-ec.c"

typedef long int intmax_t;

#line 137 "hello-ec.c"

typedef unsigned long int uintmax_t;

#line 141 "hello-ec.c"

typedef unsigned char __u_char;

#line 145 "hello-ec.c"

typedef unsigned short int __u_short;

#line 149 "hello-ec.c"

typedef unsigned int __u_int;

#line 153 "hello-ec.c"

typedef unsigned long int __u_long;

#line 157 "hello-ec.c"

typedef signed char __int8_t;

#line 161 "hello-ec.c"

typedef unsigned char __uint8_t;

#line 165 "hello-ec.c"

typedef signed short int __int16_t;

#line 169 "hello-ec.c"

typedef unsigned short int __uint16_t;

#line 173 "hello-ec.c"

typedef signed int __int32_t;

#line 177 "hello-ec.c"

typedef unsigned int __uint32_t;

#line 181 "hello-ec.c"

typedef signed long int __int64_t;

#line 185 "hello-ec.c"

typedef unsigned long int __uint64_t;

#line 189 "hello-ec.c"

typedef long int __quad_t;

#line 193 "hello-ec.c"

typedef unsigned long int __u_quad_t;

#line 197 "hello-ec.c"

typedef unsigned long int __dev_t;

#line 201 "hello-ec.c"

typedef unsigned int __uid_t;

#line 205 "hello-ec.c"

typedef unsigned int __gid_t;

#line 209 "hello-ec.c"

typedef unsigned long int __ino_t;

#line 213 "hello-ec.c"

typedef unsigned long int __ino64_t;

#line 217 "hello-ec.c"

typedef unsigned int __mode_t;

#line 221 "hello-ec.c"

typedef unsigned long int __nlink_t;

#line 225 "hello-ec.c"

typedef long int __off_t;

#line 229 "hello-ec.c"

typedef long int __off64_t;

#line 233 "hello-ec.c"

typedef int __pid_t;

#line 237 "hello-ec.c"

typedef struct
{
int __val[2];
} __attribute__ ((gcc_struct)) __fsid_t;

#line 244 "hello-ec.c"

typedef long int __clock_t;

#line 248 "hello-ec.c"

typedef unsigned long int __rlim_t;

#line 252 "hello-ec.c"

typedef unsigned long int __rlim64_t;

#line 256 "hello-ec.c"

typedef unsigned int __id_t;

#line 260 "hello-ec.c"

typedef long int __time_t;

#line 264 "hello-ec.c"

typedef unsigned int __useconds_t;

#line 268 "hello-ec.c"

typedef long int __suseconds_t;

#line 272 "hello-ec.c"

typedef int __daddr_t;

#line 276 "hello-ec.c"

typedef int __key_t;

#line 280 "hello-ec.c"

typedef int __clockid_t;

#line 284 "hello-ec.c"

typedef void * __timer_t;

#line 288 "hello-ec.c"

typedef long int __blksize_t;

#line 292 "hello-ec.c"

typedef long int __blkcnt_t;

#line 296 "hello-ec.c"

typedef long int __blkcnt64_t;

#line 300 "hello-ec.c"

typedef unsigned long int __fsblkcnt_t;

#line 304 "hello-ec.c"

typedef unsigned long int __fsblkcnt64_t;

#line 308 "hello-ec.c"

typedef unsigned long int __fsfilcnt_t;

#line 312 "hello-ec.c"

typedef unsigned long int __fsfilcnt64_t;

#line 316 "hello-ec.c"

typedef long int __fsword_t;

#line 320 "hello-ec.c"

typedef long int __ssize_t;

#line 324 "hello-ec.c"

typedef long int __syscall_slong_t;

#line 328 "hello-ec.c"

typedef unsigned long int __syscall_ulong_t;

#line 332 "hello-ec.c"

typedef __off64_t __loff_t;

#line 336 "hello-ec.c"

typedef __quad_t * __qaddr_t;

#line 340 "hello-ec.c"

typedef char * __caddr_t;

#line 344 "hello-ec.c"

typedef long int __intptr_t;

#line 348 "hello-ec.c"

typedef unsigned int __socklen_t;

#line 352 "hello-ec.c"

typedef __u_char u_char;

#line 356 "hello-ec.c"

typedef __u_short u_short;

#line 360 "hello-ec.c"

typedef __u_int u_int;

#line 364 "hello-ec.c"

typedef __u_long u_long;

#line 368 "hello-ec.c"

typedef __quad_t quad_t;

#line 372 "hello-ec.c"

typedef __u_quad_t u_quad_t;

#line 376 "hello-ec.c"

typedef __fsid_t fsid_t;

#line 380 "hello-ec.c"

typedef __loff_t loff_t;

#line 384 "hello-ec.c"

typedef __ino_t ino_t;

#line 388 "hello-ec.c"

typedef __dev_t dev_t;

#line 392 "hello-ec.c"

typedef __gid_t gid_t;

#line 396 "hello-ec.c"

typedef __mode_t mode_t;

#line 400 "hello-ec.c"

typedef __nlink_t nlink_t;

#line 404 "hello-ec.c"

typedef __uid_t uid_t;

#line 408 "hello-ec.c"

typedef __off_t off_t;

#line 412 "hello-ec.c"

typedef __pid_t pid_t;

#line 416 "hello-ec.c"

typedef __id_t id_t;

#line 420 "hello-ec.c"

typedef __ssize_t ssize_t;

#line 424 "hello-ec.c"

typedef __daddr_t daddr_t;

#line 428 "hello-ec.c"

typedef __caddr_t caddr_t;

#line 432 "hello-ec.c"

typedef __key_t key_t;

#line 436 "hello-ec.c"

typedef __clock_t clock_t;

#line 440 "hello-ec.c"

typedef __time_t time_t;

#line 444 "hello-ec.c"

typedef __clockid_t clockid_t;

#line 448 "hello-ec.c"

typedef __timer_t timer_t;

#line 452 "hello-ec.c"

typedef long unsigned int size_t;

#line 456 "hello-ec.c"

extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_New(unsigned int size);

#line 460 "hello-ec.c"

extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_New0(unsigned int size);

#line 464 "hello-ec.c"

extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_Renew(void *  memory, unsigned int size);

#line 468 "hello-ec.c"

extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_Renew0(void *  memory, unsigned int size);

#line 472 "hello-ec.c"

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__sys__BTNode;

#line 476 "hello-ec.c"

struct __ecereNameSpace__ecere__sys__BTNode;

#line 480 "hello-ec.c"

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__sys__BinaryTree;

#line 484 "hello-ec.c"

struct __ecereNameSpace__ecere__sys__BinaryTree
{
struct __ecereNameSpace__ecere__sys__BTNode * root;
int count;
int (*  CompareKey)(struct __ecereNameSpace__ecere__sys__BinaryTree * tree, uintptr_t a, uintptr_t b);
void (*  FreeKey)(void *  key);
} __attribute__ ((gcc_struct));

#line 494 "hello-ec.c"

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__sys__OldList;

#line 498 "hello-ec.c"

struct __ecereNameSpace__ecere__sys__OldList
{
void *  first;
void *  last;
int count;
unsigned int offset;
unsigned int circ;
} __attribute__ ((gcc_struct));

#line 509 "hello-ec.c"

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Class;

#line 513 "hello-ec.c"

struct __ecereNameSpace__ecere__com__Class
{
struct __ecereNameSpace__ecere__com__Class * prev;
struct __ecereNameSpace__ecere__com__Class * next;
char *  name;
int offset;
int structSize;
int (* *  _vTbl)();
int vTblSize;
int (*  Constructor)(struct __ecereNameSpace__ecere__com__Instance *);
void (*  Destructor)(struct __ecereNameSpace__ecere__com__Instance *);
int offsetClass;
int sizeClass;
struct __ecereNameSpace__ecere__com__Class * base;
struct __ecereNameSpace__ecere__sys__BinaryTree methods;
struct __ecereNameSpace__ecere__sys__BinaryTree members;
struct __ecereNameSpace__ecere__sys__BinaryTree prop;
struct __ecereNameSpace__ecere__sys__OldList membersAndProperties;
struct __ecereNameSpace__ecere__sys__BinaryTree classProperties;
struct __ecereNameSpace__ecere__sys__OldList derivatives;
int memberID;
int startMemberID;
int type;
struct __ecereNameSpace__ecere__com__Instance * module;
struct __ecereNameSpace__ecere__com__NameSpace *  nameSpace;
char *  dataTypeString;
struct __ecereNameSpace__ecere__com__Instance * dataType;
int typeSize;
int defaultAlignment;
void (*  Initialize)();
int memberOffset;
struct __ecereNameSpace__ecere__sys__OldList selfWatchers;
char *  designerClass;
unsigned int noExpansion;
char *  defaultProperty;
unsigned int comRedefinition;
int count;
unsigned int isRemote;
unsigned int internalDecl;
void *  data;
unsigned int computeSize;
int structAlignment;
int destructionWatchOffset;
unsigned int fixed;
struct __ecereNameSpace__ecere__sys__OldList delayedCPValues;
int inheritanceAccess;
char *  fullName;
void *  symbol;
struct __ecereNameSpace__ecere__sys__OldList conversions;
struct __ecereNameSpace__ecere__sys__OldList templateParams;
struct __ecereNameSpace__ecere__com__ClassTemplateArgument *  templateArgs;
struct __ecereNameSpace__ecere__com__Class * templateClass;
struct __ecereNameSpace__ecere__sys__OldList templatized;
int numParams;
unsigned int isInstanceClass;
} __attribute__ ((gcc_struct));

#line 572 "hello-ec.c"

extern __attribute__ ((visibility("default"))) long long __ecereNameSpace__ecere__com__eClass_GetProperty(struct __ecereNameSpace__ecere__com__Class * _class, char *  name);

#line 576 "hello-ec.c"

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Instance;

#line 580 "hello-ec.c"

struct __ecereNameSpace__ecere__com__Instance
{
int (* *  _vTbl)();
struct __ecereNameSpace__ecere__com__Class * _class;
int _refCount;
} __attribute__ ((gcc_struct));

#line 589 "hello-ec.c"

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Property;

#line 593 "hello-ec.c"

struct __ecereNameSpace__ecere__com__Property
{
struct __ecereNameSpace__ecere__com__Property * prev;
struct __ecereNameSpace__ecere__com__Property * next;
char *  name;
unsigned int isProperty;
int memberAccess;
int id;
struct __ecereNameSpace__ecere__com__Class * _class;
char *  dataTypeString;
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;
struct __ecereNameSpace__ecere__com__Instance * dataType;
void (*  Set)(void * , int);
int (*  Get)(void * );
unsigned int (*  IsSet)(void * );
void *  data;
void *  symbol;
int vid;
unsigned int conversion;
unsigned int watcherOffset;
char *  category;
unsigned int compiled;
unsigned int selfWatchable;
unsigned int isWatchable;
} __attribute__ ((gcc_struct));

#line 621 "hello-ec.c"

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__DataMember;

#line 625 "hello-ec.c"

struct __ecereNameSpace__ecere__com__DataMember
{
struct __ecereNameSpace__ecere__com__DataMember * prev;
struct __ecereNameSpace__ecere__com__DataMember * next;
char *  name;
unsigned int isProperty;
int memberAccess;
int id;
struct __ecereNameSpace__ecere__com__Class * _class;
char *  dataTypeString;
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;
struct __ecereNameSpace__ecere__com__Instance * dataType;
int type;
int offset;
int memberID;
struct __ecereNameSpace__ecere__sys__OldList members;
struct __ecereNameSpace__ecere__sys__BinaryTree membersAlpha;
int memberOffset;
int structAlignment;
} __attribute__ ((gcc_struct));

#line 648 "hello-ec.c"

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Method;

#line 652 "hello-ec.c"

struct __ecereNameSpace__ecere__com__Method
{
char *  name;
struct __ecereNameSpace__ecere__com__Method * parent;
struct __ecereNameSpace__ecere__com__Method * left;
struct __ecereNameSpace__ecere__com__Method * right;
int depth;
int (*  function)();
int vid;
int type;
struct __ecereNameSpace__ecere__com__Class * _class;
void *  symbol;
char *  dataTypeString;
struct __ecereNameSpace__ecere__com__Instance * dataType;
int memberAccess;
} __attribute__ ((gcc_struct));

#line 671 "hello-ec.c"

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__SerialBuffer;

#line 675 "hello-ec.c"

struct __ecereNameSpace__ecere__com__SerialBuffer
{
unsigned char *  _buffer;
unsigned int count;
unsigned int _size;
unsigned int pos;
} __attribute__ ((gcc_struct));

#line 685 "hello-ec.c"

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__DataValue;

#line 689 "hello-ec.c"

struct __ecereNameSpace__ecere__com__DataValue
{
union
{
char c;
unsigned char uc;
short s;
unsigned short us;
int i;
unsigned int ui;
void *  p;
float f;
double d;
long long i64;
uint64 ui64;
} __attribute__ ((gcc_struct));
} __attribute__ ((gcc_struct));

#line 709 "hello-ec.c"

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__ClassTemplateArgument;

#line 713 "hello-ec.c"

struct __ecereNameSpace__ecere__com__ClassTemplateArgument
{
union
{
struct
{
char *  dataTypeString;
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;
} __attribute__ ((gcc_struct));
struct __ecereNameSpace__ecere__com__DataValue expression;
struct
{
char *  memberString;
union
{
struct __ecereNameSpace__ecere__com__DataMember * member;
struct __ecereNameSpace__ecere__com__Property * prop;
struct __ecereNameSpace__ecere__com__Method * method;
} __attribute__ ((gcc_struct));
} __attribute__ ((gcc_struct));
} __attribute__ ((gcc_struct));
} __attribute__ ((gcc_struct));

#line 738 "hello-ec.c"

typedef unsigned long int ulong;

#line 742 "hello-ec.c"

typedef unsigned short int ushort;

#line 746 "hello-ec.c"

typedef unsigned int uint;

#line 750 "hello-ec.c"

typedef unsigned int u_int8_t __attribute__((__mode__ (__QI__)));

#line 754 "hello-ec.c"

typedef unsigned int u_int16_t __attribute__((__mode__ (__HI__)));

#line 758 "hello-ec.c"

typedef unsigned int u_int32_t __attribute__((__mode__ (__SI__)));

#line 762 "hello-ec.c"

typedef unsigned int u_int64_t __attribute__((__mode__ (__DI__)));

#line 766 "hello-ec.c"

typedef int register_t __attribute__((__mode__ (__word__)));

#line 770 "hello-ec.c"

static __inline unsigned int __bswap_32(unsigned int __bsx)

#line 46 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
{

#line 47 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
return __builtin_bswap32(__bsx);
#line 779 "hello-ec.c"


#line 48 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
}
#line 784 "hello-ec.c"


static __inline __uint64_t __bswap_64(__uint64_t __bsx)

#line 110 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
{

#line 111 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
return __builtin_bswap64(__bsx);
#line 794 "hello-ec.c"


#line 112 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
}
#line 799 "hello-ec.c"


typedef int __sig_atomic_t;

#line 804 "hello-ec.c"

typedef struct
{
unsigned long int __val[16LL];
} __attribute__ ((gcc_struct)) __sigset_t;

#line 811 "hello-ec.c"

typedef __sigset_t sigset_t;

#line 815 "hello-ec.c"

struct timespec
{
__time_t tv_sec;
__syscall_slong_t tv_nsec;
} __attribute__ ((gcc_struct));

#line 823 "hello-ec.c"

struct timeval
{
__time_t tv_sec;
__suseconds_t tv_usec;
} __attribute__ ((gcc_struct));

#line 831 "hello-ec.c"

typedef __suseconds_t suseconds_t;

#line 835 "hello-ec.c"

typedef long int __fd_mask;

#line 839 "hello-ec.c"

typedef struct
{
__fd_mask __fds_bits[16LL];
} __attribute__ ((gcc_struct)) fd_set;

#line 846 "hello-ec.c"

typedef __fd_mask fd_mask;

#line 850 "hello-ec.c"

extern int select(int __nfds, fd_set * __restrict __readfds, fd_set * __restrict __writefds, fd_set * __restrict __exceptfds, struct timeval * __restrict __timeout);

#line 854 "hello-ec.c"

extern int pselect(int __nfds, fd_set * __restrict __readfds, fd_set * __restrict __writefds, fd_set * __restrict __exceptfds, const struct timespec * __restrict __timeout, const __sigset_t * __restrict __sigmask);

#line 858 "hello-ec.c"

 extern unsigned int gnu_dev_major(unsigned long long int __dev) __attribute__((__nothrow__ __leaf__)) __attribute__((__const__));

#line 862 "hello-ec.c"

 extern unsigned int gnu_dev_minor(unsigned long long int __dev) __attribute__((__nothrow__ __leaf__)) __attribute__((__const__));

#line 866 "hello-ec.c"

 extern unsigned long long int gnu_dev_makedev(unsigned int __major, unsigned int __minor) __attribute__((__nothrow__ __leaf__)) __attribute__((__const__));

#line 870 "hello-ec.c"

typedef __blksize_t blksize_t;

#line 874 "hello-ec.c"

typedef __blkcnt_t blkcnt_t;

#line 878 "hello-ec.c"

typedef __fsblkcnt_t fsblkcnt_t;

#line 882 "hello-ec.c"

typedef __fsfilcnt_t fsfilcnt_t;

#line 886 "hello-ec.c"

typedef unsigned long int pthread_t;

#line 890 "hello-ec.c"

union pthread_attr_t
{
char __size[56];
long int __align;
} __attribute__ ((gcc_struct));

#line 898 "hello-ec.c"

typedef union pthread_attr_t pthread_attr_t;

#line 902 "hello-ec.c"

typedef struct __pthread_internal_list
{
struct __pthread_internal_list * __prev;
struct __pthread_internal_list * __next;
} __attribute__ ((gcc_struct)) __pthread_list_t;

#line 910 "hello-ec.c"

typedef union
{
struct __pthread_mutex_s
{
int __lock;
unsigned int __count;
int __owner;
unsigned int __nusers;
int __kind;
int __spins;
__pthread_list_t __list;
} __attribute__ ((gcc_struct)) __data;
char __size[40];
long int __align;
} __attribute__ ((gcc_struct)) pthread_mutex_t;

#line 928 "hello-ec.c"

typedef union
{
char __size[4];
int __align;
} __attribute__ ((gcc_struct)) pthread_mutexattr_t;

#line 936 "hello-ec.c"

typedef union
{
struct
{
int __lock;
unsigned int __futex;
 unsigned long long int __total_seq;
 unsigned long long int __wakeup_seq;
 unsigned long long int __woken_seq;
void * __mutex;
unsigned int __nwaiters;
unsigned int __broadcast_seq;
} __attribute__ ((gcc_struct)) __data;
char __size[48];
 long long int __align;
} __attribute__ ((gcc_struct)) pthread_cond_t;

#line 955 "hello-ec.c"

typedef union
{
char __size[4];
int __align;
} __attribute__ ((gcc_struct)) pthread_condattr_t;

#line 963 "hello-ec.c"

typedef unsigned int pthread_key_t;

#line 967 "hello-ec.c"

typedef int pthread_once_t;

#line 971 "hello-ec.c"

typedef union
{
struct
{
int __lock;
unsigned int __nr_readers;
unsigned int __readers_wakeup;
unsigned int __writer_wakeup;
unsigned int __nr_readers_queued;
unsigned int __nr_writers_queued;
int __writer;
int __shared;
unsigned long int __pad1;
unsigned long int __pad2;
unsigned int __flags;
} __attribute__ ((gcc_struct)) __data;
char __size[56];
long int __align;
} __attribute__ ((gcc_struct)) pthread_rwlock_t;

#line 993 "hello-ec.c"

typedef union
{
char __size[8];
long int __align;
} __attribute__ ((gcc_struct)) pthread_rwlockattr_t;

#line 1001 "hello-ec.c"

typedef volatile int pthread_spinlock_t;

#line 1005 "hello-ec.c"

typedef union
{
char __size[32];
long int __align;
} __attribute__ ((gcc_struct)) pthread_barrier_t;

#line 1013 "hello-ec.c"

typedef union
{
char __size[4];
int __align;
} __attribute__ ((gcc_struct)) pthread_barrierattr_t;

#line 1021 "hello-ec.c"

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_HelloApp;

#line 1025 "hello-ec.c"

extern void (* __ecereFunction___ecereNameSpace__ecere__com__PrintLn)(struct __ecereNameSpace__ecere__com__Class * class, void * object, ...);

#line 1029 "hello-ec.c"

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_char__PTR_;

#line 1033 "hello-ec.c"

void __ecereMethod_HelloApp_Main(struct __ecereNameSpace__ecere__com__Instance * this)

#line 4 "hello-ec.ec"
{

#line 5 "hello-ec.ec"
__ecereFunction___ecereNameSpace__ecere__com__PrintLn(__ecereClass_char__PTR_, "Hello, World!!", (void *)0);
#line 1042 "hello-ec.c"


#line 6 "hello-ec.ec"
}
#line 1047 "hello-ec.c"


extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Class * __ecereNameSpace__ecere__com__eSystem_RegisterClass(int type, char *  name, char *  baseName, int size, int sizeClass, unsigned int (*  Constructor)(void * ), void (*  Destructor)(void * ), struct __ecereNameSpace__ecere__com__Instance * module, int declMode, int inheritanceAccess);

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__NameSpace;

struct __ecereNameSpace__ecere__com__NameSpace
{
char *  name;
struct __ecereNameSpace__ecere__com__NameSpace *  btParent;
struct __ecereNameSpace__ecere__com__NameSpace *  left;
struct __ecereNameSpace__ecere__com__NameSpace *  right;
int depth;
struct __ecereNameSpace__ecere__com__NameSpace *  parent;
struct __ecereNameSpace__ecere__sys__BinaryTree nameSpaces;
struct __ecereNameSpace__ecere__sys__BinaryTree classes;
struct __ecereNameSpace__ecere__sys__BinaryTree defines;
struct __ecereNameSpace__ecere__sys__BinaryTree functions;
} __attribute__ ((gcc_struct));

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Module;

struct __ecereNameSpace__ecere__com__Module
{
struct __ecereNameSpace__ecere__com__Instance * application;
struct __ecereNameSpace__ecere__sys__OldList classes;
struct __ecereNameSpace__ecere__sys__OldList defines;
struct __ecereNameSpace__ecere__sys__OldList functions;
struct __ecereNameSpace__ecere__sys__OldList modules;
struct __ecereNameSpace__ecere__com__Instance * prev;
struct __ecereNameSpace__ecere__com__Instance * next;
char *  name;
void *  library;
void *  Unload;
int importType;
int origImportType;
struct __ecereNameSpace__ecere__com__NameSpace privateNameSpace;
struct __ecereNameSpace__ecere__com__NameSpace publicNameSpace;
} __attribute__ ((gcc_struct));

extern struct __ecereNameSpace__ecere__com__Instance * __thisModule;

extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Method * __ecereNameSpace__ecere__com__eClass_AddMethod(struct __ecereNameSpace__ecere__com__Class * _class, char *  name, char *  type, void *  function, int declMode);

void __ecereRegisterModule_hello(struct __ecereNameSpace__ecere__com__Instance * module)

#line 3 "hello-ec.ec"
{
struct __ecereNameSpace__ecere__com__Class * class;

#line 1098 "hello-ec.c"


#line 3 "hello-ec.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(0, "HelloApp", "ecere::com::Application", 0, 0, 0, 0, module, 2, 1);
#line 1103 "hello-ec.c"


#line 3 "hello-ec.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + 24)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + 24)))->application && class)

#line 3 "hello-ec.ec"
__ecereClass_HelloApp = class;
#line 1111 "hello-ec.c"

#line 1113 "hello-ec.c"


#line 3 "hello-ec.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "Main", 0, __ecereMethod_HelloApp_Main, 1);
#line 1118 "hello-ec.c"


#line 6 "hello-ec.ec"
}
#line 1123 "hello-ec.c"


void __ecereUnregisterModule_hello(struct __ecereNameSpace__ecere__com__Instance * module)

#line 3 "hello-ec.ec"
{


#line 6 "hello-ec.ec"
}
#line 1134 "hello-ec.c"


