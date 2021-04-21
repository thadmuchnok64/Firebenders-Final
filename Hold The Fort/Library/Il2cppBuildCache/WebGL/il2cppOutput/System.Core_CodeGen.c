#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000006 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000008 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000009 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000A System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
// 0x0000000B System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x0000000C TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000D TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000E System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000010 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000012 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000013 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000014 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000015 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000016 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000017 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000018 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000019 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000001A System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000001B System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000001C System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001D System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x0000001E System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000001F System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000020 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000021 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000022 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000023 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000024 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000025 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000026 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000027 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000028 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000029 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x0000002A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002C System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000002D System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x0000002E System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x0000002F System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000030 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000031 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000032 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000033 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000034 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000035 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000036 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000037 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000038 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000039 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x0000003A System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003C System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000003D System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x0000003E System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x0000003F TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000040 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000041 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000042 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000043 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000044 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000045 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000046 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000047 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000048 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x00000049 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x0000004A System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x0000004B System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x0000004C System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x0000004D System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000004E System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000004F System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000050 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000051 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000052 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000053 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000054 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x00000055 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x00000056 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x00000057 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x00000058 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x00000059 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x0000005A System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x0000005B System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x0000005C T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x0000005D System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x0000005E System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[94] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[94] = 
{
	1975,
	2060,
	2060,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[31] = 
{
	{ 0x02000004, { 56, 4 } },
	{ 0x02000005, { 60, 9 } },
	{ 0x02000006, { 71, 7 } },
	{ 0x02000007, { 80, 10 } },
	{ 0x02000008, { 92, 11 } },
	{ 0x02000009, { 106, 9 } },
	{ 0x0200000A, { 118, 12 } },
	{ 0x0200000B, { 133, 1 } },
	{ 0x0200000C, { 134, 2 } },
	{ 0x0200000D, { 136, 4 } },
	{ 0x0200000E, { 140, 21 } },
	{ 0x02000010, { 161, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 10 } },
	{ 0x06000006, { 20, 5 } },
	{ 0x06000007, { 25, 5 } },
	{ 0x06000008, { 30, 3 } },
	{ 0x06000009, { 33, 2 } },
	{ 0x0600000A, { 35, 1 } },
	{ 0x0600000B, { 36, 7 } },
	{ 0x0600000C, { 43, 4 } },
	{ 0x0600000D, { 47, 3 } },
	{ 0x0600000E, { 50, 1 } },
	{ 0x0600000F, { 51, 3 } },
	{ 0x06000010, { 54, 2 } },
	{ 0x06000020, { 69, 2 } },
	{ 0x06000025, { 78, 2 } },
	{ 0x0600002A, { 90, 2 } },
	{ 0x06000030, { 103, 3 } },
	{ 0x06000035, { 115, 3 } },
	{ 0x0600003A, { 130, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[163] = 
{
	{ (Il2CppRGCTXDataType)2, 1049 },
	{ (Il2CppRGCTXDataType)3, 3381 },
	{ (Il2CppRGCTXDataType)2, 1729 },
	{ (Il2CppRGCTXDataType)2, 1441 },
	{ (Il2CppRGCTXDataType)3, 6046 },
	{ (Il2CppRGCTXDataType)2, 1107 },
	{ (Il2CppRGCTXDataType)2, 1448 },
	{ (Il2CppRGCTXDataType)3, 6078 },
	{ (Il2CppRGCTXDataType)2, 1443 },
	{ (Il2CppRGCTXDataType)3, 6057 },
	{ (Il2CppRGCTXDataType)2, 1050 },
	{ (Il2CppRGCTXDataType)3, 3382 },
	{ (Il2CppRGCTXDataType)2, 1740 },
	{ (Il2CppRGCTXDataType)2, 1450 },
	{ (Il2CppRGCTXDataType)3, 6089 },
	{ (Il2CppRGCTXDataType)2, 1121 },
	{ (Il2CppRGCTXDataType)2, 1458 },
	{ (Il2CppRGCTXDataType)3, 6117 },
	{ (Il2CppRGCTXDataType)2, 1454 },
	{ (Il2CppRGCTXDataType)3, 6102 },
	{ (Il2CppRGCTXDataType)2, 383 },
	{ (Il2CppRGCTXDataType)3, 14 },
	{ (Il2CppRGCTXDataType)3, 15 },
	{ (Il2CppRGCTXDataType)2, 653 },
	{ (Il2CppRGCTXDataType)3, 2495 },
	{ (Il2CppRGCTXDataType)2, 384 },
	{ (Il2CppRGCTXDataType)3, 22 },
	{ (Il2CppRGCTXDataType)3, 23 },
	{ (Il2CppRGCTXDataType)2, 661 },
	{ (Il2CppRGCTXDataType)3, 2499 },
	{ (Il2CppRGCTXDataType)2, 425 },
	{ (Il2CppRGCTXDataType)3, 438 },
	{ (Il2CppRGCTXDataType)3, 439 },
	{ (Il2CppRGCTXDataType)2, 1108 },
	{ (Il2CppRGCTXDataType)3, 3709 },
	{ (Il2CppRGCTXDataType)3, 7207 },
	{ (Il2CppRGCTXDataType)2, 492 },
	{ (Il2CppRGCTXDataType)3, 820 },
	{ (Il2CppRGCTXDataType)2, 827 },
	{ (Il2CppRGCTXDataType)2, 872 },
	{ (Il2CppRGCTXDataType)3, 2497 },
	{ (Il2CppRGCTXDataType)3, 2498 },
	{ (Il2CppRGCTXDataType)3, 821 },
	{ (Il2CppRGCTXDataType)2, 997 },
	{ (Il2CppRGCTXDataType)2, 743 },
	{ (Il2CppRGCTXDataType)2, 815 },
	{ (Il2CppRGCTXDataType)2, 870 },
	{ (Il2CppRGCTXDataType)2, 816 },
	{ (Il2CppRGCTXDataType)2, 871 },
	{ (Il2CppRGCTXDataType)3, 2496 },
	{ (Il2CppRGCTXDataType)2, 810 },
	{ (Il2CppRGCTXDataType)2, 811 },
	{ (Il2CppRGCTXDataType)2, 869 },
	{ (Il2CppRGCTXDataType)3, 2494 },
	{ (Il2CppRGCTXDataType)2, 742 },
	{ (Il2CppRGCTXDataType)2, 814 },
	{ (Il2CppRGCTXDataType)3, 3383 },
	{ (Il2CppRGCTXDataType)3, 3385 },
	{ (Il2CppRGCTXDataType)2, 267 },
	{ (Il2CppRGCTXDataType)3, 3384 },
	{ (Il2CppRGCTXDataType)3, 3393 },
	{ (Il2CppRGCTXDataType)2, 1053 },
	{ (Il2CppRGCTXDataType)2, 1444 },
	{ (Il2CppRGCTXDataType)3, 6058 },
	{ (Il2CppRGCTXDataType)3, 3394 },
	{ (Il2CppRGCTXDataType)2, 844 },
	{ (Il2CppRGCTXDataType)2, 888 },
	{ (Il2CppRGCTXDataType)3, 2504 },
	{ (Il2CppRGCTXDataType)3, 7183 },
	{ (Il2CppRGCTXDataType)2, 1455 },
	{ (Il2CppRGCTXDataType)3, 6103 },
	{ (Il2CppRGCTXDataType)3, 3386 },
	{ (Il2CppRGCTXDataType)2, 1052 },
	{ (Il2CppRGCTXDataType)2, 1442 },
	{ (Il2CppRGCTXDataType)3, 6047 },
	{ (Il2CppRGCTXDataType)3, 2503 },
	{ (Il2CppRGCTXDataType)3, 3387 },
	{ (Il2CppRGCTXDataType)3, 7182 },
	{ (Il2CppRGCTXDataType)2, 1451 },
	{ (Il2CppRGCTXDataType)3, 6090 },
	{ (Il2CppRGCTXDataType)3, 3400 },
	{ (Il2CppRGCTXDataType)2, 1054 },
	{ (Il2CppRGCTXDataType)2, 1449 },
	{ (Il2CppRGCTXDataType)3, 6079 },
	{ (Il2CppRGCTXDataType)3, 3746 },
	{ (Il2CppRGCTXDataType)3, 1738 },
	{ (Il2CppRGCTXDataType)3, 2505 },
	{ (Il2CppRGCTXDataType)3, 1737 },
	{ (Il2CppRGCTXDataType)3, 3401 },
	{ (Il2CppRGCTXDataType)3, 7184 },
	{ (Il2CppRGCTXDataType)2, 1459 },
	{ (Il2CppRGCTXDataType)3, 6118 },
	{ (Il2CppRGCTXDataType)3, 3414 },
	{ (Il2CppRGCTXDataType)2, 1056 },
	{ (Il2CppRGCTXDataType)2, 1457 },
	{ (Il2CppRGCTXDataType)3, 6105 },
	{ (Il2CppRGCTXDataType)3, 3415 },
	{ (Il2CppRGCTXDataType)2, 847 },
	{ (Il2CppRGCTXDataType)2, 891 },
	{ (Il2CppRGCTXDataType)3, 2509 },
	{ (Il2CppRGCTXDataType)3, 2508 },
	{ (Il2CppRGCTXDataType)2, 1446 },
	{ (Il2CppRGCTXDataType)3, 6060 },
	{ (Il2CppRGCTXDataType)3, 7189 },
	{ (Il2CppRGCTXDataType)2, 1456 },
	{ (Il2CppRGCTXDataType)3, 6104 },
	{ (Il2CppRGCTXDataType)3, 3407 },
	{ (Il2CppRGCTXDataType)2, 1055 },
	{ (Il2CppRGCTXDataType)2, 1453 },
	{ (Il2CppRGCTXDataType)3, 6092 },
	{ (Il2CppRGCTXDataType)3, 2507 },
	{ (Il2CppRGCTXDataType)3, 2506 },
	{ (Il2CppRGCTXDataType)3, 3408 },
	{ (Il2CppRGCTXDataType)2, 1445 },
	{ (Il2CppRGCTXDataType)3, 6059 },
	{ (Il2CppRGCTXDataType)3, 7188 },
	{ (Il2CppRGCTXDataType)2, 1452 },
	{ (Il2CppRGCTXDataType)3, 6091 },
	{ (Il2CppRGCTXDataType)3, 3421 },
	{ (Il2CppRGCTXDataType)2, 1057 },
	{ (Il2CppRGCTXDataType)2, 1461 },
	{ (Il2CppRGCTXDataType)3, 6120 },
	{ (Il2CppRGCTXDataType)3, 3747 },
	{ (Il2CppRGCTXDataType)3, 1740 },
	{ (Il2CppRGCTXDataType)3, 2511 },
	{ (Il2CppRGCTXDataType)3, 2510 },
	{ (Il2CppRGCTXDataType)3, 1739 },
	{ (Il2CppRGCTXDataType)3, 3422 },
	{ (Il2CppRGCTXDataType)2, 1447 },
	{ (Il2CppRGCTXDataType)3, 6061 },
	{ (Il2CppRGCTXDataType)3, 7190 },
	{ (Il2CppRGCTXDataType)2, 1460 },
	{ (Il2CppRGCTXDataType)3, 6119 },
	{ (Il2CppRGCTXDataType)3, 2501 },
	{ (Il2CppRGCTXDataType)3, 2502 },
	{ (Il2CppRGCTXDataType)3, 2512 },
	{ (Il2CppRGCTXDataType)2, 744 },
	{ (Il2CppRGCTXDataType)2, 1743 },
	{ (Il2CppRGCTXDataType)2, 828 },
	{ (Il2CppRGCTXDataType)2, 873 },
	{ (Il2CppRGCTXDataType)3, 2178 },
	{ (Il2CppRGCTXDataType)2, 588 },
	{ (Il2CppRGCTXDataType)3, 2717 },
	{ (Il2CppRGCTXDataType)3, 2718 },
	{ (Il2CppRGCTXDataType)3, 2723 },
	{ (Il2CppRGCTXDataType)2, 922 },
	{ (Il2CppRGCTXDataType)3, 2720 },
	{ (Il2CppRGCTXDataType)3, 7422 },
	{ (Il2CppRGCTXDataType)2, 569 },
	{ (Il2CppRGCTXDataType)3, 1733 },
	{ (Il2CppRGCTXDataType)1, 800 },
	{ (Il2CppRGCTXDataType)2, 1749 },
	{ (Il2CppRGCTXDataType)3, 2719 },
	{ (Il2CppRGCTXDataType)1, 1749 },
	{ (Il2CppRGCTXDataType)1, 922 },
	{ (Il2CppRGCTXDataType)2, 1787 },
	{ (Il2CppRGCTXDataType)2, 1749 },
	{ (Il2CppRGCTXDataType)3, 2724 },
	{ (Il2CppRGCTXDataType)3, 2722 },
	{ (Il2CppRGCTXDataType)3, 2721 },
	{ (Il2CppRGCTXDataType)2, 186 },
	{ (Il2CppRGCTXDataType)3, 1741 },
	{ (Il2CppRGCTXDataType)2, 276 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	94,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	31,
	s_rgctxIndices,
	163,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
