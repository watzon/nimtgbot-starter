/* Generated by Nim Compiler v1.1.1 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w   -I'/home/watzon/.choosenim/toolchains/nim-#devel/lib' -I/home/watzon/Projects/personal/nimtgbot_starter/migrations/1585862048_init_db -o /home/watzon/Projects/personal/nimtgbot_starter/migrations/bin/apply_1585862048_init_db_cache/stdlib_io.nim.c.o /home/watzon/Projects/personal/nimtgbot_starter/migrations/bin/apply_1585862048_init_db_cache/stdlib_io.nim.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
  #  define nimfr_(proc, file) \
      TFrame FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = 0; nimFrame(&FR_);

  #  define nimfrs_(proc, file, slots, length) \
      struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename; NI len; VarSlot s[slots];} FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = length; nimFrame((TFrame*)&FR_);

  #  define nimln_(n, file) \
      FR_.line = n; FR_.filename = file;
  typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack__7fytPA5bBsob6See21YMRA tyObject_GcStack__7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple__ujsjpB2O9cjj3uDHsXbnSzg tyTuple__ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct RootObj {
TNimType* m_type;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence__uB9b75OUPRENsBAu4AnoePA* trace;
Exception* up;
};
struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA {
  Exception Sup;
};
struct tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
};
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack__7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ* tyArray__SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef NU32 tyArray__BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg* tyArray__N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray__N1u1nqOgmuJN9cSZrnMHgOQ tyArray__B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw* tyArray__lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA {
tyArray__lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* tyArray__0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw {
tyArray__0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple__ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple__ujsjpB2O9cjj3uDHsXbnSzg tyArray__LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray__LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray__SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
NU32 flBitmap;
tyArray__BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray__B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack__7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
NI zctThreshold;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
typedef NU8 tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg;
typedef NimStringDesc* tyArray__XL8FfPqMNtuU56fW9c8pBtQ[5];
typedef NIM_CHAR tyArray__PbS9a6gkxCuxWEnFq4lOU9aw[24];
typedef NIM_CHAR tyArray__hToc9cajraNwyrQdTvLCS3A[116];
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(NI, writeBuffer__Y9atVWUcVyKHG9aBP4D0P9czA)(FILE* f, void* buffer, NI len);
N_LIB_PRIVATE N_NIMCALL(void, checkErr__fU6ZlJAtQ9bre04EDZLdGsA)(FILE* f);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_LIB_PRIVATE N_NOINLINE(void, raiseEIO__ZYk14k3sVNZUIjJjtqzFZQ)(NimStringDesc* msg) __attribute__((noreturn));
N_LIB_PRIVATE N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(void, decRef__AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, minuspercent___dgYAo7RfdUVVpvkfKDym8wsystem)(NI x, NI y);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NIM_BOOL, ltpercent___hPljn3JCDQ00ua1R07X9bxQsystem)(NI x, NI y);
static N_INLINE(void, rtlAddZCT__AT1eRuflKWyTTBdLjEDZbg_3system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT__Y66tOYFjgwJ0k4aLz4bc0Q)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef__AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, pluspercent___dgYAo7RfdUVVpvkfKDym8w_2system)(NI x, NI y);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(int, getFileHandle__hOwLbM7eXaZgEJrHWLeiNg)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, modeIsDir__L1LOhUxShkaoXfurkKTXPA)(mode_t m);
N_LIB_PRIVATE N_NIMCALL(void, close__fU6ZlJAtQ9bre04EDZLdGsA_3)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, open__gq12VLhVO0NBzUTnGgz4nw)(FILE** f, NimStringDesc* filename, tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg mode, NI bufSize);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_2, "errno: ", 7);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_3, " `", 2);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_4, "`", 1);
extern TNimType NTI__HMIVdYjdZYWskTmTQVo5BQ_;
extern TNimType NTI__iLZrPn9anoh9ad1MmO0RczFw_;
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_5, "cannot write string to file", 27);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_6, "rb", 2);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_7, "wb", 2);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_8, "w+b", 3);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_9, "r+b", 3);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_10, "ab", 2);
N_LIB_PRIVATE NIM_CONST tyArray__XL8FfPqMNtuU56fW9c8pBtQ FormatOpen__iWZDMxVvD1FETfmW09b8gFQ = {((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_6),
((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_7),
((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_8),
((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_9),
((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_10)}
;
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_11, "cannot open: ", 13);
N_LIB_PRIVATE TNimType NTI__MAWzaQJYFu3mlxj0Ppxhmw_;
N_LIB_PRIVATE TNimType NTI__XBeRj4rw9bUuE7CB3DS1rgg_;
N_LIB_PRIVATE TNimType NTI__ZJfK20XeZ9bv2j1pZjw9aswg_;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch__IcYaEuuWivYAS86vFMTS3Q;
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		if (!!((src == NIM_NIL))) goto LA3_;
		copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(((void*) ((&(*dest).data[(*dest).Sup.len]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}
static N_INLINE(void, nimFrame)(TFrame* s) {
	{
		if (!(framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA3_;
		(*s).calldepth = ((NI16) 0);
	}
	goto LA1_;
	LA3_: ;
	{
		(*s).calldepth = (NI16)((*framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1));
	}
	LA1_: ;
	(*s).prev = framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) (((NI) 2000))))) goto LA8_;
		callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw();
	}
	LA8_: ;
}
static N_INLINE(void, popFrame)(void) {
	framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}
static N_INLINE(NI, minuspercent___dgYAo7RfdUVVpvkfKDym8wsystem)(NI x, NI y) {
	NI result;
	nimfr_("-%", "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/arithm"
"etics.nim");
	result = (NI)0;
	nimln_(437, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/arithm"
"etics.nim");
	nimln_(441, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/arithm"
"etics.nim");
	result = ((NI) ((NU)((NU64)(((NU) (x))) - (NU64)(((NU) (y))))));
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL, ltpercent___hPljn3JCDQ00ua1R07X9bxQsystem)(NI x, NI y) {
	NIM_BOOL result;
	nimfr_("<%", "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/compar"
"isons.nim");
	result = (NIM_BOOL)0;
	nimln_(188, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/compar"
"isons.nim");
	nimln_(190, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/compar"
"isons.nim");
	result = ((NU64)(((NU) (x))) < (NU64)(((NU) (y))));
	popFrame();
	return result;
}
static N_INLINE(void, rtlAddZCT__AT1eRuflKWyTTBdLjEDZbg_3system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("rtlAddZCT", "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/gc.nim");
	nimln_(196, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/gc.nim");
	addZCT__Y66tOYFjgwJ0k4aLz4bc0Q((&gch__IcYaEuuWivYAS86vFMTS3Q.zct), c);
	popFrame();
}
static N_INLINE(void, decRef__AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("decRef", "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/gc.nim");
	nimln_(201, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/gc.nim");
	(*c).refcount = minuspercent___dgYAo7RfdUVVpvkfKDym8wsystem((*c).refcount, ((NI) 8));
	nimln_(202, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/gc.nim");
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = ltpercent___hPljn3JCDQ00ua1R07X9bxQsystem((*c).refcount, ((NI) 8));
		if (!T3_) goto LA4_;
		nimln_(203, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/gc.nim");
		rtlAddZCT__AT1eRuflKWyTTBdLjEDZbg_3system(c);
	}
	LA4_: ;
	popFrame();
}
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr) {
	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* result;
	NI T1_;
	nimfr_("usrToCell", "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/gc.nim");
	result = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	nimln_(130, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/gc.nim");
	T1_ = (NI)0;
	T1_ = minuspercent___dgYAo7RfdUVVpvkfKDym8wsystem(((NI) (ptrdiff_t) (usr)), ((NI) 16));
	result = ((tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*) (T1_));
	popFrame();
	return result;
}
static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T1_;
	nimfr_("nimGCunrefNoCycle", "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/gc.nim");
	nimln_(229, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/gc.nim");
	T1_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem(p);
	decRef__AT1eRuflKWyTTBdLjEDZbg_2system(T1_);
	popFrame();
}
static N_INLINE(NI, pluspercent___dgYAo7RfdUVVpvkfKDym8w_2system)(NI x, NI y) {
	NI result;
	nimfr_("+%", "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/arithm"
"etics.nim");
	result = (NI)0;
	nimln_(426, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/arithm"
"etics.nim");
	nimln_(430, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/arithm"
"etics.nim");
	result = ((NI) ((NU)((NU64)(((NU) (x))) + (NU64)(((NU) (y))))));
	popFrame();
	return result;
}
static N_INLINE(void, incRef__AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("incRef", "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/gc.nim");
	nimln_(184, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/gc.nim");
	(*c).refcount = pluspercent___dgYAo7RfdUVVpvkfKDym8w_2system((*c).refcount, ((NI) 8));
	popFrame();
}
static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr_("asgnRef", "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/gc.nim");
	nimln_(239, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/gc.nim");
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem(src);
		incRef__AT1eRuflKWyTTBdLjEDZbgsystem(T5_);
	}
	LA3_: ;
	nimln_(240, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/gc.nim");
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem((*dest));
		decRef__AT1eRuflKWyTTBdLjEDZbg_2system(T10_);
	}
	LA8_: ;
	nimln_(241, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/gc.nim");
	(*dest) = src;
	popFrame();
}
N_LIB_PRIVATE N_NOINLINE(void, raiseEIO__ZYk14k3sVNZUIjJjtqzFZQ)(NimStringDesc* msg) {
	tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw* T1_;
	NimStringDesc* T2_;
	nimfr_("raiseEIO", "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim");
	T1_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*)0;
	T1_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*) newObj((&NTI__HMIVdYjdZYWskTmTQVo5BQ_), sizeof(tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw));
	(*T1_).Sup.Sup.Sup.m_type = (&NTI__iLZrPn9anoh9ad1MmO0RczFw_);
	(*T1_).Sup.Sup.name = "IOError";
	T2_ = (NimStringDesc*)0;
	T2_ = (*T1_).Sup.Sup.message; (*T1_).Sup.Sup.message = copyStringRC1(msg);
	if (T2_) nimGCunrefNoCycle(T2_);
	asgnRef((void**) (&(*T1_).Sup.Sup.parent), NIM_NIL);
	nimln_(138, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim");
	raiseExceptionEx((Exception*)T1_, "IOError", "raiseEIO", "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim", 138);
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, checkErr__fU6ZlJAtQ9bre04EDZLdGsA)(FILE* f) {
	nimfr_("checkErr", "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim");
	nimln_(152, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim");
	{
		int T3_;
		NimStringDesc* msg;
		NimStringDesc* T6_;
		NimStringDesc* T7_;
		NCSTRING T8_;
		NimStringDesc* T9_;
		T3_ = (int)0;
		T3_ = ferror(f);
		if (!!((T3_ == ((NI32) 0)))) goto LA4_;
		nimln_(153, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim");
		T6_ = (NimStringDesc*)0;
		T7_ = (NimStringDesc*)0;
		T7_ = nimIntToStr(((NI) (errno)));
		T8_ = (NCSTRING)0;
		T8_ = strerror(errno);
		T9_ = (NimStringDesc*)0;
		T9_ = cstrToNimstr(T8_);
		T6_ = rawNewString((T7_ ? T7_->Sup.len : 0) + (T9_ ? T9_->Sup.len : 0) + 10);
appendString(T6_, ((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_2));
appendString(T6_, T7_);
appendString(T6_, ((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_3));
appendString(T6_, T9_);
appendString(T6_, ((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_4));
		msg = T6_;
		nimln_(154, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim");
		clearerr(f);
		nimln_(155, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim");
		raiseEIO__ZYk14k3sVNZUIjJjtqzFZQ(msg);
	}
	LA4_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(NI, writeBuffer__Y9atVWUcVyKHG9aBP4D0P9czA)(FILE* f, void* buffer, NI len) {
	NI result;
	int T1_;
	result = (NI)0;
	T1_ = (int)0;
	T1_ = fwrite(buffer, ((size_t) 1), ((size_t) (len)), f);
	result = ((NI) (T1_));
	checkErr__fU6ZlJAtQ9bre04EDZLdGsA(f);
	return result;
}
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s) {
	NCSTRING result;
	result = (NCSTRING)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (s == NIM_NIL);
		if (T3_) goto LA4_;
		T3_ = ((*s).Sup.len == ((NI) 0));
		LA4_: ;
		if (!T3_) goto LA5_;
		result = "";
	}
	goto LA1_;
	LA5_: ;
	{
		result = ((NCSTRING) ((*s).data));
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, write__PArlm09bKklm2BLsCg6YtaA)(FILE* f, NimStringDesc* s) {
	{
		NI T3_;
		if (((s ? s->Sup.len : 0)) < ((NI) 0) || ((s ? s->Sup.len : 0)) > ((NI) IL64(9223372036854775807))){ raiseRangeErrorI((s ? s->Sup.len : 0), ((NI) 0), ((NI) IL64(9223372036854775807))); }
		T3_ = (NI)0;
		T3_ = writeBuffer__Y9atVWUcVyKHG9aBP4D0P9czA(f, ((void*) (nimToCStringConv(s))), ((NI) ((s ? s->Sup.len : 0))));
		if (!!((T3_ == (s ? s->Sup.len : 0)))) goto LA4_;
		raiseEIO__ZYk14k3sVNZUIjJjtqzFZQ(((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_5));
	}
	LA4_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, flushFile__fU6ZlJAtQ9bre04EDZLdGsA_2)(FILE* f) {
	int T1_;
	nimfr_("flushFile", "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim");
	nimln_(281, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim");
	T1_ = (int)0;
	T1_ = fflush(f);
	(void)(T1_);
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, close__fU6ZlJAtQ9bre04EDZLdGsA_3)(FILE* f) {
	nimfr_("close", "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim");
	nimln_(267, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim");
	{
		int T5_;
		if (!!((f == 0))) goto LA3_;
		nimln_(268, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim");
		T5_ = (int)0;
		T5_ = fclose(f);
		(void)(T5_);
	}
	LA3_: ;
	popFrame();
}
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
}
N_LIB_PRIVATE N_NIMCALL(int, getFileHandle__hOwLbM7eXaZgEJrHWLeiNg)(FILE* f) {
	int result;
	nimfr_("getFileHandle", "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim");
	result = (int)0;
	nimln_(284, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim");
	nimln_(289, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim");
	result = fileno(f);
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, modeIsDir__L1LOhUxShkaoXfurkKTXPA)(mode_t m) {
	NIM_BOOL result;
	nimfr_("modeIsDir", "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim");
	result = (NIM_BOOL)0;
	nimln_(522, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim");
	nimln_(523, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim");
	result = ((NI32)(m & ((NI32) 61440)) == ((NI32) 16384));
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, open__gq12VLhVO0NBzUTnGgz4nw)(FILE** f, NimStringDesc* filename, tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg mode, NI bufSize) {
	NIM_BOOL result;
	void* p;
	nimfr_("open", "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim");
{	result = (NIM_BOOL)0;
	nimln_(547, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim");
	p = fopen(nimToCStringConv(filename), nimToCStringConv(FormatOpen__iWZDMxVvD1FETfmW09b8gFQ[(mode)- 0]));
	nimln_(548, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim");
	{
		FILE* f2;
		struct stat res;
		if (!!((p == NIM_NIL))) goto LA3_;
		nimln_(553, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim");
		f2 = ((FILE*) (p));
		nimZeroMem((void*)(&res), sizeof(struct stat));
		nimln_(555, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim");
		{
			NIM_BOOL T7_;
			int T8_;
			int T9_;
			T7_ = (NIM_BOOL)0;
			T8_ = (int)0;
			T8_ = getFileHandle__hOwLbM7eXaZgEJrHWLeiNg(f2);
			T9_ = (int)0;
			T9_ = fstat(T8_, (&res));
			T7_ = (((NI32) 0) <= T9_);
			if (!(T7_)) goto LA10_;
			T7_ = modeIsDir__L1LOhUxShkaoXfurkKTXPA(res.st_mode);
			LA10_: ;
			if (!T7_) goto LA11_;
			nimln_(556, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim");
			close__fU6ZlJAtQ9bre04EDZLdGsA_3(f2);
			nimln_(557, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim");
			result = NIM_FALSE;
			goto BeforeRet_;
		}
		LA11_: ;
		nimln_(558, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim");
		result = NIM_TRUE;
		nimln_(559, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim");
		(*f) = ((FILE*) (p));
		nimln_(560, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim");
		{
			NIM_BOOL T15_;
			int T19_;
			T15_ = (NIM_BOOL)0;
			T15_ = (((NI) 0) < bufSize);
			if (!(T15_)) goto LA16_;
			T15_ = (bufSize <= ((NI) 2147483647));
			LA16_: ;
			if (!T15_) goto LA17_;
			nimln_(561, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim");
			T19_ = (int)0;
			T19_ = setvbuf((*f), NIM_NIL, _IOFBF, ((size_t) (bufSize)));
			(void)(T19_);
		}
		goto LA13_;
		LA17_: ;
		{
			int T23_;
			nimln_(562, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim");
			if (!(bufSize == ((NI) 0))) goto LA21_;
			nimln_(563, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim");
			T23_ = (int)0;
			T23_ = setvbuf((*f), NIM_NIL, _IONBF, ((size_t) 0));
			(void)(T23_);
		}
		goto LA13_;
		LA21_: ;
		LA13_: ;
	}
	LA3_: ;
	}BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, readBuffer__Y9atVWUcVyKHG9aBP4D0P9czA_2)(FILE* f, void* buffer, NI len) {
	NI result;
	size_t T1_;
	result = (NI)0;
	T1_ = (size_t)0;
	T1_ = fread(buffer, ((size_t) 1), ((size_t) (len)), f);
	result = ((NI) (T1_));
	{
		if (!!((result == ((NI) (len))))) goto LA4_;
		checkErr__fU6ZlJAtQ9bre04EDZLdGsA(f);
	}
	LA4_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(FILE*, open__cb1k9citqyT9a9brBSJAz8pkg)(NimStringDesc* filename, tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg mode, NI bufSize) {
	FILE* result;
	nimfr_("open", "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim");
	result = (FILE*)0;
	nimln_(588, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim");
	{
		NIM_BOOL T3_;
		tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw* T6_;
		NimStringDesc* T7_;
		T3_ = (NIM_BOOL)0;
		T3_ = open__gq12VLhVO0NBzUTnGgz4nw(&result, filename, mode, bufSize);
		if (!!(T3_)) goto LA4_;
		T6_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*)0;
		T6_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*) newObj((&NTI__HMIVdYjdZYWskTmTQVo5BQ_), sizeof(tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw));
		(*T6_).Sup.Sup.Sup.m_type = (&NTI__iLZrPn9anoh9ad1MmO0RczFw_);
		(*T6_).Sup.Sup.name = "IOError";
		nimln_(589, "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim");
		T7_ = (NimStringDesc*)0;
		T7_ = rawNewString((filename ? filename->Sup.len : 0) + 13);
appendString(T7_, ((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_11));
appendString(T7_, filename);
		asgnRef((void**) (&(*T6_).Sup.Sup.message), T7_);
		asgnRef((void**) (&(*T6_).Sup.Sup.parent), NIM_NIL);
		raiseExceptionEx((Exception*)T6_, "IOError", "open", "/home/watzon/.choosenim/toolchains/nim-#devel/lib/system/io.nim", 589);
	}
	LA4_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_ioDatInit000)(void) {
static TNimNode* TM__MnCJ0VAmeZ9aTATUB39cx60Q_12_5[5];
NI TM__MnCJ0VAmeZ9aTATUB39cx60Q_14;
static char* NIM_CONST TM__MnCJ0VAmeZ9aTATUB39cx60Q_13[5] = {
"fmRead", 
"fmWrite", 
"fmReadWrite", 
"fmReadWriteExisting", 
"fmAppend"};
static TNimNode TM__MnCJ0VAmeZ9aTATUB39cx60Q_0[7];
NTI__MAWzaQJYFu3mlxj0Ppxhmw_.size = sizeof(void*);
NTI__MAWzaQJYFu3mlxj0Ppxhmw_.kind = 18;
NTI__MAWzaQJYFu3mlxj0Ppxhmw_.base = 0;
NTI__MAWzaQJYFu3mlxj0Ppxhmw_.flags = 3;
NTI__MAWzaQJYFu3mlxj0Ppxhmw_.node = &TM__MnCJ0VAmeZ9aTATUB39cx60Q_0[0];
NTI__XBeRj4rw9bUuE7CB3DS1rgg_.size = sizeof(FILE*);
NTI__XBeRj4rw9bUuE7CB3DS1rgg_.kind = 21;
NTI__XBeRj4rw9bUuE7CB3DS1rgg_.base = (&NTI__MAWzaQJYFu3mlxj0Ppxhmw_);
NTI__XBeRj4rw9bUuE7CB3DS1rgg_.flags = 3;
NTI__ZJfK20XeZ9bv2j1pZjw9aswg_.size = sizeof(tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg);
NTI__ZJfK20XeZ9bv2j1pZjw9aswg_.kind = 14;
NTI__ZJfK20XeZ9bv2j1pZjw9aswg_.base = 0;
NTI__ZJfK20XeZ9bv2j1pZjw9aswg_.flags = 3;
for (TM__MnCJ0VAmeZ9aTATUB39cx60Q_14 = 0; TM__MnCJ0VAmeZ9aTATUB39cx60Q_14 < 5; TM__MnCJ0VAmeZ9aTATUB39cx60Q_14++) {
TM__MnCJ0VAmeZ9aTATUB39cx60Q_0[TM__MnCJ0VAmeZ9aTATUB39cx60Q_14+1].kind = 1;
TM__MnCJ0VAmeZ9aTATUB39cx60Q_0[TM__MnCJ0VAmeZ9aTATUB39cx60Q_14+1].offset = TM__MnCJ0VAmeZ9aTATUB39cx60Q_14;
TM__MnCJ0VAmeZ9aTATUB39cx60Q_0[TM__MnCJ0VAmeZ9aTATUB39cx60Q_14+1].name = TM__MnCJ0VAmeZ9aTATUB39cx60Q_13[TM__MnCJ0VAmeZ9aTATUB39cx60Q_14];
TM__MnCJ0VAmeZ9aTATUB39cx60Q_12_5[TM__MnCJ0VAmeZ9aTATUB39cx60Q_14] = &TM__MnCJ0VAmeZ9aTATUB39cx60Q_0[TM__MnCJ0VAmeZ9aTATUB39cx60Q_14+1];
}
TM__MnCJ0VAmeZ9aTATUB39cx60Q_0[6].len = 5; TM__MnCJ0VAmeZ9aTATUB39cx60Q_0[6].kind = 2; TM__MnCJ0VAmeZ9aTATUB39cx60Q_0[6].sons = &TM__MnCJ0VAmeZ9aTATUB39cx60Q_12_5[0];
NTI__ZJfK20XeZ9bv2j1pZjw9aswg_.node = &TM__MnCJ0VAmeZ9aTATUB39cx60Q_0[6];
}

