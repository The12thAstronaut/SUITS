#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// LitJson.ExporterFunc
struct ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062;
// LitJson.FsmContext
struct FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D;
// LitJson.IJsonWrapper
struct IJsonWrapper_t1044F960D2308370A04F10E679D0933060B3C8EE;
// LitJson.ImporterFunc
struct ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB;
// LitJson.JsonData
struct JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B;
// LitJson.JsonData[]
struct JsonDataU5BU5D_tB1429BA5060E6107F368B107864DAB8234EB134D;
// LitJson.JsonException
struct JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886;
// LitJson.JsonReader
struct JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0;
// LitJson.JsonWriter
struct JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0;
// LitJson.Lexer
struct Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873;
// LitJson.Lexer/StateHandler
struct StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C;
// LitJson.Lexer/StateHandler[]
struct StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67;
// LitJson.OrderedDictionaryEnumerator
struct OrderedDictionaryEnumerator_tFDD06F58C7165948CC4ED07A4F1915F314DA9582;
// LitJson.WrapperFactory
struct WrapperFactory_tD6F47E2E7EA3DDD74006601D884BD3D45744A27B;
// LitJson.WriterContext
struct WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599;
// LitJson.WriterContext[]
struct WriterContextU5BU5D_tF2E96471ECC9A90DC37CF4367CBF6FF2FFBDE2B7;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.ApplicationException
struct ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>[]
struct EntryU5BU5D_t28759DBAE44315B5929179799792B97DE5DB25E2;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Int32[]>[]
struct EntryU5BU5D_t31B057DC7F4CBFA24AB5FFF59530E363FF1B06FC;
// System.Collections.Generic.Dictionary`2/Entry<System.String,LitJson.JsonData>[]
struct EntryU5BU5D_t883D8D553B6A527A2193F3A5284F94CF01BF7842;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ArrayMetadata>[]
struct EntryU5BU5D_tF901BA54E220113C78FB7859F122756AFE7B6B90;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ExporterFunc>[]
struct EntryU5BU5D_tEA000513B78CF46CAD5C38FB203F8ACBFD659864;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ImporterFunc>[]
struct EntryU5BU5D_t201119441E55E39429E66C3C044F1B0C019D445D;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ObjectMetadata>[]
struct EntryU5BU5D_t95A4B7DC1030C58DA1ACDB4A3301D5D9F644F7BD;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>[]
struct EntryU5BU5D_t9A2213898D29FCCFA7A6F586808431F403C1A463;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>[]
struct EntryU5BU5D_tBB2B8A281E7B847B2DDAD3C7F079372D49F34F0F;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>[]
struct EntryU5BU5D_tE2E2D6374D732A1B8AE8EF97A84BE843F073DF0D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct KeyCollection_t63F680C82A33FC3793AE963A33F2250E5C5EF1AE;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32[]>
struct KeyCollection_tB85600776EB0BD69C4D2030FA8AC13530E9790A4;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,LitJson.JsonData>
struct KeyCollection_t60DF7934FD37E2D8E749F967F589363A199A52BA;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ArrayMetadata>
struct KeyCollection_t1680F6D7927A00C26CD495C4F999983854BBF466;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ExporterFunc>
struct KeyCollection_tBF703A0A6612785AF7C9F1775F106232963FDD15;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ImporterFunc>
struct KeyCollection_tAC4A0D75CF3FF6668E4AAA643BC93029CB8D7F15;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ObjectMetadata>
struct KeyCollection_t4AC1931998E1778E7222C485E2D14EA7E1FB2063;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct KeyCollection_tB77625236E8F89328D5F48859C75FDED69AE6C16;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct KeyCollection_tC7DEB2DD70F4CC603C46A8C70D75706B68C65C8E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct KeyCollection_t76049F1D7BBED1DC1B67AD2A36B4E3FFA87D04A8;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct ValueCollection_t6BE1386C47B8E32088CAF0D43DA72A1ED0385750;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32[]>
struct ValueCollection_t68254222DF83AE333AFEB4D893EF39E55B8AC583;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,LitJson.JsonData>
struct ValueCollection_tA27427715025ED03F1CD4995FE25B4102F7080CC;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ArrayMetadata>
struct ValueCollection_t82D40A1666506841CA3F26D52BFB4654BEFBC335;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ExporterFunc>
struct ValueCollection_t932A8C638ED846D8092692E109BC4ED7BEAB8B3A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>
struct ValueCollection_t81F0AF359A685079918C13B5DDE84D1537D6F224;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ObjectMetadata>
struct ValueCollection_t39E2F7F3BA22C0A8073519F575F476CF8494622A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct ValueCollection_t701E3B8CF060E635BDBB8643BE39ACEBB2DBD1E2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct ValueCollection_tB2C300E4E1D61620CEB2EDE73BBF70831A24CFF6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct ValueCollection_t761CD08DD05A810DF607330EACFF9699ADDE3938;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>
struct Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>
struct Dictionary_2_t667FCCFC6CEF3A7C15E05D8E524EE73A97AC7158;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>
struct Dictionary_2_tC9927E0430844FDF48606360346CB63C4F57074C;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>
struct Dictionary_2_tAAD76381AA8A9C2DAA7F822E65E65360336B92CB;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>
struct Dictionary_2_tFA2B52DD1261DEC7A22FBF5CE7F9C8D05AFCBD2E;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>
struct Dictionary_2_t14B09BA64A95342370FBBE383B5B76B0689EF397;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>
struct Dictionary_2_t4D409F73FC7FC65765AB8AA78A71F3D0C9881B9E;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>
struct Dictionary_2_t9A46E2E31B1630C81E3DD6A97FA8738B0434B0CE;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct Dictionary_2_tD521C872BCC3C52150F3E3444D0A966E731D0646;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct Dictionary_2_t34BE080DAD42913E622AD0FE20BD6A379003BE04;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct IDictionary_2_tFA3AB64BFA07F7DE6104192003EB5CAD7A05F4EF;
// System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>
struct IDictionary_2_t696CC22FEC09091FA09796F4CBF79A43903F159D;
// System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>
struct IDictionary_2_t37509857A006F5C083A7817B12582CC75823CC9D;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata>
struct IDictionary_2_tA4B5CF0FE051AA3C23A86C036BBEEABA705C7638;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>
struct IDictionary_2_tD4FB9AEC5A4A46D8A5CA49ED8DD25D9968B4A23B;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata>
struct IDictionary_2_t4149B09DFB96E3EAB30643E1DAD8998FFC289CF8;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct IDictionary_2_tF07C9E1E97EFA36D6E9BF6D921A32D892753B1B0;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct IDictionary_2_tBF984720234B5D67F3A431176D9DBD935AAC2AEE;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct IDictionary_2_t88296BF97D3CA47DBA71E55D6173200862867911;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct IEnumerator_1_t31ED85DD48CEA2F9F4F9E1FEEA29B8A361D36EE9;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t7B82AA0F8B96BAAA21E36DDF7A1FE4348BDDBE95;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t84A1E76CEF8A66F732C15925C1E1DBC7446DB3A4;
// System.Collections.Generic.IList`1<LitJson.JsonData>
struct IList_1_t00E3D823A2DB87B040C4B5EC90A07739AB8B52B5;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct IList_1_t41271F7E51BBBC786ED1C5244F6B360832F63686;
// System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>[]
struct KeyValuePair_2U5BU5D_tA633C51FD293257E4C29B35BAC77953B2173DA3B;
// System.Collections.Generic.List`1<LitJson.JsonData>
struct List_1_tAC22C8BB212278977BEF79BF725D95125D45C668;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t8E9FA96864291A9D7EFECBE85759FED5F9528EA1;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct List_1_tAD8AAFA778AEF0545ADDFC9DB7AD3BB15D7CB284;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.Stack`1<LitJson.WriterContext>
struct Stack_1_t9BE5E659552248E69D386D8ABF17AAB698FA87E8;
// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t0D197BFD9E4E8ABDD6CB59029EE175E24078F45D;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.ICollection
struct ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t456EB67407D2045A257B66A3A25A825E883FD027;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Collections.IList
struct IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6;
// System.Func`2<System.Object,System.String>
struct Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF;
// System.Globalization.Calendar
struct Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5;
// System.Globalization.CompareInfo
struct CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1;
// System.Globalization.CultureData
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8;
// System.Globalization.TokenHashValue[]
struct TokenHashValueU5BU5D_t5C8B41D89122FC1D3ED53C946C2656DA03CE899A;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.IO.StringReader
struct StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12;
// System.IO.StringWriter
struct StringWriter_t194EF1526E072B93984370042AA80926C2EB6139;
// System.IO.TextReader
struct TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A;
// System.IO.TextWriter
struct TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidCastException
struct InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

extern RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
extern RuntimeClass* Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
extern RuntimeClass* Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_il2cpp_TypeInfo_var;
extern RuntimeClass* DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t14B09BA64A95342370FBBE383B5B76B0689EF397_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t34BE080DAD42913E622AD0FE20BD6A379003BE04_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t4D409F73FC7FC65765AB8AA78A71F3D0C9881B9E_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t9A46E2E31B1630C81E3DD6A97FA8738B0434B0CE_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_tAAD76381AA8A9C2DAA7F822E65E65360336B92CB_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_tD521C872BCC3C52150F3E3444D0A966E731D0646_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_tFA2B52DD1261DEC7A22FBF5CE7F9C8D05AFCBD2E_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var;
extern RuntimeClass* ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062_il2cpp_TypeInfo_var;
extern RuntimeClass* FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t0ABCC4037610B41090A09239840AEEA3CD4EDA68_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t696CC22FEC09091FA09796F4CBF79A43903F159D_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t788AB90D716699CBFAFE6CE0972803762CA2D24B_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_tD4FB9AEC5A4A46D8A5CA49ED8DD25D9968B4A23B_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_tEB678B1A5DD39823F992E9CC72BDF1890F8DBF75_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_tF07C9E1E97EFA36D6E9BF6D921A32D892753B1B0_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_tFA3AB64BFA07F7DE6104192003EB5CAD7A05F4EF_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t3A03D286207CB778D97A00BE0AB5A749016351AB_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t31ED85DD48CEA2F9F4F9E1FEEA29B8A361D36EE9_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
extern RuntimeClass* IJsonWrapper_t1044F960D2308370A04F10E679D0933060B3C8EE_il2cpp_TypeInfo_var;
extern RuntimeClass* IList_1_t00E3D823A2DB87B040C4B5EC90A07739AB8B52B5_il2cpp_TypeInfo_var;
extern RuntimeClass* IList_1_t41271F7E51BBBC786ED1C5244F6B360832F63686_il2cpp_TypeInfo_var;
extern RuntimeClass* IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var;
extern RuntimeClass* IOrderedDictionary_tAA6A303A3ECC8C467260A7DBFF7E49528E97C777_il2cpp_TypeInfo_var;
extern RuntimeClass* ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB_il2cpp_TypeInfo_var;
extern RuntimeClass* Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
extern RuntimeClass* JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B_il2cpp_TypeInfo_var;
extern RuntimeClass* JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886_il2cpp_TypeInfo_var;
extern RuntimeClass* JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var;
extern RuntimeClass* JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0_il2cpp_TypeInfo_var;
extern RuntimeClass* JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var;
extern RuntimeClass* Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_tAC22C8BB212278977BEF79BF725D95125D45C668_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_tAD8AAFA778AEF0545ADDFC9DB7AD3BB15D7CB284_il2cpp_TypeInfo_var;
extern RuntimeClass* OrderedDictionaryEnumerator_tFDD06F58C7165948CC4ED07A4F1915F314DA9582_il2cpp_TypeInfo_var;
extern RuntimeClass* ParserToken_t3D5AA106CF392F924BA7184F81EC25A985A6208F_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern RuntimeClass* SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
extern RuntimeClass* Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868_il2cpp_TypeInfo_var;
extern RuntimeClass* Stack_1_t9BE5E659552248E69D386D8ABF17AAB698FA87E8_il2cpp_TypeInfo_var;
extern RuntimeClass* StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67_il2cpp_TypeInfo_var;
extern RuntimeClass* StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12_il2cpp_TypeInfo_var;
extern RuntimeClass* StringWriter_t194EF1526E072B93984370042AA80926C2EB6139_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var;
extern RuntimeClass* WrapperFactory_tD6F47E2E7EA3DDD74006601D884BD3D45744A27B_il2cpp_TypeInfo_var;
extern RuntimeClass* WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3EU7BCEADD49EU2D0F67U2D4254U2DB7E1U2D05118A71DBBAU7D_t6AED0330CA9ED319B6B675C34D94B542B7470054____U24U24method0x60000feU2D1_0_FieldInfo_var;
extern String_t* _stringLiteral093F25E6B71A9565E65A08580CDAE7A62B4A2773;
extern String_t* _stringLiteral0BF09CD84D74BA36B0ED23170FB17D4EB584ACEA;
extern String_t* _stringLiteral153809851B33CE0CDCE06E5A572C675E18D0C3B5;
extern String_t* _stringLiteral21555019304FEAF73BBB046DF5C6EE3034C88D7E;
extern String_t* _stringLiteral24B55FE81E9E7B11798D3A4E4677DD48FFC81559;
extern String_t* _stringLiteral29ED3C4F83360BB754C9D2DED8D4297A135F2F06;
extern String_t* _stringLiteral2BE88CA4242C76E8253AC62474851065032D6833;
extern String_t* _stringLiteral395793C4273A1703D37B43837B2F6154048097F0;
extern String_t* _stringLiteral4629CA1B60E263BDC4326334B23323E0434717A5;
extern String_t* _stringLiteral53C44B2B93C7F97C5385D97F275C54FC27BE59DC;
extern String_t* _stringLiteral794A729D2E4FFBB094FEC03AE9B3ACD219371385;
extern String_t* _stringLiteral8BF81043E29DFC96A6FE1F30F7116F552DE6E7D7;
extern String_t* _stringLiteral8EF261795ED932D32AD2862F57EC40AD326B4747;
extern String_t* _stringLiteral9291AA1658502FAC86A8371BE70913BB2D603283;
extern String_t* _stringLiteral97629CE304162C43F08FCEFEB814CC3CB6724728;
extern String_t* _stringLiteral99335FE5A851B8D6DE6C4F3960B91381442A9C4B;
extern String_t* _stringLiteralA09499EF3B1E06CA0CC49A282D577D204893C6DE;
extern String_t* _stringLiteralBB549FF6C0350A6F4FC516379FDD4EA17FD6F723;
extern String_t* _stringLiteralC08ECE7D87BEA19F5BEB3929F2645FAA2A46714C;
extern String_t* _stringLiteralD857A9FED8F72C7B1257029D38ED06301B2F3E6C;
extern String_t* _stringLiteralE6816349A8502B93DEEF3110B026078572F9A015;
extern String_t* _stringLiteralEF7E6794CA9C6A06B54B66F279237FB8DAAAEEA8;
extern String_t* _stringLiteralF0DF9A7A4980E26A056F48AB03BDB0436AD2465F;
extern String_t* _stringLiteralF12C84902108895980702C88DB900CEEA2D2EC01;
extern String_t* _stringLiteralF350BB5356B7F3B068F47C6C3D679E77653586B5;
extern String_t* _stringLiteralFAE13CA253363E593621DD7CCF4DF1DCA39E2817;
extern const RuntimeMethod* Dictionary_2__ctor_m148696D175A4AE09615CDF2F8F1D21A729C0E155_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1BFA0F2F4A7B0BB53A8CD323D8D300A3A658E247_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2BEF9F19E617ED9A01F5890520BB462869875FAC_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m5FFDD4CFBA5515DC13B768B3FDB691A4A5FD2A5A_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_mD256629EDFD969BDC80230EC785BC44498D2CE72_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_mD35E372BD8C570253C47B0659C5F69B2D24A091A_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_mD384100234657B6EA59FD1256FE13207C5E62EE8_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_mE47B13857C9D0090F3B56B7E892BC814F404DA7B_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_mEA761C6464756C78904B515337A77F7D9C3021A1_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_mEF64C6B3B952102C6F1AE0E31336E593E6EC0AC2_RuntimeMethod_var;
extern const RuntimeMethod* JsonData_EnsureCollection_mD804E53722BBFA8341BC023F05B206051AAD7C70_RuntimeMethod_var;
extern const RuntimeMethod* JsonData_EnsureDictionary_mAE6098C5C9BC75ED04C8813D0F890CFF5700473C_RuntimeMethod_var;
extern const RuntimeMethod* JsonData_EnsureList_mEFDDDC6D93F8783B4812C6560FAE3C0004E747AF_RuntimeMethod_var;
extern const RuntimeMethod* JsonData_System_Collections_IDictionary_set_Item_m61E230FFD0098CBD8A897955C327D134846BD1AF_RuntimeMethod_var;
extern const RuntimeMethod* JsonData__ctor_mFF9DBE2AD4312F9A7003B8DAD0483046DE093F98_RuntimeMethod_var;
extern const RuntimeMethod* JsonData_op_Explicit_mD4CA13309DA7648559B0810430FDA4168A7BEF12_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Eb__5_m820AFA26F0BD1C73D7FD014FBFBE725ABF8E7E75_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Eb__6_m51B4F92FB77FAC40A84B97581ABE1B02A7107D94_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Eb__7_m442666D879C280AC437B711A9A0B626C7DFC81DF_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Eb__8_mDFB76660F6F628E1A983AFF98FB60255508B21E8_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Eb__9_m00993E75BD8A51826CE12A2E2215DE535F8169F5_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Eb__a_m72A96BB2E0ACE315FF008E45C571ECEB0D9F1B77_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Eb__b_mCF5760D3081CE162479C64BD92FDEDFF33474A21_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Eb__c_m250210E0156F841FEB23A1D635E368CFD939E658_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Eb__d_m5694E74FE65A1E7EF7206AD1691A77FFAAC14A5C_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Eb__17_mAA1548065A7DD1AC31CFE356B39FB4181980DAB6_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Eb__18_mAFDB468A62A3C3E022894D0B32BCB55F6B573570_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Eb__19_m4ED42219233EEE4618182F4F2528D79361D8734C_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Eb__1a_mC84F91176193637D0CE9E9008F49069CCF21C8F3_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Eb__1b_m208B5E6D3292FC54DB559E9F8102409EF801CEE6_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Eb__1c_mC30D72F03A2039E05DB5571F813DA573AA9FAA70_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Eb__1d_m66AA6DBBB11C3ADB5528A4C43D6B48524F8B9855_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Eb__1e_m9CE56901AF5B3A8959BBD34CDC27E0C9A3B4A2DC_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Eb__1f_mF1808D686A331DAFE7E352FB255CCB9653D1BD27_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Eb__20_m69B4361F8A87C3624FFF01995415E6DFC2342BBA_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Eb__21_m03972E2199D85DF7F06C755B10A2792A029B2759_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Eb__22_m99190ED0A6A0A3EB88EED7C10E3BC143E72B93C1_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CToObjectU3Eb__34_m48D6CAE5057246AD69B5AB4C2ACF7ED17C50C3C2_RuntimeMethod_var;
extern const RuntimeMethod* JsonReader_Read_m2482C1BFE3E418D79BBBAF792E8F69857D02F5FD_RuntimeMethod_var;
extern const RuntimeMethod* JsonReader__ctor_m7CBFB7FEA5BB26A7FCE36B4F88AB573AD7C84F9D_RuntimeMethod_var;
extern const RuntimeMethod* JsonWriter_DoValidation_m1111EB36B0A8510F899124094E6593F442BAFAB9_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2__ctor_mE1ADFA880378D99D9E7709B8013B5859B1B8ECFF_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m89898A30A7D4B8881455AC234192D96131897B82_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m00156609B459EF3CE0C8174F2BDDC66C7601E2D9_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_NextToken_mF14B4AC849AC57E930D83C06A7E22BF6278C44B2_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State10_m5767B33476CB90145E0624DF0B4042D256197285_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State11_m901C3769F2D5257622A857BCE850F8D0E3F6FF6E_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State12_m5F2C009D60F8372FBF5ADF43B8AA7E07455BB845_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State13_m22CB1BF654A923846BDDC673DCDF71831DD6B763_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State14_mB3EBD8215E34E74D29EA85FC69AABCA293060AB6_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State15_m027C22197C27E7ED9D4A60B1417BA318674BBE05_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State16_m55F14BCD451C44D56C1B00084BC3CAD0D994D6DD_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State17_m14256606939F1BB43BC0F1A32F31343CA62522C6_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State18_m05869906BDD63B018AF1EBBB1D9EF53C1B37ED6F_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State19_m0A9D176F286BF8D7287F0E4F10C41A21E52980C3_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State1_mA2439573B0138A7D96A6309E67028DB7F84D9C90_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State20_m881CCE67317887D1F6F80E7DF23522420E666A3B_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State21_m04A20D92907E73CA7112724AD65F13CD7F4FE68B_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State22_m3A8C0FB10E60CC4EA61753667FD159B43CD72CAA_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State23_m58E61F773BFCCC9C931B45B1BA6983DE4929EF8E_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State24_m0ADE5F9A2204EE16F3A53E71F9EB5BE93D8C75A6_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State25_m2921657D70B3DCEC6EA2C9D6210E1AEB34833197_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State26_mB432289A378375DA528068049313BFCC8CBCBD76_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State27_m6B9B03061DB282B92CD70F8702D3A05C2BFDE2FA_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State28_mEB41638B6DD7E23C204DBF1EE5169BEFCE28CD7F_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State2_m685CB692FFC0A5248A2229AD51A6B6F60594A3B2_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State3_m55881D7CC45371C1D335DAFB7BFB5F5F25AF1E33_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State4_m37D393B861DA2ED32F0335D209328D392B763D9F_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State5_m3712BB0071851E6414F01C32C42B4FFE8C28462C_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State6_m698F7F5F80EC21428D881019E546AAADBC8FB995_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State7_mC07429B44F2093734A84FD7C2B37D6C048B4DC97_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State8_m7789E6987E5772D5EC9337CDC1A77EC78E3A1A24_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State9_mC2B4166DC0C1232D6FC465DF7DF71102A6799B94_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3B5AF066A236DC25B784E86DDE29F0805902659B_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_mE1E2D8C90B1CA430C81A06B25BAF4B9A3F47083C_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Clear_mD2C5F5995181B9EE7CE01E53E26D16F904AC35BC_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Peek_mCED2BEDAF1531884132F6C4DCC4722A8CE242BE7_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Pop_m8B651B069863A65F6004C723598916FBAF2DBEB3_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Push_m5682E3BBD2F2B57246BEEEF0C92D1E6A6B8E26C3_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Push_mD3B46B9F2D18C0A81C61D3789929F5A5A1E0E11A_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1__ctor_mB4717FF9B962276A435CD5E16AF1F716161D0137_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1__ctor_mBE1E29EA2DD08B28D90EE0863F7ABAAB1AB72346_RuntimeMethod_var;
extern const RuntimeType* Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_0_0_0_var;
extern const RuntimeType* Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_0_0_0_var;
extern const RuntimeType* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_0_0_0_var;
extern const RuntimeType* Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_0_0_0_var;
extern const RuntimeType* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_0_0_0_var;
extern const RuntimeType* Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_0_0_0_var;
extern const RuntimeType* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var;
extern const RuntimeType* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_0_0_0_var;
extern const RuntimeType* SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_0_0_0_var;
extern const RuntimeType* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_0_0_0_var;
extern const RuntimeType* String_t_0_0_0_var;
extern const RuntimeType* UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_0_0_0_var;
extern const RuntimeType* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_0_0_0_var;
extern const RuntimeType* UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_0_0_0_var;
extern const uint32_t JsonData_Add_m4B602C73CA492BB9C52AA01FAB300D248973A661_MetadataUsageId;
extern const uint32_t JsonData_EnsureCollection_mD804E53722BBFA8341BC023F05B206051AAD7C70_MetadataUsageId;
extern const uint32_t JsonData_EnsureDictionary_mAE6098C5C9BC75ED04C8813D0F890CFF5700473C_MetadataUsageId;
extern const uint32_t JsonData_EnsureList_mEFDDDC6D93F8783B4812C6560FAE3C0004E747AF_MetadataUsageId;
extern const uint32_t JsonData_SetJsonType_m39EC83CDE3C77D62694BE46ECDC28005CEE96BA2_MetadataUsageId;
extern const uint32_t JsonData_System_Collections_ICollection_CopyTo_mD25E2C532B6B9512828F167DB05AAB04342E4A1E_MetadataUsageId;
extern const uint32_t JsonData_System_Collections_ICollection_get_IsSynchronized_mF36A84C6658B5EF9B25F40F16B7B34D31912AEA8_MetadataUsageId;
extern const uint32_t JsonData_System_Collections_ICollection_get_SyncRoot_mD61EA8C074B0BA3569D9B003194F04EBA9F580C4_MetadataUsageId;
extern const uint32_t JsonData_System_Collections_IDictionary_GetEnumerator_mB0DB1DA813EFFA3876E5E6C36C3EC27DC6802470_MetadataUsageId;
extern const uint32_t JsonData_System_Collections_IDictionary_set_Item_m61E230FFD0098CBD8A897955C327D134846BD1AF_MetadataUsageId;
extern const uint32_t JsonData_System_Collections_IEnumerable_GetEnumerator_m897160B2EC5212EB320E15DCE73C1B756A539EA5_MetadataUsageId;
extern const uint32_t JsonData_System_Collections_IList_Clear_mD8C55FC5E7639710E00A20948E800789F2B48D20_MetadataUsageId;
extern const uint32_t JsonData_System_Collections_IList_Contains_mFF015469A51049F98193AD944E7660884BC34C77_MetadataUsageId;
extern const uint32_t JsonData_System_Collections_IList_IndexOf_mF61E264FC3380AC3E720E790FC7B3D0FE2A5B29F_MetadataUsageId;
extern const uint32_t JsonData_System_Collections_IList_Insert_mB3DA3ADB912D582FC862A0D06D5D99B00F1847E1_MetadataUsageId;
extern const uint32_t JsonData_System_Collections_IList_RemoveAt_m34190449BFA19288F089F664E4AE3751E4619374_MetadataUsageId;
extern const uint32_t JsonData_System_Collections_IList_Remove_mDA1C6B91B589217F326A129A9F1286509DB63434_MetadataUsageId;
extern const uint32_t JsonData_System_Collections_IList_get_IsFixedSize_m03726F3BC83D7104DF8903DBBD5B223E981A4016_MetadataUsageId;
extern const uint32_t JsonData_System_Collections_IList_get_IsReadOnly_m8001FCA3831F8CA088E174168E4289ED039CA6E0_MetadataUsageId;
extern const uint32_t JsonData_System_Collections_IList_get_Item_mC80477B4F4DFC1BDB7B53649F43131AE8AAC3795_MetadataUsageId;
extern const uint32_t JsonData_System_Collections_Specialized_IOrderedDictionary_GetEnumerator_m1D6790D0EECE700567B52910A5ED2C4829F14B49_MetadataUsageId;
extern const uint32_t JsonData_ToJsonData_m8A63D23C6ABE990402EACDCE57D1D6BFD8DA339F_MetadataUsageId;
extern const uint32_t JsonData_ToString_mE67C62231A098B5D704EDB6347E138429CD81999_MetadataUsageId;
extern const uint32_t JsonData__ctor_mFF9DBE2AD4312F9A7003B8DAD0483046DE093F98_MetadataUsageId;
extern const uint32_t JsonData_get_Count_m58E66E455504C6FFA27EED8A784D0EBAABCC1BAC_MetadataUsageId;
extern const uint32_t JsonData_get_Item_m6708CB728C7DD9D84C4111B00AC0D49B614FF420_MetadataUsageId;
extern const uint32_t JsonData_op_Explicit_mD4CA13309DA7648559B0810430FDA4168A7BEF12_MetadataUsageId;
extern const uint32_t JsonData_set_Item_m23565FE238DAC8A0EEFB05E760CCD703870EE84C_MetadataUsageId;
extern const uint32_t JsonData_set_Item_mCB8D80A7E71BABBA804FB20E0826280C632E95B4_MetadataUsageId;
extern const uint32_t JsonException__ctor_m24DEDB1205900D0FF39D8254D5E87545C5983892_MetadataUsageId;
extern const uint32_t JsonException__ctor_m4BE1272AC624246C1CFC342E7531C58939538348_MetadataUsageId;
extern const uint32_t JsonMapper_ReadValue_mEDBEF58FAFC351DB9B296EBE14EB71778A31C6A1_MetadataUsageId;
extern const uint32_t JsonMapper_RegisterBaseExporters_mA5AC4C24722E5CA1E3CA970DB48527B882415FE7_MetadataUsageId;
extern const uint32_t JsonMapper_RegisterBaseImporters_m85C8F641A628BBC947809E7C82707539DA6B53E6_MetadataUsageId;
extern const uint32_t JsonMapper_RegisterImporter_mBB0CE190FAE3EA245045BBDD87FA7C7F4A0B2663_MetadataUsageId;
extern const uint32_t JsonMapper_ToObject_m919775CB9665BAB2274C92C74C6F2D22A0FF305F_MetadataUsageId;
extern const uint32_t JsonMapper_ToWrapper_m6362C6D5BB943534B78DA927EEB2A2EB7A766826_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseExportersU3Eb__5_m820AFA26F0BD1C73D7FD014FBFBE725ABF8E7E75_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseExportersU3Eb__6_m51B4F92FB77FAC40A84B97581ABE1B02A7107D94_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseExportersU3Eb__7_m442666D879C280AC437B711A9A0B626C7DFC81DF_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseExportersU3Eb__8_mDFB76660F6F628E1A983AFF98FB60255508B21E8_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseExportersU3Eb__9_m00993E75BD8A51826CE12A2E2215DE535F8169F5_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseExportersU3Eb__a_m72A96BB2E0ACE315FF008E45C571ECEB0D9F1B77_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseExportersU3Eb__b_mCF5760D3081CE162479C64BD92FDEDFF33474A21_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseExportersU3Eb__c_m250210E0156F841FEB23A1D635E368CFD939E658_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseExportersU3Eb__d_m5694E74FE65A1E7EF7206AD1691A77FFAAC14A5C_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Eb__17_mAA1548065A7DD1AC31CFE356B39FB4181980DAB6_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Eb__18_mAFDB468A62A3C3E022894D0B32BCB55F6B573570_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Eb__19_m4ED42219233EEE4618182F4F2528D79361D8734C_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Eb__1a_mC84F91176193637D0CE9E9008F49069CCF21C8F3_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Eb__1b_m208B5E6D3292FC54DB559E9F8102409EF801CEE6_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Eb__1c_mC30D72F03A2039E05DB5571F813DA573AA9FAA70_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Eb__1d_m66AA6DBBB11C3ADB5528A4C43D6B48524F8B9855_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Eb__1e_m9CE56901AF5B3A8959BBD34CDC27E0C9A3B4A2DC_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Eb__1f_mF1808D686A331DAFE7E352FB255CCB9653D1BD27_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Eb__20_m69B4361F8A87C3624FFF01995415E6DFC2342BBA_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Eb__21_m03972E2199D85DF7F06C755B10A2792A029B2759_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Eb__22_m99190ED0A6A0A3EB88EED7C10E3BC143E72B93C1_MetadataUsageId;
extern const uint32_t JsonMapper_U3CToObjectU3Eb__34_m48D6CAE5057246AD69B5AB4C2ACF7ED17C50C3C2_MetadataUsageId;
extern const uint32_t JsonMapper__cctor_m2E1147ABA5D56A726EB27E86CB19ED2F3D7632EF_MetadataUsageId;
extern const uint32_t JsonReader_PopulateParseTable_m37392D9BABC41EEFC913064C0A37B68274CF4041_MetadataUsageId;
extern const uint32_t JsonReader_ProcessNumber_m8F8A03BDAF38BD0C2DACCBB4D491FAD2A3ED1BA9_MetadataUsageId;
extern const uint32_t JsonReader_ProcessSymbol_m8D765AA427910FC0DB42A6D90E97A5CC4A5D95A8_MetadataUsageId;
extern const uint32_t JsonReader_Read_m2482C1BFE3E418D79BBBAF792E8F69857D02F5FD_MetadataUsageId;
extern const uint32_t JsonReader_TableAddCol_mC5FF83B1CB2223195DC7517406E2465F166B2408_MetadataUsageId;
extern const uint32_t JsonReader_TableAddRow_m0852CA4BED511145AE875DFA816563A79BC5F770_MetadataUsageId;
extern const uint32_t JsonReader__ctor_m7CBFB7FEA5BB26A7FCE36B4F88AB573AD7C84F9D_MetadataUsageId;
extern const uint32_t JsonReader__ctor_mFB752190E3EE77764F30486F2CC5FC51BAD74B59_MetadataUsageId;
extern const uint32_t JsonWriter_DoValidation_m1111EB36B0A8510F899124094E6593F442BAFAB9_MetadataUsageId;
extern const uint32_t JsonWriter_Init_m08C9221AAC3014A1C032D1D87FFD237A6F8CE8D8_MetadataUsageId;
extern const uint32_t JsonWriter_PutString_m479DD3C59AF9FF47B1BDBCEE57AD51525261BB7F_MetadataUsageId;
extern const uint32_t JsonWriter_ToString_m6896FF4990E7CB5C8C5EED2A4E86451D4683EEF8_MetadataUsageId;
extern const uint32_t JsonWriter_Write_m22DC3BB70AAE9EB12E5E2AC779EBAB234D24CA1A_MetadataUsageId;
extern const uint32_t JsonWriter_Write_m5D53C45B3D2664C22FE882EF407A9BD60D2FAC37_MetadataUsageId;
extern const uint32_t JsonWriter_Write_m8C8059D41B0D44F6AAA4C6DC2B3354E3E65A13E5_MetadataUsageId;
extern const uint32_t JsonWriter_Write_m99731AB0DA1D5A4A96747C5A632EF2E7CC31BF10_MetadataUsageId;
extern const uint32_t JsonWriter__cctor_mE5E36773C929D192081AF6583039028D55D43C3B_MetadataUsageId;
extern const uint32_t JsonWriter__ctor_m51E07A529AF622FE781FD3E1FFA3B11A1CA8A138_MetadataUsageId;
extern const uint32_t Lexer_NextToken_mF14B4AC849AC57E930D83C06A7E22BF6278C44B2_MetadataUsageId;
extern const uint32_t Lexer_PopulateFsmTables_mB4B6CDAA85BB02A0DA337DD40D192A644A87F338_MetadataUsageId;
extern const uint32_t Lexer_ProcessEscChar_mD12709B2F24D59BBFF6981D95D54119E5E9C1B2D_MetadataUsageId;
extern const uint32_t Lexer_State21_m04A20D92907E73CA7112724AD65F13CD7F4FE68B_MetadataUsageId;
extern const uint32_t Lexer_State22_m3A8C0FB10E60CC4EA61753667FD159B43CD72CAA_MetadataUsageId;
extern const uint32_t Lexer__ctor_mD352649398A906A9105691F6BCA996FC5E97C2B3_MetadataUsageId;
extern const uint32_t OrderedDictionaryEnumerator_MoveNext_mDD140A54C92FFCE09F6DC722B52858A7D4C5849E_MetadataUsageId;
extern const uint32_t OrderedDictionaryEnumerator_Reset_m97F7C025AE4EEE85F54B3A40D79DED30F89F6FE9_MetadataUsageId;
extern const uint32_t OrderedDictionaryEnumerator_get_Current_mCD392078D50C081675FD76BB258D4EE50D607A75_MetadataUsageId;
extern const uint32_t OrderedDictionaryEnumerator_get_Entry_m8108EC1012F10288CF420C7171ED12F518F06B4C_MetadataUsageId;
extern const uint32_t OrderedDictionaryEnumerator_get_Key_mDEE680BE315DEEF06D62845CC82C9A7E28F84D44_MetadataUsageId;
extern const uint32_t OrderedDictionaryEnumerator_get_Value_mF4BE590A867153FF72A8434A386E4E5542C29FC9_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67;
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;


#ifndef U3CMODULEU3E_T5DB16009AC53F62D620B0B8603C31D7CE32C32BC_H
#define U3CMODULEU3E_T5DB16009AC53F62D620B0B8603C31D7CE32C32BC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t5DB16009AC53F62D620B0B8603C31D7CE32C32BC 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T5DB16009AC53F62D620B0B8603C31D7CE32C32BC_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef FSMCONTEXT_T85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D_H
#define FSMCONTEXT_T85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.FsmContext
struct  FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D  : public RuntimeObject
{
public:
	// System.Boolean LitJson.FsmContext::Return
	bool ___Return_0;
	// System.Int32 LitJson.FsmContext::NextState
	int32_t ___NextState_1;
	// LitJson.Lexer LitJson.FsmContext::L
	Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * ___L_2;
	// System.Int32 LitJson.FsmContext::StateStack
	int32_t ___StateStack_3;

public:
	inline static int32_t get_offset_of_Return_0() { return static_cast<int32_t>(offsetof(FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D, ___Return_0)); }
	inline bool get_Return_0() const { return ___Return_0; }
	inline bool* get_address_of_Return_0() { return &___Return_0; }
	inline void set_Return_0(bool value)
	{
		___Return_0 = value;
	}

	inline static int32_t get_offset_of_NextState_1() { return static_cast<int32_t>(offsetof(FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D, ___NextState_1)); }
	inline int32_t get_NextState_1() const { return ___NextState_1; }
	inline int32_t* get_address_of_NextState_1() { return &___NextState_1; }
	inline void set_NextState_1(int32_t value)
	{
		___NextState_1 = value;
	}

	inline static int32_t get_offset_of_L_2() { return static_cast<int32_t>(offsetof(FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D, ___L_2)); }
	inline Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * get_L_2() const { return ___L_2; }
	inline Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 ** get_address_of_L_2() { return &___L_2; }
	inline void set_L_2(Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * value)
	{
		___L_2 = value;
		Il2CppCodeGenWriteBarrier((&___L_2), value);
	}

	inline static int32_t get_offset_of_StateStack_3() { return static_cast<int32_t>(offsetof(FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D, ___StateStack_3)); }
	inline int32_t get_StateStack_3() const { return ___StateStack_3; }
	inline int32_t* get_address_of_StateStack_3() { return &___StateStack_3; }
	inline void set_StateStack_3(int32_t value)
	{
		___StateStack_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FSMCONTEXT_T85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D_H
#ifndef JSONMAPPER_TA14257A53DD844EF7B9D24051ED252AC1965A50F_H
#define JSONMAPPER_TA14257A53DD844EF7B9D24051ED252AC1965A50F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.JsonMapper
struct  JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F  : public RuntimeObject
{
public:

public:
};

struct JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields
{
public:
	// System.Int32 LitJson.JsonMapper::max_nesting_depth
	int32_t ___max_nesting_depth_0;
	// System.IFormatProvider LitJson.JsonMapper::datetime_format
	RuntimeObject* ___datetime_format_1;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc> LitJson.JsonMapper::base_exporters_table
	RuntimeObject* ___base_exporters_table_2;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc> LitJson.JsonMapper::custom_exporters_table
	RuntimeObject* ___custom_exporters_table_3;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>> LitJson.JsonMapper::base_importers_table
	RuntimeObject* ___base_importers_table_4;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>> LitJson.JsonMapper::custom_importers_table
	RuntimeObject* ___custom_importers_table_5;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata> LitJson.JsonMapper::array_metadata
	RuntimeObject* ___array_metadata_6;
	// System.Object LitJson.JsonMapper::array_metadata_lock
	RuntimeObject * ___array_metadata_lock_7;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>> LitJson.JsonMapper::conv_ops
	RuntimeObject* ___conv_ops_8;
	// System.Object LitJson.JsonMapper::conv_ops_lock
	RuntimeObject * ___conv_ops_lock_9;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata> LitJson.JsonMapper::object_metadata
	RuntimeObject* ___object_metadata_10;
	// System.Object LitJson.JsonMapper::object_metadata_lock
	RuntimeObject * ___object_metadata_lock_11;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>> LitJson.JsonMapper::type_properties
	RuntimeObject* ___type_properties_12;
	// System.Object LitJson.JsonMapper::type_properties_lock
	RuntimeObject * ___type_properties_lock_13;
	// LitJson.JsonWriter LitJson.JsonMapper::static_writer
	JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * ___static_writer_14;
	// System.Object LitJson.JsonMapper::static_writer_lock
	RuntimeObject * ___static_writer_lock_15;
	// LitJson.ExporterFunc LitJson.JsonMapper::CSU24<>9__CachedAnonymousMethodDelegatee
	ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegatee_16;
	// LitJson.ExporterFunc LitJson.JsonMapper::CSU24<>9__CachedAnonymousMethodDelegatef
	ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegatef_17;
	// LitJson.ExporterFunc LitJson.JsonMapper::CSU24<>9__CachedAnonymousMethodDelegate10
	ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate10_18;
	// LitJson.ExporterFunc LitJson.JsonMapper::CSU24<>9__CachedAnonymousMethodDelegate11
	ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate11_19;
	// LitJson.ExporterFunc LitJson.JsonMapper::CSU24<>9__CachedAnonymousMethodDelegate12
	ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate12_20;
	// LitJson.ExporterFunc LitJson.JsonMapper::CSU24<>9__CachedAnonymousMethodDelegate13
	ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate13_21;
	// LitJson.ExporterFunc LitJson.JsonMapper::CSU24<>9__CachedAnonymousMethodDelegate14
	ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate14_22;
	// LitJson.ExporterFunc LitJson.JsonMapper::CSU24<>9__CachedAnonymousMethodDelegate15
	ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate15_23;
	// LitJson.ExporterFunc LitJson.JsonMapper::CSU24<>9__CachedAnonymousMethodDelegate16
	ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate16_24;
	// LitJson.ImporterFunc LitJson.JsonMapper::CSU24<>9__CachedAnonymousMethodDelegate23
	ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate23_25;
	// LitJson.ImporterFunc LitJson.JsonMapper::CSU24<>9__CachedAnonymousMethodDelegate24
	ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate24_26;
	// LitJson.ImporterFunc LitJson.JsonMapper::CSU24<>9__CachedAnonymousMethodDelegate25
	ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate25_27;
	// LitJson.ImporterFunc LitJson.JsonMapper::CSU24<>9__CachedAnonymousMethodDelegate26
	ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate26_28;
	// LitJson.ImporterFunc LitJson.JsonMapper::CSU24<>9__CachedAnonymousMethodDelegate27
	ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate27_29;
	// LitJson.ImporterFunc LitJson.JsonMapper::CSU24<>9__CachedAnonymousMethodDelegate28
	ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate28_30;
	// LitJson.ImporterFunc LitJson.JsonMapper::CSU24<>9__CachedAnonymousMethodDelegate29
	ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate29_31;
	// LitJson.ImporterFunc LitJson.JsonMapper::CSU24<>9__CachedAnonymousMethodDelegate2a
	ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2a_32;
	// LitJson.ImporterFunc LitJson.JsonMapper::CSU24<>9__CachedAnonymousMethodDelegate2b
	ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2b_33;
	// LitJson.ImporterFunc LitJson.JsonMapper::CSU24<>9__CachedAnonymousMethodDelegate2c
	ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2c_34;
	// LitJson.ImporterFunc LitJson.JsonMapper::CSU24<>9__CachedAnonymousMethodDelegate2d
	ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2d_35;
	// LitJson.ImporterFunc LitJson.JsonMapper::CSU24<>9__CachedAnonymousMethodDelegate2e
	ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2e_36;
	// LitJson.WrapperFactory LitJson.JsonMapper::CSU24<>9__CachedAnonymousMethodDelegate35
	WrapperFactory_tD6F47E2E7EA3DDD74006601D884BD3D45744A27B * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate35_37;

public:
	inline static int32_t get_offset_of_max_nesting_depth_0() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___max_nesting_depth_0)); }
	inline int32_t get_max_nesting_depth_0() const { return ___max_nesting_depth_0; }
	inline int32_t* get_address_of_max_nesting_depth_0() { return &___max_nesting_depth_0; }
	inline void set_max_nesting_depth_0(int32_t value)
	{
		___max_nesting_depth_0 = value;
	}

	inline static int32_t get_offset_of_datetime_format_1() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___datetime_format_1)); }
	inline RuntimeObject* get_datetime_format_1() const { return ___datetime_format_1; }
	inline RuntimeObject** get_address_of_datetime_format_1() { return &___datetime_format_1; }
	inline void set_datetime_format_1(RuntimeObject* value)
	{
		___datetime_format_1 = value;
		Il2CppCodeGenWriteBarrier((&___datetime_format_1), value);
	}

	inline static int32_t get_offset_of_base_exporters_table_2() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___base_exporters_table_2)); }
	inline RuntimeObject* get_base_exporters_table_2() const { return ___base_exporters_table_2; }
	inline RuntimeObject** get_address_of_base_exporters_table_2() { return &___base_exporters_table_2; }
	inline void set_base_exporters_table_2(RuntimeObject* value)
	{
		___base_exporters_table_2 = value;
		Il2CppCodeGenWriteBarrier((&___base_exporters_table_2), value);
	}

	inline static int32_t get_offset_of_custom_exporters_table_3() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___custom_exporters_table_3)); }
	inline RuntimeObject* get_custom_exporters_table_3() const { return ___custom_exporters_table_3; }
	inline RuntimeObject** get_address_of_custom_exporters_table_3() { return &___custom_exporters_table_3; }
	inline void set_custom_exporters_table_3(RuntimeObject* value)
	{
		___custom_exporters_table_3 = value;
		Il2CppCodeGenWriteBarrier((&___custom_exporters_table_3), value);
	}

	inline static int32_t get_offset_of_base_importers_table_4() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___base_importers_table_4)); }
	inline RuntimeObject* get_base_importers_table_4() const { return ___base_importers_table_4; }
	inline RuntimeObject** get_address_of_base_importers_table_4() { return &___base_importers_table_4; }
	inline void set_base_importers_table_4(RuntimeObject* value)
	{
		___base_importers_table_4 = value;
		Il2CppCodeGenWriteBarrier((&___base_importers_table_4), value);
	}

	inline static int32_t get_offset_of_custom_importers_table_5() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___custom_importers_table_5)); }
	inline RuntimeObject* get_custom_importers_table_5() const { return ___custom_importers_table_5; }
	inline RuntimeObject** get_address_of_custom_importers_table_5() { return &___custom_importers_table_5; }
	inline void set_custom_importers_table_5(RuntimeObject* value)
	{
		___custom_importers_table_5 = value;
		Il2CppCodeGenWriteBarrier((&___custom_importers_table_5), value);
	}

	inline static int32_t get_offset_of_array_metadata_6() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___array_metadata_6)); }
	inline RuntimeObject* get_array_metadata_6() const { return ___array_metadata_6; }
	inline RuntimeObject** get_address_of_array_metadata_6() { return &___array_metadata_6; }
	inline void set_array_metadata_6(RuntimeObject* value)
	{
		___array_metadata_6 = value;
		Il2CppCodeGenWriteBarrier((&___array_metadata_6), value);
	}

	inline static int32_t get_offset_of_array_metadata_lock_7() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___array_metadata_lock_7)); }
	inline RuntimeObject * get_array_metadata_lock_7() const { return ___array_metadata_lock_7; }
	inline RuntimeObject ** get_address_of_array_metadata_lock_7() { return &___array_metadata_lock_7; }
	inline void set_array_metadata_lock_7(RuntimeObject * value)
	{
		___array_metadata_lock_7 = value;
		Il2CppCodeGenWriteBarrier((&___array_metadata_lock_7), value);
	}

	inline static int32_t get_offset_of_conv_ops_8() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___conv_ops_8)); }
	inline RuntimeObject* get_conv_ops_8() const { return ___conv_ops_8; }
	inline RuntimeObject** get_address_of_conv_ops_8() { return &___conv_ops_8; }
	inline void set_conv_ops_8(RuntimeObject* value)
	{
		___conv_ops_8 = value;
		Il2CppCodeGenWriteBarrier((&___conv_ops_8), value);
	}

	inline static int32_t get_offset_of_conv_ops_lock_9() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___conv_ops_lock_9)); }
	inline RuntimeObject * get_conv_ops_lock_9() const { return ___conv_ops_lock_9; }
	inline RuntimeObject ** get_address_of_conv_ops_lock_9() { return &___conv_ops_lock_9; }
	inline void set_conv_ops_lock_9(RuntimeObject * value)
	{
		___conv_ops_lock_9 = value;
		Il2CppCodeGenWriteBarrier((&___conv_ops_lock_9), value);
	}

	inline static int32_t get_offset_of_object_metadata_10() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___object_metadata_10)); }
	inline RuntimeObject* get_object_metadata_10() const { return ___object_metadata_10; }
	inline RuntimeObject** get_address_of_object_metadata_10() { return &___object_metadata_10; }
	inline void set_object_metadata_10(RuntimeObject* value)
	{
		___object_metadata_10 = value;
		Il2CppCodeGenWriteBarrier((&___object_metadata_10), value);
	}

	inline static int32_t get_offset_of_object_metadata_lock_11() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___object_metadata_lock_11)); }
	inline RuntimeObject * get_object_metadata_lock_11() const { return ___object_metadata_lock_11; }
	inline RuntimeObject ** get_address_of_object_metadata_lock_11() { return &___object_metadata_lock_11; }
	inline void set_object_metadata_lock_11(RuntimeObject * value)
	{
		___object_metadata_lock_11 = value;
		Il2CppCodeGenWriteBarrier((&___object_metadata_lock_11), value);
	}

	inline static int32_t get_offset_of_type_properties_12() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___type_properties_12)); }
	inline RuntimeObject* get_type_properties_12() const { return ___type_properties_12; }
	inline RuntimeObject** get_address_of_type_properties_12() { return &___type_properties_12; }
	inline void set_type_properties_12(RuntimeObject* value)
	{
		___type_properties_12 = value;
		Il2CppCodeGenWriteBarrier((&___type_properties_12), value);
	}

	inline static int32_t get_offset_of_type_properties_lock_13() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___type_properties_lock_13)); }
	inline RuntimeObject * get_type_properties_lock_13() const { return ___type_properties_lock_13; }
	inline RuntimeObject ** get_address_of_type_properties_lock_13() { return &___type_properties_lock_13; }
	inline void set_type_properties_lock_13(RuntimeObject * value)
	{
		___type_properties_lock_13 = value;
		Il2CppCodeGenWriteBarrier((&___type_properties_lock_13), value);
	}

	inline static int32_t get_offset_of_static_writer_14() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___static_writer_14)); }
	inline JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * get_static_writer_14() const { return ___static_writer_14; }
	inline JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 ** get_address_of_static_writer_14() { return &___static_writer_14; }
	inline void set_static_writer_14(JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * value)
	{
		___static_writer_14 = value;
		Il2CppCodeGenWriteBarrier((&___static_writer_14), value);
	}

	inline static int32_t get_offset_of_static_writer_lock_15() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___static_writer_lock_15)); }
	inline RuntimeObject * get_static_writer_lock_15() const { return ___static_writer_lock_15; }
	inline RuntimeObject ** get_address_of_static_writer_lock_15() { return &___static_writer_lock_15; }
	inline void set_static_writer_lock_15(RuntimeObject * value)
	{
		___static_writer_lock_15 = value;
		Il2CppCodeGenWriteBarrier((&___static_writer_lock_15), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegatee_16() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegatee_16)); }
	inline ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegatee_16() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegatee_16; }
	inline ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegatee_16() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegatee_16; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegatee_16(ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegatee_16 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegatee_16), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegatef_17() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegatef_17)); }
	inline ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegatef_17() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegatef_17; }
	inline ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegatef_17() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegatef_17; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegatef_17(ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegatef_17 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegatef_17), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate10_18() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate10_18)); }
	inline ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate10_18() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate10_18; }
	inline ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate10_18() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate10_18; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate10_18(ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate10_18 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate10_18), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate11_19() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate11_19)); }
	inline ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate11_19() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate11_19; }
	inline ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate11_19() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate11_19; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate11_19(ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate11_19 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate11_19), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate12_20() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate12_20)); }
	inline ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate12_20() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate12_20; }
	inline ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate12_20() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate12_20; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate12_20(ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate12_20 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate12_20), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate13_21() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate13_21)); }
	inline ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate13_21() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate13_21; }
	inline ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate13_21() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate13_21; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate13_21(ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate13_21 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate13_21), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate14_22() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate14_22)); }
	inline ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate14_22() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate14_22; }
	inline ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate14_22() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate14_22; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate14_22(ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate14_22 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate14_22), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate15_23() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate15_23)); }
	inline ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate15_23() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate15_23; }
	inline ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate15_23() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate15_23; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate15_23(ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate15_23 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate15_23), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate16_24() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate16_24)); }
	inline ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate16_24() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate16_24; }
	inline ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate16_24() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate16_24; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate16_24(ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate16_24 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate16_24), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate23_25() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate23_25)); }
	inline ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate23_25() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate23_25; }
	inline ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate23_25() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate23_25; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate23_25(ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate23_25 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate23_25), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate24_26() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate24_26)); }
	inline ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate24_26() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate24_26; }
	inline ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate24_26() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate24_26; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate24_26(ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate24_26 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate24_26), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate25_27() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate25_27)); }
	inline ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate25_27() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate25_27; }
	inline ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate25_27() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate25_27; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate25_27(ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate25_27 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate25_27), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate26_28() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate26_28)); }
	inline ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate26_28() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate26_28; }
	inline ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate26_28() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate26_28; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate26_28(ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate26_28 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate26_28), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate27_29() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate27_29)); }
	inline ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate27_29() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate27_29; }
	inline ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate27_29() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate27_29; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate27_29(ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate27_29 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate27_29), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate28_30() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate28_30)); }
	inline ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate28_30() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate28_30; }
	inline ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate28_30() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate28_30; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate28_30(ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate28_30 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate28_30), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate29_31() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate29_31)); }
	inline ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate29_31() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate29_31; }
	inline ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate29_31() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate29_31; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate29_31(ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate29_31 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate29_31), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate2a_32() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2a_32)); }
	inline ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate2a_32() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2a_32; }
	inline ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate2a_32() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate2a_32; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate2a_32(ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate2a_32 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate2a_32), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate2b_33() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2b_33)); }
	inline ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate2b_33() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2b_33; }
	inline ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate2b_33() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate2b_33; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate2b_33(ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate2b_33 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate2b_33), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate2c_34() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2c_34)); }
	inline ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate2c_34() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2c_34; }
	inline ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate2c_34() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate2c_34; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate2c_34(ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate2c_34 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate2c_34), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate2d_35() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2d_35)); }
	inline ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate2d_35() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2d_35; }
	inline ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate2d_35() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate2d_35; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate2d_35(ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate2d_35 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate2d_35), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate2e_36() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2e_36)); }
	inline ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate2e_36() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2e_36; }
	inline ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate2e_36() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate2e_36; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate2e_36(ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate2e_36 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate2e_36), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate35_37() { return static_cast<int32_t>(offsetof(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate35_37)); }
	inline WrapperFactory_tD6F47E2E7EA3DDD74006601D884BD3D45744A27B * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate35_37() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate35_37; }
	inline WrapperFactory_tD6F47E2E7EA3DDD74006601D884BD3D45744A27B ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate35_37() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate35_37; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate35_37(WrapperFactory_tD6F47E2E7EA3DDD74006601D884BD3D45744A27B * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate35_37 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate35_37), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONMAPPER_TA14257A53DD844EF7B9D24051ED252AC1965A50F_H
#ifndef JSONWRITER_TAF28D30464CA6AC9D6C88D360F5FD619323CE2B0_H
#define JSONWRITER_TAF28D30464CA6AC9D6C88D360F5FD619323CE2B0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.JsonWriter
struct  JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0  : public RuntimeObject
{
public:
	// LitJson.WriterContext LitJson.JsonWriter::context
	WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599 * ___context_1;
	// System.Collections.Generic.Stack`1<LitJson.WriterContext> LitJson.JsonWriter::ctx_stack
	Stack_1_t9BE5E659552248E69D386D8ABF17AAB698FA87E8 * ___ctx_stack_2;
	// System.Boolean LitJson.JsonWriter::has_reached_end
	bool ___has_reached_end_3;
	// System.Char[] LitJson.JsonWriter::hex_seq
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___hex_seq_4;
	// System.Int32 LitJson.JsonWriter::indentation
	int32_t ___indentation_5;
	// System.Int32 LitJson.JsonWriter::indent_value
	int32_t ___indent_value_6;
	// System.Text.StringBuilder LitJson.JsonWriter::inst_string_builder
	StringBuilder_t * ___inst_string_builder_7;
	// System.Boolean LitJson.JsonWriter::pretty_print
	bool ___pretty_print_8;
	// System.Boolean LitJson.JsonWriter::validate
	bool ___validate_9;
	// System.IO.TextWriter LitJson.JsonWriter::writer
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___writer_10;

public:
	inline static int32_t get_offset_of_context_1() { return static_cast<int32_t>(offsetof(JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0, ___context_1)); }
	inline WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599 * get_context_1() const { return ___context_1; }
	inline WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599 ** get_address_of_context_1() { return &___context_1; }
	inline void set_context_1(WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599 * value)
	{
		___context_1 = value;
		Il2CppCodeGenWriteBarrier((&___context_1), value);
	}

	inline static int32_t get_offset_of_ctx_stack_2() { return static_cast<int32_t>(offsetof(JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0, ___ctx_stack_2)); }
	inline Stack_1_t9BE5E659552248E69D386D8ABF17AAB698FA87E8 * get_ctx_stack_2() const { return ___ctx_stack_2; }
	inline Stack_1_t9BE5E659552248E69D386D8ABF17AAB698FA87E8 ** get_address_of_ctx_stack_2() { return &___ctx_stack_2; }
	inline void set_ctx_stack_2(Stack_1_t9BE5E659552248E69D386D8ABF17AAB698FA87E8 * value)
	{
		___ctx_stack_2 = value;
		Il2CppCodeGenWriteBarrier((&___ctx_stack_2), value);
	}

	inline static int32_t get_offset_of_has_reached_end_3() { return static_cast<int32_t>(offsetof(JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0, ___has_reached_end_3)); }
	inline bool get_has_reached_end_3() const { return ___has_reached_end_3; }
	inline bool* get_address_of_has_reached_end_3() { return &___has_reached_end_3; }
	inline void set_has_reached_end_3(bool value)
	{
		___has_reached_end_3 = value;
	}

	inline static int32_t get_offset_of_hex_seq_4() { return static_cast<int32_t>(offsetof(JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0, ___hex_seq_4)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_hex_seq_4() const { return ___hex_seq_4; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_hex_seq_4() { return &___hex_seq_4; }
	inline void set_hex_seq_4(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___hex_seq_4 = value;
		Il2CppCodeGenWriteBarrier((&___hex_seq_4), value);
	}

	inline static int32_t get_offset_of_indentation_5() { return static_cast<int32_t>(offsetof(JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0, ___indentation_5)); }
	inline int32_t get_indentation_5() const { return ___indentation_5; }
	inline int32_t* get_address_of_indentation_5() { return &___indentation_5; }
	inline void set_indentation_5(int32_t value)
	{
		___indentation_5 = value;
	}

	inline static int32_t get_offset_of_indent_value_6() { return static_cast<int32_t>(offsetof(JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0, ___indent_value_6)); }
	inline int32_t get_indent_value_6() const { return ___indent_value_6; }
	inline int32_t* get_address_of_indent_value_6() { return &___indent_value_6; }
	inline void set_indent_value_6(int32_t value)
	{
		___indent_value_6 = value;
	}

	inline static int32_t get_offset_of_inst_string_builder_7() { return static_cast<int32_t>(offsetof(JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0, ___inst_string_builder_7)); }
	inline StringBuilder_t * get_inst_string_builder_7() const { return ___inst_string_builder_7; }
	inline StringBuilder_t ** get_address_of_inst_string_builder_7() { return &___inst_string_builder_7; }
	inline void set_inst_string_builder_7(StringBuilder_t * value)
	{
		___inst_string_builder_7 = value;
		Il2CppCodeGenWriteBarrier((&___inst_string_builder_7), value);
	}

	inline static int32_t get_offset_of_pretty_print_8() { return static_cast<int32_t>(offsetof(JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0, ___pretty_print_8)); }
	inline bool get_pretty_print_8() const { return ___pretty_print_8; }
	inline bool* get_address_of_pretty_print_8() { return &___pretty_print_8; }
	inline void set_pretty_print_8(bool value)
	{
		___pretty_print_8 = value;
	}

	inline static int32_t get_offset_of_validate_9() { return static_cast<int32_t>(offsetof(JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0, ___validate_9)); }
	inline bool get_validate_9() const { return ___validate_9; }
	inline bool* get_address_of_validate_9() { return &___validate_9; }
	inline void set_validate_9(bool value)
	{
		___validate_9 = value;
	}

	inline static int32_t get_offset_of_writer_10() { return static_cast<int32_t>(offsetof(JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0, ___writer_10)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get_writer_10() const { return ___writer_10; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of_writer_10() { return &___writer_10; }
	inline void set_writer_10(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		___writer_10 = value;
		Il2CppCodeGenWriteBarrier((&___writer_10), value);
	}
};

struct JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo LitJson.JsonWriter::number_format
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___number_format_0;

public:
	inline static int32_t get_offset_of_number_format_0() { return static_cast<int32_t>(offsetof(JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0_StaticFields, ___number_format_0)); }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * get_number_format_0() const { return ___number_format_0; }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 ** get_address_of_number_format_0() { return &___number_format_0; }
	inline void set_number_format_0(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * value)
	{
		___number_format_0 = value;
		Il2CppCodeGenWriteBarrier((&___number_format_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONWRITER_TAF28D30464CA6AC9D6C88D360F5FD619323CE2B0_H
#ifndef LEXER_T290510AB89C5DF62CD2C676749100EEDB3A8B873_H
#define LEXER_T290510AB89C5DF62CD2C676749100EEDB3A8B873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.Lexer
struct  Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873  : public RuntimeObject
{
public:
	// System.Boolean LitJson.Lexer::allow_comments
	bool ___allow_comments_2;
	// System.Boolean LitJson.Lexer::allow_single_quoted_strings
	bool ___allow_single_quoted_strings_3;
	// System.Boolean LitJson.Lexer::end_of_input
	bool ___end_of_input_4;
	// LitJson.FsmContext LitJson.Lexer::fsm_context
	FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * ___fsm_context_5;
	// System.Int32 LitJson.Lexer::input_buffer
	int32_t ___input_buffer_6;
	// System.Int32 LitJson.Lexer::input_char
	int32_t ___input_char_7;
	// System.IO.TextReader LitJson.Lexer::reader
	TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * ___reader_8;
	// System.Int32 LitJson.Lexer::state
	int32_t ___state_9;
	// System.Text.StringBuilder LitJson.Lexer::string_buffer
	StringBuilder_t * ___string_buffer_10;
	// System.String LitJson.Lexer::string_value
	String_t* ___string_value_11;
	// System.Int32 LitJson.Lexer::token
	int32_t ___token_12;
	// System.Int32 LitJson.Lexer::unichar
	int32_t ___unichar_13;

public:
	inline static int32_t get_offset_of_allow_comments_2() { return static_cast<int32_t>(offsetof(Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873, ___allow_comments_2)); }
	inline bool get_allow_comments_2() const { return ___allow_comments_2; }
	inline bool* get_address_of_allow_comments_2() { return &___allow_comments_2; }
	inline void set_allow_comments_2(bool value)
	{
		___allow_comments_2 = value;
	}

	inline static int32_t get_offset_of_allow_single_quoted_strings_3() { return static_cast<int32_t>(offsetof(Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873, ___allow_single_quoted_strings_3)); }
	inline bool get_allow_single_quoted_strings_3() const { return ___allow_single_quoted_strings_3; }
	inline bool* get_address_of_allow_single_quoted_strings_3() { return &___allow_single_quoted_strings_3; }
	inline void set_allow_single_quoted_strings_3(bool value)
	{
		___allow_single_quoted_strings_3 = value;
	}

	inline static int32_t get_offset_of_end_of_input_4() { return static_cast<int32_t>(offsetof(Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873, ___end_of_input_4)); }
	inline bool get_end_of_input_4() const { return ___end_of_input_4; }
	inline bool* get_address_of_end_of_input_4() { return &___end_of_input_4; }
	inline void set_end_of_input_4(bool value)
	{
		___end_of_input_4 = value;
	}

	inline static int32_t get_offset_of_fsm_context_5() { return static_cast<int32_t>(offsetof(Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873, ___fsm_context_5)); }
	inline FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * get_fsm_context_5() const { return ___fsm_context_5; }
	inline FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D ** get_address_of_fsm_context_5() { return &___fsm_context_5; }
	inline void set_fsm_context_5(FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * value)
	{
		___fsm_context_5 = value;
		Il2CppCodeGenWriteBarrier((&___fsm_context_5), value);
	}

	inline static int32_t get_offset_of_input_buffer_6() { return static_cast<int32_t>(offsetof(Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873, ___input_buffer_6)); }
	inline int32_t get_input_buffer_6() const { return ___input_buffer_6; }
	inline int32_t* get_address_of_input_buffer_6() { return &___input_buffer_6; }
	inline void set_input_buffer_6(int32_t value)
	{
		___input_buffer_6 = value;
	}

	inline static int32_t get_offset_of_input_char_7() { return static_cast<int32_t>(offsetof(Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873, ___input_char_7)); }
	inline int32_t get_input_char_7() const { return ___input_char_7; }
	inline int32_t* get_address_of_input_char_7() { return &___input_char_7; }
	inline void set_input_char_7(int32_t value)
	{
		___input_char_7 = value;
	}

	inline static int32_t get_offset_of_reader_8() { return static_cast<int32_t>(offsetof(Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873, ___reader_8)); }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * get_reader_8() const { return ___reader_8; }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A ** get_address_of_reader_8() { return &___reader_8; }
	inline void set_reader_8(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * value)
	{
		___reader_8 = value;
		Il2CppCodeGenWriteBarrier((&___reader_8), value);
	}

	inline static int32_t get_offset_of_state_9() { return static_cast<int32_t>(offsetof(Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873, ___state_9)); }
	inline int32_t get_state_9() const { return ___state_9; }
	inline int32_t* get_address_of_state_9() { return &___state_9; }
	inline void set_state_9(int32_t value)
	{
		___state_9 = value;
	}

	inline static int32_t get_offset_of_string_buffer_10() { return static_cast<int32_t>(offsetof(Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873, ___string_buffer_10)); }
	inline StringBuilder_t * get_string_buffer_10() const { return ___string_buffer_10; }
	inline StringBuilder_t ** get_address_of_string_buffer_10() { return &___string_buffer_10; }
	inline void set_string_buffer_10(StringBuilder_t * value)
	{
		___string_buffer_10 = value;
		Il2CppCodeGenWriteBarrier((&___string_buffer_10), value);
	}

	inline static int32_t get_offset_of_string_value_11() { return static_cast<int32_t>(offsetof(Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873, ___string_value_11)); }
	inline String_t* get_string_value_11() const { return ___string_value_11; }
	inline String_t** get_address_of_string_value_11() { return &___string_value_11; }
	inline void set_string_value_11(String_t* value)
	{
		___string_value_11 = value;
		Il2CppCodeGenWriteBarrier((&___string_value_11), value);
	}

	inline static int32_t get_offset_of_token_12() { return static_cast<int32_t>(offsetof(Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873, ___token_12)); }
	inline int32_t get_token_12() const { return ___token_12; }
	inline int32_t* get_address_of_token_12() { return &___token_12; }
	inline void set_token_12(int32_t value)
	{
		___token_12 = value;
	}

	inline static int32_t get_offset_of_unichar_13() { return static_cast<int32_t>(offsetof(Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873, ___unichar_13)); }
	inline int32_t get_unichar_13() const { return ___unichar_13; }
	inline int32_t* get_address_of_unichar_13() { return &___unichar_13; }
	inline void set_unichar_13(int32_t value)
	{
		___unichar_13 = value;
	}
};

struct Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873_StaticFields
{
public:
	// System.Int32[] LitJson.Lexer::fsm_return_table
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___fsm_return_table_0;
	// LitJson.Lexer_StateHandler[] LitJson.Lexer::fsm_handler_table
	StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67* ___fsm_handler_table_1;

public:
	inline static int32_t get_offset_of_fsm_return_table_0() { return static_cast<int32_t>(offsetof(Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873_StaticFields, ___fsm_return_table_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_fsm_return_table_0() const { return ___fsm_return_table_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_fsm_return_table_0() { return &___fsm_return_table_0; }
	inline void set_fsm_return_table_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___fsm_return_table_0 = value;
		Il2CppCodeGenWriteBarrier((&___fsm_return_table_0), value);
	}

	inline static int32_t get_offset_of_fsm_handler_table_1() { return static_cast<int32_t>(offsetof(Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873_StaticFields, ___fsm_handler_table_1)); }
	inline StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67* get_fsm_handler_table_1() const { return ___fsm_handler_table_1; }
	inline StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67** get_address_of_fsm_handler_table_1() { return &___fsm_handler_table_1; }
	inline void set_fsm_handler_table_1(StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67* value)
	{
		___fsm_handler_table_1 = value;
		Il2CppCodeGenWriteBarrier((&___fsm_handler_table_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEXER_T290510AB89C5DF62CD2C676749100EEDB3A8B873_H
#ifndef ORDEREDDICTIONARYENUMERATOR_TFDD06F58C7165948CC4ED07A4F1915F314DA9582_H
#define ORDEREDDICTIONARYENUMERATOR_TFDD06F58C7165948CC4ED07A4F1915F314DA9582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.OrderedDictionaryEnumerator
struct  OrderedDictionaryEnumerator_tFDD06F58C7165948CC4ED07A4F1915F314DA9582  : public RuntimeObject
{
public:
	// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>> LitJson.OrderedDictionaryEnumerator::list_enumerator
	RuntimeObject* ___list_enumerator_0;

public:
	inline static int32_t get_offset_of_list_enumerator_0() { return static_cast<int32_t>(offsetof(OrderedDictionaryEnumerator_tFDD06F58C7165948CC4ED07A4F1915F314DA9582, ___list_enumerator_0)); }
	inline RuntimeObject* get_list_enumerator_0() const { return ___list_enumerator_0; }
	inline RuntimeObject** get_address_of_list_enumerator_0() { return &___list_enumerator_0; }
	inline void set_list_enumerator_0(RuntimeObject* value)
	{
		___list_enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDEREDDICTIONARYENUMERATOR_TFDD06F58C7165948CC4ED07A4F1915F314DA9582_H
#ifndef WRITERCONTEXT_TF8EA6022A4FD5C8CDE3259696A2679111428E599_H
#define WRITERCONTEXT_TF8EA6022A4FD5C8CDE3259696A2679111428E599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.WriterContext
struct  WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599  : public RuntimeObject
{
public:
	// System.Int32 LitJson.WriterContext::Count
	int32_t ___Count_0;
	// System.Boolean LitJson.WriterContext::InArray
	bool ___InArray_1;
	// System.Boolean LitJson.WriterContext::InObject
	bool ___InObject_2;
	// System.Boolean LitJson.WriterContext::ExpectingValue
	bool ___ExpectingValue_3;

public:
	inline static int32_t get_offset_of_Count_0() { return static_cast<int32_t>(offsetof(WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599, ___Count_0)); }
	inline int32_t get_Count_0() const { return ___Count_0; }
	inline int32_t* get_address_of_Count_0() { return &___Count_0; }
	inline void set_Count_0(int32_t value)
	{
		___Count_0 = value;
	}

	inline static int32_t get_offset_of_InArray_1() { return static_cast<int32_t>(offsetof(WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599, ___InArray_1)); }
	inline bool get_InArray_1() const { return ___InArray_1; }
	inline bool* get_address_of_InArray_1() { return &___InArray_1; }
	inline void set_InArray_1(bool value)
	{
		___InArray_1 = value;
	}

	inline static int32_t get_offset_of_InObject_2() { return static_cast<int32_t>(offsetof(WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599, ___InObject_2)); }
	inline bool get_InObject_2() const { return ___InObject_2; }
	inline bool* get_address_of_InObject_2() { return &___InObject_2; }
	inline void set_InObject_2(bool value)
	{
		___InObject_2 = value;
	}

	inline static int32_t get_offset_of_ExpectingValue_3() { return static_cast<int32_t>(offsetof(WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599, ___ExpectingValue_3)); }
	inline bool get_ExpectingValue_3() const { return ___ExpectingValue_3; }
	inline bool* get_address_of_ExpectingValue_3() { return &___ExpectingValue_3; }
	inline void set_ExpectingValue_3(bool value)
	{
		___ExpectingValue_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITERCONTEXT_TF8EA6022A4FD5C8CDE3259696A2679111428E599_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef DICTIONARY_2_T80A4344788DF906C4D1539D0AE15D60C7DE12BC3_H
#define DICTIONARY_2_T80A4344788DF906C4D1539D0AE15D60C7DE12BC3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct  Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t28759DBAE44315B5929179799792B97DE5DB25E2* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t63F680C82A33FC3793AE963A33F2250E5C5EF1AE * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t6BE1386C47B8E32088CAF0D43DA72A1ED0385750 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3, ___entries_1)); }
	inline EntryU5BU5D_t28759DBAE44315B5929179799792B97DE5DB25E2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t28759DBAE44315B5929179799792B97DE5DB25E2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t28759DBAE44315B5929179799792B97DE5DB25E2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3, ___keys_7)); }
	inline KeyCollection_t63F680C82A33FC3793AE963A33F2250E5C5EF1AE * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t63F680C82A33FC3793AE963A33F2250E5C5EF1AE ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t63F680C82A33FC3793AE963A33F2250E5C5EF1AE * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3, ___values_8)); }
	inline ValueCollection_t6BE1386C47B8E32088CAF0D43DA72A1ED0385750 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t6BE1386C47B8E32088CAF0D43DA72A1ED0385750 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t6BE1386C47B8E32088CAF0D43DA72A1ED0385750 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T80A4344788DF906C4D1539D0AE15D60C7DE12BC3_H
#ifndef DICTIONARY_2_T477CA2C652D1F39897DBB5DB01D89103617494AE_H
#define DICTIONARY_2_T477CA2C652D1F39897DBB5DB01D89103617494AE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>
struct  Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t31B057DC7F4CBFA24AB5FFF59530E363FF1B06FC* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tB85600776EB0BD69C4D2030FA8AC13530E9790A4 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t68254222DF83AE333AFEB4D893EF39E55B8AC583 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE, ___entries_1)); }
	inline EntryU5BU5D_t31B057DC7F4CBFA24AB5FFF59530E363FF1B06FC* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t31B057DC7F4CBFA24AB5FFF59530E363FF1B06FC** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t31B057DC7F4CBFA24AB5FFF59530E363FF1B06FC* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE, ___keys_7)); }
	inline KeyCollection_tB85600776EB0BD69C4D2030FA8AC13530E9790A4 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tB85600776EB0BD69C4D2030FA8AC13530E9790A4 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tB85600776EB0BD69C4D2030FA8AC13530E9790A4 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE, ___values_8)); }
	inline ValueCollection_t68254222DF83AE333AFEB4D893EF39E55B8AC583 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t68254222DF83AE333AFEB4D893EF39E55B8AC583 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t68254222DF83AE333AFEB4D893EF39E55B8AC583 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T477CA2C652D1F39897DBB5DB01D89103617494AE_H
#ifndef DICTIONARY_2_TAAD76381AA8A9C2DAA7F822E65E65360336B92CB_H
#define DICTIONARY_2_TAAD76381AA8A9C2DAA7F822E65E65360336B92CB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>
struct  Dictionary_2_tAAD76381AA8A9C2DAA7F822E65E65360336B92CB  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t883D8D553B6A527A2193F3A5284F94CF01BF7842* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t60DF7934FD37E2D8E749F967F589363A199A52BA * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA27427715025ED03F1CD4995FE25B4102F7080CC * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tAAD76381AA8A9C2DAA7F822E65E65360336B92CB, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tAAD76381AA8A9C2DAA7F822E65E65360336B92CB, ___entries_1)); }
	inline EntryU5BU5D_t883D8D553B6A527A2193F3A5284F94CF01BF7842* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t883D8D553B6A527A2193F3A5284F94CF01BF7842** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t883D8D553B6A527A2193F3A5284F94CF01BF7842* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tAAD76381AA8A9C2DAA7F822E65E65360336B92CB, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tAAD76381AA8A9C2DAA7F822E65E65360336B92CB, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tAAD76381AA8A9C2DAA7F822E65E65360336B92CB, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tAAD76381AA8A9C2DAA7F822E65E65360336B92CB, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tAAD76381AA8A9C2DAA7F822E65E65360336B92CB, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tAAD76381AA8A9C2DAA7F822E65E65360336B92CB, ___keys_7)); }
	inline KeyCollection_t60DF7934FD37E2D8E749F967F589363A199A52BA * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t60DF7934FD37E2D8E749F967F589363A199A52BA ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t60DF7934FD37E2D8E749F967F589363A199A52BA * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tAAD76381AA8A9C2DAA7F822E65E65360336B92CB, ___values_8)); }
	inline ValueCollection_tA27427715025ED03F1CD4995FE25B4102F7080CC * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA27427715025ED03F1CD4995FE25B4102F7080CC ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA27427715025ED03F1CD4995FE25B4102F7080CC * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tAAD76381AA8A9C2DAA7F822E65E65360336B92CB, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_TAAD76381AA8A9C2DAA7F822E65E65360336B92CB_H
#ifndef DICTIONARY_2_TFA2B52DD1261DEC7A22FBF5CE7F9C8D05AFCBD2E_H
#define DICTIONARY_2_TFA2B52DD1261DEC7A22FBF5CE7F9C8D05AFCBD2E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>
struct  Dictionary_2_tFA2B52DD1261DEC7A22FBF5CE7F9C8D05AFCBD2E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tF901BA54E220113C78FB7859F122756AFE7B6B90* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t1680F6D7927A00C26CD495C4F999983854BBF466 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t82D40A1666506841CA3F26D52BFB4654BEFBC335 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tFA2B52DD1261DEC7A22FBF5CE7F9C8D05AFCBD2E, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tFA2B52DD1261DEC7A22FBF5CE7F9C8D05AFCBD2E, ___entries_1)); }
	inline EntryU5BU5D_tF901BA54E220113C78FB7859F122756AFE7B6B90* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tF901BA54E220113C78FB7859F122756AFE7B6B90** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tF901BA54E220113C78FB7859F122756AFE7B6B90* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tFA2B52DD1261DEC7A22FBF5CE7F9C8D05AFCBD2E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tFA2B52DD1261DEC7A22FBF5CE7F9C8D05AFCBD2E, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tFA2B52DD1261DEC7A22FBF5CE7F9C8D05AFCBD2E, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tFA2B52DD1261DEC7A22FBF5CE7F9C8D05AFCBD2E, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tFA2B52DD1261DEC7A22FBF5CE7F9C8D05AFCBD2E, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tFA2B52DD1261DEC7A22FBF5CE7F9C8D05AFCBD2E, ___keys_7)); }
	inline KeyCollection_t1680F6D7927A00C26CD495C4F999983854BBF466 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t1680F6D7927A00C26CD495C4F999983854BBF466 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t1680F6D7927A00C26CD495C4F999983854BBF466 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tFA2B52DD1261DEC7A22FBF5CE7F9C8D05AFCBD2E, ___values_8)); }
	inline ValueCollection_t82D40A1666506841CA3F26D52BFB4654BEFBC335 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t82D40A1666506841CA3F26D52BFB4654BEFBC335 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t82D40A1666506841CA3F26D52BFB4654BEFBC335 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tFA2B52DD1261DEC7A22FBF5CE7F9C8D05AFCBD2E, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_TFA2B52DD1261DEC7A22FBF5CE7F9C8D05AFCBD2E_H
#ifndef DICTIONARY_2_T14B09BA64A95342370FBBE383B5B76B0689EF397_H
#define DICTIONARY_2_T14B09BA64A95342370FBBE383B5B76B0689EF397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>
struct  Dictionary_2_t14B09BA64A95342370FBBE383B5B76B0689EF397  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tEA000513B78CF46CAD5C38FB203F8ACBFD659864* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tBF703A0A6612785AF7C9F1775F106232963FDD15 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t932A8C638ED846D8092692E109BC4ED7BEAB8B3A * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t14B09BA64A95342370FBBE383B5B76B0689EF397, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t14B09BA64A95342370FBBE383B5B76B0689EF397, ___entries_1)); }
	inline EntryU5BU5D_tEA000513B78CF46CAD5C38FB203F8ACBFD659864* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tEA000513B78CF46CAD5C38FB203F8ACBFD659864** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tEA000513B78CF46CAD5C38FB203F8ACBFD659864* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t14B09BA64A95342370FBBE383B5B76B0689EF397, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t14B09BA64A95342370FBBE383B5B76B0689EF397, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t14B09BA64A95342370FBBE383B5B76B0689EF397, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t14B09BA64A95342370FBBE383B5B76B0689EF397, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t14B09BA64A95342370FBBE383B5B76B0689EF397, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t14B09BA64A95342370FBBE383B5B76B0689EF397, ___keys_7)); }
	inline KeyCollection_tBF703A0A6612785AF7C9F1775F106232963FDD15 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tBF703A0A6612785AF7C9F1775F106232963FDD15 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tBF703A0A6612785AF7C9F1775F106232963FDD15 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t14B09BA64A95342370FBBE383B5B76B0689EF397, ___values_8)); }
	inline ValueCollection_t932A8C638ED846D8092692E109BC4ED7BEAB8B3A * get_values_8() const { return ___values_8; }
	inline ValueCollection_t932A8C638ED846D8092692E109BC4ED7BEAB8B3A ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t932A8C638ED846D8092692E109BC4ED7BEAB8B3A * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t14B09BA64A95342370FBBE383B5B76B0689EF397, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T14B09BA64A95342370FBBE383B5B76B0689EF397_H
#ifndef DICTIONARY_2_T4D409F73FC7FC65765AB8AA78A71F3D0C9881B9E_H
#define DICTIONARY_2_T4D409F73FC7FC65765AB8AA78A71F3D0C9881B9E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>
struct  Dictionary_2_t4D409F73FC7FC65765AB8AA78A71F3D0C9881B9E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t201119441E55E39429E66C3C044F1B0C019D445D* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tAC4A0D75CF3FF6668E4AAA643BC93029CB8D7F15 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t81F0AF359A685079918C13B5DDE84D1537D6F224 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t4D409F73FC7FC65765AB8AA78A71F3D0C9881B9E, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t4D409F73FC7FC65765AB8AA78A71F3D0C9881B9E, ___entries_1)); }
	inline EntryU5BU5D_t201119441E55E39429E66C3C044F1B0C019D445D* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t201119441E55E39429E66C3C044F1B0C019D445D** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t201119441E55E39429E66C3C044F1B0C019D445D* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t4D409F73FC7FC65765AB8AA78A71F3D0C9881B9E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t4D409F73FC7FC65765AB8AA78A71F3D0C9881B9E, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t4D409F73FC7FC65765AB8AA78A71F3D0C9881B9E, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t4D409F73FC7FC65765AB8AA78A71F3D0C9881B9E, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t4D409F73FC7FC65765AB8AA78A71F3D0C9881B9E, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t4D409F73FC7FC65765AB8AA78A71F3D0C9881B9E, ___keys_7)); }
	inline KeyCollection_tAC4A0D75CF3FF6668E4AAA643BC93029CB8D7F15 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tAC4A0D75CF3FF6668E4AAA643BC93029CB8D7F15 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tAC4A0D75CF3FF6668E4AAA643BC93029CB8D7F15 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t4D409F73FC7FC65765AB8AA78A71F3D0C9881B9E, ___values_8)); }
	inline ValueCollection_t81F0AF359A685079918C13B5DDE84D1537D6F224 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t81F0AF359A685079918C13B5DDE84D1537D6F224 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t81F0AF359A685079918C13B5DDE84D1537D6F224 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t4D409F73FC7FC65765AB8AA78A71F3D0C9881B9E, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T4D409F73FC7FC65765AB8AA78A71F3D0C9881B9E_H
#ifndef DICTIONARY_2_T9A46E2E31B1630C81E3DD6A97FA8738B0434B0CE_H
#define DICTIONARY_2_T9A46E2E31B1630C81E3DD6A97FA8738B0434B0CE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>
struct  Dictionary_2_t9A46E2E31B1630C81E3DD6A97FA8738B0434B0CE  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t95A4B7DC1030C58DA1ACDB4A3301D5D9F644F7BD* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t4AC1931998E1778E7222C485E2D14EA7E1FB2063 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t39E2F7F3BA22C0A8073519F575F476CF8494622A * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t9A46E2E31B1630C81E3DD6A97FA8738B0434B0CE, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t9A46E2E31B1630C81E3DD6A97FA8738B0434B0CE, ___entries_1)); }
	inline EntryU5BU5D_t95A4B7DC1030C58DA1ACDB4A3301D5D9F644F7BD* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t95A4B7DC1030C58DA1ACDB4A3301D5D9F644F7BD** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t95A4B7DC1030C58DA1ACDB4A3301D5D9F644F7BD* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t9A46E2E31B1630C81E3DD6A97FA8738B0434B0CE, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t9A46E2E31B1630C81E3DD6A97FA8738B0434B0CE, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t9A46E2E31B1630C81E3DD6A97FA8738B0434B0CE, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t9A46E2E31B1630C81E3DD6A97FA8738B0434B0CE, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t9A46E2E31B1630C81E3DD6A97FA8738B0434B0CE, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t9A46E2E31B1630C81E3DD6A97FA8738B0434B0CE, ___keys_7)); }
	inline KeyCollection_t4AC1931998E1778E7222C485E2D14EA7E1FB2063 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t4AC1931998E1778E7222C485E2D14EA7E1FB2063 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t4AC1931998E1778E7222C485E2D14EA7E1FB2063 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t9A46E2E31B1630C81E3DD6A97FA8738B0434B0CE, ___values_8)); }
	inline ValueCollection_t39E2F7F3BA22C0A8073519F575F476CF8494622A * get_values_8() const { return ___values_8; }
	inline ValueCollection_t39E2F7F3BA22C0A8073519F575F476CF8494622A ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t39E2F7F3BA22C0A8073519F575F476CF8494622A * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t9A46E2E31B1630C81E3DD6A97FA8738B0434B0CE, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T9A46E2E31B1630C81E3DD6A97FA8738B0434B0CE_H
#ifndef DICTIONARY_2_TD521C872BCC3C52150F3E3444D0A966E731D0646_H
#define DICTIONARY_2_TD521C872BCC3C52150F3E3444D0A966E731D0646_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct  Dictionary_2_tD521C872BCC3C52150F3E3444D0A966E731D0646  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t9A2213898D29FCCFA7A6F586808431F403C1A463* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tB77625236E8F89328D5F48859C75FDED69AE6C16 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t701E3B8CF060E635BDBB8643BE39ACEBB2DBD1E2 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tD521C872BCC3C52150F3E3444D0A966E731D0646, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tD521C872BCC3C52150F3E3444D0A966E731D0646, ___entries_1)); }
	inline EntryU5BU5D_t9A2213898D29FCCFA7A6F586808431F403C1A463* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t9A2213898D29FCCFA7A6F586808431F403C1A463** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t9A2213898D29FCCFA7A6F586808431F403C1A463* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tD521C872BCC3C52150F3E3444D0A966E731D0646, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tD521C872BCC3C52150F3E3444D0A966E731D0646, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tD521C872BCC3C52150F3E3444D0A966E731D0646, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tD521C872BCC3C52150F3E3444D0A966E731D0646, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tD521C872BCC3C52150F3E3444D0A966E731D0646, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tD521C872BCC3C52150F3E3444D0A966E731D0646, ___keys_7)); }
	inline KeyCollection_tB77625236E8F89328D5F48859C75FDED69AE6C16 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tB77625236E8F89328D5F48859C75FDED69AE6C16 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tB77625236E8F89328D5F48859C75FDED69AE6C16 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tD521C872BCC3C52150F3E3444D0A966E731D0646, ___values_8)); }
	inline ValueCollection_t701E3B8CF060E635BDBB8643BE39ACEBB2DBD1E2 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t701E3B8CF060E635BDBB8643BE39ACEBB2DBD1E2 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t701E3B8CF060E635BDBB8643BE39ACEBB2DBD1E2 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tD521C872BCC3C52150F3E3444D0A966E731D0646, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_TD521C872BCC3C52150F3E3444D0A966E731D0646_H
#ifndef DICTIONARY_2_T6D3D99CBC25EE863935D988A029FB759F204C7F5_H
#define DICTIONARY_2_T6D3D99CBC25EE863935D988A029FB759F204C7F5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct  Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tBB2B8A281E7B847B2DDAD3C7F079372D49F34F0F* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tC7DEB2DD70F4CC603C46A8C70D75706B68C65C8E * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB2C300E4E1D61620CEB2EDE73BBF70831A24CFF6 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5, ___entries_1)); }
	inline EntryU5BU5D_tBB2B8A281E7B847B2DDAD3C7F079372D49F34F0F* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tBB2B8A281E7B847B2DDAD3C7F079372D49F34F0F** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tBB2B8A281E7B847B2DDAD3C7F079372D49F34F0F* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5, ___keys_7)); }
	inline KeyCollection_tC7DEB2DD70F4CC603C46A8C70D75706B68C65C8E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC7DEB2DD70F4CC603C46A8C70D75706B68C65C8E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC7DEB2DD70F4CC603C46A8C70D75706B68C65C8E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5, ___values_8)); }
	inline ValueCollection_tB2C300E4E1D61620CEB2EDE73BBF70831A24CFF6 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB2C300E4E1D61620CEB2EDE73BBF70831A24CFF6 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB2C300E4E1D61620CEB2EDE73BBF70831A24CFF6 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T6D3D99CBC25EE863935D988A029FB759F204C7F5_H
#ifndef DICTIONARY_2_T34BE080DAD42913E622AD0FE20BD6A379003BE04_H
#define DICTIONARY_2_T34BE080DAD42913E622AD0FE20BD6A379003BE04_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct  Dictionary_2_t34BE080DAD42913E622AD0FE20BD6A379003BE04  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tE2E2D6374D732A1B8AE8EF97A84BE843F073DF0D* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t76049F1D7BBED1DC1B67AD2A36B4E3FFA87D04A8 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t761CD08DD05A810DF607330EACFF9699ADDE3938 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t34BE080DAD42913E622AD0FE20BD6A379003BE04, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t34BE080DAD42913E622AD0FE20BD6A379003BE04, ___entries_1)); }
	inline EntryU5BU5D_tE2E2D6374D732A1B8AE8EF97A84BE843F073DF0D* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tE2E2D6374D732A1B8AE8EF97A84BE843F073DF0D** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tE2E2D6374D732A1B8AE8EF97A84BE843F073DF0D* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t34BE080DAD42913E622AD0FE20BD6A379003BE04, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t34BE080DAD42913E622AD0FE20BD6A379003BE04, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t34BE080DAD42913E622AD0FE20BD6A379003BE04, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t34BE080DAD42913E622AD0FE20BD6A379003BE04, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t34BE080DAD42913E622AD0FE20BD6A379003BE04, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t34BE080DAD42913E622AD0FE20BD6A379003BE04, ___keys_7)); }
	inline KeyCollection_t76049F1D7BBED1DC1B67AD2A36B4E3FFA87D04A8 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t76049F1D7BBED1DC1B67AD2A36B4E3FFA87D04A8 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t76049F1D7BBED1DC1B67AD2A36B4E3FFA87D04A8 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t34BE080DAD42913E622AD0FE20BD6A379003BE04, ___values_8)); }
	inline ValueCollection_t761CD08DD05A810DF607330EACFF9699ADDE3938 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t761CD08DD05A810DF607330EACFF9699ADDE3938 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t761CD08DD05A810DF607330EACFF9699ADDE3938 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t34BE080DAD42913E622AD0FE20BD6A379003BE04, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T34BE080DAD42913E622AD0FE20BD6A379003BE04_H
#ifndef LIST_1_TAC22C8BB212278977BEF79BF725D95125D45C668_H
#define LIST_1_TAC22C8BB212278977BEF79BF725D95125D45C668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<LitJson.JsonData>
struct  List_1_tAC22C8BB212278977BEF79BF725D95125D45C668  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	JsonDataU5BU5D_tB1429BA5060E6107F368B107864DAB8234EB134D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tAC22C8BB212278977BEF79BF725D95125D45C668, ____items_1)); }
	inline JsonDataU5BU5D_tB1429BA5060E6107F368B107864DAB8234EB134D* get__items_1() const { return ____items_1; }
	inline JsonDataU5BU5D_tB1429BA5060E6107F368B107864DAB8234EB134D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(JsonDataU5BU5D_tB1429BA5060E6107F368B107864DAB8234EB134D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tAC22C8BB212278977BEF79BF725D95125D45C668, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tAC22C8BB212278977BEF79BF725D95125D45C668, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tAC22C8BB212278977BEF79BF725D95125D45C668, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tAC22C8BB212278977BEF79BF725D95125D45C668_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	JsonDataU5BU5D_tB1429BA5060E6107F368B107864DAB8234EB134D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tAC22C8BB212278977BEF79BF725D95125D45C668_StaticFields, ____emptyArray_5)); }
	inline JsonDataU5BU5D_tB1429BA5060E6107F368B107864DAB8234EB134D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline JsonDataU5BU5D_tB1429BA5060E6107F368B107864DAB8234EB134D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(JsonDataU5BU5D_tB1429BA5060E6107F368B107864DAB8234EB134D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TAC22C8BB212278977BEF79BF725D95125D45C668_H
#ifndef LIST_1_TAD8AAFA778AEF0545ADDFC9DB7AD3BB15D7CB284_H
#define LIST_1_TAD8AAFA778AEF0545ADDFC9DB7AD3BB15D7CB284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct  List_1_tAD8AAFA778AEF0545ADDFC9DB7AD3BB15D7CB284  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_tA633C51FD293257E4C29B35BAC77953B2173DA3B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tAD8AAFA778AEF0545ADDFC9DB7AD3BB15D7CB284, ____items_1)); }
	inline KeyValuePair_2U5BU5D_tA633C51FD293257E4C29B35BAC77953B2173DA3B* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_tA633C51FD293257E4C29B35BAC77953B2173DA3B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_tA633C51FD293257E4C29B35BAC77953B2173DA3B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tAD8AAFA778AEF0545ADDFC9DB7AD3BB15D7CB284, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tAD8AAFA778AEF0545ADDFC9DB7AD3BB15D7CB284, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tAD8AAFA778AEF0545ADDFC9DB7AD3BB15D7CB284, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tAD8AAFA778AEF0545ADDFC9DB7AD3BB15D7CB284_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyValuePair_2U5BU5D_tA633C51FD293257E4C29B35BAC77953B2173DA3B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tAD8AAFA778AEF0545ADDFC9DB7AD3BB15D7CB284_StaticFields, ____emptyArray_5)); }
	inline KeyValuePair_2U5BU5D_tA633C51FD293257E4C29B35BAC77953B2173DA3B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyValuePair_2U5BU5D_tA633C51FD293257E4C29B35BAC77953B2173DA3B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyValuePair_2U5BU5D_tA633C51FD293257E4C29B35BAC77953B2173DA3B* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TAD8AAFA778AEF0545ADDFC9DB7AD3BB15D7CB284_H
#ifndef STACK_1_T9BE5E659552248E69D386D8ABF17AAB698FA87E8_H
#define STACK_1_T9BE5E659552248E69D386D8ABF17AAB698FA87E8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Stack`1<LitJson.WriterContext>
struct  Stack_1_t9BE5E659552248E69D386D8ABF17AAB698FA87E8  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	WriterContextU5BU5D_tF2E96471ECC9A90DC37CF4367CBF6FF2FFBDE2B7* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t9BE5E659552248E69D386D8ABF17AAB698FA87E8, ____array_0)); }
	inline WriterContextU5BU5D_tF2E96471ECC9A90DC37CF4367CBF6FF2FFBDE2B7* get__array_0() const { return ____array_0; }
	inline WriterContextU5BU5D_tF2E96471ECC9A90DC37CF4367CBF6FF2FFBDE2B7** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(WriterContextU5BU5D_tF2E96471ECC9A90DC37CF4367CBF6FF2FFBDE2B7* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t9BE5E659552248E69D386D8ABF17AAB698FA87E8, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t9BE5E659552248E69D386D8ABF17AAB698FA87E8, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t9BE5E659552248E69D386D8ABF17AAB698FA87E8, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_1_T9BE5E659552248E69D386D8ABF17AAB698FA87E8_H
#ifndef STACK_1_T5A6D340C6E44680E9C3A9E1864A9787489823868_H
#define STACK_1_T5A6D340C6E44680E9C3A9E1864A9787489823868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Stack`1<System.Int32>
struct  Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868, ____array_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__array_0() const { return ____array_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_1_T5A6D340C6E44680E9C3A9E1864A9787489823868_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef MARSHALBYREFOBJECT_TC4577953D0A44D0AB8597CFA868E01C858B1C9AF_H
#define MARSHALBYREFOBJECT_TC4577953D0A44D0AB8597CFA868E01C858B1C9AF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};
#endif // MARSHALBYREFOBJECT_TC4577953D0A44D0AB8597CFA868E01C858B1C9AF_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkChars_0), value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkPrevious_1), value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef __STATICARRAYINITTYPESIZEU3D112_T44F0A77A0A67DE4A637B170EB544F29D4C251FEF_H
#define __STATICARRAYINITTYPESIZEU3D112_T44F0A77A0A67DE4A637B170EB544F29D4C251FEF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>U7BCEADD49EU2D0F67U2D4254U2DB7E1U2D05118A71DBBAU7D___StaticArrayInitTypeSizeU3D112
struct  __StaticArrayInitTypeSizeU3D112_t44F0A77A0A67DE4A637B170EB544F29D4C251FEF 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D112_t44F0A77A0A67DE4A637B170EB544F29D4C251FEF__padding[112];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D112_T44F0A77A0A67DE4A637B170EB544F29D4C251FEF_H
#ifndef ARRAYMETADATA_T13879803DCC3EE8CB0E6B25C027EBCA471C264DA_H
#define ARRAYMETADATA_T13879803DCC3EE8CB0E6B25C027EBCA471C264DA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.ArrayMetadata
struct  ArrayMetadata_t13879803DCC3EE8CB0E6B25C027EBCA471C264DA 
{
public:
	// System.Type LitJson.ArrayMetadata::element_type
	Type_t * ___element_type_0;
	// System.Boolean LitJson.ArrayMetadata::is_array
	bool ___is_array_1;
	// System.Boolean LitJson.ArrayMetadata::is_list
	bool ___is_list_2;

public:
	inline static int32_t get_offset_of_element_type_0() { return static_cast<int32_t>(offsetof(ArrayMetadata_t13879803DCC3EE8CB0E6B25C027EBCA471C264DA, ___element_type_0)); }
	inline Type_t * get_element_type_0() const { return ___element_type_0; }
	inline Type_t ** get_address_of_element_type_0() { return &___element_type_0; }
	inline void set_element_type_0(Type_t * value)
	{
		___element_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___element_type_0), value);
	}

	inline static int32_t get_offset_of_is_array_1() { return static_cast<int32_t>(offsetof(ArrayMetadata_t13879803DCC3EE8CB0E6B25C027EBCA471C264DA, ___is_array_1)); }
	inline bool get_is_array_1() const { return ___is_array_1; }
	inline bool* get_address_of_is_array_1() { return &___is_array_1; }
	inline void set_is_array_1(bool value)
	{
		___is_array_1 = value;
	}

	inline static int32_t get_offset_of_is_list_2() { return static_cast<int32_t>(offsetof(ArrayMetadata_t13879803DCC3EE8CB0E6B25C027EBCA471C264DA, ___is_list_2)); }
	inline bool get_is_list_2() const { return ___is_list_2; }
	inline bool* get_address_of_is_list_2() { return &___is_list_2; }
	inline void set_is_list_2(bool value)
	{
		___is_list_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of LitJson.ArrayMetadata
struct ArrayMetadata_t13879803DCC3EE8CB0E6B25C027EBCA471C264DA_marshaled_pinvoke
{
	Type_t * ___element_type_0;
	int32_t ___is_array_1;
	int32_t ___is_list_2;
};
// Native definition for COM marshalling of LitJson.ArrayMetadata
struct ArrayMetadata_t13879803DCC3EE8CB0E6B25C027EBCA471C264DA_marshaled_com
{
	Type_t * ___element_type_0;
	int32_t ___is_array_1;
	int32_t ___is_list_2;
};
#endif // ARRAYMETADATA_T13879803DCC3EE8CB0E6B25C027EBCA471C264DA_H
#ifndef OBJECTMETADATA_T51A92A138EF838A4F6CF9954CF6AA2DD8BF15713_H
#define OBJECTMETADATA_T51A92A138EF838A4F6CF9954CF6AA2DD8BF15713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.ObjectMetadata
struct  ObjectMetadata_t51A92A138EF838A4F6CF9954CF6AA2DD8BF15713 
{
public:
	// System.Type LitJson.ObjectMetadata::element_type
	Type_t * ___element_type_0;
	// System.Boolean LitJson.ObjectMetadata::is_dictionary
	bool ___is_dictionary_1;
	// System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata> LitJson.ObjectMetadata::properties
	RuntimeObject* ___properties_2;

public:
	inline static int32_t get_offset_of_element_type_0() { return static_cast<int32_t>(offsetof(ObjectMetadata_t51A92A138EF838A4F6CF9954CF6AA2DD8BF15713, ___element_type_0)); }
	inline Type_t * get_element_type_0() const { return ___element_type_0; }
	inline Type_t ** get_address_of_element_type_0() { return &___element_type_0; }
	inline void set_element_type_0(Type_t * value)
	{
		___element_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___element_type_0), value);
	}

	inline static int32_t get_offset_of_is_dictionary_1() { return static_cast<int32_t>(offsetof(ObjectMetadata_t51A92A138EF838A4F6CF9954CF6AA2DD8BF15713, ___is_dictionary_1)); }
	inline bool get_is_dictionary_1() const { return ___is_dictionary_1; }
	inline bool* get_address_of_is_dictionary_1() { return &___is_dictionary_1; }
	inline void set_is_dictionary_1(bool value)
	{
		___is_dictionary_1 = value;
	}

	inline static int32_t get_offset_of_properties_2() { return static_cast<int32_t>(offsetof(ObjectMetadata_t51A92A138EF838A4F6CF9954CF6AA2DD8BF15713, ___properties_2)); }
	inline RuntimeObject* get_properties_2() const { return ___properties_2; }
	inline RuntimeObject** get_address_of_properties_2() { return &___properties_2; }
	inline void set_properties_2(RuntimeObject* value)
	{
		___properties_2 = value;
		Il2CppCodeGenWriteBarrier((&___properties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of LitJson.ObjectMetadata
struct ObjectMetadata_t51A92A138EF838A4F6CF9954CF6AA2DD8BF15713_marshaled_pinvoke
{
	Type_t * ___element_type_0;
	int32_t ___is_dictionary_1;
	RuntimeObject* ___properties_2;
};
// Native definition for COM marshalling of LitJson.ObjectMetadata
struct ObjectMetadata_t51A92A138EF838A4F6CF9954CF6AA2DD8BF15713_marshaled_com
{
	Type_t * ___element_type_0;
	int32_t ___is_dictionary_1;
	RuntimeObject* ___properties_2;
};
#endif // OBJECTMETADATA_T51A92A138EF838A4F6CF9954CF6AA2DD8BF15713_H
#ifndef PROPERTYMETADATA_T06FEA48BAB3BF920B112B1B96327DD39D896E1D5_H
#define PROPERTYMETADATA_T06FEA48BAB3BF920B112B1B96327DD39D896E1D5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.PropertyMetadata
struct  PropertyMetadata_t06FEA48BAB3BF920B112B1B96327DD39D896E1D5 
{
public:
	// System.Reflection.MemberInfo LitJson.PropertyMetadata::Info
	MemberInfo_t * ___Info_0;
	// System.Boolean LitJson.PropertyMetadata::IsField
	bool ___IsField_1;
	// System.Type LitJson.PropertyMetadata::Type
	Type_t * ___Type_2;

public:
	inline static int32_t get_offset_of_Info_0() { return static_cast<int32_t>(offsetof(PropertyMetadata_t06FEA48BAB3BF920B112B1B96327DD39D896E1D5, ___Info_0)); }
	inline MemberInfo_t * get_Info_0() const { return ___Info_0; }
	inline MemberInfo_t ** get_address_of_Info_0() { return &___Info_0; }
	inline void set_Info_0(MemberInfo_t * value)
	{
		___Info_0 = value;
		Il2CppCodeGenWriteBarrier((&___Info_0), value);
	}

	inline static int32_t get_offset_of_IsField_1() { return static_cast<int32_t>(offsetof(PropertyMetadata_t06FEA48BAB3BF920B112B1B96327DD39D896E1D5, ___IsField_1)); }
	inline bool get_IsField_1() const { return ___IsField_1; }
	inline bool* get_address_of_IsField_1() { return &___IsField_1; }
	inline void set_IsField_1(bool value)
	{
		___IsField_1 = value;
	}

	inline static int32_t get_offset_of_Type_2() { return static_cast<int32_t>(offsetof(PropertyMetadata_t06FEA48BAB3BF920B112B1B96327DD39D896E1D5, ___Type_2)); }
	inline Type_t * get_Type_2() const { return ___Type_2; }
	inline Type_t ** get_address_of_Type_2() { return &___Type_2; }
	inline void set_Type_2(Type_t * value)
	{
		___Type_2 = value;
		Il2CppCodeGenWriteBarrier((&___Type_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of LitJson.PropertyMetadata
struct PropertyMetadata_t06FEA48BAB3BF920B112B1B96327DD39D896E1D5_marshaled_pinvoke
{
	MemberInfo_t * ___Info_0;
	int32_t ___IsField_1;
	Type_t * ___Type_2;
};
// Native definition for COM marshalling of LitJson.PropertyMetadata
struct PropertyMetadata_t06FEA48BAB3BF920B112B1B96327DD39D896E1D5_marshaled_com
{
	MemberInfo_t * ___Info_0;
	int32_t ___IsField_1;
	Type_t * ___Type_2;
};
#endif // PROPERTYMETADATA_T06FEA48BAB3BF920B112B1B96327DD39D896E1D5_H
#ifndef APPLICATIONEXCEPTION_T664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_H
#define APPLICATIONEXCEPTION_T664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ApplicationException
struct  ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONEXCEPTION_T664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#define BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#ifndef CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#define CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((&___categoryForLatin1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#ifndef DICTIONARYENTRY_TB5348A26B94274FCC1DD77185BD5946E283B11A4_H
#define DICTIONARYENTRY_TB5348A26B94274FCC1DD77185BD5946E283B11A4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.DictionaryEntry
struct  DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4 
{
public:
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject * ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject * ____value_1;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4, ____key_0)); }
	inline RuntimeObject * get__key_0() const { return ____key_0; }
	inline RuntimeObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(RuntimeObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((&____key_0), value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((&____value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
#endif // DICTIONARYENTRY_TB5348A26B94274FCC1DD77185BD5946E283B11A4_H
#ifndef KEYVALUEPAIR_2_T23481547E419E16E3B96A303578C1EB685C99EEE_H
#define KEYVALUEPAIR_2_T23481547E419E16E3B96A303578C1EB685C99EEE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T23481547E419E16E3B96A303578C1EB685C99EEE_H
#ifndef KEYVALUEPAIR_2_T2A3DB740D5885EDF3E5A1809F2A323BC147C43D6_H
#define KEYVALUEPAIR_2_T2A3DB740D5885EDF3E5A1809F2A323BC147C43D6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>
struct  KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6, ___value_1)); }
	inline JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * get_value_1() const { return ___value_1; }
	inline JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2A3DB740D5885EDF3E5A1809F2A323BC147C43D6_H
#ifndef DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#define DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#ifndef DECIMAL_T44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_H
#define DECIMAL_T44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((&___Powers10_6), value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Zero_7)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___One_8)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_One_8() const { return ___One_8; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinusOne_9)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MaxValue_10)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinValue_11)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearPositiveZero_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_H
#ifndef DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#define DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef TEXTREADER_T7DF8314B601D202ECFEDF623093A87BFDAB58D0A_H
#define TEXTREADER_T7DF8314B601D202ECFEDF623093A87BFDAB58D0A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextReader
struct  TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:

public:
};

struct TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((&____ReadLineDelegate_1), value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((&____ReadDelegate_2), value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields, ___Null_3)); }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * get_Null_3() const { return ___Null_3; }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((&___Null_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTREADER_T7DF8314B601D202ECFEDF623093A87BFDAB58D0A_H
#ifndef TEXTWRITER_T92451D929322093838C41489883D5B2D7ABAF3F0_H
#define TEXTWRITER_T92451D929322093838C41489883D5B2D7ABAF3F0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter
struct  TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0, ___CoreNewLine_9)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((&___CoreNewLine_9), value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((&___InternalFormatProvider_10), value);
	}
};

struct TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ___Null_1)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((&____WriteCharDelegate_2), value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((&____WriteStringDelegate_3), value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((&____WriteCharArrayRangeDelegate_4), value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((&____WriteLineCharDelegate_5), value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((&____WriteLineStringDelegate_6), value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((&____WriteLineCharArrayRangeDelegate_7), value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((&____FlushDelegate_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTWRITER_T92451D929322093838C41489883D5B2D7ABAF3F0_H
#ifndef INT16_T823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_H
#define INT16_T823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#define INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SBYTE_T9070AEA2966184235653CB9B4D33B149CDA831DF_H
#define SBYTE_T9070AEA2966184235653CB9B4D33B149CDA831DF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T9070AEA2966184235653CB9B4D33B149CDA831DF_H
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef UINT16_TAE45CEF73BF720100519F6867F32145D075F928E_H
#define UINT16_TAE45CEF73BF720100519F6867F32145D075F928E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_TAE45CEF73BF720100519F6867F32145D075F928E_H
#ifndef UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#define UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifndef UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#define UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3EU7BCEADD49EU2D0F67U2D4254U2DB7E1U2D05118A71DBBAU7D_T6AED0330CA9ED319B6B675C34D94B542B7470054_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3EU7BCEADD49EU2D0F67U2D4254U2DB7E1U2D05118A71DBBAU7D_T6AED0330CA9ED319B6B675C34D94B542B7470054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>U7BCEADD49EU2D0F67U2D4254U2DB7E1U2D05118A71DBBAU7D
struct  U3CPrivateImplementationDetailsU3EU7BCEADD49EU2D0F67U2D4254U2DB7E1U2D05118A71DBBAU7D_t6AED0330CA9ED319B6B675C34D94B542B7470054  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3EU7BCEADD49EU2D0F67U2D4254U2DB7E1U2D05118A71DBBAU7D_t6AED0330CA9ED319B6B675C34D94B542B7470054_StaticFields
{
public:
	// <PrivateImplementationDetails>U7BCEADD49EU2D0F67U2D4254U2DB7E1U2D05118A71DBBAU7D___StaticArrayInitTypeSizeU3D112 <PrivateImplementationDetails>U7BCEADD49EU2D0F67U2D4254U2DB7E1U2D05118A71DBBAU7D::U24U24method0x60000feU2D1
	__StaticArrayInitTypeSizeU3D112_t44F0A77A0A67DE4A637B170EB544F29D4C251FEF  ___U24U24method0x60000feU2D1_0;

public:
	inline static int32_t get_offset_of_U24U24method0x60000feU2D1_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7BCEADD49EU2D0F67U2D4254U2DB7E1U2D05118A71DBBAU7D_t6AED0330CA9ED319B6B675C34D94B542B7470054_StaticFields, ___U24U24method0x60000feU2D1_0)); }
	inline __StaticArrayInitTypeSizeU3D112_t44F0A77A0A67DE4A637B170EB544F29D4C251FEF  get_U24U24method0x60000feU2D1_0() const { return ___U24U24method0x60000feU2D1_0; }
	inline __StaticArrayInitTypeSizeU3D112_t44F0A77A0A67DE4A637B170EB544F29D4C251FEF * get_address_of_U24U24method0x60000feU2D1_0() { return &___U24U24method0x60000feU2D1_0; }
	inline void set_U24U24method0x60000feU2D1_0(__StaticArrayInitTypeSizeU3D112_t44F0A77A0A67DE4A637B170EB544F29D4C251FEF  value)
	{
		___U24U24method0x60000feU2D1_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3EU7BCEADD49EU2D0F67U2D4254U2DB7E1U2D05118A71DBBAU7D_T6AED0330CA9ED319B6B675C34D94B542B7470054_H
#ifndef CONDITION_T0C68B5BFF4C4EDDCD2BF98F8AA955C69C8493C44_H
#define CONDITION_T0C68B5BFF4C4EDDCD2BF98F8AA955C69C8493C44_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.Condition
struct  Condition_t0C68B5BFF4C4EDDCD2BF98F8AA955C69C8493C44 
{
public:
	// System.Int32 LitJson.Condition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Condition_t0C68B5BFF4C4EDDCD2BF98F8AA955C69C8493C44, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONDITION_T0C68B5BFF4C4EDDCD2BF98F8AA955C69C8493C44_H
#ifndef JSONEXCEPTION_TC3C76377189BB2AD67C01216F60F686729CDB886_H
#define JSONEXCEPTION_TC3C76377189BB2AD67C01216F60F686729CDB886_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.JsonException
struct  JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886  : public ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONEXCEPTION_TC3C76377189BB2AD67C01216F60F686729CDB886_H
#ifndef JSONTOKEN_T6F3B84FDDC5E10C54EEE615F7A6D6FB70CCA7336_H
#define JSONTOKEN_T6F3B84FDDC5E10C54EEE615F7A6D6FB70CCA7336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.JsonToken
struct  JsonToken_t6F3B84FDDC5E10C54EEE615F7A6D6FB70CCA7336 
{
public:
	// System.Int32 LitJson.JsonToken::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonToken_t6F3B84FDDC5E10C54EEE615F7A6D6FB70CCA7336, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONTOKEN_T6F3B84FDDC5E10C54EEE615F7A6D6FB70CCA7336_H
#ifndef JSONTYPE_TB7AA8B35D67B528FFF3130313001261386CA1F13_H
#define JSONTYPE_TB7AA8B35D67B528FFF3130313001261386CA1F13_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.JsonType
struct  JsonType_tB7AA8B35D67B528FFF3130313001261386CA1F13 
{
public:
	// System.Int32 LitJson.JsonType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonType_tB7AA8B35D67B528FFF3130313001261386CA1F13, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONTYPE_TB7AA8B35D67B528FFF3130313001261386CA1F13_H
#ifndef PARSERTOKEN_T3D5AA106CF392F924BA7184F81EC25A985A6208F_H
#define PARSERTOKEN_T3D5AA106CF392F924BA7184F81EC25A985A6208F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.ParserToken
struct  ParserToken_t3D5AA106CF392F924BA7184F81EC25A985A6208F 
{
public:
	// System.Int32 LitJson.ParserToken::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParserToken_t3D5AA106CF392F924BA7184F81EC25A985A6208F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSERTOKEN_T3D5AA106CF392F924BA7184F81EC25A985A6208F_H
#ifndef ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#define ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifndef KEYNOTFOUNDEXCEPTION_TC28F8B9E114291001A5D135723673C6F292438E2_H
#define KEYNOTFOUNDEXCEPTION_TC28F8B9E114291001A5D135723673C6F292438E2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyNotFoundException
struct  KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYNOTFOUNDEXCEPTION_TC28F8B9E114291001A5D135723673C6F292438E2_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef DATETIMEFORMATFLAGS_TA363B5524F41DE008B4AB8304F1E995E2C8CF675_H
#define DATETIMEFORMATFLAGS_TA363B5524F41DE008B4AB8304F1E995E2C8CF675_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DateTimeFormatFlags
struct  DateTimeFormatFlags_tA363B5524F41DE008B4AB8304F1E995E2C8CF675 
{
public:
	// System.Int32 System.Globalization.DateTimeFormatFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeFormatFlags_tA363B5524F41DE008B4AB8304F1E995E2C8CF675, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEFORMATFLAGS_TA363B5524F41DE008B4AB8304F1E995E2C8CF675_H
#ifndef DATETIMESTYLES_TD09B34DB3747CD91D8AAA1238C7595845715301E_H
#define DATETIMESTYLES_TD09B34DB3747CD91D8AAA1238C7595845715301E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DateTimeStyles
struct  DateTimeStyles_tD09B34DB3747CD91D8AAA1238C7595845715301E 
{
public:
	// System.Int32 System.Globalization.DateTimeStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeStyles_tD09B34DB3747CD91D8AAA1238C7595845715301E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMESTYLES_TD09B34DB3747CD91D8AAA1238C7595845715301E_H
#ifndef NUMBERSTYLES_TB0ADA2D9CCAA236331AED14C42BE5832B2351592_H
#define NUMBERSTYLES_TB0ADA2D9CCAA236331AED14C42BE5832B2351592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberStyles
struct  NumberStyles_tB0ADA2D9CCAA236331AED14C42BE5832B2351592 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_tB0ADA2D9CCAA236331AED14C42BE5832B2351592, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBERSTYLES_TB0ADA2D9CCAA236331AED14C42BE5832B2351592_H
#ifndef STRINGREADER_T3095DEB3D26F40D1A7F9B76835D80AFE70E47E12_H
#define STRINGREADER_T3095DEB3D26F40D1A7F9B76835D80AFE70E47E12_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StringReader
struct  StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12  : public TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A
{
public:
	// System.String System.IO.StringReader::_s
	String_t* ____s_4;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_5;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_6;

public:
	inline static int32_t get_offset_of__s_4() { return static_cast<int32_t>(offsetof(StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12, ____s_4)); }
	inline String_t* get__s_4() const { return ____s_4; }
	inline String_t** get_address_of__s_4() { return &____s_4; }
	inline void set__s_4(String_t* value)
	{
		____s_4 = value;
		Il2CppCodeGenWriteBarrier((&____s_4), value);
	}

	inline static int32_t get_offset_of__pos_5() { return static_cast<int32_t>(offsetof(StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12, ____pos_5)); }
	inline int32_t get__pos_5() const { return ____pos_5; }
	inline int32_t* get_address_of__pos_5() { return &____pos_5; }
	inline void set__pos_5(int32_t value)
	{
		____pos_5 = value;
	}

	inline static int32_t get_offset_of__length_6() { return static_cast<int32_t>(offsetof(StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12, ____length_6)); }
	inline int32_t get__length_6() const { return ____length_6; }
	inline int32_t* get_address_of__length_6() { return &____length_6; }
	inline void set__length_6(int32_t value)
	{
		____length_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGREADER_T3095DEB3D26F40D1A7F9B76835D80AFE70E47E12_H
#ifndef STRINGWRITER_T194EF1526E072B93984370042AA80926C2EB6139_H
#define STRINGWRITER_T194EF1526E072B93984370042AA80926C2EB6139_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StringWriter
struct  StringWriter_t194EF1526E072B93984370042AA80926C2EB6139  : public TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0
{
public:
	// System.Text.StringBuilder System.IO.StringWriter::_sb
	StringBuilder_t * ____sb_11;
	// System.Boolean System.IO.StringWriter::_isOpen
	bool ____isOpen_12;

public:
	inline static int32_t get_offset_of__sb_11() { return static_cast<int32_t>(offsetof(StringWriter_t194EF1526E072B93984370042AA80926C2EB6139, ____sb_11)); }
	inline StringBuilder_t * get__sb_11() const { return ____sb_11; }
	inline StringBuilder_t ** get_address_of__sb_11() { return &____sb_11; }
	inline void set__sb_11(StringBuilder_t * value)
	{
		____sb_11 = value;
		Il2CppCodeGenWriteBarrier((&____sb_11), value);
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(StringWriter_t194EF1526E072B93984370042AA80926C2EB6139, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGWRITER_T194EF1526E072B93984370042AA80926C2EB6139_H
#ifndef INVALIDCASTEXCEPTION_T91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_H
#define INVALIDCASTEXCEPTION_T91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidCastException
struct  InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDCASTEXCEPTION_T91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_H
#ifndef INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#define INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#ifndef BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#define BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifndef RUNTIMEFIELDHANDLE_T844BDF00E8E6FE69D9AEAA7657F09018B864F4EF_H
#define RUNTIMEFIELDHANDLE_T844BDF00E8E6FE69D9AEAA7657F09018B864F4EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T844BDF00E8E6FE69D9AEAA7657F09018B864F4EF_H
#ifndef RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#define RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifndef JSONDATA_T9CC995E68E50031B6C116EFDAAE2DC20640F4E5B_H
#define JSONDATA_T9CC995E68E50031B6C116EFDAAE2DC20640F4E5B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.JsonData
struct  JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<LitJson.JsonData> LitJson.JsonData::inst_array
	RuntimeObject* ___inst_array_0;
	// System.Boolean LitJson.JsonData::inst_boolean
	bool ___inst_boolean_1;
	// System.Double LitJson.JsonData::inst_double
	double ___inst_double_2;
	// System.Int32 LitJson.JsonData::inst_int
	int32_t ___inst_int_3;
	// System.Int64 LitJson.JsonData::inst_long
	int64_t ___inst_long_4;
	// System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData> LitJson.JsonData::inst_object
	RuntimeObject* ___inst_object_5;
	// System.String LitJson.JsonData::inst_string
	String_t* ___inst_string_6;
	// System.String LitJson.JsonData::json
	String_t* ___json_7;
	// LitJson.JsonType LitJson.JsonData::type
	int32_t ___type_8;
	// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>> LitJson.JsonData::object_list
	RuntimeObject* ___object_list_9;

public:
	inline static int32_t get_offset_of_inst_array_0() { return static_cast<int32_t>(offsetof(JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B, ___inst_array_0)); }
	inline RuntimeObject* get_inst_array_0() const { return ___inst_array_0; }
	inline RuntimeObject** get_address_of_inst_array_0() { return &___inst_array_0; }
	inline void set_inst_array_0(RuntimeObject* value)
	{
		___inst_array_0 = value;
		Il2CppCodeGenWriteBarrier((&___inst_array_0), value);
	}

	inline static int32_t get_offset_of_inst_boolean_1() { return static_cast<int32_t>(offsetof(JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B, ___inst_boolean_1)); }
	inline bool get_inst_boolean_1() const { return ___inst_boolean_1; }
	inline bool* get_address_of_inst_boolean_1() { return &___inst_boolean_1; }
	inline void set_inst_boolean_1(bool value)
	{
		___inst_boolean_1 = value;
	}

	inline static int32_t get_offset_of_inst_double_2() { return static_cast<int32_t>(offsetof(JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B, ___inst_double_2)); }
	inline double get_inst_double_2() const { return ___inst_double_2; }
	inline double* get_address_of_inst_double_2() { return &___inst_double_2; }
	inline void set_inst_double_2(double value)
	{
		___inst_double_2 = value;
	}

	inline static int32_t get_offset_of_inst_int_3() { return static_cast<int32_t>(offsetof(JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B, ___inst_int_3)); }
	inline int32_t get_inst_int_3() const { return ___inst_int_3; }
	inline int32_t* get_address_of_inst_int_3() { return &___inst_int_3; }
	inline void set_inst_int_3(int32_t value)
	{
		___inst_int_3 = value;
	}

	inline static int32_t get_offset_of_inst_long_4() { return static_cast<int32_t>(offsetof(JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B, ___inst_long_4)); }
	inline int64_t get_inst_long_4() const { return ___inst_long_4; }
	inline int64_t* get_address_of_inst_long_4() { return &___inst_long_4; }
	inline void set_inst_long_4(int64_t value)
	{
		___inst_long_4 = value;
	}

	inline static int32_t get_offset_of_inst_object_5() { return static_cast<int32_t>(offsetof(JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B, ___inst_object_5)); }
	inline RuntimeObject* get_inst_object_5() const { return ___inst_object_5; }
	inline RuntimeObject** get_address_of_inst_object_5() { return &___inst_object_5; }
	inline void set_inst_object_5(RuntimeObject* value)
	{
		___inst_object_5 = value;
		Il2CppCodeGenWriteBarrier((&___inst_object_5), value);
	}

	inline static int32_t get_offset_of_inst_string_6() { return static_cast<int32_t>(offsetof(JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B, ___inst_string_6)); }
	inline String_t* get_inst_string_6() const { return ___inst_string_6; }
	inline String_t** get_address_of_inst_string_6() { return &___inst_string_6; }
	inline void set_inst_string_6(String_t* value)
	{
		___inst_string_6 = value;
		Il2CppCodeGenWriteBarrier((&___inst_string_6), value);
	}

	inline static int32_t get_offset_of_json_7() { return static_cast<int32_t>(offsetof(JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B, ___json_7)); }
	inline String_t* get_json_7() const { return ___json_7; }
	inline String_t** get_address_of_json_7() { return &___json_7; }
	inline void set_json_7(String_t* value)
	{
		___json_7 = value;
		Il2CppCodeGenWriteBarrier((&___json_7), value);
	}

	inline static int32_t get_offset_of_type_8() { return static_cast<int32_t>(offsetof(JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B, ___type_8)); }
	inline int32_t get_type_8() const { return ___type_8; }
	inline int32_t* get_address_of_type_8() { return &___type_8; }
	inline void set_type_8(int32_t value)
	{
		___type_8 = value;
	}

	inline static int32_t get_offset_of_object_list_9() { return static_cast<int32_t>(offsetof(JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B, ___object_list_9)); }
	inline RuntimeObject* get_object_list_9() const { return ___object_list_9; }
	inline RuntimeObject** get_address_of_object_list_9() { return &___object_list_9; }
	inline void set_object_list_9(RuntimeObject* value)
	{
		___object_list_9 = value;
		Il2CppCodeGenWriteBarrier((&___object_list_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONDATA_T9CC995E68E50031B6C116EFDAAE2DC20640F4E5B_H
#ifndef JSONREADER_TF30822FC3017712E65E9B93347F0336447ACC9C0_H
#define JSONREADER_TF30822FC3017712E65E9B93347F0336447ACC9C0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.JsonReader
struct  JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<System.Int32> LitJson.JsonReader::automaton_stack
	Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868 * ___automaton_stack_1;
	// System.Int32 LitJson.JsonReader::current_input
	int32_t ___current_input_2;
	// System.Int32 LitJson.JsonReader::current_symbol
	int32_t ___current_symbol_3;
	// System.Boolean LitJson.JsonReader::end_of_json
	bool ___end_of_json_4;
	// System.Boolean LitJson.JsonReader::end_of_input
	bool ___end_of_input_5;
	// LitJson.Lexer LitJson.JsonReader::lexer
	Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * ___lexer_6;
	// System.Boolean LitJson.JsonReader::parser_in_string
	bool ___parser_in_string_7;
	// System.Boolean LitJson.JsonReader::parser_return
	bool ___parser_return_8;
	// System.Boolean LitJson.JsonReader::read_started
	bool ___read_started_9;
	// System.IO.TextReader LitJson.JsonReader::reader
	TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * ___reader_10;
	// System.Boolean LitJson.JsonReader::reader_is_owned
	bool ___reader_is_owned_11;
	// System.Object LitJson.JsonReader::token_value
	RuntimeObject * ___token_value_12;
	// LitJson.JsonToken LitJson.JsonReader::token
	int32_t ___token_13;

public:
	inline static int32_t get_offset_of_automaton_stack_1() { return static_cast<int32_t>(offsetof(JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0, ___automaton_stack_1)); }
	inline Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868 * get_automaton_stack_1() const { return ___automaton_stack_1; }
	inline Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868 ** get_address_of_automaton_stack_1() { return &___automaton_stack_1; }
	inline void set_automaton_stack_1(Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868 * value)
	{
		___automaton_stack_1 = value;
		Il2CppCodeGenWriteBarrier((&___automaton_stack_1), value);
	}

	inline static int32_t get_offset_of_current_input_2() { return static_cast<int32_t>(offsetof(JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0, ___current_input_2)); }
	inline int32_t get_current_input_2() const { return ___current_input_2; }
	inline int32_t* get_address_of_current_input_2() { return &___current_input_2; }
	inline void set_current_input_2(int32_t value)
	{
		___current_input_2 = value;
	}

	inline static int32_t get_offset_of_current_symbol_3() { return static_cast<int32_t>(offsetof(JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0, ___current_symbol_3)); }
	inline int32_t get_current_symbol_3() const { return ___current_symbol_3; }
	inline int32_t* get_address_of_current_symbol_3() { return &___current_symbol_3; }
	inline void set_current_symbol_3(int32_t value)
	{
		___current_symbol_3 = value;
	}

	inline static int32_t get_offset_of_end_of_json_4() { return static_cast<int32_t>(offsetof(JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0, ___end_of_json_4)); }
	inline bool get_end_of_json_4() const { return ___end_of_json_4; }
	inline bool* get_address_of_end_of_json_4() { return &___end_of_json_4; }
	inline void set_end_of_json_4(bool value)
	{
		___end_of_json_4 = value;
	}

	inline static int32_t get_offset_of_end_of_input_5() { return static_cast<int32_t>(offsetof(JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0, ___end_of_input_5)); }
	inline bool get_end_of_input_5() const { return ___end_of_input_5; }
	inline bool* get_address_of_end_of_input_5() { return &___end_of_input_5; }
	inline void set_end_of_input_5(bool value)
	{
		___end_of_input_5 = value;
	}

	inline static int32_t get_offset_of_lexer_6() { return static_cast<int32_t>(offsetof(JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0, ___lexer_6)); }
	inline Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * get_lexer_6() const { return ___lexer_6; }
	inline Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 ** get_address_of_lexer_6() { return &___lexer_6; }
	inline void set_lexer_6(Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * value)
	{
		___lexer_6 = value;
		Il2CppCodeGenWriteBarrier((&___lexer_6), value);
	}

	inline static int32_t get_offset_of_parser_in_string_7() { return static_cast<int32_t>(offsetof(JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0, ___parser_in_string_7)); }
	inline bool get_parser_in_string_7() const { return ___parser_in_string_7; }
	inline bool* get_address_of_parser_in_string_7() { return &___parser_in_string_7; }
	inline void set_parser_in_string_7(bool value)
	{
		___parser_in_string_7 = value;
	}

	inline static int32_t get_offset_of_parser_return_8() { return static_cast<int32_t>(offsetof(JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0, ___parser_return_8)); }
	inline bool get_parser_return_8() const { return ___parser_return_8; }
	inline bool* get_address_of_parser_return_8() { return &___parser_return_8; }
	inline void set_parser_return_8(bool value)
	{
		___parser_return_8 = value;
	}

	inline static int32_t get_offset_of_read_started_9() { return static_cast<int32_t>(offsetof(JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0, ___read_started_9)); }
	inline bool get_read_started_9() const { return ___read_started_9; }
	inline bool* get_address_of_read_started_9() { return &___read_started_9; }
	inline void set_read_started_9(bool value)
	{
		___read_started_9 = value;
	}

	inline static int32_t get_offset_of_reader_10() { return static_cast<int32_t>(offsetof(JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0, ___reader_10)); }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * get_reader_10() const { return ___reader_10; }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A ** get_address_of_reader_10() { return &___reader_10; }
	inline void set_reader_10(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * value)
	{
		___reader_10 = value;
		Il2CppCodeGenWriteBarrier((&___reader_10), value);
	}

	inline static int32_t get_offset_of_reader_is_owned_11() { return static_cast<int32_t>(offsetof(JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0, ___reader_is_owned_11)); }
	inline bool get_reader_is_owned_11() const { return ___reader_is_owned_11; }
	inline bool* get_address_of_reader_is_owned_11() { return &___reader_is_owned_11; }
	inline void set_reader_is_owned_11(bool value)
	{
		___reader_is_owned_11 = value;
	}

	inline static int32_t get_offset_of_token_value_12() { return static_cast<int32_t>(offsetof(JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0, ___token_value_12)); }
	inline RuntimeObject * get_token_value_12() const { return ___token_value_12; }
	inline RuntimeObject ** get_address_of_token_value_12() { return &___token_value_12; }
	inline void set_token_value_12(RuntimeObject * value)
	{
		___token_value_12 = value;
		Il2CppCodeGenWriteBarrier((&___token_value_12), value);
	}

	inline static int32_t get_offset_of_token_13() { return static_cast<int32_t>(offsetof(JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0, ___token_13)); }
	inline int32_t get_token_13() const { return ___token_13; }
	inline int32_t* get_address_of_token_13() { return &___token_13; }
	inline void set_token_13(int32_t value)
	{
		___token_13 = value;
	}
};

struct JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0_StaticFields
{
public:
	// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>> LitJson.JsonReader::parse_table
	RuntimeObject* ___parse_table_0;

public:
	inline static int32_t get_offset_of_parse_table_0() { return static_cast<int32_t>(offsetof(JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0_StaticFields, ___parse_table_0)); }
	inline RuntimeObject* get_parse_table_0() const { return ___parse_table_0; }
	inline RuntimeObject** get_address_of_parse_table_0() { return &___parse_table_0; }
	inline void set_parse_table_0(RuntimeObject* value)
	{
		___parse_table_0 = value;
		Il2CppCodeGenWriteBarrier((&___parse_table_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONREADER_TF30822FC3017712E65E9B93347F0336447ACC9C0_H
#ifndef ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#define ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#ifndef DATETIMEFORMATINFO_TF4BB3AA482C2F772D2A9022F78BF8727830FAF5F_H
#define DATETIMEFORMATINFO_TF4BB3AA482C2F772D2A9022F78BF8727830FAF5F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DateTimeFormatInfo
struct  DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F  : public RuntimeObject
{
public:
	// System.Globalization.CultureData System.Globalization.DateTimeFormatInfo::m_cultureData
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * ___m_cultureData_1;
	// System.String System.Globalization.DateTimeFormatInfo::m_name
	String_t* ___m_name_2;
	// System.String System.Globalization.DateTimeFormatInfo::m_langName
	String_t* ___m_langName_3;
	// System.Globalization.CompareInfo System.Globalization.DateTimeFormatInfo::m_compareInfo
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___m_compareInfo_4;
	// System.Globalization.CultureInfo System.Globalization.DateTimeFormatInfo::m_cultureInfo
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___m_cultureInfo_5;
	// System.String System.Globalization.DateTimeFormatInfo::amDesignator
	String_t* ___amDesignator_6;
	// System.String System.Globalization.DateTimeFormatInfo::pmDesignator
	String_t* ___pmDesignator_7;
	// System.String System.Globalization.DateTimeFormatInfo::dateSeparator
	String_t* ___dateSeparator_8;
	// System.String System.Globalization.DateTimeFormatInfo::generalShortTimePattern
	String_t* ___generalShortTimePattern_9;
	// System.String System.Globalization.DateTimeFormatInfo::generalLongTimePattern
	String_t* ___generalLongTimePattern_10;
	// System.String System.Globalization.DateTimeFormatInfo::timeSeparator
	String_t* ___timeSeparator_11;
	// System.String System.Globalization.DateTimeFormatInfo::monthDayPattern
	String_t* ___monthDayPattern_12;
	// System.String System.Globalization.DateTimeFormatInfo::dateTimeOffsetPattern
	String_t* ___dateTimeOffsetPattern_13;
	// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::calendar
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_17;
	// System.Int32 System.Globalization.DateTimeFormatInfo::firstDayOfWeek
	int32_t ___firstDayOfWeek_18;
	// System.Int32 System.Globalization.DateTimeFormatInfo::calendarWeekRule
	int32_t ___calendarWeekRule_19;
	// System.String System.Globalization.DateTimeFormatInfo::fullDateTimePattern
	String_t* ___fullDateTimePattern_20;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedDayNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___abbreviatedDayNames_21;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_superShortDayNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_superShortDayNames_22;
	// System.String[] System.Globalization.DateTimeFormatInfo::dayNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___dayNames_23;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedMonthNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___abbreviatedMonthNames_24;
	// System.String[] System.Globalization.DateTimeFormatInfo::monthNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___monthNames_25;
	// System.String[] System.Globalization.DateTimeFormatInfo::genitiveMonthNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___genitiveMonthNames_26;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_genitiveAbbreviatedMonthNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_genitiveAbbreviatedMonthNames_27;
	// System.String[] System.Globalization.DateTimeFormatInfo::leapYearMonthNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___leapYearMonthNames_28;
	// System.String System.Globalization.DateTimeFormatInfo::longDatePattern
	String_t* ___longDatePattern_29;
	// System.String System.Globalization.DateTimeFormatInfo::shortDatePattern
	String_t* ___shortDatePattern_30;
	// System.String System.Globalization.DateTimeFormatInfo::yearMonthPattern
	String_t* ___yearMonthPattern_31;
	// System.String System.Globalization.DateTimeFormatInfo::longTimePattern
	String_t* ___longTimePattern_32;
	// System.String System.Globalization.DateTimeFormatInfo::shortTimePattern
	String_t* ___shortTimePattern_33;
	// System.String[] System.Globalization.DateTimeFormatInfo::allYearMonthPatterns
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___allYearMonthPatterns_34;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortDatePatterns
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___allShortDatePatterns_35;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongDatePatterns
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___allLongDatePatterns_36;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortTimePatterns
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___allShortTimePatterns_37;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongTimePatterns
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___allLongTimePatterns_38;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_eraNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_eraNames_39;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEraNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_abbrevEraNames_40;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEnglishEraNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_abbrevEnglishEraNames_41;
	// System.Int32[] System.Globalization.DateTimeFormatInfo::optionalCalendars
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___optionalCalendars_42;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isReadOnly
	bool ___m_isReadOnly_44;
	// System.Globalization.DateTimeFormatFlags System.Globalization.DateTimeFormatInfo::formatFlags
	int32_t ___formatFlags_45;
	// System.Int32 System.Globalization.DateTimeFormatInfo::CultureID
	int32_t ___CultureID_47;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_48;
	// System.Boolean System.Globalization.DateTimeFormatInfo::bUseCalendarInfo
	bool ___bUseCalendarInfo_49;
	// System.Int32 System.Globalization.DateTimeFormatInfo::nDataItem
	int32_t ___nDataItem_50;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isDefaultCalendar
	bool ___m_isDefaultCalendar_51;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_dateWords
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_dateWords_53;
	// System.String System.Globalization.DateTimeFormatInfo::m_fullTimeSpanPositivePattern
	String_t* ___m_fullTimeSpanPositivePattern_54;
	// System.String System.Globalization.DateTimeFormatInfo::m_fullTimeSpanNegativePattern
	String_t* ___m_fullTimeSpanNegativePattern_55;
	// System.Globalization.TokenHashValue[] System.Globalization.DateTimeFormatInfo::m_dtfiTokenHash
	TokenHashValueU5BU5D_t5C8B41D89122FC1D3ED53C946C2656DA03CE899A* ___m_dtfiTokenHash_57;

public:
	inline static int32_t get_offset_of_m_cultureData_1() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_cultureData_1)); }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * get_m_cultureData_1() const { return ___m_cultureData_1; }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD ** get_address_of_m_cultureData_1() { return &___m_cultureData_1; }
	inline void set_m_cultureData_1(CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * value)
	{
		___m_cultureData_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_cultureData_1), value);
	}

	inline static int32_t get_offset_of_m_name_2() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_name_2)); }
	inline String_t* get_m_name_2() const { return ___m_name_2; }
	inline String_t** get_address_of_m_name_2() { return &___m_name_2; }
	inline void set_m_name_2(String_t* value)
	{
		___m_name_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_2), value);
	}

	inline static int32_t get_offset_of_m_langName_3() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_langName_3)); }
	inline String_t* get_m_langName_3() const { return ___m_langName_3; }
	inline String_t** get_address_of_m_langName_3() { return &___m_langName_3; }
	inline void set_m_langName_3(String_t* value)
	{
		___m_langName_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_langName_3), value);
	}

	inline static int32_t get_offset_of_m_compareInfo_4() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_compareInfo_4)); }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * get_m_compareInfo_4() const { return ___m_compareInfo_4; }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 ** get_address_of_m_compareInfo_4() { return &___m_compareInfo_4; }
	inline void set_m_compareInfo_4(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * value)
	{
		___m_compareInfo_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_compareInfo_4), value);
	}

	inline static int32_t get_offset_of_m_cultureInfo_5() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_cultureInfo_5)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_m_cultureInfo_5() const { return ___m_cultureInfo_5; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_m_cultureInfo_5() { return &___m_cultureInfo_5; }
	inline void set_m_cultureInfo_5(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___m_cultureInfo_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_cultureInfo_5), value);
	}

	inline static int32_t get_offset_of_amDesignator_6() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___amDesignator_6)); }
	inline String_t* get_amDesignator_6() const { return ___amDesignator_6; }
	inline String_t** get_address_of_amDesignator_6() { return &___amDesignator_6; }
	inline void set_amDesignator_6(String_t* value)
	{
		___amDesignator_6 = value;
		Il2CppCodeGenWriteBarrier((&___amDesignator_6), value);
	}

	inline static int32_t get_offset_of_pmDesignator_7() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___pmDesignator_7)); }
	inline String_t* get_pmDesignator_7() const { return ___pmDesignator_7; }
	inline String_t** get_address_of_pmDesignator_7() { return &___pmDesignator_7; }
	inline void set_pmDesignator_7(String_t* value)
	{
		___pmDesignator_7 = value;
		Il2CppCodeGenWriteBarrier((&___pmDesignator_7), value);
	}

	inline static int32_t get_offset_of_dateSeparator_8() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___dateSeparator_8)); }
	inline String_t* get_dateSeparator_8() const { return ___dateSeparator_8; }
	inline String_t** get_address_of_dateSeparator_8() { return &___dateSeparator_8; }
	inline void set_dateSeparator_8(String_t* value)
	{
		___dateSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((&___dateSeparator_8), value);
	}

	inline static int32_t get_offset_of_generalShortTimePattern_9() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___generalShortTimePattern_9)); }
	inline String_t* get_generalShortTimePattern_9() const { return ___generalShortTimePattern_9; }
	inline String_t** get_address_of_generalShortTimePattern_9() { return &___generalShortTimePattern_9; }
	inline void set_generalShortTimePattern_9(String_t* value)
	{
		___generalShortTimePattern_9 = value;
		Il2CppCodeGenWriteBarrier((&___generalShortTimePattern_9), value);
	}

	inline static int32_t get_offset_of_generalLongTimePattern_10() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___generalLongTimePattern_10)); }
	inline String_t* get_generalLongTimePattern_10() const { return ___generalLongTimePattern_10; }
	inline String_t** get_address_of_generalLongTimePattern_10() { return &___generalLongTimePattern_10; }
	inline void set_generalLongTimePattern_10(String_t* value)
	{
		___generalLongTimePattern_10 = value;
		Il2CppCodeGenWriteBarrier((&___generalLongTimePattern_10), value);
	}

	inline static int32_t get_offset_of_timeSeparator_11() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___timeSeparator_11)); }
	inline String_t* get_timeSeparator_11() const { return ___timeSeparator_11; }
	inline String_t** get_address_of_timeSeparator_11() { return &___timeSeparator_11; }
	inline void set_timeSeparator_11(String_t* value)
	{
		___timeSeparator_11 = value;
		Il2CppCodeGenWriteBarrier((&___timeSeparator_11), value);
	}

	inline static int32_t get_offset_of_monthDayPattern_12() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___monthDayPattern_12)); }
	inline String_t* get_monthDayPattern_12() const { return ___monthDayPattern_12; }
	inline String_t** get_address_of_monthDayPattern_12() { return &___monthDayPattern_12; }
	inline void set_monthDayPattern_12(String_t* value)
	{
		___monthDayPattern_12 = value;
		Il2CppCodeGenWriteBarrier((&___monthDayPattern_12), value);
	}

	inline static int32_t get_offset_of_dateTimeOffsetPattern_13() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___dateTimeOffsetPattern_13)); }
	inline String_t* get_dateTimeOffsetPattern_13() const { return ___dateTimeOffsetPattern_13; }
	inline String_t** get_address_of_dateTimeOffsetPattern_13() { return &___dateTimeOffsetPattern_13; }
	inline void set_dateTimeOffsetPattern_13(String_t* value)
	{
		___dateTimeOffsetPattern_13 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeOffsetPattern_13), value);
	}

	inline static int32_t get_offset_of_calendar_17() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___calendar_17)); }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * get_calendar_17() const { return ___calendar_17; }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 ** get_address_of_calendar_17() { return &___calendar_17; }
	inline void set_calendar_17(Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * value)
	{
		___calendar_17 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_17), value);
	}

	inline static int32_t get_offset_of_firstDayOfWeek_18() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___firstDayOfWeek_18)); }
	inline int32_t get_firstDayOfWeek_18() const { return ___firstDayOfWeek_18; }
	inline int32_t* get_address_of_firstDayOfWeek_18() { return &___firstDayOfWeek_18; }
	inline void set_firstDayOfWeek_18(int32_t value)
	{
		___firstDayOfWeek_18 = value;
	}

	inline static int32_t get_offset_of_calendarWeekRule_19() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___calendarWeekRule_19)); }
	inline int32_t get_calendarWeekRule_19() const { return ___calendarWeekRule_19; }
	inline int32_t* get_address_of_calendarWeekRule_19() { return &___calendarWeekRule_19; }
	inline void set_calendarWeekRule_19(int32_t value)
	{
		___calendarWeekRule_19 = value;
	}

	inline static int32_t get_offset_of_fullDateTimePattern_20() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___fullDateTimePattern_20)); }
	inline String_t* get_fullDateTimePattern_20() const { return ___fullDateTimePattern_20; }
	inline String_t** get_address_of_fullDateTimePattern_20() { return &___fullDateTimePattern_20; }
	inline void set_fullDateTimePattern_20(String_t* value)
	{
		___fullDateTimePattern_20 = value;
		Il2CppCodeGenWriteBarrier((&___fullDateTimePattern_20), value);
	}

	inline static int32_t get_offset_of_abbreviatedDayNames_21() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___abbreviatedDayNames_21)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_abbreviatedDayNames_21() const { return ___abbreviatedDayNames_21; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_abbreviatedDayNames_21() { return &___abbreviatedDayNames_21; }
	inline void set_abbreviatedDayNames_21(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___abbreviatedDayNames_21 = value;
		Il2CppCodeGenWriteBarrier((&___abbreviatedDayNames_21), value);
	}

	inline static int32_t get_offset_of_m_superShortDayNames_22() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_superShortDayNames_22)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_superShortDayNames_22() const { return ___m_superShortDayNames_22; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_superShortDayNames_22() { return &___m_superShortDayNames_22; }
	inline void set_m_superShortDayNames_22(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_superShortDayNames_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_superShortDayNames_22), value);
	}

	inline static int32_t get_offset_of_dayNames_23() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___dayNames_23)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_dayNames_23() const { return ___dayNames_23; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_dayNames_23() { return &___dayNames_23; }
	inline void set_dayNames_23(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___dayNames_23 = value;
		Il2CppCodeGenWriteBarrier((&___dayNames_23), value);
	}

	inline static int32_t get_offset_of_abbreviatedMonthNames_24() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___abbreviatedMonthNames_24)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_abbreviatedMonthNames_24() const { return ___abbreviatedMonthNames_24; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_abbreviatedMonthNames_24() { return &___abbreviatedMonthNames_24; }
	inline void set_abbreviatedMonthNames_24(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___abbreviatedMonthNames_24 = value;
		Il2CppCodeGenWriteBarrier((&___abbreviatedMonthNames_24), value);
	}

	inline static int32_t get_offset_of_monthNames_25() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___monthNames_25)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_monthNames_25() const { return ___monthNames_25; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_monthNames_25() { return &___monthNames_25; }
	inline void set_monthNames_25(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___monthNames_25 = value;
		Il2CppCodeGenWriteBarrier((&___monthNames_25), value);
	}

	inline static int32_t get_offset_of_genitiveMonthNames_26() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___genitiveMonthNames_26)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_genitiveMonthNames_26() const { return ___genitiveMonthNames_26; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_genitiveMonthNames_26() { return &___genitiveMonthNames_26; }
	inline void set_genitiveMonthNames_26(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___genitiveMonthNames_26 = value;
		Il2CppCodeGenWriteBarrier((&___genitiveMonthNames_26), value);
	}

	inline static int32_t get_offset_of_m_genitiveAbbreviatedMonthNames_27() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_genitiveAbbreviatedMonthNames_27)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_genitiveAbbreviatedMonthNames_27() const { return ___m_genitiveAbbreviatedMonthNames_27; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_genitiveAbbreviatedMonthNames_27() { return &___m_genitiveAbbreviatedMonthNames_27; }
	inline void set_m_genitiveAbbreviatedMonthNames_27(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_genitiveAbbreviatedMonthNames_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_genitiveAbbreviatedMonthNames_27), value);
	}

	inline static int32_t get_offset_of_leapYearMonthNames_28() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___leapYearMonthNames_28)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_leapYearMonthNames_28() const { return ___leapYearMonthNames_28; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_leapYearMonthNames_28() { return &___leapYearMonthNames_28; }
	inline void set_leapYearMonthNames_28(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___leapYearMonthNames_28 = value;
		Il2CppCodeGenWriteBarrier((&___leapYearMonthNames_28), value);
	}

	inline static int32_t get_offset_of_longDatePattern_29() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___longDatePattern_29)); }
	inline String_t* get_longDatePattern_29() const { return ___longDatePattern_29; }
	inline String_t** get_address_of_longDatePattern_29() { return &___longDatePattern_29; }
	inline void set_longDatePattern_29(String_t* value)
	{
		___longDatePattern_29 = value;
		Il2CppCodeGenWriteBarrier((&___longDatePattern_29), value);
	}

	inline static int32_t get_offset_of_shortDatePattern_30() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___shortDatePattern_30)); }
	inline String_t* get_shortDatePattern_30() const { return ___shortDatePattern_30; }
	inline String_t** get_address_of_shortDatePattern_30() { return &___shortDatePattern_30; }
	inline void set_shortDatePattern_30(String_t* value)
	{
		___shortDatePattern_30 = value;
		Il2CppCodeGenWriteBarrier((&___shortDatePattern_30), value);
	}

	inline static int32_t get_offset_of_yearMonthPattern_31() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___yearMonthPattern_31)); }
	inline String_t* get_yearMonthPattern_31() const { return ___yearMonthPattern_31; }
	inline String_t** get_address_of_yearMonthPattern_31() { return &___yearMonthPattern_31; }
	inline void set_yearMonthPattern_31(String_t* value)
	{
		___yearMonthPattern_31 = value;
		Il2CppCodeGenWriteBarrier((&___yearMonthPattern_31), value);
	}

	inline static int32_t get_offset_of_longTimePattern_32() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___longTimePattern_32)); }
	inline String_t* get_longTimePattern_32() const { return ___longTimePattern_32; }
	inline String_t** get_address_of_longTimePattern_32() { return &___longTimePattern_32; }
	inline void set_longTimePattern_32(String_t* value)
	{
		___longTimePattern_32 = value;
		Il2CppCodeGenWriteBarrier((&___longTimePattern_32), value);
	}

	inline static int32_t get_offset_of_shortTimePattern_33() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___shortTimePattern_33)); }
	inline String_t* get_shortTimePattern_33() const { return ___shortTimePattern_33; }
	inline String_t** get_address_of_shortTimePattern_33() { return &___shortTimePattern_33; }
	inline void set_shortTimePattern_33(String_t* value)
	{
		___shortTimePattern_33 = value;
		Il2CppCodeGenWriteBarrier((&___shortTimePattern_33), value);
	}

	inline static int32_t get_offset_of_allYearMonthPatterns_34() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___allYearMonthPatterns_34)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_allYearMonthPatterns_34() const { return ___allYearMonthPatterns_34; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_allYearMonthPatterns_34() { return &___allYearMonthPatterns_34; }
	inline void set_allYearMonthPatterns_34(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___allYearMonthPatterns_34 = value;
		Il2CppCodeGenWriteBarrier((&___allYearMonthPatterns_34), value);
	}

	inline static int32_t get_offset_of_allShortDatePatterns_35() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___allShortDatePatterns_35)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_allShortDatePatterns_35() const { return ___allShortDatePatterns_35; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_allShortDatePatterns_35() { return &___allShortDatePatterns_35; }
	inline void set_allShortDatePatterns_35(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___allShortDatePatterns_35 = value;
		Il2CppCodeGenWriteBarrier((&___allShortDatePatterns_35), value);
	}

	inline static int32_t get_offset_of_allLongDatePatterns_36() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___allLongDatePatterns_36)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_allLongDatePatterns_36() const { return ___allLongDatePatterns_36; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_allLongDatePatterns_36() { return &___allLongDatePatterns_36; }
	inline void set_allLongDatePatterns_36(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___allLongDatePatterns_36 = value;
		Il2CppCodeGenWriteBarrier((&___allLongDatePatterns_36), value);
	}

	inline static int32_t get_offset_of_allShortTimePatterns_37() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___allShortTimePatterns_37)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_allShortTimePatterns_37() const { return ___allShortTimePatterns_37; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_allShortTimePatterns_37() { return &___allShortTimePatterns_37; }
	inline void set_allShortTimePatterns_37(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___allShortTimePatterns_37 = value;
		Il2CppCodeGenWriteBarrier((&___allShortTimePatterns_37), value);
	}

	inline static int32_t get_offset_of_allLongTimePatterns_38() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___allLongTimePatterns_38)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_allLongTimePatterns_38() const { return ___allLongTimePatterns_38; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_allLongTimePatterns_38() { return &___allLongTimePatterns_38; }
	inline void set_allLongTimePatterns_38(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___allLongTimePatterns_38 = value;
		Il2CppCodeGenWriteBarrier((&___allLongTimePatterns_38), value);
	}

	inline static int32_t get_offset_of_m_eraNames_39() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_eraNames_39)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_eraNames_39() const { return ___m_eraNames_39; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_eraNames_39() { return &___m_eraNames_39; }
	inline void set_m_eraNames_39(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_eraNames_39 = value;
		Il2CppCodeGenWriteBarrier((&___m_eraNames_39), value);
	}

	inline static int32_t get_offset_of_m_abbrevEraNames_40() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_abbrevEraNames_40)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_abbrevEraNames_40() const { return ___m_abbrevEraNames_40; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_abbrevEraNames_40() { return &___m_abbrevEraNames_40; }
	inline void set_m_abbrevEraNames_40(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_abbrevEraNames_40 = value;
		Il2CppCodeGenWriteBarrier((&___m_abbrevEraNames_40), value);
	}

	inline static int32_t get_offset_of_m_abbrevEnglishEraNames_41() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_abbrevEnglishEraNames_41)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_abbrevEnglishEraNames_41() const { return ___m_abbrevEnglishEraNames_41; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_abbrevEnglishEraNames_41() { return &___m_abbrevEnglishEraNames_41; }
	inline void set_m_abbrevEnglishEraNames_41(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_abbrevEnglishEraNames_41 = value;
		Il2CppCodeGenWriteBarrier((&___m_abbrevEnglishEraNames_41), value);
	}

	inline static int32_t get_offset_of_optionalCalendars_42() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___optionalCalendars_42)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_optionalCalendars_42() const { return ___optionalCalendars_42; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_optionalCalendars_42() { return &___optionalCalendars_42; }
	inline void set_optionalCalendars_42(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___optionalCalendars_42 = value;
		Il2CppCodeGenWriteBarrier((&___optionalCalendars_42), value);
	}

	inline static int32_t get_offset_of_m_isReadOnly_44() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_isReadOnly_44)); }
	inline bool get_m_isReadOnly_44() const { return ___m_isReadOnly_44; }
	inline bool* get_address_of_m_isReadOnly_44() { return &___m_isReadOnly_44; }
	inline void set_m_isReadOnly_44(bool value)
	{
		___m_isReadOnly_44 = value;
	}

	inline static int32_t get_offset_of_formatFlags_45() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___formatFlags_45)); }
	inline int32_t get_formatFlags_45() const { return ___formatFlags_45; }
	inline int32_t* get_address_of_formatFlags_45() { return &___formatFlags_45; }
	inline void set_formatFlags_45(int32_t value)
	{
		___formatFlags_45 = value;
	}

	inline static int32_t get_offset_of_CultureID_47() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___CultureID_47)); }
	inline int32_t get_CultureID_47() const { return ___CultureID_47; }
	inline int32_t* get_address_of_CultureID_47() { return &___CultureID_47; }
	inline void set_CultureID_47(int32_t value)
	{
		___CultureID_47 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_48() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_useUserOverride_48)); }
	inline bool get_m_useUserOverride_48() const { return ___m_useUserOverride_48; }
	inline bool* get_address_of_m_useUserOverride_48() { return &___m_useUserOverride_48; }
	inline void set_m_useUserOverride_48(bool value)
	{
		___m_useUserOverride_48 = value;
	}

	inline static int32_t get_offset_of_bUseCalendarInfo_49() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___bUseCalendarInfo_49)); }
	inline bool get_bUseCalendarInfo_49() const { return ___bUseCalendarInfo_49; }
	inline bool* get_address_of_bUseCalendarInfo_49() { return &___bUseCalendarInfo_49; }
	inline void set_bUseCalendarInfo_49(bool value)
	{
		___bUseCalendarInfo_49 = value;
	}

	inline static int32_t get_offset_of_nDataItem_50() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___nDataItem_50)); }
	inline int32_t get_nDataItem_50() const { return ___nDataItem_50; }
	inline int32_t* get_address_of_nDataItem_50() { return &___nDataItem_50; }
	inline void set_nDataItem_50(int32_t value)
	{
		___nDataItem_50 = value;
	}

	inline static int32_t get_offset_of_m_isDefaultCalendar_51() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_isDefaultCalendar_51)); }
	inline bool get_m_isDefaultCalendar_51() const { return ___m_isDefaultCalendar_51; }
	inline bool* get_address_of_m_isDefaultCalendar_51() { return &___m_isDefaultCalendar_51; }
	inline void set_m_isDefaultCalendar_51(bool value)
	{
		___m_isDefaultCalendar_51 = value;
	}

	inline static int32_t get_offset_of_m_dateWords_53() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_dateWords_53)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_dateWords_53() const { return ___m_dateWords_53; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_dateWords_53() { return &___m_dateWords_53; }
	inline void set_m_dateWords_53(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_dateWords_53 = value;
		Il2CppCodeGenWriteBarrier((&___m_dateWords_53), value);
	}

	inline static int32_t get_offset_of_m_fullTimeSpanPositivePattern_54() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_fullTimeSpanPositivePattern_54)); }
	inline String_t* get_m_fullTimeSpanPositivePattern_54() const { return ___m_fullTimeSpanPositivePattern_54; }
	inline String_t** get_address_of_m_fullTimeSpanPositivePattern_54() { return &___m_fullTimeSpanPositivePattern_54; }
	inline void set_m_fullTimeSpanPositivePattern_54(String_t* value)
	{
		___m_fullTimeSpanPositivePattern_54 = value;
		Il2CppCodeGenWriteBarrier((&___m_fullTimeSpanPositivePattern_54), value);
	}

	inline static int32_t get_offset_of_m_fullTimeSpanNegativePattern_55() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_fullTimeSpanNegativePattern_55)); }
	inline String_t* get_m_fullTimeSpanNegativePattern_55() const { return ___m_fullTimeSpanNegativePattern_55; }
	inline String_t** get_address_of_m_fullTimeSpanNegativePattern_55() { return &___m_fullTimeSpanNegativePattern_55; }
	inline void set_m_fullTimeSpanNegativePattern_55(String_t* value)
	{
		___m_fullTimeSpanNegativePattern_55 = value;
		Il2CppCodeGenWriteBarrier((&___m_fullTimeSpanNegativePattern_55), value);
	}

	inline static int32_t get_offset_of_m_dtfiTokenHash_57() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_dtfiTokenHash_57)); }
	inline TokenHashValueU5BU5D_t5C8B41D89122FC1D3ED53C946C2656DA03CE899A* get_m_dtfiTokenHash_57() const { return ___m_dtfiTokenHash_57; }
	inline TokenHashValueU5BU5D_t5C8B41D89122FC1D3ED53C946C2656DA03CE899A** get_address_of_m_dtfiTokenHash_57() { return &___m_dtfiTokenHash_57; }
	inline void set_m_dtfiTokenHash_57(TokenHashValueU5BU5D_t5C8B41D89122FC1D3ED53C946C2656DA03CE899A* value)
	{
		___m_dtfiTokenHash_57 = value;
		Il2CppCodeGenWriteBarrier((&___m_dtfiTokenHash_57), value);
	}
};

struct DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F_StaticFields
{
public:
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::invariantInfo
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___invariantInfo_0;
	// System.Boolean System.Globalization.DateTimeFormatInfo::preferExistingTokens
	bool ___preferExistingTokens_46;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_calendarNativeNames
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___s_calendarNativeNames_52;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_jajpDTFI
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___s_jajpDTFI_82;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_zhtwDTFI
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___s_zhtwDTFI_83;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F_StaticFields, ___invariantInfo_0)); }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariantInfo_0), value);
	}

	inline static int32_t get_offset_of_preferExistingTokens_46() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F_StaticFields, ___preferExistingTokens_46)); }
	inline bool get_preferExistingTokens_46() const { return ___preferExistingTokens_46; }
	inline bool* get_address_of_preferExistingTokens_46() { return &___preferExistingTokens_46; }
	inline void set_preferExistingTokens_46(bool value)
	{
		___preferExistingTokens_46 = value;
	}

	inline static int32_t get_offset_of_s_calendarNativeNames_52() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F_StaticFields, ___s_calendarNativeNames_52)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_s_calendarNativeNames_52() const { return ___s_calendarNativeNames_52; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_s_calendarNativeNames_52() { return &___s_calendarNativeNames_52; }
	inline void set_s_calendarNativeNames_52(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___s_calendarNativeNames_52 = value;
		Il2CppCodeGenWriteBarrier((&___s_calendarNativeNames_52), value);
	}

	inline static int32_t get_offset_of_s_jajpDTFI_82() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F_StaticFields, ___s_jajpDTFI_82)); }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * get_s_jajpDTFI_82() const { return ___s_jajpDTFI_82; }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F ** get_address_of_s_jajpDTFI_82() { return &___s_jajpDTFI_82; }
	inline void set_s_jajpDTFI_82(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * value)
	{
		___s_jajpDTFI_82 = value;
		Il2CppCodeGenWriteBarrier((&___s_jajpDTFI_82), value);
	}

	inline static int32_t get_offset_of_s_zhtwDTFI_83() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F_StaticFields, ___s_zhtwDTFI_83)); }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * get_s_zhtwDTFI_83() const { return ___s_zhtwDTFI_83; }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F ** get_address_of_s_zhtwDTFI_83() { return &___s_zhtwDTFI_83; }
	inline void set_s_zhtwDTFI_83(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * value)
	{
		___s_zhtwDTFI_83 = value;
		Il2CppCodeGenWriteBarrier((&___s_zhtwDTFI_83), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEFORMATINFO_TF4BB3AA482C2F772D2A9022F78BF8727830FAF5F_H
#ifndef NUMBERFORMATINFO_TFDF57037EBC5BC833D0A53EF0327B805994860A8_H
#define NUMBERFORMATINFO_TFDF57037EBC5BC833D0A53EF0327B805994860A8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberFormatInfo
struct  NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8  : public RuntimeObject
{
public:
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;

public:
	inline static int32_t get_offset_of_numberGroupSizes_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberGroupSizes_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_numberGroupSizes_1() const { return ___numberGroupSizes_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_numberGroupSizes_1() { return &___numberGroupSizes_1; }
	inline void set_numberGroupSizes_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___numberGroupSizes_1 = value;
		Il2CppCodeGenWriteBarrier((&___numberGroupSizes_1), value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyGroupSizes_2)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_currencyGroupSizes_2() const { return ___currencyGroupSizes_2; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_currencyGroupSizes_2() { return &___currencyGroupSizes_2; }
	inline void set_currencyGroupSizes_2(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___currencyGroupSizes_2 = value;
		Il2CppCodeGenWriteBarrier((&___currencyGroupSizes_2), value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentGroupSizes_3)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_percentGroupSizes_3() const { return ___percentGroupSizes_3; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_percentGroupSizes_3() { return &___percentGroupSizes_3; }
	inline void set_percentGroupSizes_3(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___percentGroupSizes_3 = value;
		Il2CppCodeGenWriteBarrier((&___percentGroupSizes_3), value);
	}

	inline static int32_t get_offset_of_positiveSign_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___positiveSign_4)); }
	inline String_t* get_positiveSign_4() const { return ___positiveSign_4; }
	inline String_t** get_address_of_positiveSign_4() { return &___positiveSign_4; }
	inline void set_positiveSign_4(String_t* value)
	{
		___positiveSign_4 = value;
		Il2CppCodeGenWriteBarrier((&___positiveSign_4), value);
	}

	inline static int32_t get_offset_of_negativeSign_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___negativeSign_5)); }
	inline String_t* get_negativeSign_5() const { return ___negativeSign_5; }
	inline String_t** get_address_of_negativeSign_5() { return &___negativeSign_5; }
	inline void set_negativeSign_5(String_t* value)
	{
		___negativeSign_5 = value;
		Il2CppCodeGenWriteBarrier((&___negativeSign_5), value);
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberDecimalSeparator_6)); }
	inline String_t* get_numberDecimalSeparator_6() const { return ___numberDecimalSeparator_6; }
	inline String_t** get_address_of_numberDecimalSeparator_6() { return &___numberDecimalSeparator_6; }
	inline void set_numberDecimalSeparator_6(String_t* value)
	{
		___numberDecimalSeparator_6 = value;
		Il2CppCodeGenWriteBarrier((&___numberDecimalSeparator_6), value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberGroupSeparator_7)); }
	inline String_t* get_numberGroupSeparator_7() const { return ___numberGroupSeparator_7; }
	inline String_t** get_address_of_numberGroupSeparator_7() { return &___numberGroupSeparator_7; }
	inline void set_numberGroupSeparator_7(String_t* value)
	{
		___numberGroupSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((&___numberGroupSeparator_7), value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((&___currencyGroupSeparator_8), value);
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyDecimalSeparator_9)); }
	inline String_t* get_currencyDecimalSeparator_9() const { return ___currencyDecimalSeparator_9; }
	inline String_t** get_address_of_currencyDecimalSeparator_9() { return &___currencyDecimalSeparator_9; }
	inline void set_currencyDecimalSeparator_9(String_t* value)
	{
		___currencyDecimalSeparator_9 = value;
		Il2CppCodeGenWriteBarrier((&___currencyDecimalSeparator_9), value);
	}

	inline static int32_t get_offset_of_currencySymbol_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencySymbol_10)); }
	inline String_t* get_currencySymbol_10() const { return ___currencySymbol_10; }
	inline String_t** get_address_of_currencySymbol_10() { return &___currencySymbol_10; }
	inline void set_currencySymbol_10(String_t* value)
	{
		___currencySymbol_10 = value;
		Il2CppCodeGenWriteBarrier((&___currencySymbol_10), value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___ansiCurrencySymbol_11)); }
	inline String_t* get_ansiCurrencySymbol_11() const { return ___ansiCurrencySymbol_11; }
	inline String_t** get_address_of_ansiCurrencySymbol_11() { return &___ansiCurrencySymbol_11; }
	inline void set_ansiCurrencySymbol_11(String_t* value)
	{
		___ansiCurrencySymbol_11 = value;
		Il2CppCodeGenWriteBarrier((&___ansiCurrencySymbol_11), value);
	}

	inline static int32_t get_offset_of_nanSymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___nanSymbol_12)); }
	inline String_t* get_nanSymbol_12() const { return ___nanSymbol_12; }
	inline String_t** get_address_of_nanSymbol_12() { return &___nanSymbol_12; }
	inline void set_nanSymbol_12(String_t* value)
	{
		___nanSymbol_12 = value;
		Il2CppCodeGenWriteBarrier((&___nanSymbol_12), value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___positiveInfinitySymbol_13)); }
	inline String_t* get_positiveInfinitySymbol_13() const { return ___positiveInfinitySymbol_13; }
	inline String_t** get_address_of_positiveInfinitySymbol_13() { return &___positiveInfinitySymbol_13; }
	inline void set_positiveInfinitySymbol_13(String_t* value)
	{
		___positiveInfinitySymbol_13 = value;
		Il2CppCodeGenWriteBarrier((&___positiveInfinitySymbol_13), value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((&___negativeInfinitySymbol_14), value);
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentDecimalSeparator_15)); }
	inline String_t* get_percentDecimalSeparator_15() const { return ___percentDecimalSeparator_15; }
	inline String_t** get_address_of_percentDecimalSeparator_15() { return &___percentDecimalSeparator_15; }
	inline void set_percentDecimalSeparator_15(String_t* value)
	{
		___percentDecimalSeparator_15 = value;
		Il2CppCodeGenWriteBarrier((&___percentDecimalSeparator_15), value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentGroupSeparator_16)); }
	inline String_t* get_percentGroupSeparator_16() const { return ___percentGroupSeparator_16; }
	inline String_t** get_address_of_percentGroupSeparator_16() { return &___percentGroupSeparator_16; }
	inline void set_percentGroupSeparator_16(String_t* value)
	{
		___percentGroupSeparator_16 = value;
		Il2CppCodeGenWriteBarrier((&___percentGroupSeparator_16), value);
	}

	inline static int32_t get_offset_of_percentSymbol_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentSymbol_17)); }
	inline String_t* get_percentSymbol_17() const { return ___percentSymbol_17; }
	inline String_t** get_address_of_percentSymbol_17() { return &___percentSymbol_17; }
	inline void set_percentSymbol_17(String_t* value)
	{
		___percentSymbol_17 = value;
		Il2CppCodeGenWriteBarrier((&___percentSymbol_17), value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___perMilleSymbol_18)); }
	inline String_t* get_perMilleSymbol_18() const { return ___perMilleSymbol_18; }
	inline String_t** get_address_of_perMilleSymbol_18() { return &___perMilleSymbol_18; }
	inline void set_perMilleSymbol_18(String_t* value)
	{
		___perMilleSymbol_18 = value;
		Il2CppCodeGenWriteBarrier((&___perMilleSymbol_18), value);
	}

	inline static int32_t get_offset_of_nativeDigits_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___nativeDigits_19)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_nativeDigits_19() const { return ___nativeDigits_19; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_nativeDigits_19() { return &___nativeDigits_19; }
	inline void set_nativeDigits_19(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___nativeDigits_19 = value;
		Il2CppCodeGenWriteBarrier((&___nativeDigits_19), value);
	}

	inline static int32_t get_offset_of_m_dataItem_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___m_dataItem_20)); }
	inline int32_t get_m_dataItem_20() const { return ___m_dataItem_20; }
	inline int32_t* get_address_of_m_dataItem_20() { return &___m_dataItem_20; }
	inline void set_m_dataItem_20(int32_t value)
	{
		___m_dataItem_20 = value;
	}

	inline static int32_t get_offset_of_numberDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberDecimalDigits_21)); }
	inline int32_t get_numberDecimalDigits_21() const { return ___numberDecimalDigits_21; }
	inline int32_t* get_address_of_numberDecimalDigits_21() { return &___numberDecimalDigits_21; }
	inline void set_numberDecimalDigits_21(int32_t value)
	{
		___numberDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyDecimalDigits_22)); }
	inline int32_t get_currencyDecimalDigits_22() const { return ___currencyDecimalDigits_22; }
	inline int32_t* get_address_of_currencyDecimalDigits_22() { return &___currencyDecimalDigits_22; }
	inline void set_currencyDecimalDigits_22(int32_t value)
	{
		___currencyDecimalDigits_22 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyPositivePattern_23)); }
	inline int32_t get_currencyPositivePattern_23() const { return ___currencyPositivePattern_23; }
	inline int32_t* get_address_of_currencyPositivePattern_23() { return &___currencyPositivePattern_23; }
	inline void set_currencyPositivePattern_23(int32_t value)
	{
		___currencyPositivePattern_23 = value;
	}

	inline static int32_t get_offset_of_currencyNegativePattern_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyNegativePattern_24)); }
	inline int32_t get_currencyNegativePattern_24() const { return ___currencyNegativePattern_24; }
	inline int32_t* get_address_of_currencyNegativePattern_24() { return &___currencyNegativePattern_24; }
	inline void set_currencyNegativePattern_24(int32_t value)
	{
		___currencyNegativePattern_24 = value;
	}

	inline static int32_t get_offset_of_numberNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberNegativePattern_25)); }
	inline int32_t get_numberNegativePattern_25() const { return ___numberNegativePattern_25; }
	inline int32_t* get_address_of_numberNegativePattern_25() { return &___numberNegativePattern_25; }
	inline void set_numberNegativePattern_25(int32_t value)
	{
		___numberNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentNegativePattern_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentNegativePattern_27)); }
	inline int32_t get_percentNegativePattern_27() const { return ___percentNegativePattern_27; }
	inline int32_t* get_address_of_percentNegativePattern_27() { return &___percentNegativePattern_27; }
	inline void set_percentNegativePattern_27(int32_t value)
	{
		___percentNegativePattern_27 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentDecimalDigits_28)); }
	inline int32_t get_percentDecimalDigits_28() const { return ___percentDecimalDigits_28; }
	inline int32_t* get_address_of_percentDecimalDigits_28() { return &___percentDecimalDigits_28; }
	inline void set_percentDecimalDigits_28(int32_t value)
	{
		___percentDecimalDigits_28 = value;
	}

	inline static int32_t get_offset_of_digitSubstitution_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___digitSubstitution_29)); }
	inline int32_t get_digitSubstitution_29() const { return ___digitSubstitution_29; }
	inline int32_t* get_address_of_digitSubstitution_29() { return &___digitSubstitution_29; }
	inline void set_digitSubstitution_29(int32_t value)
	{
		___digitSubstitution_29 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___isReadOnly_30)); }
	inline bool get_isReadOnly_30() const { return ___isReadOnly_30; }
	inline bool* get_address_of_isReadOnly_30() { return &___isReadOnly_30; }
	inline void set_isReadOnly_30(bool value)
	{
		___isReadOnly_30 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___m_useUserOverride_31)); }
	inline bool get_m_useUserOverride_31() const { return ___m_useUserOverride_31; }
	inline bool* get_address_of_m_useUserOverride_31() { return &___m_useUserOverride_31; }
	inline void set_m_useUserOverride_31(bool value)
	{
		___m_useUserOverride_31 = value;
	}

	inline static int32_t get_offset_of_m_isInvariant_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___m_isInvariant_32)); }
	inline bool get_m_isInvariant_32() const { return ___m_isInvariant_32; }
	inline bool* get_address_of_m_isInvariant_32() { return &___m_isInvariant_32; }
	inline void set_m_isInvariant_32(bool value)
	{
		___m_isInvariant_32 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___validForParseAsNumber_33)); }
	inline bool get_validForParseAsNumber_33() const { return ___validForParseAsNumber_33; }
	inline bool* get_address_of_validForParseAsNumber_33() { return &___validForParseAsNumber_33; }
	inline void set_validForParseAsNumber_33(bool value)
	{
		___validForParseAsNumber_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___validForParseAsCurrency_34)); }
	inline bool get_validForParseAsCurrency_34() const { return ___validForParseAsCurrency_34; }
	inline bool* get_address_of_validForParseAsCurrency_34() { return &___validForParseAsCurrency_34; }
	inline void set_validForParseAsCurrency_34(bool value)
	{
		___validForParseAsCurrency_34 = value;
	}
};

struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___invariantInfo_0;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8_StaticFields, ___invariantInfo_0)); }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariantInfo_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBERFORMATINFO_TFDF57037EBC5BC833D0A53EF0327B805994860A8_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef EXPORTERFUNC_TDB931620EB9DB59806E5A45685FDCC0F7F49F062_H
#define EXPORTERFUNC_TDB931620EB9DB59806E5A45685FDCC0F7F49F062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.ExporterFunc
struct  ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPORTERFUNC_TDB931620EB9DB59806E5A45685FDCC0F7F49F062_H
#ifndef IMPORTERFUNC_TCED74160F3788D9B6DA0C9EAD78FAABA687257FB_H
#define IMPORTERFUNC_TCED74160F3788D9B6DA0C9EAD78FAABA687257FB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.ImporterFunc
struct  ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMPORTERFUNC_TCED74160F3788D9B6DA0C9EAD78FAABA687257FB_H
#ifndef STATEHANDLER_T09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C_H
#define STATEHANDLER_T09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.Lexer_StateHandler
struct  StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATEHANDLER_T09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C_H
#ifndef WRAPPERFACTORY_TD6F47E2E7EA3DDD74006601D884BD3D45744A27B_H
#define WRAPPERFACTORY_TD6F47E2E7EA3DDD74006601D884BD3D45744A27B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.WrapperFactory
struct  WrapperFactory_tD6F47E2E7EA3DDD74006601D884BD3D45744A27B  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRAPPERFACTORY_TD6F47E2E7EA3DDD74006601D884BD3D45744A27B_H
#ifndef ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#define ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// LitJson.Lexer_StateHandler[]
struct StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * m_Items[1];

public:
	inline StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m783A0935E40FCB80D5940E8CCF0EFEFE41D7C7D3_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_mA0CA4D82855EC7D2B4EA1E5F258DFE94686142C8_gshared (List_1_t8E9FA96864291A9D7EFECBE85759FED5F9528EA1 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB42625F3D9E5DACA297A65AB08A6A18235995CC2_gshared (Dictionary_2_t667FCCFC6CEF3A7C15E05D8E524EE73A97AC7158 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA1D14F10D264C8524F8FFC7853EF7016D1768740_gshared (Dictionary_2_tC9927E0430844FDF48606360346CB63C4F57074C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Stack_1__ctor_mBE1E29EA2DD08B28D90EE0863F7ABAAB1AB72346_gshared (Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Push(!0)
extern "C" IL2CPP_METHOD_ATTR void Stack_1_Push_mD3B46B9F2D18C0A81C61D3789929F5A5A1E0E11A_gshared (Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Clear()
extern "C" IL2CPP_METHOD_ATTR void Stack_1_Clear_mD2C5F5995181B9EE7CE01E53E26D16F904AC35BC_gshared (Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Int32>::Peek()
extern "C" IL2CPP_METHOD_ATTR int32_t Stack_1_Peek_mCED2BEDAF1531884132F6C4DCC4722A8CE242BE7_gshared (Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Int32>::Pop()
extern "C" IL2CPP_METHOD_ATTR int32_t Stack_1_Pop_m8B651B069863A65F6004C723598916FBAF2DBEB3_gshared (Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Stack_1__ctor_mD0E32FFEA8E13AF0454470323C18CA9475986570_gshared (Stack_1_t0D197BFD9E4E8ABDD6CB59029EE175E24078F45D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
extern "C" IL2CPP_METHOD_ATTR void Stack_1_Push_m37B071735755DFDACCBD15B90883504F838E91EC_gshared (Stack_1_t0D197BFD9E4E8ABDD6CB59029EE175E24078F45D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Collections.ICollection LitJson.JsonData::EnsureCollection()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureCollection_mD804E53722BBFA8341BC023F05B206051AAD7C70 (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, const RuntimeMethod* method);
// System.Int32 LitJson.JsonData::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t JsonData_get_Count_m58E66E455504C6FFA27EED8A784D0EBAABCC1BAC (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, const RuntimeMethod* method);
// System.Collections.IList LitJson.JsonData::EnsureList()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureList_mEFDDDC6D93F8783B4812C6560FAE3C0004E747AF (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* p0, const RuntimeMethod* method);
// LitJson.JsonData LitJson.JsonData::ToJsonData(System.Object)
extern "C" IL2CPP_METHOD_ATTR JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * JsonData_ToJsonData_m8A63D23C6ABE990402EACDCE57D1D6BFD8DA339F (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void LitJson.JsonData::set_Item(System.String,LitJson.JsonData)
extern "C" IL2CPP_METHOD_ATTR void JsonData_set_Item_mCB8D80A7E71BABBA804FB20E0826280C632E95B4 (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, String_t* ___prop_name0, JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * ___value1, const RuntimeMethod* method);
// System.Void LitJson.JsonData::set_Item(System.Int32,LitJson.JsonData)
extern "C" IL2CPP_METHOD_ATTR void JsonData_set_Item_m23565FE238DAC8A0EEFB05E760CCD703870EE84C (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, int32_t ___index0, JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * ___value1, const RuntimeMethod* method);
// System.Collections.IDictionary LitJson.JsonData::EnsureDictionary()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureDictionary_mAE6098C5C9BC75ED04C8813D0F890CFF5700473C (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_mE1ADFA880378D99D9E7709B8013B5859B1B8ECFF (KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6 * __this, String_t* p0, JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * p1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6 *, String_t*, JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B *, const RuntimeMethod*))KeyValuePair_2__ctor_m783A0935E40FCB80D5940E8CCF0EFEFE41D7C7D3_gshared)(__this, p0, p1, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m89898A30A7D4B8881455AC234192D96131897B82 (KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.InvalidCastException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812 (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 LitJson.JsonData::Add(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t JsonData_Add_m4B602C73CA492BB9C52AA01FAB300D248973A661 (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void LitJson.OrderedDictionaryEnumerator::.ctor(System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>)
extern "C" IL2CPP_METHOD_ATTR void OrderedDictionaryEnumerator__ctor_mCFF0E48275FDBBF3F61369F9A26E6F60E43DC273 (OrderedDictionaryEnumerator_tFDD06F58C7165948CC4ED07A4F1915F314DA9582 * __this, RuntimeObject* ___enumerator0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>::.ctor()
inline void Dictionary_2__ctor_m1BFA0F2F4A7B0BB53A8CD323D8D300A3A658E247 (Dictionary_2_tAAD76381AA8A9C2DAA7F822E65E65360336B92CB * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAAD76381AA8A9C2DAA7F822E65E65360336B92CB *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::.ctor()
inline void List_1__ctor_mE1E2D8C90B1CA430C81A06B25BAF4B9A3F47083C (List_1_tAD8AAFA778AEF0545ADDFC9DB7AD3BB15D7CB284 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAD8AAFA778AEF0545ADDFC9DB7AD3BB15D7CB284 *, const RuntimeMethod*))List_1__ctor_mA0CA4D82855EC7D2B4EA1E5F258DFE94686142C8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::.ctor()
inline void List_1__ctor_m3B5AF066A236DC25B784E86DDE29F0805902659B (List_1_tAC22C8BB212278977BEF79BF725D95125D45C668 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAC22C8BB212278977BEF79BF725D95125D45C668 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void LitJson.JsonData::.ctor(System.Object)
extern "C" IL2CPP_METHOD_ATTR void JsonData__ctor_mFF9DBE2AD4312F9A7003B8DAD0483046DE093F98 (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean System.Int32::Equals(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Int32_Equals_mC8C45B8899F291D55A6152C8FEDB3CFFF181170B (int32_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.Int64::Equals(System.Int64)
extern "C" IL2CPP_METHOD_ATTR bool Int64_Equals_mB589D15F558BF8FECBB56EF429EFF5C7A39D9E0F (int64_t* __this, int64_t p0, const RuntimeMethod* method);
// System.Boolean System.Double::Equals(System.Double)
extern "C" IL2CPP_METHOD_ATTR bool Double_Equals_m07123CFF3B06183E095BF281110526F9B8953472 (double* __this, double p0, const RuntimeMethod* method);
// System.Boolean System.Boolean::Equals(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool Boolean_Equals_mD6223639457331BC16211ED4772C5927668DC060 (bool* __this, bool p0, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301 (bool* __this, const RuntimeMethod* method);
// System.String System.Double::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Double_ToString_mEB58879AE04C90A89E1475909F82BF4F8540D8CF (double* __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02 (int32_t* __this, const RuntimeMethod* method);
// System.String System.Int64::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Int64_ToString_m8210E39355A227AE15DD391EB810AA9B6AB8B26C (int64_t* __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void ApplicationException__ctor_m0AF8988654AD1CA2DCA8EC12E6D46563E4EE703F (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ApplicationException__ctor_mDC26CE8ECD0DDA5C8FA50C8E8B2614F3B50FC308 (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::.ctor()
inline void Dictionary_2__ctor_mEF64C6B3B952102C6F1AE0E31336E593E6EC0AC2 (Dictionary_2_tFA2B52DD1261DEC7A22FBF5CE7F9C8D05AFCBD2E * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFA2B52DD1261DEC7A22FBF5CE7F9C8D05AFCBD2E *, const RuntimeMethod*))Dictionary_2__ctor_mB42625F3D9E5DACA297A65AB08A6A18235995CC2_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::.ctor()
inline void Dictionary_2__ctor_mD35E372BD8C570253C47B0659C5F69B2D24A091A (Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>::.ctor()
inline void Dictionary_2__ctor_m2BEF9F19E617ED9A01F5890520BB462869875FAC (Dictionary_2_t9A46E2E31B1630C81E3DD6A97FA8738B0434B0CE * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9A46E2E31B1630C81E3DD6A97FA8738B0434B0CE *, const RuntimeMethod*))Dictionary_2__ctor_mA1D14F10D264C8524F8FFC7853EF7016D1768740_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::.ctor()
inline void Dictionary_2__ctor_mEA761C6464756C78904B515337A77F7D9C3021A1 (Dictionary_2_t34BE080DAD42913E622AD0FE20BD6A379003BE04 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t34BE080DAD42913E622AD0FE20BD6A379003BE04 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void LitJson.JsonWriter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void JsonWriter__ctor_m51E07A529AF622FE781FD3E1FFA3B11A1CA8A138 (JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * __this, const RuntimeMethod* method);
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_InvariantInfo()
extern "C" IL2CPP_METHOD_ATTR DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * DateTimeFormatInfo_get_InvariantInfo_mF4896D7991425B6C5391BB86C11091A8B715CCDC (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>::.ctor()
inline void Dictionary_2__ctor_mD256629EDFD969BDC80230EC785BC44498D2CE72 (Dictionary_2_t14B09BA64A95342370FBBE383B5B76B0689EF397 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t14B09BA64A95342370FBBE383B5B76B0689EF397 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::.ctor()
inline void Dictionary_2__ctor_mE47B13857C9D0090F3B56B7E892BC814F404DA7B (Dictionary_2_tD521C872BCC3C52150F3E3444D0A966E731D0646 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD521C872BCC3C52150F3E3444D0A966E731D0646 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void LitJson.JsonMapper::RegisterBaseExporters()
extern "C" IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseExporters_mA5AC4C24722E5CA1E3CA970DB48527B882415FE7 (const RuntimeMethod* method);
// System.Void LitJson.JsonMapper::RegisterBaseImporters()
extern "C" IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseImporters_m85C8F641A628BBC947809E7C82707539DA6B53E6 (const RuntimeMethod* method);
// System.Boolean LitJson.JsonReader::Read()
extern "C" IL2CPP_METHOD_ATTR bool JsonReader_Read_m2482C1BFE3E418D79BBBAF792E8F69857D02F5FD (JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * __this, const RuntimeMethod* method);
// LitJson.JsonToken LitJson.JsonReader::get_Token()
extern "C" IL2CPP_METHOD_ATTR int32_t JsonReader_get_Token_m42F16914150E177E6DA507D2A62A576BD542FB84 (JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * __this, const RuntimeMethod* method);
// LitJson.IJsonWrapper LitJson.WrapperFactory::Invoke()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* WrapperFactory_Invoke_m3C0A7BEE570A00F10787BB093B8B3B671DE55210 (WrapperFactory_tD6F47E2E7EA3DDD74006601D884BD3D45744A27B * __this, const RuntimeMethod* method);
// System.Object LitJson.JsonReader::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonReader_get_Value_mC116A83A4086133BAC5F081509795BCBBFF6822F (JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * __this, const RuntimeMethod* method);
// LitJson.IJsonWrapper LitJson.JsonMapper::ReadValue(LitJson.WrapperFactory,LitJson.JsonReader)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ReadValue_mEDBEF58FAFC351DB9B296EBE14EB71778A31C6A1 (WrapperFactory_tD6F47E2E7EA3DDD74006601D884BD3D45744A27B * ___factory0, JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * ___reader1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  p0, const RuntimeMethod* method);
// System.Void LitJson.ExporterFunc::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ExporterFunc__ctor_m746B6788F569D75C147E95502B5E13D55B370332 (ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void LitJson.ImporterFunc::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ImporterFunc__ctor_m148110F0AAA9719557496BFCBA0291A56E3A3C35 (ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void LitJson.JsonMapper::RegisterImporter(System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>,System.Type,System.Type,LitJson.ImporterFunc)
extern "C" IL2CPP_METHOD_ATTR void JsonMapper_RegisterImporter_mBB0CE190FAE3EA245045BBDD87FA7C7F4A0B2663 (RuntimeObject* ___table0, Type_t * ___json_type1, Type_t * ___value_type2, ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * ___importer3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>::.ctor()
inline void Dictionary_2__ctor_m5FFDD4CFBA5515DC13B768B3FDB691A4A5FD2A5A (Dictionary_2_t4D409F73FC7FC65765AB8AA78A71F3D0C9881B9E * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4D409F73FC7FC65765AB8AA78A71F3D0C9881B9E *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void LitJson.WrapperFactory::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void WrapperFactory__ctor_m58946D1D851ECF9297D875A2B66FC448F6235036 (WrapperFactory_tD6F47E2E7EA3DDD74006601D884BD3D45744A27B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ToWrapper_m6362C6D5BB943534B78DA927EEB2A2EB7A766826 (WrapperFactory_tD6F47E2E7EA3DDD74006601D884BD3D45744A27B * ___factory0, String_t* ___json1, const RuntimeMethod* method);
// System.Void LitJson.JsonReader::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void JsonReader__ctor_mFB752190E3EE77764F30486F2CC5FC51BAD74B59 (JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * __this, String_t* ___json_text0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Byte)
extern "C" IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m322C82C3EB50E7389A4A38C4601FD08705CA56CF (uint8_t p0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Write_m22DC3BB70AAE9EB12E5E2AC779EBAB234D24CA1A (JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * __this, int32_t ___number0, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Char)
extern "C" IL2CPP_METHOD_ATTR String_t* Convert_ToString_m1D5180AFF3E80B04E8FD3E98F59174D881CB85B3 (Il2CppChar p0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.String)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Write_m99731AB0DA1D5A4A96747C5A632EF2E7CC31BF10 (JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.DateTime,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Convert_ToString_m20E97C7A44B4E97B0391CA7810EF35FE25657425 (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.Decimal)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Write_m5D53C45B3D2664C22FE882EF407A9BD60D2FAC37 (JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * __this, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___number0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.SByte)
extern "C" IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m484F8DB9BD6090856385FF8A4C0113DD51D5CC1D (int8_t p0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Int16)
extern "C" IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mB0AA47EFAB81D1DBA0C2153ECBD0E19DE230BE2C (int16_t p0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m8A95C977AFB27DA577E58CAE3255F8B24EE79517 (uint16_t p0, const RuntimeMethod* method);
// System.UInt64 System.Convert::ToUInt64(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_mC8F7AEA2A46B8BEB45B65312F49EEE2540B596EC (uint32_t p0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Write_m8C8059D41B0D44F6AAA4C6DC2B3354E3E65A13E5 (JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * __this, uint64_t ___number0, const RuntimeMethod* method);
// System.Byte System.Convert::ToByte(System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint8_t Convert_ToByte_mC952E2B42FF6008EF2123228A0BFB9054531EB64 (int32_t p0, const RuntimeMethod* method);
// System.UInt64 System.Convert::ToUInt64(System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_m3D60F8111B12E0D8BB538E433065340CF45EB772 (int32_t p0, const RuntimeMethod* method);
// System.SByte System.Convert::ToSByte(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int8_t Convert_ToSByte_m65A58DC38CC3A2E7B1D2546EC2FE0803AAB03F34 (int32_t p0, const RuntimeMethod* method);
// System.Int16 System.Convert::ToInt16(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int16_t Convert_ToInt16_m0D8DD7C5E5F85BE27D38E0FBD17411B8682618B3 (int32_t p0, const RuntimeMethod* method);
// System.UInt16 System.Convert::ToUInt16(System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint16_t Convert_ToUInt16_m926B887258078B9BB42574AA2B3F95DC50460EA7 (int32_t p0, const RuntimeMethod* method);
// System.UInt32 System.Convert::ToUInt32(System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_mA22ABF80925CA54B6B4869939964184C7F344B41 (int32_t p0, const RuntimeMethod* method);
// System.Single System.Convert::ToSingle(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float Convert_ToSingle_m4D6202BB2F75526A5E01DA49A35D26007C76A21C (int32_t p0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Int32)
extern "C" IL2CPP_METHOD_ATTR double Convert_ToDouble_mAE52754212671CD42E2C67BD9ABCE18DAEE443CC (int32_t p0, const RuntimeMethod* method);
// System.Decimal System.Convert::ToDecimal(System.Double)
extern "C" IL2CPP_METHOD_ATTR Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  Convert_ToDecimal_mF93A2E5C1006C59187BA8F1F17E66CEC2D8F7FCE (double p0, const RuntimeMethod* method);
// System.UInt32 System.Convert::ToUInt32(System.Int64)
extern "C" IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_mD1B91075B4D330E0D2D4600A6D5283C2FA1586E4 (int64_t p0, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.String)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_mE2AE0A8A2085470EA17FC28F7D17BE676A135C45 (String_t* p0, const RuntimeMethod* method);
// System.DateTime System.Convert::ToDateTime(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  Convert_ToDateTime_m57803D920D7F8261F00652A19DD01E530A530795 (String_t* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Void LitJson.JsonData::.ctor()
extern "C" IL2CPP_METHOD_ATTR void JsonData__ctor_mFE9562FD93C205F1D65E03E4ED4C48F9AE63FBCE (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonReader::PopulateParseTable()
extern "C" IL2CPP_METHOD_ATTR void JsonReader_PopulateParseTable_m37392D9BABC41EEFC913064C0A37B68274CF4041 (const RuntimeMethod* method);
// System.Void System.IO.StringReader::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void StringReader__ctor_mA55383C19EFBC075E762145D88F15A2B8B0CDA17 (StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void JsonReader__ctor_m7CBFB7FEA5BB26A7FCE36B4F88AB573AD7C84F9D (JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * __this, TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * ___reader0, bool ___owned1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor()
inline void Stack_1__ctor_mBE1E29EA2DD08B28D90EE0863F7ABAAB1AB72346 (Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868 * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868 *, const RuntimeMethod*))Stack_1__ctor_mBE1E29EA2DD08B28D90EE0863F7ABAAB1AB72346_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Push(!0)
inline void Stack_1_Push_mD3B46B9F2D18C0A81C61D3789929F5A5A1E0E11A (Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868 *, int32_t, const RuntimeMethod*))Stack_1_Push_mD3B46B9F2D18C0A81C61D3789929F5A5A1E0E11A_gshared)(__this, p0, method);
}
// System.Void LitJson.Lexer::.ctor(System.IO.TextReader)
extern "C" IL2CPP_METHOD_ATTR void Lexer__ctor_mD352649398A906A9105691F6BCA996FC5E97C2B3 (Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * __this, TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * ___reader0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::.ctor()
inline void Dictionary_2__ctor_mD384100234657B6EA59FD1256FE13207C5E62EE8 (Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3 *, const RuntimeMethod*))Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared)(__this, method);
}
// System.Void LitJson.JsonReader::TableAddRow(LitJson.ParserToken)
extern "C" IL2CPP_METHOD_ATTR void JsonReader_TableAddRow_m0852CA4BED511145AE875DFA816563A79BC5F770 (int32_t ___rule0, const RuntimeMethod* method);
// System.Void LitJson.JsonReader::TableAddCol(LitJson.ParserToken,System.Int32,System.Int32[])
extern "C" IL2CPP_METHOD_ATTR void JsonReader_TableAddCol_mC5FF83B1CB2223195DC7517406E2465F166B2408 (int32_t ___row0, int32_t ___col1, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___symbols2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>::.ctor()
inline void Dictionary_2__ctor_m148696D175A4AE09615CDF2F8F1D21A729C0E155 (Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE *, const RuntimeMethod*))Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared)(__this, method);
}
// System.Int32 System.String::IndexOf(System.Char)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD (String_t* __this, Il2CppChar p0, const RuntimeMethod* method);
// System.Boolean System.Double::TryParse(System.String,System.Double&)
extern "C" IL2CPP_METHOD_ATTR bool Double_TryParse_m9F4A499E432413DC960D6441EE3EC50C2A9CB211 (String_t* p0, double* p1, const RuntimeMethod* method);
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool Int32_TryParse_m03D31CAB7050E8286A8A90711C896B181006AD00 (String_t* p0, int32_t* p1, const RuntimeMethod* method);
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
extern "C" IL2CPP_METHOD_ATTR bool Int64_TryParse_m5C60567D82BACC7D9C18F7A9A83025FC94AD0E95 (String_t* p0, int64_t* p1, const RuntimeMethod* method);
// System.String LitJson.Lexer::get_StringValue()
extern "C" IL2CPP_METHOD_ATTR String_t* Lexer_get_StringValue_m9E4575A40E16731552418AD2E084E2B3221D7B5A (Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonReader::ProcessNumber(System.String)
extern "C" IL2CPP_METHOD_ATTR void JsonReader_ProcessNumber_m8F8A03BDAF38BD0C2DACCBB4D491FAD2A3ED1BA9 (JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * __this, String_t* ___number0, const RuntimeMethod* method);
// System.Boolean LitJson.Lexer::NextToken()
extern "C" IL2CPP_METHOD_ATTR bool Lexer_NextToken_mF14B4AC849AC57E930D83C06A7E22BF6278C44B2 (Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * __this, const RuntimeMethod* method);
// System.Boolean LitJson.Lexer::get_EndOfInput()
extern "C" IL2CPP_METHOD_ATTR bool Lexer_get_EndOfInput_mDF1EAF83C6582DC0C8543A627C53D919E038CDC5 (Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonReader::Close()
extern "C" IL2CPP_METHOD_ATTR void JsonReader_Close_m16C8B367EB5508DC3BBA3F7889C30C06608B0BD9 (JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * __this, const RuntimeMethod* method);
// System.Int32 LitJson.Lexer::get_Token()
extern "C" IL2CPP_METHOD_ATTR int32_t Lexer_get_Token_m5879A42B7E53A08082B72CAB70EC0452F010E190 (Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Clear()
inline void Stack_1_Clear_mD2C5F5995181B9EE7CE01E53E26D16F904AC35BC (Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868 * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868 *, const RuntimeMethod*))Stack_1_Clear_mD2C5F5995181B9EE7CE01E53E26D16F904AC35BC_gshared)(__this, method);
}
// System.Boolean LitJson.JsonReader::ReadToken()
extern "C" IL2CPP_METHOD_ATTR bool JsonReader_ReadToken_m2D28BC759EE6B9ABB147846910925DB02565363F (JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Int32>::Peek()
inline int32_t Stack_1_Peek_mCED2BEDAF1531884132F6C4DCC4722A8CE242BE7 (Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868 *, const RuntimeMethod*))Stack_1_Peek_mCED2BEDAF1531884132F6C4DCC4722A8CE242BE7_gshared)(__this, method);
}
// !0 System.Collections.Generic.Stack`1<System.Int32>::Pop()
inline int32_t Stack_1_Pop_m8B651B069863A65F6004C723598916FBAF2DBEB3 (Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868 *, const RuntimeMethod*))Stack_1_Pop_m8B651B069863A65F6004C723598916FBAF2DBEB3_gshared)(__this, method);
}
// System.Void LitJson.JsonReader::ProcessSymbol()
extern "C" IL2CPP_METHOD_ATTR void JsonReader_ProcessSymbol_m8D765AA427910FC0DB42A6D90E97A5CC4A5D95A8 (JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void JsonException__ctor_m620CE615FE1C32AE4A93550F0040CB2CDA99F9D5 (JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void LitJson.JsonException::.ctor(LitJson.ParserToken,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void JsonException__ctor_m4BE1272AC624246C1CFC342E7531C58939538348 (JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886 * __this, int32_t ___token0, Exception_t * ___inner_exception1, const RuntimeMethod* method);
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_InvariantInfo()
extern "C" IL2CPP_METHOD_ATTR NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * NumberFormatInfo_get_InvariantInfo_m55FDCA552CC3CD15E01E10DBFDD5756AB1DCC54D (const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR void StringWriter__ctor_m95CECB2AA32BDD586F89DE2DA0EEEFABACB19A28 (StringWriter_t194EF1526E072B93984370042AA80926C2EB6139 * __this, StringBuilder_t * p0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Init()
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Init_m08C9221AAC3014A1C032D1D87FFD237A6F8CE8D8 (JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<LitJson.WriterContext>::.ctor()
inline void Stack_1__ctor_mB4717FF9B962276A435CD5E16AF1F716161D0137 (Stack_1_t9BE5E659552248E69D386D8ABF17AAB698FA87E8 * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t9BE5E659552248E69D386D8ABF17AAB698FA87E8 *, const RuntimeMethod*))Stack_1__ctor_mD0E32FFEA8E13AF0454470323C18CA9475986570_gshared)(__this, method);
}
// System.Void LitJson.WriterContext::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WriterContext__ctor_m66DB156E3CD81CDF68370F9DE5B03E03DEB9B380 (WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<LitJson.WriterContext>::Push(!0)
inline void Stack_1_Push_m5682E3BBD2F2B57246BEEEF0C92D1E6A6B8E26C3 (Stack_1_t9BE5E659552248E69D386D8ABF17AAB698FA87E8 * __this, WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599 * p0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t9BE5E659552248E69D386D8ABF17AAB698FA87E8 *, WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599 *, const RuntimeMethod*))Stack_1_Push_m37B071735755DFDACCBD15B90883504F838E91EC_gshared)(__this, p0, method);
}
// System.Void LitJson.JsonWriter::PutNewline(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_m272DAE164C21F5C8350E2C21A5D96F0254FB22C8 (JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * __this, bool ___add_comma0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Put(System.String)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Put_mB5F8242575AC21AC9243FEFE475B42D417F7E947 (JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018 (String_t* __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::IntToHex(System.Int32,System.Char[])
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_IntToHex_mD77139916243FD91C781A9783E2FCD05F55C1E76 (int32_t ___n0, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___hex1, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::DoValidation(LitJson.Condition)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_DoValidation_m1111EB36B0A8510F899124094E6593F442BAFAB9 (JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * __this, int32_t ___cond0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::PutNewline()
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_m0C412AF3F8402923BE66AA885C1DF6321FED879A (JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * __this, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Decimal,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Convert_ToString_mC3AC6F8BB681D0987C450396DCE22BAFAF5CB18D (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Int32,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Convert_ToString_m013DD2590D9DCBA00A8A4FEEBE7FC2DBD4DDBC70 (int32_t p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::PutString(System.String)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_PutString_m479DD3C59AF9FF47B1BDBCEE57AD51525261BB7F (JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.UInt64,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Convert_ToString_m700ABBAAF525328BB3A050D41B983F59E447C2D5 (uint64_t p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Void LitJson.Lexer::PopulateFsmTables()
extern "C" IL2CPP_METHOD_ATTR void Lexer_PopulateFsmTables_mB4B6CDAA85BB02A0DA337DD40D192A644A87F338 (const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1C0F2D97B838537A2D0F64033AE4EF02D150A956 (StringBuilder_t * __this, int32_t p0, const RuntimeMethod* method);
// System.Void LitJson.FsmContext::.ctor()
extern "C" IL2CPP_METHOD_ATTR void FsmContext__ctor_m71CE68D935F25263D086DEE1C4FD16D222494835 (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * __this, const RuntimeMethod* method);
// System.Void LitJson.Lexer/StateHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void StateHandler__ctor_m69A96CE1C6A022E95C84A1665403F4914ADADD2D (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C" IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A (RuntimeArray * p0, RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  p1, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m5BD134B72978B879B81A824DFAC8FF29F5300245 (int32_t p0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A (StringBuilder_t * __this, Il2CppChar p0, const RuntimeMethod* method);
// System.Boolean LitJson.Lexer::GetChar()
extern "C" IL2CPP_METHOD_ATTR bool Lexer_GetChar_mA3141E107E7E7E9A551D9D36E115620D19128303 (Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * __this, const RuntimeMethod* method);
// System.Void LitJson.Lexer::UngetChar()
extern "C" IL2CPP_METHOD_ATTR void Lexer_UngetChar_m224D9B68B52CB0976EDCDCC2CA4FC429245B634B (Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * __this, const RuntimeMethod* method);
// System.Char LitJson.Lexer::ProcessEscChar(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Lexer_ProcessEscChar_mD12709B2F24D59BBFF6981D95D54119E5E9C1B2D (int32_t ___esc_char0, const RuntimeMethod* method);
// System.Int32 LitJson.Lexer::HexValue(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Lexer_HexValue_m2CF2E4537A50566AA77041A472DCB252CB7ABFD7 (int32_t ___digit0, const RuntimeMethod* method);
// System.Int32 LitJson.Lexer::NextChar()
extern "C" IL2CPP_METHOD_ATTR int32_t Lexer_NextChar_m737E3B54AE8BA3D6A647D70314E9542F3F1BC1E5 (Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * __this, const RuntimeMethod* method);
// System.Boolean LitJson.Lexer/StateHandler::Invoke(LitJson.FsmContext)
extern "C" IL2CPP_METHOD_ATTR bool StateHandler_Invoke_mAD84D14AB369CC8F8224BAF3D5238597FA34BED2 (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * __this, FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * ___ctx0, const RuntimeMethod* method);
// System.Void LitJson.JsonException::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void JsonException__ctor_m24DEDB1205900D0FF39D8254D5E87545C5983892 (JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886 * __this, int32_t ___c0, const RuntimeMethod* method);
// System.Int32 System.Text.StringBuilder::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m44BCD2BF32D45E9376761FF33AA429BFBD902F07 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Remove_m5DA9C1C4D056FA61B8923BE85E6BFF44B14A24F9 (StringBuilder_t * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Collections.DictionaryEntry LitJson.OrderedDictionaryEnumerator::get_Entry()
extern "C" IL2CPP_METHOD_ATTR DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4  OrderedDictionaryEnumerator_get_Entry_m8108EC1012F10288CF420C7171ED12F518F06B4C (OrderedDictionaryEnumerator_tFDD06F58C7165948CC4ED07A4F1915F314DA9582 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>::get_Value()
inline JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * KeyValuePair_2_get_Value_m00156609B459EF3CE0C8174F2BDDC66C7601E2D9 (KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6 * __this, const RuntimeMethod* method)
{
	return ((  JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * (*) (KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared)(__this, method);
}
// System.Void System.Collections.DictionaryEntry::.ctor(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m67BC38CD2B85F134F3EB2473270CDD3933F7CD9B (DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: LitJson.ArrayMetadata
extern "C" void ArrayMetadata_t13879803DCC3EE8CB0E6B25C027EBCA471C264DA_marshal_pinvoke(const ArrayMetadata_t13879803DCC3EE8CB0E6B25C027EBCA471C264DA& unmarshaled, ArrayMetadata_t13879803DCC3EE8CB0E6B25C027EBCA471C264DA_marshaled_pinvoke& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL, NULL);
}
extern "C" void ArrayMetadata_t13879803DCC3EE8CB0E6B25C027EBCA471C264DA_marshal_pinvoke_back(const ArrayMetadata_t13879803DCC3EE8CB0E6B25C027EBCA471C264DA_marshaled_pinvoke& marshaled, ArrayMetadata_t13879803DCC3EE8CB0E6B25C027EBCA471C264DA& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ArrayMetadata
extern "C" void ArrayMetadata_t13879803DCC3EE8CB0E6B25C027EBCA471C264DA_marshal_pinvoke_cleanup(ArrayMetadata_t13879803DCC3EE8CB0E6B25C027EBCA471C264DA_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LitJson.ArrayMetadata
extern "C" void ArrayMetadata_t13879803DCC3EE8CB0E6B25C027EBCA471C264DA_marshal_com(const ArrayMetadata_t13879803DCC3EE8CB0E6B25C027EBCA471C264DA& unmarshaled, ArrayMetadata_t13879803DCC3EE8CB0E6B25C027EBCA471C264DA_marshaled_com& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL, NULL);
}
extern "C" void ArrayMetadata_t13879803DCC3EE8CB0E6B25C027EBCA471C264DA_marshal_com_back(const ArrayMetadata_t13879803DCC3EE8CB0E6B25C027EBCA471C264DA_marshaled_com& marshaled, ArrayMetadata_t13879803DCC3EE8CB0E6B25C027EBCA471C264DA& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ArrayMetadata
extern "C" void ArrayMetadata_t13879803DCC3EE8CB0E6B25C027EBCA471C264DA_marshal_com_cleanup(ArrayMetadata_t13879803DCC3EE8CB0E6B25C027EBCA471C264DA_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.ExporterFunc::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ExporterFunc__ctor_m746B6788F569D75C147E95502B5E13D55B370332 (ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void LitJson.ExporterFunc::Invoke(System.Object,LitJson.JsonWriter)
extern "C" IL2CPP_METHOD_ATTR void ExporterFunc_Invoke_m656D9AA249DDA1DC385FEEB8F04C4B997EB2C998 (ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * __this, RuntimeObject * ___obj0, JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * ___writer1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef void (*FunctionPointerType) (RuntimeObject *, JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___obj0, ___writer1, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, ___writer1, targetMethod);
				}
			}
			else if (___parameterCount != 2)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * >::Invoke(targetMethod, ___obj0, ___writer1);
							else
								GenericVirtActionInvoker1< JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * >::Invoke(targetMethod, ___obj0, ___writer1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___obj0, ___writer1);
							else
								VirtActionInvoker1< JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___obj0, ___writer1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___obj0, ___writer1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (RuntimeObject *, JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 *, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___obj0, ___writer1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< RuntimeObject *, JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * >::Invoke(targetMethod, targetThis, ___obj0, ___writer1);
							else
								GenericVirtActionInvoker2< RuntimeObject *, JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * >::Invoke(targetMethod, targetThis, ___obj0, ___writer1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< RuntimeObject *, JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0, ___writer1);
							else
								VirtActionInvoker2< RuntimeObject *, JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0, ___writer1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, ___writer1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___obj0, ___writer1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, ___writer1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * >::Invoke(targetMethod, ___obj0, ___writer1);
						else
							GenericVirtActionInvoker1< JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * >::Invoke(targetMethod, ___obj0, ___writer1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___obj0, ___writer1);
						else
							VirtActionInvoker1< JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___obj0, ___writer1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___obj0, ___writer1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___obj0, ___writer1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< RuntimeObject *, JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * >::Invoke(targetMethod, targetThis, ___obj0, ___writer1);
						else
							GenericVirtActionInvoker2< RuntimeObject *, JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * >::Invoke(targetMethod, targetThis, ___obj0, ___writer1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< RuntimeObject *, JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0, ___writer1);
						else
							VirtActionInvoker2< RuntimeObject *, JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0, ___writer1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, ___writer1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult LitJson.ExporterFunc::BeginInvoke(System.Object,LitJson.JsonWriter,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ExporterFunc_BeginInvoke_mA5A2D2C28B32FB0866FCE85C21E86F0585BE1C3E (ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * __this, RuntimeObject * ___obj0, JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * ___writer1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___obj0;
	__d_args[1] = ___writer1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void LitJson.ExporterFunc::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ExporterFunc_EndInvoke_mC55604FF21B045E4A540B75EA7E9F88534B8ACEF (ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.FsmContext::.ctor()
extern "C" IL2CPP_METHOD_ATTR void FsmContext__ctor_m71CE68D935F25263D086DEE1C4FD16D222494835 (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.ImporterFunc::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ImporterFunc__ctor_m148110F0AAA9719557496BFCBA0291A56E3A3C35 (ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Object LitJson.ImporterFunc::Invoke(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ImporterFunc_Invoke_m8893BAAF684441527F0C02F7921F37F85BE84C36 (ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
				}
				else
				{
					// closed
					typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, targetMethod);
				}
			}
			else if (___parameterCount != 1)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___input0);
							else
								result = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___input0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___input0);
							else
								result = VirtFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___input0);
						}
					}
				}
				else
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
							result = ((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___input0);
							else
								result = GenericVirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___input0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___input0);
							else
								result = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___input0);
						}
					}
				}
				else
				{
					typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___input0);
						else
							result = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___input0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___input0);
						else
							result = VirtFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___input0);
					}
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___input0);
						else
							result = GenericVirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___input0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___input0);
						else
							result = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___input0);
					}
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult LitJson.ImporterFunc::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ImporterFunc_BeginInvoke_m21F7F9621582AB319DFDBA081F5D00DC37F829B0 (ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * __this, RuntimeObject * ___input0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___input0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Object LitJson.ImporterFunc::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ImporterFunc_EndInvoke_mB79BA768FFBE3DB0C86F4354937210ED9638FB5B (ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 LitJson.JsonData::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t JsonData_get_Count_m58E66E455504C6FFA27EED8A784D0EBAABCC1BAC (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonData_get_Count_m58E66E455504C6FFA27EED8A784D0EBAABCC1BAC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = JsonData_EnsureCollection_mD804E53722BBFA8341BC023F05B206051AAD7C70(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 LitJson.JsonData::System.Collections.ICollection.get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t JsonData_System_Collections_ICollection_get_Count_mF6B92074640D2BA23222C07F02CF684955F7CF2F (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = JsonData_get_Count_m58E66E455504C6FFA27EED8A784D0EBAABCC1BAC(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.ICollection.get_IsSynchronized()
extern "C" IL2CPP_METHOD_ATTR bool JsonData_System_Collections_ICollection_get_IsSynchronized_mF36A84C6658B5EF9B25F40F16B7B34D31912AEA8 (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonData_System_Collections_ICollection_get_IsSynchronized_mF36A84C6658B5EF9B25F40F16B7B34D31912AEA8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = JsonData_EnsureCollection_mD804E53722BBFA8341BC023F05B206051AAD7C70(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean System.Collections.ICollection::get_IsSynchronized() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Object LitJson.JsonData::System.Collections.ICollection.get_SyncRoot()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonData_System_Collections_ICollection_get_SyncRoot_mD61EA8C074B0BA3569D9B003194F04EBA9F580C4 (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonData_System_Collections_ICollection_get_SyncRoot_mD61EA8C074B0BA3569D9B003194F04EBA9F580C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = JsonData_EnsureCollection_mD804E53722BBFA8341BC023F05B206051AAD7C70(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject * L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.IList.get_IsFixedSize()
extern "C" IL2CPP_METHOD_ATTR bool JsonData_System_Collections_IList_get_IsFixedSize_m03726F3BC83D7104DF8903DBBD5B223E981A4016 (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonData_System_Collections_IList_get_IsFixedSize_m03726F3BC83D7104DF8903DBBD5B223E981A4016_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = JsonData_EnsureList_mEFDDDC6D93F8783B4812C6560FAE3C0004E747AF(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.Collections.IList::get_IsFixedSize() */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.IList.get_IsReadOnly()
extern "C" IL2CPP_METHOD_ATTR bool JsonData_System_Collections_IList_get_IsReadOnly_m8001FCA3831F8CA088E174168E4289ED039CA6E0 (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonData_System_Collections_IList_get_IsReadOnly_m8001FCA3831F8CA088E174168E4289ED039CA6E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = JsonData_EnsureList_mEFDDDC6D93F8783B4812C6560FAE3C0004E747AF(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Collections.IList::get_IsReadOnly() */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void LitJson.JsonData::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void JsonData_System_Collections_IDictionary_set_Item_m61E230FFD0098CBD8A897955C327D134846BD1AF (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonData_System_Collections_IDictionary_set_Item_m61E230FFD0098CBD8A897955C327D134846BD1AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___key0;
		if (((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_1 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_1, _stringLiteral29ED3C4F83360BB754C9D2DED8D4297A135F2F06, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, JsonData_System_Collections_IDictionary_set_Item_m61E230FFD0098CBD8A897955C327D134846BD1AF_RuntimeMethod_var);
	}

IL_0013:
	{
		RuntimeObject * L_2 = ___value1;
		JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * L_3 = JsonData_ToJsonData_m8A63D23C6ABE990402EACDCE57D1D6BFD8DA339F(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		RuntimeObject * L_4 = ___key0;
		JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * L_5 = V_0;
		JsonData_set_Item_mCB8D80A7E71BABBA804FB20E0826280C632E95B4(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var)), L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Object LitJson.JsonData::System.Collections.IList.get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonData_System_Collections_IList_get_Item_mC80477B4F4DFC1BDB7B53649F43131AE8AAC3795 (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonData_System_Collections_IList_get_Item_mC80477B4F4DFC1BDB7B53649F43131AE8AAC3795_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = JsonData_EnsureList_mEFDDDC6D93F8783B4812C6560FAE3C0004E747AF(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		RuntimeObject * L_2 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR void JsonData_System_Collections_IList_set_Item_mF38B24CB55059D121CB703728D38CE6D89D00FBB (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * V_0 = NULL;
	{
		JsonData_EnsureList_mEFDDDC6D93F8783B4812C6560FAE3C0004E747AF(__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___value1;
		JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * L_1 = JsonData_ToJsonData_m8A63D23C6ABE990402EACDCE57D1D6BFD8DA339F(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = ___index0;
		JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * L_3 = V_0;
		JsonData_set_Item_m23565FE238DAC8A0EEFB05E760CCD703870EE84C(__this, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// LitJson.JsonData LitJson.JsonData::get_Item(System.String)
extern "C" IL2CPP_METHOD_ATTR JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * JsonData_get_Item_m6708CB728C7DD9D84C4111B00AC0D49B614FF420 (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, String_t* ___prop_name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonData_get_Item_m6708CB728C7DD9D84C4111B00AC0D49B614FF420_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonData_EnsureDictionary_mAE6098C5C9BC75ED04C8813D0F890CFF5700473C(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = __this->get_inst_object_5();
		String_t* L_1 = ___prop_name0;
		NullCheck(L_0);
		JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * L_2 = InterfaceFuncInvoker1< JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B *, String_t* >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::get_Item(!0) */, IDictionary_2_t696CC22FEC09091FA09796F4CBF79A43903F159D_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void LitJson.JsonData::set_Item(System.String,LitJson.JsonData)
extern "C" IL2CPP_METHOD_ATTR void JsonData_set_Item_mCB8D80A7E71BABBA804FB20E0826280C632E95B4 (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, String_t* ___prop_name0, JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonData_set_Item_mCB8D80A7E71BABBA804FB20E0826280C632E95B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		JsonData_EnsureDictionary_mAE6098C5C9BC75ED04C8813D0F890CFF5700473C(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___prop_name0;
		JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * L_1 = ___value1;
		KeyValuePair_2__ctor_mE1ADFA880378D99D9E7709B8013B5859B1B8ECFF((KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6 *)(&V_0), L_0, L_1, /*hidden argument*/KeyValuePair_2__ctor_mE1ADFA880378D99D9E7709B8013B5859B1B8ECFF_RuntimeMethod_var);
		RuntimeObject* L_2 = __this->get_inst_object_5();
		String_t* L_3 = ___prop_name0;
		NullCheck(L_2);
		bool L_4 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::ContainsKey(!0) */, IDictionary_2_t696CC22FEC09091FA09796F4CBF79A43903F159D_il2cpp_TypeInfo_var, L_2, L_3);
		if (!L_4)
		{
			goto IL_0061;
		}
	}
	{
		V_1 = 0;
		goto IL_0051;
	}

IL_0022:
	{
		RuntimeObject* L_5 = __this->get_object_list_9();
		int32_t L_6 = V_1;
		NullCheck(L_5);
		KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6  L_7 = InterfaceFuncInvoker1< KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6 , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Item(System.Int32) */, IList_1_t41271F7E51BBBC786ED1C5244F6B360832F63686_il2cpp_TypeInfo_var, L_5, L_6);
		V_2 = L_7;
		String_t* L_8 = KeyValuePair_2_get_Key_m89898A30A7D4B8881455AC234192D96131897B82((KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m89898A30A7D4B8881455AC234192D96131897B82_RuntimeMethod_var);
		String_t* L_9 = ___prop_name0;
		bool L_10 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_004d;
		}
	}
	{
		RuntimeObject* L_11 = __this->get_object_list_9();
		int32_t L_12 = V_1;
		KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6  L_13 = V_0;
		NullCheck(L_11);
		InterfaceActionInvoker2< int32_t, KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::set_Item(System.Int32,!0) */, IList_1_t41271F7E51BBBC786ED1C5244F6B360832F63686_il2cpp_TypeInfo_var, L_11, L_12, L_13);
		goto IL_006d;
	}

IL_004d:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0051:
	{
		int32_t L_15 = V_1;
		RuntimeObject* L_16 = __this->get_object_list_9();
		NullCheck(L_16);
		int32_t L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Count() */, ICollection_1_t0ABCC4037610B41090A09239840AEEA3CD4EDA68_il2cpp_TypeInfo_var, L_16);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0022;
		}
	}
	{
		goto IL_006d;
	}

IL_0061:
	{
		RuntimeObject* L_18 = __this->get_object_list_9();
		KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6  L_19 = V_0;
		NullCheck(L_18);
		InterfaceActionInvoker1< KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::Add(!0) */, ICollection_1_t0ABCC4037610B41090A09239840AEEA3CD4EDA68_il2cpp_TypeInfo_var, L_18, L_19);
	}

IL_006d:
	{
		RuntimeObject* L_20 = __this->get_inst_object_5();
		String_t* L_21 = ___prop_name0;
		JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * L_22 = ___value1;
		NullCheck(L_20);
		InterfaceActionInvoker2< String_t*, JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::set_Item(!0,!1) */, IDictionary_2_t696CC22FEC09091FA09796F4CBF79A43903F159D_il2cpp_TypeInfo_var, L_20, L_21, L_22);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::set_Item(System.Int32,LitJson.JsonData)
extern "C" IL2CPP_METHOD_ATTR void JsonData_set_Item_m23565FE238DAC8A0EEFB05E760CCD703870EE84C (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, int32_t ___index0, JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonData_set_Item_m23565FE238DAC8A0EEFB05E760CCD703870EE84C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6  V_0;
	memset(&V_0, 0, sizeof(V_0));
	KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		JsonData_EnsureCollection_mD804E53722BBFA8341BC023F05B206051AAD7C70(__this, /*hidden argument*/NULL);
		int32_t L_0 = __this->get_type_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_inst_array_0();
		int32_t L_2 = ___index0;
		JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * L_3 = ___value1;
		NullCheck(L_1);
		InterfaceActionInvoker2< int32_t, JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<LitJson.JsonData>::set_Item(System.Int32,!0) */, IList_1_t00E3D823A2DB87B040C4B5EC90A07739AB8B52B5_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		goto IL_005b;
	}

IL_001f:
	{
		RuntimeObject* L_4 = __this->get_object_list_9();
		int32_t L_5 = ___index0;
		NullCheck(L_4);
		KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6  L_6 = InterfaceFuncInvoker1< KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6 , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Item(System.Int32) */, IList_1_t41271F7E51BBBC786ED1C5244F6B360832F63686_il2cpp_TypeInfo_var, L_4, L_5);
		V_0 = L_6;
		String_t* L_7 = KeyValuePair_2_get_Key_m89898A30A7D4B8881455AC234192D96131897B82((KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m89898A30A7D4B8881455AC234192D96131897B82_RuntimeMethod_var);
		JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * L_8 = ___value1;
		KeyValuePair_2__ctor_mE1ADFA880378D99D9E7709B8013B5859B1B8ECFF((KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6 *)(&V_1), L_7, L_8, /*hidden argument*/KeyValuePair_2__ctor_mE1ADFA880378D99D9E7709B8013B5859B1B8ECFF_RuntimeMethod_var);
		RuntimeObject* L_9 = __this->get_object_list_9();
		int32_t L_10 = ___index0;
		KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6  L_11 = V_1;
		NullCheck(L_9);
		InterfaceActionInvoker2< int32_t, KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::set_Item(System.Int32,!0) */, IList_1_t41271F7E51BBBC786ED1C5244F6B360832F63686_il2cpp_TypeInfo_var, L_9, L_10, L_11);
		RuntimeObject* L_12 = __this->get_inst_object_5();
		String_t* L_13 = KeyValuePair_2_get_Key_m89898A30A7D4B8881455AC234192D96131897B82((KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m89898A30A7D4B8881455AC234192D96131897B82_RuntimeMethod_var);
		JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * L_14 = ___value1;
		NullCheck(L_12);
		InterfaceActionInvoker2< String_t*, JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::set_Item(!0,!1) */, IDictionary_2_t696CC22FEC09091FA09796F4CBF79A43903F159D_il2cpp_TypeInfo_var, L_12, L_13, L_14);
	}

IL_005b:
	{
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::.ctor()
extern "C" IL2CPP_METHOD_ATTR void JsonData__ctor_mFE9562FD93C205F1D65E03E4ED4C48F9AE63FBCE (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonData::.ctor(System.Object)
extern "C" IL2CPP_METHOD_ATTR void JsonData__ctor_mFF9DBE2AD4312F9A7003B8DAD0483046DE093F98 (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonData__ctor_mFF9DBE2AD4312F9A7003B8DAD0483046DE093F98_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_type_8(7);
		RuntimeObject * L_1 = ___obj0;
		__this->set_inst_boolean_1(((*(bool*)((bool*)UnBox(L_1, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))));
		return;
	}

IL_0022:
	{
		RuntimeObject * L_2 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_2, Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var)))
		{
			goto IL_003e;
		}
	}
	{
		__this->set_type_8(6);
		RuntimeObject * L_3 = ___obj0;
		__this->set_inst_double_2(((*(double*)((double*)UnBox(L_3, Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var)))));
		return;
	}

IL_003e:
	{
		RuntimeObject * L_4 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_4, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		__this->set_type_8(4);
		RuntimeObject * L_5 = ___obj0;
		__this->set_inst_int_3(((*(int32_t*)((int32_t*)UnBox(L_5, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))));
		return;
	}

IL_005a:
	{
		RuntimeObject * L_6 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var)))
		{
			goto IL_0076;
		}
	}
	{
		__this->set_type_8(5);
		RuntimeObject * L_7 = ___obj0;
		__this->set_inst_long_4(((*(int64_t*)((int64_t*)UnBox(L_7, Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var)))));
		return;
	}

IL_0076:
	{
		RuntimeObject * L_8 = ___obj0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0092;
		}
	}
	{
		__this->set_type_8(3);
		RuntimeObject * L_9 = ___obj0;
		__this->set_inst_string_6(((String_t*)CastclassSealed((RuntimeObject*)L_9, String_t_il2cpp_TypeInfo_var)));
		return;
	}

IL_0092:
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_10 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_10, _stringLiteralA09499EF3B1E06CA0CC49A282D577D204893C6DE, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, JsonData__ctor_mFF9DBE2AD4312F9A7003B8DAD0483046DE093F98_RuntimeMethod_var);
	}
}
// System.Int32 LitJson.JsonData::op_Explicit(LitJson.JsonData)
extern "C" IL2CPP_METHOD_ATTR int32_t JsonData_op_Explicit_mD4CA13309DA7648559B0810430FDA4168A7BEF12 (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonData_op_Explicit_mD4CA13309DA7648559B0810430FDA4168A7BEF12_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * L_0 = ___data0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_type_8();
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_0014;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_2 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_2, _stringLiteral8EF261795ED932D32AD2862F57EC40AD326B4747, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, JsonData_op_Explicit_mD4CA13309DA7648559B0810430FDA4168A7BEF12_RuntimeMethod_var);
	}

IL_0014:
	{
		JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * L_3 = ___data0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_inst_int_3();
		return L_4;
	}
}
// System.Void LitJson.JsonData::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void JsonData_System_Collections_ICollection_CopyTo_mD25E2C532B6B9512828F167DB05AAB04342E4A1E (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonData_System_Collections_ICollection_CopyTo_mD25E2C532B6B9512828F167DB05AAB04342E4A1E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = JsonData_EnsureCollection_mD804E53722BBFA8341BC023F05B206051AAD7C70(__this, /*hidden argument*/NULL);
		RuntimeArray * L_1 = ___array0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		InterfaceActionInvoker2< RuntimeArray *, int32_t >::Invoke(0 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Collections.IDictionaryEnumerator LitJson.JsonData::System.Collections.IDictionary.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* JsonData_System_Collections_IDictionary_GetEnumerator_mB0DB1DA813EFFA3876E5E6C36C3EC27DC6802470 (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonData_System_Collections_IDictionary_GetEnumerator_mB0DB1DA813EFFA3876E5E6C36C3EC27DC6802470_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IDictionaryEnumerator System.Collections.Specialized.IOrderedDictionary::GetEnumerator() */, IOrderedDictionary_tAA6A303A3ECC8C467260A7DBFF7E49528E97C777_il2cpp_TypeInfo_var, __this);
		return L_0;
	}
}
// System.Collections.IEnumerator LitJson.JsonData::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* JsonData_System_Collections_IEnumerable_GetEnumerator_m897160B2EC5212EB320E15DCE73C1B756A539EA5 (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonData_System_Collections_IEnumerable_GetEnumerator_m897160B2EC5212EB320E15DCE73C1B756A539EA5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = JsonData_EnsureCollection_mD804E53722BBFA8341BC023F05B206051AAD7C70(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetBoolean(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void JsonData_LitJson_IJsonWrapper_SetBoolean_mAC8421466D5B511130339E04E3E3654A330BAEE4 (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, bool ___val0, const RuntimeMethod* method)
{
	{
		__this->set_type_8(7);
		bool L_0 = ___val0;
		__this->set_inst_boolean_1(L_0);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetDouble(System.Double)
extern "C" IL2CPP_METHOD_ATTR void JsonData_LitJson_IJsonWrapper_SetDouble_m5AB543ED12B8E0E17A336B6B3FA1D7E7907E625A (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, double ___val0, const RuntimeMethod* method)
{
	{
		__this->set_type_8(6);
		double L_0 = ___val0;
		__this->set_inst_double_2(L_0);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetInt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void JsonData_LitJson_IJsonWrapper_SetInt_m48D59463A52FF2365C8755016AD872FBDB02CA3A (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, int32_t ___val0, const RuntimeMethod* method)
{
	{
		__this->set_type_8(4);
		int32_t L_0 = ___val0;
		__this->set_inst_int_3(L_0);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetLong(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void JsonData_LitJson_IJsonWrapper_SetLong_m4C43668514EFEA349EA637685CCDAEF7A4C5E686 (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, int64_t ___val0, const RuntimeMethod* method)
{
	{
		__this->set_type_8(5);
		int64_t L_0 = ___val0;
		__this->set_inst_long_4(L_0);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetString(System.String)
extern "C" IL2CPP_METHOD_ATTR void JsonData_LitJson_IJsonWrapper_SetString_m2D1A59882A6F56E3297ED87D381EE0793578B580 (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, String_t* ___val0, const RuntimeMethod* method)
{
	{
		__this->set_type_8(3);
		String_t* L_0 = ___val0;
		__this->set_inst_string_6(L_0);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Int32 LitJson.JsonData::System.Collections.IList.Add(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t JsonData_System_Collections_IList_Add_mEAEA01AD825243966EF99F01486172036AD0DB40 (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		int32_t L_1 = JsonData_Add_m4B602C73CA492BB9C52AA01FAB300D248973A661(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.Clear()
extern "C" IL2CPP_METHOD_ATTR void JsonData_System_Collections_IList_Clear_mD8C55FC5E7639710E00A20948E800789F2B48D20 (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonData_System_Collections_IList_Clear_mD8C55FC5E7639710E00A20948E800789F2B48D20_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = JsonData_EnsureList_mEFDDDC6D93F8783B4812C6560FAE3C0004E747AF(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void System.Collections.IList::Clear() */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, L_0);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.IList.Contains(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool JsonData_System_Collections_IList_Contains_mFF015469A51049F98193AD944E7660884BC34C77 (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonData_System_Collections_IList_Contains_mFF015469A51049F98193AD944E7660884BC34C77_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = JsonData_EnsureList_mEFDDDC6D93F8783B4812C6560FAE3C0004E747AF(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(3 /* System.Boolean System.Collections.IList::Contains(System.Object) */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 LitJson.JsonData::System.Collections.IList.IndexOf(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t JsonData_System_Collections_IList_IndexOf_mF61E264FC3380AC3E720E790FC7B3D0FE2A5B29F (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonData_System_Collections_IList_IndexOf_mF61E264FC3380AC3E720E790FC7B3D0FE2A5B29F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = JsonData_EnsureList_mEFDDDC6D93F8783B4812C6560FAE3C0004E747AF(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(7 /* System.Int32 System.Collections.IList::IndexOf(System.Object) */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR void JsonData_System_Collections_IList_Insert_mB3DA3ADB912D582FC862A0D06D5D99B00F1847E1 (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonData_System_Collections_IList_Insert_mB3DA3ADB912D582FC862A0D06D5D99B00F1847E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = JsonData_EnsureList_mEFDDDC6D93F8783B4812C6560FAE3C0004E747AF(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___index0;
		RuntimeObject * L_2 = ___value1;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, RuntimeObject * >::Invoke(8 /* System.Void System.Collections.IList::Insert(System.Int32,System.Object) */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.Remove(System.Object)
extern "C" IL2CPP_METHOD_ATTR void JsonData_System_Collections_IList_Remove_mDA1C6B91B589217F326A129A9F1286509DB63434 (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonData_System_Collections_IList_Remove_mDA1C6B91B589217F326A129A9F1286509DB63434_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = JsonData_EnsureList_mEFDDDC6D93F8783B4812C6560FAE3C0004E747AF(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(9 /* System.Void System.Collections.IList::Remove(System.Object) */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, L_0, L_1);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void JsonData_System_Collections_IList_RemoveAt_m34190449BFA19288F089F664E4AE3751E4619374 (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonData_System_Collections_IList_RemoveAt_m34190449BFA19288F089F664E4AE3751E4619374_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = JsonData_EnsureList_mEFDDDC6D93F8783B4812C6560FAE3C0004E747AF(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(10 /* System.Void System.Collections.IList::RemoveAt(System.Int32) */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, L_0, L_1);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Collections.IDictionaryEnumerator LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* JsonData_System_Collections_Specialized_IOrderedDictionary_GetEnumerator_m1D6790D0EECE700567B52910A5ED2C4829F14B49 (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonData_System_Collections_Specialized_IOrderedDictionary_GetEnumerator_m1D6790D0EECE700567B52910A5ED2C4829F14B49_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonData_EnsureDictionary_mAE6098C5C9BC75ED04C8813D0F890CFF5700473C(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = __this->get_object_list_9();
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::GetEnumerator() */, IEnumerable_1_t3A03D286207CB778D97A00BE0AB5A749016351AB_il2cpp_TypeInfo_var, L_0);
		OrderedDictionaryEnumerator_tFDD06F58C7165948CC4ED07A4F1915F314DA9582 * L_2 = (OrderedDictionaryEnumerator_tFDD06F58C7165948CC4ED07A4F1915F314DA9582 *)il2cpp_codegen_object_new(OrderedDictionaryEnumerator_tFDD06F58C7165948CC4ED07A4F1915F314DA9582_il2cpp_TypeInfo_var);
		OrderedDictionaryEnumerator__ctor_mCFF0E48275FDBBF3F61369F9A26E6F60E43DC273(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Collections.ICollection LitJson.JsonData::EnsureCollection()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureCollection_mD804E53722BBFA8341BC023F05B206051AAD7C70 (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonData_EnsureCollection_mD804E53722BBFA8341BC023F05B206051AAD7C70_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_type_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_inst_array_0();
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_1, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var));
	}

IL_0015:
	{
		int32_t L_2 = __this->get_type_8();
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_3 = __this->get_inst_object_5();
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_3, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var));
	}

IL_002a:
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_4 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_4, _stringLiteralD857A9FED8F72C7B1257029D38ED06301B2F3E6C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, JsonData_EnsureCollection_mD804E53722BBFA8341BC023F05B206051AAD7C70_RuntimeMethod_var);
	}
}
// System.Collections.IDictionary LitJson.JsonData::EnsureDictionary()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureDictionary_mAE6098C5C9BC75ED04C8813D0F890CFF5700473C (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonData_EnsureDictionary_mAE6098C5C9BC75ED04C8813D0F890CFF5700473C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_type_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_inst_object_5();
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var));
	}

IL_0015:
	{
		int32_t L_2 = __this->get_type_8();
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_3 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_3, _stringLiteral21555019304FEAF73BBB046DF5C6EE3034C88D7E, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, JsonData_EnsureDictionary_mAE6098C5C9BC75ED04C8813D0F890CFF5700473C_RuntimeMethod_var);
	}

IL_0028:
	{
		__this->set_type_8(1);
		Dictionary_2_tAAD76381AA8A9C2DAA7F822E65E65360336B92CB * L_4 = (Dictionary_2_tAAD76381AA8A9C2DAA7F822E65E65360336B92CB *)il2cpp_codegen_object_new(Dictionary_2_tAAD76381AA8A9C2DAA7F822E65E65360336B92CB_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1BFA0F2F4A7B0BB53A8CD323D8D300A3A658E247(L_4, /*hidden argument*/Dictionary_2__ctor_m1BFA0F2F4A7B0BB53A8CD323D8D300A3A658E247_RuntimeMethod_var);
		__this->set_inst_object_5(L_4);
		List_1_tAD8AAFA778AEF0545ADDFC9DB7AD3BB15D7CB284 * L_5 = (List_1_tAD8AAFA778AEF0545ADDFC9DB7AD3BB15D7CB284 *)il2cpp_codegen_object_new(List_1_tAD8AAFA778AEF0545ADDFC9DB7AD3BB15D7CB284_il2cpp_TypeInfo_var);
		List_1__ctor_mE1E2D8C90B1CA430C81A06B25BAF4B9A3F47083C(L_5, /*hidden argument*/List_1__ctor_mE1E2D8C90B1CA430C81A06B25BAF4B9A3F47083C_RuntimeMethod_var);
		__this->set_object_list_9(L_5);
		RuntimeObject* L_6 = __this->get_inst_object_5();
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_6, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var));
	}
}
// System.Collections.IList LitJson.JsonData::EnsureList()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureList_mEFDDDC6D93F8783B4812C6560FAE3C0004E747AF (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonData_EnsureList_mEFDDDC6D93F8783B4812C6560FAE3C0004E747AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_type_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_inst_array_0();
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var));
	}

IL_0015:
	{
		int32_t L_2 = __this->get_type_8();
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_3 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_3, _stringLiteralF0DF9A7A4980E26A056F48AB03BDB0436AD2465F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, JsonData_EnsureList_mEFDDDC6D93F8783B4812C6560FAE3C0004E747AF_RuntimeMethod_var);
	}

IL_0028:
	{
		__this->set_type_8(2);
		List_1_tAC22C8BB212278977BEF79BF725D95125D45C668 * L_4 = (List_1_tAC22C8BB212278977BEF79BF725D95125D45C668 *)il2cpp_codegen_object_new(List_1_tAC22C8BB212278977BEF79BF725D95125D45C668_il2cpp_TypeInfo_var);
		List_1__ctor_m3B5AF066A236DC25B784E86DDE29F0805902659B(L_4, /*hidden argument*/List_1__ctor_m3B5AF066A236DC25B784E86DDE29F0805902659B_RuntimeMethod_var);
		__this->set_inst_array_0(L_4);
		RuntimeObject* L_5 = __this->get_inst_array_0();
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_5, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var));
	}
}
// LitJson.JsonData LitJson.JsonData::ToJsonData(System.Object)
extern "C" IL2CPP_METHOD_ATTR JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * JsonData_ToJsonData_m8A63D23C6ABE990402EACDCE57D1D6BFD8DA339F (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonData_ToJsonData_m8A63D23C6ABE990402EACDCE57D1D6BFD8DA339F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B *)NULL;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___obj0;
		if (!((JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B *)IsInstClass((RuntimeObject*)L_1, JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B_il2cpp_TypeInfo_var)))
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_2 = ___obj0;
		return ((JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B *)CastclassClass((RuntimeObject*)L_2, JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B_il2cpp_TypeInfo_var));
	}

IL_0014:
	{
		RuntimeObject * L_3 = ___obj0;
		JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * L_4 = (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B *)il2cpp_codegen_object_new(JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B_il2cpp_TypeInfo_var);
		JsonData__ctor_mFF9DBE2AD4312F9A7003B8DAD0483046DE093F98(L_4, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 LitJson.JsonData::Add(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t JsonData_Add_m4B602C73CA492BB9C52AA01FAB300D248973A661 (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonData_Add_m4B602C73CA492BB9C52AA01FAB300D248973A661_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___value0;
		JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * L_1 = JsonData_ToJsonData_m8A63D23C6ABE990402EACDCE57D1D6BFD8DA339F(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		__this->set_json_7((String_t*)NULL);
		RuntimeObject* L_2 = JsonData_EnsureList_mEFDDDC6D93F8783B4812C6560FAE3C0004E747AF(__this, /*hidden argument*/NULL);
		JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, L_2, L_3);
		return L_4;
	}
}
// System.Boolean LitJson.JsonData::Equals(LitJson.JsonData)
extern "C" IL2CPP_METHOD_ATTR bool JsonData_Equals_mBFF5E6A859A320BFB08FB9D8E66D442549837887 (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * ___x0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * L_0 = ___x0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * L_1 = ___x0;
		NullCheck(L_1);
		int32_t L_2 = L_1->get_type_8();
		int32_t L_3 = __this->get_type_8();
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}

IL_0015:
	{
		int32_t L_4 = __this->get_type_8();
		V_0 = L_4;
		int32_t L_5 = V_0;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0047;
			}
			case 1:
			{
				goto IL_0049;
			}
			case 2:
			{
				goto IL_005b;
			}
			case 3:
			{
				goto IL_006d;
			}
			case 4:
			{
				goto IL_007f;
			}
			case 5:
			{
				goto IL_0091;
			}
			case 6:
			{
				goto IL_00a3;
			}
			case 7:
			{
				goto IL_00b5;
			}
		}
	}
	{
		goto IL_00c7;
	}

IL_0047:
	{
		return (bool)1;
	}

IL_0049:
	{
		RuntimeObject* L_6 = __this->get_inst_object_5();
		JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * L_7 = ___x0;
		NullCheck(L_7);
		RuntimeObject* L_8 = L_7->get_inst_object_5();
		NullCheck(L_6);
		bool L_9 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_6, L_8);
		return L_9;
	}

IL_005b:
	{
		RuntimeObject* L_10 = __this->get_inst_array_0();
		JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * L_11 = ___x0;
		NullCheck(L_11);
		RuntimeObject* L_12 = L_11->get_inst_array_0();
		NullCheck(L_10);
		bool L_13 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_10, L_12);
		return L_13;
	}

IL_006d:
	{
		String_t* L_14 = __this->get_inst_string_6();
		JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * L_15 = ___x0;
		NullCheck(L_15);
		String_t* L_16 = L_15->get_inst_string_6();
		NullCheck(L_14);
		bool L_17 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_14, L_16, /*hidden argument*/NULL);
		return L_17;
	}

IL_007f:
	{
		int32_t* L_18 = __this->get_address_of_inst_int_3();
		JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * L_19 = ___x0;
		NullCheck(L_19);
		int32_t L_20 = L_19->get_inst_int_3();
		bool L_21 = Int32_Equals_mC8C45B8899F291D55A6152C8FEDB3CFFF181170B((int32_t*)L_18, L_20, /*hidden argument*/NULL);
		return L_21;
	}

IL_0091:
	{
		int64_t* L_22 = __this->get_address_of_inst_long_4();
		JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * L_23 = ___x0;
		NullCheck(L_23);
		int64_t L_24 = L_23->get_inst_long_4();
		bool L_25 = Int64_Equals_mB589D15F558BF8FECBB56EF429EFF5C7A39D9E0F((int64_t*)L_22, L_24, /*hidden argument*/NULL);
		return L_25;
	}

IL_00a3:
	{
		double* L_26 = __this->get_address_of_inst_double_2();
		JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * L_27 = ___x0;
		NullCheck(L_27);
		double L_28 = L_27->get_inst_double_2();
		bool L_29 = Double_Equals_m07123CFF3B06183E095BF281110526F9B8953472((double*)L_26, L_28, /*hidden argument*/NULL);
		return L_29;
	}

IL_00b5:
	{
		bool* L_30 = __this->get_address_of_inst_boolean_1();
		JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * L_31 = ___x0;
		NullCheck(L_31);
		bool L_32 = L_31->get_inst_boolean_1();
		bool L_33 = Boolean_Equals_mD6223639457331BC16211ED4772C5927668DC060((bool*)L_30, L_32, /*hidden argument*/NULL);
		return L_33;
	}

IL_00c7:
	{
		return (bool)0;
	}
}
// System.Void LitJson.JsonData::SetJsonType(LitJson.JsonType)
extern "C" IL2CPP_METHOD_ATTR void JsonData_SetJsonType_m39EC83CDE3C77D62694BE46ECDC28005CEE96BA2 (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, int32_t ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonData_SetJsonType_m39EC83CDE3C77D62694BE46ECDC28005CEE96BA2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_type_8();
		int32_t L_1 = ___type0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		int32_t L_2 = ___type0;
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_008d;
			}
			case 1:
			{
				goto IL_0034;
			}
			case 2:
			{
				goto IL_004c;
			}
			case 3:
			{
				goto IL_0059;
			}
			case 4:
			{
				goto IL_0062;
			}
			case 5:
			{
				goto IL_006b;
			}
			case 6:
			{
				goto IL_0075;
			}
			case 7:
			{
				goto IL_0086;
			}
		}
	}
	{
		goto IL_008d;
	}

IL_0034:
	{
		Dictionary_2_tAAD76381AA8A9C2DAA7F822E65E65360336B92CB * L_4 = (Dictionary_2_tAAD76381AA8A9C2DAA7F822E65E65360336B92CB *)il2cpp_codegen_object_new(Dictionary_2_tAAD76381AA8A9C2DAA7F822E65E65360336B92CB_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1BFA0F2F4A7B0BB53A8CD323D8D300A3A658E247(L_4, /*hidden argument*/Dictionary_2__ctor_m1BFA0F2F4A7B0BB53A8CD323D8D300A3A658E247_RuntimeMethod_var);
		__this->set_inst_object_5(L_4);
		List_1_tAD8AAFA778AEF0545ADDFC9DB7AD3BB15D7CB284 * L_5 = (List_1_tAD8AAFA778AEF0545ADDFC9DB7AD3BB15D7CB284 *)il2cpp_codegen_object_new(List_1_tAD8AAFA778AEF0545ADDFC9DB7AD3BB15D7CB284_il2cpp_TypeInfo_var);
		List_1__ctor_mE1E2D8C90B1CA430C81A06B25BAF4B9A3F47083C(L_5, /*hidden argument*/List_1__ctor_mE1E2D8C90B1CA430C81A06B25BAF4B9A3F47083C_RuntimeMethod_var);
		__this->set_object_list_9(L_5);
		goto IL_008d;
	}

IL_004c:
	{
		List_1_tAC22C8BB212278977BEF79BF725D95125D45C668 * L_6 = (List_1_tAC22C8BB212278977BEF79BF725D95125D45C668 *)il2cpp_codegen_object_new(List_1_tAC22C8BB212278977BEF79BF725D95125D45C668_il2cpp_TypeInfo_var);
		List_1__ctor_m3B5AF066A236DC25B784E86DDE29F0805902659B(L_6, /*hidden argument*/List_1__ctor_m3B5AF066A236DC25B784E86DDE29F0805902659B_RuntimeMethod_var);
		__this->set_inst_array_0(L_6);
		goto IL_008d;
	}

IL_0059:
	{
		__this->set_inst_string_6((String_t*)NULL);
		goto IL_008d;
	}

IL_0062:
	{
		__this->set_inst_int_3(0);
		goto IL_008d;
	}

IL_006b:
	{
		__this->set_inst_long_4((((int64_t)((int64_t)0))));
		goto IL_008d;
	}

IL_0075:
	{
		__this->set_inst_double_2((0.0));
		goto IL_008d;
	}

IL_0086:
	{
		__this->set_inst_boolean_1((bool)0);
	}

IL_008d:
	{
		int32_t L_7 = ___type0;
		__this->set_type_8(L_7);
		return;
	}
}
// System.String LitJson.JsonData::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* JsonData_ToString_mE67C62231A098B5D704EDB6347E138429CD81999 (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonData_ToString_mE67C62231A098B5D704EDB6347E138429CD81999_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_type_8();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0063;
			}
			case 1:
			{
				goto IL_002d;
			}
			case 2:
			{
				goto IL_0069;
			}
			case 3:
			{
				goto IL_004b;
			}
			case 4:
			{
				goto IL_0057;
			}
			case 5:
			{
				goto IL_003f;
			}
			case 6:
			{
				goto IL_0033;
			}
		}
	}
	{
		goto IL_0070;
	}

IL_002d:
	{
		return _stringLiteral395793C4273A1703D37B43837B2F6154048097F0;
	}

IL_0033:
	{
		bool* L_2 = __this->get_address_of_inst_boolean_1();
		String_t* L_3 = Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301((bool*)L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_003f:
	{
		double* L_4 = __this->get_address_of_inst_double_2();
		String_t* L_5 = Double_ToString_mEB58879AE04C90A89E1475909F82BF4F8540D8CF((double*)L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_004b:
	{
		int32_t* L_6 = __this->get_address_of_inst_int_3();
		String_t* L_7 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0057:
	{
		int64_t* L_8 = __this->get_address_of_inst_long_4();
		String_t* L_9 = Int64_ToString_m8210E39355A227AE15DD391EB810AA9B6AB8B26C((int64_t*)L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0063:
	{
		return _stringLiteralBB549FF6C0350A6F4FC516379FDD4EA17FD6F723;
	}

IL_0069:
	{
		String_t* L_10 = __this->get_inst_string_6();
		return L_10;
	}

IL_0070:
	{
		return _stringLiteral093F25E6B71A9565E65A08580CDAE7A62B4A2773;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.JsonException::.ctor(LitJson.ParserToken,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void JsonException__ctor_m4BE1272AC624246C1CFC342E7531C58939538348 (JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886 * __this, int32_t ___token0, Exception_t * ___inner_exception1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonException__ctor_m4BE1272AC624246C1CFC342E7531C58939538348_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___token0;
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(ParserToken_t3D5AA106CF392F924BA7184F81EC25A985A6208F_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralF350BB5356B7F3B068F47C6C3D679E77653586B5, L_2, /*hidden argument*/NULL);
		Exception_t * L_4 = ___inner_exception1;
		ApplicationException__ctor_m0AF8988654AD1CA2DCA8EC12E6D46563E4EE703F(__this, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonException::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void JsonException__ctor_m24DEDB1205900D0FF39D8254D5E87545C5983892 (JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886 * __this, int32_t ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonException__ctor_m24DEDB1205900D0FF39D8254D5E87545C5983892_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___c0;
		Il2CppChar L_1 = ((Il2CppChar)(((int32_t)((uint16_t)L_0))));
		RuntimeObject * L_2 = Box(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral0BF09CD84D74BA36B0ED23170FB17D4EB584ACEA, L_2, /*hidden argument*/NULL);
		ApplicationException__ctor_mDC26CE8ECD0DDA5C8FA50C8E8B2614F3B50FC308(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void JsonException__ctor_m620CE615FE1C32AE4A93550F0040CB2CDA99F9D5 (JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		ApplicationException__ctor_mDC26CE8ECD0DDA5C8FA50C8E8B2614F3B50FC308(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.JsonMapper::.cctor()
extern "C" IL2CPP_METHOD_ATTR void JsonMapper__cctor_m2E1147ABA5D56A726EB27E86CB19ED2F3D7632EF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper__cctor_m2E1147ABA5D56A726EB27E86CB19ED2F3D7632EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_0, /*hidden argument*/NULL);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_array_metadata_lock_7(L_0);
		RuntimeObject * L_1 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_1, /*hidden argument*/NULL);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_conv_ops_lock_9(L_1);
		RuntimeObject * L_2 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_2, /*hidden argument*/NULL);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_object_metadata_lock_11(L_2);
		RuntimeObject * L_3 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_3, /*hidden argument*/NULL);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_type_properties_lock_13(L_3);
		RuntimeObject * L_4 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_4, /*hidden argument*/NULL);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_static_writer_lock_15(L_4);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_max_nesting_depth_0(((int32_t)100));
		Dictionary_2_tFA2B52DD1261DEC7A22FBF5CE7F9C8D05AFCBD2E * L_5 = (Dictionary_2_tFA2B52DD1261DEC7A22FBF5CE7F9C8D05AFCBD2E *)il2cpp_codegen_object_new(Dictionary_2_tFA2B52DD1261DEC7A22FBF5CE7F9C8D05AFCBD2E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mEF64C6B3B952102C6F1AE0E31336E593E6EC0AC2(L_5, /*hidden argument*/Dictionary_2__ctor_mEF64C6B3B952102C6F1AE0E31336E593E6EC0AC2_RuntimeMethod_var);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_array_metadata_6(L_5);
		Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5 * L_6 = (Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5 *)il2cpp_codegen_object_new(Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD35E372BD8C570253C47B0659C5F69B2D24A091A(L_6, /*hidden argument*/Dictionary_2__ctor_mD35E372BD8C570253C47B0659C5F69B2D24A091A_RuntimeMethod_var);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_conv_ops_8(L_6);
		Dictionary_2_t9A46E2E31B1630C81E3DD6A97FA8738B0434B0CE * L_7 = (Dictionary_2_t9A46E2E31B1630C81E3DD6A97FA8738B0434B0CE *)il2cpp_codegen_object_new(Dictionary_2_t9A46E2E31B1630C81E3DD6A97FA8738B0434B0CE_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2BEF9F19E617ED9A01F5890520BB462869875FAC(L_7, /*hidden argument*/Dictionary_2__ctor_m2BEF9F19E617ED9A01F5890520BB462869875FAC_RuntimeMethod_var);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_object_metadata_10(L_7);
		Dictionary_2_t34BE080DAD42913E622AD0FE20BD6A379003BE04 * L_8 = (Dictionary_2_t34BE080DAD42913E622AD0FE20BD6A379003BE04 *)il2cpp_codegen_object_new(Dictionary_2_t34BE080DAD42913E622AD0FE20BD6A379003BE04_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mEA761C6464756C78904B515337A77F7D9C3021A1(L_8, /*hidden argument*/Dictionary_2__ctor_mEA761C6464756C78904B515337A77F7D9C3021A1_RuntimeMethod_var);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_type_properties_12(L_8);
		JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * L_9 = (JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 *)il2cpp_codegen_object_new(JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0_il2cpp_TypeInfo_var);
		JsonWriter__ctor_m51E07A529AF622FE781FD3E1FFA3B11A1CA8A138(L_9, /*hidden argument*/NULL);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_static_writer_14(L_9);
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F_il2cpp_TypeInfo_var);
		DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * L_10 = DateTimeFormatInfo_get_InvariantInfo_mF4896D7991425B6C5391BB86C11091A8B715CCDC(/*hidden argument*/NULL);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_datetime_format_1(L_10);
		Dictionary_2_t14B09BA64A95342370FBBE383B5B76B0689EF397 * L_11 = (Dictionary_2_t14B09BA64A95342370FBBE383B5B76B0689EF397 *)il2cpp_codegen_object_new(Dictionary_2_t14B09BA64A95342370FBBE383B5B76B0689EF397_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD256629EDFD969BDC80230EC785BC44498D2CE72(L_11, /*hidden argument*/Dictionary_2__ctor_mD256629EDFD969BDC80230EC785BC44498D2CE72_RuntimeMethod_var);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_base_exporters_table_2(L_11);
		Dictionary_2_t14B09BA64A95342370FBBE383B5B76B0689EF397 * L_12 = (Dictionary_2_t14B09BA64A95342370FBBE383B5B76B0689EF397 *)il2cpp_codegen_object_new(Dictionary_2_t14B09BA64A95342370FBBE383B5B76B0689EF397_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD256629EDFD969BDC80230EC785BC44498D2CE72(L_12, /*hidden argument*/Dictionary_2__ctor_mD256629EDFD969BDC80230EC785BC44498D2CE72_RuntimeMethod_var);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_custom_exporters_table_3(L_12);
		Dictionary_2_tD521C872BCC3C52150F3E3444D0A966E731D0646 * L_13 = (Dictionary_2_tD521C872BCC3C52150F3E3444D0A966E731D0646 *)il2cpp_codegen_object_new(Dictionary_2_tD521C872BCC3C52150F3E3444D0A966E731D0646_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mE47B13857C9D0090F3B56B7E892BC814F404DA7B(L_13, /*hidden argument*/Dictionary_2__ctor_mE47B13857C9D0090F3B56B7E892BC814F404DA7B_RuntimeMethod_var);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_base_importers_table_4(L_13);
		Dictionary_2_tD521C872BCC3C52150F3E3444D0A966E731D0646 * L_14 = (Dictionary_2_tD521C872BCC3C52150F3E3444D0A966E731D0646 *)il2cpp_codegen_object_new(Dictionary_2_tD521C872BCC3C52150F3E3444D0A966E731D0646_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mE47B13857C9D0090F3B56B7E892BC814F404DA7B(L_14, /*hidden argument*/Dictionary_2__ctor_mE47B13857C9D0090F3B56B7E892BC814F404DA7B_RuntimeMethod_var);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_custom_importers_table_5(L_14);
		JsonMapper_RegisterBaseExporters_mA5AC4C24722E5CA1E3CA970DB48527B882415FE7(/*hidden argument*/NULL);
		JsonMapper_RegisterBaseImporters_m85C8F641A628BBC947809E7C82707539DA6B53E6(/*hidden argument*/NULL);
		return;
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper::ReadValue(LitJson.WrapperFactory,LitJson.JsonReader)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ReadValue_mEDBEF58FAFC351DB9B296EBE14EB71778A31C6A1 (WrapperFactory_tD6F47E2E7EA3DDD74006601D884BD3D45744A27B * ___factory0, JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * ___reader1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_ReadValue_mEDBEF58FAFC351DB9B296EBE14EB71778A31C6A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * L_0 = ___reader1;
		NullCheck(L_0);
		JsonReader_Read_m2482C1BFE3E418D79BBBAF792E8F69857D02F5FD(L_0, /*hidden argument*/NULL);
		JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * L_1 = ___reader1;
		NullCheck(L_1);
		int32_t L_2 = JsonReader_get_Token_m42F16914150E177E6DA507D2A62A576BD542FB84(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)5)))
		{
			goto IL_001a;
		}
	}
	{
		JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * L_3 = ___reader1;
		NullCheck(L_3);
		int32_t L_4 = JsonReader_get_Token_m42F16914150E177E6DA507D2A62A576BD542FB84(L_3, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_001c;
		}
	}

IL_001a:
	{
		return (RuntimeObject*)NULL;
	}

IL_001c:
	{
		WrapperFactory_tD6F47E2E7EA3DDD74006601D884BD3D45744A27B * L_5 = ___factory0;
		NullCheck(L_5);
		RuntimeObject* L_6 = WrapperFactory_Invoke_m3C0A7BEE570A00F10787BB093B8B3B671DE55210(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * L_7 = ___reader1;
		NullCheck(L_7);
		int32_t L_8 = JsonReader_get_Token_m42F16914150E177E6DA507D2A62A576BD542FB84(L_7, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject* L_9 = V_0;
		JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * L_10 = ___reader1;
		NullCheck(L_10);
		RuntimeObject * L_11 = JsonReader_get_Value_mC116A83A4086133BAC5F081509795BCBBFF6822F(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		InterfaceActionInvoker1< String_t* >::Invoke(5 /* System.Void LitJson.IJsonWrapper::SetString(System.String) */, IJsonWrapper_t1044F960D2308370A04F10E679D0933060B3C8EE_il2cpp_TypeInfo_var, L_9, ((String_t*)CastclassSealed((RuntimeObject*)L_11, String_t_il2cpp_TypeInfo_var)));
		RuntimeObject* L_12 = V_0;
		return L_12;
	}

IL_0040:
	{
		JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * L_13 = ___reader1;
		NullCheck(L_13);
		int32_t L_14 = JsonReader_get_Token_m42F16914150E177E6DA507D2A62A576BD542FB84(L_13, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)8))))
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_15 = V_0;
		JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * L_16 = ___reader1;
		NullCheck(L_16);
		RuntimeObject * L_17 = JsonReader_get_Value_mC116A83A4086133BAC5F081509795BCBBFF6822F(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		InterfaceActionInvoker1< double >::Invoke(1 /* System.Void LitJson.IJsonWrapper::SetDouble(System.Double) */, IJsonWrapper_t1044F960D2308370A04F10E679D0933060B3C8EE_il2cpp_TypeInfo_var, L_15, ((*(double*)((double*)UnBox(L_17, Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var)))));
		RuntimeObject* L_18 = V_0;
		return L_18;
	}

IL_005c:
	{
		JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * L_19 = ___reader1;
		NullCheck(L_19);
		int32_t L_20 = JsonReader_get_Token_m42F16914150E177E6DA507D2A62A576BD542FB84(L_19, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)6))))
		{
			goto IL_0078;
		}
	}
	{
		RuntimeObject* L_21 = V_0;
		JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * L_22 = ___reader1;
		NullCheck(L_22);
		RuntimeObject * L_23 = JsonReader_get_Value_mC116A83A4086133BAC5F081509795BCBBFF6822F(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void LitJson.IJsonWrapper::SetInt(System.Int32) */, IJsonWrapper_t1044F960D2308370A04F10E679D0933060B3C8EE_il2cpp_TypeInfo_var, L_21, ((*(int32_t*)((int32_t*)UnBox(L_23, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))));
		RuntimeObject* L_24 = V_0;
		return L_24;
	}

IL_0078:
	{
		JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * L_25 = ___reader1;
		NullCheck(L_25);
		int32_t L_26 = JsonReader_get_Token_m42F16914150E177E6DA507D2A62A576BD542FB84(L_25, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_26) == ((uint32_t)7))))
		{
			goto IL_0094;
		}
	}
	{
		RuntimeObject* L_27 = V_0;
		JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * L_28 = ___reader1;
		NullCheck(L_28);
		RuntimeObject * L_29 = JsonReader_get_Value_mC116A83A4086133BAC5F081509795BCBBFF6822F(L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		InterfaceActionInvoker1< int64_t >::Invoke(4 /* System.Void LitJson.IJsonWrapper::SetLong(System.Int64) */, IJsonWrapper_t1044F960D2308370A04F10E679D0933060B3C8EE_il2cpp_TypeInfo_var, L_27, ((*(int64_t*)((int64_t*)UnBox(L_29, Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var)))));
		RuntimeObject* L_30 = V_0;
		return L_30;
	}

IL_0094:
	{
		JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * L_31 = ___reader1;
		NullCheck(L_31);
		int32_t L_32 = JsonReader_get_Token_m42F16914150E177E6DA507D2A62A576BD542FB84(L_31, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_32) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_00b1;
		}
	}
	{
		RuntimeObject* L_33 = V_0;
		JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * L_34 = ___reader1;
		NullCheck(L_34);
		RuntimeObject * L_35 = JsonReader_get_Value_mC116A83A4086133BAC5F081509795BCBBFF6822F(L_34, /*hidden argument*/NULL);
		NullCheck(L_33);
		InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void LitJson.IJsonWrapper::SetBoolean(System.Boolean) */, IJsonWrapper_t1044F960D2308370A04F10E679D0933060B3C8EE_il2cpp_TypeInfo_var, L_33, ((*(bool*)((bool*)UnBox(L_35, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))));
		RuntimeObject* L_36 = V_0;
		return L_36;
	}

IL_00b1:
	{
		JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * L_37 = ___reader1;
		NullCheck(L_37);
		int32_t L_38 = JsonReader_get_Token_m42F16914150E177E6DA507D2A62A576BD542FB84(L_37, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_38) == ((uint32_t)4))))
		{
			goto IL_00dc;
		}
	}
	{
		RuntimeObject* L_39 = V_0;
		NullCheck(L_39);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void LitJson.IJsonWrapper::SetJsonType(LitJson.JsonType) */, IJsonWrapper_t1044F960D2308370A04F10E679D0933060B3C8EE_il2cpp_TypeInfo_var, L_39, 2);
	}

IL_00c1:
	{
		WrapperFactory_tD6F47E2E7EA3DDD74006601D884BD3D45744A27B * L_40 = ___factory0;
		JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * L_41 = ___reader1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		RuntimeObject* L_42 = JsonMapper_ReadValue_mEDBEF58FAFC351DB9B296EBE14EB71778A31C6A1(L_40, L_41, /*hidden argument*/NULL);
		V_1 = L_42;
		JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * L_43 = ___reader1;
		NullCheck(L_43);
		int32_t L_44 = JsonReader_get_Token_m42F16914150E177E6DA507D2A62A576BD542FB84(L_43, /*hidden argument*/NULL);
		if ((((int32_t)L_44) == ((int32_t)5)))
		{
			goto IL_0118;
		}
	}
	{
		RuntimeObject* L_45 = V_0;
		RuntimeObject* L_46 = V_1;
		NullCheck(L_45);
		InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, L_45, L_46);
		goto IL_00c1;
	}

IL_00dc:
	{
		JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * L_47 = ___reader1;
		NullCheck(L_47);
		int32_t L_48 = JsonReader_get_Token_m42F16914150E177E6DA507D2A62A576BD542FB84(L_47, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_48) == ((uint32_t)1))))
		{
			goto IL_0118;
		}
	}
	{
		RuntimeObject* L_49 = V_0;
		NullCheck(L_49);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void LitJson.IJsonWrapper::SetJsonType(LitJson.JsonType) */, IJsonWrapper_t1044F960D2308370A04F10E679D0933060B3C8EE_il2cpp_TypeInfo_var, L_49, 1);
	}

IL_00ec:
	{
		JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * L_50 = ___reader1;
		NullCheck(L_50);
		JsonReader_Read_m2482C1BFE3E418D79BBBAF792E8F69857D02F5FD(L_50, /*hidden argument*/NULL);
		JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * L_51 = ___reader1;
		NullCheck(L_51);
		int32_t L_52 = JsonReader_get_Token_m42F16914150E177E6DA507D2A62A576BD542FB84(L_51, /*hidden argument*/NULL);
		if ((((int32_t)L_52) == ((int32_t)3)))
		{
			goto IL_0118;
		}
	}
	{
		JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * L_53 = ___reader1;
		NullCheck(L_53);
		RuntimeObject * L_54 = JsonReader_get_Value_mC116A83A4086133BAC5F081509795BCBBFF6822F(L_53, /*hidden argument*/NULL);
		V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_54, String_t_il2cpp_TypeInfo_var));
		RuntimeObject* L_55 = V_0;
		String_t* L_56 = V_2;
		WrapperFactory_tD6F47E2E7EA3DDD74006601D884BD3D45744A27B * L_57 = ___factory0;
		JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * L_58 = ___reader1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		RuntimeObject* L_59 = JsonMapper_ReadValue_mEDBEF58FAFC351DB9B296EBE14EB71778A31C6A1(L_57, L_58, /*hidden argument*/NULL);
		NullCheck(L_55);
		InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var, L_55, L_56, L_59);
		goto IL_00ec;
	}

IL_0118:
	{
		RuntimeObject* L_60 = V_0;
		return L_60;
	}
}
// System.Void LitJson.JsonMapper::RegisterBaseExporters()
extern "C" IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseExporters_mA5AC4C24722E5CA1E3CA970DB48527B882415FE7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_RegisterBaseExporters_mA5AC4C24722E5CA1E3CA970DB48527B882415FE7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Type_t * G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	Type_t * G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Type_t * G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	Type_t * G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	Type_t * G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	Type_t * G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	Type_t * G_B7_0 = NULL;
	RuntimeObject* G_B7_1 = NULL;
	Type_t * G_B10_0 = NULL;
	RuntimeObject* G_B10_1 = NULL;
	Type_t * G_B9_0 = NULL;
	RuntimeObject* G_B9_1 = NULL;
	Type_t * G_B12_0 = NULL;
	RuntimeObject* G_B12_1 = NULL;
	Type_t * G_B11_0 = NULL;
	RuntimeObject* G_B11_1 = NULL;
	Type_t * G_B14_0 = NULL;
	RuntimeObject* G_B14_1 = NULL;
	Type_t * G_B13_0 = NULL;
	RuntimeObject* G_B13_1 = NULL;
	Type_t * G_B16_0 = NULL;
	RuntimeObject* G_B16_1 = NULL;
	Type_t * G_B15_0 = NULL;
	RuntimeObject* G_B15_1 = NULL;
	Type_t * G_B18_0 = NULL;
	RuntimeObject* G_B18_1 = NULL;
	Type_t * G_B17_0 = NULL;
	RuntimeObject* G_B17_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_1, /*hidden argument*/NULL);
		ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * L_3 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegatee_16();
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0027;
		}
	}
	{
		ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * L_4 = (ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 *)il2cpp_codegen_object_new(ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m746B6788F569D75C147E95502B5E13D55B370332(L_4, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseExportersU3Eb__5_m820AFA26F0BD1C73D7FD014FBFBE725ABF8E7E75_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_CSU24U3CU3E9__CachedAnonymousMethodDelegatee_16(L_4);
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * L_5 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegatee_16();
		NullCheck(G_B2_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_tD4FB9AEC5A4A46D8A5CA49ED8DD25D9968B4A23B_il2cpp_TypeInfo_var, G_B2_1, G_B2_0, L_5);
		RuntimeObject* L_6 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_7, /*hidden argument*/NULL);
		ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * L_9 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegatef_17();
		G_B3_0 = L_8;
		G_B3_1 = L_6;
		if (L_9)
		{
			G_B4_0 = L_8;
			G_B4_1 = L_6;
			goto IL_0058;
		}
	}
	{
		ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * L_10 = (ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 *)il2cpp_codegen_object_new(ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m746B6788F569D75C147E95502B5E13D55B370332(L_10, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseExportersU3Eb__6_m51B4F92FB77FAC40A84B97581ABE1B02A7107D94_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_CSU24U3CU3E9__CachedAnonymousMethodDelegatef_17(L_10);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * L_11 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegatef_17();
		NullCheck(G_B4_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_tD4FB9AEC5A4A46D8A5CA49ED8DD25D9968B4A23B_il2cpp_TypeInfo_var, G_B4_1, G_B4_0, L_11);
		RuntimeObject* L_12 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_13 = { reinterpret_cast<intptr_t> (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_13, /*hidden argument*/NULL);
		ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * L_15 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate10_18();
		G_B5_0 = L_14;
		G_B5_1 = L_12;
		if (L_15)
		{
			G_B6_0 = L_14;
			G_B6_1 = L_12;
			goto IL_0089;
		}
	}
	{
		ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * L_16 = (ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 *)il2cpp_codegen_object_new(ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m746B6788F569D75C147E95502B5E13D55B370332(L_16, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseExportersU3Eb__7_m442666D879C280AC437B711A9A0B626C7DFC81DF_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_CSU24U3CU3E9__CachedAnonymousMethodDelegate10_18(L_16);
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
	}

IL_0089:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * L_17 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate10_18();
		NullCheck(G_B6_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_tD4FB9AEC5A4A46D8A5CA49ED8DD25D9968B4A23B_il2cpp_TypeInfo_var, G_B6_1, G_B6_0, L_17);
		RuntimeObject* L_18 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_19 = { reinterpret_cast<intptr_t> (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_19, /*hidden argument*/NULL);
		ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * L_21 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate11_19();
		G_B7_0 = L_20;
		G_B7_1 = L_18;
		if (L_21)
		{
			G_B8_0 = L_20;
			G_B8_1 = L_18;
			goto IL_00ba;
		}
	}
	{
		ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * L_22 = (ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 *)il2cpp_codegen_object_new(ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m746B6788F569D75C147E95502B5E13D55B370332(L_22, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseExportersU3Eb__8_mDFB76660F6F628E1A983AFF98FB60255508B21E8_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_CSU24U3CU3E9__CachedAnonymousMethodDelegate11_19(L_22);
		G_B8_0 = G_B7_0;
		G_B8_1 = G_B7_1;
	}

IL_00ba:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * L_23 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate11_19();
		NullCheck(G_B8_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_tD4FB9AEC5A4A46D8A5CA49ED8DD25D9968B4A23B_il2cpp_TypeInfo_var, G_B8_1, G_B8_0, L_23);
		RuntimeObject* L_24 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_25 = { reinterpret_cast<intptr_t> (SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_25, /*hidden argument*/NULL);
		ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * L_27 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate12_20();
		G_B9_0 = L_26;
		G_B9_1 = L_24;
		if (L_27)
		{
			G_B10_0 = L_26;
			G_B10_1 = L_24;
			goto IL_00eb;
		}
	}
	{
		ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * L_28 = (ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 *)il2cpp_codegen_object_new(ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m746B6788F569D75C147E95502B5E13D55B370332(L_28, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseExportersU3Eb__9_m00993E75BD8A51826CE12A2E2215DE535F8169F5_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_CSU24U3CU3E9__CachedAnonymousMethodDelegate12_20(L_28);
		G_B10_0 = G_B9_0;
		G_B10_1 = G_B9_1;
	}

IL_00eb:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * L_29 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate12_20();
		NullCheck(G_B10_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_tD4FB9AEC5A4A46D8A5CA49ED8DD25D9968B4A23B_il2cpp_TypeInfo_var, G_B10_1, G_B10_0, L_29);
		RuntimeObject* L_30 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_31 = { reinterpret_cast<intptr_t> (Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_31, /*hidden argument*/NULL);
		ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * L_33 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate13_21();
		G_B11_0 = L_32;
		G_B11_1 = L_30;
		if (L_33)
		{
			G_B12_0 = L_32;
			G_B12_1 = L_30;
			goto IL_011c;
		}
	}
	{
		ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * L_34 = (ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 *)il2cpp_codegen_object_new(ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m746B6788F569D75C147E95502B5E13D55B370332(L_34, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseExportersU3Eb__a_m72A96BB2E0ACE315FF008E45C571ECEB0D9F1B77_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_CSU24U3CU3E9__CachedAnonymousMethodDelegate13_21(L_34);
		G_B12_0 = G_B11_0;
		G_B12_1 = G_B11_1;
	}

IL_011c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * L_35 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate13_21();
		NullCheck(G_B12_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_tD4FB9AEC5A4A46D8A5CA49ED8DD25D9968B4A23B_il2cpp_TypeInfo_var, G_B12_1, G_B12_0, L_35);
		RuntimeObject* L_36 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_37 = { reinterpret_cast<intptr_t> (UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_37, /*hidden argument*/NULL);
		ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * L_39 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate14_22();
		G_B13_0 = L_38;
		G_B13_1 = L_36;
		if (L_39)
		{
			G_B14_0 = L_38;
			G_B14_1 = L_36;
			goto IL_014d;
		}
	}
	{
		ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * L_40 = (ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 *)il2cpp_codegen_object_new(ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m746B6788F569D75C147E95502B5E13D55B370332(L_40, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseExportersU3Eb__b_mCF5760D3081CE162479C64BD92FDEDFF33474A21_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_CSU24U3CU3E9__CachedAnonymousMethodDelegate14_22(L_40);
		G_B14_0 = G_B13_0;
		G_B14_1 = G_B13_1;
	}

IL_014d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * L_41 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate14_22();
		NullCheck(G_B14_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_tD4FB9AEC5A4A46D8A5CA49ED8DD25D9968B4A23B_il2cpp_TypeInfo_var, G_B14_1, G_B14_0, L_41);
		RuntimeObject* L_42 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_43 = { reinterpret_cast<intptr_t> (UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_43, /*hidden argument*/NULL);
		ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * L_45 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate15_23();
		G_B15_0 = L_44;
		G_B15_1 = L_42;
		if (L_45)
		{
			G_B16_0 = L_44;
			G_B16_1 = L_42;
			goto IL_017e;
		}
	}
	{
		ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * L_46 = (ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 *)il2cpp_codegen_object_new(ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m746B6788F569D75C147E95502B5E13D55B370332(L_46, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseExportersU3Eb__c_m250210E0156F841FEB23A1D635E368CFD939E658_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_CSU24U3CU3E9__CachedAnonymousMethodDelegate15_23(L_46);
		G_B16_0 = G_B15_0;
		G_B16_1 = G_B15_1;
	}

IL_017e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * L_47 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate15_23();
		NullCheck(G_B16_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_tD4FB9AEC5A4A46D8A5CA49ED8DD25D9968B4A23B_il2cpp_TypeInfo_var, G_B16_1, G_B16_0, L_47);
		RuntimeObject* L_48 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_49 = { reinterpret_cast<intptr_t> (UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_49, /*hidden argument*/NULL);
		ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * L_51 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate16_24();
		G_B17_0 = L_50;
		G_B17_1 = L_48;
		if (L_51)
		{
			G_B18_0 = L_50;
			G_B18_1 = L_48;
			goto IL_01af;
		}
	}
	{
		ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * L_52 = (ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 *)il2cpp_codegen_object_new(ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m746B6788F569D75C147E95502B5E13D55B370332(L_52, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseExportersU3Eb__d_m5694E74FE65A1E7EF7206AD1691A77FFAAC14A5C_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_CSU24U3CU3E9__CachedAnonymousMethodDelegate16_24(L_52);
		G_B18_0 = G_B17_0;
		G_B18_1 = G_B17_1;
	}

IL_01af:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * L_53 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate16_24();
		NullCheck(G_B18_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_tDB931620EB9DB59806E5A45685FDCC0F7F49F062 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_tD4FB9AEC5A4A46D8A5CA49ED8DD25D9968B4A23B_il2cpp_TypeInfo_var, G_B18_1, G_B18_0, L_53);
		return;
	}
}
// System.Void LitJson.JsonMapper::RegisterBaseImporters()
extern "C" IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseImporters_m85C8F641A628BBC947809E7C82707539DA6B53E6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_RegisterBaseImporters_m85C8F641A628BBC947809E7C82707539DA6B53E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_0 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate23_25();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_1 = (ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB *)il2cpp_codegen_object_new(ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m148110F0AAA9719557496BFCBA0291A56E3A3C35(L_1, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Eb__17_mAA1548065A7DD1AC31CFE356B39FB4181980DAB6_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_CSU24U3CU3E9__CachedAnonymousMethodDelegate23_25(L_1);
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_2 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate23_25();
		V_0 = L_2;
		RuntimeObject* L_3 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_4, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_6 = { reinterpret_cast<intptr_t> (Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_0_0_0_var) };
		Type_t * L_7 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_6, /*hidden argument*/NULL);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_8 = V_0;
		JsonMapper_RegisterImporter_mBB0CE190FAE3EA245045BBDD87FA7C7F4A0B2663(L_3, L_5, L_7, L_8, /*hidden argument*/NULL);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_9 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate24_26();
		if (L_9)
		{
			goto IL_0055;
		}
	}
	{
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_10 = (ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB *)il2cpp_codegen_object_new(ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m148110F0AAA9719557496BFCBA0291A56E3A3C35(L_10, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Eb__18_mAFDB468A62A3C3E022894D0B32BCB55F6B573570_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_CSU24U3CU3E9__CachedAnonymousMethodDelegate24_26(L_10);
	}

IL_0055:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_11 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate24_26();
		V_0 = L_11;
		RuntimeObject* L_12 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_13 = { reinterpret_cast<intptr_t> (Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_13, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_15 = { reinterpret_cast<intptr_t> (UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_0_0_0_var) };
		Type_t * L_16 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_15, /*hidden argument*/NULL);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_17 = V_0;
		JsonMapper_RegisterImporter_mBB0CE190FAE3EA245045BBDD87FA7C7F4A0B2663(L_12, L_14, L_16, L_17, /*hidden argument*/NULL);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_18 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate25_27();
		if (L_18)
		{
			goto IL_0092;
		}
	}
	{
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_19 = (ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB *)il2cpp_codegen_object_new(ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m148110F0AAA9719557496BFCBA0291A56E3A3C35(L_19, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Eb__19_m4ED42219233EEE4618182F4F2528D79361D8734C_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_CSU24U3CU3E9__CachedAnonymousMethodDelegate25_27(L_19);
	}

IL_0092:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_20 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate25_27();
		V_0 = L_20;
		RuntimeObject* L_21 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_22 = { reinterpret_cast<intptr_t> (Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_23 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_22, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_24 = { reinterpret_cast<intptr_t> (SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_0_0_0_var) };
		Type_t * L_25 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_24, /*hidden argument*/NULL);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_26 = V_0;
		JsonMapper_RegisterImporter_mBB0CE190FAE3EA245045BBDD87FA7C7F4A0B2663(L_21, L_23, L_25, L_26, /*hidden argument*/NULL);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_27 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate26_28();
		if (L_27)
		{
			goto IL_00cf;
		}
	}
	{
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_28 = (ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB *)il2cpp_codegen_object_new(ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m148110F0AAA9719557496BFCBA0291A56E3A3C35(L_28, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Eb__1a_mC84F91176193637D0CE9E9008F49069CCF21C8F3_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_CSU24U3CU3E9__CachedAnonymousMethodDelegate26_28(L_28);
	}

IL_00cf:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_29 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate26_28();
		V_0 = L_29;
		RuntimeObject* L_30 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_31 = { reinterpret_cast<intptr_t> (Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_31, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_33 = { reinterpret_cast<intptr_t> (Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_0_0_0_var) };
		Type_t * L_34 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_33, /*hidden argument*/NULL);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_35 = V_0;
		JsonMapper_RegisterImporter_mBB0CE190FAE3EA245045BBDD87FA7C7F4A0B2663(L_30, L_32, L_34, L_35, /*hidden argument*/NULL);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_36 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate27_29();
		if (L_36)
		{
			goto IL_010c;
		}
	}
	{
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_37 = (ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB *)il2cpp_codegen_object_new(ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m148110F0AAA9719557496BFCBA0291A56E3A3C35(L_37, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Eb__1b_m208B5E6D3292FC54DB559E9F8102409EF801CEE6_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_CSU24U3CU3E9__CachedAnonymousMethodDelegate27_29(L_37);
	}

IL_010c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_38 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate27_29();
		V_0 = L_38;
		RuntimeObject* L_39 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_40 = { reinterpret_cast<intptr_t> (Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_41 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_40, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_42 = { reinterpret_cast<intptr_t> (UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_0_0_0_var) };
		Type_t * L_43 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_42, /*hidden argument*/NULL);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_44 = V_0;
		JsonMapper_RegisterImporter_mBB0CE190FAE3EA245045BBDD87FA7C7F4A0B2663(L_39, L_41, L_43, L_44, /*hidden argument*/NULL);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_45 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate28_30();
		if (L_45)
		{
			goto IL_0149;
		}
	}
	{
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_46 = (ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB *)il2cpp_codegen_object_new(ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m148110F0AAA9719557496BFCBA0291A56E3A3C35(L_46, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Eb__1c_mC30D72F03A2039E05DB5571F813DA573AA9FAA70_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_CSU24U3CU3E9__CachedAnonymousMethodDelegate28_30(L_46);
	}

IL_0149:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_47 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate28_30();
		V_0 = L_47;
		RuntimeObject* L_48 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_49 = { reinterpret_cast<intptr_t> (Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_49, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_51 = { reinterpret_cast<intptr_t> (UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_0_0_0_var) };
		Type_t * L_52 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_51, /*hidden argument*/NULL);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_53 = V_0;
		JsonMapper_RegisterImporter_mBB0CE190FAE3EA245045BBDD87FA7C7F4A0B2663(L_48, L_50, L_52, L_53, /*hidden argument*/NULL);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_54 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate29_31();
		if (L_54)
		{
			goto IL_0186;
		}
	}
	{
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_55 = (ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB *)il2cpp_codegen_object_new(ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m148110F0AAA9719557496BFCBA0291A56E3A3C35(L_55, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Eb__1d_m66AA6DBBB11C3ADB5528A4C43D6B48524F8B9855_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_CSU24U3CU3E9__CachedAnonymousMethodDelegate29_31(L_55);
	}

IL_0186:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_56 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate29_31();
		V_0 = L_56;
		RuntimeObject* L_57 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_58 = { reinterpret_cast<intptr_t> (Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_59 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_58, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_60 = { reinterpret_cast<intptr_t> (Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_0_0_0_var) };
		Type_t * L_61 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_60, /*hidden argument*/NULL);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_62 = V_0;
		JsonMapper_RegisterImporter_mBB0CE190FAE3EA245045BBDD87FA7C7F4A0B2663(L_57, L_59, L_61, L_62, /*hidden argument*/NULL);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_63 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate2a_32();
		if (L_63)
		{
			goto IL_01c3;
		}
	}
	{
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_64 = (ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB *)il2cpp_codegen_object_new(ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m148110F0AAA9719557496BFCBA0291A56E3A3C35(L_64, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Eb__1e_m9CE56901AF5B3A8959BBD34CDC27E0C9A3B4A2DC_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_CSU24U3CU3E9__CachedAnonymousMethodDelegate2a_32(L_64);
	}

IL_01c3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_65 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate2a_32();
		V_0 = L_65;
		RuntimeObject* L_66 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_67 = { reinterpret_cast<intptr_t> (Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_68 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_67, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_69 = { reinterpret_cast<intptr_t> (Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_0_0_0_var) };
		Type_t * L_70 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_69, /*hidden argument*/NULL);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_71 = V_0;
		JsonMapper_RegisterImporter_mBB0CE190FAE3EA245045BBDD87FA7C7F4A0B2663(L_66, L_68, L_70, L_71, /*hidden argument*/NULL);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_72 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate2b_33();
		if (L_72)
		{
			goto IL_0200;
		}
	}
	{
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_73 = (ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB *)il2cpp_codegen_object_new(ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m148110F0AAA9719557496BFCBA0291A56E3A3C35(L_73, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Eb__1f_mF1808D686A331DAFE7E352FB255CCB9653D1BD27_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_CSU24U3CU3E9__CachedAnonymousMethodDelegate2b_33(L_73);
	}

IL_0200:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_74 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate2b_33();
		V_0 = L_74;
		RuntimeObject* L_75 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_76 = { reinterpret_cast<intptr_t> (Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_77 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_76, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_78 = { reinterpret_cast<intptr_t> (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_0_0_0_var) };
		Type_t * L_79 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_78, /*hidden argument*/NULL);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_80 = V_0;
		JsonMapper_RegisterImporter_mBB0CE190FAE3EA245045BBDD87FA7C7F4A0B2663(L_75, L_77, L_79, L_80, /*hidden argument*/NULL);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_81 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate2c_34();
		if (L_81)
		{
			goto IL_023d;
		}
	}
	{
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_82 = (ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB *)il2cpp_codegen_object_new(ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m148110F0AAA9719557496BFCBA0291A56E3A3C35(L_82, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Eb__20_m69B4361F8A87C3624FFF01995415E6DFC2342BBA_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_CSU24U3CU3E9__CachedAnonymousMethodDelegate2c_34(L_82);
	}

IL_023d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_83 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate2c_34();
		V_0 = L_83;
		RuntimeObject* L_84 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_85 = { reinterpret_cast<intptr_t> (Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_86 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_85, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_87 = { reinterpret_cast<intptr_t> (UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_0_0_0_var) };
		Type_t * L_88 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_87, /*hidden argument*/NULL);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_89 = V_0;
		JsonMapper_RegisterImporter_mBB0CE190FAE3EA245045BBDD87FA7C7F4A0B2663(L_84, L_86, L_88, L_89, /*hidden argument*/NULL);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_90 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate2d_35();
		if (L_90)
		{
			goto IL_027a;
		}
	}
	{
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_91 = (ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB *)il2cpp_codegen_object_new(ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m148110F0AAA9719557496BFCBA0291A56E3A3C35(L_91, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Eb__21_m03972E2199D85DF7F06C755B10A2792A029B2759_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_CSU24U3CU3E9__CachedAnonymousMethodDelegate2d_35(L_91);
	}

IL_027a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_92 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate2d_35();
		V_0 = L_92;
		RuntimeObject* L_93 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_94 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_95 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_94, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_96 = { reinterpret_cast<intptr_t> (Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_0_0_0_var) };
		Type_t * L_97 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_96, /*hidden argument*/NULL);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_98 = V_0;
		JsonMapper_RegisterImporter_mBB0CE190FAE3EA245045BBDD87FA7C7F4A0B2663(L_93, L_95, L_97, L_98, /*hidden argument*/NULL);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_99 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate2e_36();
		if (L_99)
		{
			goto IL_02b7;
		}
	}
	{
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_100 = (ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB *)il2cpp_codegen_object_new(ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m148110F0AAA9719557496BFCBA0291A56E3A3C35(L_100, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Eb__22_m99190ED0A6A0A3EB88EED7C10E3BC143E72B93C1_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_CSU24U3CU3E9__CachedAnonymousMethodDelegate2e_36(L_100);
	}

IL_02b7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_101 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate2e_36();
		V_0 = L_101;
		RuntimeObject* L_102 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_103 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_104 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_103, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_105 = { reinterpret_cast<intptr_t> (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_0_0_0_var) };
		Type_t * L_106 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_105, /*hidden argument*/NULL);
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_107 = V_0;
		JsonMapper_RegisterImporter_mBB0CE190FAE3EA245045BBDD87FA7C7F4A0B2663(L_102, L_104, L_106, L_107, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::RegisterImporter(System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>,System.Type,System.Type,LitJson.ImporterFunc)
extern "C" IL2CPP_METHOD_ATTR void JsonMapper_RegisterImporter_mBB0CE190FAE3EA245045BBDD87FA7C7F4A0B2663 (RuntimeObject* ___table0, Type_t * ___json_type1, Type_t * ___value_type2, ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * ___importer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_RegisterImporter_mBB0CE190FAE3EA245045BBDD87FA7C7F4A0B2663_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___table0;
		Type_t * L_1 = ___json_type1;
		NullCheck(L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::ContainsKey(!0) */, IDictionary_2_tF07C9E1E97EFA36D6E9BF6D921A32D892753B1B0_il2cpp_TypeInfo_var, L_0, L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_3 = ___table0;
		Type_t * L_4 = ___json_type1;
		Dictionary_2_t4D409F73FC7FC65765AB8AA78A71F3D0C9881B9E * L_5 = (Dictionary_2_t4D409F73FC7FC65765AB8AA78A71F3D0C9881B9E *)il2cpp_codegen_object_new(Dictionary_2_t4D409F73FC7FC65765AB8AA78A71F3D0C9881B9E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5FFDD4CFBA5515DC13B768B3FDB691A4A5FD2A5A(L_5, /*hidden argument*/Dictionary_2__ctor_m5FFDD4CFBA5515DC13B768B3FDB691A4A5FD2A5A_RuntimeMethod_var);
		NullCheck(L_3);
		InterfaceActionInvoker2< Type_t *, RuntimeObject* >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::Add(!0,!1) */, IDictionary_2_tF07C9E1E97EFA36D6E9BF6D921A32D892753B1B0_il2cpp_TypeInfo_var, L_3, L_4, L_5);
	}

IL_0015:
	{
		RuntimeObject* L_6 = ___table0;
		Type_t * L_7 = ___json_type1;
		NullCheck(L_6);
		RuntimeObject* L_8 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::get_Item(!0) */, IDictionary_2_tF07C9E1E97EFA36D6E9BF6D921A32D892753B1B0_il2cpp_TypeInfo_var, L_6, L_7);
		Type_t * L_9 = ___value_type2;
		ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * L_10 = ___importer3;
		NullCheck(L_8);
		InterfaceActionInvoker2< Type_t *, ImporterFunc_tCED74160F3788D9B6DA0C9EAD78FAABA687257FB * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>::set_Item(!0,!1) */, IDictionary_2_t788AB90D716699CBFAFE6CE0972803762CA2D24B_il2cpp_TypeInfo_var, L_8, L_9, L_10);
		return;
	}
}
// LitJson.JsonData LitJson.JsonMapper::ToObject(System.String)
extern "C" IL2CPP_METHOD_ATTR JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * JsonMapper_ToObject_m919775CB9665BAB2274C92C74C6F2D22A0FF305F (String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_ToObject_m919775CB9665BAB2274C92C74C6F2D22A0FF305F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		WrapperFactory_tD6F47E2E7EA3DDD74006601D884BD3D45744A27B * L_0 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate35_37();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		WrapperFactory_tD6F47E2E7EA3DDD74006601D884BD3D45744A27B * L_1 = (WrapperFactory_tD6F47E2E7EA3DDD74006601D884BD3D45744A27B *)il2cpp_codegen_object_new(WrapperFactory_tD6F47E2E7EA3DDD74006601D884BD3D45744A27B_il2cpp_TypeInfo_var);
		WrapperFactory__ctor_m58946D1D851ECF9297D875A2B66FC448F6235036(L_1, NULL, (intptr_t)((intptr_t)JsonMapper_U3CToObjectU3Eb__34_m48D6CAE5057246AD69B5AB4C2ACF7ED17C50C3C2_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->set_CSU24U3CU3E9__CachedAnonymousMethodDelegate35_37(L_1);
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		WrapperFactory_tD6F47E2E7EA3DDD74006601D884BD3D45744A27B * L_2 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_CSU24U3CU3E9__CachedAnonymousMethodDelegate35_37();
		String_t* L_3 = ___json0;
		RuntimeObject* L_4 = JsonMapper_ToWrapper_m6362C6D5BB943534B78DA927EEB2A2EB7A766826(L_2, L_3, /*hidden argument*/NULL);
		return ((JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B *)CastclassClass((RuntimeObject*)L_4, JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B_il2cpp_TypeInfo_var));
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ToWrapper_m6362C6D5BB943534B78DA927EEB2A2EB7A766826 (WrapperFactory_tD6F47E2E7EA3DDD74006601D884BD3D45744A27B * ___factory0, String_t* ___json1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_ToWrapper_m6362C6D5BB943534B78DA927EEB2A2EB7A766826_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * V_0 = NULL;
	{
		String_t* L_0 = ___json1;
		JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * L_1 = (JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 *)il2cpp_codegen_object_new(JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0_il2cpp_TypeInfo_var);
		JsonReader__ctor_mFB752190E3EE77764F30486F2CC5FC51BAD74B59(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		WrapperFactory_tD6F47E2E7EA3DDD74006601D884BD3D45744A27B * L_2 = ___factory0;
		JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = JsonMapper_ReadValue_mEDBEF58FAFC351DB9B296EBE14EB71778A31C6A1(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>b__5(System.Object,LitJson.JsonWriter)
extern "C" IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Eb__5_m820AFA26F0BD1C73D7FD014FBFBE725ABF8E7E75 (RuntimeObject * ___obj0, JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseExportersU3Eb__5_m820AFA26F0BD1C73D7FD014FBFBE725ABF8E7E75_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_m322C82C3EB50E7389A4A38C4601FD08705CA56CF(((*(uint8_t*)((uint8_t*)UnBox(L_1, Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m22DC3BB70AAE9EB12E5E2AC779EBAB234D24CA1A(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>b__6(System.Object,LitJson.JsonWriter)
extern "C" IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Eb__6_m51B4F92FB77FAC40A84B97581ABE1B02A7107D94 (RuntimeObject * ___obj0, JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseExportersU3Eb__6_m51B4F92FB77FAC40A84B97581ABE1B02A7107D94_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		String_t* L_2 = Convert_ToString_m1D5180AFF3E80B04E8FD3E98F59174D881CB85B3(((*(Il2CppChar*)((Il2CppChar*)UnBox(L_1, Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m99731AB0DA1D5A4A96747C5A632EF2E7CC31BF10(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>b__7(System.Object,LitJson.JsonWriter)
extern "C" IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Eb__7_m442666D879C280AC437B711A9A0B626C7DFC81DF (RuntimeObject * ___obj0, JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseExportersU3Eb__7_m442666D879C280AC437B711A9A0B626C7DFC81DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_datetime_format_1();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		String_t* L_3 = Convert_ToString_m20E97C7A44B4E97B0391CA7810EF35FE25657425(((*(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)UnBox(L_1, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var)))), L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m99731AB0DA1D5A4A96747C5A632EF2E7CC31BF10(L_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>b__8(System.Object,LitJson.JsonWriter)
extern "C" IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Eb__8_mDFB76660F6F628E1A983AFF98FB60255508B21E8 (RuntimeObject * ___obj0, JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseExportersU3Eb__8_mDFB76660F6F628E1A983AFF98FB60255508B21E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		NullCheck(L_0);
		JsonWriter_Write_m5D53C45B3D2664C22FE882EF407A9BD60D2FAC37(L_0, ((*(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 *)((Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 *)UnBox(L_1, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>b__9(System.Object,LitJson.JsonWriter)
extern "C" IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Eb__9_m00993E75BD8A51826CE12A2E2215DE535F8169F5 (RuntimeObject * ___obj0, JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseExportersU3Eb__9_m00993E75BD8A51826CE12A2E2215DE535F8169F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_m484F8DB9BD6090856385FF8A4C0113DD51D5CC1D(((*(int8_t*)((int8_t*)UnBox(L_1, SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m22DC3BB70AAE9EB12E5E2AC779EBAB234D24CA1A(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>b__a(System.Object,LitJson.JsonWriter)
extern "C" IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Eb__a_m72A96BB2E0ACE315FF008E45C571ECEB0D9F1B77 (RuntimeObject * ___obj0, JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseExportersU3Eb__a_m72A96BB2E0ACE315FF008E45C571ECEB0D9F1B77_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_mB0AA47EFAB81D1DBA0C2153ECBD0E19DE230BE2C(((*(int16_t*)((int16_t*)UnBox(L_1, Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m22DC3BB70AAE9EB12E5E2AC779EBAB234D24CA1A(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>b__b(System.Object,LitJson.JsonWriter)
extern "C" IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Eb__b_mCF5760D3081CE162479C64BD92FDEDFF33474A21 (RuntimeObject * ___obj0, JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseExportersU3Eb__b_mCF5760D3081CE162479C64BD92FDEDFF33474A21_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_m8A95C977AFB27DA577E58CAE3255F8B24EE79517(((*(uint16_t*)((uint16_t*)UnBox(L_1, UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m22DC3BB70AAE9EB12E5E2AC779EBAB234D24CA1A(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>b__c(System.Object,LitJson.JsonWriter)
extern "C" IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Eb__c_m250210E0156F841FEB23A1D635E368CFD939E658 (RuntimeObject * ___obj0, JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseExportersU3Eb__c_m250210E0156F841FEB23A1D635E368CFD939E658_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		uint64_t L_2 = Convert_ToUInt64_mC8F7AEA2A46B8BEB45B65312F49EEE2540B596EC(((*(uint32_t*)((uint32_t*)UnBox(L_1, UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m8C8059D41B0D44F6AAA4C6DC2B3354E3E65A13E5(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>b__d(System.Object,LitJson.JsonWriter)
extern "C" IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Eb__d_m5694E74FE65A1E7EF7206AD1691A77FFAAC14A5C (RuntimeObject * ___obj0, JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseExportersU3Eb__d_m5694E74FE65A1E7EF7206AD1691A77FFAAC14A5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		NullCheck(L_0);
		JsonWriter_Write_m8C8059D41B0D44F6AAA4C6DC2B3354E3E65A13E5(L_0, ((*(uint64_t*)((uint64_t*)UnBox(L_1, UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__17(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Eb__17_mAA1548065A7DD1AC31CFE356B39FB4181980DAB6 (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Eb__17_mAA1548065A7DD1AC31CFE356B39FB4181980DAB6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		uint8_t L_1 = Convert_ToByte_mC952E2B42FF6008EF2123228A0BFB9054531EB64(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint8_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__18(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Eb__18_mAFDB468A62A3C3E022894D0B32BCB55F6B573570 (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Eb__18_mAFDB468A62A3C3E022894D0B32BCB55F6B573570_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		uint64_t L_1 = Convert_ToUInt64_m3D60F8111B12E0D8BB538E433065340CF45EB772(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint64_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__19(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Eb__19_m4ED42219233EEE4618182F4F2528D79361D8734C (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Eb__19_m4ED42219233EEE4618182F4F2528D79361D8734C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int8_t L_1 = Convert_ToSByte_m65A58DC38CC3A2E7B1D2546EC2FE0803AAB03F34(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		int8_t L_2 = L_1;
		RuntimeObject * L_3 = Box(SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__1a(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Eb__1a_mC84F91176193637D0CE9E9008F49069CCF21C8F3 (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Eb__1a_mC84F91176193637D0CE9E9008F49069CCF21C8F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int16_t L_1 = Convert_ToInt16_m0D8DD7C5E5F85BE27D38E0FBD17411B8682618B3(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		int16_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__1b(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Eb__1b_m208B5E6D3292FC54DB559E9F8102409EF801CEE6 (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Eb__1b_m208B5E6D3292FC54DB559E9F8102409EF801CEE6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		uint16_t L_1 = Convert_ToUInt16_m926B887258078B9BB42574AA2B3F95DC50460EA7(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint16_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__1c(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Eb__1c_mC30D72F03A2039E05DB5571F813DA573AA9FAA70 (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Eb__1c_mC30D72F03A2039E05DB5571F813DA573AA9FAA70_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		uint32_t L_1 = Convert_ToUInt32_mA22ABF80925CA54B6B4869939964184C7F344B41(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__1d(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Eb__1d_m66AA6DBBB11C3ADB5528A4C43D6B48524F8B9855 (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Eb__1d_m66AA6DBBB11C3ADB5528A4C43D6B48524F8B9855_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		float L_1 = Convert_ToSingle_m4D6202BB2F75526A5E01DA49A35D26007C76A21C(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__1e(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Eb__1e_m9CE56901AF5B3A8959BBD34CDC27E0C9A3B4A2DC (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Eb__1e_m9CE56901AF5B3A8959BBD34CDC27E0C9A3B4A2DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		double L_1 = Convert_ToDouble_mAE52754212671CD42E2C67BD9ABCE18DAEE443CC(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		double L_2 = L_1;
		RuntimeObject * L_3 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__1f(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Eb__1f_mF1808D686A331DAFE7E352FB255CCB9653D1BD27 (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Eb__1f_mF1808D686A331DAFE7E352FB255CCB9653D1BD27_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = Convert_ToDecimal_mF93A2E5C1006C59187BA8F1F17E66CEC2D8F7FCE(((*(double*)((double*)UnBox(L_0, Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_2 = L_1;
		RuntimeObject * L_3 = Box(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__20(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Eb__20_m69B4361F8A87C3624FFF01995415E6DFC2342BBA (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Eb__20_m69B4361F8A87C3624FFF01995415E6DFC2342BBA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		uint32_t L_1 = Convert_ToUInt32_mD1B91075B4D330E0D2D4600A6D5283C2FA1586E4(((*(int64_t*)((int64_t*)UnBox(L_0, Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__21(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Eb__21_m03972E2199D85DF7F06C755B10A2792A029B2759 (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Eb__21_m03972E2199D85DF7F06C755B10A2792A029B2759_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		Il2CppChar L_1 = Convert_ToChar_mE2AE0A8A2085470EA17FC28F7D17BE676A135C45(((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		Il2CppChar L_2 = L_1;
		RuntimeObject * L_3 = Box(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>b__22(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Eb__22_m99190ED0A6A0A3EB88EED7C10E3BC143E72B93C1 (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Eb__22_m99190ED0A6A0A3EB88EED7C10E3BC143E72B93C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tA14257A53DD844EF7B9D24051ED252AC1965A50F_il2cpp_TypeInfo_var))->get_datetime_format_1();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_2 = Convert_ToDateTime_m57803D920D7F8261F00652A19DD01E530A530795(((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), L_1, /*hidden argument*/NULL);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_3 = L_2;
		RuntimeObject * L_4 = Box(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper::<ToObject>b__34()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_U3CToObjectU3Eb__34_m48D6CAE5057246AD69B5AB4C2ACF7ED17C50C3C2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CToObjectU3Eb__34_m48D6CAE5057246AD69B5AB4C2ACF7ED17C50C3C2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * L_0 = (JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B *)il2cpp_codegen_object_new(JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B_il2cpp_TypeInfo_var);
		JsonData__ctor_mFE9562FD93C205F1D65E03E4ED4C48F9AE63FBCE(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// LitJson.JsonToken LitJson.JsonReader::get_Token()
extern "C" IL2CPP_METHOD_ATTR int32_t JsonReader_get_Token_m42F16914150E177E6DA507D2A62A576BD542FB84 (JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_token_13();
		return L_0;
	}
}
// System.Object LitJson.JsonReader::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonReader_get_Value_mC116A83A4086133BAC5F081509795BCBBFF6822F (JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_token_value_12();
		return L_0;
	}
}
// System.Void LitJson.JsonReader::.cctor()
extern "C" IL2CPP_METHOD_ATTR void JsonReader__cctor_mE47683E1A5F833C8CDA5B798214DFF3F5949F820 (const RuntimeMethod* method)
{
	{
		JsonReader_PopulateParseTable_m37392D9BABC41EEFC913064C0A37B68274CF4041(/*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonReader::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void JsonReader__ctor_mFB752190E3EE77764F30486F2CC5FC51BAD74B59 (JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * __this, String_t* ___json_text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader__ctor_mFB752190E3EE77764F30486F2CC5FC51BAD74B59_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___json_text0;
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_1 = (StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 *)il2cpp_codegen_object_new(StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12_il2cpp_TypeInfo_var);
		StringReader__ctor_mA55383C19EFBC075E762145D88F15A2B8B0CDA17(L_1, L_0, /*hidden argument*/NULL);
		JsonReader__ctor_m7CBFB7FEA5BB26A7FCE36B4F88AB573AD7C84F9D(__this, L_1, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void JsonReader__ctor_m7CBFB7FEA5BB26A7FCE36B4F88AB573AD7C84F9D (JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * __this, TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * ___reader0, bool ___owned1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader__ctor_m7CBFB7FEA5BB26A7FCE36B4F88AB573AD7C84F9D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * L_0 = ___reader0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral24B55FE81E9E7B11798D3A4E4677DD48FFC81559, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, JsonReader__ctor_m7CBFB7FEA5BB26A7FCE36B4F88AB573AD7C84F9D_RuntimeMethod_var);
	}

IL_0014:
	{
		__this->set_parser_in_string_7((bool)0);
		__this->set_parser_return_8((bool)0);
		__this->set_read_started_9((bool)0);
		Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868 * L_2 = (Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868 *)il2cpp_codegen_object_new(Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868_il2cpp_TypeInfo_var);
		Stack_1__ctor_mBE1E29EA2DD08B28D90EE0863F7ABAAB1AB72346(L_2, /*hidden argument*/Stack_1__ctor_mBE1E29EA2DD08B28D90EE0863F7ABAAB1AB72346_RuntimeMethod_var);
		__this->set_automaton_stack_1(L_2);
		Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868 * L_3 = __this->get_automaton_stack_1();
		NullCheck(L_3);
		Stack_1_Push_mD3B46B9F2D18C0A81C61D3789929F5A5A1E0E11A(L_3, ((int32_t)65553), /*hidden argument*/Stack_1_Push_mD3B46B9F2D18C0A81C61D3789929F5A5A1E0E11A_RuntimeMethod_var);
		Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868 * L_4 = __this->get_automaton_stack_1();
		NullCheck(L_4);
		Stack_1_Push_mD3B46B9F2D18C0A81C61D3789929F5A5A1E0E11A(L_4, ((int32_t)65543), /*hidden argument*/Stack_1_Push_mD3B46B9F2D18C0A81C61D3789929F5A5A1E0E11A_RuntimeMethod_var);
		TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * L_5 = ___reader0;
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_6 = (Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 *)il2cpp_codegen_object_new(Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873_il2cpp_TypeInfo_var);
		Lexer__ctor_mD352649398A906A9105691F6BCA996FC5E97C2B3(L_6, L_5, /*hidden argument*/NULL);
		__this->set_lexer_6(L_6);
		__this->set_end_of_input_5((bool)0);
		__this->set_end_of_json_4((bool)0);
		TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * L_7 = ___reader0;
		__this->set_reader_10(L_7);
		bool L_8 = ___owned1;
		__this->set_reader_is_owned_11(L_8);
		return;
	}
}
// System.Void LitJson.JsonReader::PopulateParseTable()
extern "C" IL2CPP_METHOD_ATTR void JsonReader_PopulateParseTable_m37392D9BABC41EEFC913064C0A37B68274CF4041 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_PopulateParseTable_m37392D9BABC41EEFC913064C0A37B68274CF4041_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_0 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_1 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_2 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_3 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_4 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_5 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_6 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_7 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_8 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_9 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_10 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_11 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_12 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_13 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_14 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_15 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_16 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_17 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_18 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_19 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_20 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_21 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_22 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_23 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_24 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_25 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_26 = NULL;
	{
		Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3 * L_0 = (Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3 *)il2cpp_codegen_object_new(Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD384100234657B6EA59FD1256FE13207C5E62EE8(L_0, /*hidden argument*/Dictionary_2__ctor_mD384100234657B6EA59FD1256FE13207C5E62EE8_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0_il2cpp_TypeInfo_var);
		((JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0_il2cpp_TypeInfo_var))->set_parse_table_0(L_0);
		JsonReader_TableAddRow_m0852CA4BED511145AE875DFA816563A79BC5F770(((int32_t)65548), /*hidden argument*/NULL);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_1 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_1;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_2 = V_0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)91));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_3 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65549));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_4 = V_0;
		JsonReader_TableAddCol_mC5FF83B1CB2223195DC7517406E2465F166B2408(((int32_t)65548), ((int32_t)91), L_4, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m0852CA4BED511145AE875DFA816563A79BC5F770(((int32_t)65549), /*hidden argument*/NULL);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_5 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)3);
		V_1 = L_5;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_6 = V_1;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65550));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_7 = V_1;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65551));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_8 = V_1;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)93));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_9 = V_1;
		JsonReader_TableAddCol_mC5FF83B1CB2223195DC7517406E2465F166B2408(((int32_t)65549), ((int32_t)34), L_9, /*hidden argument*/NULL);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_10 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)3);
		V_2 = L_10;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_11 = V_2;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65550));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_12 = V_2;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65551));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_13 = V_2;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)93));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_14 = V_2;
		JsonReader_TableAddCol_mC5FF83B1CB2223195DC7517406E2465F166B2408(((int32_t)65549), ((int32_t)91), L_14, /*hidden argument*/NULL);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_15 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)1);
		V_3 = L_15;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_16 = V_3;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)93));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_17 = V_3;
		JsonReader_TableAddCol_mC5FF83B1CB2223195DC7517406E2465F166B2408(((int32_t)65549), ((int32_t)93), L_17, /*hidden argument*/NULL);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_18 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)3);
		V_4 = L_18;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_19 = V_4;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65550));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_20 = V_4;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65551));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_21 = V_4;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)93));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_22 = V_4;
		JsonReader_TableAddCol_mC5FF83B1CB2223195DC7517406E2465F166B2408(((int32_t)65549), ((int32_t)123), L_22, /*hidden argument*/NULL);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_23 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)3);
		V_5 = L_23;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_24 = V_5;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65550));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_25 = V_5;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65551));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_26 = V_5;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)93));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_27 = V_5;
		JsonReader_TableAddCol_mC5FF83B1CB2223195DC7517406E2465F166B2408(((int32_t)65549), ((int32_t)65537), L_27, /*hidden argument*/NULL);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_28 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)3);
		V_6 = L_28;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_29 = V_6;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65550));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_30 = V_6;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65551));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_31 = V_6;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)93));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_32 = V_6;
		JsonReader_TableAddCol_mC5FF83B1CB2223195DC7517406E2465F166B2408(((int32_t)65549), ((int32_t)65538), L_32, /*hidden argument*/NULL);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_33 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)3);
		V_7 = L_33;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_34 = V_7;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65550));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_35 = V_7;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65551));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_36 = V_7;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)93));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_37 = V_7;
		JsonReader_TableAddCol_mC5FF83B1CB2223195DC7517406E2465F166B2408(((int32_t)65549), ((int32_t)65539), L_37, /*hidden argument*/NULL);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_38 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)3);
		V_8 = L_38;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_39 = V_8;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65550));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_40 = V_8;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65551));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_41 = V_8;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)93));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_42 = V_8;
		JsonReader_TableAddCol_mC5FF83B1CB2223195DC7517406E2465F166B2408(((int32_t)65549), ((int32_t)65540), L_42, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m0852CA4BED511145AE875DFA816563A79BC5F770(((int32_t)65544), /*hidden argument*/NULL);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_43 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)2);
		V_9 = L_43;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_44 = V_9;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)123));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_45 = V_9;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65545));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_46 = V_9;
		JsonReader_TableAddCol_mC5FF83B1CB2223195DC7517406E2465F166B2408(((int32_t)65544), ((int32_t)123), L_46, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m0852CA4BED511145AE875DFA816563A79BC5F770(((int32_t)65545), /*hidden argument*/NULL);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_47 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)3);
		V_10 = L_47;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_48 = V_10;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65546));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_49 = V_10;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65547));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_50 = V_10;
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)125));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_51 = V_10;
		JsonReader_TableAddCol_mC5FF83B1CB2223195DC7517406E2465F166B2408(((int32_t)65545), ((int32_t)34), L_51, /*hidden argument*/NULL);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_52 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)1);
		V_11 = L_52;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_53 = V_11;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)125));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_54 = V_11;
		JsonReader_TableAddCol_mC5FF83B1CB2223195DC7517406E2465F166B2408(((int32_t)65545), ((int32_t)125), L_54, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m0852CA4BED511145AE875DFA816563A79BC5F770(((int32_t)65546), /*hidden argument*/NULL);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_55 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)3);
		V_12 = L_55;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_56 = V_12;
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65552));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_57 = V_12;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)58));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_58 = V_12;
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)65550));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_59 = V_12;
		JsonReader_TableAddCol_mC5FF83B1CB2223195DC7517406E2465F166B2408(((int32_t)65546), ((int32_t)34), L_59, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m0852CA4BED511145AE875DFA816563A79BC5F770(((int32_t)65547), /*hidden argument*/NULL);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_60 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)3);
		V_13 = L_60;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_61 = V_13;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)44));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_62 = V_13;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65546));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_63 = V_13;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)65547));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_64 = V_13;
		JsonReader_TableAddCol_mC5FF83B1CB2223195DC7517406E2465F166B2408(((int32_t)65547), ((int32_t)44), L_64, /*hidden argument*/NULL);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_65 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)1);
		V_14 = L_65;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_66 = V_14;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65554));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_67 = V_14;
		JsonReader_TableAddCol_mC5FF83B1CB2223195DC7517406E2465F166B2408(((int32_t)65547), ((int32_t)125), L_67, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m0852CA4BED511145AE875DFA816563A79BC5F770(((int32_t)65552), /*hidden argument*/NULL);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_68 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)3);
		V_15 = L_68;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_69 = V_15;
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)34));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_70 = V_15;
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65541));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_71 = V_15;
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)34));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_72 = V_15;
		JsonReader_TableAddCol_mC5FF83B1CB2223195DC7517406E2465F166B2408(((int32_t)65552), ((int32_t)34), L_72, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m0852CA4BED511145AE875DFA816563A79BC5F770(((int32_t)65543), /*hidden argument*/NULL);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_73 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)1);
		V_16 = L_73;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_74 = V_16;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65548));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_75 = V_16;
		JsonReader_TableAddCol_mC5FF83B1CB2223195DC7517406E2465F166B2408(((int32_t)65543), ((int32_t)91), L_75, /*hidden argument*/NULL);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_76 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)1);
		V_17 = L_76;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_77 = V_17;
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65544));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_78 = V_17;
		JsonReader_TableAddCol_mC5FF83B1CB2223195DC7517406E2465F166B2408(((int32_t)65543), ((int32_t)123), L_78, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m0852CA4BED511145AE875DFA816563A79BC5F770(((int32_t)65550), /*hidden argument*/NULL);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_79 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)1);
		V_18 = L_79;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_80 = V_18;
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65552));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_81 = V_18;
		JsonReader_TableAddCol_mC5FF83B1CB2223195DC7517406E2465F166B2408(((int32_t)65550), ((int32_t)34), L_81, /*hidden argument*/NULL);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_82 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)1);
		V_19 = L_82;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_83 = V_19;
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65548));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_84 = V_19;
		JsonReader_TableAddCol_mC5FF83B1CB2223195DC7517406E2465F166B2408(((int32_t)65550), ((int32_t)91), L_84, /*hidden argument*/NULL);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_85 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)1);
		V_20 = L_85;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_86 = V_20;
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65544));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_87 = V_20;
		JsonReader_TableAddCol_mC5FF83B1CB2223195DC7517406E2465F166B2408(((int32_t)65550), ((int32_t)123), L_87, /*hidden argument*/NULL);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_88 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)1);
		V_21 = L_88;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_89 = V_21;
		NullCheck(L_89);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65537));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_90 = V_21;
		JsonReader_TableAddCol_mC5FF83B1CB2223195DC7517406E2465F166B2408(((int32_t)65550), ((int32_t)65537), L_90, /*hidden argument*/NULL);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_91 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)1);
		V_22 = L_91;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_92 = V_22;
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65538));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_93 = V_22;
		JsonReader_TableAddCol_mC5FF83B1CB2223195DC7517406E2465F166B2408(((int32_t)65550), ((int32_t)65538), L_93, /*hidden argument*/NULL);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_94 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)1);
		V_23 = L_94;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_95 = V_23;
		NullCheck(L_95);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65539));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_96 = V_23;
		JsonReader_TableAddCol_mC5FF83B1CB2223195DC7517406E2465F166B2408(((int32_t)65550), ((int32_t)65539), L_96, /*hidden argument*/NULL);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_97 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)1);
		V_24 = L_97;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_98 = V_24;
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65540));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_99 = V_24;
		JsonReader_TableAddCol_mC5FF83B1CB2223195DC7517406E2465F166B2408(((int32_t)65550), ((int32_t)65540), L_99, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m0852CA4BED511145AE875DFA816563A79BC5F770(((int32_t)65551), /*hidden argument*/NULL);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_100 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)3);
		V_25 = L_100;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_101 = V_25;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)44));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_102 = V_25;
		NullCheck(L_102);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65550));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_103 = V_25;
		NullCheck(L_103);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)65551));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_104 = V_25;
		JsonReader_TableAddCol_mC5FF83B1CB2223195DC7517406E2465F166B2408(((int32_t)65551), ((int32_t)44), L_104, /*hidden argument*/NULL);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_105 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)1);
		V_26 = L_105;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_106 = V_26;
		NullCheck(L_106);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65554));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_107 = V_26;
		JsonReader_TableAddCol_mC5FF83B1CB2223195DC7517406E2465F166B2408(((int32_t)65551), ((int32_t)93), L_107, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonReader::TableAddCol(LitJson.ParserToken,System.Int32,System.Int32[])
extern "C" IL2CPP_METHOD_ATTR void JsonReader_TableAddCol_mC5FF83B1CB2223195DC7517406E2465F166B2408 (int32_t ___row0, int32_t ___col1, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___symbols2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_TableAddCol_mC5FF83B1CB2223195DC7517406E2465F166B2408_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0_il2cpp_TypeInfo_var))->get_parse_table_0();
		int32_t L_1 = ___row0;
		NullCheck(L_0);
		RuntimeObject* L_2 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::get_Item(!0) */, IDictionary_2_tFA3AB64BFA07F7DE6104192003EB5CAD7A05F4EF_il2cpp_TypeInfo_var, L_0, L_1);
		int32_t L_3 = ___col1;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_4 = ___symbols2;
		NullCheck(L_2);
		InterfaceActionInvoker2< int32_t, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>::Add(!0,!1) */, IDictionary_2_tEB678B1A5DD39823F992E9CC72BDF1890F8DBF75_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		return;
	}
}
// System.Void LitJson.JsonReader::TableAddRow(LitJson.ParserToken)
extern "C" IL2CPP_METHOD_ATTR void JsonReader_TableAddRow_m0852CA4BED511145AE875DFA816563A79BC5F770 (int32_t ___rule0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_TableAddRow_m0852CA4BED511145AE875DFA816563A79BC5F770_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0_il2cpp_TypeInfo_var))->get_parse_table_0();
		int32_t L_1 = ___rule0;
		Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE * L_2 = (Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE *)il2cpp_codegen_object_new(Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m148696D175A4AE09615CDF2F8F1D21A729C0E155(L_2, /*hidden argument*/Dictionary_2__ctor_m148696D175A4AE09615CDF2F8F1D21A729C0E155_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::Add(!0,!1) */, IDictionary_2_tFA3AB64BFA07F7DE6104192003EB5CAD7A05F4EF_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void LitJson.JsonReader::ProcessNumber(System.String)
extern "C" IL2CPP_METHOD_ATTR void JsonReader_ProcessNumber_m8F8A03BDAF38BD0C2DACCBB4D491FAD2A3ED1BA9 (JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * __this, String_t* ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_ProcessNumber_m8F8A03BDAF38BD0C2DACCBB4D491FAD2A3ED1BA9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	{
		String_t* L_0 = ___number0;
		NullCheck(L_0);
		int32_t L_1 = String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD(L_0, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = ___number0;
		NullCheck(L_2);
		int32_t L_3 = String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD(L_2, ((int32_t)101), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_4 = ___number0;
		NullCheck(L_4);
		int32_t L_5 = String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD(L_4, ((int32_t)69), /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_003f;
		}
	}

IL_0021:
	{
		String_t* L_6 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var);
		bool L_7 = Double_TryParse_m9F4A499E432413DC960D6441EE3EC50C2A9CB211(L_6, (double*)(&V_0), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		__this->set_token_13(8);
		double L_8 = V_0;
		double L_9 = L_8;
		RuntimeObject * L_10 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_9);
		__this->set_token_value_12(L_10);
		return;
	}

IL_003f:
	{
		String_t* L_11 = ___number0;
		bool L_12 = Int32_TryParse_m03D31CAB7050E8286A8A90711C896B181006AD00(L_11, (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_005d;
		}
	}
	{
		__this->set_token_13(6);
		int32_t L_13 = V_1;
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_14);
		__this->set_token_value_12(L_15);
		return;
	}

IL_005d:
	{
		String_t* L_16 = ___number0;
		bool L_17 = Int64_TryParse_m5C60567D82BACC7D9C18F7A9A83025FC94AD0E95(L_16, (int64_t*)(&V_2), /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_007b;
		}
	}
	{
		__this->set_token_13(7);
		int64_t L_18 = V_2;
		int64_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_19);
		__this->set_token_value_12(L_20);
		return;
	}

IL_007b:
	{
		__this->set_token_13(6);
		int32_t L_21 = 0;
		RuntimeObject * L_22 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_21);
		__this->set_token_value_12(L_22);
		return;
	}
}
// System.Void LitJson.JsonReader::ProcessSymbol()
extern "C" IL2CPP_METHOD_ATTR void JsonReader_ProcessSymbol_m8D765AA427910FC0DB42A6D90E97A5CC4A5D95A8 (JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_ProcessSymbol_m8D765AA427910FC0DB42A6D90E97A5CC4A5D95A8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_0019;
		}
	}
	{
		__this->set_token_13(4);
		__this->set_parser_return_8((bool)1);
		return;
	}

IL_0019:
	{
		int32_t L_1 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_0032;
		}
	}
	{
		__this->set_token_13(5);
		__this->set_parser_return_8((bool)1);
		return;
	}

IL_0032:
	{
		int32_t L_2 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)123)))))
		{
			goto IL_004b;
		}
	}
	{
		__this->set_token_13(1);
		__this->set_parser_return_8((bool)1);
		return;
	}

IL_004b:
	{
		int32_t L_3 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_0064;
		}
	}
	{
		__this->set_token_13(3);
		__this->set_parser_return_8((bool)1);
		return;
	}

IL_0064:
	{
		int32_t L_4 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_009d;
		}
	}
	{
		bool L_5 = __this->get_parser_in_string_7();
		if (!L_5)
		{
			goto IL_0085;
		}
	}
	{
		__this->set_parser_in_string_7((bool)0);
		__this->set_parser_return_8((bool)1);
		return;
	}

IL_0085:
	{
		int32_t L_6 = __this->get_token_13();
		if (L_6)
		{
			goto IL_0095;
		}
	}
	{
		__this->set_token_13(((int32_t)9));
	}

IL_0095:
	{
		__this->set_parser_in_string_7((bool)1);
		return;
	}

IL_009d:
	{
		int32_t L_7 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)65541)))))
		{
			goto IL_00bc;
		}
	}
	{
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_8 = __this->get_lexer_6();
		NullCheck(L_8);
		String_t* L_9 = Lexer_get_StringValue_m9E4575A40E16731552418AD2E084E2B3221D7B5A(L_8, /*hidden argument*/NULL);
		__this->set_token_value_12(L_9);
		return;
	}

IL_00bc:
	{
		int32_t L_10 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)65539)))))
		{
			goto IL_00e5;
		}
	}
	{
		__this->set_token_13(((int32_t)10));
		bool L_11 = ((bool)0);
		RuntimeObject * L_12 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_11);
		__this->set_token_value_12(L_12);
		__this->set_parser_return_8((bool)1);
		return;
	}

IL_00e5:
	{
		int32_t L_13 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)65540)))))
		{
			goto IL_0102;
		}
	}
	{
		__this->set_token_13(((int32_t)11));
		__this->set_parser_return_8((bool)1);
		return;
	}

IL_0102:
	{
		int32_t L_14 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)65537)))))
		{
			goto IL_0128;
		}
	}
	{
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_15 = __this->get_lexer_6();
		NullCheck(L_15);
		String_t* L_16 = Lexer_get_StringValue_m9E4575A40E16731552418AD2E084E2B3221D7B5A(L_15, /*hidden argument*/NULL);
		JsonReader_ProcessNumber_m8F8A03BDAF38BD0C2DACCBB4D491FAD2A3ED1BA9(__this, L_16, /*hidden argument*/NULL);
		__this->set_parser_return_8((bool)1);
		return;
	}

IL_0128:
	{
		int32_t L_17 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)65546)))))
		{
			goto IL_013d;
		}
	}
	{
		__this->set_token_13(2);
		return;
	}

IL_013d:
	{
		int32_t L_18 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)65538)))))
		{
			goto IL_0165;
		}
	}
	{
		__this->set_token_13(((int32_t)10));
		bool L_19 = ((bool)1);
		RuntimeObject * L_20 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_19);
		__this->set_token_value_12(L_20);
		__this->set_parser_return_8((bool)1);
	}

IL_0165:
	{
		return;
	}
}
// System.Boolean LitJson.JsonReader::ReadToken()
extern "C" IL2CPP_METHOD_ATTR bool JsonReader_ReadToken_m2D28BC759EE6B9ABB147846910925DB02565363F (JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_end_of_input_5();
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_1 = __this->get_lexer_6();
		NullCheck(L_1);
		Lexer_NextToken_mF14B4AC849AC57E930D83C06A7E22BF6278C44B2(L_1, /*hidden argument*/NULL);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_2 = __this->get_lexer_6();
		NullCheck(L_2);
		bool L_3 = Lexer_get_EndOfInput_mDF1EAF83C6582DC0C8543A627C53D919E038CDC5(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		JsonReader_Close_m16C8B367EB5508DC3BBA3F7889C30C06608B0BD9(__this, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_002b:
	{
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_4 = __this->get_lexer_6();
		NullCheck(L_4);
		int32_t L_5 = Lexer_get_Token_m5879A42B7E53A08082B72CAB70EC0452F010E190(L_4, /*hidden argument*/NULL);
		__this->set_current_input_2(L_5);
		return (bool)1;
	}
}
// System.Void LitJson.JsonReader::Close()
extern "C" IL2CPP_METHOD_ATTR void JsonReader_Close_m16C8B367EB5508DC3BBA3F7889C30C06608B0BD9 (JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_end_of_input_5();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		__this->set_end_of_input_5((bool)1);
		__this->set_end_of_json_4((bool)1);
		bool L_1 = __this->get_reader_is_owned_11();
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * L_2 = __this->get_reader_10();
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(7 /* System.Void System.IO.TextReader::Close() */, L_2);
	}

IL_002a:
	{
		__this->set_reader_10((TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A *)NULL);
		return;
	}
}
// System.Boolean LitJson.JsonReader::Read()
extern "C" IL2CPP_METHOD_ATTR bool JsonReader_Read_m2482C1BFE3E418D79BBBAF792E8F69857D02F5FD (JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_Read_m2482C1BFE3E418D79BBBAF792E8F69857D02F5FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_0 = NULL;
	KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * V_1 = NULL;
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		bool L_0 = __this->get_end_of_input_5();
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		bool L_1 = __this->get_end_of_json_4();
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		__this->set_end_of_json_4((bool)0);
		Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868 * L_2 = __this->get_automaton_stack_1();
		NullCheck(L_2);
		Stack_1_Clear_mD2C5F5995181B9EE7CE01E53E26D16F904AC35BC(L_2, /*hidden argument*/Stack_1_Clear_mD2C5F5995181B9EE7CE01E53E26D16F904AC35BC_RuntimeMethod_var);
		Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868 * L_3 = __this->get_automaton_stack_1();
		NullCheck(L_3);
		Stack_1_Push_mD3B46B9F2D18C0A81C61D3789929F5A5A1E0E11A(L_3, ((int32_t)65553), /*hidden argument*/Stack_1_Push_mD3B46B9F2D18C0A81C61D3789929F5A5A1E0E11A_RuntimeMethod_var);
		Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868 * L_4 = __this->get_automaton_stack_1();
		NullCheck(L_4);
		Stack_1_Push_mD3B46B9F2D18C0A81C61D3789929F5A5A1E0E11A(L_4, ((int32_t)65543), /*hidden argument*/Stack_1_Push_mD3B46B9F2D18C0A81C61D3789929F5A5A1E0E11A_RuntimeMethod_var);
	}

IL_0044:
	{
		__this->set_parser_in_string_7((bool)0);
		__this->set_parser_return_8((bool)0);
		__this->set_token_13(0);
		__this->set_token_value_12(NULL);
		bool L_5 = __this->get_read_started_9();
		if (L_5)
		{
			goto IL_0079;
		}
	}
	{
		__this->set_read_started_9((bool)1);
		bool L_6 = JsonReader_ReadToken_m2D28BC759EE6B9ABB147846910925DB02565363F(__this, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0079;
		}
	}
	{
		return (bool)0;
	}

IL_0079:
	{
		bool L_7 = __this->get_parser_return_8();
		if (!L_7)
		{
			goto IL_009c;
		}
	}
	{
		Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868 * L_8 = __this->get_automaton_stack_1();
		NullCheck(L_8);
		int32_t L_9 = Stack_1_Peek_mCED2BEDAF1531884132F6C4DCC4722A8CE242BE7(L_8, /*hidden argument*/Stack_1_Peek_mCED2BEDAF1531884132F6C4DCC4722A8CE242BE7_RuntimeMethod_var);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)65553)))))
		{
			goto IL_009a;
		}
	}
	{
		__this->set_end_of_json_4((bool)1);
	}

IL_009a:
	{
		return (bool)1;
	}

IL_009c:
	{
		Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868 * L_10 = __this->get_automaton_stack_1();
		NullCheck(L_10);
		int32_t L_11 = Stack_1_Pop_m8B651B069863A65F6004C723598916FBAF2DBEB3(L_10, /*hidden argument*/Stack_1_Pop_m8B651B069863A65F6004C723598916FBAF2DBEB3_RuntimeMethod_var);
		__this->set_current_symbol_3(L_11);
		JsonReader_ProcessSymbol_m8D765AA427910FC0DB42A6D90E97A5CC4A5D95A8(__this, /*hidden argument*/NULL);
		int32_t L_12 = __this->get_current_symbol_3();
		int32_t L_13 = __this->get_current_input_2();
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_00f2;
		}
	}
	{
		bool L_14 = JsonReader_ReadToken_m2D28BC759EE6B9ABB147846910925DB02565363F(__this, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0079;
		}
	}
	{
		Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868 * L_15 = __this->get_automaton_stack_1();
		NullCheck(L_15);
		int32_t L_16 = Stack_1_Peek_mCED2BEDAF1531884132F6C4DCC4722A8CE242BE7(L_15, /*hidden argument*/Stack_1_Peek_mCED2BEDAF1531884132F6C4DCC4722A8CE242BE7_RuntimeMethod_var);
		if ((((int32_t)L_16) == ((int32_t)((int32_t)65553))))
		{
			goto IL_00e6;
		}
	}
	{
		JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886 * L_17 = (JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886 *)il2cpp_codegen_object_new(JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886_il2cpp_TypeInfo_var);
		JsonException__ctor_m620CE615FE1C32AE4A93550F0040CB2CDA99F9D5(L_17, _stringLiteral53C44B2B93C7F97C5385D97F275C54FC27BE59DC, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, NULL, JsonReader_Read_m2482C1BFE3E418D79BBBAF792E8F69857D02F5FD_RuntimeMethod_var);
	}

IL_00e6:
	{
		bool L_18 = __this->get_parser_return_8();
		if (!L_18)
		{
			goto IL_00f0;
		}
	}
	{
		return (bool)1;
	}

IL_00f0:
	{
		return (bool)0;
	}

IL_00f2:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0_il2cpp_TypeInfo_var);
		RuntimeObject* L_19 = ((JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_tF30822FC3017712E65E9B93347F0336447ACC9C0_il2cpp_TypeInfo_var))->get_parse_table_0();
		int32_t L_20 = __this->get_current_symbol_3();
		NullCheck(L_19);
		RuntimeObject* L_21 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::get_Item(!0) */, IDictionary_2_tFA3AB64BFA07F7DE6104192003EB5CAD7A05F4EF_il2cpp_TypeInfo_var, L_19, L_20);
		int32_t L_22 = __this->get_current_input_2();
		NullCheck(L_21);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_23 = InterfaceFuncInvoker1< Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*, int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>::get_Item(!0) */, IDictionary_2_tEB678B1A5DD39823F992E9CC72BDF1890F8DBF75_il2cpp_TypeInfo_var, L_21, L_22);
		V_0 = L_23;
		goto IL_011e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0110;
		throw e;
	}

CATCH_0110:
	{ // begin catch(System.Collections.Generic.KeyNotFoundException)
		V_1 = ((KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 *)__exception_local);
		int32_t L_24 = __this->get_current_input_2();
		KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * L_25 = V_1;
		JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886 * L_26 = (JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886 *)il2cpp_codegen_object_new(JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886_il2cpp_TypeInfo_var);
		JsonException__ctor_m4BE1272AC624246C1CFC342E7531C58939538348(L_26, L_24, L_25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, NULL, JsonReader_Read_m2482C1BFE3E418D79BBBAF792E8F69857D02F5FD_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_011e:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = 0;
		int32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		if ((((int32_t)L_29) == ((int32_t)((int32_t)65554))))
		{
			goto IL_0079;
		}
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_30 = V_0;
		NullCheck(L_30);
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_30)->max_length)))), (int32_t)1));
		goto IL_0145;
	}

IL_0133:
	{
		Stack_1_t5A6D340C6E44680E9C3A9E1864A9787489823868 * L_31 = __this->get_automaton_stack_1();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_32 = V_0;
		int32_t L_33 = V_2;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_31);
		Stack_1_Push_mD3B46B9F2D18C0A81C61D3789929F5A5A1E0E11A(L_31, L_35, /*hidden argument*/Stack_1_Push_mD3B46B9F2D18C0A81C61D3789929F5A5A1E0E11A_RuntimeMethod_var);
		int32_t L_36 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)1));
	}

IL_0145:
	{
		int32_t L_37 = V_2;
		if ((((int32_t)L_37) >= ((int32_t)0)))
		{
			goto IL_0133;
		}
	}
	{
		goto IL_0079;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.JsonWriter::.cctor()
extern "C" IL2CPP_METHOD_ATTR void JsonWriter__cctor_mE5E36773C929D192081AF6583039028D55D43C3B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter__cctor_mE5E36773C929D192081AF6583039028D55D43C3B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_0 = NumberFormatInfo_get_InvariantInfo_m55FDCA552CC3CD15E01E10DBFDD5756AB1DCC54D(/*hidden argument*/NULL);
		((JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0_il2cpp_TypeInfo_var))->set_number_format_0(L_0);
		return;
	}
}
// System.Void LitJson.JsonWriter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void JsonWriter__ctor_m51E07A529AF622FE781FD3E1FFA3B11A1CA8A138 (JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter__ctor_m51E07A529AF622FE781FD3E1FFA3B11A1CA8A138_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_0, /*hidden argument*/NULL);
		__this->set_inst_string_builder_7(L_0);
		StringBuilder_t * L_1 = __this->get_inst_string_builder_7();
		StringWriter_t194EF1526E072B93984370042AA80926C2EB6139 * L_2 = (StringWriter_t194EF1526E072B93984370042AA80926C2EB6139 *)il2cpp_codegen_object_new(StringWriter_t194EF1526E072B93984370042AA80926C2EB6139_il2cpp_TypeInfo_var);
		StringWriter__ctor_m95CECB2AA32BDD586F89DE2DA0EEEFABACB19A28(L_2, L_1, /*hidden argument*/NULL);
		__this->set_writer_10(L_2);
		JsonWriter_Init_m08C9221AAC3014A1C032D1D87FFD237A6F8CE8D8(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::DoValidation(LitJson.Condition)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_DoValidation_m1111EB36B0A8510F899124094E6593F442BAFAB9 (JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * __this, int32_t ___cond0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_DoValidation_m1111EB36B0A8510F899124094E6593F442BAFAB9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599 * L_0 = __this->get_context_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_ExpectingValue_3();
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599 * L_2 = __this->get_context_1();
		WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599 * L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_Count_0();
		NullCheck(L_3);
		L_3->set_Count_0(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
	}

IL_0020:
	{
		bool L_5 = __this->get_validate_9();
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		return;
	}

IL_0029:
	{
		bool L_6 = __this->get_has_reached_end_3();
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886 * L_7 = (JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886 *)il2cpp_codegen_object_new(JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886_il2cpp_TypeInfo_var);
		JsonException__ctor_m620CE615FE1C32AE4A93550F0040CB2CDA99F9D5(L_7, _stringLiteral99335FE5A851B8D6DE6C4F3960B91381442A9C4B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, JsonWriter_DoValidation_m1111EB36B0A8510F899124094E6593F442BAFAB9_RuntimeMethod_var);
	}

IL_003c:
	{
		int32_t L_8 = ___cond0;
		V_0 = L_8;
		int32_t L_9 = V_0;
		switch (L_9)
		{
			case 0:
			{
				goto IL_0059;
			}
			case 1:
			{
				goto IL_0074;
			}
			case 2:
			{
				goto IL_009c;
			}
			case 3:
			{
				goto IL_00c1;
			}
			case 4:
			{
				goto IL_00e6;
			}
		}
	}
	{
		return;
	}

IL_0059:
	{
		WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599 * L_10 = __this->get_context_1();
		NullCheck(L_10);
		bool L_11 = L_10->get_InArray_1();
		if (L_11)
		{
			goto IL_0118;
		}
	}
	{
		JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886 * L_12 = (JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886 *)il2cpp_codegen_object_new(JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886_il2cpp_TypeInfo_var);
		JsonException__ctor_m620CE615FE1C32AE4A93550F0040CB2CDA99F9D5(L_12, _stringLiteral9291AA1658502FAC86A8371BE70913BB2D603283, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NULL, JsonWriter_DoValidation_m1111EB36B0A8510F899124094E6593F442BAFAB9_RuntimeMethod_var);
	}

IL_0074:
	{
		WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599 * L_13 = __this->get_context_1();
		NullCheck(L_13);
		bool L_14 = L_13->get_InObject_2();
		if (!L_14)
		{
			goto IL_0091;
		}
	}
	{
		WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599 * L_15 = __this->get_context_1();
		NullCheck(L_15);
		bool L_16 = L_15->get_ExpectingValue_3();
		if (!L_16)
		{
			goto IL_0118;
		}
	}

IL_0091:
	{
		JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886 * L_17 = (JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886 *)il2cpp_codegen_object_new(JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886_il2cpp_TypeInfo_var);
		JsonException__ctor_m620CE615FE1C32AE4A93550F0040CB2CDA99F9D5(L_17, _stringLiteral97629CE304162C43F08FCEFEB814CC3CB6724728, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, NULL, JsonWriter_DoValidation_m1111EB36B0A8510F899124094E6593F442BAFAB9_RuntimeMethod_var);
	}

IL_009c:
	{
		WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599 * L_18 = __this->get_context_1();
		NullCheck(L_18);
		bool L_19 = L_18->get_InObject_2();
		if (!L_19)
		{
			goto IL_0118;
		}
	}
	{
		WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599 * L_20 = __this->get_context_1();
		NullCheck(L_20);
		bool L_21 = L_20->get_ExpectingValue_3();
		if (L_21)
		{
			goto IL_0118;
		}
	}
	{
		JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886 * L_22 = (JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886 *)il2cpp_codegen_object_new(JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886_il2cpp_TypeInfo_var);
		JsonException__ctor_m620CE615FE1C32AE4A93550F0040CB2CDA99F9D5(L_22, _stringLiteralE6816349A8502B93DEEF3110B026078572F9A015, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, NULL, JsonWriter_DoValidation_m1111EB36B0A8510F899124094E6593F442BAFAB9_RuntimeMethod_var);
	}

IL_00c1:
	{
		WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599 * L_23 = __this->get_context_1();
		NullCheck(L_23);
		bool L_24 = L_23->get_InObject_2();
		if (!L_24)
		{
			goto IL_00db;
		}
	}
	{
		WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599 * L_25 = __this->get_context_1();
		NullCheck(L_25);
		bool L_26 = L_25->get_ExpectingValue_3();
		if (!L_26)
		{
			goto IL_0118;
		}
	}

IL_00db:
	{
		JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886 * L_27 = (JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886 *)il2cpp_codegen_object_new(JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886_il2cpp_TypeInfo_var);
		JsonException__ctor_m620CE615FE1C32AE4A93550F0040CB2CDA99F9D5(L_27, _stringLiteralC08ECE7D87BEA19F5BEB3929F2645FAA2A46714C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, NULL, JsonWriter_DoValidation_m1111EB36B0A8510F899124094E6593F442BAFAB9_RuntimeMethod_var);
	}

IL_00e6:
	{
		WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599 * L_28 = __this->get_context_1();
		NullCheck(L_28);
		bool L_29 = L_28->get_InArray_1();
		if (L_29)
		{
			goto IL_0118;
		}
	}
	{
		WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599 * L_30 = __this->get_context_1();
		NullCheck(L_30);
		bool L_31 = L_30->get_InObject_2();
		if (!L_31)
		{
			goto IL_010d;
		}
	}
	{
		WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599 * L_32 = __this->get_context_1();
		NullCheck(L_32);
		bool L_33 = L_32->get_ExpectingValue_3();
		if (L_33)
		{
			goto IL_0118;
		}
	}

IL_010d:
	{
		JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886 * L_34 = (JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886 *)il2cpp_codegen_object_new(JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886_il2cpp_TypeInfo_var);
		JsonException__ctor_m620CE615FE1C32AE4A93550F0040CB2CDA99F9D5(L_34, _stringLiteralFAE13CA253363E593621DD7CCF4DF1DCA39E2817, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, NULL, JsonWriter_DoValidation_m1111EB36B0A8510F899124094E6593F442BAFAB9_RuntimeMethod_var);
	}

IL_0118:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Init()
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Init_m08C9221AAC3014A1C032D1D87FFD237A6F8CE8D8 (JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Init_m08C9221AAC3014A1C032D1D87FFD237A6F8CE8D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_has_reached_end_3((bool)0);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_0 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set_hex_seq_4(L_0);
		__this->set_indentation_5(0);
		__this->set_indent_value_6(4);
		__this->set_pretty_print_8((bool)0);
		__this->set_validate_9((bool)1);
		Stack_1_t9BE5E659552248E69D386D8ABF17AAB698FA87E8 * L_1 = (Stack_1_t9BE5E659552248E69D386D8ABF17AAB698FA87E8 *)il2cpp_codegen_object_new(Stack_1_t9BE5E659552248E69D386D8ABF17AAB698FA87E8_il2cpp_TypeInfo_var);
		Stack_1__ctor_mB4717FF9B962276A435CD5E16AF1F716161D0137(L_1, /*hidden argument*/Stack_1__ctor_mB4717FF9B962276A435CD5E16AF1F716161D0137_RuntimeMethod_var);
		__this->set_ctx_stack_2(L_1);
		WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599 * L_2 = (WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599 *)il2cpp_codegen_object_new(WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599_il2cpp_TypeInfo_var);
		WriterContext__ctor_m66DB156E3CD81CDF68370F9DE5B03E03DEB9B380(L_2, /*hidden argument*/NULL);
		__this->set_context_1(L_2);
		Stack_1_t9BE5E659552248E69D386D8ABF17AAB698FA87E8 * L_3 = __this->get_ctx_stack_2();
		WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599 * L_4 = __this->get_context_1();
		NullCheck(L_3);
		Stack_1_Push_m5682E3BBD2F2B57246BEEEF0C92D1E6A6B8E26C3(L_3, L_4, /*hidden argument*/Stack_1_Push_m5682E3BBD2F2B57246BEEEF0C92D1E6A6B8E26C3_RuntimeMethod_var);
		return;
	}
}
// System.Void LitJson.JsonWriter::IntToHex(System.Int32,System.Char[])
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_IntToHex_mD77139916243FD91C781A9783E2FCD05F55C1E76 (int32_t ___n0, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___hex1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_1 = 0;
		goto IL_0030;
	}

IL_0004:
	{
		int32_t L_0 = ___n0;
		V_0 = ((int32_t)((int32_t)L_0%(int32_t)((int32_t)16)));
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)10))))
		{
			goto IL_001a;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_2 = ___hex1;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)3, (int32_t)L_3))), (Il2CppChar)(((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)48), (int32_t)L_4))))));
		goto IL_0027;
	}

IL_001a:
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_5 = ___hex1;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)3, (int32_t)L_6))), (Il2CppChar)(((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)65), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)10)))))))));
	}

IL_0027:
	{
		int32_t L_8 = ___n0;
		___n0 = ((int32_t)((int32_t)L_8>>(int32_t)4));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0030:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)4)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Put(System.String)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Put_mB5F8242575AC21AC9243FEFE475B42D417F7E947 (JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = __this->get_pretty_print_8();
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599 * L_1 = __this->get_context_1();
		NullCheck(L_1);
		bool L_2 = L_1->get_ExpectingValue_3();
		if (L_2)
		{
			goto IL_0033;
		}
	}
	{
		V_0 = 0;
		goto IL_002a;
	}

IL_0019:
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_3 = __this->get_writer_10();
		NullCheck(L_3);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_3, ((int32_t)32));
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_002a:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = __this->get_indentation_5();
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0019;
		}
	}

IL_0033:
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_7 = __this->get_writer_10();
		String_t* L_8 = ___str0;
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_7, L_8);
		return;
	}
}
// System.Void LitJson.JsonWriter::PutNewline()
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_m0C412AF3F8402923BE66AA885C1DF6321FED879A (JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * __this, const RuntimeMethod* method)
{
	{
		JsonWriter_PutNewline_m272DAE164C21F5C8350E2C21A5D96F0254FB22C8(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::PutNewline(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_m272DAE164C21F5C8350E2C21A5D96F0254FB22C8 (JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * __this, bool ___add_comma0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___add_comma0;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599 * L_1 = __this->get_context_1();
		NullCheck(L_1);
		bool L_2 = L_1->get_ExpectingValue_3();
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599 * L_3 = __this->get_context_1();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_Count_0();
		if ((((int32_t)L_4) <= ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_5 = __this->get_writer_10();
		NullCheck(L_5);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_5, ((int32_t)44));
	}

IL_002b:
	{
		bool L_6 = __this->get_pretty_print_8();
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599 * L_7 = __this->get_context_1();
		NullCheck(L_7);
		bool L_8 = L_7->get_ExpectingValue_3();
		if (L_8)
		{
			goto IL_004d;
		}
	}
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_9 = __this->get_writer_10();
		NullCheck(L_9);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_9, ((int32_t)10));
	}

IL_004d:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::PutString(System.String)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_PutString_m479DD3C59AF9FF47B1BDBCEE57AD51525261BB7F (JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_PutString_m479DD3C59AF9FF47B1BDBCEE57AD51525261BB7F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		JsonWriter_Put_mB5F8242575AC21AC9243FEFE475B42D417F7E947(__this, L_0, /*hidden argument*/NULL);
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_1 = __this->get_writer_10();
		NullCheck(L_1);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_1, ((int32_t)34));
		String_t* L_2 = ___str0;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0145;
	}

IL_0026:
	{
		String_t* L_4 = ___str0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		Il2CppChar L_6 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		Il2CppChar L_7 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)8)))
		{
			case 0:
			{
				goto IL_00d2;
			}
			case 1:
			{
				goto IL_0087;
			}
			case 2:
			{
				goto IL_005d;
			}
			case 3:
			{
				goto IL_00e4;
			}
			case 4:
			{
				goto IL_00c0;
			}
			case 5:
			{
				goto IL_0072;
			}
		}
	}
	{
		Il2CppChar L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)34))))
		{
			goto IL_009c;
		}
	}
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)92))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_00e4;
	}

IL_005d:
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_10 = __this->get_writer_10();
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_10, _stringLiteralEF7E6794CA9C6A06B54B66F279237FB8DAAAEEA8);
		goto IL_0141;
	}

IL_0072:
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_11 = __this->get_writer_10();
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_11, _stringLiteralF12C84902108895980702C88DB900CEEA2D2EC01);
		goto IL_0141;
	}

IL_0087:
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_12 = __this->get_writer_10();
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, _stringLiteral8BF81043E29DFC96A6FE1F30F7116F552DE6E7D7);
		goto IL_0141;
	}

IL_009c:
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_13 = __this->get_writer_10();
		NullCheck(L_13);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_13, ((int32_t)92));
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_14 = __this->get_writer_10();
		String_t* L_15 = ___str0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		Il2CppChar L_17 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_14, L_17);
		goto IL_0141;
	}

IL_00c0:
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_18 = __this->get_writer_10();
		NullCheck(L_18);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_18, _stringLiteral794A729D2E4FFBB094FEC03AE9B3ACD219371385);
		goto IL_0141;
	}

IL_00d2:
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_19 = __this->get_writer_10();
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_19, _stringLiteral4629CA1B60E263BDC4326334B23323E0434717A5);
		goto IL_0141;
	}

IL_00e4:
	{
		String_t* L_20 = ___str0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		Il2CppChar L_22 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_20, L_21, /*hidden argument*/NULL);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)32))))
		{
			goto IL_010e;
		}
	}
	{
		String_t* L_23 = ___str0;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		Il2CppChar L_25 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_23, L_24, /*hidden argument*/NULL);
		if ((((int32_t)L_25) > ((int32_t)((int32_t)126))))
		{
			goto IL_010e;
		}
	}
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_26 = __this->get_writer_10();
		String_t* L_27 = ___str0;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		Il2CppChar L_29 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_26, L_29);
		goto IL_0141;
	}

IL_010e:
	{
		String_t* L_30 = ___str0;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		Il2CppChar L_32 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_30, L_31, /*hidden argument*/NULL);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_33 = __this->get_hex_seq_4();
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0_il2cpp_TypeInfo_var);
		JsonWriter_IntToHex_mD77139916243FD91C781A9783E2FCD05F55C1E76(L_32, L_33, /*hidden argument*/NULL);
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_34 = __this->get_writer_10();
		NullCheck(L_34);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_34, _stringLiteral153809851B33CE0CDCE06E5A572C675E18D0C3B5);
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_35 = __this->get_writer_10();
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_36 = __this->get_hex_seq_4();
		NullCheck(L_35);
		VirtActionInvoker1< CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.Char[]) */, L_35, L_36);
	}

IL_0141:
	{
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_0145:
	{
		int32_t L_38 = V_1;
		int32_t L_39 = V_0;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0026;
		}
	}
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_40 = __this->get_writer_10();
		NullCheck(L_40);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_40, ((int32_t)34));
		return;
	}
}
// System.String LitJson.JsonWriter::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* JsonWriter_ToString_m6896FF4990E7CB5C8C5EED2A4E86451D4683EEF8 (JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_ToString_m6896FF4990E7CB5C8C5EED2A4E86451D4683EEF8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = __this->get_inst_string_builder_7();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_1;
	}

IL_000e:
	{
		StringBuilder_t * L_2 = __this->get_inst_string_builder_7();
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		return L_3;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Decimal)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Write_m5D53C45B3D2664C22FE882EF407A9BD60D2FAC37 (JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * __this, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m5D53C45B3D2664C22FE882EF407A9BD60D2FAC37_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m1111EB36B0A8510F899124094E6593F442BAFAB9(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m0C412AF3F8402923BE66AA885C1DF6321FED879A(__this, /*hidden argument*/NULL);
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0_il2cpp_TypeInfo_var);
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_1 = ((JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		String_t* L_2 = Convert_ToString_mC3AC6F8BB681D0987C450396DCE22BAFAF5CB18D(L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_mB5F8242575AC21AC9243FEFE475B42D417F7E947(__this, L_2, /*hidden argument*/NULL);
		WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599 * L_3 = __this->get_context_1();
		NullCheck(L_3);
		L_3->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Write_m22DC3BB70AAE9EB12E5E2AC779EBAB234D24CA1A (JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * __this, int32_t ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m22DC3BB70AAE9EB12E5E2AC779EBAB234D24CA1A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m1111EB36B0A8510F899124094E6593F442BAFAB9(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m0C412AF3F8402923BE66AA885C1DF6321FED879A(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0_il2cpp_TypeInfo_var);
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_1 = ((JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		String_t* L_2 = Convert_ToString_m013DD2590D9DCBA00A8A4FEEBE7FC2DBD4DDBC70(L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_mB5F8242575AC21AC9243FEFE475B42D417F7E947(__this, L_2, /*hidden argument*/NULL);
		WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599 * L_3 = __this->get_context_1();
		NullCheck(L_3);
		L_3->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.String)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Write_m99731AB0DA1D5A4A96747C5A632EF2E7CC31BF10 (JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m99731AB0DA1D5A4A96747C5A632EF2E7CC31BF10_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m1111EB36B0A8510F899124094E6593F442BAFAB9(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m0C412AF3F8402923BE66AA885C1DF6321FED879A(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___str0;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		JsonWriter_Put_mB5F8242575AC21AC9243FEFE475B42D417F7E947(__this, _stringLiteral2BE88CA4242C76E8253AC62474851065032D6833, /*hidden argument*/NULL);
		goto IL_0024;
	}

IL_001d:
	{
		String_t* L_1 = ___str0;
		JsonWriter_PutString_m479DD3C59AF9FF47B1BDBCEE57AD51525261BB7F(__this, L_1, /*hidden argument*/NULL);
	}

IL_0024:
	{
		WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599 * L_2 = __this->get_context_1();
		NullCheck(L_2);
		L_2->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR void JsonWriter_Write_m8C8059D41B0D44F6AAA4C6DC2B3354E3E65A13E5 (JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0 * __this, uint64_t ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m8C8059D41B0D44F6AAA4C6DC2B3354E3E65A13E5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m1111EB36B0A8510F899124094E6593F442BAFAB9(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m0C412AF3F8402923BE66AA885C1DF6321FED879A(__this, /*hidden argument*/NULL);
		uint64_t L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0_il2cpp_TypeInfo_var);
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_1 = ((JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_tAF28D30464CA6AC9D6C88D360F5FD619323CE2B0_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		String_t* L_2 = Convert_ToString_m700ABBAAF525328BB3A050D41B983F59E447C2D5(L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_mB5F8242575AC21AC9243FEFE475B42D417F7E947(__this, L_2, /*hidden argument*/NULL);
		WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599 * L_3 = __this->get_context_1();
		NullCheck(L_3);
		L_3->set_ExpectingValue_3((bool)0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean LitJson.Lexer::get_EndOfInput()
extern "C" IL2CPP_METHOD_ATTR bool Lexer_get_EndOfInput_mDF1EAF83C6582DC0C8543A627C53D919E038CDC5 (Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_end_of_input_4();
		return L_0;
	}
}
// System.Int32 LitJson.Lexer::get_Token()
extern "C" IL2CPP_METHOD_ATTR int32_t Lexer_get_Token_m5879A42B7E53A08082B72CAB70EC0452F010E190 (Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_token_12();
		return L_0;
	}
}
// System.String LitJson.Lexer::get_StringValue()
extern "C" IL2CPP_METHOD_ATTR String_t* Lexer_get_StringValue_m9E4575A40E16731552418AD2E084E2B3221D7B5A (Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_string_value_11();
		return L_0;
	}
}
// System.Void LitJson.Lexer::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Lexer__cctor_mA9558E8D0B963D68D40480E515D75AFE97CB7E58 (const RuntimeMethod* method)
{
	{
		Lexer_PopulateFsmTables_mB4B6CDAA85BB02A0DA337DD40D192A644A87F338(/*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.Lexer::.ctor(System.IO.TextReader)
extern "C" IL2CPP_METHOD_ATTR void Lexer__ctor_mD352649398A906A9105691F6BCA996FC5E97C2B3 (Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * __this, TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Lexer__ctor_mD352649398A906A9105691F6BCA996FC5E97C2B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		__this->set_allow_comments_2((bool)1);
		__this->set_allow_single_quoted_strings_3((bool)1);
		__this->set_input_buffer_6(0);
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1C0F2D97B838537A2D0F64033AE4EF02D150A956(L_0, ((int32_t)128), /*hidden argument*/NULL);
		__this->set_string_buffer_10(L_0);
		__this->set_state_9(1);
		__this->set_end_of_input_4((bool)0);
		TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * L_1 = ___reader0;
		__this->set_reader_8(L_1);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_2 = (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D *)il2cpp_codegen_object_new(FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D_il2cpp_TypeInfo_var);
		FsmContext__ctor_m71CE68D935F25263D086DEE1C4FD16D222494835(L_2, /*hidden argument*/NULL);
		__this->set_fsm_context_5(L_2);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_3 = __this->get_fsm_context_5();
		NullCheck(L_3);
		L_3->set_L_2(__this);
		return;
	}
}
// System.Int32 LitJson.Lexer::HexValue(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Lexer_HexValue_m2CF2E4537A50566AA77041A472DCB252CB7ABFD7 (int32_t ___digit0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___digit0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)65))))
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_0049;
			}
			case 2:
			{
				goto IL_004c;
			}
			case 3:
			{
				goto IL_004f;
			}
			case 4:
			{
				goto IL_0052;
			}
			case 5:
			{
				goto IL_0055;
			}
		}
	}
	{
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)97))))
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_0049;
			}
			case 2:
			{
				goto IL_004c;
			}
			case 3:
			{
				goto IL_004f;
			}
			case 4:
			{
				goto IL_0052;
			}
			case 5:
			{
				goto IL_0055;
			}
		}
	}
	{
		goto IL_0058;
	}

IL_0046:
	{
		return ((int32_t)10);
	}

IL_0049:
	{
		return ((int32_t)11);
	}

IL_004c:
	{
		return ((int32_t)12);
	}

IL_004f:
	{
		return ((int32_t)13);
	}

IL_0052:
	{
		return ((int32_t)14);
	}

IL_0055:
	{
		return ((int32_t)15);
	}

IL_0058:
	{
		int32_t L_3 = ___digit0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)48)));
	}
}
// System.Void LitJson.Lexer::PopulateFsmTables()
extern "C" IL2CPP_METHOD_ATTR void Lexer_PopulateFsmTables_mB4B6CDAA85BB02A0DA337DD40D192A644A87F338 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Lexer_PopulateFsmTables_mB4B6CDAA85BB02A0DA337DD40D192A644A87F338_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67* V_0 = NULL;
	{
		StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67* L_0 = (StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67*)SZArrayNew(StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67_il2cpp_TypeInfo_var, (uint32_t)((int32_t)28));
		V_0 = L_0;
		StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67* L_1 = V_0;
		StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * L_2 = (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)il2cpp_codegen_object_new(StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C_il2cpp_TypeInfo_var);
		StateHandler__ctor_m69A96CE1C6A022E95C84A1665403F4914ADADD2D(L_2, NULL, (intptr_t)((intptr_t)Lexer_State1_mA2439573B0138A7D96A6309E67028DB7F84D9C90_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)L_2);
		StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67* L_3 = V_0;
		StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * L_4 = (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)il2cpp_codegen_object_new(StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C_il2cpp_TypeInfo_var);
		StateHandler__ctor_m69A96CE1C6A022E95C84A1665403F4914ADADD2D(L_4, NULL, (intptr_t)((intptr_t)Lexer_State2_m685CB692FFC0A5248A2229AD51A6B6F60594A3B2_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)L_4);
		StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67* L_5 = V_0;
		StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * L_6 = (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)il2cpp_codegen_object_new(StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C_il2cpp_TypeInfo_var);
		StateHandler__ctor_m69A96CE1C6A022E95C84A1665403F4914ADADD2D(L_6, NULL, (intptr_t)((intptr_t)Lexer_State3_m55881D7CC45371C1D335DAFB7BFB5F5F25AF1E33_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)L_6);
		StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67* L_7 = V_0;
		StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * L_8 = (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)il2cpp_codegen_object_new(StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C_il2cpp_TypeInfo_var);
		StateHandler__ctor_m69A96CE1C6A022E95C84A1665403F4914ADADD2D(L_8, NULL, (intptr_t)((intptr_t)Lexer_State4_m37D393B861DA2ED32F0335D209328D392B763D9F_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)L_8);
		StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67* L_9 = V_0;
		StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * L_10 = (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)il2cpp_codegen_object_new(StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C_il2cpp_TypeInfo_var);
		StateHandler__ctor_m69A96CE1C6A022E95C84A1665403F4914ADADD2D(L_10, NULL, (intptr_t)((intptr_t)Lexer_State5_m3712BB0071851E6414F01C32C42B4FFE8C28462C_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)L_10);
		StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67* L_11 = V_0;
		StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * L_12 = (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)il2cpp_codegen_object_new(StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C_il2cpp_TypeInfo_var);
		StateHandler__ctor_m69A96CE1C6A022E95C84A1665403F4914ADADD2D(L_12, NULL, (intptr_t)((intptr_t)Lexer_State6_m698F7F5F80EC21428D881019E546AAADBC8FB995_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)L_12);
		StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67* L_13 = V_0;
		StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * L_14 = (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)il2cpp_codegen_object_new(StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C_il2cpp_TypeInfo_var);
		StateHandler__ctor_m69A96CE1C6A022E95C84A1665403F4914ADADD2D(L_14, NULL, (intptr_t)((intptr_t)Lexer_State7_mC07429B44F2093734A84FD7C2B37D6C048B4DC97_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)L_14);
		StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67* L_15 = V_0;
		StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * L_16 = (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)il2cpp_codegen_object_new(StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C_il2cpp_TypeInfo_var);
		StateHandler__ctor_m69A96CE1C6A022E95C84A1665403F4914ADADD2D(L_16, NULL, (intptr_t)((intptr_t)Lexer_State8_m7789E6987E5772D5EC9337CDC1A77EC78E3A1A24_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)L_16);
		StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67* L_17 = V_0;
		StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * L_18 = (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)il2cpp_codegen_object_new(StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C_il2cpp_TypeInfo_var);
		StateHandler__ctor_m69A96CE1C6A022E95C84A1665403F4914ADADD2D(L_18, NULL, (intptr_t)((intptr_t)Lexer_State9_mC2B4166DC0C1232D6FC465DF7DF71102A6799B94_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)L_18);
		StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67* L_19 = V_0;
		StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * L_20 = (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)il2cpp_codegen_object_new(StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C_il2cpp_TypeInfo_var);
		StateHandler__ctor_m69A96CE1C6A022E95C84A1665403F4914ADADD2D(L_20, NULL, (intptr_t)((intptr_t)Lexer_State10_m5767B33476CB90145E0624DF0B4042D256197285_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)L_20);
		StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67* L_21 = V_0;
		StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * L_22 = (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)il2cpp_codegen_object_new(StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C_il2cpp_TypeInfo_var);
		StateHandler__ctor_m69A96CE1C6A022E95C84A1665403F4914ADADD2D(L_22, NULL, (intptr_t)((intptr_t)Lexer_State11_m901C3769F2D5257622A857BCE850F8D0E3F6FF6E_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)L_22);
		StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67* L_23 = V_0;
		StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * L_24 = (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)il2cpp_codegen_object_new(StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C_il2cpp_TypeInfo_var);
		StateHandler__ctor_m69A96CE1C6A022E95C84A1665403F4914ADADD2D(L_24, NULL, (intptr_t)((intptr_t)Lexer_State12_m5F2C009D60F8372FBF5ADF43B8AA7E07455BB845_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)L_24);
		StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67* L_25 = V_0;
		StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * L_26 = (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)il2cpp_codegen_object_new(StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C_il2cpp_TypeInfo_var);
		StateHandler__ctor_m69A96CE1C6A022E95C84A1665403F4914ADADD2D(L_26, NULL, (intptr_t)((intptr_t)Lexer_State13_m22CB1BF654A923846BDDC673DCDF71831DD6B763_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)L_26);
		StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67* L_27 = V_0;
		StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * L_28 = (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)il2cpp_codegen_object_new(StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C_il2cpp_TypeInfo_var);
		StateHandler__ctor_m69A96CE1C6A022E95C84A1665403F4914ADADD2D(L_28, NULL, (intptr_t)((intptr_t)Lexer_State14_mB3EBD8215E34E74D29EA85FC69AABCA293060AB6_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)L_28);
		StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67* L_29 = V_0;
		StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * L_30 = (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)il2cpp_codegen_object_new(StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C_il2cpp_TypeInfo_var);
		StateHandler__ctor_m69A96CE1C6A022E95C84A1665403F4914ADADD2D(L_30, NULL, (intptr_t)((intptr_t)Lexer_State15_m027C22197C27E7ED9D4A60B1417BA318674BBE05_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)L_30);
		StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67* L_31 = V_0;
		StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * L_32 = (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)il2cpp_codegen_object_new(StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C_il2cpp_TypeInfo_var);
		StateHandler__ctor_m69A96CE1C6A022E95C84A1665403F4914ADADD2D(L_32, NULL, (intptr_t)((intptr_t)Lexer_State16_m55F14BCD451C44D56C1B00084BC3CAD0D994D6DD_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)L_32);
		StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67* L_33 = V_0;
		StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * L_34 = (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)il2cpp_codegen_object_new(StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C_il2cpp_TypeInfo_var);
		StateHandler__ctor_m69A96CE1C6A022E95C84A1665403F4914ADADD2D(L_34, NULL, (intptr_t)((intptr_t)Lexer_State17_m14256606939F1BB43BC0F1A32F31343CA62522C6_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)L_34);
		StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67* L_35 = V_0;
		StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * L_36 = (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)il2cpp_codegen_object_new(StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C_il2cpp_TypeInfo_var);
		StateHandler__ctor_m69A96CE1C6A022E95C84A1665403F4914ADADD2D(L_36, NULL, (intptr_t)((intptr_t)Lexer_State18_m05869906BDD63B018AF1EBBB1D9EF53C1B37ED6F_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_36);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)L_36);
		StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67* L_37 = V_0;
		StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * L_38 = (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)il2cpp_codegen_object_new(StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C_il2cpp_TypeInfo_var);
		StateHandler__ctor_m69A96CE1C6A022E95C84A1665403F4914ADADD2D(L_38, NULL, (intptr_t)((intptr_t)Lexer_State19_m0A9D176F286BF8D7287F0E4F10C41A21E52980C3_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)L_38);
		StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67* L_39 = V_0;
		StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * L_40 = (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)il2cpp_codegen_object_new(StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C_il2cpp_TypeInfo_var);
		StateHandler__ctor_m69A96CE1C6A022E95C84A1665403F4914ADADD2D(L_40, NULL, (intptr_t)((intptr_t)Lexer_State20_m881CCE67317887D1F6F80E7DF23522420E666A3B_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_40);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)L_40);
		StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67* L_41 = V_0;
		StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * L_42 = (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)il2cpp_codegen_object_new(StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C_il2cpp_TypeInfo_var);
		StateHandler__ctor_m69A96CE1C6A022E95C84A1665403F4914ADADD2D(L_42, NULL, (intptr_t)((intptr_t)Lexer_State21_m04A20D92907E73CA7112724AD65F13CD7F4FE68B_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)L_42);
		StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67* L_43 = V_0;
		StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * L_44 = (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)il2cpp_codegen_object_new(StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C_il2cpp_TypeInfo_var);
		StateHandler__ctor_m69A96CE1C6A022E95C84A1665403F4914ADADD2D(L_44, NULL, (intptr_t)((intptr_t)Lexer_State22_m3A8C0FB10E60CC4EA61753667FD159B43CD72CAA_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_44);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)L_44);
		StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67* L_45 = V_0;
		StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * L_46 = (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)il2cpp_codegen_object_new(StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C_il2cpp_TypeInfo_var);
		StateHandler__ctor_m69A96CE1C6A022E95C84A1665403F4914ADADD2D(L_46, NULL, (intptr_t)((intptr_t)Lexer_State23_m58E61F773BFCCC9C931B45B1BA6983DE4929EF8E_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_46);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)L_46);
		StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67* L_47 = V_0;
		StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * L_48 = (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)il2cpp_codegen_object_new(StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C_il2cpp_TypeInfo_var);
		StateHandler__ctor_m69A96CE1C6A022E95C84A1665403F4914ADADD2D(L_48, NULL, (intptr_t)((intptr_t)Lexer_State24_m0ADE5F9A2204EE16F3A53E71F9EB5BE93D8C75A6_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_48);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)L_48);
		StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67* L_49 = V_0;
		StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * L_50 = (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)il2cpp_codegen_object_new(StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C_il2cpp_TypeInfo_var);
		StateHandler__ctor_m69A96CE1C6A022E95C84A1665403F4914ADADD2D(L_50, NULL, (intptr_t)((intptr_t)Lexer_State25_m2921657D70B3DCEC6EA2C9D6210E1AEB34833197_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_50);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)L_50);
		StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67* L_51 = V_0;
		StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * L_52 = (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)il2cpp_codegen_object_new(StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C_il2cpp_TypeInfo_var);
		StateHandler__ctor_m69A96CE1C6A022E95C84A1665403F4914ADADD2D(L_52, NULL, (intptr_t)((intptr_t)Lexer_State26_mB432289A378375DA528068049313BFCC8CBCBD76_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)L_52);
		StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67* L_53 = V_0;
		StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * L_54 = (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)il2cpp_codegen_object_new(StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C_il2cpp_TypeInfo_var);
		StateHandler__ctor_m69A96CE1C6A022E95C84A1665403F4914ADADD2D(L_54, NULL, (intptr_t)((intptr_t)Lexer_State27_m6B9B03061DB282B92CD70F8702D3A05C2BFDE2FA_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_54);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)L_54);
		StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67* L_55 = V_0;
		StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * L_56 = (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)il2cpp_codegen_object_new(StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C_il2cpp_TypeInfo_var);
		StateHandler__ctor_m69A96CE1C6A022E95C84A1665403F4914ADADD2D(L_56, NULL, (intptr_t)((intptr_t)Lexer_State28_mEB41638B6DD7E23C204DBF1EE5169BEFCE28CD7F_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_56);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C *)L_56);
		StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67* L_57 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873_il2cpp_TypeInfo_var);
		((Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873_il2cpp_TypeInfo_var))->set_fsm_handler_table_1(L_57);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_58 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)28));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_59 = L_58;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_60 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7BCEADD49EU2D0F67U2D4254U2DB7E1U2D05118A71DBBAU7D_t6AED0330CA9ED319B6B675C34D94B542B7470054____U24U24method0x60000feU2D1_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_59, L_60, /*hidden argument*/NULL);
		((Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873_il2cpp_TypeInfo_var))->set_fsm_return_table_0(L_59);
		return;
	}
}
// System.Char LitJson.Lexer::ProcessEscChar(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Lexer_ProcessEscChar_mD12709B2F24D59BBFF6981D95D54119E5E9C1B2D (int32_t ___esc_char0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Lexer_ProcessEscChar_mD12709B2F24D59BBFF6981D95D54119E5E9C1B2D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___esc_char0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)92))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)39))))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)34))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)39))))
		{
			goto IL_0051;
		}
	}
	{
		goto IL_0066;
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)47))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)92))))
		{
			goto IL_0051;
		}
	}
	{
		goto IL_0066;
	}

IL_0024:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)102))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)98))))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)102))))
		{
			goto IL_0063;
		}
	}
	{
		goto IL_0066;
	}

IL_0035:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)110))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_11 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)((int32_t)114))))
		{
			case 0:
			{
				goto IL_005e;
			}
			case 1:
			{
				goto IL_0066;
			}
			case 2:
			{
				goto IL_005b;
			}
		}
	}
	{
		goto IL_0066;
	}

IL_0051:
	{
		int32_t L_12 = ___esc_char0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		Il2CppChar L_13 = Convert_ToChar_m5BD134B72978B879B81A824DFAC8FF29F5300245(L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0058:
	{
		return ((int32_t)10);
	}

IL_005b:
	{
		return ((int32_t)9);
	}

IL_005e:
	{
		return ((int32_t)13);
	}

IL_0061:
	{
		return 8;
	}

IL_0063:
	{
		return ((int32_t)12);
	}

IL_0066:
	{
		return ((int32_t)63);
	}
}
// System.Boolean LitJson.Lexer::State1(LitJson.FsmContext)
extern "C" IL2CPP_METHOD_ATTR bool Lexer_State1_mA2439573B0138A7D96A6309E67028DB7F84D9C90 (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		goto IL_01f2;
	}

IL_0005:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		if ((((int32_t)L_2) == ((int32_t)((int32_t)32))))
		{
			goto IL_01f2;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((((int32_t)L_5) < ((int32_t)((int32_t)9))))
		{
			goto IL_0038;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_7 = L_6->get_L_2();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_input_char_7();
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)13))))
		{
			goto IL_01f2;
		}
	}

IL_0038:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_10 = L_9->get_L_2();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_input_char_7();
		if ((((int32_t)L_11) < ((int32_t)((int32_t)49))))
		{
			goto IL_007c;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_12 = ___ctx0;
		NullCheck(L_12);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_13 = L_12->get_L_2();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_input_char_7();
		if ((((int32_t)L_14) > ((int32_t)((int32_t)57))))
		{
			goto IL_007c;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_15 = ___ctx0;
		NullCheck(L_15);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_16 = L_15->get_L_2();
		NullCheck(L_16);
		StringBuilder_t * L_17 = L_16->get_string_buffer_10();
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_18 = ___ctx0;
		NullCheck(L_18);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_19 = L_18->get_L_2();
		NullCheck(L_19);
		int32_t L_20 = L_19->get_input_char_7();
		NullCheck(L_17);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_17, (((int32_t)((uint16_t)L_20))), /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_21 = ___ctx0;
		NullCheck(L_21);
		L_21->set_NextState_1(3);
		return (bool)1;
	}

IL_007c:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_22 = ___ctx0;
		NullCheck(L_22);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_23 = L_22->get_L_2();
		NullCheck(L_23);
		int32_t L_24 = L_23->get_input_char_7();
		V_0 = L_24;
		int32_t L_25 = V_0;
		if ((((int32_t)L_25) > ((int32_t)((int32_t)58))))
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) > ((int32_t)((int32_t)39))))
		{
			goto IL_00a7;
		}
	}
	{
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)34))))
		{
			goto IL_011f;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)39))))
		{
			goto IL_01aa;
		}
	}
	{
		goto IL_01f0;
	}

IL_00a7:
	{
		int32_t L_29 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)((int32_t)44))))
		{
			case 0:
			{
				goto IL_0130;
			}
			case 1:
			{
				goto IL_0140;
			}
			case 2:
			{
				goto IL_01f0;
			}
			case 3:
			{
				goto IL_01d7;
			}
			case 4:
			{
				goto IL_0166;
			}
		}
	}
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)58))))
		{
			goto IL_0130;
		}
	}
	{
		goto IL_01f0;
	}

IL_00ce:
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) > ((int32_t)((int32_t)102))))
		{
			goto IL_00f5;
		}
	}
	{
		int32_t L_32 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)((int32_t)91))))
		{
			case 0:
			{
				goto IL_0130;
			}
			case 1:
			{
				goto IL_01f0;
			}
			case 2:
			{
				goto IL_0130;
			}
		}
	}
	{
		int32_t L_33 = V_0;
		if ((((int32_t)L_33) == ((int32_t)((int32_t)102))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_01f0;
	}

IL_00f5:
	{
		int32_t L_34 = V_0;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)110))))
		{
			goto IL_0196;
		}
	}
	{
		int32_t L_35 = V_0;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)116))))
		{
			goto IL_01a0;
		}
	}
	{
		int32_t L_36 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)((int32_t)123))))
		{
			case 0:
			{
				goto IL_0130;
			}
			case 1:
			{
				goto IL_01f0;
			}
			case 2:
			{
				goto IL_0130;
			}
		}
	}
	{
		goto IL_01f0;
	}

IL_011f:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_37 = ___ctx0;
		NullCheck(L_37);
		L_37->set_NextState_1(((int32_t)19));
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_38 = ___ctx0;
		NullCheck(L_38);
		L_38->set_Return_0((bool)1);
		return (bool)1;
	}

IL_0130:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_39 = ___ctx0;
		NullCheck(L_39);
		L_39->set_NextState_1(1);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_40 = ___ctx0;
		NullCheck(L_40);
		L_40->set_Return_0((bool)1);
		return (bool)1;
	}

IL_0140:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_41 = ___ctx0;
		NullCheck(L_41);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_42 = L_41->get_L_2();
		NullCheck(L_42);
		StringBuilder_t * L_43 = L_42->get_string_buffer_10();
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_44 = ___ctx0;
		NullCheck(L_44);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_45 = L_44->get_L_2();
		NullCheck(L_45);
		int32_t L_46 = L_45->get_input_char_7();
		NullCheck(L_43);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_43, (((int32_t)((uint16_t)L_46))), /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_47 = ___ctx0;
		NullCheck(L_47);
		L_47->set_NextState_1(2);
		return (bool)1;
	}

IL_0166:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_48 = ___ctx0;
		NullCheck(L_48);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_49 = L_48->get_L_2();
		NullCheck(L_49);
		StringBuilder_t * L_50 = L_49->get_string_buffer_10();
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_51 = ___ctx0;
		NullCheck(L_51);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_52 = L_51->get_L_2();
		NullCheck(L_52);
		int32_t L_53 = L_52->get_input_char_7();
		NullCheck(L_50);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_50, (((int32_t)((uint16_t)L_53))), /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_54 = ___ctx0;
		NullCheck(L_54);
		L_54->set_NextState_1(4);
		return (bool)1;
	}

IL_018c:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_55 = ___ctx0;
		NullCheck(L_55);
		L_55->set_NextState_1(((int32_t)12));
		return (bool)1;
	}

IL_0196:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_56 = ___ctx0;
		NullCheck(L_56);
		L_56->set_NextState_1(((int32_t)16));
		return (bool)1;
	}

IL_01a0:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_57 = ___ctx0;
		NullCheck(L_57);
		L_57->set_NextState_1(((int32_t)9));
		return (bool)1;
	}

IL_01aa:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_58 = ___ctx0;
		NullCheck(L_58);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_59 = L_58->get_L_2();
		NullCheck(L_59);
		bool L_60 = L_59->get_allow_single_quoted_strings_3();
		if (L_60)
		{
			goto IL_01b9;
		}
	}
	{
		return (bool)0;
	}

IL_01b9:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_61 = ___ctx0;
		NullCheck(L_61);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_62 = L_61->get_L_2();
		NullCheck(L_62);
		L_62->set_input_char_7(((int32_t)34));
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_63 = ___ctx0;
		NullCheck(L_63);
		L_63->set_NextState_1(((int32_t)23));
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_64 = ___ctx0;
		NullCheck(L_64);
		L_64->set_Return_0((bool)1);
		return (bool)1;
	}

IL_01d7:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_65 = ___ctx0;
		NullCheck(L_65);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_66 = L_65->get_L_2();
		NullCheck(L_66);
		bool L_67 = L_66->get_allow_comments_2();
		if (L_67)
		{
			goto IL_01e6;
		}
	}
	{
		return (bool)0;
	}

IL_01e6:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_68 = ___ctx0;
		NullCheck(L_68);
		L_68->set_NextState_1(((int32_t)25));
		return (bool)1;
	}

IL_01f0:
	{
		return (bool)0;
	}

IL_01f2:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_69 = ___ctx0;
		NullCheck(L_69);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_70 = L_69->get_L_2();
		NullCheck(L_70);
		bool L_71 = Lexer_GetChar_mA3141E107E7E7E9A551D9D36E115620D19128303(L_70, /*hidden argument*/NULL);
		if (L_71)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State2(LitJson.FsmContext)
extern "C" IL2CPP_METHOD_ATTR bool Lexer_State2_m685CB692FFC0A5248A2229AD51A6B6F60594A3B2 (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_mA3141E107E7E7E9A551D9D36E115620D19128303(L_1, /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		if ((((int32_t)L_4) < ((int32_t)((int32_t)49))))
		{
			goto IL_0050;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_6 = L_5->get_L_2();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_input_char_7();
		if ((((int32_t)L_7) > ((int32_t)((int32_t)57))))
		{
			goto IL_0050;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_8 = ___ctx0;
		NullCheck(L_8);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_9 = L_8->get_L_2();
		NullCheck(L_9);
		StringBuilder_t * L_10 = L_9->get_string_buffer_10();
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_11 = ___ctx0;
		NullCheck(L_11);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_12 = L_11->get_L_2();
		NullCheck(L_12);
		int32_t L_13 = L_12->get_input_char_7();
		NullCheck(L_10);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_10, (((int32_t)((uint16_t)L_13))), /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_14 = ___ctx0;
		NullCheck(L_14);
		L_14->set_NextState_1(3);
		return (bool)1;
	}

IL_0050:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_15 = ___ctx0;
		NullCheck(L_15);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_16 = L_15->get_L_2();
		NullCheck(L_16);
		int32_t L_17 = L_16->get_input_char_7();
		V_0 = L_17;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0087;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_19 = ___ctx0;
		NullCheck(L_19);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_20 = L_19->get_L_2();
		NullCheck(L_20);
		StringBuilder_t * L_21 = L_20->get_string_buffer_10();
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_22 = ___ctx0;
		NullCheck(L_22);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_23 = L_22->get_L_2();
		NullCheck(L_23);
		int32_t L_24 = L_23->get_input_char_7();
		NullCheck(L_21);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_21, (((int32_t)((uint16_t)L_24))), /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_25 = ___ctx0;
		NullCheck(L_25);
		L_25->set_NextState_1(4);
		return (bool)1;
	}

IL_0087:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State3(LitJson.FsmContext)
extern "C" IL2CPP_METHOD_ATTR bool Lexer_State3_m55881D7CC45371C1D335DAFB7BFB5F5F25AF1E33 (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		goto IL_0127;
	}

IL_0005:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_0045;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((((int32_t)L_5) > ((int32_t)((int32_t)57))))
		{
			goto IL_0045;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_7 = L_6->get_L_2();
		NullCheck(L_7);
		StringBuilder_t * L_8 = L_7->get_string_buffer_10();
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_10 = L_9->get_L_2();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_input_char_7();
		NullCheck(L_8);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_8, (((int32_t)((uint16_t)L_11))), /*hidden argument*/NULL);
		goto IL_0127;
	}

IL_0045:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_12 = ___ctx0;
		NullCheck(L_12);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_13 = L_12->get_L_2();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_input_char_7();
		if ((((int32_t)L_14) == ((int32_t)((int32_t)32))))
		{
			goto IL_0072;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_15 = ___ctx0;
		NullCheck(L_15);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_16 = L_15->get_L_2();
		NullCheck(L_16);
		int32_t L_17 = L_16->get_input_char_7();
		if ((((int32_t)L_17) < ((int32_t)((int32_t)9))))
		{
			goto IL_0082;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_18 = ___ctx0;
		NullCheck(L_18);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_19 = L_18->get_L_2();
		NullCheck(L_19);
		int32_t L_20 = L_19->get_input_char_7();
		if ((((int32_t)L_20) > ((int32_t)((int32_t)13))))
		{
			goto IL_0082;
		}
	}

IL_0072:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_21 = ___ctx0;
		NullCheck(L_21);
		L_21->set_Return_0((bool)1);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_22 = ___ctx0;
		NullCheck(L_22);
		L_22->set_NextState_1(1);
		return (bool)1;
	}

IL_0082:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_23 = ___ctx0;
		NullCheck(L_23);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_24 = L_23->get_L_2();
		NullCheck(L_24);
		int32_t L_25 = L_24->get_input_char_7();
		V_0 = L_25;
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) > ((int32_t)((int32_t)69))))
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_27 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)((int32_t)44))))
		{
			case 0:
			{
				goto IL_00be;
			}
			case 1:
			{
				goto IL_0125;
			}
			case 2:
			{
				goto IL_00d9;
			}
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)69))))
		{
			goto IL_00ff;
		}
	}
	{
		goto IL_0125;
	}

IL_00af:
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)93))))
		{
			goto IL_00be;
		}
	}
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)101))))
		{
			goto IL_00ff;
		}
	}
	{
		int32_t L_31 = V_0;
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_0125;
		}
	}

IL_00be:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_32 = ___ctx0;
		NullCheck(L_32);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_33 = L_32->get_L_2();
		NullCheck(L_33);
		Lexer_UngetChar_m224D9B68B52CB0976EDCDCC2CA4FC429245B634B(L_33, /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_34 = ___ctx0;
		NullCheck(L_34);
		L_34->set_Return_0((bool)1);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_35 = ___ctx0;
		NullCheck(L_35);
		L_35->set_NextState_1(1);
		return (bool)1;
	}

IL_00d9:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_36 = ___ctx0;
		NullCheck(L_36);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_37 = L_36->get_L_2();
		NullCheck(L_37);
		StringBuilder_t * L_38 = L_37->get_string_buffer_10();
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_39 = ___ctx0;
		NullCheck(L_39);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_40 = L_39->get_L_2();
		NullCheck(L_40);
		int32_t L_41 = L_40->get_input_char_7();
		NullCheck(L_38);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_38, (((int32_t)((uint16_t)L_41))), /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_42 = ___ctx0;
		NullCheck(L_42);
		L_42->set_NextState_1(5);
		return (bool)1;
	}

IL_00ff:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_43 = ___ctx0;
		NullCheck(L_43);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_44 = L_43->get_L_2();
		NullCheck(L_44);
		StringBuilder_t * L_45 = L_44->get_string_buffer_10();
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_46 = ___ctx0;
		NullCheck(L_46);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_47 = L_46->get_L_2();
		NullCheck(L_47);
		int32_t L_48 = L_47->get_input_char_7();
		NullCheck(L_45);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_45, (((int32_t)((uint16_t)L_48))), /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_49 = ___ctx0;
		NullCheck(L_49);
		L_49->set_NextState_1(7);
		return (bool)1;
	}

IL_0125:
	{
		return (bool)0;
	}

IL_0127:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_50 = ___ctx0;
		NullCheck(L_50);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_51 = L_50->get_L_2();
		NullCheck(L_51);
		bool L_52 = Lexer_GetChar_mA3141E107E7E7E9A551D9D36E115620D19128303(L_51, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State4(LitJson.FsmContext)
extern "C" IL2CPP_METHOD_ATTR bool Lexer_State4_m37D393B861DA2ED32F0335D209328D392B763D9F (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_mA3141E107E7E7E9A551D9D36E115620D19128303(L_1, /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		if ((((int32_t)L_4) == ((int32_t)((int32_t)32))))
		{
			goto IL_0039;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_6 = L_5->get_L_2();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_input_char_7();
		if ((((int32_t)L_7) < ((int32_t)((int32_t)9))))
		{
			goto IL_0049;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_8 = ___ctx0;
		NullCheck(L_8);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_9 = L_8->get_L_2();
		NullCheck(L_9);
		int32_t L_10 = L_9->get_input_char_7();
		if ((((int32_t)L_10) > ((int32_t)((int32_t)13))))
		{
			goto IL_0049;
		}
	}

IL_0039:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_11 = ___ctx0;
		NullCheck(L_11);
		L_11->set_Return_0((bool)1);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_12 = ___ctx0;
		NullCheck(L_12);
		L_12->set_NextState_1(1);
		return (bool)1;
	}

IL_0049:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_13 = ___ctx0;
		NullCheck(L_13);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_14 = L_13->get_L_2();
		NullCheck(L_14);
		int32_t L_15 = L_14->get_input_char_7();
		V_0 = L_15;
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) > ((int32_t)((int32_t)69))))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_17 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)((int32_t)44))))
		{
			case 0:
			{
				goto IL_0085;
			}
			case 1:
			{
				goto IL_00ec;
			}
			case 2:
			{
				goto IL_00a0;
			}
		}
	}
	{
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)69))))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_00ec;
	}

IL_0076:
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)93))))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)101))))
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_21 = V_0;
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_00ec;
		}
	}

IL_0085:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_22 = ___ctx0;
		NullCheck(L_22);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_23 = L_22->get_L_2();
		NullCheck(L_23);
		Lexer_UngetChar_m224D9B68B52CB0976EDCDCC2CA4FC429245B634B(L_23, /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_24 = ___ctx0;
		NullCheck(L_24);
		L_24->set_Return_0((bool)1);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_25 = ___ctx0;
		NullCheck(L_25);
		L_25->set_NextState_1(1);
		return (bool)1;
	}

IL_00a0:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_26 = ___ctx0;
		NullCheck(L_26);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_27 = L_26->get_L_2();
		NullCheck(L_27);
		StringBuilder_t * L_28 = L_27->get_string_buffer_10();
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_29 = ___ctx0;
		NullCheck(L_29);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_30 = L_29->get_L_2();
		NullCheck(L_30);
		int32_t L_31 = L_30->get_input_char_7();
		NullCheck(L_28);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_28, (((int32_t)((uint16_t)L_31))), /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_32 = ___ctx0;
		NullCheck(L_32);
		L_32->set_NextState_1(5);
		return (bool)1;
	}

IL_00c6:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_33 = ___ctx0;
		NullCheck(L_33);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_34 = L_33->get_L_2();
		NullCheck(L_34);
		StringBuilder_t * L_35 = L_34->get_string_buffer_10();
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_36 = ___ctx0;
		NullCheck(L_36);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_37 = L_36->get_L_2();
		NullCheck(L_37);
		int32_t L_38 = L_37->get_input_char_7();
		NullCheck(L_35);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_35, (((int32_t)((uint16_t)L_38))), /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_39 = ___ctx0;
		NullCheck(L_39);
		L_39->set_NextState_1(7);
		return (bool)1;
	}

IL_00ec:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State5(LitJson.FsmContext)
extern "C" IL2CPP_METHOD_ATTR bool Lexer_State5_m3712BB0071851E6414F01C32C42B4FFE8C28462C (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * ___ctx0, const RuntimeMethod* method)
{
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_mA3141E107E7E7E9A551D9D36E115620D19128303(L_1, /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		if ((((int32_t)L_4) < ((int32_t)((int32_t)48))))
		{
			goto IL_0050;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_6 = L_5->get_L_2();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_input_char_7();
		if ((((int32_t)L_7) > ((int32_t)((int32_t)57))))
		{
			goto IL_0050;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_8 = ___ctx0;
		NullCheck(L_8);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_9 = L_8->get_L_2();
		NullCheck(L_9);
		StringBuilder_t * L_10 = L_9->get_string_buffer_10();
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_11 = ___ctx0;
		NullCheck(L_11);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_12 = L_11->get_L_2();
		NullCheck(L_12);
		int32_t L_13 = L_12->get_input_char_7();
		NullCheck(L_10);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_10, (((int32_t)((uint16_t)L_13))), /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_14 = ___ctx0;
		NullCheck(L_14);
		L_14->set_NextState_1(6);
		return (bool)1;
	}

IL_0050:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State6(LitJson.FsmContext)
extern "C" IL2CPP_METHOD_ATTR bool Lexer_State6_m698F7F5F80EC21428D881019E546AAADBC8FB995 (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		goto IL_00f1;
	}

IL_0005:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_0045;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((((int32_t)L_5) > ((int32_t)((int32_t)57))))
		{
			goto IL_0045;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_7 = L_6->get_L_2();
		NullCheck(L_7);
		StringBuilder_t * L_8 = L_7->get_string_buffer_10();
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_10 = L_9->get_L_2();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_input_char_7();
		NullCheck(L_8);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_8, (((int32_t)((uint16_t)L_11))), /*hidden argument*/NULL);
		goto IL_00f1;
	}

IL_0045:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_12 = ___ctx0;
		NullCheck(L_12);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_13 = L_12->get_L_2();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_input_char_7();
		if ((((int32_t)L_14) == ((int32_t)((int32_t)32))))
		{
			goto IL_0072;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_15 = ___ctx0;
		NullCheck(L_15);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_16 = L_15->get_L_2();
		NullCheck(L_16);
		int32_t L_17 = L_16->get_input_char_7();
		if ((((int32_t)L_17) < ((int32_t)((int32_t)9))))
		{
			goto IL_0082;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_18 = ___ctx0;
		NullCheck(L_18);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_19 = L_18->get_L_2();
		NullCheck(L_19);
		int32_t L_20 = L_19->get_input_char_7();
		if ((((int32_t)L_20) > ((int32_t)((int32_t)13))))
		{
			goto IL_0082;
		}
	}

IL_0072:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_21 = ___ctx0;
		NullCheck(L_21);
		L_21->set_Return_0((bool)1);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_22 = ___ctx0;
		NullCheck(L_22);
		L_22->set_NextState_1(1);
		return (bool)1;
	}

IL_0082:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_23 = ___ctx0;
		NullCheck(L_23);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_24 = L_23->get_L_2();
		NullCheck(L_24);
		int32_t L_25 = L_24->get_input_char_7();
		V_0 = L_25;
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) > ((int32_t)((int32_t)69))))
		{
			goto IL_009f;
		}
	}
	{
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)44))))
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)69))))
		{
			goto IL_00c9;
		}
	}
	{
		goto IL_00ef;
	}

IL_009f:
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)93))))
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)101))))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_31 = V_0;
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_00ef;
		}
	}

IL_00ae:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_32 = ___ctx0;
		NullCheck(L_32);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_33 = L_32->get_L_2();
		NullCheck(L_33);
		Lexer_UngetChar_m224D9B68B52CB0976EDCDCC2CA4FC429245B634B(L_33, /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_34 = ___ctx0;
		NullCheck(L_34);
		L_34->set_Return_0((bool)1);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_35 = ___ctx0;
		NullCheck(L_35);
		L_35->set_NextState_1(1);
		return (bool)1;
	}

IL_00c9:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_36 = ___ctx0;
		NullCheck(L_36);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_37 = L_36->get_L_2();
		NullCheck(L_37);
		StringBuilder_t * L_38 = L_37->get_string_buffer_10();
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_39 = ___ctx0;
		NullCheck(L_39);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_40 = L_39->get_L_2();
		NullCheck(L_40);
		int32_t L_41 = L_40->get_input_char_7();
		NullCheck(L_38);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_38, (((int32_t)((uint16_t)L_41))), /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_42 = ___ctx0;
		NullCheck(L_42);
		L_42->set_NextState_1(7);
		return (bool)1;
	}

IL_00ef:
	{
		return (bool)0;
	}

IL_00f1:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_43 = ___ctx0;
		NullCheck(L_43);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_44 = L_43->get_L_2();
		NullCheck(L_44);
		bool L_45 = Lexer_GetChar_mA3141E107E7E7E9A551D9D36E115620D19128303(L_44, /*hidden argument*/NULL);
		if (L_45)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State7(LitJson.FsmContext)
extern "C" IL2CPP_METHOD_ATTR bool Lexer_State7_mC07429B44F2093734A84FD7C2B37D6C048B4DC97 (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_mA3141E107E7E7E9A551D9D36E115620D19128303(L_1, /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		if ((((int32_t)L_4) < ((int32_t)((int32_t)48))))
		{
			goto IL_0050;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_6 = L_5->get_L_2();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_input_char_7();
		if ((((int32_t)L_7) > ((int32_t)((int32_t)57))))
		{
			goto IL_0050;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_8 = ___ctx0;
		NullCheck(L_8);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_9 = L_8->get_L_2();
		NullCheck(L_9);
		StringBuilder_t * L_10 = L_9->get_string_buffer_10();
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_11 = ___ctx0;
		NullCheck(L_11);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_12 = L_11->get_L_2();
		NullCheck(L_12);
		int32_t L_13 = L_12->get_input_char_7();
		NullCheck(L_10);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_10, (((int32_t)((uint16_t)L_13))), /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_14 = ___ctx0;
		NullCheck(L_14);
		L_14->set_NextState_1(8);
		return (bool)1;
	}

IL_0050:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_15 = ___ctx0;
		NullCheck(L_15);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_16 = L_15->get_L_2();
		NullCheck(L_16);
		int32_t L_17 = L_16->get_input_char_7();
		V_0 = L_17;
		int32_t L_18 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)((int32_t)43))))
		{
			case 0:
			{
				goto IL_0073;
			}
			case 1:
			{
				goto IL_0099;
			}
			case 2:
			{
				goto IL_0073;
			}
		}
	}
	{
		goto IL_0099;
	}

IL_0073:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_19 = ___ctx0;
		NullCheck(L_19);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_20 = L_19->get_L_2();
		NullCheck(L_20);
		StringBuilder_t * L_21 = L_20->get_string_buffer_10();
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_22 = ___ctx0;
		NullCheck(L_22);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_23 = L_22->get_L_2();
		NullCheck(L_23);
		int32_t L_24 = L_23->get_input_char_7();
		NullCheck(L_21);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_21, (((int32_t)((uint16_t)L_24))), /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_25 = ___ctx0;
		NullCheck(L_25);
		L_25->set_NextState_1(8);
		return (bool)1;
	}

IL_0099:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State8(LitJson.FsmContext)
extern "C" IL2CPP_METHOD_ATTR bool Lexer_State8_m7789E6987E5772D5EC9337CDC1A77EC78E3A1A24 (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		goto IL_00b7;
	}

IL_0005:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_0042;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((((int32_t)L_5) > ((int32_t)((int32_t)57))))
		{
			goto IL_0042;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_7 = L_6->get_L_2();
		NullCheck(L_7);
		StringBuilder_t * L_8 = L_7->get_string_buffer_10();
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_10 = L_9->get_L_2();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_input_char_7();
		NullCheck(L_8);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_8, (((int32_t)((uint16_t)L_11))), /*hidden argument*/NULL);
		goto IL_00b7;
	}

IL_0042:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_12 = ___ctx0;
		NullCheck(L_12);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_13 = L_12->get_L_2();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_input_char_7();
		if ((((int32_t)L_14) == ((int32_t)((int32_t)32))))
		{
			goto IL_006f;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_15 = ___ctx0;
		NullCheck(L_15);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_16 = L_15->get_L_2();
		NullCheck(L_16);
		int32_t L_17 = L_16->get_input_char_7();
		if ((((int32_t)L_17) < ((int32_t)((int32_t)9))))
		{
			goto IL_007f;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_18 = ___ctx0;
		NullCheck(L_18);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_19 = L_18->get_L_2();
		NullCheck(L_19);
		int32_t L_20 = L_19->get_input_char_7();
		if ((((int32_t)L_20) > ((int32_t)((int32_t)13))))
		{
			goto IL_007f;
		}
	}

IL_006f:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_21 = ___ctx0;
		NullCheck(L_21);
		L_21->set_Return_0((bool)1);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_22 = ___ctx0;
		NullCheck(L_22);
		L_22->set_NextState_1(1);
		return (bool)1;
	}

IL_007f:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_23 = ___ctx0;
		NullCheck(L_23);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_24 = L_23->get_L_2();
		NullCheck(L_24);
		int32_t L_25 = L_24->get_input_char_7();
		V_0 = L_25;
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)44))))
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)93))))
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((!(((uint32_t)L_28) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_00b5;
		}
	}

IL_009a:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_29 = ___ctx0;
		NullCheck(L_29);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_30 = L_29->get_L_2();
		NullCheck(L_30);
		Lexer_UngetChar_m224D9B68B52CB0976EDCDCC2CA4FC429245B634B(L_30, /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_31 = ___ctx0;
		NullCheck(L_31);
		L_31->set_Return_0((bool)1);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_32 = ___ctx0;
		NullCheck(L_32);
		L_32->set_NextState_1(1);
		return (bool)1;
	}

IL_00b5:
	{
		return (bool)0;
	}

IL_00b7:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_33 = ___ctx0;
		NullCheck(L_33);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_34 = L_33->get_L_2();
		NullCheck(L_34);
		bool L_35 = Lexer_GetChar_mA3141E107E7E7E9A551D9D36E115620D19128303(L_34, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State9(LitJson.FsmContext)
extern "C" IL2CPP_METHOD_ATTR bool Lexer_State9_mC2B4166DC0C1232D6FC465DF7DF71102A6799B94 (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_mA3141E107E7E7E9A551D9D36E115620D19128303(L_1, /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_0027;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_NextState_1(((int32_t)10));
		return (bool)1;
	}

IL_0027:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State10(LitJson.FsmContext)
extern "C" IL2CPP_METHOD_ATTR bool Lexer_State10_m5767B33476CB90145E0624DF0B4042D256197285 (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_mA3141E107E7E7E9A551D9D36E115620D19128303(L_1, /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_0027;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_NextState_1(((int32_t)11));
		return (bool)1;
	}

IL_0027:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State11(LitJson.FsmContext)
extern "C" IL2CPP_METHOD_ATTR bool Lexer_State11_m901C3769F2D5257622A857BCE850F8D0E3F6FF6E (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_mA3141E107E7E7E9A551D9D36E115620D19128303(L_1, /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_002d;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_Return_0((bool)1);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_NextState_1(1);
		return (bool)1;
	}

IL_002d:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State12(LitJson.FsmContext)
extern "C" IL2CPP_METHOD_ATTR bool Lexer_State12_m5F2C009D60F8372FBF5ADF43B8AA7E07455BB845 (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_mA3141E107E7E7E9A551D9D36E115620D19128303(L_1, /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_0027;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_NextState_1(((int32_t)13));
		return (bool)1;
	}

IL_0027:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State13(LitJson.FsmContext)
extern "C" IL2CPP_METHOD_ATTR bool Lexer_State13_m22CB1BF654A923846BDDC673DCDF71831DD6B763 (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_mA3141E107E7E7E9A551D9D36E115620D19128303(L_1, /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0027;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_NextState_1(((int32_t)14));
		return (bool)1;
	}

IL_0027:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State14(LitJson.FsmContext)
extern "C" IL2CPP_METHOD_ATTR bool Lexer_State14_mB3EBD8215E34E74D29EA85FC69AABCA293060AB6 (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_mA3141E107E7E7E9A551D9D36E115620D19128303(L_1, /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)115)))))
		{
			goto IL_0027;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_NextState_1(((int32_t)15));
		return (bool)1;
	}

IL_0027:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State15(LitJson.FsmContext)
extern "C" IL2CPP_METHOD_ATTR bool Lexer_State15_m027C22197C27E7ED9D4A60B1417BA318674BBE05 (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_mA3141E107E7E7E9A551D9D36E115620D19128303(L_1, /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_002d;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_Return_0((bool)1);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_NextState_1(1);
		return (bool)1;
	}

IL_002d:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State16(LitJson.FsmContext)
extern "C" IL2CPP_METHOD_ATTR bool Lexer_State16_m55F14BCD451C44D56C1B00084BC3CAD0D994D6DD (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_mA3141E107E7E7E9A551D9D36E115620D19128303(L_1, /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_0027;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_NextState_1(((int32_t)17));
		return (bool)1;
	}

IL_0027:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State17(LitJson.FsmContext)
extern "C" IL2CPP_METHOD_ATTR bool Lexer_State17_m14256606939F1BB43BC0F1A32F31343CA62522C6 (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_mA3141E107E7E7E9A551D9D36E115620D19128303(L_1, /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0027;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_NextState_1(((int32_t)18));
		return (bool)1;
	}

IL_0027:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State18(LitJson.FsmContext)
extern "C" IL2CPP_METHOD_ATTR bool Lexer_State18_m05869906BDD63B018AF1EBBB1D9EF53C1B37ED6F (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_mA3141E107E7E7E9A551D9D36E115620D19128303(L_1, /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_002d;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_Return_0((bool)1);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_NextState_1(1);
		return (bool)1;
	}

IL_002d:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State19(LitJson.FsmContext)
extern "C" IL2CPP_METHOD_ATTR bool Lexer_State19_m0A9D176F286BF8D7287F0E4F10C41A21E52980C3 (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		goto IL_0065;
	}

IL_0002:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)34))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)92))))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_0048;
	}

IL_001a:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_6 = L_5->get_L_2();
		NullCheck(L_6);
		Lexer_UngetChar_m224D9B68B52CB0976EDCDCC2CA4FC429245B634B(L_6, /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_Return_0((bool)1);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->set_NextState_1(((int32_t)20));
		return (bool)1;
	}

IL_0036:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_9 = ___ctx0;
		NullCheck(L_9);
		L_9->set_StateStack_3(((int32_t)19));
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_10 = ___ctx0;
		NullCheck(L_10);
		L_10->set_NextState_1(((int32_t)21));
		return (bool)1;
	}

IL_0048:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_11 = ___ctx0;
		NullCheck(L_11);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_12 = L_11->get_L_2();
		NullCheck(L_12);
		StringBuilder_t * L_13 = L_12->get_string_buffer_10();
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_14 = ___ctx0;
		NullCheck(L_14);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_15 = L_14->get_L_2();
		NullCheck(L_15);
		int32_t L_16 = L_15->get_input_char_7();
		NullCheck(L_13);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_13, (((int32_t)((uint16_t)L_16))), /*hidden argument*/NULL);
	}

IL_0065:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_17 = ___ctx0;
		NullCheck(L_17);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_18 = L_17->get_L_2();
		NullCheck(L_18);
		bool L_19 = Lexer_GetChar_mA3141E107E7E7E9A551D9D36E115620D19128303(L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_0002;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State20(LitJson.FsmContext)
extern "C" IL2CPP_METHOD_ATTR bool Lexer_State20_m881CCE67317887D1F6F80E7DF23522420E666A3B (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_mA3141E107E7E7E9A551D9D36E115620D19128303(L_1, /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_002d;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_Return_0((bool)1);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_NextState_1(1);
		return (bool)1;
	}

IL_002d:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State21(LitJson.FsmContext)
extern "C" IL2CPP_METHOD_ATTR bool Lexer_State21_m04A20D92907E73CA7112724AD65F13CD7F4FE68B (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * ___ctx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Lexer_State21_m04A20D92907E73CA7112724AD65F13CD7F4FE68B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_mA3141E107E7E7E9A551D9D36E115620D19128303(L_1, /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)92))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) > ((int32_t)((int32_t)39))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)34))))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)39))))
		{
			goto IL_0075;
		}
	}
	{
		goto IL_00a4;
	}

IL_002e:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)47))))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_0075;
		}
	}
	{
		goto IL_00a4;
	}

IL_003a:
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) > ((int32_t)((int32_t)102))))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)98))))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)102))))
		{
			goto IL_0075;
		}
	}
	{
		goto IL_00a4;
	}

IL_004b:
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)110))))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_15 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)((int32_t)114))))
		{
			case 0:
			{
				goto IL_0075;
			}
			case 1:
			{
				goto IL_00a4;
			}
			case 2:
			{
				goto IL_0075;
			}
			case 3:
			{
				goto IL_006b;
			}
		}
	}
	{
		goto IL_00a4;
	}

IL_006b:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_16 = ___ctx0;
		NullCheck(L_16);
		L_16->set_NextState_1(((int32_t)22));
		return (bool)1;
	}

IL_0075:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_17 = ___ctx0;
		NullCheck(L_17);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_18 = L_17->get_L_2();
		NullCheck(L_18);
		StringBuilder_t * L_19 = L_18->get_string_buffer_10();
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_20 = ___ctx0;
		NullCheck(L_20);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_21 = L_20->get_L_2();
		NullCheck(L_21);
		int32_t L_22 = L_21->get_input_char_7();
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873_il2cpp_TypeInfo_var);
		Il2CppChar L_23 = Lexer_ProcessEscChar_mD12709B2F24D59BBFF6981D95D54119E5E9C1B2D(L_22, /*hidden argument*/NULL);
		NullCheck(L_19);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_19, L_23, /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_24 = ___ctx0;
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_25 = ___ctx0;
		NullCheck(L_25);
		int32_t L_26 = L_25->get_StateStack_3();
		NullCheck(L_24);
		L_24->set_NextState_1(L_26);
		return (bool)1;
	}

IL_00a4:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State22(LitJson.FsmContext)
extern "C" IL2CPP_METHOD_ATTR bool Lexer_State22_m3A8C0FB10E60CC4EA61753667FD159B43CD72CAA (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * ___ctx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Lexer_State22_m3A8C0FB10E60CC4EA61753667FD159B43CD72CAA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = ((int32_t)4096);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		L_1->set_unichar_13(0);
		goto IL_00d5;
	}

IL_0019:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		if ((((int32_t)L_4) < ((int32_t)((int32_t)48))))
		{
			goto IL_0037;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_6 = L_5->get_L_2();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_input_char_7();
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0073;
		}
	}

IL_0037:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_8 = ___ctx0;
		NullCheck(L_8);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_9 = L_8->get_L_2();
		NullCheck(L_9);
		int32_t L_10 = L_9->get_input_char_7();
		if ((((int32_t)L_10) < ((int32_t)((int32_t)65))))
		{
			goto IL_0055;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_11 = ___ctx0;
		NullCheck(L_11);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_12 = L_11->get_L_2();
		NullCheck(L_12);
		int32_t L_13 = L_12->get_input_char_7();
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)70))))
		{
			goto IL_0073;
		}
	}

IL_0055:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_14 = ___ctx0;
		NullCheck(L_14);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_15 = L_14->get_L_2();
		NullCheck(L_15);
		int32_t L_16 = L_15->get_input_char_7();
		if ((((int32_t)L_16) < ((int32_t)((int32_t)97))))
		{
			goto IL_00d3;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_17 = ___ctx0;
		NullCheck(L_17);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_18 = L_17->get_L_2();
		NullCheck(L_18);
		int32_t L_19 = L_18->get_input_char_7();
		if ((((int32_t)L_19) > ((int32_t)((int32_t)102))))
		{
			goto IL_00d3;
		}
	}

IL_0073:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_20 = ___ctx0;
		NullCheck(L_20);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_21 = L_20->get_L_2();
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_22 = L_21;
		NullCheck(L_22);
		int32_t L_23 = L_22->get_unichar_13();
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_24 = ___ctx0;
		NullCheck(L_24);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_25 = L_24->get_L_2();
		NullCheck(L_25);
		int32_t L_26 = L_25->get_input_char_7();
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873_il2cpp_TypeInfo_var);
		int32_t L_27 = Lexer_HexValue_m2CF2E4537A50566AA77041A472DCB252CB7ABFD7(L_26, /*hidden argument*/NULL);
		int32_t L_28 = V_1;
		NullCheck(L_22);
		L_22->set_unichar_13(((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_27, (int32_t)L_28)))));
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
		int32_t L_30 = V_1;
		V_1 = ((int32_t)((int32_t)L_30/(int32_t)((int32_t)16)));
		int32_t L_31 = V_0;
		if ((!(((uint32_t)L_31) == ((uint32_t)4))))
		{
			goto IL_00d5;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_32 = ___ctx0;
		NullCheck(L_32);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_33 = L_32->get_L_2();
		NullCheck(L_33);
		StringBuilder_t * L_34 = L_33->get_string_buffer_10();
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_35 = ___ctx0;
		NullCheck(L_35);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_36 = L_35->get_L_2();
		NullCheck(L_36);
		int32_t L_37 = L_36->get_unichar_13();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		Il2CppChar L_38 = Convert_ToChar_m5BD134B72978B879B81A824DFAC8FF29F5300245(L_37, /*hidden argument*/NULL);
		NullCheck(L_34);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_34, L_38, /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_39 = ___ctx0;
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_40 = ___ctx0;
		NullCheck(L_40);
		int32_t L_41 = L_40->get_StateStack_3();
		NullCheck(L_39);
		L_39->set_NextState_1(L_41);
		return (bool)1;
	}

IL_00d3:
	{
		return (bool)0;
	}

IL_00d5:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_42 = ___ctx0;
		NullCheck(L_42);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_43 = L_42->get_L_2();
		NullCheck(L_43);
		bool L_44 = Lexer_GetChar_mA3141E107E7E7E9A551D9D36E115620D19128303(L_43, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State23(LitJson.FsmContext)
extern "C" IL2CPP_METHOD_ATTR bool Lexer_State23_m58E61F773BFCCC9C931B45B1BA6983DE4929EF8E (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		goto IL_0065;
	}

IL_0002:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)39))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)92))))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_0048;
	}

IL_001a:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_6 = L_5->get_L_2();
		NullCheck(L_6);
		Lexer_UngetChar_m224D9B68B52CB0976EDCDCC2CA4FC429245B634B(L_6, /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_Return_0((bool)1);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->set_NextState_1(((int32_t)24));
		return (bool)1;
	}

IL_0036:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_9 = ___ctx0;
		NullCheck(L_9);
		L_9->set_StateStack_3(((int32_t)23));
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_10 = ___ctx0;
		NullCheck(L_10);
		L_10->set_NextState_1(((int32_t)21));
		return (bool)1;
	}

IL_0048:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_11 = ___ctx0;
		NullCheck(L_11);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_12 = L_11->get_L_2();
		NullCheck(L_12);
		StringBuilder_t * L_13 = L_12->get_string_buffer_10();
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_14 = ___ctx0;
		NullCheck(L_14);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_15 = L_14->get_L_2();
		NullCheck(L_15);
		int32_t L_16 = L_15->get_input_char_7();
		NullCheck(L_13);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_13, (((int32_t)((uint16_t)L_16))), /*hidden argument*/NULL);
	}

IL_0065:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_17 = ___ctx0;
		NullCheck(L_17);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_18 = L_17->get_L_2();
		NullCheck(L_18);
		bool L_19 = Lexer_GetChar_mA3141E107E7E7E9A551D9D36E115620D19128303(L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_0002;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State24(LitJson.FsmContext)
extern "C" IL2CPP_METHOD_ATTR bool Lexer_State24_m0ADE5F9A2204EE16F3A53E71F9EB5BE93D8C75A6 (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_mA3141E107E7E7E9A551D9D36E115620D19128303(L_1, /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_003a;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_7 = L_6->get_L_2();
		NullCheck(L_7);
		L_7->set_input_char_7(((int32_t)34));
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->set_Return_0((bool)1);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_9 = ___ctx0;
		NullCheck(L_9);
		L_9->set_NextState_1(1);
		return (bool)1;
	}

IL_003a:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State25(LitJson.FsmContext)
extern "C" IL2CPP_METHOD_ATTR bool Lexer_State25_m2921657D70B3DCEC6EA2C9D6210E1AEB34833197 (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_mA3141E107E7E7E9A551D9D36E115620D19128303(L_1, /*hidden argument*/NULL);
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)42))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)47))))
		{
			goto IL_002e;
		}
	}
	{
		goto IL_0038;
	}

IL_0024:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_NextState_1(((int32_t)27));
		return (bool)1;
	}

IL_002e:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->set_NextState_1(((int32_t)26));
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State26(LitJson.FsmContext)
extern "C" IL2CPP_METHOD_ATTR bool Lexer_State26_mB432289A378375DA528068049313BFCC8CBCBD76 (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * ___ctx0, const RuntimeMethod* method)
{
	{
		goto IL_001a;
	}

IL_0002:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_001a;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_3 = ___ctx0;
		NullCheck(L_3);
		L_3->set_NextState_1(1);
		return (bool)1;
	}

IL_001a:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_4 = ___ctx0;
		NullCheck(L_4);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_5 = L_4->get_L_2();
		NullCheck(L_5);
		bool L_6 = Lexer_GetChar_mA3141E107E7E7E9A551D9D36E115620D19128303(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0002;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State27(LitJson.FsmContext)
extern "C" IL2CPP_METHOD_ATTR bool Lexer_State27_m6B9B03061DB282B92CD70F8702D3A05C2BFDE2FA (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * ___ctx0, const RuntimeMethod* method)
{
	{
		goto IL_001b;
	}

IL_0002:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_001b;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_3 = ___ctx0;
		NullCheck(L_3);
		L_3->set_NextState_1(((int32_t)28));
		return (bool)1;
	}

IL_001b:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_4 = ___ctx0;
		NullCheck(L_4);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_5 = L_4->get_L_2();
		NullCheck(L_5);
		bool L_6 = Lexer_GetChar_mA3141E107E7E7E9A551D9D36E115620D19128303(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0002;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State28(LitJson.FsmContext)
extern "C" IL2CPP_METHOD_ATTR bool Lexer_State28_mEB41638B6DD7E23C204DBF1EE5169BEFCE28CD7F (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * ___ctx0, const RuntimeMethod* method)
{
	{
		goto IL_0033;
	}

IL_0002:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		if ((((int32_t)L_2) == ((int32_t)((int32_t)42))))
		{
			goto IL_0033;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0029;
		}
	}
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_NextState_1(1);
		return (bool)1;
	}

IL_0029:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_NextState_1(((int32_t)27));
		return (bool)1;
	}

IL_0033:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_8 = ___ctx0;
		NullCheck(L_8);
		Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * L_9 = L_8->get_L_2();
		NullCheck(L_9);
		bool L_10 = Lexer_GetChar_mA3141E107E7E7E9A551D9D36E115620D19128303(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0002;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::GetChar()
extern "C" IL2CPP_METHOD_ATTR bool Lexer_GetChar_mA3141E107E7E7E9A551D9D36E115620D19128303 (Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = Lexer_NextChar_m737E3B54AE8BA3D6A647D70314E9542F3F1BC1E5(__this, /*hidden argument*/NULL);
		int32_t L_1 = L_0;
		V_0 = L_1;
		__this->set_input_char_7(L_1);
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		__this->set_end_of_input_4((bool)1);
		return (bool)0;
	}
}
// System.Int32 LitJson.Lexer::NextChar()
extern "C" IL2CPP_METHOD_ATTR int32_t Lexer_NextChar_m737E3B54AE8BA3D6A647D70314E9542F3F1BC1E5 (Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_input_buffer_6();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->get_input_buffer_6();
		V_0 = L_1;
		__this->set_input_buffer_6(0);
		int32_t L_2 = V_0;
		return L_2;
	}

IL_0018:
	{
		TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * L_3 = __this->get_reader_8();
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_3);
		return L_4;
	}
}
// System.Boolean LitJson.Lexer::NextToken()
extern "C" IL2CPP_METHOD_ATTR bool Lexer_NextToken_mF14B4AC849AC57E930D83C06A7E22BF6278C44B2 (Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Lexer_NextToken_mF14B4AC849AC57E930D83C06A7E22BF6278C44B2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * V_0 = NULL;
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_0 = __this->get_fsm_context_5();
		NullCheck(L_0);
		L_0->set_Return_0((bool)0);
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873_il2cpp_TypeInfo_var);
		StateHandlerU5BU5D_t0387BC0AA3A50016042CC6D4DE9805920C139B67* L_1 = ((Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873_il2cpp_TypeInfo_var))->get_fsm_handler_table_1();
		int32_t L_2 = __this->get_state_9();
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
		StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * L_5 = V_0;
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_6 = __this->get_fsm_context_5();
		NullCheck(L_5);
		bool L_7 = StateHandler_Invoke_mAD84D14AB369CC8F8224BAF3D5238597FA34BED2(L_5, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = __this->get_input_char_7();
		JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886 * L_9 = (JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886 *)il2cpp_codegen_object_new(JsonException_tC3C76377189BB2AD67C01216F60F686729CDB886_il2cpp_TypeInfo_var);
		JsonException__ctor_m24DEDB1205900D0FF39D8254D5E87545C5983892(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, Lexer_NextToken_mF14B4AC849AC57E930D83C06A7E22BF6278C44B2_RuntimeMethod_var);
	}

IL_0035:
	{
		bool L_10 = __this->get_end_of_input_4();
		if (!L_10)
		{
			goto IL_003f;
		}
	}
	{
		return (bool)0;
	}

IL_003f:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_11 = __this->get_fsm_context_5();
		NullCheck(L_11);
		bool L_12 = L_11->get_Return_0();
		if (!L_12)
		{
			goto IL_00b5;
		}
	}
	{
		StringBuilder_t * L_13 = __this->get_string_buffer_10();
		NullCheck(L_13);
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		__this->set_string_value_11(L_14);
		StringBuilder_t * L_15 = __this->get_string_buffer_10();
		StringBuilder_t * L_16 = __this->get_string_buffer_10();
		NullCheck(L_16);
		int32_t L_17 = StringBuilder_get_Length_m44BCD2BF32D45E9376761FF33AA429BFBD902F07(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		StringBuilder_Remove_m5DA9C1C4D056FA61B8923BE85E6BFF44B14A24F9(L_15, 0, L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873_il2cpp_TypeInfo_var);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_18 = ((Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873_il2cpp_TypeInfo_var))->get_fsm_return_table_0();
		int32_t L_19 = __this->get_state_9();
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1));
		int32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		__this->set_token_12(L_21);
		int32_t L_22 = __this->get_token_12();
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)65542)))))
		{
			goto IL_00a2;
		}
	}
	{
		int32_t L_23 = __this->get_input_char_7();
		__this->set_token_12(L_23);
	}

IL_00a2:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_24 = __this->get_fsm_context_5();
		NullCheck(L_24);
		int32_t L_25 = L_24->get_NextState_1();
		__this->set_state_9(L_25);
		return (bool)1;
	}

IL_00b5:
	{
		FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * L_26 = __this->get_fsm_context_5();
		NullCheck(L_26);
		int32_t L_27 = L_26->get_NextState_1();
		__this->set_state_9(L_27);
		goto IL_000c;
	}
}
// System.Void LitJson.Lexer::UngetChar()
extern "C" IL2CPP_METHOD_ATTR void Lexer_UngetChar_m224D9B68B52CB0976EDCDCC2CA4FC429245B634B (Lexer_t290510AB89C5DF62CD2C676749100EEDB3A8B873 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_input_char_7();
		__this->set_input_buffer_6(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.Lexer_StateHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void StateHandler__ctor_m69A96CE1C6A022E95C84A1665403F4914ADADD2D (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean LitJson.Lexer_StateHandler::Invoke(LitJson.FsmContext)
extern "C" IL2CPP_METHOD_ATTR bool StateHandler_Invoke_mAD84D14AB369CC8F8224BAF3D5238597FA34BED2 (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * __this, FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * ___ctx0, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef bool (*FunctionPointerType) (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___ctx0, targetMethod);
				}
				else
				{
					// closed
					typedef bool (*FunctionPointerType) (void*, FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, targetMethod);
				}
			}
			else if (___parameterCount != 1)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker0< bool >::Invoke(targetMethod, ___ctx0);
							else
								result = GenericVirtFuncInvoker0< bool >::Invoke(targetMethod, ___ctx0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___ctx0);
							else
								result = VirtFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___ctx0);
						}
					}
				}
				else
				{
					typedef bool (*FunctionPointerType) (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___ctx0, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef bool (*FunctionPointerType) (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D *, const RuntimeMethod*);
							result = ((FunctionPointerType)targetMethodPointer)(___ctx0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker1< bool, FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * >::Invoke(targetMethod, targetThis, ___ctx0);
							else
								result = GenericVirtFuncInvoker1< bool, FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * >::Invoke(targetMethod, targetThis, ___ctx0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker1< bool, FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0);
							else
								result = VirtFuncInvoker1< bool, FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0);
						}
					}
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef bool (*FunctionPointerType) (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___ctx0, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker0< bool >::Invoke(targetMethod, ___ctx0);
						else
							result = GenericVirtFuncInvoker0< bool >::Invoke(targetMethod, ___ctx0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___ctx0);
						else
							result = VirtFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___ctx0);
					}
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___ctx0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef bool (*FunctionPointerType) (FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D *, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___ctx0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker1< bool, FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * >::Invoke(targetMethod, targetThis, ___ctx0);
						else
							result = GenericVirtFuncInvoker1< bool, FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * >::Invoke(targetMethod, targetThis, ___ctx0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker1< bool, FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0);
						else
							result = VirtFuncInvoker1< bool, FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0);
					}
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult LitJson.Lexer_StateHandler::BeginInvoke(LitJson.FsmContext,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* StateHandler_BeginInvoke_mBA82170F7CF9070EB70B43D6B2950C0F6A548A9B (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * __this, FsmContext_t85D378B93D1DA21CFA84D9332DCF2F3FF1A6779D * ___ctx0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___ctx0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean LitJson.Lexer_StateHandler::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR bool StateHandler_EndInvoke_mA7B45F4A679E40B1DAE4859C17416956432A813E (StateHandler_t09CEF16CC6B9AF8612EBFBD7664759FA71FA4E7C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: LitJson.ObjectMetadata
extern "C" void ObjectMetadata_t51A92A138EF838A4F6CF9954CF6AA2DD8BF15713_marshal_pinvoke(const ObjectMetadata_t51A92A138EF838A4F6CF9954CF6AA2DD8BF15713& unmarshaled, ObjectMetadata_t51A92A138EF838A4F6CF9954CF6AA2DD8BF15713_marshaled_pinvoke& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL, NULL);
}
extern "C" void ObjectMetadata_t51A92A138EF838A4F6CF9954CF6AA2DD8BF15713_marshal_pinvoke_back(const ObjectMetadata_t51A92A138EF838A4F6CF9954CF6AA2DD8BF15713_marshaled_pinvoke& marshaled, ObjectMetadata_t51A92A138EF838A4F6CF9954CF6AA2DD8BF15713& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ObjectMetadata
extern "C" void ObjectMetadata_t51A92A138EF838A4F6CF9954CF6AA2DD8BF15713_marshal_pinvoke_cleanup(ObjectMetadata_t51A92A138EF838A4F6CF9954CF6AA2DD8BF15713_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LitJson.ObjectMetadata
extern "C" void ObjectMetadata_t51A92A138EF838A4F6CF9954CF6AA2DD8BF15713_marshal_com(const ObjectMetadata_t51A92A138EF838A4F6CF9954CF6AA2DD8BF15713& unmarshaled, ObjectMetadata_t51A92A138EF838A4F6CF9954CF6AA2DD8BF15713_marshaled_com& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL, NULL);
}
extern "C" void ObjectMetadata_t51A92A138EF838A4F6CF9954CF6AA2DD8BF15713_marshal_com_back(const ObjectMetadata_t51A92A138EF838A4F6CF9954CF6AA2DD8BF15713_marshaled_com& marshaled, ObjectMetadata_t51A92A138EF838A4F6CF9954CF6AA2DD8BF15713& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ObjectMetadata
extern "C" void ObjectMetadata_t51A92A138EF838A4F6CF9954CF6AA2DD8BF15713_marshal_com_cleanup(ObjectMetadata_t51A92A138EF838A4F6CF9954CF6AA2DD8BF15713_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object LitJson.OrderedDictionaryEnumerator::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * OrderedDictionaryEnumerator_get_Current_mCD392078D50C081675FD76BB258D4EE50D607A75 (OrderedDictionaryEnumerator_tFDD06F58C7165948CC4ED07A4F1915F314DA9582 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OrderedDictionaryEnumerator_get_Current_mCD392078D50C081675FD76BB258D4EE50D607A75_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4  L_0 = OrderedDictionaryEnumerator_get_Entry_m8108EC1012F10288CF420C7171ED12F518F06B4C(__this, /*hidden argument*/NULL);
		DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4  L_1 = L_0;
		RuntimeObject * L_2 = Box(DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry LitJson.OrderedDictionaryEnumerator::get_Entry()
extern "C" IL2CPP_METHOD_ATTR DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4  OrderedDictionaryEnumerator_get_Entry_m8108EC1012F10288CF420C7171ED12F518F06B4C (OrderedDictionaryEnumerator_tFDD06F58C7165948CC4ED07A4F1915F314DA9582 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OrderedDictionaryEnumerator_get_Entry_m8108EC1012F10288CF420C7171ED12F518F06B4C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->get_list_enumerator_0();
		NullCheck(L_0);
		KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6  L_1 = InterfaceFuncInvoker0< KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Current() */, IEnumerator_1_t31ED85DD48CEA2F9F4F9E1FEEA29B8A361D36EE9_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		String_t* L_2 = KeyValuePair_2_get_Key_m89898A30A7D4B8881455AC234192D96131897B82((KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m89898A30A7D4B8881455AC234192D96131897B82_RuntimeMethod_var);
		JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * L_3 = KeyValuePair_2_get_Value_m00156609B459EF3CE0C8174F2BDDC66C7601E2D9((KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m00156609B459EF3CE0C8174F2BDDC66C7601E2D9_RuntimeMethod_var);
		DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4  L_4;
		memset(&L_4, 0, sizeof(L_4));
		DictionaryEntry__ctor_m67BC38CD2B85F134F3EB2473270CDD3933F7CD9B((&L_4), L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Object LitJson.OrderedDictionaryEnumerator::get_Key()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * OrderedDictionaryEnumerator_get_Key_mDEE680BE315DEEF06D62845CC82C9A7E28F84D44 (OrderedDictionaryEnumerator_tFDD06F58C7165948CC4ED07A4F1915F314DA9582 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OrderedDictionaryEnumerator_get_Key_mDEE680BE315DEEF06D62845CC82C9A7E28F84D44_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->get_list_enumerator_0();
		NullCheck(L_0);
		KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6  L_1 = InterfaceFuncInvoker0< KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Current() */, IEnumerator_1_t31ED85DD48CEA2F9F4F9E1FEEA29B8A361D36EE9_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		String_t* L_2 = KeyValuePair_2_get_Key_m89898A30A7D4B8881455AC234192D96131897B82((KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m89898A30A7D4B8881455AC234192D96131897B82_RuntimeMethod_var);
		return L_2;
	}
}
// System.Object LitJson.OrderedDictionaryEnumerator::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * OrderedDictionaryEnumerator_get_Value_mF4BE590A867153FF72A8434A386E4E5542C29FC9 (OrderedDictionaryEnumerator_tFDD06F58C7165948CC4ED07A4F1915F314DA9582 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OrderedDictionaryEnumerator_get_Value_mF4BE590A867153FF72A8434A386E4E5542C29FC9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->get_list_enumerator_0();
		NullCheck(L_0);
		KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6  L_1 = InterfaceFuncInvoker0< KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Current() */, IEnumerator_1_t31ED85DD48CEA2F9F4F9E1FEEA29B8A361D36EE9_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		JsonData_t9CC995E68E50031B6C116EFDAAE2DC20640F4E5B * L_2 = KeyValuePair_2_get_Value_m00156609B459EF3CE0C8174F2BDDC66C7601E2D9((KeyValuePair_2_t2A3DB740D5885EDF3E5A1809F2A323BC147C43D6 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m00156609B459EF3CE0C8174F2BDDC66C7601E2D9_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void LitJson.OrderedDictionaryEnumerator::.ctor(System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>)
extern "C" IL2CPP_METHOD_ATTR void OrderedDictionaryEnumerator__ctor_mCFF0E48275FDBBF3F61369F9A26E6F60E43DC273 (OrderedDictionaryEnumerator_tFDD06F58C7165948CC4ED07A4F1915F314DA9582 * __this, RuntimeObject* ___enumerator0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___enumerator0;
		__this->set_list_enumerator_0(L_0);
		return;
	}
}
// System.Boolean LitJson.OrderedDictionaryEnumerator::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool OrderedDictionaryEnumerator_MoveNext_mDD140A54C92FFCE09F6DC722B52858A7D4C5849E (OrderedDictionaryEnumerator_tFDD06F58C7165948CC4ED07A4F1915F314DA9582 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OrderedDictionaryEnumerator_MoveNext_mDD140A54C92FFCE09F6DC722B52858A7D4C5849E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_list_enumerator_0();
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void LitJson.OrderedDictionaryEnumerator::Reset()
extern "C" IL2CPP_METHOD_ATTR void OrderedDictionaryEnumerator_Reset_m97F7C025AE4EEE85F54B3A40D79DED30F89F6FE9 (OrderedDictionaryEnumerator_tFDD06F58C7165948CC4ED07A4F1915F314DA9582 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OrderedDictionaryEnumerator_Reset_m97F7C025AE4EEE85F54B3A40D79DED30F89F6FE9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_list_enumerator_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: LitJson.PropertyMetadata
extern "C" void PropertyMetadata_t06FEA48BAB3BF920B112B1B96327DD39D896E1D5_marshal_pinvoke(const PropertyMetadata_t06FEA48BAB3BF920B112B1B96327DD39D896E1D5& unmarshaled, PropertyMetadata_t06FEA48BAB3BF920B112B1B96327DD39D896E1D5_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL, NULL);
}
extern "C" void PropertyMetadata_t06FEA48BAB3BF920B112B1B96327DD39D896E1D5_marshal_pinvoke_back(const PropertyMetadata_t06FEA48BAB3BF920B112B1B96327DD39D896E1D5_marshaled_pinvoke& marshaled, PropertyMetadata_t06FEA48BAB3BF920B112B1B96327DD39D896E1D5& unmarshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.PropertyMetadata
extern "C" void PropertyMetadata_t06FEA48BAB3BF920B112B1B96327DD39D896E1D5_marshal_pinvoke_cleanup(PropertyMetadata_t06FEA48BAB3BF920B112B1B96327DD39D896E1D5_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LitJson.PropertyMetadata
extern "C" void PropertyMetadata_t06FEA48BAB3BF920B112B1B96327DD39D896E1D5_marshal_com(const PropertyMetadata_t06FEA48BAB3BF920B112B1B96327DD39D896E1D5& unmarshaled, PropertyMetadata_t06FEA48BAB3BF920B112B1B96327DD39D896E1D5_marshaled_com& marshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL, NULL);
}
extern "C" void PropertyMetadata_t06FEA48BAB3BF920B112B1B96327DD39D896E1D5_marshal_com_back(const PropertyMetadata_t06FEA48BAB3BF920B112B1B96327DD39D896E1D5_marshaled_com& marshaled, PropertyMetadata_t06FEA48BAB3BF920B112B1B96327DD39D896E1D5& unmarshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.PropertyMetadata
extern "C" void PropertyMetadata_t06FEA48BAB3BF920B112B1B96327DD39D896E1D5_marshal_com_cleanup(PropertyMetadata_t06FEA48BAB3BF920B112B1B96327DD39D896E1D5_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.WrapperFactory::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void WrapperFactory__ctor_m58946D1D851ECF9297D875A2B66FC448F6235036 (WrapperFactory_tD6F47E2E7EA3DDD74006601D884BD3D45744A27B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// LitJson.IJsonWrapper LitJson.WrapperFactory::Invoke()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* WrapperFactory_Invoke_m3C0A7BEE570A00F10787BB093B8B3B671DE55210 (WrapperFactory_tD6F47E2E7EA3DDD74006601D884BD3D45744A27B * __this, const RuntimeMethod* method)
{
	RuntimeObject* result = NULL;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 0)
				{
					// open
					typedef RuntimeObject* (*FunctionPointerType) (const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
				}
				else
				{
					// closed
					typedef RuntimeObject* (*FunctionPointerType) (void*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(targetMethod, targetThis);
							else
								result = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(targetMethod, targetThis);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
							else
								result = VirtFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
						}
					}
				}
				else
				{
					typedef RuntimeObject* (*FunctionPointerType) (void*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef RuntimeObject* (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject* (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(targetMethod, targetThis);
						else
							result = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(targetMethod, targetThis);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
						else
							result = VirtFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
					}
				}
			}
			else
			{
				typedef RuntimeObject* (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult LitJson.WrapperFactory::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* WrapperFactory_BeginInvoke_m325D1DECAB8C3BE34328188DD17FCA6AA0863562 (WrapperFactory_tD6F47E2E7EA3DDD74006601D884BD3D45744A27B * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// LitJson.IJsonWrapper LitJson.WrapperFactory::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* WrapperFactory_EndInvoke_m93A51EF9E448AF7E2E0644FF68C8425401AB97D8 (WrapperFactory_tD6F47E2E7EA3DDD74006601D884BD3D45744A27B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.WriterContext::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WriterContext__ctor_m66DB156E3CD81CDF68370F9DE5B03E03DEB9B380 (WriterContext_tF8EA6022A4FD5C8CDE3259696A2679111428E599 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
