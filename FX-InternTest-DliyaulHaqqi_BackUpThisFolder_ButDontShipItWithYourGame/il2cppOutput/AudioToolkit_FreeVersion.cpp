#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<ClockStone.Playlist>
struct Action_1_t023DCA8A74BAFD35D2BFAABA1BD11F1084D452E8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,ClockStone.AudioItem>
struct Dictionary_2_t57C406847BE968A40E40481F27C9CE8C715AC3FB;
// System.Collections.Generic.Dictionary`2<System.Type,ClockStone.RegisteredComponentController/InstanceContainer>
struct Dictionary_2_t42D10458D588C0FEE5C42C3E1E28C6B103723366;
// System.Collections.Generic.HashSet`1<ClockStone.IRegisteredComponent>
struct HashSet_1_t0ED9A7465BB354FB688A8D388D7E32282F3A04E4;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEqualityComparer`1<ClockStone.IRegisteredComponent>
struct IEqualityComparer_1_tB9C1E3C58B1CD5E3E6AA4C62D512F23D7C19E11B;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,ClockStone.AudioItem>
struct KeyCollection_t5F247A7AAD28AD5B0FCD4812B79319257E2D83FD;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,ClockStone.RegisteredComponentController/InstanceContainer>
struct KeyCollection_t6C2DB24150DBDC2E4BCBBB4E55F9E3463225BDF4;
// System.Collections.Generic.List`1<ClockStone.AudioCategory>
struct List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE;
// System.Collections.Generic.List`1<AudioController>
struct List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69;
// System.Collections.Generic.List`1<ClockStone.AudioObject>
struct List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,ClockStone.AudioItem>
struct ValueCollection_t3632734A5FED12C398CCACB3951FEC6526B1E0E1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,ClockStone.RegisteredComponentController/InstanceContainer>
struct ValueCollection_tC8CBF730144CF7BB1A7550A624A79BFA39A46582;
// System.Collections.Generic.Dictionary`2/Entry<System.String,ClockStone.AudioItem>[]
struct EntryU5BU5D_t845B4AA64E87CA08BC7B9C006D4A11350E2D4607;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,ClockStone.RegisteredComponentController/InstanceContainer>[]
struct EntryU5BU5D_t853AFFF4FF0C426FD076DDAEB86552E12AECC5C1;
// System.Collections.Generic.HashSet`1/Slot<ClockStone.IRegisteredComponent>[]
struct SlotU5BU5D_tA3C51F73894F4F0C827D146B139A368603CCCECD;
// System.Collections.Generic.HashSet`1/Slot<System.Int32>[]
struct SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7;
// System.Collections.Generic.HashSet`1/Slot<System.Object>[]
struct SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343;
// ClockStone.AudioCategory[]
struct AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931;
// AudioController[]
struct AudioControllerU5BU5D_t816B7EA491BCC73F501822D26032D968CC486A71;
// ClockStone.AudioItem[]
struct AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9;
// ClockStone.AudioObject[]
struct AudioObjectU5BU5D_tBAF1BA63CA9B952CDBA2BA71EB5FA5B1C5E8061E;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2;
// ClockStone.AudioSubItem[]
struct AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// ClockStone.Playlist[]
struct PlaylistU5BU5D_t47ECBFE135D02155EB82EB1DF73313E184F6BBFC;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// ClockStone.AudioCategory
struct AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// AudioController
struct AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B;
// AudioController_CurrentInspectorSelection
struct AudioController_CurrentInspectorSelection_t877D4AEFC563669DAC74331B954B1502F21370B0;
// ClockStone.AudioFader
struct AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8;
// ClockStone.AudioItem
struct AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0;
// UnityEngine.AudioListener
struct AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35;
// UnityEngine.Audio.AudioMixerGroup
struct AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311;
// ClockStone.AudioObject
struct AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// ClockStone.AudioSubItem
struct AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// ClockStone.IRegisteredComponent
struct IRegisteredComponent_t33AB1B7C4EE0FB04E502FD3D5F6C3B208FB4CA78;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ClockStone.Playlist
struct Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464;
// ClockStone.RegisteredComponent
struct RegisteredComponent_t4300DCA0919DC75A5C6AA393A74F58774173354F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// ClockStone.AudioObject/<_WaitForSecondsThenStop>d__76
struct U3C_WaitForSecondsThenStopU3Ed__76_t2808A470FCC20423D02D711EFA3877B423A25E2F;
// ClockStone.AudioObject/<_WaitThenPause>d__86
struct U3C_WaitThenPauseU3Ed__86_tFD34F3EC992FA2012BAF41C96E3F64D81058882A;
// ClockStone.AudioObject/AudioEventDelegate
struct AudioEventDelegate_tC8822AE744F66D86E67505066207E918FAD55B49;
// ClockStone.RegisteredComponentController/InstanceContainer
struct InstanceContainer_t53A92146FA15D51D3134CF2AE1CC0FF64CA2AA2D;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioController_CurrentInspectorSelection_t877D4AEFC563669DAC74331B954B1502F21370B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t42D10458D588C0FEE5C42C3E1E28C6B103723366_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t57C406847BE968A40E40481F27C9CE8C715AC3FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRegisteredComponent_t33AB1B7C4EE0FB04E502FD3D5F6C3B208FB4CA78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InstanceContainer_t53A92146FA15D51D3134CF2AE1CC0FF64CA2AA2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlaylistU5BU5D_t47ECBFE135D02155EB82EB1DF73313E184F6BBFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RegisteredComponentController_tFC8241C5D4FAEC07C39DCA2C0F997F0E09E809D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemTime_tBB4E6D26A0CC20E4075CE4171BC938B462E486FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3C_WaitForSecondsThenStopU3Ed__76_t2808A470FCC20423D02D711EFA3877B423A25E2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3C_WaitThenPauseU3Ed__86_tFD34F3EC992FA2012BAF41C96E3F64D81058882A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnitySingleton_1_tBB6EE8E3C9E85B93F48197C1ACF5054683AF72B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0BE11E57278B4DB1404B685496A04A9ACD355655;
IL2CPP_EXTERN_C String_t* _stringLiteral2FF7FCB65B590C2B394F86C4786602BEBCCA3052;
IL2CPP_EXTERN_C String_t* _stringLiteral35798455FBDD71E543E990196E96A40A422D3261;
IL2CPP_EXTERN_C String_t* _stringLiteral40CC643AB0A36950A69F5D0EC221AC0B5427EA03;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral4913D23B33460B5F333E1ADA41C2E2C90C52C383;
IL2CPP_EXTERN_C String_t* _stringLiteral4CF8C3940FAA69ADFEB2EAD0771C018E67A32FAA;
IL2CPP_EXTERN_C String_t* _stringLiteral5857551470FA48B3F71F992583A93239D3BFAF12;
IL2CPP_EXTERN_C String_t* _stringLiteral65A81C7B08D02AFDF6690BDD0015CF7F88836AB4;
IL2CPP_EXTERN_C String_t* _stringLiteral6C46A04F21960BED5806E956686255EC8CFD6A8B;
IL2CPP_EXTERN_C String_t* _stringLiteral6C78D85F550E8C00B59090610190B9B5BD0C66F0;
IL2CPP_EXTERN_C String_t* _stringLiteral758E6473B8344782EAF7F439022611DC55649C48;
IL2CPP_EXTERN_C String_t* _stringLiteral7C62319D80A1667114B99D3DE12D66AEAF6F761F;
IL2CPP_EXTERN_C String_t* _stringLiteral813E41A30FDF37C37A10C4F904FC0600F0E0B653;
IL2CPP_EXTERN_C String_t* _stringLiteral8B518739A78EB55ECB17A9B787CAC23030216C2C;
IL2CPP_EXTERN_C String_t* _stringLiteral94806DC905AE5E79B94A0190E36270E1FFA45178;
IL2CPP_EXTERN_C String_t* _stringLiteral98622D0FD4CFAA7D1C337A27D8A519739800F617;
IL2CPP_EXTERN_C String_t* _stringLiteral99C3D2B7D1E626DC59DE7C914AA3D4D25EEBE3C9;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E;
IL2CPP_EXTERN_C String_t* _stringLiteralA296D16008C5409469563CF28EE0D3005EFE3F45;
IL2CPP_EXTERN_C String_t* _stringLiteralA483326EA55F0A6B9A8E3AE0E21669F06C201513;
IL2CPP_EXTERN_C String_t* _stringLiteralA65DB9BCBEB0163A3775F09DA7A8793D6509AB0C;
IL2CPP_EXTERN_C String_t* _stringLiteralABCA200F3C8C15DE799CFE93DEC984E6CF7970DA;
IL2CPP_EXTERN_C String_t* _stringLiteralC4461E3855C5C38BF51905508061EC51329FC889;
IL2CPP_EXTERN_C String_t* _stringLiteralD13B9E863EC134A16B1CF87E9B186616C8A4F621;
IL2CPP_EXTERN_C String_t* _stringLiteralD396E2BCD3A1CDCB18C3BAE5F6E5FC372E1B51FA;
IL2CPP_EXTERN_C String_t* _stringLiteralDE6699F49675C435AD5C2ED227335AFCE93E36CF;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D78C8963239480BEFACA5FCCCDACC7DC1BA882;
IL2CPP_EXTERN_C String_t* _stringLiteralEA5E09B61C7175D79707325C52604B83E5AAD8AF;
IL2CPP_EXTERN_C String_t* _stringLiteralF05EFA084E340F89C4DE5E74F7E360320930829E;
IL2CPP_EXTERN_C String_t* _stringLiteralF0FA15B2D776869DDCA620AD25DD977A99CF9319;
IL2CPP_EXTERN_C String_t* _stringLiteralF339D65753F476DE3FBB462A5525CC8B3CF219EB;
IL2CPP_EXTERN_C String_t* _stringLiteralFB9178A7BBBBF79AD09C034887CCA5ACF29D5B34;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayHelper_AddArrayElement_TisAudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3_m59E7FA0BC41ABA9134EDC9A9BD9B31C76CC82AC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayHelper_AddArrayElement_TisPlaylist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464_mC114FE4EC4E1CCAE269DBC441C0B50A266C1342E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioObject__SwitchValues_TisAudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8_mD01DDF61AAD482FF917ABF510D6390A3759B5AD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioObject__SwitchValues_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m86A2AF4DF4D143489116E929D3A4C0B4066FE003_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioObject__SwitchValues_TisAudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3_m81B7579DB952183AA722630057764271354C34BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioObject__SwitchValues_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m46E67E3E75DD0AD4FFAA19643D52317BA37F1A32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m2C6D82D3DE7BFC234CEA24B6AC1EF7A3035F2D21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mB05DC9CA17C99E15CD04AE6D6E2080476B2983E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mE3F35548095265950B93BBD4330F675F23EE8D8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m0186C9FA3C44DD41E8B997DC6298EF1C1CEC9D0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m01108311C10D2544E0287049452819D0892C307D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m671E538B6CB142DB87304768B126D265A3CBF9CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m0654A7651B82D314499AB581E6306D60511361DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m938C00A5784839240D2001EF17093D200720CBD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_mF6EF8E8D067A73EF11D321ACF2619B1195B25EE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m066A063C37694D8BC74738B662FB6A4AD47BFF7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9C6572C9D8FFE42AAF104AACF3DBD905DB7467AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2F143CA36EEEAE0E91BA5630F399B8E0BBB03A3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553_mD65FC8927413DC0646C9E86A786906AED21B73D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisAudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553_mBC964A7F2E2F3B897F91FE94ADEFD9952A01A63E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m987D7E79C14B9D85622FE79470F1074C4D51E901_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_m33EE605071E7FE4F7FD4F6E0E3AC582993B79115_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_mC23A58813071D3DAE5E0718CC758670F4A0A5AAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m7ECA671710A9E24C7B10FAD5D26AA27852C0AB32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_get_Count_mA1EA5E599C66C8ED58AC65EE9134B256EBC0DC9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5D218F9399CBC7C480B6DC0917CAC6224A5FB251_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m75252EB65A6C0CEF418B30F9C8FAB6434FECAA46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC2A99B3CE2CBBE66E9543D96F2BF74F8C34BEDB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m4B3F3EADD398B425839F6C63623A5972539849D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1C0629CD2123A5CCED9C6F2CDF71C2DD801D26A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m26390D3628070FD2AB24152BA4FA1A5D2B318392_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m77FBC63F8A3BC762AD34B81DBF5895096ABEE37E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m68262DABB596965AC7A6AD3C9AF5488B77FAC849_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF5CF94C2536E713813EDDD76400A105EDC92F77D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m83817D343BDAC069422C14D5081E7196A6B65FF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9BF4603CEB476E53E9A4BC4A67068BA04C273D68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3C_WaitForSecondsThenStopU3Ed__76_System_Collections_IEnumerator_Reset_m126BF72F2CBE13F96E5285DCC9D6453398B4DD32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3C_WaitThenPauseU3Ed__86_System_Collections_IEnumerator_Reset_m607DB176BBA93E631EE139343927B840BE48E918_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnitySingleton_1_GetSingleton_mB6BA0A27600410387681D5C2E12A8557C814E3E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RegisteredComponent_t4300DCA0919DC75A5C6AA393A74F58774173354F_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931;
struct AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9;
struct AudioObjectU5BU5D_tBAF1BA63CA9B952CDBA2BA71EB5FA5B1C5E8061E;
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2;
struct AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PlaylistU5BU5D_t47ECBFE135D02155EB82EB1DF73313E184F6BBFC;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t6DF5DB8DD17EF2CF7224B84CAC898B64579F20A7 
{
};

// System.Collections.Generic.Dictionary`2<System.String,ClockStone.AudioItem>
struct Dictionary_2_t57C406847BE968A40E40481F27C9CE8C715AC3FB  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t845B4AA64E87CA08BC7B9C006D4A11350E2D4607* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t5F247A7AAD28AD5B0FCD4812B79319257E2D83FD* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t3632734A5FED12C398CCACB3951FEC6526B1E0E1* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,ClockStone.RegisteredComponentController/InstanceContainer>
struct Dictionary_2_t42D10458D588C0FEE5C42C3E1E28C6B103723366  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t853AFFF4FF0C426FD076DDAEB86552E12AECC5C1* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t6C2DB24150DBDC2E4BCBBB4E55F9E3463225BDF4* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC8CBF730144CF7BB1A7550A624A79BFA39A46582* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<ClockStone.IRegisteredComponent>
struct HashSet_1_t0ED9A7465BB354FB688A8D388D7E32282F3A04E4  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tA3C51F73894F4F0C827D146B139A368603CCCECD* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<ClockStone.AudioCategory>
struct List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<AudioController>
struct List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AudioControllerU5BU5D_t816B7EA491BCC73F501822D26032D968CC486A71* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<ClockStone.AudioObject>
struct List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AudioObjectU5BU5D_tBAF1BA63CA9B952CDBA2BA71EB5FA5B1C5E8061E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// ArrayHelper
struct ArrayHelper_t91B11FE5C04D8D91A654D30CC0A1C2F40485E526  : public RuntimeObject
{
};

// ClockStone.AudioCategory
struct AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA  : public RuntimeObject
{
	// System.String ClockStone.AudioCategory::Name
	String_t* ___Name_0;
	// ClockStone.AudioCategory ClockStone.AudioCategory::_parentCategory
	AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* ____parentCategory_1;
	// ClockStone.AudioFader ClockStone.AudioCategory::_audioFader
	AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* ____audioFader_2;
	// System.String ClockStone.AudioCategory::_parentCategoryName
	String_t* ____parentCategoryName_3;
	// AudioController ClockStone.AudioCategory::<audioController>k__BackingField
	AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* ___U3CaudioControllerU3Ek__BackingField_4;
	// UnityEngine.GameObject ClockStone.AudioCategory::AudioObjectPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___AudioObjectPrefab_5;
	// ClockStone.AudioItem[] ClockStone.AudioCategory::AudioItems
	AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9* ___AudioItems_6;
	// System.Single ClockStone.AudioCategory::_volume
	float ____volume_7;
	// UnityEngine.Audio.AudioMixerGroup ClockStone.AudioCategory::audioMixerGroup
	AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* ___audioMixerGroup_8;
};

// ClockStone.AudioControllerHelper
struct AudioControllerHelper_t9AC8108D1B068D59E598369426A7BAEF15F7ADD5  : public RuntimeObject
{
};

// AudioController_CurrentInspectorSelection
struct AudioController_CurrentInspectorSelection_t877D4AEFC563669DAC74331B954B1502F21370B0  : public RuntimeObject
{
	// System.Int32 AudioController_CurrentInspectorSelection::currentCategoryIndex
	int32_t ___currentCategoryIndex_0;
	// System.Int32 AudioController_CurrentInspectorSelection::currentItemIndex
	int32_t ___currentItemIndex_1;
	// System.Int32 AudioController_CurrentInspectorSelection::currentSubitemIndex
	int32_t ___currentSubitemIndex_2;
	// System.Int32 AudioController_CurrentInspectorSelection::currentPlaylistEntryIndex
	int32_t ___currentPlaylistEntryIndex_3;
	// System.Int32 AudioController_CurrentInspectorSelection::currentPlaylistIndex
	int32_t ___currentPlaylistIndex_4;
};

// ClockStone.AudioFader
struct AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8  : public RuntimeObject
{
	// System.Single ClockStone.AudioFader::_fadeOutTotalTime
	float ____fadeOutTotalTime_0;
	// System.Double ClockStone.AudioFader::_fadeOutStartTime
	double ____fadeOutStartTime_1;
	// System.Single ClockStone.AudioFader::_fadeInTotalTime
	float ____fadeInTotalTime_2;
	// System.Double ClockStone.AudioFader::_fadeInStartTime
	double ____fadeInStartTime_3;
	// System.Double ClockStone.AudioFader::<time>k__BackingField
	double ___U3CtimeU3Ek__BackingField_4;
};

// ClockStone.AudioItem
struct AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0  : public RuntimeObject
{
	// System.String ClockStone.AudioItem::Name
	String_t* ___Name_0;
	// ClockStone.AudioItem/LoopMode ClockStone.AudioItem::Loop
	int32_t ___Loop_1;
	// System.Int32 ClockStone.AudioItem::loopSequenceCount
	int32_t ___loopSequenceCount_2;
	// System.Single ClockStone.AudioItem::loopSequenceOverlap
	float ___loopSequenceOverlap_3;
	// System.Single ClockStone.AudioItem::loopSequenceRandomDelay
	float ___loopSequenceRandomDelay_4;
	// System.Single ClockStone.AudioItem::loopSequenceRandomPitch
	float ___loopSequenceRandomPitch_5;
	// System.Single ClockStone.AudioItem::loopSequenceRandomVolume
	float ___loopSequenceRandomVolume_6;
	// System.Boolean ClockStone.AudioItem::DestroyOnLoad
	bool ___DestroyOnLoad_7;
	// System.Single ClockStone.AudioItem::Volume
	float ___Volume_8;
	// ClockStone.AudioPickSubItemMode ClockStone.AudioItem::SubItemPickMode
	int32_t ___SubItemPickMode_9;
	// System.Single ClockStone.AudioItem::MinTimeBetweenPlayCalls
	float ___MinTimeBetweenPlayCalls_10;
	// System.Int32 ClockStone.AudioItem::MaxInstanceCount
	int32_t ___MaxInstanceCount_11;
	// System.Single ClockStone.AudioItem::Delay
	float ___Delay_12;
	// System.Single ClockStone.AudioItem::PitchShift
	float ___PitchShift_13;
	// System.Single ClockStone.AudioItem::RandomVolume
	float ___RandomVolume_14;
	// System.Single ClockStone.AudioItem::RandomPitch
	float ___RandomPitch_15;
	// System.Single ClockStone.AudioItem::RandomDelay
	float ___RandomDelay_16;
	// System.Boolean ClockStone.AudioItem::overrideAudioSourceSettings
	bool ___overrideAudioSourceSettings_17;
	// System.Single ClockStone.AudioItem::audioSource_MinDistance
	float ___audioSource_MinDistance_18;
	// System.Single ClockStone.AudioItem::audioSource_MaxDistance
	float ___audioSource_MaxDistance_19;
	// System.Single ClockStone.AudioItem::spatialBlend
	float ___spatialBlend_20;
	// ClockStone.AudioSubItem[] ClockStone.AudioItem::subItems
	AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* ___subItems_21;
	// System.Int32 ClockStone.AudioItem::_lastChosen
	int32_t ____lastChosen_22;
	// System.Double ClockStone.AudioItem::_lastPlayedTime
	double ____lastPlayedTime_23;
	// ClockStone.AudioCategory ClockStone.AudioItem::_category
	AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* ____category_24;
};

// ClockStone.AudioSubItem
struct AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3  : public RuntimeObject
{
	// ClockStone.AudioSubItemType ClockStone.AudioSubItem::SubItemType
	int32_t ___SubItemType_0;
	// System.Single ClockStone.AudioSubItem::Probability
	float ___Probability_1;
	// System.Boolean ClockStone.AudioSubItem::DisableOtherSubitems
	bool ___DisableOtherSubitems_2;
	// System.String ClockStone.AudioSubItem::ItemModeAudioID
	String_t* ___ItemModeAudioID_3;
	// UnityEngine.AudioClip ClockStone.AudioSubItem::Clip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___Clip_4;
	// System.Single ClockStone.AudioSubItem::Volume
	float ___Volume_5;
	// System.Single ClockStone.AudioSubItem::PitchShift
	float ___PitchShift_6;
	// System.Single ClockStone.AudioSubItem::Pan2D
	float ___Pan2D_7;
	// System.Single ClockStone.AudioSubItem::Delay
	float ___Delay_8;
	// System.Single ClockStone.AudioSubItem::RandomPitch
	float ___RandomPitch_9;
	// System.Single ClockStone.AudioSubItem::RandomVolume
	float ___RandomVolume_10;
	// System.Single ClockStone.AudioSubItem::RandomDelay
	float ___RandomDelay_11;
	// System.Single ClockStone.AudioSubItem::ClipStopTime
	float ___ClipStopTime_12;
	// System.Single ClockStone.AudioSubItem::ClipStartTime
	float ___ClipStartTime_13;
	// System.Single ClockStone.AudioSubItem::FadeIn
	float ___FadeIn_14;
	// System.Single ClockStone.AudioSubItem::FadeOut
	float ___FadeOut_15;
	// System.Boolean ClockStone.AudioSubItem::RandomStartPosition
	bool ___RandomStartPosition_16;
	// System.Collections.Generic.List`1<System.String> ClockStone.AudioSubItem::individualSettings
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___individualSettings_17;
	// System.Single ClockStone.AudioSubItem::_summedProbability
	float ____summedProbability_18;
	// System.Int32 ClockStone.AudioSubItem::_subItemID
	int32_t ____subItemID_19;
	// ClockStone.AudioItem ClockStone.AudioSubItem::_item
	AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* ____item_20;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// ClockStone.Playlist
struct Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464  : public RuntimeObject
{
	// System.String ClockStone.Playlist::name
	String_t* ___name_0;
	// System.String[] ClockStone.Playlist::playlistItems
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___playlistItems_1;
};

// ClockStone.RegisteredComponentController
struct RegisteredComponentController_tFC8241C5D4FAEC07C39DCA2C0F997F0E09E809D7  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// ClockStone.SystemTime
struct SystemTime_tBB4E6D26A0CC20E4075CE4171BC938B462E486FC  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// ClockStone.AudioObject/<_WaitForSecondsThenStop>d__76
struct U3C_WaitForSecondsThenStopU3Ed__76_t2808A470FCC20423D02D711EFA3877B423A25E2F  : public RuntimeObject
{
	// System.Int32 ClockStone.AudioObject/<_WaitForSecondsThenStop>d__76::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ClockStone.AudioObject/<_WaitForSecondsThenStop>d__76::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single ClockStone.AudioObject/<_WaitForSecondsThenStop>d__76::startToFadeTime
	float ___startToFadeTime_2;
	// ClockStone.AudioObject ClockStone.AudioObject/<_WaitForSecondsThenStop>d__76::<>4__this
	AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* ___U3CU3E4__this_3;
	// System.Single ClockStone.AudioObject/<_WaitForSecondsThenStop>d__76::fadeOutLength
	float ___fadeOutLength_4;
};

// ClockStone.AudioObject/<_WaitThenPause>d__86
struct U3C_WaitThenPauseU3Ed__86_tFD34F3EC992FA2012BAF41C96E3F64D81058882A  : public RuntimeObject
{
	// System.Int32 ClockStone.AudioObject/<_WaitThenPause>d__86::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ClockStone.AudioObject/<_WaitThenPause>d__86::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single ClockStone.AudioObject/<_WaitThenPause>d__86::waitTime
	float ___waitTime_2;
	// ClockStone.AudioObject ClockStone.AudioObject/<_WaitThenPause>d__86::<>4__this
	AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* ___U3CU3E4__this_3;
	// System.Int32 ClockStone.AudioObject/<_WaitThenPause>d__86::counter
	int32_t ___counter_4;
};

// System.Collections.Generic.HashSet`1/Enumerator<ClockStone.IRegisteredComponent>
struct Enumerator_tF1801DA5C50283A2AC81458838666BC4E4A128F5 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t0ED9A7465BB354FB688A8D388D7E32282F3A04E4* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// ClockStone.RegisteredComponentController/InstanceContainer
struct InstanceContainer_t53A92146FA15D51D3134CF2AE1CC0FF64CA2AA2D  : public HashSet_1_t0ED9A7465BB354FB688A8D388D7E32282F3A04E4
{
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Audio.AudioMixerGroup
struct AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<ClockStone.Playlist>
struct Action_1_t023DCA8A74BAFD35D2BFAABA1BD11F1084D452E8  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// ClockStone.AudioObject/AudioEventDelegate
struct AudioEventDelegate_tC8822AE744F66D86E67505066207E918FAD55B49  : public MulticastDelegate_t
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AudioController
struct AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject AudioController::AudioObjectPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___AudioObjectPrefab_5;
	// System.Boolean AudioController::Persistent
	bool ___Persistent_6;
	// System.Boolean AudioController::UnloadAudioClipsOnDestroy
	bool ___UnloadAudioClipsOnDestroy_7;
	// System.Boolean AudioController::UsePooledAudioObjects
	bool ___UsePooledAudioObjects_8;
	// System.Boolean AudioController::PlayWithZeroVolume
	bool ___PlayWithZeroVolume_9;
	// System.Boolean AudioController::EqualPowerCrossfade
	bool ___EqualPowerCrossfade_10;
	// System.Single AudioController::musicCrossFadeTime
	float ___musicCrossFadeTime_11;
	// System.Single AudioController::ambienceSoundCrossFadeTime
	float ___ambienceSoundCrossFadeTime_12;
	// System.Boolean AudioController::specifyCrossFadeInAndOutSeperately
	bool ___specifyCrossFadeInAndOutSeperately_13;
	// System.Single AudioController::_musicCrossFadeTime_In
	float ____musicCrossFadeTime_In_14;
	// System.Single AudioController::_musicCrossFadeTime_Out
	float ____musicCrossFadeTime_Out_15;
	// System.Single AudioController::_ambienceSoundCrossFadeTime_In
	float ____ambienceSoundCrossFadeTime_In_16;
	// System.Single AudioController::_ambienceSoundCrossFadeTime_Out
	float ____ambienceSoundCrossFadeTime_Out_17;
	// ClockStone.AudioCategory[] AudioController::AudioCategories
	AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931* ___AudioCategories_18;
	// ClockStone.Playlist[] AudioController::musicPlaylists
	PlaylistU5BU5D_t47ECBFE135D02155EB82EB1DF73313E184F6BBFC* ___musicPlaylists_19;
	// System.Action`1<ClockStone.Playlist> AudioController::playlistFinishedEvent
	Action_1_t023DCA8A74BAFD35D2BFAABA1BD11F1084D452E8* ___playlistFinishedEvent_20;
	// System.String[] AudioController::musicPlaylist
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___musicPlaylist_21;
	// System.Boolean AudioController::loopPlaylist
	bool ___loopPlaylist_22;
	// System.Boolean AudioController::shufflePlaylist
	bool ___shufflePlaylist_23;
	// System.Boolean AudioController::crossfadePlaylist
	bool ___crossfadePlaylist_24;
	// System.Single AudioController::delayBetweenPlaylistTracks
	float ___delayBetweenPlaylistTracks_25;
	// System.String AudioController::_currentPlaylistName
	String_t* ____currentPlaylistName_28;
	// UnityEngine.AudioListener AudioController::_currentAudioListener
	AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* ____currentAudioListener_29;
	// System.Boolean AudioController::_musicEnabled
	bool ____musicEnabled_32;
	// System.Boolean AudioController::_ambienceSoundEnabled
	bool ____ambienceSoundEnabled_33;
	// System.Boolean AudioController::_soundMuted
	bool ____soundMuted_34;
	// System.Boolean AudioController::_categoriesValidated
	bool ____categoriesValidated_35;
	// System.Boolean AudioController::_isAdditionalAudioController
	bool ____isAdditionalAudioController_36;
	// System.Boolean AudioController::_audioDisabled
	bool ____audioDisabled_37;
	// System.Collections.Generic.Dictionary`2<System.String,ClockStone.AudioItem> AudioController::_audioItems
	Dictionary_2_t57C406847BE968A40E40481F27C9CE8C715AC3FB* ____audioItems_38;
	// System.Single AudioController::_volume
	float ____volume_41;
	// System.Collections.Generic.List`1<AudioController> AudioController::_additionalAudioControllers
	List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69* ____additionalAudioControllers_46;
	// AudioController_CurrentInspectorSelection AudioController::_currentInspectorSelection
	AudioController_CurrentInspectorSelection_t877D4AEFC563669DAC74331B954B1502F21370B0* ____currentInspectorSelection_47;
};

// UnityEngine.AudioListener
struct AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// ClockStone.RegisteredComponent
struct RegisteredComponent_t4300DCA0919DC75A5C6AA393A74F58774173354F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean ClockStone.RegisteredComponent::isRegistered
	bool ___isRegistered_4;
	// System.Boolean ClockStone.RegisteredComponent::isUnregistered
	bool ___isUnregistered_5;
};

// ClockStone.AudioObject
struct AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553  : public RegisteredComponent_t4300DCA0919DC75A5C6AA393A74F58774173354F
{
	// System.String ClockStone.AudioObject::<audioID>k__BackingField
	String_t* ___U3CaudioIDU3Ek__BackingField_6;
	// ClockStone.AudioCategory ClockStone.AudioObject::_category
	AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* ____category_7;
	// AudioChannelType ClockStone.AudioObject::<channel>k__BackingField
	int32_t ___U3CchannelU3Ek__BackingField_8;
	// ClockStone.AudioSubItem ClockStone.AudioObject::_subItemPrimary
	AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* ____subItemPrimary_9;
	// ClockStone.AudioSubItem ClockStone.AudioObject::_subItemSecondary
	AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* ____subItemSecondary_10;
	// ClockStone.AudioObject/AudioEventDelegate ClockStone.AudioObject::_completelyPlayedDelegate
	AudioEventDelegate_tC8822AE744F66D86E67505066207E918FAD55B49* ____completelyPlayedDelegate_11;
	// System.Int32 ClockStone.AudioObject::_pauseCoroutineCounter
	int32_t ____pauseCoroutineCounter_12;
	// System.Boolean ClockStone.AudioObject::areSources1and2Swapped
	bool ___areSources1and2Swapped_13;
	// System.Single ClockStone.AudioObject::_volumeExcludingCategory
	float ____volumeExcludingCategory_14;
	// System.Single ClockStone.AudioObject::_volumeFromPrimaryFade
	float ____volumeFromPrimaryFade_15;
	// System.Single ClockStone.AudioObject::_volumeFromSecondaryFade
	float ____volumeFromSecondaryFade_16;
	// System.Single ClockStone.AudioObject::_volumeFromScriptCall
	float ____volumeFromScriptCall_17;
	// System.Boolean ClockStone.AudioObject::_paused
	bool ____paused_18;
	// System.Boolean ClockStone.AudioObject::_applicationPaused
	bool ____applicationPaused_19;
	// ClockStone.AudioFader ClockStone.AudioObject::_primaryFader
	AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* ____primaryFader_20;
	// ClockStone.AudioFader ClockStone.AudioObject::_secondaryFader
	AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* ____secondaryFader_21;
	// System.Double ClockStone.AudioObject::_playTime
	double ____playTime_22;
	// System.Double ClockStone.AudioObject::_playStartTimeLocal
	double ____playStartTimeLocal_23;
	// System.Double ClockStone.AudioObject::_playStartTimeSystem
	double ____playStartTimeSystem_24;
	// System.Double ClockStone.AudioObject::_playScheduledTimeDsp
	double ____playScheduledTimeDsp_25;
	// System.Double ClockStone.AudioObject::_audioObjectTime
	double ____audioObjectTime_26;
	// System.Boolean ClockStone.AudioObject::_IsInactive
	bool ____IsInactive_27;
	// System.Boolean ClockStone.AudioObject::_stopRequested
	bool ____stopRequested_28;
	// System.Boolean ClockStone.AudioObject::_finishSequence
	bool ____finishSequence_29;
	// System.Int32 ClockStone.AudioObject::_loopSequenceCount
	int32_t ____loopSequenceCount_30;
	// System.Boolean ClockStone.AudioObject::_stopAfterFadeoutUserSetting
	bool ____stopAfterFadeoutUserSetting_31;
	// System.Boolean ClockStone.AudioObject::_pauseWithFadeOutRequested
	bool ____pauseWithFadeOutRequested_32;
	// System.Double ClockStone.AudioObject::_dspTimeRemainingAtPause
	double ____dspTimeRemainingAtPause_33;
	// AudioController ClockStone.AudioObject::_audioController
	AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* ____audioController_34;
	// System.Boolean ClockStone.AudioObject::_isCurrentPlaylistTrack
	bool ____isCurrentPlaylistTrack_35;
	// System.Single ClockStone.AudioObject::_audioSource_MinDistance_Saved
	float ____audioSource_MinDistance_Saved_36;
	// System.Single ClockStone.AudioObject::_audioSource_MaxDistance_Saved
	float ____audioSource_MaxDistance_Saved_37;
	// System.Single ClockStone.AudioObject::_audioSource_SpatialBlend_Saved
	float ____audioSource_SpatialBlend_Saved_38;
	// UnityEngine.Audio.AudioMixerGroup ClockStone.AudioObject::_audioMixerGroup
	AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* ____audioMixerGroup_39;
	// System.Int32 ClockStone.AudioObject::_lastChosenSubItemIndex
	int32_t ____lastChosenSubItemIndex_40;
	// UnityEngine.AudioSource ClockStone.AudioObject::_audioSource1
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____audioSource1_41;
	// UnityEngine.AudioSource ClockStone.AudioObject::_audioSource2
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____audioSource2_42;
	// System.Boolean ClockStone.AudioObject::_primaryAudioSourcePaused
	bool ____primaryAudioSourcePaused_43;
	// System.Boolean ClockStone.AudioObject::_secondaryAudioSourcePaused
	bool ____secondaryAudioSourcePaused_44;
	// System.Boolean ClockStone.AudioObject::_primarySourceWasPlayingWhenDisabled
	bool ____primarySourceWasPlayingWhenDisabled_45;
	// System.Boolean ClockStone.AudioObject::_primarySourceWasPlayingLastUpdate
	bool ____primarySourceWasPlayingLastUpdate_46;
	// System.Boolean ClockStone.AudioObject::_secondarySourceWasPlayingWhenDisabled
	bool ____secondarySourceWasPlayingWhenDisabled_47;
	// System.Boolean ClockStone.AudioObject::_secondarySourceWasPlayingLastUpdate
	bool ____secondarySourceWasPlayingLastUpdate_48;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,ClockStone.AudioItem>

// System.Collections.Generic.Dictionary`2<System.String,ClockStone.AudioItem>

// System.Collections.Generic.Dictionary`2<System.Type,ClockStone.RegisteredComponentController/InstanceContainer>

// System.Collections.Generic.Dictionary`2<System.Type,ClockStone.RegisteredComponentController/InstanceContainer>

// System.Collections.Generic.HashSet`1<ClockStone.IRegisteredComponent>

// System.Collections.Generic.HashSet`1<ClockStone.IRegisteredComponent>

// System.Collections.Generic.HashSet`1<System.Int32>

// System.Collections.Generic.HashSet`1<System.Int32>

// System.Collections.Generic.HashSet`1<System.Object>

// System.Collections.Generic.HashSet`1<System.Object>

// System.Collections.Generic.List`1<ClockStone.AudioCategory>
struct List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ClockStone.AudioCategory>

// System.Collections.Generic.List`1<AudioController>
struct List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AudioControllerU5BU5D_t816B7EA491BCC73F501822D26032D968CC486A71* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<AudioController>

// System.Collections.Generic.List`1<ClockStone.AudioObject>
struct List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AudioObjectU5BU5D_tBAF1BA63CA9B952CDBA2BA71EB5FA5B1C5E8061E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ClockStone.AudioObject>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// ArrayHelper

// ArrayHelper

// ClockStone.AudioCategory

// ClockStone.AudioCategory

// ClockStone.AudioControllerHelper

// ClockStone.AudioControllerHelper

// AudioController_CurrentInspectorSelection

// AudioController_CurrentInspectorSelection

// ClockStone.AudioFader

// ClockStone.AudioFader

// ClockStone.AudioItem

// ClockStone.AudioItem

// ClockStone.AudioSubItem

// ClockStone.AudioSubItem

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// ClockStone.Playlist

// ClockStone.Playlist

// ClockStone.RegisteredComponentController
struct RegisteredComponentController_tFC8241C5D4FAEC07C39DCA2C0F997F0E09E809D7_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,ClockStone.RegisteredComponentController/InstanceContainer> ClockStone.RegisteredComponentController::_instanceContainers
	Dictionary_2_t42D10458D588C0FEE5C42C3E1E28C6B103723366* ____instanceContainers_0;
};

// ClockStone.RegisteredComponentController

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// ClockStone.SystemTime
struct SystemTime_tBB4E6D26A0CC20E4075CE4171BC938B462E486FC_StaticFields
{
	// System.Double ClockStone.SystemTime::_timeAtLaunch
	double ____timeAtLaunch_0;
};

// ClockStone.SystemTime

// System.ValueType

// System.ValueType

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// ClockStone.AudioObject/<_WaitForSecondsThenStop>d__76

// ClockStone.AudioObject/<_WaitForSecondsThenStop>d__76

// ClockStone.AudioObject/<_WaitThenPause>d__86

// ClockStone.AudioObject/<_WaitThenPause>d__86

// System.Collections.Generic.HashSet`1/Enumerator<ClockStone.IRegisteredComponent>

// System.Collections.Generic.HashSet`1/Enumerator<ClockStone.IRegisteredComponent>

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>

// System.Nullable`1<System.Int32>

// System.Nullable`1<System.Int32>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// ClockStone.RegisteredComponentController/InstanceContainer

// ClockStone.RegisteredComponentController/InstanceContainer

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// UnityEngine.Audio.AudioMixerGroup

// UnityEngine.Audio.AudioMixerGroup

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.MulticastDelegate

// System.MulticastDelegate

// System.SystemException

// System.SystemException

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action`1<ClockStone.Playlist>

// System.Action`1<ClockStone.Playlist>

// System.ArgumentException

// System.ArgumentException

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Transform

// UnityEngine.Transform

// ClockStone.AudioObject/AudioEventDelegate

// ClockStone.AudioObject/AudioEventDelegate

// UnityEngine.AudioBehaviour

// UnityEngine.AudioBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// AudioController
struct AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields
{
	// ClockStone.AudioObject AudioController::_currentMusic
	AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* ____currentMusic_26;
	// ClockStone.AudioObject AudioController::_currentAmbienceSound
	AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* ____currentAmbienceSound_27;
	// UnityEngine.Transform AudioController::_musicParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____musicParent_30;
	// UnityEngine.Transform AudioController::_ambienceParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____ambienceParent_31;
	// System.Collections.Generic.List`1<System.Int32> AudioController::_playlistPlayed
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____playlistPlayed_39;
	// System.Boolean AudioController::_isPlaylistPlaying
	bool ____isPlaylistPlaying_40;
	// System.Double AudioController::_systemTime
	double ____systemTime_42;
	// System.Double AudioController::_lastSystemTime
	double ____lastSystemTime_43;
	// System.Double AudioController::_systemDeltaTime
	double ____systemDeltaTime_44;
	// System.Collections.Generic.List`1<AudioController> AudioController::_additionalControllerToRegister
	List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69* ____additionalControllerToRegister_45;
};

// AudioController

// UnityEngine.AudioListener

// UnityEngine.AudioListener

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// ClockStone.RegisteredComponent

// ClockStone.RegisteredComponent

// ClockStone.AudioObject

// ClockStone.AudioObject
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// ClockStone.Playlist[]
struct PlaylistU5BU5D_t47ECBFE135D02155EB82EB1DF73313E184F6BBFC  : public RuntimeArray
{
	ALIGN_FIELD (8) Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* m_Items[1];

	inline Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ClockStone.AudioCategory[]
struct AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* m_Items[1];

	inline AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ClockStone.AudioItem[]
struct AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* m_Items[1];

	inline AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ClockStone.AudioSubItem[]
struct AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* m_Items[1];

	inline AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ClockStone.AudioObject[]
struct AudioObjectU5BU5D_tBAF1BA63CA9B952CDBA2BA71EB5FA5B1C5E8061E  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* m_Items[1];

	inline AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* m_Items[1];

	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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


// T ClockStone.UnitySingleton`1<System.Object>::GetSingleton(System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnitySingleton_1_GetSingleton_mF4AEAB511AD3BE77B449942ECED4FCA8BB20D80D_gshared (bool ___0_throwErrorIfNotFound, bool ___1_autoCreate, bool ___2_searchInObjectHierarchy, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T ArrayHelper::AddArrayElement<System.Object>(T[]&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ArrayHelper_AddArrayElement_TisRuntimeObject_mC03DBDACA95F311219A79B9E13424D36EF7E0FDF_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___0_array, RuntimeObject* ___1_elToAdd, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m511E687BF2424F8D832EA2EAA459870887FB9540_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_includeInactive, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::_SwitchValues<System.Object>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject__SwitchValues_TisRuntimeObject_m6DDC70E4363A093C0C84FA081214FC1316185389_gshared (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, RuntimeObject** ___0_v1, RuntimeObject** ___1_v2, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::_SwitchValues<System.Single>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject__SwitchValues_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m46E67E3E75DD0AD4FFAA19643D52317BA37F1A32_gshared (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, float* ___0_v1, float* ___1_v2, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;

// T ClockStone.UnitySingleton`1<AudioController>::GetSingleton(System.Boolean,System.Boolean,System.Boolean)
inline AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* UnitySingleton_1_GetSingleton_mB6BA0A27600410387681D5C2E12A8557C814E3E4 (bool ___0_throwErrorIfNotFound, bool ___1_autoCreate, bool ___2_searchInObjectHierarchy, const RuntimeMethod* method)
{
	return ((  AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* (*) (bool, bool, bool, const RuntimeMethod*))UnitySingleton_1_GetSingleton_mF4AEAB511AD3BE77B449942ECED4FCA8BB20D80D_gshared)(___0_throwErrorIfNotFound, ___1_autoCreate, ___2_searchInObjectHierarchy, method);
}
// System.Boolean System.Object::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7 (RuntimeObject* ___0_objA, RuntimeObject* ___1_objB, const RuntimeMethod* method) ;
// System.Void AudioController::_ApplyVolumeChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController__ApplyVolumeChange_mAA862CB4EBA3D692A9AAE49A0F76B0DBE838AB30 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Boolean ClockStone.AudioObject::IsPaused(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioObject_IsPaused_m3E5B6566C020302D843CF742122EC0A1DFDB5C08 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, bool ___0_returnTrueIfStillFadingOut, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::Play(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_Play_m85ADEF7E2221FB1AF872E21466ECE5B2A02C8A6F (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, float ___0_delay, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_Pause_m34AE0E99C88B119982C6DB2D687D139FFC551807 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// AudioController AudioController::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82 (const RuntimeMethod* method) ;
// ClockStone.AudioObject AudioController::_PlayMusic(System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController__PlayMusic_mE0C12FB222EC0D437C6FDE75402907DC77BCE297 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, String_t* ___0_audioID, float ___1_volume, float ___2_delay, float ___3_startTime, const RuntimeMethod* method) ;
// ClockStone.AudioObject AudioController::_PlayMusic(System.String,UnityEngine.Vector3,UnityEngine.Transform,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController__PlayMusic_m19B4000B3A1E5EB46157D6A8DEF6D0228F9E6E63 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, String_t* ___0_audioID, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___2_parentObj, float ___3_volume, float ___4_delay, float ___5_startTime, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean AudioController::_StopMusic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController__StopMusic_m03D2A3B47C0CB555DBB26575A3A1950A2957D723 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, float ___0_fadeOutLength, const RuntimeMethod* method) ;
// System.Boolean AudioController::_PauseMusic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController__PauseMusic_m6A9CB667A295BE060E2EB8753069F44D6CAD8DC1 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, float ___0_fadeOut, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::Unpause(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_Unpause_m81B063BA096DEC318A7ABE62F8C7A03A556CB7E4 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, float ___0_fadeInTime, const RuntimeMethod* method) ;
// ClockStone.AudioObject AudioController::_PlayAmbienceSound(System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController__PlayAmbienceSound_mE6CB0360FE492D842420C02605F60EACEA7FD0A5 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, String_t* ___0_audioID, float ___1_volume, float ___2_delay, float ___3_startTime, const RuntimeMethod* method) ;
// ClockStone.AudioObject AudioController::_PlayAmbienceSound(System.String,UnityEngine.Vector3,UnityEngine.Transform,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController__PlayAmbienceSound_m04AE5A6848983336A667ED4F633E086CE63559EB (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, String_t* ___0_audioID, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___2_parentObj, float ___3_volume, float ___4_delay, float ___5_startTime, const RuntimeMethod* method) ;
// System.Boolean AudioController::_StopAmbienceSound(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController__StopAmbienceSound_m7AD63BCB34F841A51110DE31932BC7D29F779D46 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, float ___0_fadeOutLength, const RuntimeMethod* method) ;
// System.Boolean AudioController::_PauseAmbienceSound(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController__PauseAmbienceSound_m3716CEAA18EE21B0F91859709E4193084ECBD0C6 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, float ___0_fadeOut, const RuntimeMethod* method) ;
// System.Int32 AudioController::_EnqueueMusic(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioController__EnqueueMusic_m61A35D744E7CC895D9C4B266F0B348918A7C2FD2 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, String_t* ___0_audioID, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// ClockStone.Playlist AudioController::GetPlaylistByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* AudioController_GetPlaylistByName_m18B65DCC3F6E01401DE80C2AA0687D7690679DF2 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, String_t* ___0_playlistName, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<AudioController>::get_Item(System.Int32)
inline AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* List_1_get_Item_m83817D343BDAC069422C14D5081E7196A6B65FF2 (List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* (*) (List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Int32 System.Collections.Generic.List`1<AudioController>::get_Count()
inline int32_t List_1_get_Count_mF5CF94C2536E713813EDDD76400A105EDC92F77D_inline (List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// ClockStone.Playlist AudioController::_GetCurrentPlaylist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* AudioController__GetCurrentPlaylist_m34E76899B97F10F2E0C768CC45EA842130DD1EBC (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___0_sourceArray, RuntimeArray* ___1_destinationArray, int32_t ___2_length, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Boolean AudioController::SetCurrentMusicPlaylist(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_SetCurrentMusicPlaylist_mC10B5B6EC4003268A0AD0F635FC32BD2EFD3B40D (String_t* ___0_playlistName, const RuntimeMethod* method) ;
// ClockStone.AudioObject AudioController::_PlayMusicPlaylist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController__PlayMusicPlaylist_m3E5ECF657C898B8D1153DFAFD91EDF2DD6A30957 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) ;
// System.Boolean AudioController::IsPlaylistPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_IsPlaylistPlaying_m76CDEE39D7835F270390046A1AFC25334757AC13 (const RuntimeMethod* method) ;
// ClockStone.AudioObject AudioController::_PlayNextMusicOnPlaylist(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController__PlayNextMusicOnPlaylist_m44169523656BAFACF68F2742D0499981DEE77B51 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, float ___0_delay, const RuntimeMethod* method) ;
// ClockStone.AudioObject AudioController::_PlayPreviousMusicOnPlaylist(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController__PlayPreviousMusicOnPlaylist_mF436C902224FA76A90B9E5A2400265C2BF5E574E (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, float ___0_delay, const RuntimeMethod* method) ;
// System.Void ClockStone.Playlist::.ctor(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playlist__ctor_mB99705B06CD5FD59CBE3B6ECA3F13B21670B3B8D (Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* __this, String_t* ___0_name, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_playlistItems, const RuntimeMethod* method) ;
// T ArrayHelper::AddArrayElement<ClockStone.Playlist>(T[]&,T)
inline Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* ArrayHelper_AddArrayElement_TisPlaylist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464_mC114FE4EC4E1CCAE269DBC441C0B50A266C1342E (PlaylistU5BU5D_t47ECBFE135D02155EB82EB1DF73313E184F6BBFC** ___0_array, Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* ___1_elToAdd, const RuntimeMethod* method)
{
	return ((  Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* (*) (PlaylistU5BU5D_t47ECBFE135D02155EB82EB1DF73313E184F6BBFC**, Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464*, const RuntimeMethod*))ArrayHelper_AddArrayElement_TisRuntimeObject_mC03DBDACA95F311219A79B9E13424D36EF7E0FDF_gshared)(___0_array, ___1_elToAdd, method);
}
// UnityEngine.AudioListener AudioController::GetCurrentAudioListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* AudioController_GetCurrentAudioListener_m02D86AD321D751BAC583DE585D81A2830969D4FD (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// ClockStone.AudioObject AudioController::Play(System.String,UnityEngine.Vector3,UnityEngine.Transform,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController_Play_m49C0ED7CACFFB95BA64323C03F27F89F4889AD76 (String_t* ___0_audioID, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_worldPosition, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___2_parentObj, float ___3_volume, float ___4_delay, float ___5_startTime, const RuntimeMethod* method) ;
// ClockStone.AudioObject AudioController::_PlayEx(System.String,AudioChannelType,System.Single,UnityEngine.Vector3,UnityEngine.Transform,System.Single,System.Single,System.Boolean,System.Double,ClockStone.AudioObject,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController__PlayEx_m67BFBEB1B06D98669996848F7E16FD24961014C5 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, String_t* ___0_audioID, int32_t ___1_channel, float ___2_volume, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_worldPosition, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___4_parentObj, float ___5_delay, float ___6_startTime, bool ___7_playWithoutAudioObject, double ___8_dspTime, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* ___9_useExistingAudioObject, float ___10_startVolumeMultiplier, const RuntimeMethod* method) ;
// System.Double UnityEngine.AudioSettings::get_dspTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA (const RuntimeMethod* method) ;
// System.Boolean ClockStone.AudioObject::IsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioObject_IsPlaying_m9A39EA279DC025604E0EB1423B38D2401CED651F (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Single ClockStone.AudioObject::get_timeUntilEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioObject_get_timeUntilEnd_m128758E4D90E1C16EDBA09DC993FDE766CBF3605 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// ClockStone.AudioObject AudioController::PlayScheduled(System.String,System.Double,UnityEngine.Vector3,UnityEngine.Transform,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController_PlayScheduled_m19D5D688A794B9D9EAAA3B394C474D8ACB698AE2 (String_t* ___0_audioID, double ___1_dspTime, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_worldPosition, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___3_parentObj, float ___4_volume, float ___5_startTime, const RuntimeMethod* method) ;
// ClockStone.AudioItem AudioController::_GetAudioItem(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* AudioController__GetAudioItem_m1243AAE48D2F5386F106190EC1FC2D8073B7B632 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, String_t* ___0_audioID, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<ClockStone.AudioObject> AudioController::GetPlayingAudioObjects(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* AudioController_GetPlayingAudioObjects_mCEE013FBDD6C7CDBF2C9B66C33F3AF2CA567D0CB (String_t* ___0_audioID, bool ___1_includePausedAudio, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<ClockStone.AudioObject>::get_Item(System.Int32)
inline AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639 (List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* (*) (List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void ClockStone.AudioObject::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_Stop_m9A3221CC31D6CD491CE07EE835A5A30D51125138 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::Stop(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_Stop_m793AABEC01EF24936D60037EB89C617B13AD9740 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, float ___0_fadeOutLength, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<ClockStone.AudioObject>::get_Count()
inline int32_t List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_inline (List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Boolean AudioController::Stop(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_Stop_m6BC3701819E727344B897C50C396DB52704D2614 (String_t* ___0_audioID, float ___1_fadeOutLength, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<ClockStone.AudioObject> AudioController::GetPlayingAudioObjects(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* AudioController_GetPlayingAudioObjects_m9E3B6784F0F27B1E5B27AD002EA68330F0A69103 (bool ___0_includePausedAudio, const RuntimeMethod* method) ;
// System.Void AudioController::StopAll(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_StopAll_mC74E8CC27E4DA706ED6572ED9A2C31F7E2FF866D (float ___0_fadeOutLength, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::Pause(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_Pause_m75B0D2F903F51B6D80133DBDC5737931E2D9F3E2 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, float ___0_fadeOutTime, const RuntimeMethod* method) ;
// System.Boolean AudioController::UnpauseMusic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_UnpauseMusic_mD6D8D8BB59D0D15CF7CCEC5998CC3BB382AD0820 (float ___0_fadeIn, const RuntimeMethod* method) ;
// System.Boolean AudioController::UnpauseAmbienceSound(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_UnpauseAmbienceSound_m00F14F29E5A0CAB70D586EA91DB146B4A744E044 (float ___0_fadeIn, const RuntimeMethod* method) ;
// System.Boolean AudioController::get_musicEnabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AudioController_get_musicEnabled_mF55BDA1639F54A02F7B88469DB1A57C853A7A8C2_inline (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) ;
// System.Boolean AudioController::get_ambienceSoundEnabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AudioController_get_ambienceSoundEnabled_m25FAB0BBB687B1DC2152293A4D38967B4F405073_inline (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) ;
// ClockStone.AudioCategory ClockStone.AudioObject::get_category()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* AudioObject_get_category_m1B694D47010EA8BEDF53B11C36F460F99CE67AAD_inline (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Boolean AudioController::PauseMusic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_PauseMusic_m9F0C7BAC9D1D35B0FD04BB323E8986955650208C (float ___0_fadeOut, const RuntimeMethod* method) ;
// System.Boolean AudioController::PauseAmbienceSound(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_PauseAmbienceSound_m9A0B2885F41502179023E13DA60E195C23742AA6 (float ___0_fadeOut, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<ClockStone.AudioObject> AudioController::GetPlayingAudioObjectsInCategory(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* AudioController_GetPlayingAudioObjectsInCategory_mBA89AEC388CC2BB5D5B87CF4E1BC718094C498FE (String_t* ___0_categoryName, bool ___1_includePausedAudio, const RuntimeMethod* method) ;
// System.Boolean AudioController::StopMusic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_StopMusic_m2F52F5FF594527AAAC955A15D4950BB263886165 (float ___0_fadeOut, const RuntimeMethod* method) ;
// System.Boolean AudioController::StopAmbienceSound(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_StopAmbienceSound_m2773D9A9CBD1B546FC7D9059BC60E05411336BFF (float ___0_fadeOut, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ClockStone.AudioObject>::.ctor(System.Int32)
inline void List_1__ctor_m77FBC63F8A3BC762AD34B81DBF5895096ABEE37E (List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___0_capacity, method);
}
// System.String ClockStone.AudioObject::get_audioID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AudioObject_get_audioID_m07AC1667AE18FFF1A4954E60D7223561E12DF0D1_inline (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ClockStone.AudioObject>::Add(T)
inline void List_1_Add_m75252EB65A6C0CEF418B30F9C8FAB6434FECAA46_inline (List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* __this, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9*, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean ClockStone.AudioObject::DoesBelongToCategory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioObject_DoesBelongToCategory_m16E47EDED67309A145EA4B2A7BC6CD8D92A32B18 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, String_t* ___0_categoryName, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Object[] ClockStone.RegisteredComponentController::GetAllOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* RegisteredComponentController_GetAllOfType_mF1C951C9B305607BFF071D2972E55073D4909439 (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Void AudioController::set_musicEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_set_musicEnabled_m6E280F26D90958F3A164D2FC6095C98FDA60943B (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void AudioController::set_ambienceSoundEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_set_ambienceSoundEnabled_m97B0206E1DF64E4DC1FDB873CCEE50E900FEE752 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void AudioController::set_soundMuted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_set_soundMuted_m959DFE7AFCED1022F990C72EF11C6DA3ED935BFE (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean AudioController::get_soundMuted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AudioController_get_soundMuted_m1BEF7EB429D80238FF5440E7C017F632DEF92E58_inline (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_FindObjectOfType_mECCF3627FE53B9B53B5D92BFB9FA88490B0ACD5E (Type_t* ___0_type, const RuntimeMethod* method) ;
// ClockStone.AudioCategory AudioController::_GetCategory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* AudioController__GetCategory_mCADD0D8AE46FAACDD6E5116396F8836ECAFD562A (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<ClockStone.AudioCategory> AudioController::_GetAllCategories(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE* AudioController__GetAllCategories_m7893AC462ECA0912A18677156087746FD1C21A22 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<ClockStone.AudioCategory>::get_Count()
inline int32_t List_1_get_Count_m68262DABB596965AC7A6AD3C9AF5488B77FAC849_inline (List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<ClockStone.AudioCategory>::get_Item(System.Int32)
inline AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* List_1_get_Item_m9BF4603CEB476E53E9A4BC4A67068BA04C273D68 (List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* (*) (List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void ClockStone.AudioCategory::set_Volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioCategory_set_Volume_m36CFDDEFD3C060651851B76A8598680D051656F0 (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, float ___0_value, const RuntimeMethod* method) ;
// ClockStone.AudioCategory AudioController::GetCategory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* AudioController_GetCategory_mF6876E8145A30270FF6DC45E7B801EE8F66CD3D0 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Single ClockStone.AudioCategory::get_Volume()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AudioCategory_get_Volume_mF87941E6A9F8725B2DAA2780070B9E279E1DCF24_inline (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioCategory::FadeOut(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioCategory_FadeOut_mB642FE78F3D86D44146F26C0F95BF9873595DC8E (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, float ___0_fadeOutLength, float ___1_startToFadeTime, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioCategory::FadeIn(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioCategory_FadeIn_mB74842630735404302D0C4B5F36DED49A1D2DABA (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, float ___0_fadeInTime, bool ___1_stopCurrentFadeOut, const RuntimeMethod* method) ;
// System.Void AudioController::set_Volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_set_Volume_mD3269DBE0C907A6D15CFC443E08EA7DDF9F7A3E0 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single AudioController::get_Volume()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AudioController_get_Volume_m76D0F25F710E931B3BCB1811834BBF45ACCCF137_inline (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) ;
// System.Void System.Array::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB (RuntimeArray* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioCategory::.ctor(AudioController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioCategory__ctor_mB5BC03081781FBF14B5EE1F9A0B3C15750F8C858 (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* ___0_audioController, const RuntimeMethod* method) ;
// System.Void AudioController::_InvalidateCategories()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController__InvalidateCategories_mD3461E474AE26627D1EE78226427DB297AF35A3D (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioItem__ctor_m82BCD9D53B3781595FC878E08CD96B1223E4D986 (AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* __this, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioSubItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSubItem__ctor_m2488D8491E6DDB4F0B7BE60D6F523220AC301F33 (AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* __this, const RuntimeMethod* method) ;
// System.Void AudioController::AddToCategory(ClockStone.AudioCategory,ClockStone.AudioItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_AddToCategory_mFDDCF624F949E6D2BAFC25BE5AF936357E0D9A06 (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* ___0_category, AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* ___1_audioItem, const RuntimeMethod* method) ;
// ClockStone.AudioCategory ClockStone.AudioItem::get_category()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* AudioItem_get_category_mA6BE3D42E8FBE2687F68B5017B451ECC79884DE9_inline (AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* __this, const RuntimeMethod* method) ;
// System.Int32 ClockStone.AudioCategory::_GetIndexOf(ClockStone.AudioItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioCategory__GetIndexOf_mE03693754E027447A26055245A3B5863FF35E1F4 (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* ___0_audioItem, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,ClockStone.AudioItem>::Remove(TKey)
inline bool Dictionary_2_Remove_m0186C9FA3C44DD41E8B997DC6298EF1C1CEC9D0F (Dictionary_2_t57C406847BE968A40E40481F27C9CE8C715AC3FB* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t57C406847BE968A40E40481F27C9CE8C715AC3FB*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___0_key, method);
}
// T[] UnityEngine.GameObject::GetComponentsInChildren<ClockStone.AudioObject>(System.Boolean)
inline AudioObjectU5BU5D_tBAF1BA63CA9B952CDBA2BA71EB5FA5B1C5E8061E* GameObject_GetComponentsInChildren_TisAudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553_mBC964A7F2E2F3B897F91FE94ADEFD9952A01A63E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_includeInactive, const RuntimeMethod* method)
{
	return ((  AudioObjectU5BU5D_tBAF1BA63CA9B952CDBA2BA71EB5FA5B1C5E8061E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m511E687BF2424F8D832EA2EAA459870887FB9540_gshared)(__this, ___0_includeInactive, method);
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// ClockStone.AudioItem AudioController::GetAudioItem(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* AudioController_GetAudioItem_mF34D3C0E02CCDDD5E43FAD801E0E73212F915F4A (String_t* ___0_audioID, const RuntimeMethod* method) ;
// UnityEngine.GameObject ClockStone.AudioCategory::GetAudioObjectPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AudioCategory_GetAudioObjectPrefab_m76914CC50BB6D19D9202F13F73F5570129D48A57 (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Single UnityEngine.AudioSource::get_maxDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_maxDistance_m8C31CB391B999C8D344EFF0AFB8E20488F7A5F7E (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioCategory::UnloadAllAudioClips()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioCategory_UnloadAllAudioClips_m055FD38B2D98BCC66716342154FCF762EEFBF4F1 (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::_ApplyVolumeBoth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject__ApplyVolumeBoth_mC4D88C6291192E9269EFAB4BE5DDDFAB2EADA48C (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Void AudioController::_ValidateCategories()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController__ValidateCategories_mD6DC4E5F936E40663A501D36FE7492EACF2ABBE5 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,ClockStone.AudioItem>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m01108311C10D2544E0287049452819D0892C307D (Dictionary_2_t57C406847BE968A40E40481F27C9CE8C715AC3FB* __this, String_t* ___0_key, AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t57C406847BE968A40E40481F27C9CE8C715AC3FB*, String_t*, AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean AudioController::IsMusicEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_IsMusicEnabled_m385434ED0D5C8FA3C12ABD903CF23D34BE7CBC73 (const RuntimeMethod* method) ;
// System.Single AudioController::get_musicCrossFadeTime_Out()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioController_get_musicCrossFadeTime_Out_m7EA9DEAAB1B393141B55C39126BDE10E67EFAC67 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) ;
// System.Single AudioController::get_musicCrossFadeTime_In()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioController_get_musicCrossFadeTime_In_mC34B4362B7192CB00672A16130C079A8EFEA7F26 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::FadeIn(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_FadeIn_mE7C98E14EF6B0877C77DBBA6E48F090559C02539 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, float ___0_fadeInTime, const RuntimeMethod* method) ;
// System.Boolean AudioController::IsAmbienceSoundEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_IsAmbienceSoundEnabled_m36CD947BB4F445F28CE97C4B7B49B3C9E35080EE (const RuntimeMethod* method) ;
// System.Single AudioController::get_ambienceSoundCrossFadeTime_Out()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioController_get_ambienceSoundCrossFadeTime_Out_m3335A5503E262705DAB83A5B4327BCF09CEFDC40 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) ;
// System.Single AudioController::get_ambienceSoundCrossFadeTime_In()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioController_get_ambienceSoundCrossFadeTime_In_m58F9E7485C6A35E721635D3344DDC9B8E703C593 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) ;
// System.Void AudioController::_ResetLastPlayedList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController__ResetLastPlayedList_mEBF0E8035AD8441E1FE6030863A703A7BB0DC6EC (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___0_item, method);
}
// UnityEngine.AudioSource ClockStone.AudioObject::get_primaryAudioSource()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Int32 AudioController::_GetNextMusicTrack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioController__GetNextMusicTrack_m03D2EB82D866FAA50F158AF8C806B5654D212B8A (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) ;
// ClockStone.AudioObject AudioController::_PlayMusicTrackWithID(System.Int32,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController__PlayMusicTrackWithID_mF87608B771BC1E70AA71D0012547F5B1C4D4FCB2 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, int32_t ___0_nextTrack, float ___1_delay, bool ___2_addToPlayedList, const RuntimeMethod* method) ;
// System.Int32 AudioController::_GetPreviousMusicTrack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioController__GetPreviousMusicTrack_mC0925C907E444A8EBB93C1CE059FE8C76FD93712 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline)(__this, method);
}
// System.Int32 AudioController::_GetNextMusicTrackShuffled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioController__GetNextMusicTrackShuffled_mA41F8765AB9C462936C82EBCD429E11A4BEDA3B1 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) ;
// System.Int32 AudioController::_GetNextMusicTrackInOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioController__GetNextMusicTrackInOrder_m513F605F8C7E0EC5A2D0C5582058895E56CA2D7B (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) ;
// System.Int32 AudioController::_GetPreviousMusicTrackShuffled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioController__GetPreviousMusicTrackShuffled_mCFA5595DA691C3687D331D222E3E1F73EFC6F96F (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) ;
// System.Int32 AudioController::_GetPreviousMusicTrackInOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioController__GetPreviousMusicTrackInOrder_mEE7F3FBD71F2084F05B534EB4242D84DD30976BC (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___0_index, method);
}
// System.Void AudioController::_RemoveLastPlayedOnList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController__RemoveLastPlayedOnList_m47DDACDCF87932472CB33471719CA7C5EC583726 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor()
inline void HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, const RuntimeMethod*))HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_gshared)(__this, method);
}
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Add(T)
inline bool HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, int32_t, const RuntimeMethod*))HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Contains(T)
inline bool HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, int32_t, const RuntimeMethod*))HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1_gshared)(__this, ___0_item, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// System.Double AudioController::get_systemTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double AudioController_get_systemTime_mB3A112C83ABEB814B3F4377F12D1385E886A9A1F_inline (const RuntimeMethod* method) ;
// System.Boolean ClockStone.AudioObject::get_isFadingOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioObject_get_isFadingOut_m2C48C459F237CF66487840CBC2C6AF1811CFEABC (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Double ClockStone.AudioObject::get_startedPlayingAtTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double AudioObject_get_startedPlayingAtTime_mD10B3AFA7BE749CD8B16D107B83B0359A7E8B7AF_inline (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// ClockStone.AudioObject AudioController::PlayAudioItem(ClockStone.AudioItem,System.Single,UnityEngine.Vector3,UnityEngine.Transform,System.Single,System.Single,System.Boolean,ClockStone.AudioObject,System.Double,AudioChannelType,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController_PlayAudioItem_m6510B59A4482E0E6F38D9E001D9E8DBBD498231A (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* ___0_sndItem, float ___1_volume, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_worldPosition, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___3_parentObj, float ___4_delay, float ___5_startTime, bool ___6_playWithoutAudioObject, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* ___7_useExistingAudioObj, double ___8_dspTime, int32_t ___9_channel, float ___10_startVolumeMultiplier, const RuntimeMethod* method) ;
// ClockStone.AudioSubItem[] ClockStone.AudioControllerHelper::_ChooseSubItems(ClockStone.AudioItem,ClockStone.AudioObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* AudioControllerHelper__ChooseSubItems_mC3AE24161FB7B55874490D72765B7838AD7E2062 (AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* ___0_audioItem, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* ___1_useExistingAudioObj, const RuntimeMethod* method) ;
// ClockStone.AudioObject AudioController::PlayAudioSubItem(ClockStone.AudioSubItem,System.Single,UnityEngine.Vector3,UnityEngine.Transform,System.Single,System.Single,System.Boolean,ClockStone.AudioObject,System.Double,AudioChannelType,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController_PlayAudioSubItem_m2138408A93FC640847B66794558B053C84DAF28B (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* ___0_subItem, float ___1_volume, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_worldPosition, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___3_parentObj, float ___4_delay, float ___5_startTime, bool ___6_playWithoutAudioObject, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* ___7_useExistingAudioObj, double ___8_dspTime, int32_t ___9_channel, float ___10_startVolumeMultiplier, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::set_audioID(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioObject_set_audioID_m8C5F78F770A16263871EE418FFFF98AD3DCEAE9F_inline (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.AudioSource::get_minDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_minDistance_m459BE399BBBEA04CBBCF50CFB15A09CB3D7431F0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AudioSource::get_spatialBlend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_spatialBlend_m06E7948B2813AA3EAE031BD4D1DE61A29416B1CE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_minDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_minDistance_m6CBE3A60C03C0F179192FBDD62095B2E9D717690 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_maxDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_maxDistance_m4BF310D54761500A77A6C4841A0BBDBD09225813 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_spatialBlend(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatialBlend_mCEE7A3E87A8C146E048B2CA3413FDC7BDB7BE001 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.AudioSource ClockStone.AudioObject::get_secondaryAudioSource()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* AudioObject_get_secondaryAudioSource_m0CF34784C9E1E9C35DC1CF3D7AE9D78F34FF2FA8_inline (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Void AudioController::_UpdateSystemTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController__UpdateSystemTime_m4E69FA628E25B78854C5B118D616A86F075808EA (const RuntimeMethod* method) ;
// System.Double ClockStone.SystemTime::get_timeSinceLaunch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SystemTime_get_timeSinceLaunch_mD949F481D95BFDB8ADE5D4A49A204453730722FB (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_maximumDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_maximumDeltaTime_m0C12CC936444852BD2E15B2531DDC238BA115B7C (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Boolean AudioController::get_isAdditionalAudioController()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AudioController_get_isAdditionalAudioController_m45AF12A42E7BF0FF1D9A8D91EE57B958AE531738_inline (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) ;
// System.Boolean AudioController::DoesInstanceExist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_DoesInstanceExist_m6AF468A9E14546039D6929D36BF5CC749ECBAC94 (const RuntimeMethod* method) ;
// System.Void AudioController::_RegisterAdditionalAudioController(AudioController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController__RegisterAdditionalAudioController_m7B3E5EAD4A8307AE7D8014CE94F1D2234A221D1B (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* ___0_ac, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<AudioController>::.ctor()
inline void List_1__ctor_m26390D3628070FD2AB24152BA4FA1A5D2B318392 (List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<AudioController>::Add(T)
inline void List_1_Add_m5D218F9399CBC7C480B6DC0917CAC6224A5FB251_inline (List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69* __this, AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69*, AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void AudioController::_UnregisterAdditionalAudioController(AudioController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController__UnregisterAdditionalAudioController_mA50AB7FAD5C0BCA767C672DB7A94BEA024B1DE2C (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* ___0_ac, const RuntimeMethod* method) ;
// System.Void AudioController::UnloadAllAudioClips()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_UnloadAllAudioClips_m787783D1D1AABD9CB66FA0979909FD78B2C76254 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) ;
// System.Void AudioController::_ValidateAudioObjectPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController__ValidateAudioObjectPrefab_m4EADD64F5DD080482A6CA142172EA2CC73BAD8E5 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_audioPrefab, const RuntimeMethod* method) ;
// System.Void AudioController::_SetDefaultCurrentPlaylist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController__SetDefaultCurrentPlaylist_mC4A97519A71528CB71F57CF3530C445751A39665 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) ;
// System.Void AudioController::InitializeAudioItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_InitializeAudioItems_m62A9CBAA4817847B373BF64D55924263211AD206 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,ClockStone.AudioItem>::.ctor()
inline void Dictionary_2__ctor_m0654A7651B82D314499AB581E6306D60511361DA (Dictionary_2_t57C406847BE968A40E40481F27C9CE8C715AC3FB* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t57C406847BE968A40E40481F27C9CE8C715AC3FB*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void AudioController::_InitializeAudioItems(AudioController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController__InitializeAudioItems_m6962019237DA495AF6D37CC649C5911AB1A7AB62 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* ___0_audioController, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioCategory::set_audioController(AudioController)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioCategory_set_audioController_m5276D4CA40A5C4D342C9E3928EBE8948EC0218D7_inline (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* ___0_value, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioCategory::_AnalyseAudioItems(System.Collections.Generic.Dictionary`2<System.String,ClockStone.AudioItem>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioCategory__AnalyseAudioItems_m1CC5231E6EF590A41E1CF75B8C4A1E4C91A4BB11 (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, Dictionary_2_t57C406847BE968A40E40481F27C9CE8C715AC3FB* ___0_audioItemsDict, const RuntimeMethod* method) ;
// System.Void AudioController::_SyncCategoryVolumes(AudioController,AudioController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController__SyncCategoryVolumes_m11F10711EB0A686ED078BD6CFC1388D1BCA3E834 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* ___0_toSync, AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* ___1_syncWith, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<AudioController>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m4B3F3EADD398B425839F6C63623A5972539849D0 (List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___0_index, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ClockStone.AudioCategory>::.ctor()
inline void List_1__ctor_m1C0629CD2123A5CCED9C6F2CDF71C2DD801D26A1 (List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<ClockStone.AudioCategory>::Add(T)
inline void List_1_Add_mC2A99B3CE2CBBE66E9543D96F2BF74F8C34BEDB8_inline (List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE* __this, AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE*, AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// ClockStone.AudioItem ClockStone.AudioSubItem::get_item()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* AudioSubItem_get_item_m53E96EF703004CD165FD10212837F30EDBD20C38_inline (AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Single ClockStone.AudioCategory::get_VolumeTotal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioCategory_get_VolumeTotal_m972D0490ECC2ED900D325E146ED55107082824C7 (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, const RuntimeMethod* method) ;
// AudioController AudioController::_GetAudioController(ClockStone.AudioSubItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* AudioController__GetAudioController_m9A81CC7C56B9410FD790C69E1ED28B64F610A19E (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* ___0_subItem, const RuntimeMethod* method) ;
// System.Single ClockStone.AudioObject::TransformVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioObject_TransformVolume_m4E6AB3C6BCB41F5B1D7DBD7527E67BED94364B44 (float ___0_volume, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mF6FE95C58996B38EF6E7F7482F95F5E15E0AB30B (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, float ___1_volumeScale, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<ClockStone.AudioObject>()
inline AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* GameObject_GetComponent_TisAudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553_mD65FC8927413DC0646C9E86A786906AED21B73D8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void ClockStone.AudioObject::set_subItem(ClockStone.AudioSubItem)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioObject_set_subItem_m84C0283818EFCF174279DD41374EB80FC9BC0250_inline (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Single ClockStone.AudioObject::TransformPitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioObject_TransformPitch_m69F30ACF757DBAE04792FFF9E35A6C79963DC953 (float ___0_pitchSemiTones, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_panStereo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_panStereo_mE3BA673B5F93F731114E8901355A63F07C8A54DF (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single ClockStone.AudioObject::get_clipLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioObject_get_clipLength_mB96E3BA96B35CA8F1B7AFFB032F33197D76335CC (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_time(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_time_m6670372FD9C494978B7B3E01B7F4D220616F6204 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::set_category(ClockStone.AudioCategory)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioObject_set_category_m7341517B0BDD393E77BE2E576F21F1494CDAC1E1_inline (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* ___0_value, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::set_channel(AudioChannelType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioObject_set_channel_m713E350808B9959C31DAAAB5B0BD0D2FA74A1A22_inline (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::_ApplyVolumePrimary(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject__ApplyVolumePrimary_mA8DEF9B9775004AF5A666399C64CAECA2A7B05C6 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, float ___0_volumeMultiplier, const RuntimeMethod* method) ;
// UnityEngine.Audio.AudioMixerGroup ClockStone.AudioCategory::GetAudioMixerGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* AudioCategory_GetAudioMixerGroup_m63DCE1384A774C6800E2C0F5B9679E421A1FFF3E (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_outputAudioMixerGroup(UnityEngine.Audio.AudioMixerGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_outputAudioMixerGroup_m10D0A0EAE270424CD2F3BB960CFAA158D9FC24CF (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.AudioSource::get_pitch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_pitch_mB1B0B8A52400B5C798BF1E644FE1C2FFA20A9863 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::PlayScheduled(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_PlayScheduled_mB5C7557A00ED8B16E7374D43EEBE61394117CBA1 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, double ___0_dspTime, const RuntimeMethod* method) ;
// AudioController ClockStone.AudioCategory::get_audioController()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* AudioCategory_get_audioController_m1675648A0516A6A61319734FD1ED7ACA5854AD14_inline (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<ClockStone.Playlist>::Invoke(T)
inline void Action_1_Invoke_m68D559B79B66F2C4FEDE009F454AA78D0A396CCA_inline (Action_1_t023DCA8A74BAFD35D2BFAABA1BD11F1084D452E8* __this, Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t023DCA8A74BAFD35D2BFAABA1BD11F1084D452E8*, Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___0_collection, method);
}
// System.Void ClockStone.Playlist::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playlist__ctor_m272597928C27B291280C5A46445D3E73D3B905FA (Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void AudioController_CurrentInspectorSelection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_CurrentInspectorSelection__ctor_m942F52EB322120E0E3E0AB44F62DE65159E21C79 (AudioController_CurrentInspectorSelection_t877D4AEFC563669DAC74331B954B1502F21370B0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// ClockStone.AudioSubItem[] ClockStone.AudioControllerHelper::_ChooseSubItems(ClockStone.AudioItem,ClockStone.AudioPickSubItemMode,ClockStone.AudioObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* AudioControllerHelper__ChooseSubItems_mDA31D94C5E912F75CA4FDABE6BFD6DE48BA8C99D (AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* ___0_audioItem, int32_t ___1_pickMode, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* ___2_useExistingAudioObj, const RuntimeMethod* method) ;
// ClockStone.AudioSubItem ClockStone.AudioControllerHelper::_ChooseSingleSubItem(ClockStone.AudioItem,ClockStone.AudioPickSubItemMode,ClockStone.AudioObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* AudioControllerHelper__ChooseSingleSubItem_mFE4768452DB7A6121EE6B50D4321FB181936AF8F (AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* ___0_audioItem, int32_t ___1_pickMode, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* ___2_useExistingAudioObj, const RuntimeMethod* method) ;
// System.Int32 ClockStone.AudioControllerHelper::_ChooseRandomSubitem(ClockStone.AudioItem,System.Boolean,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioControllerHelper__ChooseRandomSubitem_m0D9B629D781D99FE87172819DF0E3BA79A4D47FB (AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* ___0_audioItem, bool ___1_allowSameElementTwiceInRow, int32_t ___2_lastChosen, bool ___3_switchOddsEvens, const RuntimeMethod* method) ;
// System.Single ClockStone.AudioSubItem::get__SummedProbability()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AudioSubItem_get__SummedProbability_mB306786B200874B880CA1521EA4BEAB4FB5503E2_inline (AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* __this, const RuntimeMethod* method) ;
// System.Boolean ClockStone.AudioControllerHelper::isOdd(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioControllerHelper_isOdd_m58DEE9D121976BF65EE23FCE40F2047A9016F1FA (int32_t ___0_i, const RuntimeMethod* method) ;
// System.Double ClockStone.AudioFader::get_time()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double AudioFader_get_time_mDA07910E26850056B54210CA6AC356C312C7E96C_inline (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* __this, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioFader::set_time(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioFader_set_time_m7D1CD98970587468432FE8B7942D010E7BCD31B9_inline (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* __this, double ___0_value, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioFader::FadeIn(System.Single,System.Double,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioFader_FadeIn_m0F1F1D26EFA6220E12B0D4DF97511DAD190A62F7 (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* __this, float ___0_fadeInTime, double ___1_startToFadeTime, bool ___2_stopCurrentFadeOut, const RuntimeMethod* method) ;
// System.Boolean ClockStone.AudioFader::get_isFadingOutOrScheduled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioFader_get_isFadingOutOrScheduled_m14E9FACDF7B233D122AE913220FFE3131600A74E (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* __this, const RuntimeMethod* method) ;
// System.Single ClockStone.AudioFader::_GetFadeOutValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioFader__GetFadeOutValue_m923F8836AEC83EACA520922D1675C64146465BC5 (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* __this, const RuntimeMethod* method) ;
// System.Single ClockStone.AudioFader::Get(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioFader_Get_m46460E26510C10AE7FF6592844B8793220845795 (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* __this, bool* ___0_finishedFadeOut, const RuntimeMethod* method) ;
// System.Boolean ClockStone.AudioFader::get_isFadingIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioFader_get_isFadingIn_m592C515F1884EE099B6AE12FC5A5A3FAEBD93BA0 (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* __this, const RuntimeMethod* method) ;
// System.Single ClockStone.AudioFader::_GetFadeInValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioFader__GetFadeInValue_m3882B27DE5BFC67DC8ED1E0E1C7B681429FD874D (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* __this, const RuntimeMethod* method) ;
// System.Single ClockStone.AudioFader::_GetFadeValue(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioFader__GetFadeValue_m3B5FDD730A2759D6F194099C913C7BA13FC4BF22 (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* __this, float ___0_t, float ___1_dt, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioCategory::_ApplyVolumeChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioCategory__ApplyVolumeChange_mB1756A081EDB8F559397DFE964841A2782F8D116 (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioCategory::_UpdateFadeTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioCategory__UpdateFadeTime_m391C0F335619DB2BFA33605848343EFF63F55DE5 (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, const RuntimeMethod* method) ;
// ClockStone.AudioFader ClockStone.AudioCategory::get_audioFader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* AudioCategory_get_audioFader_m1CE6D11197D3B25E8E99C55EC4F069C7E22CCAC0 (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, const RuntimeMethod* method) ;
// System.Single ClockStone.AudioFader::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioFader_Get_mA8D45495834295348CF6BCADE1379745D748C70C (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* __this, const RuntimeMethod* method) ;
// ClockStone.AudioCategory ClockStone.AudioCategory::get_parentCategory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* AudioCategory_get_parentCategory_m3A969B6B7C1D72529B37E06D779503A2A7C8F142 (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioFader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioFader__ctor_m69B587C0B8EB180089B21B01590CF14E9C153344 (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* __this, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioItem::_Initialize(ClockStone.AudioCategory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioItem__Initialize_m04E995E35149164B274394692B88557A2CA95603 (AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* __this, AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* ___0_categ, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared)(__this, ___0_value, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,ClockStone.AudioItem>::get_Count()
inline int32_t Dictionary_2_get_Count_mF6EF8E8D067A73EF11D321ACF2619B1195B25EE7 (Dictionary_2_t57C406847BE968A40E40481F27C9CE8C715AC3FB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t57C406847BE968A40E40481F27C9CE8C715AC3FB*, const RuntimeMethod*))Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared)(__this, method);
}
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9DF47FC6E1F8341012CA3FF02993D372AA7A96C9 (RuntimeObject* ___0_arg0, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,ClockStone.AudioItem>::Add(TKey,TValue)
inline void Dictionary_2_Add_mB05DC9CA17C99E15CD04AE6D6E2080476B2983E1 (Dictionary_2_t57C406847BE968A40E40481F27C9CE8C715AC3FB* __this, String_t* ___0_key, AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t57C406847BE968A40E40481F27C9CE8C715AC3FB*, String_t*, AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB (RuntimeObject* ___0_message, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) ;
// System.Boolean ClockStone.AudioCategory::_IsCategoryParentOf(ClockStone.AudioCategory,ClockStone.AudioCategory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioCategory__IsCategoryParentOf_mF97260CD25EB115C5A282B582F9A0C0F54307C4C (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* ___0_toTest, AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* ___1_parent, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioItem::UnloadAudioClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioItem_UnloadAudioClip_m078B32DB312D693F2038E7D1410BE8AFA091D29D (AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* __this, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioFader::FadeIn(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioFader_FadeIn_m2197603692326CDE1DA3CC6A26F3FAF899500AF3 (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* __this, float ___0_fadeInTime, bool ___1_stopCurrentFadeOut, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioFader::FadeOut(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioFader_FadeOut_m1CB7C336BB8A8527C17E45AE883E4EB93C4355FF (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* __this, float ___0_fadeOutLength, float ___1_startToFadeTime, const RuntimeMethod* method) ;
// System.Boolean ClockStone.AudioFader::get_isFadingOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioFader_get_isFadingOut_m821EB22C8C5F8AF438C9F3E592FBE44EDF41A901 (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* __this, const RuntimeMethod* method) ;
// System.Boolean ClockStone.AudioFader::get_isFadingOutComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioFader_get_isFadingOutComplete_m1FA263FA1D8C6C9A6ABB14DC2D7E6E616A25AE0B (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* __this, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioSubItem::.ctor(ClockStone.AudioSubItem,ClockStone.AudioItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSubItem__ctor_m4245627EC9307D8BF168F50D36F8753884B81A2E (AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* __this, AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* ___0_orig, AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* ___1_item, const RuntimeMethod* method) ;
// T ArrayHelper::AddArrayElement<ClockStone.AudioSubItem>(T[]&,T)
inline AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* ArrayHelper_AddArrayElement_TisAudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3_m59E7FA0BC41ABA9134EDC9A9BD9B31C76CC82AC5 (AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D** ___0_array, AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* ___1_elToAdd, const RuntimeMethod* method)
{
	return ((  AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* (*) (AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D**, AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3*, const RuntimeMethod*))ArrayHelper_AddArrayElement_TisRuntimeObject_mC03DBDACA95F311219A79B9E13424D36EF7E0FDF_gshared)(___0_array, ___1_elToAdd, method);
}
// System.Void ClockStone.AudioItem::set_category(ClockStone.AudioCategory)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioItem_set_category_mF946B97E7958B6A89B66250254FAC5E54DEF9D7E_inline (AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* __this, AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* ___0_value, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioItem::_NormalizeSubItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioItem__NormalizeSubItems_mBF977911791226CF70BA606855F8F7B2886DF086 (AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* __this, const RuntimeMethod* method) ;
// System.Boolean ClockStone.AudioItem::_IsValidSubItem(ClockStone.AudioSubItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioItem__IsValidSubItem_m1883FC833DCEAD803E1E68D4389BD08EFE57E243 (AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* ___0_item, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioSubItem::set_item(ClockStone.AudioItem)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioSubItem_set_item_m77620B4DCA2E950E8CDBE98D5D4FE31E124E7E17_inline (AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* __this, AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* ___0_value, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioSubItem::set__SummedProbability(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioSubItem_set__SummedProbability_mAA86F675EC9F65A877972FD02012D2506A4BA46E_inline (AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioClip::get_preloadAudioData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_get_preloadAudioData_mA3D346D89D612D70EED427D95FD6CA254AE02D4A (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioClip::UnloadAudioData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_UnloadAudioData_m4022A02B836CDC945D634DD7CB4DA0018F718E62 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Resources::UnloadAsset(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resources_UnloadAsset_m4828D1393356C052061C66403B1437F7D7E21908 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_assetToUnload, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// ClockStone.AudioSubItem ClockStone.AudioObject::get_subItem()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* AudioObject_get_subItem_mE36DC432092EBB487061B7FA4BCD2E6A198CF1CC_inline (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Single ClockStone.AudioObject::get__volumeWithCategory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioObject_get__volumeWithCategory_mD4749ADDA041F370362BD3BC4F9742AF19A23817 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Single ClockStone.AudioObject::get__volumeFromCategory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioObject_get__volumeFromCategory_m2C856B7B608B413DCBDA254F26A4733419950E03 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Single ClockStone.AudioObject::get_volumeTotalWithoutFade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioObject_get_volumeTotalWithoutFade_mA569F823EA1094D3EDBF6AEC5F89546B7054BA34 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// AudioChannelType ClockStone.AudioObject::get_channel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AudioObject_get_channel_mA8264029E34B019838CD26196E5B5F082C4FAF9B_inline (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Single ClockStone.AudioObject::get_audioTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioObject_get_audioTime_m6B5A2EE06A41C5BF22E40B566F9CC651A2577F1D (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::SetScheduledStartTime(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetScheduledStartTime_m831CB1AC7E3C70BEFB84892B0A50BA161CE1EDDD (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, double ___0_time, const RuntimeMethod* method) ;
// System.Single ClockStone.AudioObject::get__stopClipAtTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioObject_get__stopClipAtTime_m1D112BF58ED2ED81BDCFF2A6801E62189933DD81 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Single ClockStone.AudioObject::get__startClipAtTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioObject_get__startClipAtTime_m8D667511D4F804DF10569940B2026AE44EAE0F81 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AudioClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AudioSource::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_time_m130D08644F36736115FE082DAA2ED5E2C9D97A93 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AudioSource::get_panStereo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_panStereo_mEB4CE5FF235A46C8B7CE62529A9DDA75A15C2505 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Double ClockStone.AudioObject::get_audioObjectTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double AudioObject_get_audioObjectTime_mC84CEB1B5C2BFAC1C2AA49FAF3902EBF5C6A24CE_inline (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::_UpdateFadeVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject__UpdateFadeVolume_mF786330E839E40C100D02F30C8C85C530982A1B4 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Boolean ClockStone.AudioObject::get__shouldStopIfPrimaryFadedOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioObject_get__shouldStopIfPrimaryFadedOut_m8858F615E85E49B67985055F95FFA0783AE9B7E9 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::_PlayScheduled(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject__PlayScheduled_mCBC287864C5BA629C95E67BB1E1A81A63F8D2FE7 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, double ___0_dspTime, const RuntimeMethod* method) ;
// ClockStone.AudioObject AudioController::PlayAfter(System.String,ClockStone.AudioObject,System.Double,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController_PlayAfter_mF0B328D8DAA7B418434668B90DEB252C22984B49 (String_t* ___0_audioID, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* ___1_playingAudio, double ___2_deltaDspTime, float ___3_volume, float ___4_startTime, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::_PlayDelayed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject__PlayDelayed_mBF496BC9D5DC41A7EA6745850063A9BEBC831DD6 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, float ___0_delay, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::Stop(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_Stop_m28A3B394943BD4C372E40EA87D0ABC84810920A3 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, float ___0_fadeOutLength, float ___1_startToFadeTime, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ClockStone.AudioObject::_WaitForSecondsThenStop(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AudioObject__WaitForSecondsThenStop_m92B1FF703BD97005D9EF3E3FEAE3ECC858C8F804 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, float ___0_startToFadeTime, float ___1_fadeOutLength, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject__Stop_mA2DE6F2B7F72F8C2AF16A884F11019C9D62D67E3 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::FadeOut(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_FadeOut_mA448240C114420D522FEBD5B61E448E238E1E0B6 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, float ___0_fadeOutLength, float ___1_startToFadeTime, const RuntimeMethod* method) ;
// System.Boolean ClockStone.AudioObject::IsSecondaryPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioObject_IsSecondaryPlaying_m9CF13022B78EA62701F9E43F9885FD4FD6B0934B (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::SwitchAudioSources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_SwitchAudioSources_m50360C50BC6719AACB99613B8EA6C577F141DE02 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// ClockStone.AudioItem ClockStone.AudioObject::get_audioItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* AudioObject_get_audioItem_mA684BBD00181C2E65E7FE103BA73BC08530F4C35 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject/<_WaitForSecondsThenStop>d__76::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_WaitForSecondsThenStopU3Ed__76__ctor_m5AD66320A1BD2DA3CB5E9D85D8CE8DD5FBB2D1B8 (U3C_WaitForSecondsThenStopU3Ed__76_t2808A470FCC20423D02D711EFA3877B423A25E2F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::FadeOut(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_FadeOut_m2EB1EE73C1ACDC8F6277A0B1E5E8AB204328A9FC (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, float ___0_fadeOutLength, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ClockStone.AudioObject::_WaitThenPause(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AudioObject__WaitThenPause_mBA919DCF479344030B9FBE2502F27BAAF2010FFB (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, float ___0_waitTime, int32_t ___1_counter, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::_PauseNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject__PauseNow_mF42489087FEEDF0C996075155D4CC64C1FE98D63 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::set_scheduledPlayingAtDspTime(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_set_scheduledPlayingAtDspTime_m5C72D87CBE3F8C55EB234A5D4C26D971194F21B3 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, double ___0_value, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::_PauseAudioSources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject__PauseAudioSources_mBEE509105D05E0B7DB0B930B385C3F5EC4B858F4 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioFader::Set0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioFader_Set0_m5A26A1EDA73CA85CE8EFBA9937EE55532D19E584 (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* __this, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::_UnpauseNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject__UnpauseNow_m24F4F58E4249055B7BEFC43D319F96B2E594F566 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayScheduled(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayScheduled_m9F3C7245A13A1D4BC64AFA9A08763357133727D9 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, double ___0_time, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject/<_WaitThenPause>d__86::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_WaitThenPauseU3Ed__86__ctor_mDD50BF89E05F4466DFE7C8ADD654FBC3DCC1F744 (U3C_WaitThenPauseU3Ed__86_tFD34F3EC992FA2012BAF41C96E3F64D81058882A* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Boolean ClockStone.AudioObject::IsPrimaryPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioObject_IsPrimaryPlaying_m5EFCCE428694C79A7A6F2C7DC988460C07E40CD0 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::_CreateSecondAudioSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject__CreateSecondAudioSource_mF4B9842B18AA1B709A1A7BD1403651747D7D2A14 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::_SwitchValues<UnityEngine.AudioSource>(T&,T&)
inline void AudioObject__SwitchValues_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m86A2AF4DF4D143489116E929D3A4C0B4066FE003 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299** ___0_v1, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299** ___1_v2, const RuntimeMethod* method)
{
	((  void (*) (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299**, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299**, const RuntimeMethod*))AudioObject__SwitchValues_TisRuntimeObject_m6DDC70E4363A093C0C84FA081214FC1316185389_gshared)(__this, ___0_v1, ___1_v2, method);
}
// System.Void ClockStone.AudioObject::_SwitchValues<ClockStone.AudioFader>(T&,T&)
inline void AudioObject__SwitchValues_TisAudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8_mD01DDF61AAD482FF917ABF510D6390A3759B5AD6 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8** ___0_v1, AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8** ___1_v2, const RuntimeMethod* method)
{
	((  void (*) (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*, AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8**, AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8**, const RuntimeMethod*))AudioObject__SwitchValues_TisRuntimeObject_m6DDC70E4363A093C0C84FA081214FC1316185389_gshared)(__this, ___0_v1, ___1_v2, method);
}
// System.Void ClockStone.AudioObject::_SwitchValues<ClockStone.AudioSubItem>(T&,T&)
inline void AudioObject__SwitchValues_TisAudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3_m81B7579DB952183AA722630057764271354C34BA (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3** ___0_v1, AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3** ___1_v2, const RuntimeMethod* method)
{
	((  void (*) (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*, AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3**, AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3**, const RuntimeMethod*))AudioObject__SwitchValues_TisRuntimeObject_m6DDC70E4363A093C0C84FA081214FC1316185389_gshared)(__this, ___0_v1, ___1_v2, method);
}
// System.Void ClockStone.AudioObject::_SwitchValues<System.Single>(T&,T&)
inline void AudioObject__SwitchValues_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m46E67E3E75DD0AD4FFAA19643D52317BA37F1A32 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, float* ___0_v1, float* ___1_v2, const RuntimeMethod* method)
{
	((  void (*) (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*, float*, float*, const RuntimeMethod*))AudioObject__SwitchValues_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m46E67E3E75DD0AD4FFAA19643D52317BA37F1A32_gshared)(__this, ___0_v1, ___1_v2, method);
}
// System.Void ClockStone.RegisteredComponent::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisteredComponent_Awake_mC8F26A2390ED9A931DF40118CE10B9F60645B401 (RegisteredComponent_t4300DCA0919DC75A5C6AA393A74F58774173354F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<UnityEngine.AudioSource>()
inline AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* Component_GetComponents_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m2C6D82D3DE7BFC234CEA24B6AC1EF7A3035F2D21 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared)(__this, method);
}
// UnityEngine.Audio.AudioMixerGroup UnityEngine.AudioSource::get_outputAudioMixerGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* AudioSource_get_outputAudioMixerGroup_mE141F3A6337D84F9BD43196A28CC85D092695CAB (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::_Set0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject__Set0_mEEEE226885A561AE5B2B481120C643DC86A0B4F5 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.AudioRolloffMode UnityEngine.AudioSource::get_rolloffMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_rolloffMode_m1D5F4CCF83174583ACF0C365051E58978ED02CFD (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_rolloffMode(UnityEngine.AudioRolloffMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_rolloffMode_m441D9552D8648D6040E66EE2C2650A79DC5E6FB4 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.AudioSource::get_dopplerLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_dopplerLevel_m7BF6F31D1E8927E059BC87933AD9B81D63AF97BE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_dopplerLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_dopplerLevel_mB9AC5164E5AF16ACECA3B8E29F5C8573C37E40D6 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.AudioSource::get_spread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_spread_mC21DF6C651AD67BEB5D721F0EA0B2F3B080F4C77 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_spread(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spread_mDFBC1BF11837C26EF9763A8DEEFC56AF95F6E83F (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSource::get_spatialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_spatialize_m5CA89537077D4BB8DBAABFD8EB36D0B89BA8DACB (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_spatialize(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatialize_mDFA357EDCB0C59EF11F53C845F7ACBF6BF7F7B3C (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSource::get_spatializePostEffects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_spatializePostEffects_m02D6863671C49B81DFACDA623C74188B1FD950A4 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_spatializePostEffects(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatializePostEffects_m7CC219B7790E27667D49F4A36C8F62FFF399DA54 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSource::get_bypassListenerEffects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_bypassListenerEffects_m47CE7EC60DB5D13E4D818CFA6D5E1B9D6134EF02 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_bypassListenerEffects(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_bypassListenerEffects_m321403F18B6174D2E91D080DBF5090C29BC11899 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSource::get_bypassReverbZones()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_bypassReverbZones_mA640A5F9FF8E52777CF13950D966839729D1B3DF (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_bypassReverbZones(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_bypassReverbZones_m900FD2BA30F36243B5A5B872B0D019CBAB6AC410 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.AudioVelocityUpdateMode UnityEngine.AudioSource::get_velocityUpdateMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_velocityUpdateMode_mEFF48403F8A591A14927408F806E0603391E153B (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_velocityUpdateMode(UnityEngine.AudioVelocityUpdateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_velocityUpdateMode_m379F5704F12211BFB9AF3E3DE6647A6B057C7426 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSource::get_ignoreListenerVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_ignoreListenerVolume_mC58B59373161017F770D42A36C536511805AE87C (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_ignoreListenerVolume(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_ignoreListenerVolume_mAB973FFB2B666C4C6DE3BF34C930C28CC315731D (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AudioSource::get_priority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_priority_mD4B6D16F6BCB1D5ACA3F2CC096EDA8861DA66881 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_priority(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_priority_mD1AB7ED858D8A1233642F5DBA81AEFBE35DD4B40 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSource::get_bypassEffects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_bypassEffects_m0172FACE00674F743A70870EB138B3223D42A35E (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_bypassEffects(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_bypassEffects_m56E81C34448803D4B63105071D96AC644CFFEA9A (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSource::get_ignoreListenerPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_ignoreListenerPause_m544337985D4025632846D4AB4EC1ADD0CF0B4B01 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_ignoreListenerPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_ignoreListenerPause_m1BC14FA0984DEDF62E1CDBAB323950100A0BF2B4 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.AudioSource::get_reverbZoneMix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_reverbZoneMix_mA1BE21696195BADD380311B236AA46314911B859 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_reverbZoneMix(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_reverbZoneMix_m0AD755F3841952B06F87767F97CA93E2C9545D1E (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::_SetReferences0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject__SetReferences0_m79F2B7A07E22DAB9AD76CFFBAE879F67AE4AE4AB (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::_OnPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject__OnPlay_mA334659B07EDFEF498F90C0743023921B9025795 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayDelayed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayDelayed_m6A4992F1A010DC12906C6002B22F19082967770E (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_delay, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Double AudioController::get_systemDeltaTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double AudioController_get_systemDeltaTime_m276484A295F65B3638BCA16FD90B7016E78BD8C2_inline (const RuntimeMethod* method) ;
// ClockStone.AudioObject/AudioEventDelegate ClockStone.AudioObject::get_completelyPlayedDelegate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioEventDelegate_tC8822AE744F66D86E67505066207E918FAD55B49* AudioObject_get_completelyPlayedDelegate_m778A754922B2E833AACEC21D9F5655DC4F4A408D_inline (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject/AudioEventDelegate::Invoke(ClockStone.AudioObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioEventDelegate_Invoke_m6CEE69572000A08372439B0733B708B13F2E769D_inline (AudioEventDelegate_tC8822AE744F66D86E67505066207E918FAD55B49* __this, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* ___0_audioObject, const RuntimeMethod* method) ;
// System.Void AudioController::_NotifyPlaylistTrackCompleteleyPlayed(ClockStone.AudioObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController__NotifyPlaylistTrackCompleteleyPlayed_m4ECBAF059035FA03411CF46005B3A13AA2D67A3A (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* ___0_audioObject, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::DestroyAudioObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_DestroyAudioObject_m10D228A30219C1B1364250EAFB8FEBFBC2F9E75A (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Boolean ClockStone.AudioObject::_IsAudioLoopSequenceMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioObject__IsAudioLoopSequenceMode_mD941DC910428D21B428B736113AA719C8C1512B2 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Boolean ClockStone.AudioObject::_ScheduleNextInLoopSequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioObject__ScheduleNextInLoopSequence_m2566C66A5171E878436E4F199CA94B64EAFDC062 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSource::get_loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_loop_m2D83BF58E1BD1BEE4CC80413C12E761D3310FC2C (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::_StartFadeOutIfNecessary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject__StartFadeOutIfNecessary_mAF1C85E3073CA95429066306FA7DC7BF1577B9B7 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Boolean ClockStone.AudioObject::get_isFadingOutOrScheduled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioObject_get_isFadingOutOrScheduled_mEB73E908CEADAB4170B1E6296565E63C479B567E (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Single ClockStone.AudioObject::_GetRandomLoopSequenceDelay(ClockStone.AudioItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioObject__GetRandomLoopSequenceDelay_mDD46DBCD2EEB77FAEAE85A888164859AA27B6818 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* ___0_audioItem, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Single ClockStone.AudioObject::_EqualizePowerForCrossfading(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioObject__EqualizePowerForCrossfading_m6E6369DAA86E408403F1742908C053B2DDCEDC1D (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, float ___0_v, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::_ApplyVolumeSecondary(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject__ApplyVolumeSecondary_m8089C9F16EF4A75AD509F40B81FC3F8709C3F015 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, float ___0_volumeMultiplier, const RuntimeMethod* method) ;
// System.Single ClockStone.AudioObject::InverseTransformVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioObject_InverseTransformVolume_m335A32B0AE281C6F9F7633E73C5DBA45EACCB9AA (float ___0_volume, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::SetApplicationPaused(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioObject_SetApplicationPaused_m44EC3CBA99D6DFFD0E315D5A8683C17F7DD6A891_inline (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, bool ___0_isPaused, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.AudioSource::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void ClockStone.RegisteredComponent::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisteredComponent_OnDestroy_mADC01C507470832FA29FBF00B90F68BED19FCCD9 (RegisteredComponent_t4300DCA0919DC75A5C6AA393A74F58774173354F* __this, const RuntimeMethod* method) ;
// System.Void ClockStone.AudioObject::_RestoreOverrideAudioSourceSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject__RestoreOverrideAudioSourceSettings_m675CA709A7477CF1B23BDA32F9FACC94A5E9CA98 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) ;
// System.Void ClockStone.RegisteredComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisteredComponent__ctor_mFCC58D8F704F72B000677A41069D8BC513DE4B27 (RegisteredComponent_t4300DCA0919DC75A5C6AA393A74F58774173354F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void ClockStone.RegisteredComponentController::_Register(ClockStone.IRegisteredComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisteredComponentController__Register_m26560D3FB6DDB54F8AAAF17C8FD64354A58E81D0 (RuntimeObject* ___0_component, const RuntimeMethod* method) ;
// System.Void ClockStone.RegisteredComponentController::_Unregister(ClockStone.IRegisteredComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisteredComponentController__Unregister_m0463D4A70D2A5B80FD93F35083555BF77CCC008D (RuntimeObject* ___0_component, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,ClockStone.RegisteredComponentController/InstanceContainer>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m671E538B6CB142DB87304768B126D265A3CBF9CA (Dictionary_2_t42D10458D588C0FEE5C42C3E1E28C6B103723366* __this, Type_t* ___0_key, InstanceContainer_t53A92146FA15D51D3134CF2AE1CC0FF64CA2AA2D** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t42D10458D588C0FEE5C42C3E1E28C6B103723366*, Type_t*, InstanceContainer_t53A92146FA15D51D3134CF2AE1CC0FF64CA2AA2D**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Int32 System.Collections.Generic.HashSet`1<ClockStone.IRegisteredComponent>::get_Count()
inline int32_t HashSet_1_get_Count_mA1EA5E599C66C8ED58AC65EE9134B256EBC0DC9B_inline (HashSet_1_t0ED9A7465BB354FB688A8D388D7E32282F3A04E4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t0ED9A7465BB354FB688A8D388D7E32282F3A04E4*, const RuntimeMethod*))HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline)(__this, method);
}
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<ClockStone.IRegisteredComponent>::GetEnumerator()
inline Enumerator_tF1801DA5C50283A2AC81458838666BC4E4A128F5 HashSet_1_GetEnumerator_m33EE605071E7FE4F7FD4F6E0E3AC582993B79115 (HashSet_1_t0ED9A7465BB354FB688A8D388D7E32282F3A04E4* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF1801DA5C50283A2AC81458838666BC4E4A128F5 (*) (HashSet_1_t0ED9A7465BB354FB688A8D388D7E32282F3A04E4*, const RuntimeMethod*))HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<ClockStone.IRegisteredComponent>::Dispose()
inline void Enumerator_Dispose_m066A063C37694D8BC74738B662FB6A4AD47BFF7A (Enumerator_tF1801DA5C50283A2AC81458838666BC4E4A128F5* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF1801DA5C50283A2AC81458838666BC4E4A128F5*, const RuntimeMethod*))Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared)(__this, method);
}
// T System.Collections.Generic.HashSet`1/Enumerator<ClockStone.IRegisteredComponent>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m2F143CA36EEEAE0E91BA5630F399B8E0BBB03A3D_inline (Enumerator_tF1801DA5C50283A2AC81458838666BC4E4A128F5* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tF1801DA5C50283A2AC81458838666BC4E4A128F5*, const RuntimeMethod*))Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<ClockStone.IRegisteredComponent>::MoveNext()
inline bool Enumerator_MoveNext_m9C6572C9D8FFE42AAF104AACF3DBD905DB7467AB (Enumerator_tF1801DA5C50283A2AC81458838666BC4E4A128F5* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF1801DA5C50283A2AC81458838666BC4E4A128F5*, const RuntimeMethod*))Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared)(__this, method);
}
// System.Void ClockStone.RegisteredComponentController/InstanceContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstanceContainer__ctor_m69EE232924A6DF41FADAD55CA4D710E106D3C367 (InstanceContainer_t53A92146FA15D51D3134CF2AE1CC0FF64CA2AA2D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,ClockStone.RegisteredComponentController/InstanceContainer>::Add(TKey,TValue)
inline void Dictionary_2_Add_mE3F35548095265950B93BBD4330F675F23EE8D8A (Dictionary_2_t42D10458D588C0FEE5C42C3E1E28C6B103723366* __this, Type_t* ___0_key, InstanceContainer_t53A92146FA15D51D3134CF2AE1CC0FF64CA2AA2D* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t42D10458D588C0FEE5C42C3E1E28C6B103723366*, Type_t*, InstanceContainer_t53A92146FA15D51D3134CF2AE1CC0FF64CA2AA2D*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// ClockStone.RegisteredComponentController/InstanceContainer ClockStone.RegisteredComponentController::_GetInstanceContainer(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InstanceContainer_t53A92146FA15D51D3134CF2AE1CC0FF64CA2AA2D* RegisteredComponentController__GetInstanceContainer_m80808F18F8A3B94ABB0E95FB9BE6C6E7CC84AC12 (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<ClockStone.IRegisteredComponent>::Add(T)
inline bool HashSet_1_Add_m987D7E79C14B9D85622FE79470F1074C4D51E901 (HashSet_1_t0ED9A7465BB354FB688A8D388D7E32282F3A04E4* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t0ED9A7465BB354FB688A8D388D7E32282F3A04E4*, RuntimeObject*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___0_item, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void ClockStone.RegisteredComponentController::_RegisterType(ClockStone.IRegisteredComponent,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisteredComponentController__RegisterType_m88FF77C9EE82A90B0211314634A5B7811B794140 (RuntimeObject* ___0_component, Type_t* ___1_type, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<ClockStone.IRegisteredComponent>::Remove(T)
inline bool HashSet_1_Remove_mC23A58813071D3DAE5E0718CC758670F4A0A5AAA (HashSet_1_t0ED9A7465BB354FB688A8D388D7E32282F3A04E4* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t0ED9A7465BB354FB688A8D388D7E32282F3A04E4*, RuntimeObject*, const RuntimeMethod*))HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared)(__this, ___0_item, method);
}
// System.Void ClockStone.RegisteredComponentController::_UnregisterType(ClockStone.IRegisteredComponent,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisteredComponentController__UnregisterType_m26AA61D881E6BF20DC5FF0CAECD7A81215C77CF0 (RuntimeObject* ___0_component, Type_t* ___1_type, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,ClockStone.RegisteredComponentController/InstanceContainer>::.ctor()
inline void Dictionary_2__ctor_m938C00A5784839240D2001EF17093D200720CBD3 (Dictionary_2_t42D10458D588C0FEE5C42C3E1E28C6B103723366* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t42D10458D588C0FEE5C42C3E1E28C6B103723366*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<ClockStone.IRegisteredComponent>::.ctor()
inline void HashSet_1__ctor_m7ECA671710A9E24C7B10FAD5D26AA27852C0AB32 (HashSet_1_t0ED9A7465BB354FB688A8D388D7E32282F3A04E4* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t0ED9A7465BB354FB688A8D388D7E32282F3A04E4*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.Int64 System.DateTime::get_Ticks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Double ClockStone.SystemTime::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SystemTime_get_time_m943A576076049F528F8DBA825760E825183A4490 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
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
// AudioController AudioController::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySingleton_1_GetSingleton_mB6BA0A27600410387681D5C2E12A8557C814E3E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySingleton_1_tBB6EE8E3C9E85B93F48197C1ACF5054683AF72B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnitySingleton_1_tBB6EE8E3C9E85B93F48197C1ACF5054683AF72B7_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = UnitySingleton_1_GetSingleton_mB6BA0A27600410387681D5C2E12A8557C814E3E4((bool)1, (bool)0, (bool)1, UnitySingleton_1_GetSingleton_mB6BA0A27600410387681D5C2E12A8557C814E3E4_RuntimeMethod_var);
		return L_0;
	}
}
// System.Boolean AudioController::DoesInstanceExist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_DoesInstanceExist_m6AF468A9E14546039D6929D36BF5CC749ECBAC94 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySingleton_1_GetSingleton_mB6BA0A27600410387681D5C2E12A8557C814E3E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySingleton_1_tBB6EE8E3C9E85B93F48197C1ACF5054683AF72B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnitySingleton_1_tBB6EE8E3C9E85B93F48197C1ACF5054683AF72B7_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = UnitySingleton_1_GetSingleton_mB6BA0A27600410387681D5C2E12A8557C814E3E4((bool)0, (bool)0, (bool)1, UnitySingleton_1_GetSingleton_mB6BA0A27600410387681D5C2E12A8557C814E3E4_RuntimeMethod_var);
		bool L_1;
		L_1 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_0, NULL, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void AudioController::set_DisableAudio(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_set_DisableAudio_m660BB51217D8E6A5D527672D69B8BB7469FCA6DC (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		bool L_1 = __this->____audioDisabled_37;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		bool L_2 = ___0_value;
		bool L_3 = ___0_value;
		__this->____audioDisabled_37 = L_3;
	}

IL_0012:
	{
		return;
	}
}
// System.Boolean AudioController::get_DisableAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_get_DisableAudio_mCD4245A0FFD06734E0511796699FE2139D40656B (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____audioDisabled_37;
		return L_0;
	}
}
// System.Boolean AudioController::get_isAdditionalAudioController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_get_isAdditionalAudioController_m45AF12A42E7BF0FF1D9A8D91EE57B958AE531738 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____isAdditionalAudioController_36;
		return L_0;
	}
}
// System.Void AudioController::set_isAdditionalAudioController(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_set_isAdditionalAudioController_m0BC8456BB0D749737D2922FA4445C5F8ADE723FF (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->____isAdditionalAudioController_36 = L_0;
		return;
	}
}
// System.Single AudioController::get_Volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioController_get_Volume_m76D0F25F710E931B3BCB1811834BBF45ACCCF137 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____volume_41;
		return L_0;
	}
}
// System.Void AudioController::set_Volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_set_Volume_mD3269DBE0C907A6D15CFC443E08EA7DDF9F7A3E0 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		float L_1 = __this->____volume_41;
		if ((((float)L_0) == ((float)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		float L_2 = ___0_value;
		__this->____volume_41 = L_2;
		AudioController__ApplyVolumeChange_mAA862CB4EBA3D692A9AAE49A0F76B0DBE838AB30(__this, NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Boolean AudioController::get_musicEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_get_musicEnabled_mF55BDA1639F54A02F7B88469DB1A57C853A7A8C2 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____musicEnabled_32;
		return L_0;
	}
}
// System.Void AudioController::set_musicEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_set_musicEnabled_m6E280F26D90958F3A164D2FC6095C98FDA60943B (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->____musicEnabled_32;
		bool L_1 = ___0_value;
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
		bool L_2 = ___0_value;
		__this->____musicEnabled_32 = L_2;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_3 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentMusic_26;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		bool L_5 = ___0_value;
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_6 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentMusic_26;
		NullCheck(L_6);
		bool L_7;
		L_7 = AudioObject_IsPaused_m3E5B6566C020302D843CF742122EC0A1DFDB5C08(L_6, (bool)1, NULL);
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_8 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentMusic_26;
		NullCheck(L_8);
		AudioObject_Play_m85ADEF7E2221FB1AF872E21466ECE5B2A02C8A6F(L_8, (0.0f), NULL);
		return;
	}

IL_003d:
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_9 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentMusic_26;
		NullCheck(L_9);
		AudioObject_Pause_m34AE0E99C88B119982C6DB2D687D139FFC551807(L_9, NULL);
	}

IL_0047:
	{
		return;
	}
}
// System.Boolean AudioController::get_ambienceSoundEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_get_ambienceSoundEnabled_m25FAB0BBB687B1DC2152293A4D38967B4F405073 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____ambienceSoundEnabled_33;
		return L_0;
	}
}
// System.Void AudioController::set_ambienceSoundEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_set_ambienceSoundEnabled_m97B0206E1DF64E4DC1FDB873CCEE50E900FEE752 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->____ambienceSoundEnabled_33;
		bool L_1 = ___0_value;
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
		bool L_2 = ___0_value;
		__this->____ambienceSoundEnabled_33 = L_2;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_3 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentAmbienceSound_27;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		bool L_5 = ___0_value;
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_6 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentAmbienceSound_27;
		NullCheck(L_6);
		bool L_7;
		L_7 = AudioObject_IsPaused_m3E5B6566C020302D843CF742122EC0A1DFDB5C08(L_6, (bool)1, NULL);
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_8 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentAmbienceSound_27;
		NullCheck(L_8);
		AudioObject_Play_m85ADEF7E2221FB1AF872E21466ECE5B2A02C8A6F(L_8, (0.0f), NULL);
		return;
	}

IL_003d:
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_9 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentAmbienceSound_27;
		NullCheck(L_9);
		AudioObject_Pause_m34AE0E99C88B119982C6DB2D687D139FFC551807(L_9, NULL);
	}

IL_0047:
	{
		return;
	}
}
// System.Boolean AudioController::get_soundMuted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_get_soundMuted_m1BEF7EB429D80238FF5440E7C017F632DEF92E58 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____soundMuted_34;
		return L_0;
	}
}
// System.Void AudioController::set_soundMuted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_set_soundMuted_m959DFE7AFCED1022F990C72EF11C6DA3ED935BFE (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->____soundMuted_34 = L_0;
		AudioController__ApplyVolumeChange_mAA862CB4EBA3D692A9AAE49A0F76B0DBE838AB30(__this, NULL);
		return;
	}
}
// System.Single AudioController::get_musicCrossFadeTime_In()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioController_get_musicCrossFadeTime_In_mC34B4362B7192CB00672A16130C079A8EFEA7F26 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___specifyCrossFadeInAndOutSeperately_13;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		float L_1 = __this->____musicCrossFadeTime_In_14;
		return L_1;
	}

IL_000f:
	{
		float L_2 = __this->___musicCrossFadeTime_11;
		return L_2;
	}
}
// System.Void AudioController::set_musicCrossFadeTime_In(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_set_musicCrossFadeTime_In_mEE673371F8C14DE40FC26CB3219ECE3191B74253 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		__this->____musicCrossFadeTime_In_14 = L_0;
		return;
	}
}
// System.Single AudioController::get_musicCrossFadeTime_Out()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioController_get_musicCrossFadeTime_Out_m7EA9DEAAB1B393141B55C39126BDE10E67EFAC67 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___specifyCrossFadeInAndOutSeperately_13;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		float L_1 = __this->____musicCrossFadeTime_Out_15;
		return L_1;
	}

IL_000f:
	{
		float L_2 = __this->___musicCrossFadeTime_11;
		return L_2;
	}
}
// System.Void AudioController::set_musicCrossFadeTime_Out(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_set_musicCrossFadeTime_Out_mAC6C076D5012308FEEAE59F1037768D0F5C20E32 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		__this->____musicCrossFadeTime_Out_15 = L_0;
		return;
	}
}
// System.Single AudioController::get_ambienceSoundCrossFadeTime_In()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioController_get_ambienceSoundCrossFadeTime_In_m58F9E7485C6A35E721635D3344DDC9B8E703C593 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___specifyCrossFadeInAndOutSeperately_13;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		float L_1 = __this->____ambienceSoundCrossFadeTime_In_16;
		return L_1;
	}

IL_000f:
	{
		float L_2 = __this->___ambienceSoundCrossFadeTime_12;
		return L_2;
	}
}
// System.Void AudioController::set_ambienceSoundCrossFadeTime_In(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_set_ambienceSoundCrossFadeTime_In_mAF6E6B9E0AE8EDCC54E2CB4F4E557B31E597ACF5 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		__this->____ambienceSoundCrossFadeTime_In_16 = L_0;
		return;
	}
}
// System.Single AudioController::get_ambienceSoundCrossFadeTime_Out()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioController_get_ambienceSoundCrossFadeTime_Out_m3335A5503E262705DAB83A5B4327BCF09CEFDC40 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___specifyCrossFadeInAndOutSeperately_13;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		float L_1 = __this->____ambienceSoundCrossFadeTime_Out_17;
		return L_1;
	}

IL_000f:
	{
		float L_2 = __this->___ambienceSoundCrossFadeTime_12;
		return L_2;
	}
}
// System.Void AudioController::set_ambienceSoundCrossFadeTime_Out(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_set_ambienceSoundCrossFadeTime_Out_m0E07A7A2CFAE62D1D680039C1D015BE94A1D53E2 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		__this->____ambienceSoundCrossFadeTime_Out_17 = L_0;
		return;
	}
}
// System.Double AudioController::get_systemTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AudioController_get_systemTime_mB3A112C83ABEB814B3F4377F12D1385E886A9A1F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		double L_0 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____systemTime_42;
		return L_0;
	}
}
// System.Double AudioController::get_systemDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AudioController_get_systemDeltaTime_m276484A295F65B3638BCA16FD90B7016E78BD8C2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		double L_0 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____systemDeltaTime_44;
		return L_0;
	}
}
// System.Void AudioController::set_musicParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_set_musicParent_m54921F09957B4CF463519785D7D369F6858B8D57 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____musicParent_30 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____musicParent_30), (void*)L_0);
		return;
	}
}
// UnityEngine.Transform AudioController::get_musicParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* AudioController_get_musicParent_m33F7132540CD394050B4A93BC404F2CD683A420A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____musicParent_30;
		return L_0;
	}
}
// System.Void AudioController::set_ambienceParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_set_ambienceParent_m5AC5A129E1F50B3343D4C9FA49A0A1F9BB3AC0CD (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____ambienceParent_31 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____ambienceParent_31), (void*)L_0);
		return;
	}
}
// UnityEngine.Transform AudioController::get_ambienceParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* AudioController_get_ambienceParent_mD2418A13A13A30B1E70A2734A99B3390701A5393 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____ambienceParent_31;
		return L_0;
	}
}
// ClockStone.AudioObject AudioController::PlayMusic(System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController_PlayMusic_m5DD4629D3BA6239D911E8DAC1D7B0A0FFF82ADE1 (String_t* ___0_audioID, float ___1_volume, float ___2_delay, float ___3_startTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____isPlaylistPlaying_40 = (bool)0;
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		String_t* L_1 = ___0_audioID;
		float L_2 = ___1_volume;
		float L_3 = ___2_delay;
		float L_4 = ___3_startTime;
		NullCheck(L_0);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_5;
		L_5 = AudioController__PlayMusic_mE0C12FB222EC0D437C6FDE75402907DC77BCE297(L_0, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// ClockStone.AudioObject AudioController::PlayMusic(System.String,UnityEngine.Vector3,UnityEngine.Transform,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController_PlayMusic_mE7655541AC5FA5CD976E1453CA8529D75502CD48 (String_t* ___0_audioID, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_worldPosition, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___2_parentObj, float ___3_volume, float ___4_delay, float ___5_startTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____isPlaylistPlaying_40 = (bool)0;
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		String_t* L_1 = ___0_audioID;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_worldPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___2_parentObj;
		float L_4 = ___3_volume;
		float L_5 = ___4_delay;
		float L_6 = ___5_startTime;
		NullCheck(L_0);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_7;
		L_7 = AudioController__PlayMusic_m19B4000B3A1E5EB46157D6A8DEF6D0228F9E6E63(L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// ClockStone.AudioObject AudioController::PlayMusic(System.String,UnityEngine.Transform,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController_PlayMusic_m498617F541D8C41DA9F79B0F821FEB2EAA9547EC (String_t* ___0_audioID, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parentObj, float ___2_volume, float ___3_delay, float ___4_startTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____isPlaylistPlaying_40 = (bool)0;
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		String_t* L_1 = ___0_audioID;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___1_parentObj;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___1_parentObj;
		float L_5 = ___2_volume;
		float L_6 = ___3_delay;
		float L_7 = ___4_startTime;
		NullCheck(L_0);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_8;
		L_8 = AudioController__PlayMusic_m19B4000B3A1E5EB46157D6A8DEF6D0228F9E6E63(L_0, L_1, L_3, L_4, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
// System.Boolean AudioController::StopMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_StopMusic_mD578705563DE062245A5CE87A891950EAC0BF784 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = AudioController__StopMusic_m03D2A3B47C0CB555DBB26575A3A1950A2957D723(L_0, (0.0f), NULL);
		return L_1;
	}
}
// System.Boolean AudioController::StopMusic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_StopMusic_m2F52F5FF594527AAAC955A15D4950BB263886165 (float ___0_fadeOut, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		float L_1 = ___0_fadeOut;
		NullCheck(L_0);
		bool L_2;
		L_2 = AudioController__StopMusic_m03D2A3B47C0CB555DBB26575A3A1950A2957D723(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean AudioController::PauseMusic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_PauseMusic_m9F0C7BAC9D1D35B0FD04BB323E8986955650208C (float ___0_fadeOut, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		float L_1 = ___0_fadeOut;
		NullCheck(L_0);
		bool L_2;
		L_2 = AudioController__PauseMusic_m6A9CB667A295BE060E2EB8753069F44D6CAD8DC1(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean AudioController::IsMusicPaused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_IsMusicPaused_m0FB6F18034A96144838A31B1121A5C9DD99D6948 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_0 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentMusic_26;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_2 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentMusic_26;
		NullCheck(L_2);
		bool L_3;
		L_3 = AudioObject_IsPaused_m3E5B6566C020302D843CF742122EC0A1DFDB5C08(L_2, (bool)1, NULL);
		return L_3;
	}

IL_0019:
	{
		return (bool)0;
	}
}
// System.Boolean AudioController::UnpauseMusic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_UnpauseMusic_mD6D8D8BB59D0D15CF7CCEC5998CC3BB382AD0820 (float ___0_fadeIn, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		NullCheck(L_0);
		bool L_1 = L_0->____musicEnabled_32;
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_2 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentMusic_26;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_4 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentMusic_26;
		NullCheck(L_4);
		bool L_5;
		L_5 = AudioObject_IsPaused_m3E5B6566C020302D843CF742122EC0A1DFDB5C08(L_4, (bool)1, NULL);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_6 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentMusic_26;
		float L_7 = ___0_fadeIn;
		NullCheck(L_6);
		AudioObject_Unpause_m81B063BA096DEC318A7ABE62F8C7A03A556CB7E4(L_6, L_7, NULL);
		return (bool)1;
	}

IL_0035:
	{
		return (bool)0;
	}
}
// ClockStone.AudioObject AudioController::PlayAmbienceSound(System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController_PlayAmbienceSound_mD0C37C830E70C59D93E48426887A3DFD372E030A (String_t* ___0_audioID, float ___1_volume, float ___2_delay, float ___3_startTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		String_t* L_1 = ___0_audioID;
		float L_2 = ___1_volume;
		float L_3 = ___2_delay;
		float L_4 = ___3_startTime;
		NullCheck(L_0);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_5;
		L_5 = AudioController__PlayAmbienceSound_mE6CB0360FE492D842420C02605F60EACEA7FD0A5(L_0, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// ClockStone.AudioObject AudioController::PlayAmbienceSound(System.String,UnityEngine.Vector3,UnityEngine.Transform,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController_PlayAmbienceSound_mD5CA5FCE84243556788E65EA22522FE0546BEFFB (String_t* ___0_audioID, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_worldPosition, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___2_parentObj, float ___3_volume, float ___4_delay, float ___5_startTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		String_t* L_1 = ___0_audioID;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_worldPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___2_parentObj;
		float L_4 = ___3_volume;
		float L_5 = ___4_delay;
		float L_6 = ___5_startTime;
		NullCheck(L_0);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_7;
		L_7 = AudioController__PlayAmbienceSound_m04AE5A6848983336A667ED4F633E086CE63559EB(L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// ClockStone.AudioObject AudioController::PlayAmbienceSound(System.String,UnityEngine.Transform,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController_PlayAmbienceSound_m6FB58B8EEFA2175208892AA0B75CDA4BA3B846E3 (String_t* ___0_audioID, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parentObj, float ___2_volume, float ___3_delay, float ___4_startTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		String_t* L_1 = ___0_audioID;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___1_parentObj;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___1_parentObj;
		float L_5 = ___2_volume;
		float L_6 = ___3_delay;
		float L_7 = ___4_startTime;
		NullCheck(L_0);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_8;
		L_8 = AudioController__PlayAmbienceSound_m04AE5A6848983336A667ED4F633E086CE63559EB(L_0, L_1, L_3, L_4, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
// System.Boolean AudioController::StopAmbienceSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_StopAmbienceSound_m65EEA0D030A1784A20960465B2D20614F14AEF0F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = AudioController__StopAmbienceSound_m7AD63BCB34F841A51110DE31932BC7D29F779D46(L_0, (0.0f), NULL);
		return L_1;
	}
}
// System.Boolean AudioController::StopAmbienceSound(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_StopAmbienceSound_m2773D9A9CBD1B546FC7D9059BC60E05411336BFF (float ___0_fadeOut, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		float L_1 = ___0_fadeOut;
		NullCheck(L_0);
		bool L_2;
		L_2 = AudioController__StopAmbienceSound_m7AD63BCB34F841A51110DE31932BC7D29F779D46(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean AudioController::PauseAmbienceSound(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_PauseAmbienceSound_m9A0B2885F41502179023E13DA60E195C23742AA6 (float ___0_fadeOut, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		float L_1 = ___0_fadeOut;
		NullCheck(L_0);
		bool L_2;
		L_2 = AudioController__PauseAmbienceSound_m3716CEAA18EE21B0F91859709E4193084ECBD0C6(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean AudioController::IsAmbienceSoundPaused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_IsAmbienceSoundPaused_mF22D65DD318C6E3D5286B0CE0A542678A7F6C4A0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_0 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentAmbienceSound_27;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_2 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentAmbienceSound_27;
		NullCheck(L_2);
		bool L_3;
		L_3 = AudioObject_IsPaused_m3E5B6566C020302D843CF742122EC0A1DFDB5C08(L_2, (bool)1, NULL);
		return L_3;
	}

IL_0019:
	{
		return (bool)0;
	}
}
// System.Boolean AudioController::UnpauseAmbienceSound(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_UnpauseAmbienceSound_m00F14F29E5A0CAB70D586EA91DB146B4A744E044 (float ___0_fadeIn, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		NullCheck(L_0);
		bool L_1 = L_0->____ambienceSoundEnabled_33;
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_2 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentAmbienceSound_27;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_4 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentAmbienceSound_27;
		NullCheck(L_4);
		bool L_5;
		L_5 = AudioObject_IsPaused_m3E5B6566C020302D843CF742122EC0A1DFDB5C08(L_4, (bool)1, NULL);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_6 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentAmbienceSound_27;
		float L_7 = ___0_fadeIn;
		NullCheck(L_6);
		AudioObject_Unpause_m81B063BA096DEC318A7ABE62F8C7A03A556CB7E4(L_6, L_7, NULL);
		return (bool)1;
	}

IL_0035:
	{
		return (bool)0;
	}
}
// System.Int32 AudioController::EnqueueMusic(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioController_EnqueueMusic_mDD4D5A265A89A117A6FD7FA299A45E88A1CAD409 (String_t* ___0_audioID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		String_t* L_1 = ___0_audioID;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = AudioController__EnqueueMusic_m61A35D744E7CC895D9C4B266F0B348918A7C2FD2(L_0, L_1, NULL);
		return L_2;
	}
}
// ClockStone.Playlist AudioController::_GetCurrentPlaylist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* AudioController__GetCurrentPlaylist_m34E76899B97F10F2E0C768CC45EA842130DD1EBC (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____currentPlaylistName_28;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464*)NULL;
	}

IL_000f:
	{
		String_t* L_2 = __this->____currentPlaylistName_28;
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_3;
		L_3 = AudioController_GetPlaylistByName_m18B65DCC3F6E01401DE80C2AA0687D7690679DF2(__this, L_2, NULL);
		return L_3;
	}
}
// ClockStone.Playlist AudioController::GetPlaylistByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* AudioController_GetPlaylistByName_m18B65DCC3F6E01401DE80C2AA0687D7690679DF2 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, String_t* ___0_playlistName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF5CF94C2536E713813EDDD76400A105EDC92F77D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m83817D343BDAC069422C14D5081E7196A6B65FF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		goto IL_0026;
	}

IL_0004:
	{
		String_t* L_0 = ___0_playlistName;
		PlaylistU5BU5D_t47ECBFE135D02155EB82EB1DF73313E184F6BBFC* L_1 = __this->___musicPlaylists_19;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		String_t* L_5 = L_4->___name_0;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_5, NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		PlaylistU5BU5D_t47ECBFE135D02155EB82EB1DF73313E184F6BBFC* L_7 = __this->___musicPlaylists_19;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}

IL_0022:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0026:
	{
		int32_t L_12 = V_0;
		PlaylistU5BU5D_t47ECBFE135D02155EB82EB1DF73313E184F6BBFC* L_13 = __this->___musicPlaylists_19;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69* L_14 = __this->____additionalAudioControllers_46;
		if (!L_14)
		{
			goto IL_008d;
		}
	}
	{
		V_1 = 0;
		goto IL_007f;
	}

IL_003d:
	{
		List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69* L_15 = __this->____additionalAudioControllers_46;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_17;
		L_17 = List_1_get_Item_m83817D343BDAC069422C14D5081E7196A6B65FF2(L_15, L_16, List_1_get_Item_m83817D343BDAC069422C14D5081E7196A6B65FF2_RuntimeMethod_var);
		V_2 = L_17;
		V_3 = 0;
		goto IL_0070;
	}

IL_004e:
	{
		String_t* L_18 = ___0_playlistName;
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_19 = V_2;
		NullCheck(L_19);
		PlaylistU5BU5D_t47ECBFE135D02155EB82EB1DF73313E184F6BBFC* L_20 = L_19->___musicPlaylists_19;
		int32_t L_21 = V_3;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		String_t* L_24 = L_23->___name_0;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, L_24, NULL);
		if (!L_25)
		{
			goto IL_006c;
		}
	}
	{
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_26 = V_2;
		NullCheck(L_26);
		PlaylistU5BU5D_t47ECBFE135D02155EB82EB1DF73313E184F6BBFC* L_27 = L_26->___musicPlaylists_19;
		int32_t L_28 = V_3;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		return L_30;
	}

IL_006c:
	{
		int32_t L_31 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0070:
	{
		int32_t L_32 = V_3;
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_33 = V_2;
		NullCheck(L_33);
		PlaylistU5BU5D_t47ECBFE135D02155EB82EB1DF73313E184F6BBFC* L_34 = L_33->___musicPlaylists_19;
		NullCheck(L_34);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_007f:
	{
		int32_t L_36 = V_1;
		List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69* L_37 = __this->____additionalAudioControllers_46;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = List_1_get_Count_mF5CF94C2536E713813EDDD76400A105EDC92F77D_inline(L_37, List_1_get_Count_mF5CF94C2536E713813EDDD76400A105EDC92F77D_RuntimeMethod_var);
		if ((((int32_t)L_36) < ((int32_t)L_38)))
		{
			goto IL_003d;
		}
	}

IL_008d:
	{
		return (Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464*)NULL;
	}
}
// System.String[] AudioController::GetMusicPlaylist(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* AudioController_GetMusicPlaylist_mA206E5FBBE670BD44D183409CBAA7BE59B593F2E (String_t* ___0_playlistName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t G_B8_0 = 0;
	{
		String_t* L_0 = ___0_playlistName;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_2;
		L_2 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		NullCheck(L_2);
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_3;
		L_3 = AudioController__GetCurrentPlaylist_m34E76899B97F10F2E0C768CC45EA842130DD1EBC(L_2, NULL);
		V_0 = L_3;
		goto IL_0021;
	}

IL_0015:
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_4;
		L_4 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		String_t* L_5 = ___0_playlistName;
		NullCheck(L_4);
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_6;
		L_6 = AudioController_GetPlaylistByName_m18B65DCC3F6E01401DE80C2AA0687D7690679DF2(L_4, L_5, NULL);
		V_0 = L_6;
	}

IL_0021:
	{
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_7 = V_0;
		if (L_7)
		{
			goto IL_0026;
		}
	}
	{
		return (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
	}

IL_0026:
	{
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_8 = V_0;
		NullCheck(L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8->___playlistItems_1;
		if (L_9)
		{
			goto IL_0031;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_0039;
	}

IL_0031:
	{
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_10 = V_0;
		NullCheck(L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10->___playlistItems_1;
		NullCheck(L_11);
		G_B8_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
	}

IL_0039:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)G_B8_0);
		V_1 = L_12;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_1;
		NullCheck(L_13);
		if (!(((RuntimeArray*)L_13)->max_length))
		{
			goto IL_0052;
		}
	}
	{
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_14 = V_0;
		NullCheck(L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14->___playlistItems_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = V_1;
		NullCheck(L_17);
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_15, (RuntimeArray*)L_16, ((int32_t)(((RuntimeArray*)L_17)->max_length)), NULL);
	}

IL_0052:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = V_1;
		return L_18;
	}
}
// System.Boolean AudioController::SetCurrentMusicPlaylist(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_SetCurrentMusicPlaylist_mC10B5B6EC4003268A0AD0F635FC32BD2EFD3B40D (String_t* ___0_playlistName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BE11E57278B4DB1404B685496A04A9ACD355655);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA5E09B61C7175D79707325C52604B83E5AAD8AF);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		String_t* L_1 = ___0_playlistName;
		NullCheck(L_0);
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_2;
		L_2 = AudioController_GetPlaylistByName_m18B65DCC3F6E01401DE80C2AA0687D7690679DF2(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_3 = ___0_playlistName;
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralEA5E09B61C7175D79707325C52604B83E5AAD8AF, L_3, _stringLiteral0BE11E57278B4DB1404B685496A04A9ACD355655, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_4, NULL);
		return (bool)0;
	}

IL_0024:
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_5;
		L_5 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		String_t* L_6 = ___0_playlistName;
		NullCheck(L_5);
		L_5->____currentPlaylistName_28 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->____currentPlaylistName_28), (void*)L_6);
		return (bool)1;
	}
}
// ClockStone.AudioObject AudioController::PlayMusicPlaylist(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController_PlayMusicPlaylist_m3E50D58CF686ED12127DDF892AF8A9F2FFFD7456 (String_t* ___0_playlistName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_playlistName;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_2 = ___0_playlistName;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = AudioController_SetCurrentMusicPlaylist_mC10B5B6EC4003268A0AD0F635FC32BD2EFD3B40D(L_2, NULL);
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		return (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*)NULL;
	}

IL_0012:
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_4;
		L_4 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		NullCheck(L_4);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_5;
		L_5 = AudioController__PlayMusicPlaylist_m3E5ECF657C898B8D1153DFAFD91EDF2DD6A30957(L_4, NULL);
		return L_5;
	}
}
// ClockStone.AudioObject AudioController::PlayNextMusicOnPlaylist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController_PlayNextMusicOnPlaylist_mDB8B639A070EAEB75E30FF837A095F6280EE6A98 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AudioController_IsPlaylistPlaying_m76CDEE39D7835F270390046A1AFC25334757AC13(NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_1;
		L_1 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		NullCheck(L_1);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_2;
		L_2 = AudioController__PlayNextMusicOnPlaylist_m44169523656BAFACF68F2742D0499981DEE77B51(L_1, (0.0f), NULL);
		return L_2;
	}

IL_0017:
	{
		return (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*)NULL;
	}
}
// ClockStone.AudioObject AudioController::PlayPreviousMusicOnPlaylist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController_PlayPreviousMusicOnPlaylist_m6CC356A1CB2145D2E03351D3E112928DE91E7252 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AudioController_IsPlaylistPlaying_m76CDEE39D7835F270390046A1AFC25334757AC13(NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_1;
		L_1 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		NullCheck(L_1);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_2;
		L_2 = AudioController__PlayPreviousMusicOnPlaylist_mF436C902224FA76A90B9E5A2400265C2BF5E574E(L_1, (0.0f), NULL);
		return L_2;
	}

IL_0017:
	{
		return (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*)NULL;
	}
}
// System.Boolean AudioController::IsPlaylistPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_IsPlaylistPlaying_m76CDEE39D7835F270390046A1AFC25334757AC13 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		bool L_0 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____isPlaylistPlaying_40;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_1 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentMusic_26;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____isPlaylistPlaying_40 = (bool)0;
		return (bool)0;
	}

IL_001b:
	{
		return (bool)1;
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Void AudioController::ClearPlaylists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_ClearPlaylists_m5F3FBEEE414FE4BC7C2CFDAF65BA8A6EF3A5934F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		NullCheck(L_0);
		L_0->___musicPlaylists_19 = (PlaylistU5BU5D_t47ECBFE135D02155EB82EB1DF73313E184F6BBFC*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___musicPlaylists_19), (void*)(PlaylistU5BU5D_t47ECBFE135D02155EB82EB1DF73313E184F6BBFC*)NULL);
		return;
	}
}
// System.Void AudioController::AddPlaylist(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_AddPlaylist_mBFE285F57BFCF06C8A15EB425E62E9DDC375F749 (String_t* ___0_playlistName, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_audioItemIDs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayHelper_AddArrayElement_TisPlaylist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464_mC114FE4EC4E1CCAE269DBC441C0B50A266C1342E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* V_0 = NULL;
	{
		String_t* L_0 = ___0_playlistName;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___1_audioItemIDs;
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_2 = (Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464*)il2cpp_codegen_object_new(Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Playlist__ctor_mB99705B06CD5FD59CBE3B6ECA3F13B21670B3B8D(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_3;
		L_3 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		NullCheck(L_3);
		PlaylistU5BU5D_t47ECBFE135D02155EB82EB1DF73313E184F6BBFC** L_4 = (&L_3->___musicPlaylists_19);
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_5 = V_0;
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_6;
		L_6 = ArrayHelper_AddArrayElement_TisPlaylist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464_mC114FE4EC4E1CCAE269DBC441C0B50A266C1342E(L_4, L_5, ArrayHelper_AddArrayElement_TisPlaylist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464_mC114FE4EC4E1CCAE269DBC441C0B50A266C1342E_RuntimeMethod_var);
		return;
	}
}
// ClockStone.AudioObject AudioController::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController_Play_m9E2A4B913D60B3FA23104A00C22634F2FAC335EF (String_t* ___0_audioID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40CC643AB0A36950A69F5D0EC221AC0B5427EA03);
		s_Il2CppMethodInitialized = true;
	}
	AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* L_0;
		L_0 = AudioController_GetCurrentAudioListener_m02D86AD321D751BAC583DE585D81A2830969D4FD(NULL);
		V_0 = L_0;
		AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral40CC643AB0A36950A69F5D0EC221AC0B5427EA03, NULL);
		return (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*)NULL;
	}

IL_001b:
	{
		String_t* L_3 = ___0_audioID;
		AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* L_4 = V_0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* L_7 = V_0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_11;
		L_11 = AudioController_Play_m49C0ED7CACFFB95BA64323C03F27F89F4889AD76(L_3, L_10, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, (1.0f), (0.0f), (0.0f), NULL);
		return L_11;
	}
}
// ClockStone.AudioObject AudioController::Play(System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController_Play_m33AC662335BFDB6D2ACB9B86312C1DD3784A481C (String_t* ___0_audioID, float ___1_volume, float ___2_delay, float ___3_startTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40CC643AB0A36950A69F5D0EC221AC0B5427EA03);
		s_Il2CppMethodInitialized = true;
	}
	AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* L_0;
		L_0 = AudioController_GetCurrentAudioListener_m02D86AD321D751BAC583DE585D81A2830969D4FD(NULL);
		V_0 = L_0;
		AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral40CC643AB0A36950A69F5D0EC221AC0B5427EA03, NULL);
		return (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*)NULL;
	}

IL_001b:
	{
		String_t* L_3 = ___0_audioID;
		AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* L_4 = V_0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* L_7 = V_0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_9, NULL);
		float L_11 = ___1_volume;
		float L_12 = ___2_delay;
		float L_13 = ___3_startTime;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_14;
		L_14 = AudioController_Play_m49C0ED7CACFFB95BA64323C03F27F89F4889AD76(L_3, L_10, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, L_11, L_12, L_13, NULL);
		return L_14;
	}
}
// ClockStone.AudioObject AudioController::Play(System.String,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController_Play_m1EFE1DC31BDC3744C34156270A5F939C2FF09BA4 (String_t* ___0_audioID, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parentObj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_audioID;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___1_parentObj;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___1_parentObj;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_4;
		L_4 = AudioController_Play_m49C0ED7CACFFB95BA64323C03F27F89F4889AD76(L_0, L_2, L_3, (1.0f), (0.0f), (0.0f), NULL);
		return L_4;
	}
}
// ClockStone.AudioObject AudioController::Play(System.String,UnityEngine.Transform,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController_Play_mDBF4551D5AB2787F7B8A1CEDABC5C34B7017FCE0 (String_t* ___0_audioID, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parentObj, float ___2_volume, float ___3_delay, float ___4_startTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_audioID;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___1_parentObj;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___1_parentObj;
		float L_4 = ___2_volume;
		float L_5 = ___3_delay;
		float L_6 = ___4_startTime;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_7;
		L_7 = AudioController_Play_m49C0ED7CACFFB95BA64323C03F27F89F4889AD76(L_0, L_2, L_3, L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// ClockStone.AudioObject AudioController::Play(System.String,UnityEngine.Vector3,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController_Play_m1FD6901C44EF0522BA2C5120436F9257FBE578B3 (String_t* ___0_audioID, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_worldPosition, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___2_parentObj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		String_t* L_1 = ___0_audioID;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_worldPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___2_parentObj;
		NullCheck(L_0);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_4;
		L_4 = AudioController__PlayEx_m67BFBEB1B06D98669996848F7E16FD24961014C5(L_0, L_1, 0, (1.0f), L_2, L_3, (0.0f), (0.0f), (bool)0, (0.0), (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*)NULL, (1.0f), NULL);
		return L_4;
	}
}
// ClockStone.AudioObject AudioController::Play(System.String,UnityEngine.Vector3,UnityEngine.Transform,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController_Play_m49C0ED7CACFFB95BA64323C03F27F89F4889AD76 (String_t* ___0_audioID, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_worldPosition, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___2_parentObj, float ___3_volume, float ___4_delay, float ___5_startTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		String_t* L_1 = ___0_audioID;
		float L_2 = ___3_volume;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_worldPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___2_parentObj;
		float L_5 = ___4_delay;
		float L_6 = ___5_startTime;
		NullCheck(L_0);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_7;
		L_7 = AudioController__PlayEx_m67BFBEB1B06D98669996848F7E16FD24961014C5(L_0, L_1, 0, L_2, L_3, L_4, L_5, L_6, (bool)0, (0.0), (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*)NULL, (1.0f), NULL);
		return L_7;
	}
}
// ClockStone.AudioObject AudioController::PlayScheduled(System.String,System.Double,UnityEngine.Vector3,UnityEngine.Transform,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController_PlayScheduled_m19D5D688A794B9D9EAAA3B394C474D8ACB698AE2 (String_t* ___0_audioID, double ___1_dspTime, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_worldPosition, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___3_parentObj, float ___4_volume, float ___5_startTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		String_t* L_1 = ___0_audioID;
		float L_2 = ___4_volume;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___2_worldPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___3_parentObj;
		float L_5 = ___5_startTime;
		double L_6 = ___1_dspTime;
		NullCheck(L_0);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_7;
		L_7 = AudioController__PlayEx_m67BFBEB1B06D98669996848F7E16FD24961014C5(L_0, L_1, 0, L_2, L_3, L_4, (0.0f), L_5, (bool)0, L_6, (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*)NULL, (1.0f), NULL);
		return L_7;
	}
}
// ClockStone.AudioObject AudioController::PlayAfter(System.String,ClockStone.AudioObject,System.Double,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController_PlayAfter_mF0B328D8DAA7B418434668B90DEB252C22984B49 (String_t* ___0_audioID, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* ___1_playingAudio, double ___2_deltaDspTime, float ___3_volume, float ___4_startTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		double L_0;
		L_0 = AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA(NULL);
		V_0 = L_0;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_1 = ___1_playingAudio;
		NullCheck(L_1);
		bool L_2;
		L_2 = AudioObject_IsPlaying_m9A39EA279DC025604E0EB1423B38D2401CED651F(L_1, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		double L_3 = V_0;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_4 = ___1_playingAudio;
		NullCheck(L_4);
		float L_5;
		L_5 = AudioObject_get_timeUntilEnd_m128758E4D90E1C16EDBA09DC993FDE766CBF3605(L_4, NULL);
		V_0 = ((double)il2cpp_codegen_add(L_3, ((double)L_5)));
	}

IL_0018:
	{
		double L_6 = V_0;
		double L_7 = ___2_deltaDspTime;
		V_0 = ((double)il2cpp_codegen_add(L_6, L_7));
		String_t* L_8 = ___0_audioID;
		double L_9 = V_0;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_10 = ___1_playingAudio;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_13 = ___1_playingAudio;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_14, NULL);
		float L_16 = ___3_volume;
		float L_17 = ___4_startTime;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_18;
		L_18 = AudioController_PlayScheduled_m19D5D688A794B9D9EAAA3B394C474D8ACB698AE2(L_8, L_9, L_12, L_15, L_16, L_17, NULL);
		return L_18;
	}
}
// System.Boolean AudioController::Stop(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_Stop_m6BC3701819E727344B897C50C396DB52704D2614 (String_t* ___0_audioID, float ___1_fadeOutLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94806DC905AE5E79B94A0190E36270E1FFA45178);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA296D16008C5409469563CF28EE0D3005EFE3F45);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* V_0 = NULL;
	int32_t V_1 = 0;
	AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		String_t* L_1 = ___0_audioID;
		NullCheck(L_0);
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_2;
		L_2 = AudioController__GetAudioItem_m1243AAE48D2F5386F106190EC1FC2D8073B7B632(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_3 = ___0_audioID;
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral94806DC905AE5E79B94A0190E36270E1FFA45178, L_3, _stringLiteralA296D16008C5409469563CF28EE0D3005EFE3F45, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_4, NULL);
		return (bool)0;
	}

IL_0024:
	{
		String_t* L_5 = ___0_audioID;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_6;
		L_6 = AudioController_GetPlayingAudioObjects_mCEE013FBDD6C7CDBF2C9B66C33F3AF2CA567D0CB(L_5, (bool)0, NULL);
		V_0 = L_6;
		V_1 = 0;
		goto IL_0053;
	}

IL_0030:
	{
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_9;
		L_9 = List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639(L_7, L_8, List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639_RuntimeMethod_var);
		V_2 = L_9;
		float L_10 = ___1_fadeOutLength;
		if ((!(((float)L_10) < ((float)(0.0f)))))
		{
			goto IL_0048;
		}
	}
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_11 = V_2;
		NullCheck(L_11);
		AudioObject_Stop_m9A3221CC31D6CD491CE07EE835A5A30D51125138(L_11, NULL);
		goto IL_004f;
	}

IL_0048:
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_12 = V_2;
		float L_13 = ___1_fadeOutLength;
		NullCheck(L_12);
		AudioObject_Stop_m793AABEC01EF24936D60037EB89C617B13AD9740(L_12, L_13, NULL);
	}

IL_004f:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0053:
	{
		int32_t L_15 = V_1;
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_inline(L_16, List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_RuntimeMethod_var);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0030;
		}
	}
	{
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_inline(L_18, List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_RuntimeMethod_var);
		return (bool)((((int32_t)L_19) > ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean AudioController::Stop(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_Stop_mED639752D80493BF96E94C4DB7AF1F9F69B69BDC (String_t* ___0_audioID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_audioID;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AudioController_Stop_m6BC3701819E727344B897C50C396DB52704D2614(L_0, (-1.0f), NULL);
		return L_1;
	}
}
// System.Void AudioController::StopAll(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_StopAll_mC74E8CC27E4DA706ED6572ED9A2C31F7E2FF866D (float ___0_fadeOutLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* V_0 = NULL;
	int32_t V_1 = 0;
	AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		float L_1 = ___0_fadeOutLength;
		NullCheck(L_0);
		bool L_2;
		L_2 = AudioController__StopMusic_m03D2A3B47C0CB555DBB26575A3A1950A2957D723(L_0, L_1, NULL);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_3;
		L_3 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		float L_4 = ___0_fadeOutLength;
		NullCheck(L_3);
		bool L_5;
		L_5 = AudioController__StopAmbienceSound_m7AD63BCB34F841A51110DE31932BC7D29F779D46(L_3, L_4, NULL);
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_6;
		L_6 = AudioController_GetPlayingAudioObjects_m9E3B6784F0F27B1E5B27AD002EA68330F0A69103((bool)0, NULL);
		V_0 = L_6;
		V_1 = 0;
		goto IL_003f;
	}

IL_0023:
	{
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_9;
		L_9 = List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639(L_7, L_8, List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639_RuntimeMethod_var);
		V_2 = L_9;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_10 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_003b;
		}
	}
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_12 = V_2;
		float L_13 = ___0_fadeOutLength;
		NullCheck(L_12);
		AudioObject_Stop_m793AABEC01EF24936D60037EB89C617B13AD9740(L_12, L_13, NULL);
	}

IL_003b:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_003f:
	{
		int32_t L_15 = V_1;
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_inline(L_16, List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_RuntimeMethod_var);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0023;
		}
	}
	{
		return;
	}
}
// System.Void AudioController::StopAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_StopAll_m5BEA63F03B5566744A690B4C3B46B364BC492DDF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_StopAll_mC74E8CC27E4DA706ED6572ED9A2C31F7E2FF866D((-1.0f), NULL);
		return;
	}
}
// System.Void AudioController::PauseAll(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_PauseAll_m7148A8653DD0CC8C3496DF621C060851FD03BDFE (float ___0_fadeOutLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* V_0 = NULL;
	int32_t V_1 = 0;
	AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		float L_1 = ___0_fadeOutLength;
		NullCheck(L_0);
		bool L_2;
		L_2 = AudioController__PauseMusic_m6A9CB667A295BE060E2EB8753069F44D6CAD8DC1(L_0, L_1, NULL);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_3;
		L_3 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		float L_4 = ___0_fadeOutLength;
		NullCheck(L_3);
		bool L_5;
		L_5 = AudioController__PauseAmbienceSound_m3716CEAA18EE21B0F91859709E4193084ECBD0C6(L_3, L_4, NULL);
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_6;
		L_6 = AudioController_GetPlayingAudioObjects_m9E3B6784F0F27B1E5B27AD002EA68330F0A69103((bool)0, NULL);
		V_0 = L_6;
		V_1 = 0;
		goto IL_003f;
	}

IL_0023:
	{
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_9;
		L_9 = List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639(L_7, L_8, List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639_RuntimeMethod_var);
		V_2 = L_9;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_10 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_003b;
		}
	}
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_12 = V_2;
		float L_13 = ___0_fadeOutLength;
		NullCheck(L_12);
		AudioObject_Pause_m75B0D2F903F51B6D80133DBDC5737931E2D9F3E2(L_12, L_13, NULL);
	}

IL_003b:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_003f:
	{
		int32_t L_15 = V_1;
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_inline(L_16, List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_RuntimeMethod_var);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0023;
		}
	}
	{
		return;
	}
}
// System.Void AudioController::UnpauseAll(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_UnpauseAll_m66D99B9A862344AF0B3E45212D848A86CB7F2B3D (float ___0_fadeInLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* V_0 = NULL;
	AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* V_1 = NULL;
	int32_t V_2 = 0;
	AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* V_3 = NULL;
	{
		float L_0 = ___0_fadeInLength;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AudioController_UnpauseMusic_mD6D8D8BB59D0D15CF7CCEC5998CC3BB382AD0820(L_0, NULL);
		float L_2 = ___0_fadeInLength;
		bool L_3;
		L_3 = AudioController_UnpauseAmbienceSound_m00F14F29E5A0CAB70D586EA91DB146B4A744E044(L_2, NULL);
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_4;
		L_4 = AudioController_GetPlayingAudioObjects_m9E3B6784F0F27B1E5B27AD002EA68330F0A69103((bool)1, NULL);
		V_0 = L_4;
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_5;
		L_5 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		V_1 = L_5;
		V_2 = 0;
		goto IL_006e;
	}

IL_001f:
	{
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_6 = V_0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_8;
		L_8 = List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639(L_6, L_7, List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639_RuntimeMethod_var);
		V_3 = L_8;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_9 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_006a;
		}
	}
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_11 = V_3;
		NullCheck(L_11);
		bool L_12;
		L_12 = AudioObject_IsPaused_m3E5B6566C020302D843CF742122EC0A1DFDB5C08(L_11, (bool)1, NULL);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_13 = V_1;
		NullCheck(L_13);
		bool L_14;
		L_14 = AudioController_get_musicEnabled_mF55BDA1639F54A02F7B88469DB1A57C853A7A8C2_inline(L_13, NULL);
		if (L_14)
		{
			goto IL_004e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_15 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentMusic_26;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_16 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_15, L_16, NULL);
		if (L_17)
		{
			goto IL_006a;
		}
	}

IL_004e:
	{
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_18 = V_1;
		NullCheck(L_18);
		bool L_19;
		L_19 = AudioController_get_ambienceSoundEnabled_m25FAB0BBB687B1DC2152293A4D38967B4F405073_inline(L_18, NULL);
		if (L_19)
		{
			goto IL_0063;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_20 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentAmbienceSound_27;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_21 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_20, L_21, NULL);
		if (L_22)
		{
			goto IL_006a;
		}
	}

IL_0063:
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_23 = V_3;
		float L_24 = ___0_fadeInLength;
		NullCheck(L_23);
		AudioObject_Unpause_m81B063BA096DEC318A7ABE62F8C7A03A556CB7E4(L_23, L_24, NULL);
	}

IL_006a:
	{
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_006e:
	{
		int32_t L_26 = V_2;
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_inline(L_27, List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_RuntimeMethod_var);
		if ((((int32_t)L_26) < ((int32_t)L_28)))
		{
			goto IL_001f;
		}
	}
	{
		return;
	}
}
// System.Void AudioController::PauseCategory(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_PauseCategory_mFF627F3CD84F8126AE533EDCF230061CF0AF80E0 (String_t* ___0_categoryName, float ___1_fadeOutLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* V_0 = NULL;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_0 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentMusic_26;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_2 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentMusic_26;
		NullCheck(L_2);
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_3;
		L_3 = AudioObject_get_category_m1B694D47010EA8BEDF53B11C36F460F99CE67AAD_inline(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4 = L_3->___Name_0;
		String_t* L_5 = ___0_categoryName;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		float L_7 = ___1_fadeOutLength;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = AudioController_PauseMusic_m9F0C7BAC9D1D35B0FD04BB323E8986955650208C(L_7, NULL);
	}

IL_002b:
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_9 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentAmbienceSound_27;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0056;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_11 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentAmbienceSound_27;
		NullCheck(L_11);
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_12;
		L_12 = AudioObject_get_category_m1B694D47010EA8BEDF53B11C36F460F99CE67AAD_inline(L_11, NULL);
		NullCheck(L_12);
		String_t* L_13 = L_12->___Name_0;
		String_t* L_14 = ___0_categoryName;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, L_14, NULL);
		if (!L_15)
		{
			goto IL_0056;
		}
	}
	{
		float L_16 = ___1_fadeOutLength;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = AudioController_PauseAmbienceSound_m9A0B2885F41502179023E13DA60E195C23742AA6(L_16, NULL);
	}

IL_0056:
	{
		String_t* L_18 = ___0_categoryName;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_19;
		L_19 = AudioController_GetPlayingAudioObjectsInCategory_mBA89AEC388CC2BB5D5B87CF4E1BC718094C498FE(L_18, (bool)0, NULL);
		V_0 = L_19;
		V_1 = 0;
		goto IL_0073;
	}

IL_0062:
	{
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_20 = V_0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_22;
		L_22 = List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639(L_20, L_21, List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639_RuntimeMethod_var);
		float L_23 = ___1_fadeOutLength;
		NullCheck(L_22);
		AudioObject_Pause_m75B0D2F903F51B6D80133DBDC5737931E2D9F3E2(L_22, L_23, NULL);
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0073:
	{
		int32_t L_25 = V_1;
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_inline(L_26, List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_RuntimeMethod_var);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_0062;
		}
	}
	{
		return;
	}
}
// System.Void AudioController::UnpauseCategory(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_UnpauseCategory_m115B2F28161DF0828A7F5833D80CCA2E7355E752 (String_t* ___0_categoryName, float ___1_fadeInLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* V_0 = NULL;
	int32_t V_1 = 0;
	AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_0 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentMusic_26;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_2 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentMusic_26;
		NullCheck(L_2);
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_3;
		L_3 = AudioObject_get_category_m1B694D47010EA8BEDF53B11C36F460F99CE67AAD_inline(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4 = L_3->___Name_0;
		String_t* L_5 = ___0_categoryName;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		float L_7 = ___1_fadeInLength;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = AudioController_UnpauseMusic_mD6D8D8BB59D0D15CF7CCEC5998CC3BB382AD0820(L_7, NULL);
	}

IL_002b:
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_9 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentAmbienceSound_27;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0056;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_11 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentAmbienceSound_27;
		NullCheck(L_11);
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_12;
		L_12 = AudioObject_get_category_m1B694D47010EA8BEDF53B11C36F460F99CE67AAD_inline(L_11, NULL);
		NullCheck(L_12);
		String_t* L_13 = L_12->___Name_0;
		String_t* L_14 = ___0_categoryName;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, L_14, NULL);
		if (!L_15)
		{
			goto IL_0056;
		}
	}
	{
		float L_16 = ___1_fadeInLength;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = AudioController_UnpauseAmbienceSound_m00F14F29E5A0CAB70D586EA91DB146B4A744E044(L_16, NULL);
	}

IL_0056:
	{
		String_t* L_18 = ___0_categoryName;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_19;
		L_19 = AudioController_GetPlayingAudioObjectsInCategory_mBA89AEC388CC2BB5D5B87CF4E1BC718094C498FE(L_18, (bool)1, NULL);
		V_0 = L_19;
		V_1 = 0;
		goto IL_007e;
	}

IL_0062:
	{
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_20 = V_0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_22;
		L_22 = List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639(L_20, L_21, List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639_RuntimeMethod_var);
		V_2 = L_22;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_23 = V_2;
		NullCheck(L_23);
		bool L_24;
		L_24 = AudioObject_IsPaused_m3E5B6566C020302D843CF742122EC0A1DFDB5C08(L_23, (bool)1, NULL);
		if (!L_24)
		{
			goto IL_007a;
		}
	}
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_25 = V_2;
		float L_26 = ___1_fadeInLength;
		NullCheck(L_25);
		AudioObject_Unpause_m81B063BA096DEC318A7ABE62F8C7A03A556CB7E4(L_25, L_26, NULL);
	}

IL_007a:
	{
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007e:
	{
		int32_t L_28 = V_1;
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_inline(L_29, List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_RuntimeMethod_var);
		if ((((int32_t)L_28) < ((int32_t)L_30)))
		{
			goto IL_0062;
		}
	}
	{
		return;
	}
}
// System.Void AudioController::StopCategory(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_StopCategory_m6CE68737160D1611169C380395E5A987A17C68BF (String_t* ___0_categoryName, float ___1_fadeOutLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* V_0 = NULL;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_0 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentMusic_26;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_2 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentMusic_26;
		NullCheck(L_2);
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_3;
		L_3 = AudioObject_get_category_m1B694D47010EA8BEDF53B11C36F460F99CE67AAD_inline(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4 = L_3->___Name_0;
		String_t* L_5 = ___0_categoryName;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		float L_7 = ___1_fadeOutLength;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = AudioController_StopMusic_m2F52F5FF594527AAAC955A15D4950BB263886165(L_7, NULL);
	}

IL_002b:
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_9 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentAmbienceSound_27;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0056;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_11 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentAmbienceSound_27;
		NullCheck(L_11);
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_12;
		L_12 = AudioObject_get_category_m1B694D47010EA8BEDF53B11C36F460F99CE67AAD_inline(L_11, NULL);
		NullCheck(L_12);
		String_t* L_13 = L_12->___Name_0;
		String_t* L_14 = ___0_categoryName;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, L_14, NULL);
		if (!L_15)
		{
			goto IL_0056;
		}
	}
	{
		float L_16 = ___1_fadeOutLength;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = AudioController_StopAmbienceSound_m2773D9A9CBD1B546FC7D9059BC60E05411336BFF(L_16, NULL);
	}

IL_0056:
	{
		String_t* L_18 = ___0_categoryName;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_19;
		L_19 = AudioController_GetPlayingAudioObjectsInCategory_mBA89AEC388CC2BB5D5B87CF4E1BC718094C498FE(L_18, (bool)0, NULL);
		V_0 = L_19;
		V_1 = 0;
		goto IL_0073;
	}

IL_0062:
	{
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_20 = V_0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_22;
		L_22 = List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639(L_20, L_21, List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639_RuntimeMethod_var);
		float L_23 = ___1_fadeOutLength;
		NullCheck(L_22);
		AudioObject_Stop_m793AABEC01EF24936D60037EB89C617B13AD9740(L_22, L_23, NULL);
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0073:
	{
		int32_t L_25 = V_1;
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_inline(L_26, List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_RuntimeMethod_var);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_0062;
		}
	}
	{
		return;
	}
}
// System.Boolean AudioController::IsPlaying(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_IsPlaying_mCF68AF5851FB8E1376F7EB79A80DDDCEFE728BD9 (String_t* ___0_audioID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_audioID;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_1;
		L_1 = AudioController_GetPlayingAudioObjects_mCEE013FBDD6C7CDBF2C9B66C33F3AF2CA567D0CB(L_0, (bool)0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_inline(L_1, List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_RuntimeMethod_var);
		return (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
	}
}
// System.Collections.Generic.List`1<ClockStone.AudioObject> AudioController::GetPlayingAudioObjects(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* AudioController_GetPlayingAudioObjects_mCEE013FBDD6C7CDBF2C9B66C33F3AF2CA567D0CB (String_t* ___0_audioID, bool ___1_includePausedAudio, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m75252EB65A6C0CEF418B30F9C8FAB6434FECAA46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m77FBC63F8A3BC762AD34B81DBF5895096ABEE37E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* V_0 = NULL;
	List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* V_1 = NULL;
	int32_t V_2 = 0;
	AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* V_3 = NULL;
	{
		bool L_0 = ___1_includePausedAudio;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_1;
		L_1 = AudioController_GetPlayingAudioObjects_m9E3B6784F0F27B1E5B27AD002EA68330F0A69103(L_0, NULL);
		V_0 = L_1;
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_inline(L_2, List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_RuntimeMethod_var);
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_4 = (List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9*)il2cpp_codegen_object_new(List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m77FBC63F8A3BC762AD34B81DBF5895096ABEE37E(L_4, L_3, List_1__ctor_m77FBC63F8A3BC762AD34B81DBF5895096ABEE37E_RuntimeMethod_var);
		V_1 = L_4;
		V_2 = 0;
		goto IL_0041;
	}

IL_0017:
	{
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_5 = V_0;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_7;
		L_7 = List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639(L_5, L_6, List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639_RuntimeMethod_var);
		V_3 = L_7;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_8 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_003d;
		}
	}
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_10 = V_3;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = AudioObject_get_audioID_m07AC1667AE18FFF1A4954E60D7223561E12DF0D1_inline(L_10, NULL);
		String_t* L_12 = ___0_audioID;
		bool L_13;
		L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003d;
		}
	}
	{
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_14 = V_1;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_15 = V_3;
		NullCheck(L_14);
		List_1_Add_m75252EB65A6C0CEF418B30F9C8FAB6434FECAA46_inline(L_14, L_15, List_1_Add_m75252EB65A6C0CEF418B30F9C8FAB6434FECAA46_RuntimeMethod_var);
	}

IL_003d:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0041:
	{
		int32_t L_17 = V_2;
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_inline(L_18, List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_RuntimeMethod_var);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0017;
		}
	}
	{
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_20 = V_1;
		return L_20;
	}
}
// System.Collections.Generic.List`1<ClockStone.AudioObject> AudioController::GetPlayingAudioObjectsInCategory(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* AudioController_GetPlayingAudioObjectsInCategory_mBA89AEC388CC2BB5D5B87CF4E1BC718094C498FE (String_t* ___0_categoryName, bool ___1_includePausedAudio, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m75252EB65A6C0CEF418B30F9C8FAB6434FECAA46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m77FBC63F8A3BC762AD34B81DBF5895096ABEE37E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* V_0 = NULL;
	List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* V_1 = NULL;
	int32_t V_2 = 0;
	AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* V_3 = NULL;
	{
		bool L_0 = ___1_includePausedAudio;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_1;
		L_1 = AudioController_GetPlayingAudioObjects_m9E3B6784F0F27B1E5B27AD002EA68330F0A69103(L_0, NULL);
		V_0 = L_1;
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_inline(L_2, List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_RuntimeMethod_var);
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_4 = (List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9*)il2cpp_codegen_object_new(List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m77FBC63F8A3BC762AD34B81DBF5895096ABEE37E(L_4, L_3, List_1__ctor_m77FBC63F8A3BC762AD34B81DBF5895096ABEE37E_RuntimeMethod_var);
		V_1 = L_4;
		V_2 = 0;
		goto IL_003c;
	}

IL_0017:
	{
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_5 = V_0;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_7;
		L_7 = List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639(L_5, L_6, List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639_RuntimeMethod_var);
		V_3 = L_7;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_8 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0038;
		}
	}
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_10 = V_3;
		String_t* L_11 = ___0_categoryName;
		NullCheck(L_10);
		bool L_12;
		L_12 = AudioObject_DoesBelongToCategory_m16E47EDED67309A145EA4B2A7BC6CD8D92A32B18(L_10, L_11, NULL);
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_13 = V_1;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_14 = V_3;
		NullCheck(L_13);
		List_1_Add_m75252EB65A6C0CEF418B30F9C8FAB6434FECAA46_inline(L_13, L_14, List_1_Add_m75252EB65A6C0CEF418B30F9C8FAB6434FECAA46_RuntimeMethod_var);
	}

IL_0038:
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_003c:
	{
		int32_t L_16 = V_2;
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_inline(L_17, List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0017;
		}
	}
	{
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_19 = V_1;
		return L_19;
	}
}
// System.Collections.Generic.List`1<ClockStone.AudioObject> AudioController::GetPlayingAudioObjects(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* AudioController_GetPlayingAudioObjects_m9E3B6784F0F27B1E5B27AD002EA68330F0A69103 (bool ___0_includePausedAudio, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m75252EB65A6C0CEF418B30F9C8FAB6434FECAA46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m77FBC63F8A3BC762AD34B81DBF5895096ABEE37E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegisteredComponentController_tFC8241C5D4FAEC07C39DCA2C0F997F0E09E809D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* V_1 = NULL;
	int32_t V_2 = 0;
	AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* V_3 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(RegisteredComponentController_tFC8241C5D4FAEC07C39DCA2C0F997F0E09E809D7_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = RegisteredComponentController_GetAllOfType_mF1C951C9B305607BFF071D2972E55073D4909439(L_1, NULL);
		V_0 = L_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		NullCheck(L_3);
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_4 = (List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9*)il2cpp_codegen_object_new(List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m77FBC63F8A3BC762AD34B81DBF5895096ABEE37E(L_4, ((int32_t)(((RuntimeArray*)L_3)->max_length)), List_1__ctor_m77FBC63F8A3BC762AD34B81DBF5895096ABEE37E_RuntimeMethod_var);
		V_1 = L_4;
		V_2 = 0;
		goto IL_0045;
	}

IL_001d:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = V_0;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = ((AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*)CastclassClass((RuntimeObject*)L_8, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553_il2cpp_TypeInfo_var));
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_9 = V_3;
		NullCheck(L_9);
		bool L_10;
		L_10 = AudioObject_IsPlaying_m9A39EA279DC025604E0EB1423B38D2401CED651F(L_9, NULL);
		if (L_10)
		{
			goto IL_003a;
		}
	}
	{
		bool L_11 = ___0_includePausedAudio;
		if (!L_11)
		{
			goto IL_0041;
		}
	}
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_12 = V_3;
		NullCheck(L_12);
		bool L_13;
		L_13 = AudioObject_IsPaused_m3E5B6566C020302D843CF742122EC0A1DFDB5C08(L_12, (bool)1, NULL);
		if (!L_13)
		{
			goto IL_0041;
		}
	}

IL_003a:
	{
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_14 = V_1;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_15 = V_3;
		NullCheck(L_14);
		List_1_Add_m75252EB65A6C0CEF418B30F9C8FAB6434FECAA46_inline(L_14, L_15, List_1_Add_m75252EB65A6C0CEF418B30F9C8FAB6434FECAA46_RuntimeMethod_var);
	}

IL_0041:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0045:
	{
		int32_t L_17 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = V_0;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_001d;
		}
	}
	{
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_19 = V_1;
		return L_19;
	}
}
// System.Int32 AudioController::GetPlayingAudioObjectsCount(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioController_GetPlayingAudioObjectsCount_m78B3B2D8311D8BFF758AA2B28026BA38C475E13E (String_t* ___0_audioID, bool ___1_includePausedAudio, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* V_3 = NULL;
	{
		bool L_0 = ___1_includePausedAudio;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_1;
		L_1 = AudioController_GetPlayingAudioObjects_m9E3B6784F0F27B1E5B27AD002EA68330F0A69103(L_0, NULL);
		V_0 = L_1;
		V_1 = 0;
		V_2 = 0;
		goto IL_0034;
	}

IL_000d:
	{
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_2 = V_0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_4;
		L_4 = List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639(L_2, L_3, List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639_RuntimeMethod_var);
		V_3 = L_4;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_5 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_7 = V_3;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = AudioObject_get_audioID_m07AC1667AE18FFF1A4954E60D7223561E12DF0D1_inline(L_7, NULL);
		String_t* L_9 = ___0_audioID;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0030:
	{
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0034:
	{
		int32_t L_13 = V_2;
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_inline(L_14, List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}
}
// System.Void AudioController::EnableMusic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_EnableMusic_mD2134314B3F330098BDFF9F119DEDC075A99294C (bool ___0_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		bool L_1 = ___0_b;
		NullCheck(L_0);
		AudioController_set_musicEnabled_m6E280F26D90958F3A164D2FC6095C98FDA60943B(L_0, L_1, NULL);
		return;
	}
}
// System.Void AudioController::EnableAmbienceSound(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_EnableAmbienceSound_m62939D6179BF6944AA85D9939792E238A7937118 (bool ___0_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		bool L_1 = ___0_b;
		NullCheck(L_0);
		AudioController_set_ambienceSoundEnabled_m97B0206E1DF64E4DC1FDB873CCEE50E900FEE752(L_0, L_1, NULL);
		return;
	}
}
// System.Void AudioController::MuteSound(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_MuteSound_m725A60E0A7218577EB70947165B378DF106C97C6 (bool ___0_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		bool L_1 = ___0_b;
		NullCheck(L_0);
		AudioController_set_soundMuted_m959DFE7AFCED1022F990C72EF11C6DA3ED935BFE(L_0, L_1, NULL);
		return;
	}
}
// System.Boolean AudioController::IsMusicEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_IsMusicEnabled_m385434ED0D5C8FA3C12ABD903CF23D34BE7CBC73 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = AudioController_get_musicEnabled_mF55BDA1639F54A02F7B88469DB1A57C853A7A8C2_inline(L_0, NULL);
		return L_1;
	}
}
// System.Boolean AudioController::IsAmbienceSoundEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_IsAmbienceSoundEnabled_m36CD947BB4F445F28CE97C4B7B49B3C9E35080EE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = AudioController_get_ambienceSoundEnabled_m25FAB0BBB687B1DC2152293A4D38967B4F405073_inline(L_0, NULL);
		return L_1;
	}
}
// System.Boolean AudioController::IsSoundMuted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_IsSoundMuted_m993C1F6F4D56360192C92AF83BB32C9CD54B88D4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = AudioController_get_soundMuted_m1BEF7EB429D80238FF5440E7C017F632DEF92E58_inline(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.AudioListener AudioController::GetCurrentAudioListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* AudioController_GetCurrentAudioListener_m02D86AD321D751BAC583DE585D81A2830969D4FD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		V_0 = L_0;
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_1 = V_0;
		NullCheck(L_1);
		AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* L_2 = L_1->____currentAudioListener_29;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_4 = V_0;
		NullCheck(L_4);
		AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* L_5 = L_4->____currentAudioListener_29;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_002e;
		}
	}
	{
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_8 = V_0;
		NullCheck(L_8);
		L_8->____currentAudioListener_29 = (AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____currentAudioListener_29), (void*)(AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35*)NULL);
	}

IL_002e:
	{
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_9 = V_0;
		NullCheck(L_9);
		AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* L_10 = L_9->____currentAudioListener_29;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_15;
		L_15 = Object_FindObjectOfType_mECCF3627FE53B9B53B5D92BFB9FA88490B0ACD5E(L_14, NULL);
		NullCheck(L_12);
		L_12->____currentAudioListener_29 = ((AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35*)CastclassSealed((RuntimeObject*)L_15, AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_12->____currentAudioListener_29), (void*)((AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35*)CastclassSealed((RuntimeObject*)L_15, AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35_il2cpp_TypeInfo_var)));
	}

IL_0056:
	{
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_16 = V_0;
		NullCheck(L_16);
		AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* L_17 = L_16->____currentAudioListener_29;
		return L_17;
	}
}
// ClockStone.AudioObject AudioController::GetCurrentMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController_GetCurrentMusic_mF270BEB1667D3E92B0168A3684C926203F17DB0F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_0 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentMusic_26;
		return L_0;
	}
}
// ClockStone.AudioObject AudioController::GetCurrentAmbienceSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController_GetCurrentAmbienceSound_m7F9ACBCB305EBA73212363D4904FE1ED8B9BA7D3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_0 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentAmbienceSound_27;
		return L_0;
	}
}
// ClockStone.AudioCategory AudioController::GetCategory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* AudioController_GetCategory_mF6876E8145A30270FF6DC45E7B801EE8F66CD3D0 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF5CF94C2536E713813EDDD76400A105EDC92F77D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m83817D343BDAC069422C14D5081E7196A6B65FF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* V_0 = NULL;
	AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* V_1 = NULL;
	int32_t V_2 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		V_0 = L_0;
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_1 = V_0;
		String_t* L_2 = ___0_name;
		NullCheck(L_1);
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_3;
		L_3 = AudioController__GetCategory_mCADD0D8AE46FAACDD6E5116396F8836ECAFD562A(L_1, L_2, NULL);
		V_1 = L_3;
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_4 = V_1;
		if (!L_4)
		{
			goto IL_0013;
		}
	}
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_5 = V_1;
		return L_5;
	}

IL_0013:
	{
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_6 = V_0;
		NullCheck(L_6);
		List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69* L_7 = L_6->____additionalAudioControllers_46;
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		V_2 = 0;
		goto IL_003b;
	}

IL_001f:
	{
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_8 = V_0;
		NullCheck(L_8);
		List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69* L_9 = L_8->____additionalAudioControllers_46;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_11;
		L_11 = List_1_get_Item_m83817D343BDAC069422C14D5081E7196A6B65FF2(L_9, L_10, List_1_get_Item_m83817D343BDAC069422C14D5081E7196A6B65FF2_RuntimeMethod_var);
		String_t* L_12 = ___0_name;
		NullCheck(L_11);
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_13;
		L_13 = AudioController__GetCategory_mCADD0D8AE46FAACDD6E5116396F8836ECAFD562A(L_11, L_12, NULL);
		V_1 = L_13;
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_14 = V_1;
		if (!L_14)
		{
			goto IL_0037;
		}
	}
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_15 = V_1;
		return L_15;
	}

IL_0037:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_003b:
	{
		int32_t L_17 = V_2;
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_18 = V_0;
		NullCheck(L_18);
		List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69* L_19 = L_18->____additionalAudioControllers_46;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_mF5CF94C2536E713813EDDD76400A105EDC92F77D_inline(L_19, List_1_get_Count_mF5CF94C2536E713813EDDD76400A105EDC92F77D_RuntimeMethod_var);
		if ((((int32_t)L_17) < ((int32_t)L_20)))
		{
			goto IL_001f;
		}
	}

IL_0049:
	{
		return (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA*)NULL;
	}
}
// System.Void AudioController::SetCategoryVolume(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_SetCategoryVolume_mFF62646F9DF741FB499F08EFF7E77986FF013E8B (String_t* ___0_name, float ___1_volume, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m68262DABB596965AC7A6AD3C9AF5488B77FAC849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9BF4603CEB476E53E9A4BC4A67068BA04C273D68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE6699F49675C435AD5C2ED227335AFCE93E36CF);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE* V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_name;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE* L_1;
		L_1 = AudioController__GetAllCategories_m7893AC462ECA0912A18677156087746FD1C21A22(L_0, NULL);
		V_0 = L_1;
		List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m68262DABB596965AC7A6AD3C9AF5488B77FAC849_inline(L_2, List_1_get_Count_m68262DABB596965AC7A6AD3C9AF5488B77FAC849_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_4 = ___0_name;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDE6699F49675C435AD5C2ED227335AFCE93E36CF, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_5, NULL);
		return;
	}

IL_0020:
	{
		V_1 = 0;
		goto IL_0035;
	}

IL_0024:
	{
		List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_8;
		L_8 = List_1_get_Item_m9BF4603CEB476E53E9A4BC4A67068BA04C273D68(L_6, L_7, List_1_get_Item_m9BF4603CEB476E53E9A4BC4A67068BA04C273D68_RuntimeMethod_var);
		float L_9 = ___1_volume;
		NullCheck(L_8);
		AudioCategory_set_Volume_m36CFDDEFD3C060651851B76A8598680D051656F0(L_8, L_9, NULL);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0035:
	{
		int32_t L_11 = V_1;
		List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m68262DABB596965AC7A6AD3C9AF5488B77FAC849_inline(L_12, List_1_get_Count_m68262DABB596965AC7A6AD3C9AF5488B77FAC849_RuntimeMethod_var);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0024;
		}
	}
	{
		return;
	}
}
// System.Single AudioController::GetCategoryVolume(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioController_GetCategoryVolume_m9E6FCA6ED4DD2466C1C737EBB354EDC8DD8BC2BB (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE6699F49675C435AD5C2ED227335AFCE93E36CF);
		s_Il2CppMethodInitialized = true;
	}
	AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* V_0 = NULL;
	{
		String_t* L_0 = ___0_name;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_1;
		L_1 = AudioController_GetCategory_mF6876E8145A30270FF6DC45E7B801EE8F66CD3D0(L_0, NULL);
		V_0 = L_1;
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_3 = V_0;
		NullCheck(L_3);
		float L_4;
		L_4 = AudioCategory_get_Volume_mF87941E6A9F8725B2DAA2780070B9E279E1DCF24_inline(L_3, NULL);
		return L_4;
	}

IL_0011:
	{
		String_t* L_5 = ___0_name;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDE6699F49675C435AD5C2ED227335AFCE93E36CF, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_6, NULL);
		return (0.0f);
	}
}
// System.Void AudioController::FadeOutCategory(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_FadeOutCategory_m5021B11DD8434584B58464AB6382231313E6989F (String_t* ___0_name, float ___1_fadeOutLength, float ___2_startToFadeTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m68262DABB596965AC7A6AD3C9AF5488B77FAC849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9BF4603CEB476E53E9A4BC4A67068BA04C273D68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE6699F49675C435AD5C2ED227335AFCE93E36CF);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE* V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_name;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE* L_1;
		L_1 = AudioController__GetAllCategories_m7893AC462ECA0912A18677156087746FD1C21A22(L_0, NULL);
		V_0 = L_1;
		List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m68262DABB596965AC7A6AD3C9AF5488B77FAC849_inline(L_2, List_1_get_Count_m68262DABB596965AC7A6AD3C9AF5488B77FAC849_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_4 = ___0_name;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDE6699F49675C435AD5C2ED227335AFCE93E36CF, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_5, NULL);
		return;
	}

IL_0020:
	{
		V_1 = 0;
		goto IL_0036;
	}

IL_0024:
	{
		List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_8;
		L_8 = List_1_get_Item_m9BF4603CEB476E53E9A4BC4A67068BA04C273D68(L_6, L_7, List_1_get_Item_m9BF4603CEB476E53E9A4BC4A67068BA04C273D68_RuntimeMethod_var);
		float L_9 = ___1_fadeOutLength;
		float L_10 = ___2_startToFadeTime;
		NullCheck(L_8);
		AudioCategory_FadeOut_mB642FE78F3D86D44146F26C0F95BF9873595DC8E(L_8, L_9, L_10, NULL);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0036:
	{
		int32_t L_12 = V_1;
		List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_m68262DABB596965AC7A6AD3C9AF5488B77FAC849_inline(L_13, List_1_get_Count_m68262DABB596965AC7A6AD3C9AF5488B77FAC849_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_0024;
		}
	}
	{
		return;
	}
}
// System.Void AudioController::FadeInCategory(System.String,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_FadeInCategory_mB5FFCAA7341F8A2EAA1ED49B35C180C317501434 (String_t* ___0_name, float ___1_fadeInTime, bool ___2_stopCurrentFadeOut, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m68262DABB596965AC7A6AD3C9AF5488B77FAC849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9BF4603CEB476E53E9A4BC4A67068BA04C273D68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE6699F49675C435AD5C2ED227335AFCE93E36CF);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE* V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_name;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE* L_1;
		L_1 = AudioController__GetAllCategories_m7893AC462ECA0912A18677156087746FD1C21A22(L_0, NULL);
		V_0 = L_1;
		List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m68262DABB596965AC7A6AD3C9AF5488B77FAC849_inline(L_2, List_1_get_Count_m68262DABB596965AC7A6AD3C9AF5488B77FAC849_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_4 = ___0_name;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDE6699F49675C435AD5C2ED227335AFCE93E36CF, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_5, NULL);
		return;
	}

IL_0020:
	{
		V_1 = 0;
		goto IL_0036;
	}

IL_0024:
	{
		List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_8;
		L_8 = List_1_get_Item_m9BF4603CEB476E53E9A4BC4A67068BA04C273D68(L_6, L_7, List_1_get_Item_m9BF4603CEB476E53E9A4BC4A67068BA04C273D68_RuntimeMethod_var);
		float L_9 = ___1_fadeInTime;
		bool L_10 = ___2_stopCurrentFadeOut;
		NullCheck(L_8);
		AudioCategory_FadeIn_mB74842630735404302D0C4B5F36DED49A1D2DABA(L_8, L_9, L_10, NULL);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0036:
	{
		int32_t L_12 = V_1;
		List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_m68262DABB596965AC7A6AD3C9AF5488B77FAC849_inline(L_13, List_1_get_Count_m68262DABB596965AC7A6AD3C9AF5488B77FAC849_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_0024;
		}
	}
	{
		return;
	}
}
// System.Void AudioController::SetGlobalVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_SetGlobalVolume_mA59A5933FB90298AFABD5612571D6B5EE683CB3A (float ___0_volume, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF5CF94C2536E713813EDDD76400A105EDC92F77D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m83817D343BDAC069422C14D5081E7196A6B65FF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* V_0 = NULL;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		V_0 = L_0;
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_1 = V_0;
		float L_2 = ___0_volume;
		NullCheck(L_1);
		AudioController_set_Volume_mD3269DBE0C907A6D15CFC443E08EA7DDF9F7A3E0(L_1, L_2, NULL);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_3 = V_0;
		NullCheck(L_3);
		List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69* L_4 = L_3->____additionalAudioControllers_46;
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		V_1 = 0;
		goto IL_002f;
	}

IL_0019:
	{
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_5 = V_0;
		NullCheck(L_5);
		List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69* L_6 = L_5->____additionalAudioControllers_46;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_8;
		L_8 = List_1_get_Item_m83817D343BDAC069422C14D5081E7196A6B65FF2(L_6, L_7, List_1_get_Item_m83817D343BDAC069422C14D5081E7196A6B65FF2_RuntimeMethod_var);
		float L_9 = ___0_volume;
		NullCheck(L_8);
		AudioController_set_Volume_mD3269DBE0C907A6D15CFC443E08EA7DDF9F7A3E0(L_8, L_9, NULL);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002f:
	{
		int32_t L_11 = V_1;
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_12 = V_0;
		NullCheck(L_12);
		List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69* L_13 = L_12->____additionalAudioControllers_46;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_mF5CF94C2536E713813EDDD76400A105EDC92F77D_inline(L_13, List_1_get_Count_mF5CF94C2536E713813EDDD76400A105EDC92F77D_RuntimeMethod_var);
		if ((((int32_t)L_11) < ((int32_t)L_14)))
		{
			goto IL_0019;
		}
	}

IL_003d:
	{
		return;
	}
}
// System.Single AudioController::GetGlobalVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioController_GetGlobalVolume_m8354536A18D09E3E434618960D8C1C721CBC4606 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = AudioController_get_Volume_m76D0F25F710E931B3BCB1811834BBF45ACCCF137_inline(L_0, NULL);
		return L_1;
	}
}
// ClockStone.AudioCategory AudioController::NewCategory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* AudioController_NewCategory_mB41D9E0B67658016C1102EE7A343B31948A046FA (String_t* ___0_categoryName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931* V_1 = NULL;
	AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* V_2 = NULL;
	int32_t G_B3_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		NullCheck(L_0);
		AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931* L_1 = L_0->___AudioCategories_18;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_001b;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_2;
		L_2 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		NullCheck(L_2);
		AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931* L_3 = L_2->___AudioCategories_18;
		NullCheck(L_3);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
	}

IL_001b:
	{
		V_0 = G_B3_0;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_4;
		L_4 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		NullCheck(L_4);
		AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931* L_5 = L_4->___AudioCategories_18;
		V_1 = L_5;
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_6;
		L_6 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		int32_t L_7 = V_0;
		AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931* L_8 = (AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931*)(AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931*)SZArrayNew(AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_7, 1)));
		NullCheck(L_6);
		L_6->___AudioCategories_18 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___AudioCategories_18), (void*)L_8);
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931* L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_11;
		L_11 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		NullCheck(L_11);
		AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931* L_12 = L_11->___AudioCategories_18;
		NullCheck((RuntimeArray*)L_10);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_10, (RuntimeArray*)L_12, 0, NULL);
	}

IL_004e:
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_13;
		L_13 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_14 = (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA*)il2cpp_codegen_object_new(AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		AudioCategory__ctor_mB5BC03081781FBF14B5EE1F9A0B3C15750F8C858(L_14, L_13, NULL);
		V_2 = L_14;
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_15 = V_2;
		String_t* L_16 = ___0_categoryName;
		NullCheck(L_15);
		L_15->___Name_0 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___Name_0), (void*)L_16);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_17;
		L_17 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		NullCheck(L_17);
		AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931* L_18 = L_17->___AudioCategories_18;
		int32_t L_19 = V_0;
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_20 = V_2;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA*)L_20);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_21;
		L_21 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		NullCheck(L_21);
		AudioController__InvalidateCategories_mD3461E474AE26627D1EE78226427DB297AF35A3D(L_21, NULL);
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_22 = V_2;
		return L_22;
	}
}
// System.Void AudioController::RemoveCategory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_RemoveCategory_mB5AB789B1FC17A8EBB12E3DC8CE57C5495EA48D9 (String_t* ___0_categoryName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral813E41A30FDF37C37A10C4F904FC0600F0E0B653);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931* V_3 = NULL;
	{
		V_1 = (-1);
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		NullCheck(L_0);
		AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931* L_1 = L_0->___AudioCategories_18;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_2;
		L_2 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		NullCheck(L_2);
		AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931* L_3 = L_2->___AudioCategories_18;
		NullCheck(L_3);
		V_2 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		goto IL_001f;
	}

IL_001d:
	{
		V_2 = 0;
	}

IL_001f:
	{
		V_0 = 0;
		goto IL_0044;
	}

IL_0023:
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_4;
		L_4 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		NullCheck(L_4);
		AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931* L_5 = L_4->___AudioCategories_18;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		String_t* L_9 = L_8->___Name_0;
		String_t* L_10 = ___0_categoryName;
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_12 = V_0;
		V_1 = L_12;
		goto IL_0048;
	}

IL_0040:
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0044:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = V_2;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0023;
		}
	}

IL_0048:
	{
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_16) == ((uint32_t)(-1)))))
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_17 = ___0_categoryName;
		String_t* L_18;
		L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral813E41A30FDF37C37A10C4F904FC0600F0E0B653, L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_18, NULL);
		return;
	}

IL_005d:
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_19;
		L_19 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		NullCheck(L_19);
		AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931* L_20 = L_19->___AudioCategories_18;
		NullCheck(L_20);
		AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931* L_21 = (AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931*)(AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931*)SZArrayNew(AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_20)->max_length)), 1)));
		V_3 = L_21;
		V_0 = 0;
		goto IL_0088;
	}

IL_0075:
	{
		AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931* L_22 = V_3;
		int32_t L_23 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_24;
		L_24 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		NullCheck(L_24);
		AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931* L_25 = L_24->___AudioCategories_18;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_28);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA*)L_28);
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0088:
	{
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_32 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		goto IL_00a7;
	}

IL_0092:
	{
		AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931* L_33 = V_3;
		int32_t L_34 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_35;
		L_35 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		NullCheck(L_35);
		AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931* L_36 = L_35->___AudioCategories_18;
		int32_t L_37 = V_0;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_39);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_34, 1))), (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA*)L_39);
		int32_t L_40 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00a7:
	{
		int32_t L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_42;
		L_42 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		NullCheck(L_42);
		AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931* L_43 = L_42->___AudioCategories_18;
		NullCheck(L_43);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))))
		{
			goto IL_0092;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_44;
		L_44 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931* L_45 = V_3;
		NullCheck(L_44);
		L_44->___AudioCategories_18 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&L_44->___AudioCategories_18), (void*)L_45);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_46;
		L_46 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		NullCheck(L_46);
		AudioController__InvalidateCategories_mD3461E474AE26627D1EE78226427DB297AF35A3D(L_46, NULL);
		return;
	}
}
// System.Void AudioController::AddToCategory(ClockStone.AudioCategory,ClockStone.AudioItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_AddToCategory_mFDDCF624F949E6D2BAFC25BE5AF936357E0D9A06 (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* ___0_category, AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* ___1_audioItem, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_0 = ___0_category;
		NullCheck(L_0);
		AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9* L_1 = L_0->___AudioItems_6;
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0013;
	}

IL_000b:
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_2 = ___0_category;
		NullCheck(L_2);
		AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9* L_3 = L_2->___AudioItems_6;
		NullCheck(L_3);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
	}

IL_0013:
	{
		V_0 = G_B3_0;
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_4 = ___0_category;
		NullCheck(L_4);
		AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9* L_5 = L_4->___AudioItems_6;
		V_1 = L_5;
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_6 = ___0_category;
		int32_t L_7 = V_0;
		AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9* L_8 = (AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9*)(AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9*)SZArrayNew(AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_7, 1)));
		NullCheck(L_6);
		L_6->___AudioItems_6 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___AudioItems_6), (void*)L_8);
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9* L_10 = V_1;
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_11 = ___0_category;
		NullCheck(L_11);
		AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9* L_12 = L_11->___AudioItems_6;
		NullCheck((RuntimeArray*)L_10);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_10, (RuntimeArray*)L_12, 0, NULL);
	}

IL_003a:
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_13 = ___0_category;
		NullCheck(L_13);
		AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9* L_14 = L_13->___AudioItems_6;
		int32_t L_15 = V_0;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_16 = ___1_audioItem;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0*)L_16);
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_17;
		L_17 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		NullCheck(L_17);
		AudioController__InvalidateCategories_mD3461E474AE26627D1EE78226427DB297AF35A3D(L_17, NULL);
		return;
	}
}
// ClockStone.AudioItem AudioController::AddToCategory(ClockStone.AudioCategory,UnityEngine.AudioClip,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* AudioController_AddToCategory_mC15968B1B59CA489BA451F7E3DA9937282B811A2 (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* ___0_category, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___1_audioClip, String_t* ___2_audioID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* V_0 = NULL;
	AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* V_1 = NULL;
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_0 = (AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0*)il2cpp_codegen_object_new(AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AudioItem__ctor_m82BCD9D53B3781595FC878E08CD96B1223E4D986(L_0, NULL);
		V_0 = L_0;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_1 = V_0;
		String_t* L_2 = ___2_audioID;
		NullCheck(L_1);
		L_1->___Name_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Name_0), (void*)L_2);
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_3 = V_0;
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_4 = (AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D*)(AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D*)SZArrayNew(AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D_il2cpp_TypeInfo_var, (uint32_t)1);
		NullCheck(L_3);
		L_3->___subItems_21 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___subItems_21), (void*)L_4);
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_5 = (AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3*)il2cpp_codegen_object_new(AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AudioSubItem__ctor_m2488D8491E6DDB4F0B7BE60D6F523220AC301F33(L_5, NULL);
		V_1 = L_5;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_6 = V_1;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_7 = ___1_audioClip;
		NullCheck(L_6);
		L_6->___Clip_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___Clip_4), (void*)L_7);
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_8 = V_0;
		NullCheck(L_8);
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_9 = L_8->___subItems_21;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_10 = V_1;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3*)L_10);
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_11 = ___0_category;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_AddToCategory_mFDDCF624F949E6D2BAFC25BE5AF936357E0D9A06(L_11, L_12, NULL);
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_13 = V_0;
		return L_13;
	}
}
// System.Boolean AudioController::RemoveAudioItem(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_RemoveAudioItem_mEEA95613384EE2C6AB52AB88520420384192BE7C (String_t* ___0_audioID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m0186C9FA3C44DD41E8B997DC6298EF1C1CEC9D0F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* V_0 = NULL;
	int32_t V_1 = 0;
	AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9* V_2 = NULL;
	AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		String_t* L_1 = ___0_audioID;
		NullCheck(L_0);
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_2;
		L_2 = AudioController__GetAudioItem_m1243AAE48D2F5386F106190EC1FC2D8073B7B632(L_0, L_1, NULL);
		V_0 = L_2;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_3 = V_0;
		if (!L_3)
		{
			goto IL_009d;
		}
	}
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_4 = V_0;
		NullCheck(L_4);
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_5;
		L_5 = AudioItem_get_category_mA6BE3D42E8FBE2687F68B5017B451ECC79884DE9_inline(L_4, NULL);
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = AudioCategory__GetIndexOf_mE03693754E027447A26055245A3B5863FF35E1F4(L_5, L_6, NULL);
		V_1 = L_7;
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		return (bool)0;
	}

IL_0025:
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_9 = V_0;
		NullCheck(L_9);
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_10;
		L_10 = AudioItem_get_category_mA6BE3D42E8FBE2687F68B5017B451ECC79884DE9_inline(L_9, NULL);
		NullCheck(L_10);
		AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9* L_11 = L_10->___AudioItems_6;
		V_2 = L_11;
		AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9* L_12 = V_2;
		NullCheck(L_12);
		AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9* L_13 = (AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9*)(AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9*)SZArrayNew(AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), 1)));
		V_3 = L_13;
		V_4 = 0;
		goto IL_004f;
	}

IL_0041:
	{
		AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9* L_14 = V_3;
		int32_t L_15 = V_4;
		AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9* L_16 = V_2;
		int32_t L_17 = V_4;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_19);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0*)L_19);
		int32_t L_20 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_004f:
	{
		int32_t L_21 = V_4;
		int32_t L_22 = V_1;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_23 = V_1;
		V_4 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		goto IL_006b;
	}

IL_005b:
	{
		AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9* L_24 = V_3;
		int32_t L_25 = V_4;
		AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9* L_26 = V_2;
		int32_t L_27 = V_4;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_29);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_25, 1))), (AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0*)L_29);
		int32_t L_30 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_006b:
	{
		int32_t L_31 = V_4;
		AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9* L_32 = V_2;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_005b;
		}
	}
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_33 = V_0;
		NullCheck(L_33);
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_34;
		L_34 = AudioItem_get_category_mA6BE3D42E8FBE2687F68B5017B451ECC79884DE9_inline(L_33, NULL);
		AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9* L_35 = V_3;
		NullCheck(L_34);
		L_34->___AudioItems_6 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&L_34->___AudioItems_6), (void*)L_35);
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_36;
		L_36 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		NullCheck(L_36);
		bool L_37 = L_36->____categoriesValidated_35;
		if (!L_37)
		{
			goto IL_009b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_38;
		L_38 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		NullCheck(L_38);
		Dictionary_2_t57C406847BE968A40E40481F27C9CE8C715AC3FB* L_39 = L_38->____audioItems_38;
		String_t* L_40 = ___0_audioID;
		NullCheck(L_39);
		bool L_41;
		L_41 = Dictionary_2_Remove_m0186C9FA3C44DD41E8B997DC6298EF1C1CEC9D0F(L_39, L_40, Dictionary_2_Remove_m0186C9FA3C44DD41E8B997DC6298EF1C1CEC9D0F_RuntimeMethod_var);
	}

IL_009b:
	{
		return (bool)1;
	}

IL_009d:
	{
		return (bool)0;
	}
}
// System.Boolean AudioController::IsValidAudioID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_IsValidAudioID_m6355285B68B615C607B322ADC94F6724292E46F0 (String_t* ___0_audioID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		String_t* L_1 = ___0_audioID;
		NullCheck(L_0);
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_2;
		L_2 = AudioController__GetAudioItem_m1243AAE48D2F5386F106190EC1FC2D8073B7B632(L_0, L_1, NULL);
		return (bool)((!(((RuntimeObject*)(AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// ClockStone.AudioItem AudioController::GetAudioItem(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* AudioController_GetAudioItem_mF34D3C0E02CCDDD5E43FAD801E0E73212F915F4A (String_t* ___0_audioID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		String_t* L_1 = ___0_audioID;
		NullCheck(L_0);
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_2;
		L_2 = AudioController__GetAudioItem_m1243AAE48D2F5386F106190EC1FC2D8073B7B632(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void AudioController::DetachAllAudios(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_DetachAllAudios_mD925654E43030367CB53CFBF5F80737878F34C21 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObjectWithAudios, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisAudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553_mBC964A7F2E2F3B897F91FE94ADEFD9952A01A63E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioObjectU5BU5D_tBAF1BA63CA9B952CDBA2BA71EB5FA5B1C5E8061E* V_0 = NULL;
	int32_t V_1 = 0;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_gameObjectWithAudios;
		NullCheck(L_0);
		AudioObjectU5BU5D_tBAF1BA63CA9B952CDBA2BA71EB5FA5B1C5E8061E* L_1;
		L_1 = GameObject_GetComponentsInChildren_TisAudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553_mBC964A7F2E2F3B897F91FE94ADEFD9952A01A63E(L_0, (bool)1, GameObject_GetComponentsInChildren_TisAudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553_mBC964A7F2E2F3B897F91FE94ADEFD9952A01A63E_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_001e;
	}

IL_000c:
	{
		AudioObjectU5BU5D_tBAF1BA63CA9B952CDBA2BA71EB5FA5B1C5E8061E* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		NullCheck(L_6);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_6, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_001e:
	{
		int32_t L_8 = V_1;
		AudioObjectU5BU5D_tBAF1BA63CA9B952CDBA2BA71EB5FA5B1C5E8061E* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
// System.Single AudioController::GetAudioItemMaxDistance(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioController_GetAudioItemMaxDistance_m478799631072793A857942BCB5212020F61D5105 (String_t* ___0_audioID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* V_0 = NULL;
	{
		String_t* L_0 = ___0_audioID;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_1;
		L_1 = AudioController_GetAudioItem_mF34D3C0E02CCDDD5E43FAD801E0E73212F915F4A(L_0, NULL);
		V_0 = L_1;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = L_2->___overrideAudioSourceSettings_17;
		if (!L_3)
		{
			goto IL_0016;
		}
	}
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_4 = V_0;
		NullCheck(L_4);
		float L_5 = L_4->___audioSource_MaxDistance_19;
		return L_5;
	}

IL_0016:
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_6 = V_0;
		NullCheck(L_6);
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_7;
		L_7 = AudioItem_get_category_mA6BE3D42E8FBE2687F68B5017B451ECC79884DE9_inline(L_6, NULL);
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = AudioCategory_GetAudioObjectPrefab_m76914CC50BB6D19D9202F13F73F5570129D48A57(L_7, NULL);
		NullCheck(L_8);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9;
		L_9 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_8, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		NullCheck(L_9);
		float L_10;
		L_10 = AudioSource_get_maxDistance_m8C31CB391B999C8D344EFF0AFB8E20488F7A5F7E(L_9, NULL);
		return L_10;
	}
}
// System.Void AudioController::UnloadAllAudioClips()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_UnloadAllAudioClips_m787783D1D1AABD9CB66FA0979909FD78B2C76254 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0015;
	}

IL_0004:
	{
		AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931* L_0 = __this->___AudioCategories_18;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		AudioCategory_UnloadAllAudioClips_m055FD38B2D98BCC66716342154FCF762EEFBF4F1(L_3, NULL);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0015:
	{
		int32_t L_5 = V_0;
		AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931* L_6 = __this->___AudioCategories_18;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void AudioController::_ApplyVolumeChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController__ApplyVolumeChange_mAA862CB4EBA3D692A9AAE49A0F76B0DBE838AB30 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* V_0 = NULL;
	int32_t V_1 = 0;
	AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_0;
		L_0 = AudioController_GetPlayingAudioObjects_m9E3B6784F0F27B1E5B27AD002EA68330F0A69103((bool)1, NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0026;
	}

IL_000b:
	{
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_3;
		L_3 = List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639(L_1, L_2, List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639_RuntimeMethod_var);
		V_2 = L_3;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_4 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_6 = V_2;
		NullCheck(L_6);
		AudioObject__ApplyVolumeBoth_mC4D88C6291192E9269EFAB4BE5DDDFAB2EADA48C(L_6, NULL);
	}

IL_0022:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0026:
	{
		int32_t L_8 = V_1;
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_inline(L_9, List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}
}
// ClockStone.AudioItem AudioController::_GetAudioItem(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* AudioController__GetAudioItem_m1243AAE48D2F5386F106190EC1FC2D8073B7B632 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, String_t* ___0_audioID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m01108311C10D2544E0287049452819D0892C307D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* V_0 = NULL;
	{
		AudioController__ValidateCategories_mD6DC4E5F936E40663A501D36FE7492EACF2ABBE5(__this, NULL);
		Dictionary_2_t57C406847BE968A40E40481F27C9CE8C715AC3FB* L_0 = __this->____audioItems_38;
		String_t* L_1 = ___0_audioID;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m01108311C10D2544E0287049452819D0892C307D(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m01108311C10D2544E0287049452819D0892C307D_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_3 = V_0;
		return L_3;
	}

IL_0018:
	{
		return (AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0*)NULL;
	}
}
// ClockStone.AudioObject AudioController::_PlayMusic(System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController__PlayMusic_mE0C12FB222EC0D437C6FDE75402907DC77BCE297 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, String_t* ___0_audioID, float ___1_volume, float ___2_delay, float ___3_startTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40CC643AB0A36950A69F5D0EC221AC0B5427EA03);
		s_Il2CppMethodInitialized = true;
	}
	AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____musicParent_30;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0050;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* L_2;
		L_2 = AudioController_GetCurrentAudioListener_m02D86AD321D751BAC583DE585D81A2830969D4FD(NULL);
		V_0 = L_2;
		AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral40CC643AB0A36950A69F5D0EC221AC0B5427EA03, NULL);
		return (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*)NULL;
	}

IL_0028:
	{
		String_t* L_5 = ___0_audioID;
		AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* L_6 = V_0;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* L_9 = V_0;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_8, L_11, NULL);
		float L_13 = ___1_volume;
		float L_14 = ___2_delay;
		float L_15 = ___3_startTime;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_16;
		L_16 = AudioController__PlayMusic_m19B4000B3A1E5EB46157D6A8DEF6D0228F9E6E63(__this, L_5, L_12, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, L_13, L_14, L_15, NULL);
		return L_16;
	}

IL_0050:
	{
		String_t* L_17 = ___0_audioID;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____musicParent_30;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____musicParent_30;
		float L_21 = ___1_volume;
		float L_22 = ___2_delay;
		float L_23 = ___3_startTime;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_24;
		L_24 = AudioController__PlayMusic_m19B4000B3A1E5EB46157D6A8DEF6D0228F9E6E63(__this, L_17, L_19, L_20, L_21, L_22, L_23, NULL);
		return L_24;
	}
}
// ClockStone.AudioObject AudioController::_PlayAmbienceSound(System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController__PlayAmbienceSound_mE6CB0360FE492D842420C02605F60EACEA7FD0A5 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, String_t* ___0_audioID, float ___1_volume, float ___2_delay, float ___3_startTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40CC643AB0A36950A69F5D0EC221AC0B5427EA03);
		s_Il2CppMethodInitialized = true;
	}
	AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____ambienceParent_31;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0050;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* L_2;
		L_2 = AudioController_GetCurrentAudioListener_m02D86AD321D751BAC583DE585D81A2830969D4FD(NULL);
		V_0 = L_2;
		AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral40CC643AB0A36950A69F5D0EC221AC0B5427EA03, NULL);
		return (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*)NULL;
	}

IL_0028:
	{
		String_t* L_5 = ___0_audioID;
		AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* L_6 = V_0;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* L_9 = V_0;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_8, L_11, NULL);
		float L_13 = ___1_volume;
		float L_14 = ___2_delay;
		float L_15 = ___3_startTime;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_16;
		L_16 = AudioController__PlayAmbienceSound_m04AE5A6848983336A667ED4F633E086CE63559EB(__this, L_5, L_12, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, L_13, L_14, L_15, NULL);
		return L_16;
	}

IL_0050:
	{
		String_t* L_17 = ___0_audioID;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____ambienceParent_31;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____ambienceParent_31;
		float L_21 = ___1_volume;
		float L_22 = ___2_delay;
		float L_23 = ___3_startTime;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_24;
		L_24 = AudioController__PlayAmbienceSound_m04AE5A6848983336A667ED4F633E086CE63559EB(__this, L_17, L_19, L_20, L_21, L_22, L_23, NULL);
		return L_24;
	}
}
// System.Boolean AudioController::_StopMusic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController__StopMusic_m03D2A3B47C0CB555DBB26575A3A1950A2957D723 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, float ___0_fadeOutLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_0 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentMusic_26;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_2 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentMusic_26;
		float L_3 = ___0_fadeOutLength;
		NullCheck(L_2);
		AudioObject_Stop_m793AABEC01EF24936D60037EB89C617B13AD9740(L_2, L_3, NULL);
		((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentMusic_26 = (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentMusic_26), (void*)(AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*)NULL);
		return (bool)1;
	}

IL_0020:
	{
		return (bool)0;
	}
}
// System.Boolean AudioController::_PauseMusic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController__PauseMusic_m6A9CB667A295BE060E2EB8753069F44D6CAD8DC1 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, float ___0_fadeOut, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_0 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentMusic_26;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_2 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentMusic_26;
		float L_3 = ___0_fadeOut;
		NullCheck(L_2);
		AudioObject_Pause_m75B0D2F903F51B6D80133DBDC5737931E2D9F3E2(L_2, L_3, NULL);
		return (bool)1;
	}

IL_001a:
	{
		return (bool)0;
	}
}
// System.Boolean AudioController::_StopAmbienceSound(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController__StopAmbienceSound_m7AD63BCB34F841A51110DE31932BC7D29F779D46 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, float ___0_fadeOutLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_0 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentAmbienceSound_27;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_2 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentAmbienceSound_27;
		float L_3 = ___0_fadeOutLength;
		NullCheck(L_2);
		AudioObject_Stop_m793AABEC01EF24936D60037EB89C617B13AD9740(L_2, L_3, NULL);
		((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentAmbienceSound_27 = (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentAmbienceSound_27), (void*)(AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*)NULL);
		return (bool)1;
	}

IL_0020:
	{
		return (bool)0;
	}
}
// System.Boolean AudioController::_PauseAmbienceSound(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController__PauseAmbienceSound_m3716CEAA18EE21B0F91859709E4193084ECBD0C6 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, float ___0_fadeOut, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_0 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentAmbienceSound_27;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_2 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentAmbienceSound_27;
		float L_3 = ___0_fadeOut;
		NullCheck(L_2);
		AudioObject_Pause_m75B0D2F903F51B6D80133DBDC5737931E2D9F3E2(L_2, L_3, NULL);
		return (bool)1;
	}

IL_001a:
	{
		return (bool)0;
	}
}
// ClockStone.AudioObject AudioController::_PlayMusic(System.String,UnityEngine.Vector3,UnityEngine.Transform,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController__PlayMusic_m19B4000B3A1E5EB46157D6A8DEF6D0228F9E6E63 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, String_t* ___0_audioID, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___2_parentObj, float ___3_volume, float ___4_delay, float ___5_startTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* G_B10_0 = NULL;
	double G_B10_1 = 0.0;
	int32_t G_B10_2 = 0;
	float G_B10_3 = 0.0f;
	float G_B10_4 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B10_5 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B10_6;
	memset((&G_B10_6), 0, sizeof(G_B10_6));
	float G_B10_7 = 0.0f;
	int32_t G_B10_8 = 0;
	String_t* G_B10_9 = NULL;
	AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* G_B10_10 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	double G_B9_1 = 0.0;
	int32_t G_B9_2 = 0;
	float G_B9_3 = 0.0f;
	float G_B9_4 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B9_5 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B9_6;
	memset((&G_B9_6), 0, sizeof(G_B9_6));
	float G_B9_7 = 0.0f;
	int32_t G_B9_8 = 0;
	String_t* G_B9_9 = NULL;
	AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* G_B9_10 = NULL;
	int32_t G_B11_0 = 0;
	RuntimeObject* G_B11_1 = NULL;
	double G_B11_2 = 0.0;
	int32_t G_B11_3 = 0;
	float G_B11_4 = 0.0f;
	float G_B11_5 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B11_6 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B11_7;
	memset((&G_B11_7), 0, sizeof(G_B11_7));
	float G_B11_8 = 0.0f;
	int32_t G_B11_9 = 0;
	String_t* G_B11_10 = NULL;
	AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* G_B11_11 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AudioController_IsMusicEnabled_m385434ED0D5C8FA3C12ABD903CF23D34BE7CBC73(NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*)NULL;
	}

IL_0009:
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_1 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentMusic_26;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_3 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentMusic_26;
		NullCheck(L_3);
		bool L_4;
		L_4 = AudioObject_IsPlaying_m9A39EA279DC025604E0EB1423B38D2401CED651F(L_3, NULL);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		V_0 = (bool)1;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_5 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentMusic_26;
		float L_6;
		L_6 = AudioController_get_musicCrossFadeTime_Out_m7EA9DEAAB1B393141B55C39126BDE10E67EFAC67(__this, NULL);
		NullCheck(L_5);
		AudioObject_Stop_m793AABEC01EF24936D60037EB89C617B13AD9740(L_5, L_6, NULL);
		goto IL_0038;
	}

IL_0036:
	{
		V_0 = (bool)0;
	}

IL_0038:
	{
		float L_7;
		L_7 = AudioController_get_musicCrossFadeTime_In_mC34B4362B7192CB00672A16130C079A8EFEA7F26(__this, NULL);
		if ((!(((float)L_7) <= ((float)(0.0f)))))
		{
			goto IL_0047;
		}
	}
	{
		V_0 = (bool)0;
	}

IL_0047:
	{
		String_t* L_8 = ___0_audioID;
		float L_9 = ___3_volume;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = ___2_parentObj;
		float L_12 = ___4_delay;
		float L_13 = ___5_startTime;
		bool L_14 = V_0;
		G_B9_0 = NULL;
		G_B9_1 = (0.0);
		G_B9_2 = 0;
		G_B9_3 = L_13;
		G_B9_4 = L_12;
		G_B9_5 = L_11;
		G_B9_6 = L_10;
		G_B9_7 = L_9;
		G_B9_8 = 1;
		G_B9_9 = L_8;
		G_B9_10 = __this;
		if (L_14)
		{
			G_B10_0 = NULL;
			G_B10_1 = (0.0);
			G_B10_2 = 0;
			G_B10_3 = L_13;
			G_B10_4 = L_12;
			G_B10_5 = L_11;
			G_B10_6 = L_10;
			G_B10_7 = L_9;
			G_B10_8 = 1;
			G_B10_9 = L_8;
			G_B10_10 = __this;
			goto IL_0063;
		}
	}
	{
		G_B11_0 = 1;
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		G_B11_3 = G_B9_2;
		G_B11_4 = G_B9_3;
		G_B11_5 = G_B9_4;
		G_B11_6 = G_B9_5;
		G_B11_7 = G_B9_6;
		G_B11_8 = G_B9_7;
		G_B11_9 = G_B9_8;
		G_B11_10 = G_B9_9;
		G_B11_11 = G_B9_10;
		goto IL_0064;
	}

IL_0063:
	{
		G_B11_0 = 0;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
		G_B11_3 = G_B10_2;
		G_B11_4 = G_B10_3;
		G_B11_5 = G_B10_4;
		G_B11_6 = G_B10_5;
		G_B11_7 = G_B10_6;
		G_B11_8 = G_B10_7;
		G_B11_9 = G_B10_8;
		G_B11_10 = G_B10_9;
		G_B11_11 = G_B10_10;
	}

IL_0064:
	{
		NullCheck(G_B11_11);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_15;
		L_15 = AudioController__PlayEx_m67BFBEB1B06D98669996848F7E16FD24961014C5(G_B11_11, G_B11_10, G_B11_9, G_B11_8, G_B11_7, G_B11_6, G_B11_5, G_B11_4, (bool)G_B11_3, G_B11_2, (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*)G_B11_1, ((float)G_B11_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentMusic_26 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentMusic_26), (void*)L_15);
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_008e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_17 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentMusic_26;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_17, NULL);
		if (!L_18)
		{
			goto IL_008e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_19 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentMusic_26;
		float L_20;
		L_20 = AudioController_get_musicCrossFadeTime_In_mC34B4362B7192CB00672A16130C079A8EFEA7F26(__this, NULL);
		NullCheck(L_19);
		AudioObject_FadeIn_mE7C98E14EF6B0877C77DBBA6E48F090559C02539(L_19, L_20, NULL);
	}

IL_008e:
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_21 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentMusic_26;
		return L_21;
	}
}
// ClockStone.AudioObject AudioController::_PlayAmbienceSound(System.String,UnityEngine.Vector3,UnityEngine.Transform,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController__PlayAmbienceSound_m04AE5A6848983336A667ED4F633E086CE63559EB (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, String_t* ___0_audioID, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___2_parentObj, float ___3_volume, float ___4_delay, float ___5_startTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* G_B10_0 = NULL;
	double G_B10_1 = 0.0;
	int32_t G_B10_2 = 0;
	float G_B10_3 = 0.0f;
	float G_B10_4 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B10_5 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B10_6;
	memset((&G_B10_6), 0, sizeof(G_B10_6));
	float G_B10_7 = 0.0f;
	int32_t G_B10_8 = 0;
	String_t* G_B10_9 = NULL;
	AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* G_B10_10 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	double G_B9_1 = 0.0;
	int32_t G_B9_2 = 0;
	float G_B9_3 = 0.0f;
	float G_B9_4 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B9_5 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B9_6;
	memset((&G_B9_6), 0, sizeof(G_B9_6));
	float G_B9_7 = 0.0f;
	int32_t G_B9_8 = 0;
	String_t* G_B9_9 = NULL;
	AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* G_B9_10 = NULL;
	int32_t G_B11_0 = 0;
	RuntimeObject* G_B11_1 = NULL;
	double G_B11_2 = 0.0;
	int32_t G_B11_3 = 0;
	float G_B11_4 = 0.0f;
	float G_B11_5 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B11_6 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B11_7;
	memset((&G_B11_7), 0, sizeof(G_B11_7));
	float G_B11_8 = 0.0f;
	int32_t G_B11_9 = 0;
	String_t* G_B11_10 = NULL;
	AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* G_B11_11 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AudioController_IsAmbienceSoundEnabled_m36CD947BB4F445F28CE97C4B7B49B3C9E35080EE(NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*)NULL;
	}

IL_0009:
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_1 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentAmbienceSound_27;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_3 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentAmbienceSound_27;
		NullCheck(L_3);
		bool L_4;
		L_4 = AudioObject_IsPlaying_m9A39EA279DC025604E0EB1423B38D2401CED651F(L_3, NULL);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		V_0 = (bool)1;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_5 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentAmbienceSound_27;
		float L_6;
		L_6 = AudioController_get_ambienceSoundCrossFadeTime_Out_m3335A5503E262705DAB83A5B4327BCF09CEFDC40(__this, NULL);
		NullCheck(L_5);
		AudioObject_Stop_m793AABEC01EF24936D60037EB89C617B13AD9740(L_5, L_6, NULL);
		goto IL_0038;
	}

IL_0036:
	{
		V_0 = (bool)0;
	}

IL_0038:
	{
		float L_7;
		L_7 = AudioController_get_ambienceSoundCrossFadeTime_In_m58F9E7485C6A35E721635D3344DDC9B8E703C593(__this, NULL);
		if ((!(((float)L_7) <= ((float)(0.0f)))))
		{
			goto IL_0047;
		}
	}
	{
		V_0 = (bool)0;
	}

IL_0047:
	{
		String_t* L_8 = ___0_audioID;
		float L_9 = ___3_volume;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = ___2_parentObj;
		float L_12 = ___4_delay;
		float L_13 = ___5_startTime;
		bool L_14 = V_0;
		G_B9_0 = NULL;
		G_B9_1 = (0.0);
		G_B9_2 = 0;
		G_B9_3 = L_13;
		G_B9_4 = L_12;
		G_B9_5 = L_11;
		G_B9_6 = L_10;
		G_B9_7 = L_9;
		G_B9_8 = 2;
		G_B9_9 = L_8;
		G_B9_10 = __this;
		if (L_14)
		{
			G_B10_0 = NULL;
			G_B10_1 = (0.0);
			G_B10_2 = 0;
			G_B10_3 = L_13;
			G_B10_4 = L_12;
			G_B10_5 = L_11;
			G_B10_6 = L_10;
			G_B10_7 = L_9;
			G_B10_8 = 2;
			G_B10_9 = L_8;
			G_B10_10 = __this;
			goto IL_0063;
		}
	}
	{
		G_B11_0 = 1;
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		G_B11_3 = G_B9_2;
		G_B11_4 = G_B9_3;
		G_B11_5 = G_B9_4;
		G_B11_6 = G_B9_5;
		G_B11_7 = G_B9_6;
		G_B11_8 = G_B9_7;
		G_B11_9 = G_B9_8;
		G_B11_10 = G_B9_9;
		G_B11_11 = G_B9_10;
		goto IL_0064;
	}

IL_0063:
	{
		G_B11_0 = 0;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
		G_B11_3 = G_B10_2;
		G_B11_4 = G_B10_3;
		G_B11_5 = G_B10_4;
		G_B11_6 = G_B10_5;
		G_B11_7 = G_B10_6;
		G_B11_8 = G_B10_7;
		G_B11_9 = G_B10_8;
		G_B11_10 = G_B10_9;
		G_B11_11 = G_B10_10;
	}

IL_0064:
	{
		NullCheck(G_B11_11);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_15;
		L_15 = AudioController__PlayEx_m67BFBEB1B06D98669996848F7E16FD24961014C5(G_B11_11, G_B11_10, G_B11_9, G_B11_8, G_B11_7, G_B11_6, G_B11_5, G_B11_4, (bool)G_B11_3, G_B11_2, (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*)G_B11_1, ((float)G_B11_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentAmbienceSound_27 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentAmbienceSound_27), (void*)L_15);
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_008e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_17 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentAmbienceSound_27;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_17, NULL);
		if (!L_18)
		{
			goto IL_008e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_19 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentAmbienceSound_27;
		float L_20;
		L_20 = AudioController_get_ambienceSoundCrossFadeTime_In_m58F9E7485C6A35E721635D3344DDC9B8E703C593(__this, NULL);
		NullCheck(L_19);
		AudioObject_FadeIn_mE7C98E14EF6B0877C77DBBA6E48F090559C02539(L_19, L_20, NULL);
	}

IL_008e:
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_21 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentAmbienceSound_27;
		return L_21;
	}
}
// System.Int32 AudioController::_EnqueueMusic(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioController__EnqueueMusic_m61A35D744E7CC895D9C4B266F0B348918A7C2FD2 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, String_t* ___0_audioID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	{
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_0;
		L_0 = AudioController__GetCurrentPlaylist_m34E76899B97F10F2E0C768CC45EA842130DD1EBC(__this, NULL);
		V_1 = L_0;
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_1 = V_1;
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		V_0 = 1;
		goto IL_0019;
	}

IL_000e:
	{
		PlaylistU5BU5D_t47ECBFE135D02155EB82EB1DF73313E184F6BBFC* L_2 = __this->___musicPlaylists_19;
		NullCheck(L_2);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1));
	}

IL_0019:
	{
		int32_t L_3 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_2 = L_4;
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_6 = V_1;
		NullCheck(L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6->___playlistItems_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_2;
		NullCheck((RuntimeArray*)L_7);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_7, (RuntimeArray*)L_8, 0, NULL);
	}

IL_0030:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_2;
		int32_t L_10 = V_0;
		String_t* L_11 = ___0_audioID;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_10, 1))), (String_t*)L_11);
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_12 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_2;
		NullCheck(L_12);
		L_12->___playlistItems_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___playlistItems_1), (void*)L_13);
		int32_t L_14 = V_0;
		return L_14;
	}
}
// ClockStone.AudioObject AudioController::_PlayMusicPlaylist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController__PlayMusicPlaylist_m3E5ECF657C898B8D1153DFAFD91EDF2DD6A30957 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	{
		AudioController__ResetLastPlayedList_mEBF0E8035AD8441E1FE6030863A703A7BB0DC6EC(__this, NULL);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_0;
		L_0 = AudioController__PlayNextMusicOnPlaylist_m44169523656BAFACF68F2742D0499981DEE77B51(__this, (0.0f), NULL);
		return L_0;
	}
}
// ClockStone.AudioObject AudioController::_PlayMusicTrackWithID(System.Int32,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController__PlayMusicTrackWithID_mF87608B771BC1E70AA71D0012547F5B1C4D4FCB2 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, int32_t ___0_nextTrack, float ___1_delay, bool ___2_addToPlayedList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* V_0 = NULL;
	AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* V_1 = NULL;
	{
		int32_t L_0 = ___0_nextTrack;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		return (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*)NULL;
	}

IL_0006:
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____playlistPlayed_39;
		int32_t L_2 = ___0_nextTrack;
		NullCheck(L_1);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_1, L_2, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____isPlaylistPlaying_40 = (bool)1;
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_3;
		L_3 = AudioController__GetCurrentPlaylist_m34E76899B97F10F2E0C768CC45EA842130DD1EBC(__this, NULL);
		V_0 = L_3;
		int32_t L_4 = ___0_nextTrack;
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_5 = V_0;
		NullCheck(L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5->___playlistItems_1;
		NullCheck(L_6);
		if ((((int32_t)L_4) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_002b;
		}
	}
	{
		return (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*)NULL;
	}

IL_002b:
	{
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_7 = V_0;
		NullCheck(L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7->___playlistItems_1;
		int32_t L_9 = ___0_nextTrack;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		String_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		float L_12 = ___1_delay;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_13;
		L_13 = AudioController__PlayMusic_mE0C12FB222EC0D437C6FDE75402907DC77BCE297(__this, L_11, (1.0f), L_12, (0.0f), NULL);
		V_1 = L_13;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_0061;
		}
	}
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_16 = V_1;
		NullCheck(L_16);
		L_16->____isCurrentPlaylistTrack_35 = (bool)1;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_17 = V_1;
		NullCheck(L_17);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_18;
		L_18 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(L_17, NULL);
		NullCheck(L_18);
		AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56(L_18, (bool)0, NULL);
	}

IL_0061:
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_19 = V_1;
		return L_19;
	}
}
// ClockStone.AudioObject AudioController::_PlayNextMusicOnPlaylist(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController__PlayNextMusicOnPlaylist_m44169523656BAFACF68F2742D0499981DEE77B51 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, float ___0_delay, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = AudioController__GetNextMusicTrack_m03D2EB82D866FAA50F158AF8C806B5654D212B8A(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		float L_2 = ___0_delay;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_3;
		L_3 = AudioController__PlayMusicTrackWithID_mF87608B771BC1E70AA71D0012547F5B1C4D4FCB2(__this, L_1, L_2, (bool)1, NULL);
		return L_3;
	}
}
// ClockStone.AudioObject AudioController::_PlayPreviousMusicOnPlaylist(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController__PlayPreviousMusicOnPlaylist_mF436C902224FA76A90B9E5A2400265C2BF5E574E (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, float ___0_delay, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = AudioController__GetPreviousMusicTrack_mC0925C907E444A8EBB93C1CE059FE8C76FD93712(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		float L_2 = ___0_delay;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_3;
		L_3 = AudioController__PlayMusicTrackWithID_mF87608B771BC1E70AA71D0012547F5B1C4D4FCB2(__this, L_1, L_2, (bool)0, NULL);
		return L_3;
	}
}
// System.Void AudioController::_ResetLastPlayedList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController__ResetLastPlayedList_mEBF0E8035AD8441E1FE6030863A703A7BB0DC6EC (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____playlistPlayed_39;
		NullCheck(L_0);
		List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline(L_0, List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		return;
	}
}
// System.Int32 AudioController::_GetNextMusicTrack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioController__GetNextMusicTrack_m03D2EB82D866FAA50F158AF8C806B5654D212B8A (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABCA200F3C8C15DE799CFE93DEC984E6CF7970DA);
		s_Il2CppMethodInitialized = true;
	}
	Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* V_0 = NULL;
	{
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_0;
		L_0 = AudioController__GetCurrentPlaylist_m34E76899B97F10F2E0C768CC45EA842130DD1EBC(__this, NULL);
		V_0 = L_0;
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_2 = V_0;
		NullCheck(L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2->___playlistItems_1;
		if (L_3)
		{
			goto IL_001e;
		}
	}

IL_0012:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralABCA200F3C8C15DE799CFE93DEC984E6CF7970DA, NULL);
		return (-1);
	}

IL_001e:
	{
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_4 = V_0;
		NullCheck(L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4->___playlistItems_1;
		NullCheck(L_5);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) == ((uint32_t)1))))
		{
			goto IL_002b;
		}
	}
	{
		return 0;
	}

IL_002b:
	{
		bool L_6 = __this->___shufflePlaylist_23;
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_7;
		L_7 = AudioController__GetNextMusicTrackShuffled_mA41F8765AB9C462936C82EBCD429E11A4BEDA3B1(__this, NULL);
		return L_7;
	}

IL_003a:
	{
		int32_t L_8;
		L_8 = AudioController__GetNextMusicTrackInOrder_m513F605F8C7E0EC5A2D0C5582058895E56CA2D7B(__this, NULL);
		return L_8;
	}
}
// System.Int32 AudioController::_GetPreviousMusicTrack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioController__GetPreviousMusicTrack_mC0925C907E444A8EBB93C1CE059FE8C76FD93712 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	{
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_0;
		L_0 = AudioController__GetCurrentPlaylist_m34E76899B97F10F2E0C768CC45EA842130DD1EBC(__this, NULL);
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0->___playlistItems_1;
		NullCheck(L_1);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) == ((uint32_t)1))))
		{
			goto IL_0012;
		}
	}
	{
		return 0;
	}

IL_0012:
	{
		bool L_2 = __this->___shufflePlaylist_23;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3;
		L_3 = AudioController__GetPreviousMusicTrackShuffled_mCFA5595DA691C3687D331D222E3E1F73EFC6F96F(__this, NULL);
		return L_3;
	}

IL_0021:
	{
		int32_t L_4;
		L_4 = AudioController__GetPreviousMusicTrackInOrder_mEE7F3FBD71F2084F05B534EB4242D84DD30976BC(__this, NULL);
		return L_4;
	}
}
// System.Int32 AudioController::_GetPreviousMusicTrackShuffled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioController__GetPreviousMusicTrackShuffled_mCFA5595DA691C3687D331D222E3E1F73EFC6F96F (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____playlistPlayed_39;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_0, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)2)))
		{
			goto IL_0030;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____playlistPlayed_39;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____playlistPlayed_39;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_3, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_5;
		L_5 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_2, ((int32_t)il2cpp_codegen_subtract(L_4, 2)), List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		AudioController__RemoveLastPlayedOnList_m47DDACDCF87932472CB33471719CA7C5EC583726(__this, NULL);
		AudioController__RemoveLastPlayedOnList_m47DDACDCF87932472CB33471719CA7C5EC583726(__this, NULL);
		return L_5;
	}

IL_0030:
	{
		return (-1);
	}
}
// System.Void AudioController::_RemoveLastPlayedOnList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController__RemoveLastPlayedOnList_m47DDACDCF87932472CB33471719CA7C5EC583726 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____playlistPlayed_39;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____playlistPlayed_39;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_1, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004(L_0, ((int32_t)il2cpp_codegen_subtract(L_2, 1)), List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var);
		return;
	}
}
// System.Int32 AudioController::_GetNextMusicTrackShuffled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioController__GetNextMusicTrackShuffled_mA41F8765AB9C462936C82EBCD429E11A4BEDA3B1 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* V_3 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_0 = (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*)il2cpp_codegen_object_new(HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF(L_0, HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_RuntimeMethod_var);
		V_0 = L_0;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____playlistPlayed_39;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_1, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		V_1 = L_2;
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_3;
		L_3 = AudioController__GetCurrentPlaylist_m34E76899B97F10F2E0C768CC45EA842130DD1EBC(__this, NULL);
		V_3 = L_3;
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_4 = V_3;
		NullCheck(L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4->___playlistItems_1;
		NullCheck(L_5);
		if ((((RuntimeArray*)L_5)->max_length))
		{
			goto IL_0023;
		}
	}
	{
		return (-1);
	}

IL_0023:
	{
		bool L_6 = __this->___loopPlaylist_22;
		if (!L_6)
		{
			goto IL_005e;
		}
	}
	{
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_7 = V_3;
		NullCheck(L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7->___playlistItems_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(((int32_t)(((int32_t)(((RuntimeArray*)L_8)->max_length))/4)), 2, ((int32_t)10), NULL);
		V_2 = L_9;
		int32_t L_10 = V_1;
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_11 = V_3;
		NullCheck(L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11->___playlistItems_1;
		NullCheck(L_12);
		int32_t L_13 = V_2;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)))))
		{
			goto IL_006b;
		}
	}
	{
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_14 = V_3;
		NullCheck(L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14->___playlistItems_1;
		NullCheck(L_15);
		int32_t L_16 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16));
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) >= ((int32_t)1)))
		{
			goto IL_006b;
		}
	}
	{
		V_1 = 1;
		goto IL_006b;
	}

IL_005e:
	{
		int32_t L_18 = V_1;
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_19 = V_3;
		NullCheck(L_19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19->___playlistItems_1;
		NullCheck(L_20);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_006b;
		}
	}
	{
		return (-1);
	}

IL_006b:
	{
		V_5 = 0;
		goto IL_0096;
	}

IL_0070:
	{
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_21 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_22 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____playlistPlayed_39;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_23 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____playlistPlayed_39;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_23, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		int32_t L_25 = V_5;
		NullCheck(L_22);
		int32_t L_26;
		L_26 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_22, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_24, 1)), L_25)), List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		NullCheck(L_21);
		bool L_27;
		L_27 = HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB(L_21, L_26, HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_RuntimeMethod_var);
		int32_t L_28 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0096:
	{
		int32_t L_29 = V_5;
		int32_t L_30 = V_1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0070;
		}
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_31 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_31, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		V_4 = L_31;
		V_6 = 0;
		goto IL_00c0;
	}

IL_00a7:
	{
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_32 = V_0;
		int32_t L_33 = V_6;
		NullCheck(L_32);
		bool L_34;
		L_34 = HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1(L_32, L_33, HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1_RuntimeMethod_var);
		if (L_34)
		{
			goto IL_00ba;
		}
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_35 = V_4;
		int32_t L_36 = V_6;
		NullCheck(L_35);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_35, L_36, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_00ba:
	{
		int32_t L_37 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00c0:
	{
		int32_t L_38 = V_6;
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_39 = V_3;
		NullCheck(L_39);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = L_39->___playlistItems_1;
		NullCheck(L_40);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_00a7;
		}
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_41 = V_4;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_42 = V_4;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_42, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		int32_t L_44;
		L_44 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_43, NULL);
		NullCheck(L_41);
		int32_t L_45;
		L_45 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_41, L_44, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		return L_45;
	}
}
// System.Int32 AudioController::_GetNextMusicTrackInOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioController__GetNextMusicTrackInOrder_m513F605F8C7E0EC5A2D0C5582058895E56CA2D7B (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____playlistPlayed_39;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_0, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____playlistPlayed_39;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____playlistPlayed_39;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_3, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_5;
		L_5 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_2, ((int32_t)il2cpp_codegen_subtract(L_4, 1)), List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_6;
		L_6 = AudioController__GetCurrentPlaylist_m34E76899B97F10F2E0C768CC45EA842130DD1EBC(__this, NULL);
		V_1 = L_6;
		int32_t L_7 = V_0;
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_8 = V_1;
		NullCheck(L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8->___playlistItems_1;
		NullCheck(L_9);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0047;
		}
	}
	{
		bool L_10 = __this->___loopPlaylist_22;
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		V_0 = 0;
		goto IL_0047;
	}

IL_0045:
	{
		return (-1);
	}

IL_0047:
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
// System.Int32 AudioController::_GetPreviousMusicTrackInOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioController__GetPreviousMusicTrackInOrder_mEE7F3FBD71F2084F05B534EB4242D84DD30976BC (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_0;
		L_0 = AudioController__GetCurrentPlaylist_m34E76899B97F10F2E0C768CC45EA842130DD1EBC(__this, NULL);
		V_0 = L_0;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____playlistPlayed_39;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_1, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_2) >= ((int32_t)2)))
		{
			goto IL_0029;
		}
	}
	{
		bool L_3 = __this->___loopPlaylist_22;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_4 = V_0;
		NullCheck(L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4->___playlistItems_1;
		NullCheck(L_5);
		return ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 1));
	}

IL_0027:
	{
		return (-1);
	}

IL_0029:
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_6 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____playlistPlayed_39;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_7 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____playlistPlayed_39;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_7, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		NullCheck(L_6);
		int32_t L_9;
		L_9 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_6, ((int32_t)il2cpp_codegen_subtract(L_8, 1)), List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		AudioController__RemoveLastPlayedOnList_m47DDACDCF87932472CB33471719CA7C5EC583726(__this, NULL);
		AudioController__RemoveLastPlayedOnList_m47DDACDCF87932472CB33471719CA7C5EC583726(__this, NULL);
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0069;
		}
	}
	{
		bool L_11 = __this->___loopPlaylist_22;
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_12 = V_0;
		NullCheck(L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12->___playlistItems_1;
		NullCheck(L_13);
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), 1));
		goto IL_0069;
	}

IL_0067:
	{
		return (-1);
	}

IL_0069:
	{
		int32_t L_14 = V_1;
		return L_14;
	}
}
// ClockStone.AudioObject AudioController::_PlayEx(System.String,AudioChannelType,System.Single,UnityEngine.Vector3,UnityEngine.Transform,System.Single,System.Single,System.Boolean,System.Double,ClockStone.AudioObject,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController__PlayEx_m67BFBEB1B06D98669996848F7E16FD24961014C5 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, String_t* ___0_audioID, int32_t ___1_channel, float ___2_volume, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_worldPosition, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___4_parentObj, float ___5_delay, float ___6_startTime, bool ___7_playWithoutAudioObject, double ___8_dspTime, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* ___9_useExistingAudioObject, float ___10_startVolumeMultiplier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94806DC905AE5E79B94A0190E36270E1FFA45178);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA296D16008C5409469563CF28EE0D3005EFE3F45);
		s_Il2CppMethodInitialized = true;
	}
	AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* V_0 = NULL;
	List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* V_1 = NULL;
	bool V_2 = false;
	AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* V_3 = NULL;
	int32_t V_4 = 0;
	AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* G_B21_0 = NULL;
	AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* G_B20_0 = NULL;
	float G_B22_0 = 0.0f;
	AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* G_B22_1 = NULL;
	{
		bool L_0 = __this->____audioDisabled_37;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*)NULL;
	}

IL_000a:
	{
		String_t* L_1 = ___0_audioID;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_2;
		L_2 = AudioController__GetAudioItem_m1243AAE48D2F5386F106190EC1FC2D8073B7B632(__this, L_1, NULL);
		V_0 = L_2;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_3 = V_0;
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_4 = ___0_audioID;
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral94806DC905AE5E79B94A0190E36270E1FFA45178, L_4, _stringLiteralA296D16008C5409469563CF28EE0D3005EFE3F45, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_5, NULL);
		return (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*)NULL;
	}

IL_002c:
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_6 = V_0;
		NullCheck(L_6);
		double L_7 = L_6->____lastPlayedTime_23;
		if ((!(((double)L_7) > ((double)(0.0)))))
		{
			goto IL_0061;
		}
	}
	{
		double L_8 = ___8_dspTime;
		if ((!(((double)L_8) == ((double)(0.0)))))
		{
			goto IL_0061;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		double L_9;
		L_9 = AudioController_get_systemTime_mB3A112C83ABEB814B3F4377F12D1385E886A9A1F_inline(NULL);
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_10 = V_0;
		NullCheck(L_10);
		double L_11 = L_10->____lastPlayedTime_23;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_12 = V_0;
		NullCheck(L_12);
		float L_13 = L_12->___MinTimeBetweenPlayCalls_10;
		if ((!(((double)((double)il2cpp_codegen_subtract(L_9, L_11))) < ((double)((double)L_13)))))
		{
			goto IL_0061;
		}
	}
	{
		return (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*)NULL;
	}

IL_0061:
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = L_14->___MaxInstanceCount_11;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0105;
		}
	}
	{
		String_t* L_16 = ___0_audioID;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_17;
		L_17 = AudioController_GetPlayingAudioObjects_mCEE013FBDD6C7CDBF2C9B66C33F3AF2CA567D0CB(L_16, (bool)0, NULL);
		V_1 = L_17;
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_18 = V_1;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_inline(L_18, List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_RuntimeMethod_var);
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = L_20->___MaxInstanceCount_11;
		if (!((((int32_t)((((int32_t)L_19) < ((int32_t)L_21))? 1 : 0)) == ((int32_t)0))? 1 : 0))
		{
			goto IL_0105;
		}
	}
	{
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_inline(L_22, List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_RuntimeMethod_var);
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25 = L_24->___MaxInstanceCount_11;
		V_2 = (bool)((((int32_t)L_23) > ((int32_t)L_25))? 1 : 0);
		V_3 = (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*)NULL;
		V_4 = 0;
		goto IL_00dd;
	}

IL_009e:
	{
		bool L_26 = V_2;
		if (L_26)
		{
			goto IL_00b0;
		}
	}
	{
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_27 = V_1;
		int32_t L_28 = V_4;
		NullCheck(L_27);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_29;
		L_29 = List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639(L_27, L_28, List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639_RuntimeMethod_var);
		NullCheck(L_29);
		bool L_30;
		L_30 = AudioObject_get_isFadingOut_m2C48C459F237CF66487840CBC2C6AF1811CFEABC(L_29, NULL);
		if (L_30)
		{
			goto IL_00d7;
		}
	}

IL_00b0:
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_31 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_31, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_32)
		{
			goto IL_00ce;
		}
	}
	{
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_33 = V_1;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_35;
		L_35 = List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639(L_33, L_34, List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639_RuntimeMethod_var);
		NullCheck(L_35);
		double L_36;
		L_36 = AudioObject_get_startedPlayingAtTime_mD10B3AFA7BE749CD8B16D107B83B0359A7E8B7AF_inline(L_35, NULL);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_37 = V_3;
		NullCheck(L_37);
		double L_38;
		L_38 = AudioObject_get_startedPlayingAtTime_mD10B3AFA7BE749CD8B16D107B83B0359A7E8B7AF_inline(L_37, NULL);
		if ((!(((double)L_36) < ((double)L_38))))
		{
			goto IL_00d7;
		}
	}

IL_00ce:
	{
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_39 = V_1;
		int32_t L_40 = V_4;
		NullCheck(L_39);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_41;
		L_41 = List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639(L_39, L_40, List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639_RuntimeMethod_var);
		V_3 = L_41;
	}

IL_00d7:
	{
		int32_t L_42 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00dd:
	{
		int32_t L_43 = V_4;
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_44 = V_1;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_inline(L_44, List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_RuntimeMethod_var);
		if ((((int32_t)L_43) < ((int32_t)L_45)))
		{
			goto IL_009e;
		}
	}
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_46 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_46, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_47)
		{
			goto IL_0105;
		}
	}
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_48 = V_3;
		bool L_49 = V_2;
		G_B20_0 = L_48;
		if (L_49)
		{
			G_B21_0 = L_48;
			goto IL_00fb;
		}
	}
	{
		G_B22_0 = (0.200000003f);
		G_B22_1 = G_B20_0;
		goto IL_0100;
	}

IL_00fb:
	{
		G_B22_0 = (0.0f);
		G_B22_1 = G_B21_0;
	}

IL_0100:
	{
		NullCheck(G_B22_1);
		AudioObject_Stop_m793AABEC01EF24936D60037EB89C617B13AD9740(G_B22_1, G_B22_0, NULL);
	}

IL_0105:
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_50 = V_0;
		float L_51 = ___2_volume;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = ___3_worldPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53 = ___4_parentObj;
		float L_54 = ___5_delay;
		float L_55 = ___6_startTime;
		bool L_56 = ___7_playWithoutAudioObject;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_57 = ___9_useExistingAudioObject;
		double L_58 = ___8_dspTime;
		int32_t L_59 = ___1_channel;
		float L_60 = ___10_startVolumeMultiplier;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_61;
		L_61 = AudioController_PlayAudioItem_m6510B59A4482E0E6F38D9E001D9E8DBBD498231A(__this, L_50, L_51, L_52, L_53, L_54, L_55, L_56, L_57, L_58, L_59, L_60, NULL);
		return L_61;
	}
}
// ClockStone.AudioObject AudioController::PlayAudioItem(ClockStone.AudioItem,System.Single,UnityEngine.Vector3,UnityEngine.Transform,System.Single,System.Single,System.Boolean,ClockStone.AudioObject,System.Double,AudioChannelType,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController_PlayAudioItem_m6510B59A4482E0E6F38D9E001D9E8DBBD498231A (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* ___0_sndItem, float ___1_volume, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_worldPosition, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___3_parentObj, float ___4_delay, float ___5_startTime, bool ___6_playWithoutAudioObject, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* ___7_useExistingAudioObj, double ___8_dspTime, int32_t ___9_channel, float ___10_startVolumeMultiplier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* V_0 = NULL;
	AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* V_1 = NULL;
	int32_t V_2 = 0;
	AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* V_3 = NULL;
	AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* V_4 = NULL;
	{
		V_0 = (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*)NULL;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_0 = ___0_sndItem;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = AudioController_get_systemTime_mB3A112C83ABEB814B3F4377F12D1385E886A9A1F_inline(NULL);
		NullCheck(L_0);
		L_0->____lastPlayedTime_23 = L_1;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_2 = ___0_sndItem;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_3 = ___7_useExistingAudioObj;
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_4;
		L_4 = AudioControllerHelper__ChooseSubItems_mC3AE24161FB7B55874490D72765B7838AD7E2062(L_2, L_3, NULL);
		V_1 = L_4;
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_5 = V_1;
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_6 = V_1;
		NullCheck(L_6);
		if ((((RuntimeArray*)L_6)->max_length))
		{
			goto IL_001f;
		}
	}

IL_001d:
	{
		return (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*)NULL;
	}

IL_001f:
	{
		V_2 = 0;
		goto IL_0129;
	}

IL_0026:
	{
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = L_10;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_11 = V_3;
		if (!L_11)
		{
			goto IL_0125;
		}
	}
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_12 = V_3;
		float L_13 = ___1_volume;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___2_worldPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = ___3_parentObj;
		float L_16 = ___4_delay;
		float L_17 = ___5_startTime;
		bool L_18 = ___6_playWithoutAudioObject;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_19 = ___7_useExistingAudioObj;
		double L_20 = ___8_dspTime;
		int32_t L_21 = ___9_channel;
		float L_22 = ___10_startVolumeMultiplier;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_23;
		L_23 = AudioController_PlayAudioSubItem_m2138408A93FC640847B66794558B053C84DAF28B(__this, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, L_22, NULL);
		V_4 = L_23;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_24 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_24, NULL);
		if (!L_25)
		{
			goto IL_0125;
		}
	}
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_26 = V_4;
		V_0 = L_26;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_27 = V_0;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_28 = ___0_sndItem;
		NullCheck(L_28);
		String_t* L_29 = L_28->___Name_0;
		NullCheck(L_27);
		AudioObject_set_audioID_m8C5F78F770A16263871EE418FFFF98AD3DCEAE9F_inline(L_27, L_29, NULL);
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_30 = ___0_sndItem;
		NullCheck(L_30);
		bool L_31 = L_30->___overrideAudioSourceSettings_17;
		if (!L_31)
		{
			goto IL_0125;
		}
	}
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_32 = V_4;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_33 = V_4;
		NullCheck(L_33);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_34;
		L_34 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(L_33, NULL);
		NullCheck(L_34);
		float L_35;
		L_35 = AudioSource_get_minDistance_m459BE399BBBEA04CBBCF50CFB15A09CB3D7431F0(L_34, NULL);
		NullCheck(L_32);
		L_32->____audioSource_MinDistance_Saved_36 = L_35;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_36 = V_4;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_37 = V_4;
		NullCheck(L_37);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_38;
		L_38 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(L_37, NULL);
		NullCheck(L_38);
		float L_39;
		L_39 = AudioSource_get_maxDistance_m8C31CB391B999C8D344EFF0AFB8E20488F7A5F7E(L_38, NULL);
		NullCheck(L_36);
		L_36->____audioSource_MaxDistance_Saved_37 = L_39;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_40 = V_4;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_41 = V_4;
		NullCheck(L_41);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_42;
		L_42 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(L_41, NULL);
		NullCheck(L_42);
		float L_43;
		L_43 = AudioSource_get_spatialBlend_m06E7948B2813AA3EAE031BD4D1DE61A29416B1CE(L_42, NULL);
		NullCheck(L_40);
		L_40->____audioSource_SpatialBlend_Saved_38 = L_43;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_44 = V_4;
		NullCheck(L_44);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_45;
		L_45 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(L_44, NULL);
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_46 = ___0_sndItem;
		NullCheck(L_46);
		float L_47 = L_46->___audioSource_MinDistance_18;
		NullCheck(L_45);
		AudioSource_set_minDistance_m6CBE3A60C03C0F179192FBDD62095B2E9D717690(L_45, L_47, NULL);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_48 = V_4;
		NullCheck(L_48);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_49;
		L_49 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(L_48, NULL);
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_50 = ___0_sndItem;
		NullCheck(L_50);
		float L_51 = L_50->___audioSource_MaxDistance_19;
		NullCheck(L_49);
		AudioSource_set_maxDistance_m4BF310D54761500A77A6C4841A0BBDBD09225813(L_49, L_51, NULL);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_52 = V_4;
		NullCheck(L_52);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_53;
		L_53 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(L_52, NULL);
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_54 = ___0_sndItem;
		NullCheck(L_54);
		float L_55 = L_54->___spatialBlend_20;
		NullCheck(L_53);
		AudioSource_set_spatialBlend_mCEE7A3E87A8C146E048B2CA3413FDC7BDB7BE001(L_53, L_55, NULL);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_56 = V_4;
		NullCheck(L_56);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_57;
		L_57 = AudioObject_get_secondaryAudioSource_m0CF34784C9E1E9C35DC1CF3D7AE9D78F34FF2FA8_inline(L_56, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_58;
		L_58 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_57, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_58)
		{
			goto IL_0125;
		}
	}
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_59 = V_4;
		NullCheck(L_59);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_60;
		L_60 = AudioObject_get_secondaryAudioSource_m0CF34784C9E1E9C35DC1CF3D7AE9D78F34FF2FA8_inline(L_59, NULL);
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_61 = ___0_sndItem;
		NullCheck(L_61);
		float L_62 = L_61->___audioSource_MinDistance_18;
		NullCheck(L_60);
		AudioSource_set_minDistance_m6CBE3A60C03C0F179192FBDD62095B2E9D717690(L_60, L_62, NULL);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_63 = V_4;
		NullCheck(L_63);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_64;
		L_64 = AudioObject_get_secondaryAudioSource_m0CF34784C9E1E9C35DC1CF3D7AE9D78F34FF2FA8_inline(L_63, NULL);
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_65 = ___0_sndItem;
		NullCheck(L_65);
		float L_66 = L_65->___audioSource_MaxDistance_19;
		NullCheck(L_64);
		AudioSource_set_maxDistance_m4BF310D54761500A77A6C4841A0BBDBD09225813(L_64, L_66, NULL);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_67 = V_4;
		NullCheck(L_67);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_68;
		L_68 = AudioObject_get_secondaryAudioSource_m0CF34784C9E1E9C35DC1CF3D7AE9D78F34FF2FA8_inline(L_67, NULL);
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_69 = ___0_sndItem;
		NullCheck(L_69);
		float L_70 = L_69->___spatialBlend_20;
		NullCheck(L_68);
		AudioSource_set_spatialBlend_mCEE7A3E87A8C146E048B2CA3413FDC7BDB7BE001(L_68, L_70, NULL);
	}

IL_0125:
	{
		int32_t L_71 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_71, 1));
	}

IL_0129:
	{
		int32_t L_72 = V_2;
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_73 = V_1;
		NullCheck(L_73);
		if ((((int32_t)L_72) < ((int32_t)((int32_t)(((RuntimeArray*)L_73)->max_length)))))
		{
			goto IL_0026;
		}
	}
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_74 = V_0;
		return L_74;
	}
}
// ClockStone.AudioCategory AudioController::_GetCategory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* AudioController__GetCategory_mCADD0D8AE46FAACDD6E5116396F8836ECAFD562A (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* V_1 = NULL;
	{
		V_0 = 0;
		goto IL_0021;
	}

IL_0004:
	{
		AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931* L_0 = __this->___AudioCategories_18;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5 = L_4->___Name_0;
		String_t* L_6 = ___0_name;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_001d;
		}
	}
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_8 = V_1;
		return L_8;
	}

IL_001d:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0021:
	{
		int32_t L_10 = V_0;
		AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931* L_11 = __this->___AudioCategories_18;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		return (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA*)NULL;
	}
}
// System.Void AudioController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_Update_m22A2E806F6318649E936B5BE47EB1D02AF3A94C2 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->____isAdditionalAudioController_36;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController__UpdateSystemTime_m4E69FA628E25B78854C5B118D616A86F075808EA(NULL);
	}

IL_000d:
	{
		return;
	}
}
// System.Void AudioController::_UpdateSystemTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController__UpdateSystemTime_m4E69FA628E25B78854C5B118D616A86F075808EA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemTime_tBB4E6D26A0CC20E4075CE4171BC938B462E486FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		il2cpp_codegen_runtime_class_init_inline(SystemTime_tBB4E6D26A0CC20E4075CE4171BC938B462E486FC_il2cpp_TypeInfo_var);
		double L_0;
		L_0 = SystemTime_get_timeSinceLaunch_mD949F481D95BFDB8ADE5D4A49A204453730722FB(NULL);
		V_0 = L_0;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		double L_1 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____lastSystemTime_43;
		if ((!(((double)L_1) >= ((double)(0.0)))))
		{
			goto IL_0052;
		}
	}
	{
		double L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		double L_3 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____lastSystemTime_43;
		((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____systemDeltaTime_44 = ((double)il2cpp_codegen_subtract(L_2, L_3));
		double L_4 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____systemDeltaTime_44;
		float L_5;
		L_5 = Time_get_maximumDeltaTime_m0C12CC936444852BD2E15B2531DDC238BA115B7C(NULL);
		if ((!(((double)L_4) > ((double)((double)((float)il2cpp_codegen_add(L_5, (0.00999999978f))))))))
		{
			goto IL_0040;
		}
	}
	{
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____systemDeltaTime_44 = ((double)L_6);
	}

IL_0040:
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		double L_7 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____systemTime_42;
		double L_8 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____systemDeltaTime_44;
		((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____systemTime_42 = ((double)il2cpp_codegen_add(L_7, L_8));
		goto IL_006e;
	}

IL_0052:
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____systemDeltaTime_44 = (0.0);
		((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____systemTime_42 = (0.0);
	}

IL_006e:
	{
		double L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____lastSystemTime_43 = L_9;
		return;
	}
}
// System.Void AudioController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_Awake_m133509AFF60AEDAFA4F4BADAB8C66BDDEA1ADF63 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___Persistent_6;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_1, NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.Void AudioController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_OnEnable_m038007D1CCCA439B446B080E87C144C608D80FE3 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5D218F9399CBC7C480B6DC0917CAC6224A5FB251_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m26390D3628070FD2AB24152BA4FA1A5D2B318392_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF5CF94C2536E713813EDDD76400A105EDC92F77D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m83817D343BDAC069422C14D5081E7196A6B65FF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* V_1 = NULL;
	{
		bool L_0;
		L_0 = AudioController_get_isAdditionalAudioController_m45AF12A42E7BF0FF1D9A8D91EE57B958AE531738_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AudioController_DoesInstanceExist_m6AF468A9E14546039D6929D36BF5CC749ECBAC94(NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_2;
		L_2 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		NullCheck(L_2);
		AudioController__RegisterAdditionalAudioController_m7B3E5EAD4A8307AE7D8014CE94F1D2234A221D1B(L_2, __this, NULL);
		return;
	}

IL_001b:
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69* L_3 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____additionalControllerToRegister_45;
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69* L_4 = (List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69*)il2cpp_codegen_object_new(List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m26390D3628070FD2AB24152BA4FA1A5D2B318392(L_4, List_1__ctor_m26390D3628070FD2AB24152BA4FA1A5D2B318392_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____additionalControllerToRegister_45 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____additionalControllerToRegister_45), (void*)L_4);
	}

IL_002c:
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69* L_5 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____additionalControllerToRegister_45;
		NullCheck(L_5);
		List_1_Add_m5D218F9399CBC7C480B6DC0917CAC6224A5FB251_inline(L_5, __this, List_1_Add_m5D218F9399CBC7C480B6DC0917CAC6224A5FB251_RuntimeMethod_var);
		return;
	}

IL_0038:
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69* L_6 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____additionalControllerToRegister_45;
		if (!L_6)
		{
			goto IL_0081;
		}
	}
	{
		V_0 = 0;
		goto IL_006e;
	}

IL_0043:
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69* L_7 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____additionalControllerToRegister_45;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_9;
		L_9 = List_1_get_Item_m83817D343BDAC069422C14D5081E7196A6B65FF2(L_7, L_8, List_1_get_Item_m83817D343BDAC069422C14D5081E7196A6B65FF2_RuntimeMethod_var);
		V_1 = L_9;
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_10, NULL);
		if (!L_11)
		{
			goto IL_006a;
		}
	}
	{
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_12 = V_1;
		NullCheck(L_12);
		bool L_13;
		L_13 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_12, NULL);
		if (!L_13)
		{
			goto IL_006a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_14;
		L_14 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_15 = V_1;
		NullCheck(L_14);
		AudioController__RegisterAdditionalAudioController_m7B3E5EAD4A8307AE7D8014CE94F1D2234A221D1B(L_14, L_15, NULL);
	}

IL_006a:
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_006e:
	{
		int32_t L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69* L_18 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____additionalControllerToRegister_45;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_mF5CF94C2536E713813EDDD76400A105EDC92F77D_inline(L_18, List_1_get_Count_mF5CF94C2536E713813EDDD76400A105EDC92F77D_RuntimeMethod_var);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0043;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____additionalControllerToRegister_45 = (List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____additionalControllerToRegister_45), (void*)(List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69*)NULL);
	}

IL_0081:
	{
		return;
	}
}
// System.Void AudioController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_OnDisable_m5F04CA20776DEC256C5E9E47074F3E355E7740F1 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = AudioController_get_isAdditionalAudioController_m45AF12A42E7BF0FF1D9A8D91EE57B958AE531738_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AudioController_DoesInstanceExist_m6AF468A9E14546039D6929D36BF5CC749ECBAC94(NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_2;
		L_2 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		NullCheck(L_2);
		AudioController__UnregisterAdditionalAudioController_mA50AB7FAD5C0BCA767C672DB7A94BEA024B1DE2C(L_2, __this, NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean AudioController::get_isSingletonObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioController_get_isSingletonObject_m914841090AC8852B0B9823D4A88ACCD21BF74E1D (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____isAdditionalAudioController_36;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void AudioController::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_OnDestroy_m0CEFB1D7F6E58DF8AE8F57388EC49DD82A0F11EB (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___UnloadAudioClipsOnDestroy_7;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		AudioController_UnloadAllAudioClips_m787783D1D1AABD9CB66FA0979909FD78B2C76254(__this, NULL);
	}

IL_000e:
	{
		return;
	}
}
// System.Void AudioController::AwakeSingleton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_AwakeSingleton_m77E36614F0182605934DE31D18B9826C67DD9C7E (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758E6473B8344782EAF7F439022611DC55649C48);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController__UpdateSystemTime_m4E69FA628E25B78854C5B118D616A86F075808EA(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___AudioObjectPrefab_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral758E6473B8344782EAF7F439022611DC55649C48, NULL);
		goto IL_002b;
	}

IL_001f:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___AudioObjectPrefab_5;
		AudioController__ValidateAudioObjectPrefab_m4EADD64F5DD080482A6CA142172EA2CC73BAD8E5(__this, L_2, NULL);
	}

IL_002b:
	{
		AudioController__ValidateCategories_mD6DC4E5F936E40663A501D36FE7492EACF2ABBE5(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____playlistPlayed_39;
		if (L_3)
		{
			goto IL_0048;
		}
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_4 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_4, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____playlistPlayed_39 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____playlistPlayed_39), (void*)L_4);
		((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____isPlaylistPlaying_40 = (bool)0;
	}

IL_0048:
	{
		AudioController__SetDefaultCurrentPlaylist_mC4A97519A71528CB71F57CF3530C445751A39665(__this, NULL);
		return;
	}
}
// System.Void AudioController::_ValidateCategories()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController__ValidateCategories_mD6DC4E5F936E40663A501D36FE7492EACF2ABBE5 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____categoriesValidated_35;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		AudioController_InitializeAudioItems_m62A9CBAA4817847B373BF64D55924263211AD206(__this, NULL);
		__this->____categoriesValidated_35 = (bool)1;
	}

IL_0015:
	{
		return;
	}
}
// System.Void AudioController::_InvalidateCategories()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController__InvalidateCategories_mD3461E474AE26627D1EE78226427DB297AF35A3D (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	{
		__this->____categoriesValidated_35 = (bool)0;
		return;
	}
}
// System.Void AudioController::InitializeAudioItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_InitializeAudioItems_m62A9CBAA4817847B373BF64D55924263211AD206 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m0654A7651B82D314499AB581E6306D60511361DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t57C406847BE968A40E40481F27C9CE8C715AC3FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF5CF94C2536E713813EDDD76400A105EDC92F77D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m83817D343BDAC069422C14D5081E7196A6B65FF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* V_1 = NULL;
	{
		bool L_0;
		L_0 = AudioController_get_isAdditionalAudioController_m45AF12A42E7BF0FF1D9A8D91EE57B958AE531738_inline(__this, NULL);
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
		Dictionary_2_t57C406847BE968A40E40481F27C9CE8C715AC3FB* L_1 = (Dictionary_2_t57C406847BE968A40E40481F27C9CE8C715AC3FB*)il2cpp_codegen_object_new(Dictionary_2_t57C406847BE968A40E40481F27C9CE8C715AC3FB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m0654A7651B82D314499AB581E6306D60511361DA(L_1, Dictionary_2__ctor_m0654A7651B82D314499AB581E6306D60511361DA_RuntimeMethod_var);
		__this->____audioItems_38 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____audioItems_38), (void*)L_1);
		AudioController__InitializeAudioItems_m6962019237DA495AF6D37CC649C5911AB1A7AB62(__this, __this, NULL);
		List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69* L_2 = __this->____additionalAudioControllers_46;
		if (!L_2)
		{
			goto IL_0056;
		}
	}
	{
		V_0 = 0;
		goto IL_0048;
	}

IL_0027:
	{
		List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69* L_3 = __this->____additionalAudioControllers_46;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_5;
		L_5 = List_1_get_Item_m83817D343BDAC069422C14D5081E7196A6B65FF2(L_3, L_4, List_1_get_Item_m83817D343BDAC069422C14D5081E7196A6B65FF2_RuntimeMethod_var);
		V_1 = L_5;
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_8 = V_1;
		AudioController__InitializeAudioItems_m6962019237DA495AF6D37CC649C5911AB1A7AB62(__this, L_8, NULL);
	}

IL_0044:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0048:
	{
		int32_t L_10 = V_0;
		List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69* L_11 = __this->____additionalAudioControllers_46;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_mF5CF94C2536E713813EDDD76400A105EDC92F77D_inline(L_11, List_1_get_Count_mF5CF94C2536E713813EDDD76400A105EDC92F77D_RuntimeMethod_var);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0027;
		}
	}

IL_0056:
	{
		return;
	}
}
// System.Void AudioController::_InitializeAudioItems(AudioController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController__InitializeAudioItems_m6962019237DA495AF6D37CC649C5911AB1A7AB62 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* ___0_audioController, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* V_1 = NULL;
	{
		V_0 = 0;
		goto IL_003d;
	}

IL_0004:
	{
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0 = ___0_audioController;
		NullCheck(L_0);
		AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931* L_1 = L_0->___AudioCategories_18;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_5 = V_1;
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_6 = ___0_audioController;
		NullCheck(L_5);
		AudioCategory_set_audioController_m5276D4CA40A5C4D342C9E3928EBE8948EC0218D7_inline(L_5, L_6, NULL);
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_7 = V_1;
		Dictionary_2_t57C406847BE968A40E40481F27C9CE8C715AC3FB* L_8 = __this->____audioItems_38;
		NullCheck(L_7);
		AudioCategory__AnalyseAudioItems_m1CC5231E6EF590A41E1CF75B8C4A1E4C91A4BB11(L_7, L_8, NULL);
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_9 = V_1;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = L_9->___AudioObjectPrefab_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_10, NULL);
		if (!L_11)
		{
			goto IL_0039;
		}
	}
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_12 = V_1;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = L_12->___AudioObjectPrefab_5;
		AudioController__ValidateAudioObjectPrefab_m4EADD64F5DD080482A6CA142172EA2CC73BAD8E5(__this, L_13, NULL);
	}

IL_0039:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_003d:
	{
		int32_t L_15 = V_0;
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_16 = ___0_audioController;
		NullCheck(L_16);
		AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931* L_17 = L_16->___AudioCategories_18;
		NullCheck(L_17);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void AudioController::_RegisterAdditionalAudioController(AudioController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController__RegisterAdditionalAudioController_m7B3E5EAD4A8307AE7D8014CE94F1D2234A221D1B (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* ___0_ac, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5D218F9399CBC7C480B6DC0917CAC6224A5FB251_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m26390D3628070FD2AB24152BA4FA1A5D2B318392_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69* L_0 = __this->____additionalAudioControllers_46;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69* L_1 = (List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69*)il2cpp_codegen_object_new(List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m26390D3628070FD2AB24152BA4FA1A5D2B318392(L_1, List_1__ctor_m26390D3628070FD2AB24152BA4FA1A5D2B318392_RuntimeMethod_var);
		__this->____additionalAudioControllers_46 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____additionalAudioControllers_46), (void*)L_1);
	}

IL_0013:
	{
		List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69* L_2 = __this->____additionalAudioControllers_46;
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_3 = ___0_ac;
		NullCheck(L_2);
		List_1_Add_m5D218F9399CBC7C480B6DC0917CAC6224A5FB251_inline(L_2, L_3, List_1_Add_m5D218F9399CBC7C480B6DC0917CAC6224A5FB251_RuntimeMethod_var);
		AudioController__InvalidateCategories_mD3461E474AE26627D1EE78226427DB297AF35A3D(__this, NULL);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_4 = ___0_ac;
		AudioController__SyncCategoryVolumes_m11F10711EB0A686ED078BD6CFC1388D1BCA3E834(__this, L_4, __this, NULL);
		return;
	}
}
// System.Void AudioController::_SyncCategoryVolumes(AudioController,AudioController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController__SyncCategoryVolumes_m11F10711EB0A686ED078BD6CFC1388D1BCA3E834 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* ___0_toSync, AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* ___1_syncWith, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* V_1 = NULL;
	AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* V_2 = NULL;
	{
		V_0 = 0;
		goto IL_002d;
	}

IL_0004:
	{
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0 = ___0_toSync;
		NullCheck(L_0);
		AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931* L_1 = L_0->___AudioCategories_18;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_5 = ___1_syncWith;
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7 = L_6->___Name_0;
		NullCheck(L_5);
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_8;
		L_8 = AudioController__GetCategory_mCADD0D8AE46FAACDD6E5116396F8836ECAFD562A(L_5, L_7, NULL);
		V_2 = L_8;
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_9 = V_2;
		if (!L_9)
		{
			goto IL_0029;
		}
	}
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_10 = V_1;
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_11 = V_2;
		NullCheck(L_11);
		float L_12;
		L_12 = AudioCategory_get_Volume_mF87941E6A9F8725B2DAA2780070B9E279E1DCF24_inline(L_11, NULL);
		NullCheck(L_10);
		AudioCategory_set_Volume_m36CFDDEFD3C060651851B76A8598680D051656F0(L_10, L_12, NULL);
	}

IL_0029:
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_002d:
	{
		int32_t L_14 = V_0;
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_15 = ___0_toSync;
		NullCheck(L_15);
		AudioCategoryU5BU5D_t906344006289DAA1D2AA525541D6D1A51BE9D931* L_16 = L_15->___AudioCategories_18;
		NullCheck(L_16);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void AudioController::_UnregisterAdditionalAudioController(AudioController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController__UnregisterAdditionalAudioController_mA50AB7FAD5C0BCA767C672DB7A94BEA024B1DE2C (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* ___0_ac, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m4B3F3EADD398B425839F6C63623A5972539849D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF5CF94C2536E713813EDDD76400A105EDC92F77D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m83817D343BDAC069422C14D5081E7196A6B65FF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BE11E57278B4DB1404B685496A04A9ACD355655);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD396E2BCD3A1CDCB18C3BAE5F6E5FC372E1B51FA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69* L_0 = __this->____additionalAudioControllers_46;
		if (!L_0)
		{
			goto IL_0046;
		}
	}
	{
		V_0 = 0;
		goto IL_0037;
	}

IL_000c:
	{
		List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69* L_1 = __this->____additionalAudioControllers_46;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_3;
		L_3 = List_1_get_Item_m83817D343BDAC069422C14D5081E7196A6B65FF2(L_1, L_2, List_1_get_Item_m83817D343BDAC069422C14D5081E7196A6B65FF2_RuntimeMethod_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_4 = ___0_ac;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69* L_6 = __this->____additionalAudioControllers_46;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		List_1_RemoveAt_m4B3F3EADD398B425839F6C63623A5972539849D0(L_6, L_7, List_1_RemoveAt_m4B3F3EADD398B425839F6C63623A5972539849D0_RuntimeMethod_var);
		AudioController__InvalidateCategories_mD3461E474AE26627D1EE78226427DB297AF35A3D(__this, NULL);
		return;
	}

IL_0033:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0037:
	{
		int32_t L_9 = V_0;
		List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69* L_10 = __this->____additionalAudioControllers_46;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_mF5CF94C2536E713813EDDD76400A105EDC92F77D_inline(L_10, List_1_get_Count_mF5CF94C2536E713813EDDD76400A105EDC92F77D_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_0046:
	{
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_12 = ___0_ac;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_12, NULL);
		String_t* L_14;
		L_14 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralD396E2BCD3A1CDCB18C3BAE5F6E5FC372E1B51FA, L_13, _stringLiteral0BE11E57278B4DB1404B685496A04A9ACD355655, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_14, NULL);
		return;
	}
}
// System.Collections.Generic.List`1<ClockStone.AudioCategory> AudioController::_GetAllCategories(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE* AudioController__GetAllCategories_m7893AC462ECA0912A18677156087746FD1C21A22 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC2A99B3CE2CBBE66E9543D96F2BF74F8C34BEDB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1C0629CD2123A5CCED9C6F2CDF71C2DD801D26A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF5CF94C2536E713813EDDD76400A105EDC92F77D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m83817D343BDAC069422C14D5081E7196A6B65FF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* V_0 = NULL;
	List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE* V_1 = NULL;
	AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* V_2 = NULL;
	int32_t V_3 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0;
		L_0 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		V_0 = L_0;
		List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE* L_1 = (List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE*)il2cpp_codegen_object_new(List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m1C0629CD2123A5CCED9C6F2CDF71C2DD801D26A1(L_1, List_1__ctor_m1C0629CD2123A5CCED9C6F2CDF71C2DD801D26A1_RuntimeMethod_var);
		V_1 = L_1;
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_2 = V_0;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_4;
		L_4 = AudioController__GetCategory_mCADD0D8AE46FAACDD6E5116396F8836ECAFD562A(L_2, L_3, NULL);
		V_2 = L_4;
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_5 = V_2;
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE* L_6 = V_1;
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_7 = V_2;
		NullCheck(L_6);
		List_1_Add_mC2A99B3CE2CBBE66E9543D96F2BF74F8C34BEDB8_inline(L_6, L_7, List_1_Add_mC2A99B3CE2CBBE66E9543D96F2BF74F8C34BEDB8_RuntimeMethod_var);
	}

IL_001e:
	{
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_8 = V_0;
		NullCheck(L_8);
		List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69* L_9 = L_8->____additionalAudioControllers_46;
		if (!L_9)
		{
			goto IL_0059;
		}
	}
	{
		V_3 = 0;
		goto IL_004b;
	}

IL_002a:
	{
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_10 = V_0;
		NullCheck(L_10);
		List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69* L_11 = L_10->____additionalAudioControllers_46;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_13;
		L_13 = List_1_get_Item_m83817D343BDAC069422C14D5081E7196A6B65FF2(L_11, L_12, List_1_get_Item_m83817D343BDAC069422C14D5081E7196A6B65FF2_RuntimeMethod_var);
		String_t* L_14 = ___0_name;
		NullCheck(L_13);
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_15;
		L_15 = AudioController__GetCategory_mCADD0D8AE46FAACDD6E5116396F8836ECAFD562A(L_13, L_14, NULL);
		V_2 = L_15;
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_16 = V_2;
		if (!L_16)
		{
			goto IL_0047;
		}
	}
	{
		List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE* L_17 = V_1;
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_18 = V_2;
		NullCheck(L_17);
		List_1_Add_mC2A99B3CE2CBBE66E9543D96F2BF74F8C34BEDB8_inline(L_17, L_18, List_1_Add_mC2A99B3CE2CBBE66E9543D96F2BF74F8C34BEDB8_RuntimeMethod_var);
	}

IL_0047:
	{
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_004b:
	{
		int32_t L_20 = V_3;
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_21 = V_0;
		NullCheck(L_21);
		List_1_t00218D5493CB57E59E867E781C3F93D09ADBEB69* L_22 = L_21->____additionalAudioControllers_46;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_mF5CF94C2536E713813EDDD76400A105EDC92F77D_inline(L_22, List_1_get_Count_mF5CF94C2536E713813EDDD76400A105EDC92F77D_RuntimeMethod_var);
		if ((((int32_t)L_20) < ((int32_t)L_23)))
		{
			goto IL_002a;
		}
	}

IL_0059:
	{
		List_1_tFAA0558B778A094EC4C9E8F33641E67FBB3324DE* L_24 = V_1;
		return L_24;
	}
}
// ClockStone.AudioObject AudioController::PlayAudioSubItem(ClockStone.AudioSubItem,System.Single,UnityEngine.Vector3,UnityEngine.Transform,System.Single,System.Single,System.Boolean,ClockStone.AudioObject,System.Double,AudioChannelType,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* AudioController_PlayAudioSubItem_m2138408A93FC640847B66794558B053C84DAF28B (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* ___0_subItem, float ___1_volume, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_worldPosition, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___3_parentObj, float ___4_delay, float ___5_startTime, bool ___6_playWithoutAudioObject, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* ___7_useExistingAudioObj, double ___8_dspTime, int32_t ___9_channel, float ___10_startVolumeMultiplier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553_mD65FC8927413DC0646C9E86A786906AED21B73D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4913D23B33460B5F333E1ADA41C2E2C90C52C383);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5857551470FA48B3F71F992583A93239D3BFAF12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C62319D80A1667114B99D3DE12D66AEAF6F761F);
		s_Il2CppMethodInitialized = true;
	}
	AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* V_0 = NULL;
	AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* V_4 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_5 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_6 = NULL;
	AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* V_7 = NULL;
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* G_B33_0 = NULL;
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* G_B32_0 = NULL;
	int32_t G_B34_0 = 0;
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* G_B34_1 = NULL;
	{
		AudioController__ValidateCategories_mD6DC4E5F936E40663A501D36FE7492EACF2ABBE5(__this, NULL);
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_0 = ___0_subItem;
		NullCheck(L_0);
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_1;
		L_1 = AudioSubItem_get_item_m53E96EF703004CD165FD10212837F30EDBD20C38_inline(L_0, NULL);
		V_0 = L_1;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_2 = ___0_subItem;
		NullCheck(L_2);
		int32_t L_3 = L_2->___SubItemType_0;
		V_8 = L_3;
		int32_t L_4 = V_8;
		if (!L_4)
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_5 = V_8;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0069;
		}
	}
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_6 = ___0_subItem;
		NullCheck(L_6);
		String_t* L_7 = L_6->___ItemModeAudioID_3;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if (L_8)
		{
			goto IL_0047;
		}
	}
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10 = L_9->___Name_0;
		String_t* L_11;
		L_11 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral7C62319D80A1667114B99D3DE12D66AEAF6F761F, L_10, _stringLiteral5857551470FA48B3F71F992583A93239D3BFAF12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_11, NULL);
		return (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*)NULL;
	}

IL_0047:
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_12 = ___0_subItem;
		NullCheck(L_12);
		String_t* L_13 = L_12->___ItemModeAudioID_3;
		int32_t L_14 = ___9_channel;
		float L_15 = ___1_volume;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___2_worldPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = ___3_parentObj;
		float L_18 = ___4_delay;
		float L_19 = ___5_startTime;
		bool L_20 = ___6_playWithoutAudioObject;
		double L_21 = ___8_dspTime;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_22 = ___7_useExistingAudioObj;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_23;
		L_23 = AudioController__PlayEx_m67BFBEB1B06D98669996848F7E16FD24961014C5(__this, L_13, L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, L_22, (1.0f), NULL);
		return L_23;
	}

IL_0069:
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_24 = ___0_subItem;
		NullCheck(L_24);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_25 = L_24->___Clip_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_25, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_26)
		{
			goto IL_0079;
		}
	}
	{
		return (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*)NULL;
	}

IL_0079:
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_27 = V_0;
		NullCheck(L_27);
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_28;
		L_28 = AudioItem_get_category_mA6BE3D42E8FBE2687F68B5017B451ECC79884DE9_inline(L_27, NULL);
		V_1 = L_28;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_29 = ___0_subItem;
		NullCheck(L_29);
		float L_30 = L_29->___Volume_5;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_31 = V_0;
		NullCheck(L_31);
		float L_32 = L_31->___Volume_8;
		float L_33 = ___1_volume;
		V_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_30, L_32)), L_33));
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_34 = ___0_subItem;
		NullCheck(L_34);
		float L_35 = L_34->___RandomVolume_10;
		if ((!(((float)L_35) == ((float)(0.0f)))))
		{
			goto IL_00aa;
		}
	}
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_36 = V_0;
		NullCheck(L_36);
		float L_37 = L_36->___loopSequenceRandomVolume_6;
		if ((((float)L_37) == ((float)(0.0f))))
		{
			goto IL_00cd;
		}
	}

IL_00aa:
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_38 = ___0_subItem;
		NullCheck(L_38);
		float L_39 = L_38->___RandomVolume_10;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_40 = V_0;
		NullCheck(L_40);
		float L_41 = L_40->___loopSequenceRandomVolume_6;
		V_9 = ((float)il2cpp_codegen_add(L_39, L_41));
		float L_42 = V_2;
		float L_43 = V_9;
		float L_44 = V_9;
		float L_45;
		L_45 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_43)), L_44, NULL);
		V_2 = ((float)il2cpp_codegen_add(L_42, L_45));
		float L_46 = V_2;
		float L_47;
		L_47 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_46, NULL);
		V_2 = L_47;
	}

IL_00cd:
	{
		float L_48 = V_2;
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_49 = V_1;
		NullCheck(L_49);
		float L_50;
		L_50 = AudioCategory_get_VolumeTotal_m972D0490ECC2ED900D325E146ED55107082824C7(L_49, NULL);
		V_3 = ((float)il2cpp_codegen_multiply(L_48, L_50));
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_51 = ___0_subItem;
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_52;
		L_52 = AudioController__GetAudioController_m9A81CC7C56B9410FD790C69E1ED28B64F610A19E(__this, L_51, NULL);
		V_4 = L_52;
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_53 = V_4;
		NullCheck(L_53);
		bool L_54 = L_53->___PlayWithZeroVolume_9;
		if (L_54)
		{
			goto IL_00ff;
		}
	}
	{
		float L_55 = V_3;
		if ((((float)L_55) <= ((float)(0.0f))))
		{
			goto IL_00fd;
		}
	}
	{
		float L_56;
		L_56 = AudioController_get_Volume_m76D0F25F710E931B3BCB1811834BBF45ACCCF137_inline(__this, NULL);
		if ((!(((float)L_56) <= ((float)(0.0f)))))
		{
			goto IL_00ff;
		}
	}

IL_00fd:
	{
		return (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*)NULL;
	}

IL_00ff:
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_57 = V_1;
		NullCheck(L_57);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58;
		L_58 = AudioCategory_GetAudioObjectPrefab_m76914CC50BB6D19D9202F13F73F5570129D48A57(L_57, NULL);
		V_6 = L_58;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_60;
		L_60 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_59, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_60)
		{
			goto IL_0133;
		}
	}
	{
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_61 = V_4;
		NullCheck(L_61);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = L_61->___AudioObjectPrefab_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_63;
		L_63 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_62, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_63)
		{
			goto IL_012b;
		}
	}
	{
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_64 = V_4;
		NullCheck(L_64);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_65 = L_64->___AudioObjectPrefab_5;
		V_6 = L_65;
		goto IL_0133;
	}

IL_012b:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66 = __this->___AudioObjectPrefab_5;
		V_6 = L_66;
	}

IL_0133:
	{
		bool L_67 = ___6_playWithoutAudioObject;
		if (!L_67)
		{
			goto IL_0151;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_68 = V_6;
		NullCheck(L_68);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_69;
		L_69 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_68, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_70 = ___0_subItem;
		NullCheck(L_70);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_71 = L_70->___Clip_4;
		float L_72 = V_3;
		float L_73;
		L_73 = AudioObject_TransformVolume_m4E6AB3C6BCB41F5B1D7DBD7527E67BED94364B44(L_72, NULL);
		NullCheck(L_69);
		AudioSource_PlayOneShot_mF6FE95C58996B38EF6E7F7482F95F5E15E0AB30B(L_69, L_71, L_73, NULL);
		return (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*)NULL;
	}

IL_0151:
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_74 = ___7_useExistingAudioObj;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_74, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_75)
		{
			goto IL_01a2;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_76 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77 = ___2_worldPosition;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_78;
		L_78 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_79;
		L_79 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_76, L_77, L_78, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_5 = L_79;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_80 = ___3_parentObj;
		bool L_81;
		L_81 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_80, NULL);
		if (!L_81)
		{
			goto IL_0183;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_82 = V_5;
		NullCheck(L_82);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_83;
		L_83 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_82, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84 = ___3_parentObj;
		NullCheck(L_83);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_83, L_84, NULL);
		goto IL_0192;
	}

IL_0183:
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_85 = V_0;
		NullCheck(L_85);
		bool L_86 = L_85->___DestroyOnLoad_7;
		if (L_86)
		{
			goto IL_0192;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_87 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_87, NULL);
	}

IL_0192:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_88 = V_5;
		NullCheck(L_88);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_89;
		L_89 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_88, NULL);
		NullCheck(L_89);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_90;
		L_90 = GameObject_GetComponent_TisAudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553_mD65FC8927413DC0646C9E86A786906AED21B73D8(L_89, GameObject_GetComponent_TisAudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553_mD65FC8927413DC0646C9E86A786906AED21B73D8_RuntimeMethod_var);
		V_7 = L_90;
		goto IL_01af;
	}

IL_01a2:
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_91 = ___7_useExistingAudioObj;
		NullCheck(L_91);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_92;
		L_92 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_91, NULL);
		V_5 = L_92;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_93 = ___7_useExistingAudioObj;
		V_7 = L_93;
	}

IL_01af:
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_94 = V_7;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_95 = ___0_subItem;
		NullCheck(L_94);
		AudioObject_set_subItem_m84C0283818EFCF174279DD41374EB80FC9BC0250_inline(L_94, L_95, NULL);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_96 = ___7_useExistingAudioObj;
		if (L_96)
		{
			goto IL_01c8;
		}
	}
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_97 = V_7;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_98 = V_0;
		NullCheck(L_98);
		int32_t L_99 = L_98->____lastChosen_22;
		NullCheck(L_97);
		L_97->____lastChosenSubItemIndex_40 = L_99;
	}

IL_01c8:
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_100 = V_7;
		NullCheck(L_100);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_101;
		L_101 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(L_100, NULL);
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_102 = ___0_subItem;
		NullCheck(L_102);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_103 = L_102->___Clip_4;
		NullCheck(L_101);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_101, L_103, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_104 = V_5;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_105 = V_7;
		NullCheck(L_105);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_106;
		L_106 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(L_105, NULL);
		NullCheck(L_106);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_107;
		L_107 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_106, NULL);
		NullCheck(L_107);
		String_t* L_108;
		L_108 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_107, NULL);
		String_t* L_109;
		L_109 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral4913D23B33460B5F333E1ADA41C2E2C90C52C383, L_108, NULL);
		NullCheck(L_104);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_104, L_109, NULL);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_110 = V_7;
		NullCheck(L_110);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_111;
		L_111 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(L_110, NULL);
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_112 = ___0_subItem;
		NullCheck(L_112);
		float L_113 = L_112->___PitchShift_6;
		float L_114;
		L_114 = AudioObject_TransformPitch_m69F30ACF757DBAE04792FFF9E35A6C79963DC953(L_113, NULL);
		NullCheck(L_111);
		AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811(L_111, L_114, NULL);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_115 = V_7;
		NullCheck(L_115);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_116;
		L_116 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(L_115, NULL);
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_117 = ___0_subItem;
		NullCheck(L_117);
		float L_118 = L_117->___Pan2D_7;
		NullCheck(L_116);
		AudioSource_set_panStereo_mE3BA673B5F93F731114E8901355A63F07C8A54DF(L_116, L_118, NULL);
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_119 = ___0_subItem;
		NullCheck(L_119);
		bool L_120 = L_119->___RandomStartPosition_16;
		if (!L_120)
		{
			goto IL_0240;
		}
	}
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_121 = V_7;
		NullCheck(L_121);
		float L_122;
		L_122 = AudioObject_get_clipLength_mB96E3BA96B35CA8F1B7AFFB032F33197D76335CC(L_121, NULL);
		float L_123;
		L_123 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), L_122, NULL);
		___5_startTime = L_123;
	}

IL_0240:
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_124 = V_7;
		NullCheck(L_124);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_125;
		L_125 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(L_124, NULL);
		float L_126 = ___5_startTime;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_127 = ___0_subItem;
		NullCheck(L_127);
		float L_128 = L_127->___ClipStartTime_13;
		NullCheck(L_125);
		AudioSource_set_time_m6670372FD9C494978B7B3E01B7F4D220616F6204(L_125, ((float)il2cpp_codegen_add(L_126, L_128)), NULL);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_129 = V_7;
		NullCheck(L_129);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_130;
		L_130 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(L_129, NULL);
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_131 = V_0;
		NullCheck(L_131);
		int32_t L_132 = L_131->___Loop_1;
		G_B32_0 = L_130;
		if ((((int32_t)L_132) == ((int32_t)1)))
		{
			G_B33_0 = L_130;
			goto IL_0270;
		}
	}
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_133 = V_0;
		NullCheck(L_133);
		int32_t L_134 = L_133->___Loop_1;
		G_B34_0 = ((((int32_t)L_134) == ((int32_t)3))? 1 : 0);
		G_B34_1 = G_B32_0;
		goto IL_0271;
	}

IL_0270:
	{
		G_B34_0 = 1;
		G_B34_1 = G_B33_0;
	}

IL_0271:
	{
		NullCheck(G_B34_1);
		AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56(G_B34_1, (bool)G_B34_0, NULL);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_135 = V_7;
		float L_136 = V_2;
		NullCheck(L_135);
		L_135->____volumeExcludingCategory_14 = L_136;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_137 = V_7;
		float L_138 = ___1_volume;
		NullCheck(L_137);
		L_137->____volumeFromScriptCall_17 = L_138;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_139 = V_7;
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_140 = V_1;
		NullCheck(L_139);
		AudioObject_set_category_m7341517B0BDD393E77BE2E576F21F1494CDAC1E1_inline(L_139, L_140, NULL);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_141 = V_7;
		int32_t L_142 = ___9_channel;
		NullCheck(L_141);
		AudioObject_set_channel_m713E350808B9959C31DAAAB5B0BD0D2FA74A1A22_inline(L_141, L_142, NULL);
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_143 = ___0_subItem;
		NullCheck(L_143);
		float L_144 = L_143->___FadeIn_14;
		if ((!(((float)L_144) > ((float)(0.0f)))))
		{
			goto IL_02b1;
		}
	}
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_145 = V_7;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_146 = ___0_subItem;
		NullCheck(L_146);
		float L_147 = L_146->___FadeIn_14;
		NullCheck(L_145);
		AudioObject_FadeIn_mE7C98E14EF6B0877C77DBBA6E48F090559C02539(L_145, L_147, NULL);
	}

IL_02b1:
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_148 = V_7;
		float L_149 = ___10_startVolumeMultiplier;
		NullCheck(L_148);
		AudioObject__ApplyVolumePrimary_mA8DEF9B9775004AF5A666399C64CAECA2A7B05C6(L_148, L_149, NULL);
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_150 = V_1;
		NullCheck(L_150);
		AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* L_151;
		L_151 = AudioCategory_GetAudioMixerGroup_m63DCE1384A774C6800E2C0F5B9679E421A1FFF3E(L_150, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_152;
		L_152 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_151, NULL);
		if (!L_152)
		{
			goto IL_02d9;
		}
	}
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_153 = V_7;
		NullCheck(L_153);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_154;
		L_154 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(L_153, NULL);
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_155 = V_1;
		NullCheck(L_155);
		AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* L_156 = L_155->___audioMixerGroup_8;
		NullCheck(L_154);
		AudioSource_set_outputAudioMixerGroup_m10D0A0EAE270424CD2F3BB960CFAA158D9FC24CF(L_154, L_156, NULL);
	}

IL_02d9:
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_157 = ___0_subItem;
		NullCheck(L_157);
		float L_158 = L_157->___RandomPitch_9;
		if ((!(((float)L_158) == ((float)(0.0f)))))
		{
			goto IL_02f3;
		}
	}
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_159 = V_0;
		NullCheck(L_159);
		float L_160 = L_159->___loopSequenceRandomPitch_5;
		if ((((float)L_160) == ((float)(0.0f))))
		{
			goto IL_0324;
		}
	}

IL_02f3:
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_161 = ___0_subItem;
		NullCheck(L_161);
		float L_162 = L_161->___RandomPitch_9;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_163 = V_0;
		NullCheck(L_163);
		float L_164 = L_163->___loopSequenceRandomPitch_5;
		V_10 = ((float)il2cpp_codegen_add(L_162, L_164));
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_165 = V_7;
		NullCheck(L_165);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_166;
		L_166 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(L_165, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_167 = L_166;
		NullCheck(L_167);
		float L_168;
		L_168 = AudioSource_get_pitch_mB1B0B8A52400B5C798BF1E644FE1C2FFA20A9863(L_167, NULL);
		float L_169 = V_10;
		float L_170 = V_10;
		float L_171;
		L_171 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_169)), L_170, NULL);
		float L_172;
		L_172 = AudioObject_TransformPitch_m69F30ACF757DBAE04792FFF9E35A6C79963DC953(L_171, NULL);
		NullCheck(L_167);
		AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811(L_167, ((float)il2cpp_codegen_multiply(L_168, L_172)), NULL);
	}

IL_0324:
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_173 = ___0_subItem;
		NullCheck(L_173);
		float L_174 = L_173->___RandomDelay_11;
		if ((!(((float)L_174) > ((float)(0.0f)))))
		{
			goto IL_0346;
		}
	}
	{
		float L_175 = ___4_delay;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_176 = ___0_subItem;
		NullCheck(L_176);
		float L_177 = L_176->___RandomDelay_11;
		float L_178;
		L_178 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), L_177, NULL);
		___4_delay = ((float)il2cpp_codegen_add(L_175, L_178));
	}

IL_0346:
	{
		double L_179 = ___8_dspTime;
		if ((!(((double)L_179) > ((double)(0.0)))))
		{
			goto IL_0372;
		}
	}
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_180 = V_7;
		double L_181 = ___8_dspTime;
		float L_182 = ___4_delay;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_183 = ___0_subItem;
		NullCheck(L_183);
		float L_184 = L_183->___Delay_8;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_185 = V_0;
		NullCheck(L_185);
		float L_186 = L_185->___Delay_12;
		NullCheck(L_180);
		AudioObject_PlayScheduled_mB5C7557A00ED8B16E7374D43EEBE61394117CBA1(L_180, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(L_181, ((double)L_182))), ((double)L_184))), ((double)L_186))), NULL);
		goto IL_0389;
	}

IL_0372:
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_187 = V_7;
		float L_188 = ___4_delay;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_189 = ___0_subItem;
		NullCheck(L_189);
		float L_190 = L_189->___Delay_8;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_191 = V_0;
		NullCheck(L_191);
		float L_192 = L_191->___Delay_12;
		NullCheck(L_187);
		AudioObject_Play_m85ADEF7E2221FB1AF872E21466ECE5B2A02C8A6F(L_187, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_188, L_190)), L_192)), NULL);
	}

IL_0389:
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_193 = ___0_subItem;
		NullCheck(L_193);
		float L_194 = L_193->___FadeIn_14;
		if ((!(((float)L_194) > ((float)(0.0f)))))
		{
			goto IL_03a3;
		}
	}
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_195 = V_7;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_196 = ___0_subItem;
		NullCheck(L_196);
		float L_197 = L_196->___FadeIn_14;
		NullCheck(L_195);
		AudioObject_FadeIn_mE7C98E14EF6B0877C77DBBA6E48F090559C02539(L_195, L_197, NULL);
	}

IL_03a3:
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_198 = V_7;
		return L_198;
	}
}
// AudioController AudioController::_GetAudioController(ClockStone.AudioSubItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* AudioController__GetAudioController_m9A81CC7C56B9410FD790C69E1ED28B64F610A19E (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* ___0_subItem, const RuntimeMethod* method) 
{
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_0 = ___0_subItem;
		NullCheck(L_0);
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_1;
		L_1 = AudioSubItem_get_item_m53E96EF703004CD165FD10212837F30EDBD20C38_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_2 = ___0_subItem;
		NullCheck(L_2);
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_3;
		L_3 = AudioSubItem_get_item_m53E96EF703004CD165FD10212837F30EDBD20C38_inline(L_2, NULL);
		NullCheck(L_3);
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_4;
		L_4 = AudioItem_get_category_mA6BE3D42E8FBE2687F68B5017B451ECC79884DE9_inline(L_3, NULL);
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_5 = ___0_subItem;
		NullCheck(L_5);
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_6;
		L_6 = AudioSubItem_get_item_m53E96EF703004CD165FD10212837F30EDBD20C38_inline(L_5, NULL);
		NullCheck(L_6);
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_7;
		L_7 = AudioItem_get_category_mA6BE3D42E8FBE2687F68B5017B451ECC79884DE9_inline(L_6, NULL);
		NullCheck(L_7);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_8;
		L_8 = AudioCategory_get_audioController_m1675648A0516A6A61319734FD1ED7ACA5854AD14_inline(L_7, NULL);
		return L_8;
	}

IL_0026:
	{
		return __this;
	}
}
// System.Void AudioController::_NotifyPlaylistTrackCompleteleyPlayed(ClockStone.AudioObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController__NotifyPlaylistTrackCompleteleyPlayed_m4ECBAF059035FA03411CF46005B3A13AA2D67A3A (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* ___0_audioObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_0 = ___0_audioObject;
		NullCheck(L_0);
		L_0->____isCurrentPlaylistTrack_35 = (bool)0;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AudioController_IsPlaylistPlaying_m76CDEE39D7835F270390046A1AFC25334757AC13(NULL);
		if (!L_1)
		{
			goto IL_004e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_2 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____currentMusic_26;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_3 = ___0_audioObject;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		float L_5 = __this->___delayBetweenPlaylistTracks_25;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_6;
		L_6 = AudioController__PlayNextMusicOnPlaylist_m44169523656BAFACF68F2742D0499981DEE77B51(__this, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____isPlaylistPlaying_40 = (bool)0;
		Action_1_t023DCA8A74BAFD35D2BFAABA1BD11F1084D452E8* L_8 = __this->___playlistFinishedEvent_20;
		if (!L_8)
		{
			goto IL_004e;
		}
	}
	{
		Action_1_t023DCA8A74BAFD35D2BFAABA1BD11F1084D452E8* L_9 = __this->___playlistFinishedEvent_20;
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_10;
		L_10 = AudioController__GetCurrentPlaylist_m34E76899B97F10F2E0C768CC45EA842130DD1EBC(__this, NULL);
		NullCheck(L_9);
		Action_1_Invoke_m68D559B79B66F2C4FEDE009F454AA78D0A396CCA_inline(L_9, L_10, NULL);
	}

IL_004e:
	{
		return;
	}
}
// System.Void AudioController::_ValidateAudioObjectPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController__ValidateAudioObjectPrefab_m4EADD64F5DD080482A6CA142172EA2CC73BAD8E5 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_audioPrefab, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553_mD65FC8927413DC0646C9E86A786906AED21B73D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FF7FCB65B590C2B394F86C4786602BEBCCA3052);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98622D0FD4CFAA7D1C337A27D8A519739800F617);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___UsePooledAudioObjects_8;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral98622D0FD4CFAA7D1C337A27D8A519739800F617, NULL);
	}

IL_0012:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___0_audioPrefab;
		NullCheck(L_1);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_2;
		L_2 = GameObject_GetComponent_TisAudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553_mD65FC8927413DC0646C9E86A786906AED21B73D8(L_1, GameObject_GetComponent_TisAudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553_mD65FC8927413DC0646C9E86A786906AED21B73D8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral2FF7FCB65B590C2B394F86C4786602BEBCCA3052, NULL);
	}

IL_002a:
	{
		return;
	}
}
// System.Void AudioController::OnAfterDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_OnAfterDeserialize_m177B7E2E3AB5A3C294BBA127D3294899C86AC241 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___musicPlaylist_21;
		if (!L_0)
		{
			goto IL_0044;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->___musicPlaylist_21;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0044;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = __this->___musicPlaylist_21;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC(L_3, (RuntimeObject*)L_2, List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		V_0 = L_3;
		PlaylistU5BU5D_t47ECBFE135D02155EB82EB1DF73313E184F6BBFC* L_4 = __this->___musicPlaylists_19;
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_5 = (Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464*)il2cpp_codegen_object_new(Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Playlist__ctor_m272597928C27B291280C5A46445D3E73D3B905FA(L_5, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464*)L_5);
		PlaylistU5BU5D_t47ECBFE135D02155EB82EB1DF73313E184F6BBFC* L_6 = __this->___musicPlaylists_19;
		NullCheck(L_6);
		int32_t L_7 = 0;
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = V_0;
		NullCheck(L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10;
		L_10 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_9, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		NullCheck(L_8);
		L_8->___playlistItems_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___playlistItems_1), (void*)L_10);
		__this->___musicPlaylist_21 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___musicPlaylist_21), (void*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL);
	}

IL_0044:
	{
		return;
	}
}
// System.Void AudioController::OnBeforeSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_OnBeforeSerialize_m6BAC4DCD9CD515E1FA43F3F1BA0C07040B916018 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void AudioController::_SetDefaultCurrentPlaylist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController__SetDefaultCurrentPlaylist_mC4A97519A71528CB71F57CF3530C445751A39665 (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	{
		PlaylistU5BU5D_t47ECBFE135D02155EB82EB1DF73313E184F6BBFC* L_0 = __this->___musicPlaylists_19;
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		PlaylistU5BU5D_t47ECBFE135D02155EB82EB1DF73313E184F6BBFC* L_1 = __this->___musicPlaylists_19;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) < ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		PlaylistU5BU5D_t47ECBFE135D02155EB82EB1DF73313E184F6BBFC* L_2 = __this->___musicPlaylists_19;
		NullCheck(L_2);
		int32_t L_3 = 0;
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		PlaylistU5BU5D_t47ECBFE135D02155EB82EB1DF73313E184F6BBFC* L_5 = __this->___musicPlaylists_19;
		NullCheck(L_5);
		int32_t L_6 = 0;
		Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		String_t* L_8 = L_7->___name_0;
		__this->____currentPlaylistName_28 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentPlaylistName_28), (void*)L_8);
	}

IL_0030:
	{
		return;
	}
}
// System.Void AudioController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController__ctor_mE878891E2E5992036688BB7EAD5F12E683A8550F (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_CurrentInspectorSelection_t877D4AEFC563669DAC74331B954B1502F21370B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaylistU5BU5D_t47ECBFE135D02155EB82EB1DF73313E184F6BBFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___UsePooledAudioObjects_8 = (bool)1;
		PlaylistU5BU5D_t47ECBFE135D02155EB82EB1DF73313E184F6BBFC* L_0 = (PlaylistU5BU5D_t47ECBFE135D02155EB82EB1DF73313E184F6BBFC*)(PlaylistU5BU5D_t47ECBFE135D02155EB82EB1DF73313E184F6BBFC*)SZArrayNew(PlaylistU5BU5D_t47ECBFE135D02155EB82EB1DF73313E184F6BBFC_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___musicPlaylists_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___musicPlaylists_19), (void*)L_0);
		__this->___delayBetweenPlaylistTracks_25 = (1.0f);
		__this->____musicEnabled_32 = (bool)1;
		__this->____ambienceSoundEnabled_33 = (bool)1;
		__this->____volume_41 = (1.0f);
		AudioController_CurrentInspectorSelection_t877D4AEFC563669DAC74331B954B1502F21370B0* L_1 = (AudioController_CurrentInspectorSelection_t877D4AEFC563669DAC74331B954B1502F21370B0*)il2cpp_codegen_object_new(AudioController_CurrentInspectorSelection_t877D4AEFC563669DAC74331B954B1502F21370B0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AudioController_CurrentInspectorSelection__ctor_m942F52EB322120E0E3E0AB44F62DE65159E21C79(L_1, NULL);
		__this->____currentInspectorSelection_47 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentInspectorSelection_47), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void AudioController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController__cctor_m25E322FA066260C13E1B58D2A9C27A5F861B6EBE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____musicParent_30 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____musicParent_30), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____ambienceParent_31 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____ambienceParent_31), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____isPlaylistPlaying_40 = (bool)0;
		((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____lastSystemTime_43 = (-1.0);
		((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____systemDeltaTime_44 = (-1.0);
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
// System.Void AudioController_CurrentInspectorSelection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_CurrentInspectorSelection__ctor_m942F52EB322120E0E3E0AB44F62DE65159E21C79 (AudioController_CurrentInspectorSelection_t877D4AEFC563669DAC74331B954B1502F21370B0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// ClockStone.AudioSubItem[] ClockStone.AudioControllerHelper::_ChooseSubItems(ClockStone.AudioItem,ClockStone.AudioObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* AudioControllerHelper__ChooseSubItems_mC3AE24161FB7B55874490D72765B7838AD7E2062 (AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* ___0_audioItem, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* ___1_useExistingAudioObj, const RuntimeMethod* method) 
{
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_0 = ___0_audioItem;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_1 = ___0_audioItem;
		NullCheck(L_1);
		int32_t L_2 = L_1->___SubItemPickMode_9;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_3 = ___1_useExistingAudioObj;
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_4;
		L_4 = AudioControllerHelper__ChooseSubItems_mDA31D94C5E912F75CA4FDABE6BFD6DE48BA8C99D(L_0, L_2, L_3, NULL);
		return L_4;
	}
}
// ClockStone.AudioSubItem ClockStone.AudioControllerHelper::_ChooseSingleSubItem(ClockStone.AudioItem,ClockStone.AudioPickSubItemMode,ClockStone.AudioObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* AudioControllerHelper__ChooseSingleSubItem_mFE4768452DB7A6121EE6B50D4321FB181936AF8F (AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* ___0_audioItem, int32_t ___1_pickMode, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* ___2_useExistingAudioObj, const RuntimeMethod* method) 
{
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_0 = ___0_audioItem;
		int32_t L_1 = ___1_pickMode;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_2 = ___2_useExistingAudioObj;
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_3;
		L_3 = AudioControllerHelper__ChooseSubItems_mDA31D94C5E912F75CA4FDABE6BFD6DE48BA8C99D(L_0, L_1, L_2, NULL);
		NullCheck(L_3);
		int32_t L_4 = 0;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
// ClockStone.AudioSubItem ClockStone.AudioControllerHelper::_ChooseSingleSubItem(ClockStone.AudioItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* AudioControllerHelper__ChooseSingleSubItem_m01279FD73C517E9E15F69188B406F117EFA3292C (AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* ___0_audioItem, const RuntimeMethod* method) 
{
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_0 = ___0_audioItem;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_1 = ___0_audioItem;
		NullCheck(L_1);
		int32_t L_2 = L_1->___SubItemPickMode_9;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_3;
		L_3 = AudioControllerHelper__ChooseSingleSubItem_mFE4768452DB7A6121EE6B50D4321FB181936AF8F(L_0, L_2, (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*)NULL, NULL);
		return L_3;
	}
}
// ClockStone.AudioSubItem[] ClockStone.AudioControllerHelper::_ChooseSubItems(ClockStone.AudioItem,ClockStone.AudioPickSubItemMode,ClockStone.AudioObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* AudioControllerHelper__ChooseSubItems_mDA31D94C5E912F75CA4FDABE6BFD6DE48BA8C99D (AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* ___0_audioItem, int32_t ___1_pickMode, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* ___2_useExistingAudioObj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_0 = ___0_audioItem;
		NullCheck(L_0);
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_1 = L_0->___subItems_21;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D*)NULL;
	}

IL_000a:
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_2 = ___0_audioItem;
		NullCheck(L_2);
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_3 = L_2->___subItems_21;
		NullCheck(L_3);
		V_0 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		int32_t L_4 = V_0;
		if (L_4)
		{
			goto IL_0018;
		}
	}
	{
		return (AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D*)NULL;
	}

IL_0018:
	{
		V_1 = 0;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_5 = ___2_useExistingAudioObj;
		V_4 = (bool)((!(((RuntimeObject*)(AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_7 = ___2_useExistingAudioObj;
		NullCheck(L_7);
		int32_t L_8 = L_7->____lastChosenSubItemIndex_40;
		V_3 = L_8;
		goto IL_0034;
	}

IL_002d:
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_9 = ___0_audioItem;
		NullCheck(L_9);
		int32_t L_10 = L_9->____lastChosen_22;
		V_3 = L_10;
	}

IL_0034:
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)1)))
		{
			goto IL_0107;
		}
	}
	{
		int32_t L_12 = ___1_pickMode;
		switch (L_12)
		{
			case 0:
			{
				goto IL_006a;
			}
			case 1:
			{
				goto IL_00a0;
			}
			case 2:
			{
				goto IL_00ac;
			}
			case 3:
			{
				goto IL_0082;
			}
			case 4:
			{
				goto IL_008a;
			}
			case 5:
			{
				goto IL_00b8;
			}
			case 6:
			{
				goto IL_00de;
			}
			case 7:
			{
				goto IL_006c;
			}
			case 8:
			{
				goto IL_00fd;
			}
		}
	}
	{
		goto IL_0107;
	}

IL_006a:
	{
		return (AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D*)NULL;
	}

IL_006c:
	{
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_007b;
		}
	}
	{
		int32_t L_14 = V_3;
		int32_t L_15 = V_0;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_14, 1))%L_15));
		goto IL_0107;
	}

IL_007b:
	{
		V_1 = 0;
		goto IL_0107;
	}

IL_0082:
	{
		int32_t L_16 = V_3;
		int32_t L_17 = V_0;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_16, 1))%L_17));
		goto IL_0107;
	}

IL_008a:
	{
		int32_t L_18 = V_3;
		if ((!(((uint32_t)L_18) == ((uint32_t)(-1)))))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20;
		L_20 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_19, NULL);
		V_1 = L_20;
		goto IL_0107;
	}

IL_0098:
	{
		int32_t L_21 = V_3;
		int32_t L_22 = V_0;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_21, 1))%L_22));
		goto IL_0107;
	}

IL_00a0:
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_23 = ___0_audioItem;
		int32_t L_24 = V_3;
		int32_t L_25;
		L_25 = AudioControllerHelper__ChooseRandomSubitem_m0D9B629D781D99FE87172819DF0E3BA79A4D47FB(L_23, (bool)1, L_24, (bool)0, NULL);
		V_1 = L_25;
		goto IL_0107;
	}

IL_00ac:
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_26 = ___0_audioItem;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = AudioControllerHelper__ChooseRandomSubitem_m0D9B629D781D99FE87172819DF0E3BA79A4D47FB(L_26, (bool)0, L_27, (bool)0, NULL);
		V_1 = L_28;
		goto IL_0107;
	}

IL_00b8:
	{
		int32_t L_29 = V_0;
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_30 = (AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D*)(AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D*)SZArrayNew(AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D_il2cpp_TypeInfo_var, (uint32_t)L_29);
		V_2 = L_30;
		V_5 = 0;
		goto IL_00d7;
	}

IL_00c4:
	{
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_31 = V_2;
		int32_t L_32 = V_5;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_33 = ___0_audioItem;
		NullCheck(L_33);
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_34 = L_33->___subItems_21;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_37);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3*)L_37);
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00d7:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_0;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_00c4;
		}
	}
	{
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_41 = V_2;
		return L_41;
	}

IL_00de:
	{
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_42 = (AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D*)(AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D*)SZArrayNew(AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D_il2cpp_TypeInfo_var, (uint32_t)2);
		V_2 = L_42;
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_43 = V_2;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_44 = ___0_audioItem;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_45 = ___2_useExistingAudioObj;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_46;
		L_46 = AudioControllerHelper__ChooseSingleSubItem_mFE4768452DB7A6121EE6B50D4321FB181936AF8F(L_44, 2, L_45, NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_46);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3*)L_46);
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_47 = V_2;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_48 = ___0_audioItem;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_49 = ___2_useExistingAudioObj;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_50;
		L_50 = AudioControllerHelper__ChooseSingleSubItem_mFE4768452DB7A6121EE6B50D4321FB181936AF8F(L_48, 2, L_49, NULL);
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_50);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(1), (AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3*)L_50);
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_51 = V_2;
		return L_51;
	}

IL_00fd:
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_52 = ___0_audioItem;
		int32_t L_53 = V_3;
		int32_t L_54;
		L_54 = AudioControllerHelper__ChooseRandomSubitem_m0D9B629D781D99FE87172819DF0E3BA79A4D47FB(L_52, (bool)0, L_53, (bool)1, NULL);
		V_1 = L_54;
	}

IL_0107:
	{
		bool L_55 = V_4;
		if (!L_55)
		{
			goto IL_0114;
		}
	}
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_56 = ___2_useExistingAudioObj;
		int32_t L_57 = V_1;
		NullCheck(L_56);
		L_56->____lastChosenSubItemIndex_40 = L_57;
		goto IL_011b;
	}

IL_0114:
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_58 = ___0_audioItem;
		int32_t L_59 = V_1;
		NullCheck(L_58);
		L_58->____lastChosen_22 = L_59;
	}

IL_011b:
	{
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_60 = (AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D*)(AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D*)SZArrayNew(AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D_il2cpp_TypeInfo_var, (uint32_t)1);
		V_2 = L_60;
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_61 = V_2;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_62 = ___0_audioItem;
		NullCheck(L_62);
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_63 = L_62->___subItems_21;
		int32_t L_64 = V_1;
		NullCheck(L_63);
		int32_t L_65 = L_64;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, L_66);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(0), (AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3*)L_66);
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_67 = V_2;
		return L_67;
	}
}
// System.Int32 ClockStone.AudioControllerHelper::_ChooseRandomSubitem(ClockStone.AudioItem,System.Boolean,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioControllerHelper__ChooseRandomSubitem_m0D9B629D781D99FE87172819DF0E3BA79A4D47FB (AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* ___0_audioItem, bool ___1_allowSameElementTwiceInRow, int32_t ___2_lastChosen, bool ___3_switchOddsEvens, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_0 = ___0_audioItem;
		NullCheck(L_0);
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_1 = L_0->___subItems_21;
		NullCheck(L_1);
		V_0 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		V_1 = 0;
		V_3 = (0.0f);
		bool L_2 = ___1_allowSameElementTwiceInRow;
		if (L_2)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_3 = ___2_lastChosen;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_4 = ___0_audioItem;
		NullCheck(L_4);
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_5 = L_4->___subItems_21;
		int32_t L_6 = ___2_lastChosen;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		float L_9;
		L_9 = AudioSubItem_get__SummedProbability_mB306786B200874B880CA1521EA4BEAB4FB5503E2_inline(L_8, NULL);
		V_3 = L_9;
		int32_t L_10 = ___2_lastChosen;
		if ((((int32_t)L_10) < ((int32_t)1)))
		{
			goto IL_0044;
		}
	}
	{
		float L_11 = V_3;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_12 = ___0_audioItem;
		NullCheck(L_12);
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_13 = L_12->___subItems_21;
		int32_t L_14 = ___2_lastChosen;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		float L_17;
		L_17 = AudioSubItem_get__SummedProbability_mB306786B200874B880CA1521EA4BEAB4FB5503E2_inline(L_16, NULL);
		V_3 = ((float)il2cpp_codegen_subtract(L_11, L_17));
		goto IL_0044;
	}

IL_003e:
	{
		V_3 = (0.0f);
	}

IL_0044:
	{
		float L_18 = V_3;
		V_2 = ((float)il2cpp_codegen_subtract((1.0f), L_18));
		goto IL_0054;
	}

IL_004e:
	{
		V_2 = (1.0f);
	}

IL_0054:
	{
		float L_19 = V_2;
		float L_20;
		L_20 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), L_19, NULL);
		V_4 = L_20;
		V_5 = 0;
		goto IL_00c5;
	}

IL_0066:
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_21 = ___0_audioItem;
		NullCheck(L_21);
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_22 = L_21->___subItems_21;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		float L_26;
		L_26 = AudioSubItem_get__SummedProbability_mB306786B200874B880CA1521EA4BEAB4FB5503E2_inline(L_25, NULL);
		V_6 = L_26;
		bool L_27 = ___3_switchOddsEvens;
		if (!L_27)
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_28 = V_5;
		bool L_29;
		L_29 = AudioControllerHelper_isOdd_m58DEE9D121976BF65EE23FCE40F2047A9016F1FA(L_28, NULL);
		int32_t L_30 = ___2_lastChosen;
		bool L_31;
		L_31 = AudioControllerHelper_isOdd_m58DEE9D121976BF65EE23FCE40F2047A9016F1FA(L_30, NULL);
		if ((((int32_t)L_29) == ((int32_t)L_31)))
		{
			goto IL_00bf;
		}
	}

IL_0088:
	{
		bool L_32 = ___1_allowSameElementTwiceInRow;
		if (L_32)
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_33 = V_5;
		int32_t L_34 = ___2_lastChosen;
		if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
		{
			goto IL_00a9;
		}
	}
	{
		float L_35 = V_6;
		if ((!(((float)L_35) == ((float)(1.0f)))))
		{
			goto IL_00bf;
		}
	}
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_36 = ___0_audioItem;
		NullCheck(L_36);
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_37 = L_36->___subItems_21;
		int32_t L_38 = V_5;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_40);
		bool L_41 = L_40->___DisableOtherSubitems_2;
		if (!L_41)
		{
			goto IL_00bf;
		}
	}

IL_00a9:
	{
		int32_t L_42 = V_5;
		int32_t L_43 = ___2_lastChosen;
		if ((((int32_t)L_42) <= ((int32_t)L_43)))
		{
			goto IL_00b4;
		}
	}
	{
		float L_44 = V_6;
		float L_45 = V_3;
		V_6 = ((float)il2cpp_codegen_subtract(L_44, L_45));
	}

IL_00b4:
	{
		float L_46 = V_6;
		float L_47 = V_4;
		if ((!(((float)L_46) > ((float)L_47))))
		{
			goto IL_00bf;
		}
	}
	{
		int32_t L_48 = V_5;
		V_1 = L_48;
		goto IL_00cc;
	}

IL_00bf:
	{
		int32_t L_49 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_00c5:
	{
		int32_t L_50 = V_5;
		int32_t L_51 = V_0;
		if ((((int32_t)L_50) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_51, 1)))))
		{
			goto IL_0066;
		}
	}

IL_00cc:
	{
		int32_t L_52 = V_5;
		int32_t L_53 = V_0;
		if ((!(((uint32_t)L_52) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_53, 1))))))
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_54 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_54, 1));
	}

IL_00d7:
	{
		int32_t L_55 = V_1;
		return L_55;
	}
}
// System.Boolean ClockStone.AudioControllerHelper::isOdd(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioControllerHelper_isOdd_m58DEE9D121976BF65EE23FCE40F2047A9016F1FA (int32_t ___0_i, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_i;
		return (bool)((!(((uint32_t)((int32_t)(L_0%2))) <= ((uint32_t)0)))? 1 : 0);
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
// System.Double ClockStone.AudioFader::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AudioFader_get_time_mDA07910E26850056B54210CA6AC356C312C7E96C (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CtimeU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void ClockStone.AudioFader::set_time(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioFader_set_time_m7D1CD98970587468432FE8B7942D010E7BCD31B9 (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_value;
		__this->___U3CtimeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean ClockStone.AudioFader::get_isFadingOutComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioFader_get_isFadingOutComplete_m1FA263FA1D8C6C9A6ABB14DC2D7E6E616A25AE0B (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->____fadeOutStartTime_1;
		if ((!(((double)L_0) > ((double)(0.0)))))
		{
			goto IL_003a;
		}
	}
	{
		float L_1 = __this->____fadeOutTotalTime_0;
		if ((!(((float)L_1) >= ((float)(0.0f)))))
		{
			goto IL_0038;
		}
	}
	{
		double L_2;
		L_2 = AudioFader_get_time_mDA07910E26850056B54210CA6AC356C312C7E96C_inline(__this, NULL);
		double L_3 = __this->____fadeOutStartTime_1;
		float L_4 = __this->____fadeOutTotalTime_0;
		return (bool)((((int32_t)((!(((double)L_2) >= ((double)((double)il2cpp_codegen_add(L_3, ((double)L_4))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0038:
	{
		return (bool)0;
	}

IL_003a:
	{
		float L_5 = __this->____fadeOutTotalTime_0;
		if ((!(((float)L_5) >= ((float)(0.0f)))))
		{
			goto IL_005a;
		}
	}
	{
		double L_6;
		L_6 = AudioFader_get_time_mDA07910E26850056B54210CA6AC356C312C7E96C_inline(__this, NULL);
		float L_7 = __this->____fadeOutTotalTime_0;
		return (bool)((((int32_t)((!(((double)L_6) >= ((double)((double)L_7))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_005a:
	{
		return (bool)0;
	}
}
// System.Boolean ClockStone.AudioFader::get_isFadingOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioFader_get_isFadingOut_m821EB22C8C5F8AF438C9F3E592FBE44EDF41A901 (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->____fadeOutStartTime_1;
		if ((!(((double)L_0) > ((double)(0.0)))))
		{
			goto IL_0045;
		}
	}
	{
		float L_1 = __this->____fadeOutTotalTime_0;
		if ((!(((float)L_1) >= ((float)(0.0f)))))
		{
			goto IL_0043;
		}
	}
	{
		double L_2;
		L_2 = AudioFader_get_time_mDA07910E26850056B54210CA6AC356C312C7E96C_inline(__this, NULL);
		double L_3 = __this->____fadeOutStartTime_1;
		if ((!(((double)L_2) >= ((double)L_3))))
		{
			goto IL_0043;
		}
	}
	{
		double L_4;
		L_4 = AudioFader_get_time_mDA07910E26850056B54210CA6AC356C312C7E96C_inline(__this, NULL);
		double L_5 = __this->____fadeOutStartTime_1;
		float L_6 = __this->____fadeOutTotalTime_0;
		return (bool)((((double)L_4) < ((double)((double)il2cpp_codegen_add(L_5, ((double)L_6)))))? 1 : 0);
	}

IL_0043:
	{
		return (bool)0;
	}

IL_0045:
	{
		float L_7 = __this->____fadeOutTotalTime_0;
		if ((!(((float)L_7) >= ((float)(0.0f)))))
		{
			goto IL_0062;
		}
	}
	{
		double L_8;
		L_8 = AudioFader_get_time_mDA07910E26850056B54210CA6AC356C312C7E96C_inline(__this, NULL);
		float L_9 = __this->____fadeOutTotalTime_0;
		return (bool)((((double)L_8) < ((double)((double)L_9)))? 1 : 0);
	}

IL_0062:
	{
		return (bool)0;
	}
}
// System.Boolean ClockStone.AudioFader::get_isFadingOutOrScheduled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioFader_get_isFadingOutOrScheduled_m14E9FACDF7B233D122AE913220FFE3131600A74E (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____fadeOutTotalTime_0;
		return (bool)((((int32_t)((!(((float)L_0) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean ClockStone.AudioFader::get_isFadingIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioFader_get_isFadingIn_m592C515F1884EE099B6AE12FC5A5A3FAEBD93BA0 (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->____fadeInStartTime_3;
		if ((!(((double)L_0) > ((double)(0.0)))))
		{
			goto IL_0045;
		}
	}
	{
		float L_1 = __this->____fadeInTotalTime_2;
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_0043;
		}
	}
	{
		double L_2;
		L_2 = AudioFader_get_time_mDA07910E26850056B54210CA6AC356C312C7E96C_inline(__this, NULL);
		double L_3 = __this->____fadeInStartTime_3;
		if ((!(((double)L_2) >= ((double)L_3))))
		{
			goto IL_0043;
		}
	}
	{
		double L_4;
		L_4 = AudioFader_get_time_mDA07910E26850056B54210CA6AC356C312C7E96C_inline(__this, NULL);
		double L_5 = __this->____fadeInStartTime_3;
		float L_6 = __this->____fadeInTotalTime_2;
		return (bool)((((double)((double)il2cpp_codegen_subtract(L_4, L_5))) < ((double)((double)L_6)))? 1 : 0);
	}

IL_0043:
	{
		return (bool)0;
	}

IL_0045:
	{
		float L_7 = __this->____fadeInTotalTime_2;
		if ((!(((float)L_7) > ((float)(0.0f)))))
		{
			goto IL_0062;
		}
	}
	{
		double L_8;
		L_8 = AudioFader_get_time_mDA07910E26850056B54210CA6AC356C312C7E96C_inline(__this, NULL);
		float L_9 = __this->____fadeInTotalTime_2;
		return (bool)((((double)L_8) < ((double)((double)L_9)))? 1 : 0);
	}

IL_0062:
	{
		return (bool)0;
	}
}
// System.Void ClockStone.AudioFader::Set0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioFader_Set0_m5A26A1EDA73CA85CE8EFBA9937EE55532D19E584 (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* __this, const RuntimeMethod* method) 
{
	{
		AudioFader_set_time_m7D1CD98970587468432FE8B7942D010E7BCD31B9_inline(__this, (0.0), NULL);
		__this->____fadeOutTotalTime_0 = (-1.0f);
		__this->____fadeOutStartTime_1 = (-1.0);
		__this->____fadeInTotalTime_2 = (-1.0f);
		__this->____fadeInStartTime_3 = (-1.0);
		return;
	}
}
// System.Void ClockStone.AudioFader::FadeIn(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioFader_FadeIn_m2197603692326CDE1DA3CC6A26F3FAF899500AF3 (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* __this, float ___0_fadeInTime, bool ___1_stopCurrentFadeOut, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_fadeInTime;
		double L_1;
		L_1 = AudioFader_get_time_mDA07910E26850056B54210CA6AC356C312C7E96C_inline(__this, NULL);
		bool L_2 = ___1_stopCurrentFadeOut;
		AudioFader_FadeIn_m0F1F1D26EFA6220E12B0D4DF97511DAD190A62F7(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void ClockStone.AudioFader::FadeIn(System.Single,System.Double,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioFader_FadeIn_m0F1F1D26EFA6220E12B0D4DF97511DAD190A62F7 (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* __this, float ___0_fadeInTime, double ___1_startToFadeTime, bool ___2_stopCurrentFadeOut, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		bool L_0;
		L_0 = AudioFader_get_isFadingOutOrScheduled_m14E9FACDF7B233D122AE913220FFE3131600A74E(__this, NULL);
		bool L_1 = ___2_stopCurrentFadeOut;
		if (!((int32_t)((int32_t)L_0&(int32_t)L_1)))
		{
			goto IL_003f;
		}
	}
	{
		float L_2;
		L_2 = AudioFader__GetFadeOutValue_m923F8836AEC83EACA520922D1675C64146465BC5(__this, NULL);
		V_0 = L_2;
		__this->____fadeOutTotalTime_0 = (-1.0f);
		__this->____fadeOutStartTime_1 = (-1.0);
		float L_3 = ___0_fadeInTime;
		__this->____fadeInTotalTime_2 = L_3;
		double L_4 = ___1_startToFadeTime;
		float L_5 = ___0_fadeInTime;
		float L_6 = V_0;
		__this->____fadeInStartTime_3 = ((double)il2cpp_codegen_subtract(L_4, ((double)((float)il2cpp_codegen_multiply(L_5, L_6)))));
		return;
	}

IL_003f:
	{
		float L_7 = ___0_fadeInTime;
		__this->____fadeInTotalTime_2 = L_7;
		double L_8 = ___1_startToFadeTime;
		__this->____fadeInStartTime_3 = L_8;
		return;
	}
}
// System.Void ClockStone.AudioFader::FadeOut(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioFader_FadeOut_m1CB7C336BB8A8527C17E45AE883E4EB93C4355FF (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* __this, float ___0_fadeOutLength, float ___1_startToFadeTime, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	{
		bool L_0;
		L_0 = AudioFader_get_isFadingOutOrScheduled_m14E9FACDF7B233D122AE913220FFE3131600A74E(__this, NULL);
		if (!L_0)
		{
			goto IL_0076;
		}
	}
	{
		double L_1;
		L_1 = AudioFader_get_time_mDA07910E26850056B54210CA6AC356C312C7E96C_inline(__this, NULL);
		float L_2 = ___1_startToFadeTime;
		float L_3 = ___0_fadeOutLength;
		V_0 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(L_1, ((double)L_2))), ((double)L_3)));
		double L_4 = __this->____fadeOutStartTime_1;
		float L_5 = __this->____fadeOutTotalTime_0;
		V_1 = ((double)il2cpp_codegen_add(L_4, ((double)L_5)));
		double L_6 = V_1;
		double L_7 = V_0;
		if ((!(((double)L_6) < ((double)L_7))))
		{
			goto IL_0029;
		}
	}
	{
		return;
	}

IL_0029:
	{
		double L_8;
		L_8 = AudioFader_get_time_mDA07910E26850056B54210CA6AC356C312C7E96C_inline(__this, NULL);
		double L_9 = __this->____fadeOutStartTime_1;
		V_2 = ((double)il2cpp_codegen_subtract(L_8, L_9));
		float L_10 = ___1_startToFadeTime;
		float L_11 = ___0_fadeOutLength;
		V_3 = ((double)((float)il2cpp_codegen_add(L_10, L_11)));
		double L_12 = V_1;
		double L_13;
		L_13 = AudioFader_get_time_mDA07910E26850056B54210CA6AC356C312C7E96C_inline(__this, NULL);
		V_4 = ((double)il2cpp_codegen_subtract(L_12, L_13));
		double L_14 = V_4;
		if ((((double)L_14) == ((double)(0.0))))
		{
			goto IL_008c;
		}
	}
	{
		double L_15 = V_2;
		double L_16 = V_3;
		double L_17 = V_4;
		V_5 = ((double)(((double)il2cpp_codegen_multiply(L_15, L_16))/L_17));
		double L_18;
		L_18 = AudioFader_get_time_mDA07910E26850056B54210CA6AC356C312C7E96C_inline(__this, NULL);
		double L_19 = V_5;
		__this->____fadeOutStartTime_1 = ((double)il2cpp_codegen_subtract(L_18, L_19));
		double L_20 = V_3;
		double L_21 = V_5;
		__this->____fadeOutTotalTime_0 = ((float)((double)il2cpp_codegen_add(L_20, L_21)));
		return;
	}

IL_0076:
	{
		float L_22 = ___0_fadeOutLength;
		__this->____fadeOutTotalTime_0 = L_22;
		double L_23;
		L_23 = AudioFader_get_time_mDA07910E26850056B54210CA6AC356C312C7E96C_inline(__this, NULL);
		float L_24 = ___1_startToFadeTime;
		__this->____fadeOutStartTime_1 = ((double)il2cpp_codegen_add(L_23, ((double)L_24)));
	}

IL_008c:
	{
		return;
	}
}
// System.Single ClockStone.AudioFader::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioFader_Get_mA8D45495834295348CF6BCADE1379745D748C70C (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		float L_0;
		L_0 = AudioFader_Get_m46460E26510C10AE7FF6592844B8793220845795(__this, (&V_0), NULL);
		return L_0;
	}
}
// System.Single ClockStone.AudioFader::Get(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioFader_Get_m46460E26510C10AE7FF6592844B8793220845795 (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* __this, bool* ___0_finishedFadeOut, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		V_0 = (1.0f);
		bool* L_0 = ___0_finishedFadeOut;
		*((int8_t*)L_0) = (int8_t)0;
		bool L_1;
		L_1 = AudioFader_get_isFadingOutOrScheduled_m14E9FACDF7B233D122AE913220FFE3131600A74E(__this, NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		float L_2 = V_0;
		float L_3;
		L_3 = AudioFader__GetFadeOutValue_m923F8836AEC83EACA520922D1675C64146465BC5(__this, NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_2, L_3));
		float L_4 = V_0;
		if ((!(((float)L_4) == ((float)(0.0f)))))
		{
			goto IL_002b;
		}
	}
	{
		bool* L_5 = ___0_finishedFadeOut;
		*((int8_t*)L_5) = (int8_t)1;
		return (0.0f);
	}

IL_002b:
	{
		bool L_6;
		L_6 = AudioFader_get_isFadingIn_m592C515F1884EE099B6AE12FC5A5A3FAEBD93BA0(__this, NULL);
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		float L_7 = V_0;
		float L_8;
		L_8 = AudioFader__GetFadeInValue_m3882B27DE5BFC67DC8ED1E0E1C7B681429FD874D(__this, NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_7, L_8));
	}

IL_003c:
	{
		float L_9 = V_0;
		return L_9;
	}
}
// System.Single ClockStone.AudioFader::_GetFadeOutValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioFader__GetFadeOutValue_m923F8836AEC83EACA520922D1675C64146465BC5 (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* __this, const RuntimeMethod* method) 
{
	{
		double L_0;
		L_0 = AudioFader_get_time_mDA07910E26850056B54210CA6AC356C312C7E96C_inline(__this, NULL);
		double L_1 = __this->____fadeOutStartTime_1;
		float L_2 = __this->____fadeOutTotalTime_0;
		float L_3;
		L_3 = AudioFader__GetFadeValue_m3B5FDD730A2759D6F194099C913C7BA13FC4BF22(__this, ((float)((double)il2cpp_codegen_subtract(L_0, L_1))), L_2, NULL);
		return ((float)il2cpp_codegen_subtract((1.0f), L_3));
	}
}
// System.Single ClockStone.AudioFader::_GetFadeInValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioFader__GetFadeInValue_m3882B27DE5BFC67DC8ED1E0E1C7B681429FD874D (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* __this, const RuntimeMethod* method) 
{
	{
		double L_0;
		L_0 = AudioFader_get_time_mDA07910E26850056B54210CA6AC356C312C7E96C_inline(__this, NULL);
		double L_1 = __this->____fadeInStartTime_3;
		float L_2 = __this->____fadeInTotalTime_2;
		float L_3;
		L_3 = AudioFader__GetFadeValue_m3B5FDD730A2759D6F194099C913C7BA13FC4BF22(__this, ((float)((double)il2cpp_codegen_subtract(L_0, L_1))), L_2, NULL);
		return L_3;
	}
}
// System.Single ClockStone.AudioFader::_GetFadeValue(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioFader__GetFadeValue_m3B5FDD730A2759D6F194099C913C7BA13FC4BF22 (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* __this, float ___0_t, float ___1_dt, const RuntimeMethod* method) 
{
	{
		float L_0 = ___1_dt;
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_001c;
		}
	}
	{
		float L_1 = ___0_t;
		if ((((float)L_1) > ((float)(0.0f))))
		{
			goto IL_0016;
		}
	}
	{
		return (0.0f);
	}

IL_0016:
	{
		return (1.0f);
	}

IL_001c:
	{
		float L_2 = ___0_t;
		float L_3 = ___1_dt;
		float L_4;
		L_4 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_2/L_3)), (0.0f), (1.0f), NULL);
		return L_4;
	}
}
// System.Void ClockStone.AudioFader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioFader__ctor_m69B587C0B8EB180089B21B01590CF14E9C153344 (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* __this, const RuntimeMethod* method) 
{
	{
		__this->____fadeOutTotalTime_0 = (-1.0f);
		__this->____fadeOutStartTime_1 = (-1.0);
		__this->____fadeInTotalTime_2 = (-1.0f);
		__this->____fadeInStartTime_3 = (-1.0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Single ClockStone.AudioCategory::get_Volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioCategory_get_Volume_mF87941E6A9F8725B2DAA2780070B9E279E1DCF24 (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____volume_7;
		return L_0;
	}
}
// System.Void ClockStone.AudioCategory::set_Volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioCategory_set_Volume_m36CFDDEFD3C060651851B76A8598680D051656F0 (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		__this->____volume_7 = L_0;
		AudioCategory__ApplyVolumeChange_mB1756A081EDB8F559397DFE964841A2782F8D116(__this, NULL);
		return;
	}
}
// System.Single ClockStone.AudioCategory::get_VolumeTotal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioCategory_get_VolumeTotal_m972D0490ECC2ED900D325E146ED55107082824C7 (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		AudioCategory__UpdateFadeTime_m391C0F335619DB2BFA33605848343EFF63F55DE5(__this, NULL);
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* L_0;
		L_0 = AudioCategory_get_audioFader_m1CE6D11197D3B25E8E99C55EC4F069C7E22CCAC0(__this, NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = AudioFader_Get_mA8D45495834295348CF6BCADE1379745D748C70C(L_0, NULL);
		V_0 = L_1;
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_2;
		L_2 = AudioCategory_get_parentCategory_m3A969B6B7C1D72529B37E06D779503A2A7C8F142(__this, NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_3;
		L_3 = AudioCategory_get_parentCategory_m3A969B6B7C1D72529B37E06D779503A2A7C8F142(__this, NULL);
		NullCheck(L_3);
		float L_4;
		L_4 = AudioCategory_get_VolumeTotal_m972D0490ECC2ED900D325E146ED55107082824C7(L_3, NULL);
		float L_5 = __this->____volume_7;
		float L_6 = V_0;
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_4, L_5)), L_6));
	}

IL_002f:
	{
		float L_7 = __this->____volume_7;
		float L_8 = V_0;
		return ((float)il2cpp_codegen_multiply(L_7, L_8));
	}
}
// System.Void ClockStone.AudioCategory::set_parentCategory(ClockStone.AudioCategory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioCategory_set_parentCategory_m774785E3B4127FA49270415CEC09B1BEC9332F43 (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* ___0_value, const RuntimeMethod* method) 
{
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_0 = ___0_value;
		__this->____parentCategory_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____parentCategory_1), (void*)L_0);
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_1 = ___0_value;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_2 = __this->____parentCategory_1;
		NullCheck(L_2);
		String_t* L_3 = L_2->___Name_0;
		__this->____parentCategoryName_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____parentCategoryName_3), (void*)L_3);
		return;
	}

IL_001c:
	{
		__this->____parentCategoryName_3 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____parentCategoryName_3), (void*)(String_t*)NULL);
		return;
	}
}
// ClockStone.AudioCategory ClockStone.AudioCategory::get_parentCategory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* AudioCategory_get_parentCategory_m3A969B6B7C1D72529B37E06D779503A2A7C8F142 (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0FA15B2D776869DDCA620AD25DD977A99CF9319);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->____parentCategoryName_3;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA*)NULL;
	}

IL_000f:
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_2 = __this->____parentCategory_1;
		if (L_2)
		{
			goto IL_0048;
		}
	}
	{
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_3;
		L_3 = AudioCategory_get_audioController_m1675648A0516A6A61319734FD1ED7ACA5854AD14_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_5;
		L_5 = AudioCategory_get_audioController_m1675648A0516A6A61319734FD1ED7ACA5854AD14_inline(__this, NULL);
		String_t* L_6 = __this->____parentCategoryName_3;
		NullCheck(L_5);
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_7;
		L_7 = AudioController__GetCategory_mCADD0D8AE46FAACDD6E5116396F8836ECAFD562A(L_5, L_6, NULL);
		__this->____parentCategory_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____parentCategory_1), (void*)L_7);
		goto IL_0048;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralF0FA15B2D776869DDCA620AD25DD977A99CF9319, NULL);
	}

IL_0048:
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_8 = __this->____parentCategory_1;
		return L_8;
	}
}
// ClockStone.AudioFader ClockStone.AudioCategory::get_audioFader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* AudioCategory_get_audioFader_m1CE6D11197D3B25E8E99C55EC4F069C7E22CCAC0 (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* L_0 = __this->____audioFader_2;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* L_1 = (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8*)il2cpp_codegen_object_new(AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AudioFader__ctor_m69B587C0B8EB180089B21B01590CF14E9C153344(L_1, NULL);
		__this->____audioFader_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____audioFader_2), (void*)L_1);
	}

IL_0013:
	{
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* L_2 = __this->____audioFader_2;
		return L_2;
	}
}
// AudioController ClockStone.AudioCategory::get_audioController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* AudioCategory_get_audioController_m1675648A0516A6A61319734FD1ED7ACA5854AD14 (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, const RuntimeMethod* method) 
{
	{
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0 = __this->___U3CaudioControllerU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void ClockStone.AudioCategory::set_audioController(AudioController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioCategory_set_audioController_m5276D4CA40A5C4D342C9E3928EBE8948EC0218D7 (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* ___0_value, const RuntimeMethod* method) 
{
	{
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0 = ___0_value;
		__this->___U3CaudioControllerU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CaudioControllerU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void ClockStone.AudioCategory::.ctor(AudioController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioCategory__ctor_mB5BC03081781FBF14B5EE1F9A0B3C15750F8C858 (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* ___0_audioController, const RuntimeMethod* method) 
{
	{
		__this->____volume_7 = (1.0f);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0 = ___0_audioController;
		AudioCategory_set_audioController_m5276D4CA40A5C4D342C9E3928EBE8948EC0218D7_inline(__this, L_0, NULL);
		return;
	}
}
// UnityEngine.GameObject ClockStone.AudioCategory::GetAudioObjectPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AudioCategory_GetAudioObjectPrefab_m76914CC50BB6D19D9202F13F73F5570129D48A57 (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___AudioObjectPrefab_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___AudioObjectPrefab_5;
		return L_2;
	}

IL_0015:
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_3;
		L_3 = AudioCategory_get_parentCategory_m3A969B6B7C1D72529B37E06D779503A2A7C8F142(__this, NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_4;
		L_4 = AudioCategory_get_parentCategory_m3A969B6B7C1D72529B37E06D779503A2A7C8F142(__this, NULL);
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = AudioCategory_GetAudioObjectPrefab_m76914CC50BB6D19D9202F13F73F5570129D48A57(L_4, NULL);
		return L_5;
	}

IL_0029:
	{
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_6;
		L_6 = AudioCategory_get_audioController_m1675648A0516A6A61319734FD1ED7ACA5854AD14_inline(__this, NULL);
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___AudioObjectPrefab_5;
		return L_7;
	}
}
// UnityEngine.Audio.AudioMixerGroup ClockStone.AudioCategory::GetAudioMixerGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* AudioCategory_GetAudioMixerGroup_m63DCE1384A774C6800E2C0F5B9679E421A1FFF3E (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* L_0 = __this->___audioMixerGroup_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* L_2 = __this->___audioMixerGroup_8;
		return L_2;
	}

IL_0015:
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_3;
		L_3 = AudioCategory_get_parentCategory_m3A969B6B7C1D72529B37E06D779503A2A7C8F142(__this, NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_4;
		L_4 = AudioCategory_get_parentCategory_m3A969B6B7C1D72529B37E06D779503A2A7C8F142(__this, NULL);
		NullCheck(L_4);
		AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* L_5;
		L_5 = AudioCategory_GetAudioMixerGroup_m63DCE1384A774C6800E2C0F5B9679E421A1FFF3E(L_4, NULL);
		return L_5;
	}

IL_0029:
	{
		return (AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311*)NULL;
	}
}
// System.Void ClockStone.AudioCategory::_AnalyseAudioItems(System.Collections.Generic.Dictionary`2<System.String,ClockStone.AudioItem>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioCategory__AnalyseAudioItems_m1CC5231E6EF590A41E1CF75B8C4A1E4C91A4BB11 (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, Dictionary_2_t57C406847BE968A40E40481F27C9CE8C715AC3FB* ___0_audioItemsDict, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB05DC9CA17C99E15CD04AE6D6E2080476B2983E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mF6EF8E8D067A73EF11D321ACF2619B1195B25EE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CF8C3940FAA69ADFEB2EAD0771C018E67A32FAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD13B9E863EC134A16B1CF87E9B186616C8A4F621);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF339D65753F476DE3FBB462A5525CC8B3CF219EB);
		s_Il2CppMethodInitialized = true;
	}
	AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9* V_0 = NULL;
	int32_t V_1 = 0;
	AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* V_2 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_5;
	memset((&V_5), 0, sizeof(V_5));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	{
		AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9* L_0 = __this->___AudioItems_6;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9* L_1 = __this->___AudioItems_6;
		V_0 = L_1;
		V_1 = 0;
		goto IL_00fa;
	}

IL_0017:
	{
		AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_6 = V_2;
		if (!L_6)
		{
			goto IL_00f6;
		}
	}
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_7 = V_2;
		NullCheck(L_7);
		AudioItem__Initialize_m04E995E35149164B274394692B88557A2CA95603(L_7, __this, NULL);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_8), ((int32_t)1193051), /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		V_4 = L_8;
		bool L_9;
		L_9 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_4), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (L_9)
		{
			goto IL_0049;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_10 = V_5;
		G_B7_0 = L_10;
		goto IL_0058;
	}

IL_0049:
	{
		int32_t L_11;
		L_11 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_4), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_12), ((int32_t)(L_11&((int32_t)15))), /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		G_B7_0 = L_12;
	}

IL_0058:
	{
		V_3 = G_B7_0;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_13 = V_3;
		V_4 = L_13;
		bool L_14;
		L_14 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_4), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (L_14)
		{
			goto IL_0071;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_15 = V_5;
		G_B10_0 = L_15;
		goto IL_007f;
	}

IL_0071:
	{
		int32_t L_16;
		L_16 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_4), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_17), ((int32_t)il2cpp_codegen_add(L_16, 1)), /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		G_B10_0 = L_17;
	}

IL_007f:
	{
		V_3 = G_B10_0;
		Dictionary_2_t57C406847BE968A40E40481F27C9CE8C715AC3FB* L_18 = ___0_audioItemsDict;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Dictionary_2_get_Count_mF6EF8E8D067A73EF11D321ACF2619B1195B25EE7(L_18, Dictionary_2_get_Count_mF6EF8E8D067A73EF11D321ACF2619B1195B25EE7_RuntimeMethod_var);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_20 = V_3;
		V_4 = L_20;
		int32_t L_21;
		L_21 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_4), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		bool L_22;
		L_22 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_4), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (!((int32_t)(((((int32_t)L_19) > ((int32_t)L_21))? 1 : 0)&(int32_t)L_22)))
		{
			goto IL_00c1;
		}
	}
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_23 = V_3;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_24 = L_23;
		RuntimeObject* L_25 = Box(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_il2cpp_TypeInfo_var, &L_24);
		String_t* L_26;
		L_26 = String_Concat_m9DF47FC6E1F8341012CA3FF02993D372AA7A96C9(_stringLiteralD13B9E863EC134A16B1CF87E9B186616C8A4F621, L_25, _stringLiteral4CF8C3940FAA69ADFEB2EAD0771C018E67A32FAA, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_26, NULL);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralF339D65753F476DE3FBB462A5525CC8B3CF219EB, NULL);
		return;
	}

IL_00c1:
	{
		Dictionary_2_t57C406847BE968A40E40481F27C9CE8C715AC3FB* L_27 = ___0_audioItemsDict;
		if (!L_27)
		{
			goto IL_00f6;
		}
	}
	try
	{// begin try (depth: 1)
		Dictionary_2_t57C406847BE968A40E40481F27C9CE8C715AC3FB* L_28 = ___0_audioItemsDict;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_29 = V_2;
		NullCheck(L_29);
		String_t* L_30 = L_29->___Name_0;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_31 = V_2;
		NullCheck(L_28);
		Dictionary_2_Add_mB05DC9CA17C99E15CD04AE6D6E2080476B2983E1(L_28, L_30, L_31, Dictionary_2_Add_mB05DC9CA17C99E15CD04AE6D6E2080476B2983E1_RuntimeMethod_var);
		goto IL_00f6;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d3;
		}
		throw e;
	}

CATCH_00d3:
	{// begin catch(System.ArgumentException)
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_32 = V_2;
		NullCheck(L_32);
		String_t* L_33 = L_32->___Name_0;
		String_t* L_34;
		L_34 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA65DB9BCBEB0163A3775F09DA7A8793D6509AB0C)), L_33, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_35;
		L_35 = AudioCategory_get_audioController_m1675648A0516A6A61319734FD1ED7ACA5854AD14_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(L_34, L_35, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00f6;
	}// end catch (depth: 1)

IL_00f6:
	{
		int32_t L_36 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00fa:
	{
		int32_t L_37 = V_1;
		AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9* L_38 = V_0;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		return;
	}
}
// System.Int32 ClockStone.AudioCategory::_GetIndexOf(ClockStone.AudioItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioCategory__GetIndexOf_mE03693754E027447A26055245A3B5863FF35E1F4 (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* ___0_audioItem, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9* L_0 = __this->___AudioItems_6;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (-1);
	}

IL_000a:
	{
		V_0 = 0;
		goto IL_001f;
	}

IL_000e:
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_1 = ___0_audioItem;
		AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9* L_2 = __this->___AudioItems_6;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if ((!(((RuntimeObject*)(AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0*)L_1) == ((RuntimeObject*)(AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0*)L_5))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_001b:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_001f:
	{
		int32_t L_8 = V_0;
		AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9* L_9 = __this->___AudioItems_6;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_000e;
		}
	}
	{
		return (-1);
	}
}
// System.Void ClockStone.AudioCategory::_ApplyVolumeChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioCategory__ApplyVolumeChange_mB1756A081EDB8F559397DFE964841A2782F8D116 (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* V_0 = NULL;
	int32_t V_1 = 0;
	AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_0;
		L_0 = AudioController_GetPlayingAudioObjects_m9E3B6784F0F27B1E5B27AD002EA68330F0A69103((bool)0, NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_002c;
	}

IL_000b:
	{
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_3;
		L_3 = List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639(L_1, L_2, List_1_get_Item_mDBB5A18551EDCB56ABCBE20EBC70C72D857F9639_RuntimeMethod_var);
		V_2 = L_3;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_4 = V_2;
		NullCheck(L_4);
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_5;
		L_5 = AudioObject_get_category_m1B694D47010EA8BEDF53B11C36F460F99CE67AAD_inline(L_4, NULL);
		bool L_6;
		L_6 = AudioCategory__IsCategoryParentOf_mF97260CD25EB115C5A282B582F9A0C0F54307C4C(__this, L_5, __this, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_7 = V_2;
		NullCheck(L_7);
		AudioObject__ApplyVolumeBoth_mC4D88C6291192E9269EFAB4BE5DDDFAB2EADA48C(L_7, NULL);
	}

IL_0028:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002c:
	{
		int32_t L_9 = V_1;
		List_1_t689DA20220FA79B533C62A1C3A6E3148216C1CB9* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_inline(L_10, List_1_get_Count_m8D18500D7A42F26AA4546146B0D404E5D5D3FAF6_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}
}
// System.Boolean ClockStone.AudioCategory::_IsCategoryParentOf(ClockStone.AudioCategory,ClockStone.AudioCategory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioCategory__IsCategoryParentOf_mF97260CD25EB115C5A282B582F9A0C0F54307C4C (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* ___0_toTest, AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* ___1_parent, const RuntimeMethod* method) 
{
	AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* V_0 = NULL;
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_0 = ___0_toTest;
		V_0 = L_0;
		goto IL_0011;
	}

IL_0004:
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_1 = V_0;
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_2 = ___1_parent;
		if ((!(((RuntimeObject*)(AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA*)L_1) == ((RuntimeObject*)(AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA*)L_2))))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_3 = V_0;
		NullCheck(L_3);
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_4;
		L_4 = AudioCategory_get_parentCategory_m3A969B6B7C1D72529B37E06D779503A2A7C8F142(L_3, NULL);
		V_0 = L_4;
	}

IL_0011:
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_5 = V_0;
		if (L_5)
		{
			goto IL_0004;
		}
	}
	{
		return (bool)0;
	}
}
// System.Void ClockStone.AudioCategory::UnloadAllAudioClips()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioCategory_UnloadAllAudioClips_m055FD38B2D98BCC66716342154FCF762EEFBF4F1 (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0015;
	}

IL_0004:
	{
		AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9* L_0 = __this->___AudioItems_6;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		AudioItem_UnloadAudioClip_m078B32DB312D693F2038E7D1410BE8AFA091D29D(L_3, NULL);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0015:
	{
		int32_t L_5 = V_0;
		AudioItemU5BU5D_t6BDB49A3ED4F2C7F8B8C4D6EE23059A3E6F4A8D9* L_6 = __this->___AudioItems_6;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void ClockStone.AudioCategory::FadeIn(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioCategory_FadeIn_mB74842630735404302D0C4B5F36DED49A1D2DABA (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, float ___0_fadeInTime, bool ___1_stopCurrentFadeOut, const RuntimeMethod* method) 
{
	{
		AudioCategory__UpdateFadeTime_m391C0F335619DB2BFA33605848343EFF63F55DE5(__this, NULL);
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* L_0;
		L_0 = AudioCategory_get_audioFader_m1CE6D11197D3B25E8E99C55EC4F069C7E22CCAC0(__this, NULL);
		float L_1 = ___0_fadeInTime;
		bool L_2 = ___1_stopCurrentFadeOut;
		NullCheck(L_0);
		AudioFader_FadeIn_m2197603692326CDE1DA3CC6A26F3FAF899500AF3(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void ClockStone.AudioCategory::FadeOut(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioCategory_FadeOut_mB642FE78F3D86D44146F26C0F95BF9873595DC8E (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, float ___0_fadeOutLength, float ___1_startToFadeTime, const RuntimeMethod* method) 
{
	{
		AudioCategory__UpdateFadeTime_m391C0F335619DB2BFA33605848343EFF63F55DE5(__this, NULL);
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* L_0;
		L_0 = AudioCategory_get_audioFader_m1CE6D11197D3B25E8E99C55EC4F069C7E22CCAC0(__this, NULL);
		float L_1 = ___0_fadeOutLength;
		float L_2 = ___1_startToFadeTime;
		NullCheck(L_0);
		AudioFader_FadeOut_m1CB7C336BB8A8527C17E45AE883E4EB93C4355FF(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void ClockStone.AudioCategory::_UpdateFadeTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioCategory__UpdateFadeTime_m391C0F335619DB2BFA33605848343EFF63F55DE5 (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* L_0;
		L_0 = AudioCategory_get_audioFader_m1CE6D11197D3B25E8E99C55EC4F069C7E22CCAC0(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = AudioController_get_systemTime_mB3A112C83ABEB814B3F4377F12D1385E886A9A1F_inline(NULL);
		NullCheck(L_0);
		AudioFader_set_time_m7D1CD98970587468432FE8B7942D010E7BCD31B9_inline(L_0, L_1, NULL);
		return;
	}
}
// System.Boolean ClockStone.AudioCategory::get_isFadingIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioCategory_get_isFadingIn_mD91F875CCECBAC6D06026F09A599675857A89FE4 (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, const RuntimeMethod* method) 
{
	{
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* L_0;
		L_0 = AudioCategory_get_audioFader_m1CE6D11197D3B25E8E99C55EC4F069C7E22CCAC0(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = AudioFader_get_isFadingIn_m592C515F1884EE099B6AE12FC5A5A3FAEBD93BA0(L_0, NULL);
		return L_1;
	}
}
// System.Boolean ClockStone.AudioCategory::get_isFadingOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioCategory_get_isFadingOut_mE53F51DBD5D14ACF548284F0EFC1113D1C688B6C (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, const RuntimeMethod* method) 
{
	{
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* L_0;
		L_0 = AudioCategory_get_audioFader_m1CE6D11197D3B25E8E99C55EC4F069C7E22CCAC0(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = AudioFader_get_isFadingOut_m821EB22C8C5F8AF438C9F3E592FBE44EDF41A901(L_0, NULL);
		return L_1;
	}
}
// System.Boolean ClockStone.AudioCategory::get_isFadeOutComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioCategory_get_isFadeOutComplete_m7AB8E9FC73872DD3391662A0090F8E14A02608A8 (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, const RuntimeMethod* method) 
{
	{
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* L_0;
		L_0 = AudioCategory_get_audioFader_m1CE6D11197D3B25E8E99C55EC4F069C7E22CCAC0(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = AudioFader_get_isFadingOutComplete_m1FA263FA1D8C6C9A6ABB14DC2D7E6E616A25AE0B(L_0, NULL);
		return L_1;
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
// System.Void ClockStone.AudioItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioItem__ctor_m82BCD9D53B3781595FC878E08CD96B1223E4D986 (AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* __this, const RuntimeMethod* method) 
{
	{
		__this->___DestroyOnLoad_7 = (bool)1;
		__this->___Volume_8 = (1.0f);
		__this->___SubItemPickMode_9 = 2;
		__this->___MinTimeBetweenPlayCalls_10 = (0.100000001f);
		__this->___audioSource_MinDistance_18 = (1.0f);
		__this->___audioSource_MaxDistance_19 = (500.0f);
		__this->____lastChosen_22 = (-1);
		__this->____lastPlayedTime_23 = (-1.0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ClockStone.AudioItem::.ctor(ClockStone.AudioItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioItem__ctor_m5A8173B79997885BF2E214B94A3D247169F1DA8D (AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* __this, AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* ___0_orig, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayHelper_AddArrayElement_TisAudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3_m59E7FA0BC41ABA9134EDC9A9BD9B31C76CC82AC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		__this->___DestroyOnLoad_7 = (bool)1;
		__this->___Volume_8 = (1.0f);
		__this->___SubItemPickMode_9 = 2;
		__this->___MinTimeBetweenPlayCalls_10 = (0.100000001f);
		__this->___audioSource_MinDistance_18 = (1.0f);
		__this->___audioSource_MaxDistance_19 = (500.0f);
		__this->____lastChosen_22 = (-1);
		__this->____lastPlayedTime_23 = (-1.0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_0 = ___0_orig;
		NullCheck(L_0);
		String_t* L_1 = L_0->___Name_0;
		__this->___Name_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Name_0), (void*)L_1);
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_2 = ___0_orig;
		NullCheck(L_2);
		int32_t L_3 = L_2->___Loop_1;
		__this->___Loop_1 = L_3;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_4 = ___0_orig;
		NullCheck(L_4);
		int32_t L_5 = L_4->___loopSequenceCount_2;
		__this->___loopSequenceCount_2 = L_5;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_6 = ___0_orig;
		NullCheck(L_6);
		float L_7 = L_6->___loopSequenceOverlap_3;
		__this->___loopSequenceOverlap_3 = L_7;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_8 = ___0_orig;
		NullCheck(L_8);
		float L_9 = L_8->___loopSequenceRandomDelay_4;
		__this->___loopSequenceRandomDelay_4 = L_9;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_10 = ___0_orig;
		NullCheck(L_10);
		float L_11 = L_10->___loopSequenceRandomPitch_5;
		__this->___loopSequenceRandomPitch_5 = L_11;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_12 = ___0_orig;
		NullCheck(L_12);
		float L_13 = L_12->___loopSequenceRandomVolume_6;
		__this->___loopSequenceRandomVolume_6 = L_13;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_14 = ___0_orig;
		NullCheck(L_14);
		bool L_15 = L_14->___DestroyOnLoad_7;
		__this->___DestroyOnLoad_7 = L_15;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_16 = ___0_orig;
		NullCheck(L_16);
		float L_17 = L_16->___Volume_8;
		__this->___Volume_8 = L_17;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_18 = ___0_orig;
		NullCheck(L_18);
		int32_t L_19 = L_18->___SubItemPickMode_9;
		__this->___SubItemPickMode_9 = L_19;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_20 = ___0_orig;
		NullCheck(L_20);
		float L_21 = L_20->___MinTimeBetweenPlayCalls_10;
		__this->___MinTimeBetweenPlayCalls_10 = L_21;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_22 = ___0_orig;
		NullCheck(L_22);
		int32_t L_23 = L_22->___MaxInstanceCount_11;
		__this->___MaxInstanceCount_11 = L_23;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_24 = ___0_orig;
		NullCheck(L_24);
		float L_25 = L_24->___Delay_12;
		__this->___Delay_12 = L_25;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_26 = ___0_orig;
		NullCheck(L_26);
		float L_27 = L_26->___PitchShift_13;
		__this->___PitchShift_13 = L_27;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_28 = ___0_orig;
		NullCheck(L_28);
		float L_29 = L_28->___RandomVolume_14;
		__this->___RandomVolume_14 = L_29;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_30 = ___0_orig;
		NullCheck(L_30);
		float L_31 = L_30->___RandomPitch_15;
		__this->___RandomPitch_15 = L_31;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_32 = ___0_orig;
		NullCheck(L_32);
		float L_33 = L_32->___RandomDelay_16;
		__this->___RandomDelay_16 = L_33;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_34 = ___0_orig;
		NullCheck(L_34);
		bool L_35 = L_34->___overrideAudioSourceSettings_17;
		__this->___overrideAudioSourceSettings_17 = L_35;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_36 = ___0_orig;
		NullCheck(L_36);
		float L_37 = L_36->___audioSource_MinDistance_18;
		__this->___audioSource_MinDistance_18 = L_37;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_38 = ___0_orig;
		NullCheck(L_38);
		float L_39 = L_38->___audioSource_MaxDistance_19;
		__this->___audioSource_MaxDistance_19 = L_39;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_40 = ___0_orig;
		NullCheck(L_40);
		float L_41 = L_40->___spatialBlend_20;
		__this->___spatialBlend_20 = L_41;
		V_0 = 0;
		goto IL_0174;
	}

IL_0156:
	{
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D** L_42 = (&__this->___subItems_21);
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_43 = ___0_orig;
		NullCheck(L_43);
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_44 = L_43->___subItems_21;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_48 = (AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3*)il2cpp_codegen_object_new(AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		AudioSubItem__ctor_m4245627EC9307D8BF168F50D36F8753884B81A2E(L_48, L_47, __this, NULL);
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_49;
		L_49 = ArrayHelper_AddArrayElement_TisAudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3_m59E7FA0BC41ABA9134EDC9A9BD9B31C76CC82AC5(L_42, L_48, ArrayHelper_AddArrayElement_TisAudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3_m59E7FA0BC41ABA9134EDC9A9BD9B31C76CC82AC5_RuntimeMethod_var);
		int32_t L_50 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_0174:
	{
		int32_t L_51 = V_0;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_52 = ___0_orig;
		NullCheck(L_52);
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_53 = L_52->___subItems_21;
		NullCheck(L_53);
		if ((((int32_t)L_51) < ((int32_t)((int32_t)(((RuntimeArray*)L_53)->max_length)))))
		{
			goto IL_0156;
		}
	}
	{
		return;
	}
}
// System.Void ClockStone.AudioItem::set_category(ClockStone.AudioCategory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioItem_set_category_mF946B97E7958B6A89B66250254FAC5E54DEF9D7E (AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* __this, AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* ___0_value, const RuntimeMethod* method) 
{
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_0 = ___0_value;
		__this->____category_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____category_24), (void*)L_0);
		return;
	}
}
// ClockStone.AudioCategory ClockStone.AudioItem::get_category()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* AudioItem_get_category_mA6BE3D42E8FBE2687F68B5017B451ECC79884DE9 (AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* __this, const RuntimeMethod* method) 
{
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_0 = __this->____category_24;
		return L_0;
	}
}
// System.Void ClockStone.AudioItem::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioItem_Awake_mC5DE0FA46E21D76D0FD694559DE33B9318B478A6 (AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___Loop_1;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0010;
		}
	}
	{
		__this->___Loop_1 = 2;
	}

IL_0010:
	{
		__this->____lastChosen_22 = (-1);
		return;
	}
}
// System.Void ClockStone.AudioItem::ResetSequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioItem_ResetSequence_mE1259A365A2D789C649AD1220ED59436BB374BBB (AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* __this, const RuntimeMethod* method) 
{
	{
		__this->____lastChosen_22 = (-1);
		return;
	}
}
// System.Void ClockStone.AudioItem::_Initialize(ClockStone.AudioCategory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioItem__Initialize_m04E995E35149164B274394692B88557A2CA95603 (AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* __this, AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* ___0_categ, const RuntimeMethod* method) 
{
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_0 = ___0_categ;
		AudioItem_set_category_mF946B97E7958B6A89B66250254FAC5E54DEF9D7E_inline(__this, L_0, NULL);
		AudioItem__NormalizeSubItems_mBF977911791226CF70BA606855F8F7B2886DF086(__this, NULL);
		return;
	}
}
// System.Void ClockStone.AudioItem::_NormalizeSubItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioItem__NormalizeSubItems_mBF977911791226CF70BA606855F8F7B2886DF086 (AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	bool V_2 = false;
	float V_3 = 0.0f;
	AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* V_4 = NULL;
	int32_t V_5 = 0;
	AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* V_6 = NULL;
	AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* V_7 = NULL;
	AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* V_8 = NULL;
	{
		V_0 = (0.0f);
		V_1 = 0;
		V_2 = (bool)0;
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_0 = __this->___subItems_21;
		V_4 = L_0;
		V_5 = 0;
		goto IL_003a;
	}

IL_0017:
	{
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_1 = V_4;
		int32_t L_2 = V_5;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_6 = L_4;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_5 = V_6;
		bool L_6;
		L_6 = AudioItem__IsValidSubItem_m1883FC833DCEAD803E1E68D4389BD08EFE57E243(L_5, NULL);
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_7 = V_6;
		NullCheck(L_7);
		bool L_8 = L_7->___DisableOtherSubitems_2;
		if (!L_8)
		{
			goto IL_0034;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0042;
	}

IL_0034:
	{
		int32_t L_9 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_003a:
	{
		int32_t L_10 = V_5;
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_11 = V_4;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0017;
		}
	}

IL_0042:
	{
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_12 = __this->___subItems_21;
		V_4 = L_12;
		V_5 = 0;
		goto IL_008f;
	}

IL_004f:
	{
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_13 = V_4;
		int32_t L_14 = V_5;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_7 = L_16;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_17 = V_7;
		NullCheck(L_17);
		AudioSubItem_set_item_m77620B4DCA2E950E8CDBE98D5D4FE31E124E7E17_inline(L_17, __this, NULL);
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_18 = V_7;
		bool L_19;
		L_19 = AudioItem__IsValidSubItem_m1883FC833DCEAD803E1E68D4389BD08EFE57E243(L_18, NULL);
		if (!L_19)
		{
			goto IL_007d;
		}
	}
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_20 = V_7;
		NullCheck(L_20);
		bool L_21 = L_20->___DisableOtherSubitems_2;
		if (L_21)
		{
			goto IL_0073;
		}
	}
	{
		bool L_22 = V_2;
		if (L_22)
		{
			goto IL_007d;
		}
	}

IL_0073:
	{
		float L_23 = V_0;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_24 = V_7;
		NullCheck(L_24);
		float L_25 = L_24->___Probability_1;
		V_0 = ((float)il2cpp_codegen_add(L_23, L_25));
	}

IL_007d:
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_26 = V_7;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		L_26->____subItemID_19 = L_27;
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		int32_t L_29 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_008f:
	{
		int32_t L_30 = V_5;
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_31 = V_4;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		float L_32 = V_0;
		if ((!(((float)L_32) <= ((float)(0.0f)))))
		{
			goto IL_00a0;
		}
	}
	{
		return;
	}

IL_00a0:
	{
		V_3 = (0.0f);
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_33 = __this->___subItems_21;
		V_4 = L_33;
		V_5 = 0;
		goto IL_00e9;
	}

IL_00b3:
	{
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_34 = V_4;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_8 = L_37;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_38 = V_8;
		bool L_39;
		L_39 = AudioItem__IsValidSubItem_m1883FC833DCEAD803E1E68D4389BD08EFE57E243(L_38, NULL);
		if (!L_39)
		{
			goto IL_00e3;
		}
	}
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_40 = V_8;
		NullCheck(L_40);
		bool L_41 = L_40->___DisableOtherSubitems_2;
		if (L_41)
		{
			goto IL_00cf;
		}
	}
	{
		bool L_42 = V_2;
		if (L_42)
		{
			goto IL_00db;
		}
	}

IL_00cf:
	{
		float L_43 = V_3;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_44 = V_8;
		NullCheck(L_44);
		float L_45 = L_44->___Probability_1;
		float L_46 = V_0;
		V_3 = ((float)il2cpp_codegen_add(L_43, ((float)(L_45/L_46))));
	}

IL_00db:
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_47 = V_8;
		float L_48 = V_3;
		NullCheck(L_47);
		AudioSubItem_set__SummedProbability_mAA86F675EC9F65A877972FD02012D2506A4BA46E_inline(L_47, L_48, NULL);
	}

IL_00e3:
	{
		int32_t L_49 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_00e9:
	{
		int32_t L_50 = V_5;
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_51 = V_4;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		return;
	}
}
// System.Boolean ClockStone.AudioItem::_IsValidSubItem(ClockStone.AudioSubItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioItem__IsValidSubItem_m1883FC833DCEAD803E1E68D4389BD08EFE57E243 (AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_0 = ___0_item;
		NullCheck(L_0);
		int32_t L_1 = L_0->___SubItemType_0;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_001d;
		}
	}
	{
		goto IL_0036;
	}

IL_0010:
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_4 = ___0_item;
		NullCheck(L_4);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = L_4->___Clip_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_6;
	}

IL_001d:
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_7 = ___0_item;
		NullCheck(L_7);
		String_t* L_8 = L_7->___ItemModeAudioID_3;
		if (!L_8)
		{
			goto IL_0034;
		}
	}
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_9 = ___0_item;
		NullCheck(L_9);
		String_t* L_10 = L_9->___ItemModeAudioID_3;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		return (bool)((((int32_t)L_11) > ((int32_t)0))? 1 : 0);
	}

IL_0034:
	{
		return (bool)0;
	}

IL_0036:
	{
		return (bool)0;
	}
}
// System.Void ClockStone.AudioItem::UnloadAudioClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioItem_UnloadAudioClip_m078B32DB312D693F2038E7D1410BE8AFA091D29D (AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* V_0 = NULL;
	int32_t V_1 = 0;
	AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* V_2 = NULL;
	{
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_0 = __this->___subItems_21;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0046;
	}

IL_000b:
	{
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_5 = V_2;
		NullCheck(L_5);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6 = L_5->___Clip_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		if (!L_7)
		{
			goto IL_0042;
		}
	}
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_8 = V_2;
		NullCheck(L_8);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_9 = L_8->___Clip_4;
		NullCheck(L_9);
		bool L_10;
		L_10 = AudioClip_get_preloadAudioData_mA3D346D89D612D70EED427D95FD6CA254AE02D4A(L_9, NULL);
		if (L_10)
		{
			goto IL_0037;
		}
	}
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_11 = V_2;
		NullCheck(L_11);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_12 = L_11->___Clip_4;
		NullCheck(L_12);
		bool L_13;
		L_13 = AudioClip_UnloadAudioData_m4022A02B836CDC945D634DD7CB4DA0018F718E62(L_12, NULL);
		goto IL_0042;
	}

IL_0037:
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_14 = V_2;
		NullCheck(L_14);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_15 = L_14->___Clip_4;
		Resources_UnloadAsset_m4828D1393356C052061C66403B1437F7D7E21908(L_15, NULL);
	}

IL_0042:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0046:
	{
		int32_t L_17 = V_1;
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_18 = V_0;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
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
// System.Void ClockStone.AudioSubItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSubItem__ctor_m2488D8491E6DDB4F0B7BE60D6F523220AC301F33 (AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___Probability_1 = (1.0f);
		__this->___Volume_5 = (1.0f);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___individualSettings_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___individualSettings_17), (void*)L_0);
		__this->____summedProbability_18 = (-1.0f);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ClockStone.AudioSubItem::.ctor(ClockStone.AudioSubItem,ClockStone.AudioItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSubItem__ctor_m4245627EC9307D8BF168F50D36F8753884B81A2E (AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* __this, AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* ___0_orig, AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* ___1_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		__this->___Probability_1 = (1.0f);
		__this->___Volume_5 = (1.0f);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___individualSettings_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___individualSettings_17), (void*)L_0);
		__this->____summedProbability_18 = (-1.0f);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_1 = ___0_orig;
		NullCheck(L_1);
		int32_t L_2 = L_1->___SubItemType_0;
		__this->___SubItemType_0 = L_2;
		int32_t L_3 = __this->___SubItemType_0;
		if (L_3)
		{
			goto IL_0054;
		}
	}
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_4 = ___0_orig;
		NullCheck(L_4);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = L_4->___Clip_4;
		__this->___Clip_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Clip_4), (void*)L_5);
		goto IL_0069;
	}

IL_0054:
	{
		int32_t L_6 = __this->___SubItemType_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0069;
		}
	}
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_7 = ___0_orig;
		NullCheck(L_7);
		String_t* L_8 = L_7->___ItemModeAudioID_3;
		__this->___ItemModeAudioID_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ItemModeAudioID_3), (void*)L_8);
	}

IL_0069:
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_9 = ___0_orig;
		NullCheck(L_9);
		float L_10 = L_9->___Probability_1;
		__this->___Probability_1 = L_10;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_11 = ___0_orig;
		NullCheck(L_11);
		bool L_12 = L_11->___DisableOtherSubitems_2;
		__this->___DisableOtherSubitems_2 = L_12;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_13 = ___0_orig;
		NullCheck(L_13);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_14 = L_13->___Clip_4;
		__this->___Clip_4 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Clip_4), (void*)L_14);
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_15 = ___0_orig;
		NullCheck(L_15);
		float L_16 = L_15->___Volume_5;
		__this->___Volume_5 = L_16;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_17 = ___0_orig;
		NullCheck(L_17);
		float L_18 = L_17->___PitchShift_6;
		__this->___PitchShift_6 = L_18;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_19 = ___0_orig;
		NullCheck(L_19);
		float L_20 = L_19->___Pan2D_7;
		__this->___Pan2D_7 = L_20;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_21 = ___0_orig;
		NullCheck(L_21);
		float L_22 = L_21->___Delay_8;
		__this->___Delay_8 = L_22;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_23 = ___0_orig;
		NullCheck(L_23);
		float L_24 = L_23->___RandomPitch_9;
		__this->___RandomPitch_9 = L_24;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_25 = ___0_orig;
		NullCheck(L_25);
		float L_26 = L_25->___RandomVolume_10;
		__this->___RandomVolume_10 = L_26;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_27 = ___0_orig;
		NullCheck(L_27);
		float L_28 = L_27->___RandomDelay_11;
		__this->___RandomDelay_11 = L_28;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_29 = ___0_orig;
		NullCheck(L_29);
		float L_30 = L_29->___ClipStopTime_12;
		__this->___ClipStopTime_12 = L_30;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_31 = ___0_orig;
		NullCheck(L_31);
		float L_32 = L_31->___ClipStartTime_13;
		__this->___ClipStartTime_13 = L_32;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_33 = ___0_orig;
		NullCheck(L_33);
		float L_34 = L_33->___FadeIn_14;
		__this->___FadeIn_14 = L_34;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_35 = ___0_orig;
		NullCheck(L_35);
		float L_36 = L_35->___FadeOut_15;
		__this->___FadeOut_15 = L_36;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_37 = ___0_orig;
		NullCheck(L_37);
		bool L_38 = L_37->___RandomStartPosition_16;
		__this->___RandomStartPosition_16 = L_38;
		V_0 = 0;
		goto IL_013c;
	}

IL_0121:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_39 = __this->___individualSettings_17;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_40 = ___0_orig;
		NullCheck(L_40);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_41 = L_40->___individualSettings_17;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		String_t* L_43;
		L_43 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_41, L_42, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_39);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_39, L_43, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		int32_t L_44 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_013c:
	{
		int32_t L_45 = V_0;
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_46 = ___0_orig;
		NullCheck(L_46);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_47 = L_46->___individualSettings_17;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_47, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_45) < ((int32_t)L_48)))
		{
			goto IL_0121;
		}
	}
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_49 = ___1_item;
		AudioSubItem_set_item_m77620B4DCA2E950E8CDBE98D5D4FE31E124E7E17_inline(__this, L_49, NULL);
		return;
	}
}
// System.Single ClockStone.AudioSubItem::get__SummedProbability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSubItem_get__SummedProbability_mB306786B200874B880CA1521EA4BEAB4FB5503E2 (AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____summedProbability_18;
		return L_0;
	}
}
// System.Void ClockStone.AudioSubItem::set__SummedProbability(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSubItem_set__SummedProbability_mAA86F675EC9F65A877972FD02012D2506A4BA46E (AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		__this->____summedProbability_18 = L_0;
		return;
	}
}
// System.Void ClockStone.AudioSubItem::set_item(ClockStone.AudioItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSubItem_set_item_m77620B4DCA2E950E8CDBE98D5D4FE31E124E7E17 (AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* __this, AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* ___0_value, const RuntimeMethod* method) 
{
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_0 = ___0_value;
		__this->____item_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____item_20), (void*)L_0);
		return;
	}
}
// ClockStone.AudioItem ClockStone.AudioSubItem::get_item()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* AudioSubItem_get_item_m53E96EF703004CD165FD10212837F30EDBD20C38 (AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* __this, const RuntimeMethod* method) 
{
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_0 = __this->____item_20;
		return L_0;
	}
}
// System.String ClockStone.AudioSubItem::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AudioSubItem_ToString_mF0E62CF610154FBA0194C541B69DE95A40AF797C (AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99C3D2B7D1E626DC59DE7C914AA3D4D25EEBE3C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB9178A7BBBBF79AD09C034887CCA5ACF29D5B34);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___SubItemType_0;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___Clip_4;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralFB9178A7BBBBF79AD09C034887CCA5ACF29D5B34, L_2, NULL);
		return L_3;
	}

IL_001e:
	{
		String_t* L_4 = __this->___ItemModeAudioID_3;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral99C3D2B7D1E626DC59DE7C914AA3D4D25EEBE3C9, L_4, NULL);
		return L_5;
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
// System.Void ClockStone.Playlist::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playlist__ctor_m272597928C27B291280C5A46445D3E73D3B905FA (Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___name_0 = _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
		__this->___playlistItems_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playlistItems_1), (void*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL);
		return;
	}
}
// System.Void ClockStone.Playlist::.ctor(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playlist__ctor_mB99705B06CD5FD59CBE3B6ECA3F13B21670B3B8D (Playlist_tAAA3C6DFCE125900144F4AD5C87DF4B1C59BC464* __this, String_t* ___0_name, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_playlistItems, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_name;
		__this->___name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___1_playlistItems;
		__this->___playlistItems_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playlistItems_1), (void*)L_1);
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
// System.String ClockStone.AudioObject::get_audioID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AudioObject_get_audioID_m07AC1667AE18FFF1A4954E60D7223561E12DF0D1 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CaudioIDU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void ClockStone.AudioObject::set_audioID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_set_audioID_m8C5F78F770A16263871EE418FFFF98AD3DCEAE9F (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CaudioIDU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CaudioIDU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// ClockStone.AudioCategory ClockStone.AudioObject::get_category()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* AudioObject_get_category_m1B694D47010EA8BEDF53B11C36F460F99CE67AAD (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_0 = __this->____category_7;
		return L_0;
	}
}
// System.Void ClockStone.AudioObject::set_category(ClockStone.AudioCategory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_set_category_m7341517B0BDD393E77BE2E576F21F1494CDAC1E1 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* ___0_value, const RuntimeMethod* method) 
{
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_0 = ___0_value;
		__this->____category_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____category_7), (void*)L_0);
		return;
	}
}
// ClockStone.AudioSubItem ClockStone.AudioObject::get_subItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* AudioObject_get_subItem_mE36DC432092EBB487061B7FA4BCD2E6A198CF1CC (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_0 = __this->____subItemPrimary_9;
		return L_0;
	}
}
// System.Void ClockStone.AudioObject::set_subItem(ClockStone.AudioSubItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_set_subItem_m84C0283818EFCF174279DD41374EB80FC9BC0250 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* ___0_value, const RuntimeMethod* method) 
{
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_0 = ___0_value;
		__this->____subItemPrimary_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____subItemPrimary_9), (void*)L_0);
		return;
	}
}
// AudioChannelType ClockStone.AudioObject::get_channel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioObject_get_channel_mA8264029E34B019838CD26196E5B5F082C4FAF9B (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CchannelU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void ClockStone.AudioObject::set_channel(AudioChannelType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_set_channel_m713E350808B9959C31DAAAB5B0BD0D2FA74A1A22 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CchannelU3Ek__BackingField_8 = L_0;
		return;
	}
}
// ClockStone.AudioItem ClockStone.AudioObject::get_audioItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* AudioObject_get_audioItem_mA684BBD00181C2E65E7FE103BA73BC08530F4C35 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_0;
		L_0 = AudioObject_get_subItem_mE36DC432092EBB487061B7FA4BCD2E6A198CF1CC_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_1;
		L_1 = AudioObject_get_subItem_mE36DC432092EBB487061B7FA4BCD2E6A198CF1CC_inline(__this, NULL);
		NullCheck(L_1);
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_2;
		L_2 = AudioSubItem_get_item_m53E96EF703004CD165FD10212837F30EDBD20C38_inline(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		return (AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0*)NULL;
	}
}
// System.Void ClockStone.AudioObject::set_completelyPlayedDelegate(ClockStone.AudioObject/AudioEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_set_completelyPlayedDelegate_mCE37321690491DE308427A1B07DE1347458350AB (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, AudioEventDelegate_tC8822AE744F66D86E67505066207E918FAD55B49* ___0_value, const RuntimeMethod* method) 
{
	{
		AudioEventDelegate_tC8822AE744F66D86E67505066207E918FAD55B49* L_0 = ___0_value;
		__this->____completelyPlayedDelegate_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____completelyPlayedDelegate_11), (void*)L_0);
		return;
	}
}
// ClockStone.AudioObject/AudioEventDelegate ClockStone.AudioObject::get_completelyPlayedDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioEventDelegate_tC8822AE744F66D86E67505066207E918FAD55B49* AudioObject_get_completelyPlayedDelegate_m778A754922B2E833AACEC21D9F5655DC4F4A408D (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		AudioEventDelegate_tC8822AE744F66D86E67505066207E918FAD55B49* L_0 = __this->____completelyPlayedDelegate_11;
		return L_0;
	}
}
// System.Single ClockStone.AudioObject::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioObject_get_volume_m7D3E94846E6EE2DE869628209893E2FC00ABE28C (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = AudioObject_get__volumeWithCategory_mD4749ADDA041F370362BD3BC4F9742AF19A23817(__this, NULL);
		return L_0;
	}
}
// System.Void ClockStone.AudioObject::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_set_volume_m8F6D4CC9BF58129F628E0AFBC010C5715EF704B8 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, float ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0;
		L_0 = AudioObject_get__volumeFromCategory_m2C856B7B608B413DCBDA254F26A4733419950E03(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_001a;
		}
	}
	{
		float L_2 = ___0_value;
		float L_3 = V_0;
		__this->____volumeExcludingCategory_14 = ((float)(L_2/L_3));
		goto IL_0021;
	}

IL_001a:
	{
		float L_4 = ___0_value;
		__this->____volumeExcludingCategory_14 = L_4;
	}

IL_0021:
	{
		AudioObject__ApplyVolumeBoth_mC4D88C6291192E9269EFAB4BE5DDDFAB2EADA48C(__this, NULL);
		return;
	}
}
// System.Single ClockStone.AudioObject::get_volumeItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioObject_get_volumeItem_mD460FB3C63DB8AB716AE963C1B2236A6BAD224DA (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____volumeFromScriptCall_17;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_001b;
		}
	}
	{
		float L_1 = __this->____volumeExcludingCategory_14;
		float L_2 = __this->____volumeFromScriptCall_17;
		return ((float)(L_1/L_2));
	}

IL_001b:
	{
		float L_3 = __this->____volumeExcludingCategory_14;
		return L_3;
	}
}
// System.Void ClockStone.AudioObject::set_volumeItem(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_set_volumeItem_m6BAC6D7F847EF44FE10A7591390845BFE8A1E3CD (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		float L_1 = __this->____volumeFromScriptCall_17;
		__this->____volumeExcludingCategory_14 = ((float)il2cpp_codegen_multiply(L_0, L_1));
		AudioObject__ApplyVolumeBoth_mC4D88C6291192E9269EFAB4BE5DDDFAB2EADA48C(__this, NULL);
		return;
	}
}
// System.Single ClockStone.AudioObject::get_volumeTotal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioObject_get_volumeTotal_m12F15DEBB9290C245813B0ABA50B302860DFC73F (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = AudioObject_get_volumeTotalWithoutFade_mA569F823EA1094D3EDBF6AEC5F89546B7054BA34(__this, NULL);
		float L_1 = __this->____volumeFromPrimaryFade_15;
		return ((float)il2cpp_codegen_multiply(L_0, L_1));
	}
}
// System.Single ClockStone.AudioObject::get_volumeTotalWithoutFade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioObject_get_volumeTotalWithoutFade_mA569F823EA1094D3EDBF6AEC5F89546B7054BA34 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* V_1 = NULL;
	{
		float L_0;
		L_0 = AudioObject_get__volumeWithCategory_mD4749ADDA041F370362BD3BC4F9742AF19A23817(__this, NULL);
		V_0 = L_0;
		V_1 = (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B*)NULL;
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_1;
		L_1 = AudioObject_get_category_m1B694D47010EA8BEDF53B11C36F460F99CE67AAD_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_2;
		L_2 = AudioObject_get_category_m1B694D47010EA8BEDF53B11C36F460F99CE67AAD_inline(__this, NULL);
		NullCheck(L_2);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_3;
		L_3 = AudioCategory_get_audioController_m1675648A0516A6A61319734FD1ED7ACA5854AD14_inline(L_2, NULL);
		V_1 = L_3;
		goto IL_0026;
	}

IL_001f:
	{
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_4 = __this->____audioController_34;
		V_1 = L_4;
	}

IL_0026:
	{
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		float L_7 = V_0;
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_8 = V_1;
		NullCheck(L_8);
		float L_9;
		L_9 = AudioController_get_Volume_m76D0F25F710E931B3BCB1811834BBF45ACCCF137_inline(L_8, NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_7, L_9));
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_10 = V_1;
		NullCheck(L_10);
		bool L_11;
		L_11 = AudioController_get_soundMuted_m1BEF7EB429D80238FF5440E7C017F632DEF92E58_inline(L_10, NULL);
		if (!L_11)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_12;
		L_12 = AudioObject_get_channel_mA8264029E34B019838CD26196E5B5F082C4FAF9B_inline(__this, NULL);
		if (L_12)
		{
			goto IL_004e;
		}
	}
	{
		V_0 = (0.0f);
	}

IL_004e:
	{
		float L_13 = V_0;
		return L_13;
	}
}
// System.Double ClockStone.AudioObject::get_playCalledAtTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AudioObject_get_playCalledAtTime_mA7C7899852BAEC0B2B7E90D1F32F4A01E076F784 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->____playTime_22;
		return L_0;
	}
}
// System.Double ClockStone.AudioObject::get_startedPlayingAtTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AudioObject_get_startedPlayingAtTime_mD10B3AFA7BE749CD8B16D107B83B0359A7E8B7AF (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->____playStartTimeSystem_24;
		return L_0;
	}
}
// System.Single ClockStone.AudioObject::get_timeUntilEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioObject_get_timeUntilEnd_m128758E4D90E1C16EDBA09DC993FDE766CBF3605 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = AudioObject_get_clipLength_mB96E3BA96B35CA8F1B7AFFB032F33197D76335CC(__this, NULL);
		float L_1;
		L_1 = AudioObject_get_audioTime_m6B5A2EE06A41C5BF22E40B566F9CC651A2577F1D(__this, NULL);
		return ((float)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Double ClockStone.AudioObject::get_scheduledPlayingAtDspTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AudioObject_get_scheduledPlayingAtDspTime_mF77505F3953FA6A8B58C76BE5CE86F1FA650927F (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->____playScheduledTimeDsp_25;
		return L_0;
	}
}
// System.Void ClockStone.AudioObject::set_scheduledPlayingAtDspTime(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_set_scheduledPlayingAtDspTime_m5C72D87CBE3F8C55EB234A5D4C26D971194F21B3 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_value;
		__this->____playScheduledTimeDsp_25 = L_0;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		double L_2 = __this->____playScheduledTimeDsp_25;
		NullCheck(L_1);
		AudioSource_SetScheduledStartTime_m831CB1AC7E3C70BEFB84892B0A50BA161CE1EDDD(L_1, L_2, NULL);
		return;
	}
}
// System.Single ClockStone.AudioObject::get_clipLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioObject_get_clipLength_mB96E3BA96B35CA8F1B7AFFB032F33197D76335CC (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = AudioObject_get__stopClipAtTime_m1D112BF58ED2ED81BDCFF2A6801E62189933DD81(__this, NULL);
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_001b;
		}
	}
	{
		float L_1;
		L_1 = AudioObject_get__stopClipAtTime_m1D112BF58ED2ED81BDCFF2A6801E62189933DD81(__this, NULL);
		float L_2;
		L_2 = AudioObject_get__startClipAtTime_m8D667511D4F804DF10569940B2026AE44EAE0F81(__this, NULL);
		return ((float)il2cpp_codegen_subtract(L_1, L_2));
	}

IL_001b:
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3;
		L_3 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		NullCheck(L_3);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4;
		L_4 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6;
		L_6 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		NullCheck(L_6);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_7;
		L_7 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_6, NULL);
		NullCheck(L_7);
		float L_8;
		L_8 = AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D(L_7, NULL);
		float L_9;
		L_9 = AudioObject_get__startClipAtTime_m8D667511D4F804DF10569940B2026AE44EAE0F81(__this, NULL);
		return ((float)il2cpp_codegen_subtract(L_8, L_9));
	}

IL_0046:
	{
		return (0.0f);
	}
}
// System.Single ClockStone.AudioObject::get_audioTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioObject_get_audioTime_m6B5A2EE06A41C5BF22E40B566F9CC651A2577F1D (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = AudioSource_get_time_m130D08644F36736115FE082DAA2ED5E2C9D97A93(L_0, NULL);
		float L_2;
		L_2 = AudioObject_get__startClipAtTime_m8D667511D4F804DF10569940B2026AE44EAE0F81(__this, NULL);
		return ((float)il2cpp_codegen_subtract(L_1, L_2));
	}
}
// System.Void ClockStone.AudioObject::set_audioTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_set_audioTime_m17A2249F2522A6649A01328F73EA5F417683472A (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		float L_1 = ___0_value;
		float L_2;
		L_2 = AudioObject_get__startClipAtTime_m8D667511D4F804DF10569940B2026AE44EAE0F81(__this, NULL);
		NullCheck(L_0);
		AudioSource_set_time_m6670372FD9C494978B7B3E01B7F4D220616F6204(L_0, ((float)il2cpp_codegen_add(L_1, L_2)), NULL);
		return;
	}
}
// System.Boolean ClockStone.AudioObject::get_isFadingOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioObject_get_isFadingOut_m2C48C459F237CF66487840CBC2C6AF1811CFEABC (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* L_0 = __this->____primaryFader_20;
		NullCheck(L_0);
		bool L_1;
		L_1 = AudioFader_get_isFadingOut_m821EB22C8C5F8AF438C9F3E592FBE44EDF41A901(L_0, NULL);
		return L_1;
	}
}
// System.Boolean ClockStone.AudioObject::get_isFadeOutComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioObject_get_isFadeOutComplete_m24580D4210998F520288DA4A76A3A70C604D7C3D (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* L_0 = __this->____primaryFader_20;
		NullCheck(L_0);
		bool L_1;
		L_1 = AudioFader_get_isFadingOutComplete_m1FA263FA1D8C6C9A6ABB14DC2D7E6E616A25AE0B(L_0, NULL);
		return L_1;
	}
}
// System.Boolean ClockStone.AudioObject::get_isFadingOutOrScheduled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioObject_get_isFadingOutOrScheduled_mEB73E908CEADAB4170B1E6296565E63C479B567E (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* L_0 = __this->____primaryFader_20;
		NullCheck(L_0);
		bool L_1;
		L_1 = AudioFader_get_isFadingOutOrScheduled_m14E9FACDF7B233D122AE913220FFE3131600A74E(L_0, NULL);
		return L_1;
	}
}
// System.Boolean ClockStone.AudioObject::get_isFadingIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioObject_get_isFadingIn_mF3564D340ABE7CC40610D3D7E3D989CE1FC83B57 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* L_0 = __this->____primaryFader_20;
		NullCheck(L_0);
		bool L_1;
		L_1 = AudioFader_get_isFadingIn_m592C515F1884EE099B6AE12FC5A5A3FAEBD93BA0(L_0, NULL);
		return L_1;
	}
}
// System.Single ClockStone.AudioObject::get_pitch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioObject_get_pitch_m020BA0D90686955474287CC154815255090FC9F6 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = AudioSource_get_pitch_mB1B0B8A52400B5C798BF1E644FE1C2FFA20A9863(L_0, NULL);
		return L_1;
	}
}
// System.Void ClockStone.AudioObject::set_pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_set_pitch_m85D5D75889971573195A981120EB3615FF98DEFA (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		float L_1 = ___0_value;
		NullCheck(L_0);
		AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811(L_0, L_1, NULL);
		return;
	}
}
// System.Single ClockStone.AudioObject::get_pan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioObject_get_pan_m4B1D6442F81613ADED4670560D57504D79B0319E (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = AudioSource_get_panStereo_mEB4CE5FF235A46C8B7CE62529A9DDA75A15C2505(L_0, NULL);
		return L_1;
	}
}
// System.Void ClockStone.AudioObject::set_pan(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_set_pan_m6FBBB9B686B34DE7B679200EA8509D9E15E4D4C5 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		float L_1 = ___0_value;
		NullCheck(L_0);
		AudioSource_set_panStereo_mE3BA673B5F93F731114E8901355A63F07C8A54DF(L_0, L_1, NULL);
		return;
	}
}
// System.Double ClockStone.AudioObject::get_audioObjectTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AudioObject_get_audioObjectTime_mC84CEB1B5C2BFAC1C2AA49FAF3902EBF5C6A24CE (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->____audioObjectTime_26;
		return L_0;
	}
}
// System.Boolean ClockStone.AudioObject::get_stopAfterFadeOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioObject_get_stopAfterFadeOut_m75947A6875D752922F31F27D7F4987FC18639DF8 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____stopAfterFadeoutUserSetting_31;
		return L_0;
	}
}
// System.Void ClockStone.AudioObject::set_stopAfterFadeOut(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_set_stopAfterFadeOut_mAE98BC27E65BEFE5C8ED0CB8653AF5E8CDAC13BC (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->____stopAfterFadeoutUserSetting_31 = L_0;
		return;
	}
}
// System.Void ClockStone.AudioObject::FadeIn(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_FadeIn_mE7C98E14EF6B0877C77DBBA6E48F090559C02539 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, float ___0_fadeInTime, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->____playStartTimeLocal_23;
		if ((!(((double)L_0) > ((double)(0.0)))))
		{
			goto IL_0043;
		}
	}
	{
		double L_1 = __this->____playStartTimeLocal_23;
		double L_2;
		L_2 = AudioObject_get_audioObjectTime_mC84CEB1B5C2BFAC1C2AA49FAF3902EBF5C6A24CE_inline(__this, NULL);
		if ((!(((double)((double)il2cpp_codegen_subtract(L_1, L_2))) > ((double)(0.0)))))
		{
			goto IL_0043;
		}
	}
	{
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* L_3 = __this->____primaryFader_20;
		float L_4 = ___0_fadeInTime;
		double L_5 = __this->____playStartTimeLocal_23;
		NullCheck(L_3);
		AudioFader_FadeIn_m0F1F1D26EFA6220E12B0D4DF97511DAD190A62F7(L_3, L_4, L_5, (bool)0, NULL);
		AudioObject__UpdateFadeVolume_mF786330E839E40C100D02F30C8C85C530982A1B4(__this, NULL);
		return;
	}

IL_0043:
	{
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* L_6 = __this->____primaryFader_20;
		float L_7 = ___0_fadeInTime;
		double L_8;
		L_8 = AudioObject_get_audioObjectTime_mC84CEB1B5C2BFAC1C2AA49FAF3902EBF5C6A24CE_inline(__this, NULL);
		bool L_9;
		L_9 = AudioObject_get__shouldStopIfPrimaryFadedOut_m8858F615E85E49B67985055F95FFA0783AE9B7E9(__this, NULL);
		NullCheck(L_6);
		AudioFader_FadeIn_m0F1F1D26EFA6220E12B0D4DF97511DAD190A62F7(L_6, L_7, L_8, (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0), NULL);
		AudioObject__UpdateFadeVolume_mF786330E839E40C100D02F30C8C85C530982A1B4(__this, NULL);
		return;
	}
}
// System.Void ClockStone.AudioObject::PlayScheduled(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_PlayScheduled_mB5C7557A00ED8B16E7374D43EEBE61394117CBA1 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, double ___0_dspTime, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_dspTime;
		AudioObject__PlayScheduled_mCBC287864C5BA629C95E67BB1E1A81A63F8D2FE7(__this, L_0, NULL);
		return;
	}
}
// System.Void ClockStone.AudioObject::PlayAfter(System.String,System.Double,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_PlayAfter_mE9B976C5CD6E725D5A3C4763420A8FB81C21B229 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, String_t* ___0_audioID, double ___1_deltaDspTime, float ___2_volume, float ___3_startTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_audioID;
		double L_1 = ___1_deltaDspTime;
		float L_2 = ___2_volume;
		float L_3 = ___3_startTime;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_4;
		L_4 = AudioController_PlayAfter_mF0B328D8DAA7B418434668B90DEB252C22984B49(L_0, __this, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void ClockStone.AudioObject::PlayNow(System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_PlayNow_mD7E053E3EEF7B9D668B14158A83A234E04DEEF8C (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, String_t* ___0_audioID, float ___1_delay, float ___2_volume, float ___3_startTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94806DC905AE5E79B94A0190E36270E1FFA45178);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA296D16008C5409469563CF28EE0D3005EFE3F45);
		s_Il2CppMethodInitialized = true;
	}
	AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* V_0 = NULL;
	{
		String_t* L_0 = ___0_audioID;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_1;
		L_1 = AudioController_GetAudioItem_mF34D3C0E02CCDDD5E43FAD801E0E73212F915F4A(L_0, NULL);
		V_0 = L_1;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_2 = V_0;
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_3 = ___0_audioID;
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral94806DC905AE5E79B94A0190E36270E1FFA45178, L_3, _stringLiteralA296D16008C5409469563CF28EE0D3005EFE3F45, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_4, NULL);
		return;
	}

IL_0020:
	{
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_5 = __this->____audioController_34;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_6 = V_0;
		float L_7 = ___2_volume;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_10, NULL);
		float L_12 = ___1_delay;
		float L_13 = ___3_startTime;
		NullCheck(L_5);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_14;
		L_14 = AudioController_PlayAudioItem_m6510B59A4482E0E6F38D9E001D9E8DBBD498231A(L_5, L_6, L_7, L_9, L_11, L_12, L_13, (bool)0, __this, (0.0), 0, (1.0f), NULL);
		return;
	}
}
// System.Void ClockStone.AudioObject::Play(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_Play_m85ADEF7E2221FB1AF872E21466ECE5B2A02C8A6F (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, float ___0_delay, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_delay;
		AudioObject__PlayDelayed_mBF496BC9D5DC41A7EA6745850063A9BEBC831DD6(__this, L_0, NULL);
		return;
	}
}
// System.Void ClockStone.AudioObject::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_Stop_m9A3221CC31D6CD491CE07EE835A5A30D51125138 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		AudioObject_Stop_m793AABEC01EF24936D60037EB89C617B13AD9740(__this, (-1.0f), NULL);
		return;
	}
}
// System.Void ClockStone.AudioObject::Stop(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_Stop_m793AABEC01EF24936D60037EB89C617B13AD9740 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, float ___0_fadeOutLength, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_fadeOutLength;
		AudioObject_Stop_m28A3B394943BD4C372E40EA87D0ABC84810920A3(__this, L_0, (0.0f), NULL);
		return;
	}
}
// System.Void ClockStone.AudioObject::Stop(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_Stop_m28A3B394943BD4C372E40EA87D0ABC84810920A3 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, float ___0_fadeOutLength, float ___1_startToFadeTime, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = AudioObject_IsPaused_m3E5B6566C020302D843CF742122EC0A1DFDB5C08(__this, (bool)0, NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		___0_fadeOutLength = (0.0f);
		___1_startToFadeTime = (0.0f);
	}

IL_0017:
	{
		float L_1 = ___1_startToFadeTime;
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_002f;
		}
	}
	{
		float L_2 = ___1_startToFadeTime;
		float L_3 = ___0_fadeOutLength;
		RuntimeObject* L_4;
		L_4 = AudioObject__WaitForSecondsThenStop_m92B1FF703BD97005D9EF3E3FEAE3ECC858C8F804(__this, L_2, L_3, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		return;
	}

IL_002f:
	{
		__this->____stopRequested_28 = (bool)1;
		float L_6 = ___0_fadeOutLength;
		if ((!(((float)L_6) < ((float)(0.0f)))))
		{
			goto IL_005c;
		}
	}
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_7;
		L_7 = AudioObject_get_subItem_mE36DC432092EBB487061B7FA4BCD2E6A198CF1CC_inline(__this, NULL);
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_8;
		L_8 = AudioObject_get_subItem_mE36DC432092EBB487061B7FA4BCD2E6A198CF1CC_inline(__this, NULL);
		NullCheck(L_8);
		float L_9 = L_8->___FadeOut_15;
		___0_fadeOutLength = L_9;
		goto IL_005c;
	}

IL_0055:
	{
		___0_fadeOutLength = (0.0f);
	}

IL_005c:
	{
		float L_10 = ___0_fadeOutLength;
		if ((!(((float)L_10) == ((float)(0.0f)))))
		{
			goto IL_0073;
		}
	}
	{
		float L_11 = ___1_startToFadeTime;
		if ((!(((float)L_11) == ((float)(0.0f)))))
		{
			goto IL_0073;
		}
	}
	{
		AudioObject__Stop_mA2DE6F2B7F72F8C2AF16A884F11019C9D62D67E3(__this, NULL);
		return;
	}

IL_0073:
	{
		float L_12 = ___0_fadeOutLength;
		float L_13 = ___1_startToFadeTime;
		AudioObject_FadeOut_mA448240C114420D522FEBD5B61E448E238E1E0B6(__this, L_12, L_13, NULL);
		bool L_14;
		L_14 = AudioObject_IsSecondaryPlaying_m9CF13022B78EA62701F9E43F9885FD4FD6B0934B(__this, NULL);
		if (!L_14)
		{
			goto IL_0097;
		}
	}
	{
		AudioObject_SwitchAudioSources_m50360C50BC6719AACB99613B8EA6C577F141DE02(__this, NULL);
		float L_15 = ___0_fadeOutLength;
		float L_16 = ___1_startToFadeTime;
		AudioObject_FadeOut_mA448240C114420D522FEBD5B61E448E238E1E0B6(__this, L_15, L_16, NULL);
		AudioObject_SwitchAudioSources_m50360C50BC6719AACB99613B8EA6C577F141DE02(__this, NULL);
	}

IL_0097:
	{
		return;
	}
}
// System.Void ClockStone.AudioObject::FinishSequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_FinishSequence_m20B65B84B68C4480CC57D3FE6FBD67A89CCE6486 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* V_0 = NULL;
	int32_t V_1 = 0;
	{
		bool L_0 = __this->____finishSequence_29;
		if (L_0)
		{
			goto IL_0041;
		}
	}
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_1;
		L_1 = AudioObject_get_audioItem_mA684BBD00181C2E65E7FE103BA73BC08530F4C35(__this, NULL);
		V_0 = L_1;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___Loop_1;
		V_1 = L_4;
		int32_t L_5 = V_1;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, 2))) > ((uint32_t)1))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 4))) > ((uint32_t)1))))
		{
			goto IL_002e;
		}
	}
	{
		return;
	}

IL_0026:
	{
		__this->____finishSequence_29 = (bool)1;
		return;
	}

IL_002e:
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7;
		L_7 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		NullCheck(L_7);
		AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56(L_7, (bool)0, NULL);
		__this->____finishSequence_29 = (bool)1;
	}

IL_0041:
	{
		return;
	}
}
// System.Collections.IEnumerator ClockStone.AudioObject::_WaitForSecondsThenStop(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AudioObject__WaitForSecondsThenStop_m92B1FF703BD97005D9EF3E3FEAE3ECC858C8F804 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, float ___0_startToFadeTime, float ___1_fadeOutLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3C_WaitForSecondsThenStopU3Ed__76_t2808A470FCC20423D02D711EFA3877B423A25E2F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3C_WaitForSecondsThenStopU3Ed__76_t2808A470FCC20423D02D711EFA3877B423A25E2F* L_0 = (U3C_WaitForSecondsThenStopU3Ed__76_t2808A470FCC20423D02D711EFA3877B423A25E2F*)il2cpp_codegen_object_new(U3C_WaitForSecondsThenStopU3Ed__76_t2808A470FCC20423D02D711EFA3877B423A25E2F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3C_WaitForSecondsThenStopU3Ed__76__ctor_m5AD66320A1BD2DA3CB5E9D85D8CE8DD5FBB2D1B8(L_0, 0, NULL);
		U3C_WaitForSecondsThenStopU3Ed__76_t2808A470FCC20423D02D711EFA3877B423A25E2F* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3C_WaitForSecondsThenStopU3Ed__76_t2808A470FCC20423D02D711EFA3877B423A25E2F* L_2 = L_1;
		float L_3 = ___0_startToFadeTime;
		NullCheck(L_2);
		L_2->___startToFadeTime_2 = L_3;
		U3C_WaitForSecondsThenStopU3Ed__76_t2808A470FCC20423D02D711EFA3877B423A25E2F* L_4 = L_2;
		float L_5 = ___1_fadeOutLength;
		NullCheck(L_4);
		L_4->___fadeOutLength_4 = L_5;
		return L_4;
	}
}
// System.Void ClockStone.AudioObject::FadeOut(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_FadeOut_m2EB1EE73C1ACDC8F6277A0B1E5E8AB204328A9FC (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, float ___0_fadeOutLength, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_fadeOutLength;
		AudioObject_FadeOut_mA448240C114420D522FEBD5B61E448E238E1E0B6(__this, L_0, (0.0f), NULL);
		return;
	}
}
// System.Void ClockStone.AudioObject::FadeOut(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_FadeOut_mA448240C114420D522FEBD5B61E448E238E1E0B6 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, float ___0_fadeOutLength, float ___1_startToFadeTime, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_fadeOutLength;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_0026;
		}
	}
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_1;
		L_1 = AudioObject_get_subItem_mE36DC432092EBB487061B7FA4BCD2E6A198CF1CC_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_2;
		L_2 = AudioObject_get_subItem_mE36DC432092EBB487061B7FA4BCD2E6A198CF1CC_inline(__this, NULL);
		NullCheck(L_2);
		float L_3 = L_2->___FadeOut_15;
		___0_fadeOutLength = L_3;
		goto IL_0026;
	}

IL_001f:
	{
		___0_fadeOutLength = (0.0f);
	}

IL_0026:
	{
		float L_4 = ___0_fadeOutLength;
		if ((((float)L_4) > ((float)(0.0f))))
		{
			goto IL_0036;
		}
	}
	{
		float L_5 = ___1_startToFadeTime;
		if ((!(((float)L_5) > ((float)(0.0f)))))
		{
			goto IL_0044;
		}
	}

IL_0036:
	{
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* L_6 = __this->____primaryFader_20;
		float L_7 = ___0_fadeOutLength;
		float L_8 = ___1_startToFadeTime;
		NullCheck(L_6);
		AudioFader_FadeOut_m1CB7C336BB8A8527C17E45AE883E4EB93C4355FF(L_6, L_7, L_8, NULL);
		return;
	}

IL_0044:
	{
		float L_9 = ___0_fadeOutLength;
		if ((!(((float)L_9) == ((float)(0.0f)))))
		{
			goto IL_006c;
		}
	}
	{
		bool L_10;
		L_10 = AudioObject_get__shouldStopIfPrimaryFadedOut_m8858F615E85E49B67985055F95FFA0783AE9B7E9(__this, NULL);
		if (!L_10)
		{
			goto IL_005b;
		}
	}
	{
		AudioObject__Stop_mA2DE6F2B7F72F8C2AF16A884F11019C9D62D67E3(__this, NULL);
		return;
	}

IL_005b:
	{
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* L_11 = __this->____primaryFader_20;
		float L_12 = ___1_startToFadeTime;
		NullCheck(L_11);
		AudioFader_FadeOut_m1CB7C336BB8A8527C17E45AE883E4EB93C4355FF(L_11, (0.0f), L_12, NULL);
	}

IL_006c:
	{
		return;
	}
}
// System.Void ClockStone.AudioObject::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_Pause_m34AE0E99C88B119982C6DB2D687D139FFC551807 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		AudioObject_Pause_m75B0D2F903F51B6D80133DBDC5737931E2D9F3E2(__this, (0.0f), NULL);
		return;
	}
}
// System.Void ClockStone.AudioObject::Pause(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_Pause_m75B0D2F903F51B6D80133DBDC5737931E2D9F3E2 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, float ___0_fadeOutTime, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		bool L_0 = __this->____paused_18;
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
		__this->____paused_18 = (bool)1;
		float L_1 = ___0_fadeOutTime;
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_0046;
		}
	}
	{
		__this->____pauseWithFadeOutRequested_32 = (bool)1;
		float L_2 = ___0_fadeOutTime;
		AudioObject_FadeOut_m2EB1EE73C1ACDC8F6277A0B1E5E8AB204328A9FC(__this, L_2, NULL);
		float L_3 = ___0_fadeOutTime;
		int32_t L_4 = __this->____pauseCoroutineCounter_12;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		__this->____pauseCoroutineCounter_12 = L_5;
		int32_t L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = AudioObject__WaitThenPause_mBA919DCF479344030B9FBE2502F27BAAF2010FFB(__this, L_3, L_6, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_8;
		L_8 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_7, NULL);
		return;
	}

IL_0046:
	{
		AudioObject__PauseNow_mF42489087FEEDF0C996075155D4CC64C1FE98D63(__this, NULL);
		return;
	}
}
// System.Void ClockStone.AudioObject::_PauseNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject__PauseNow_mF42489087FEEDF0C996075155D4CC64C1FE98D63 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->____playScheduledTimeDsp_25;
		if ((!(((double)L_0) > ((double)(0.0)))))
		{
			goto IL_0032;
		}
	}
	{
		double L_1 = __this->____playScheduledTimeDsp_25;
		double L_2;
		L_2 = AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA(NULL);
		__this->____dspTimeRemainingAtPause_33 = ((double)il2cpp_codegen_subtract(L_1, L_2));
		AudioObject_set_scheduledPlayingAtDspTime_m5C72D87CBE3F8C55EB234A5D4C26D971194F21B3(__this, (9000000000.0), NULL);
	}

IL_0032:
	{
		AudioObject__PauseAudioSources_mBEE509105D05E0B7DB0B930B385C3F5EC4B858F4(__this, NULL);
		bool L_3 = __this->____pauseWithFadeOutRequested_32;
		if (!L_3)
		{
			goto IL_0052;
		}
	}
	{
		__this->____pauseWithFadeOutRequested_32 = (bool)0;
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* L_4 = __this->____primaryFader_20;
		NullCheck(L_4);
		AudioFader_Set0_m5A26A1EDA73CA85CE8EFBA9937EE55532D19E584(L_4, NULL);
	}

IL_0052:
	{
		return;
	}
}
// System.Void ClockStone.AudioObject::Unpause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_Unpause_m9A920C75F42E8F9E5AA972AB754EA97CE3AA8511 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		AudioObject_Unpause_m81B063BA096DEC318A7ABE62F8C7A03A556CB7E4(__this, (0.0f), NULL);
		return;
	}
}
// System.Void ClockStone.AudioObject::Unpause(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_Unpause_m81B063BA096DEC318A7ABE62F8C7A03A556CB7E4 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, float ___0_fadeInTime, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____paused_18;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		AudioObject__UnpauseNow_m24F4F58E4249055B7BEFC43D319F96B2E594F566(__this, NULL);
		float L_1 = ___0_fadeInTime;
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_001e;
		}
	}
	{
		float L_2 = ___0_fadeInTime;
		AudioObject_FadeIn_mE7C98E14EF6B0877C77DBBA6E48F090559C02539(__this, L_2, NULL);
	}

IL_001e:
	{
		__this->____pauseWithFadeOutRequested_32 = (bool)0;
		return;
	}
}
// System.Void ClockStone.AudioObject::_UnpauseNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject__UnpauseNow_m24F4F58E4249055B7BEFC43D319F96B2E594F566 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		__this->____paused_18 = (bool)0;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = AudioObject_get_secondaryAudioSource_m0CF34784C9E1E9C35DC1CF3D7AE9D78F34FF2FA8_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2 = __this->____secondaryAudioSourcePaused_44;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3;
		L_3 = AudioObject_get_secondaryAudioSource_m0CF34784C9E1E9C35DC1CF3D7AE9D78F34FF2FA8_inline(__this, NULL);
		NullCheck(L_3);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_3, NULL);
	}

IL_0027:
	{
		double L_4 = __this->____dspTimeRemainingAtPause_33;
		if ((!(((double)L_4) > ((double)(0.0)))))
		{
			goto IL_0082;
		}
	}
	{
		bool L_5 = __this->____primaryAudioSourcePaused_43;
		if (!L_5)
		{
			goto IL_0082;
		}
	}
	{
		double L_6;
		L_6 = AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA(NULL);
		double L_7 = __this->____dspTimeRemainingAtPause_33;
		V_0 = ((double)il2cpp_codegen_add(L_6, L_7));
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		double L_8;
		L_8 = AudioController_get_systemTime_mB3A112C83ABEB814B3F4377F12D1385E886A9A1F_inline(NULL);
		double L_9 = __this->____dspTimeRemainingAtPause_33;
		__this->____playStartTimeSystem_24 = ((double)il2cpp_codegen_add(L_8, L_9));
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10;
		L_10 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		double L_11 = V_0;
		NullCheck(L_10);
		AudioSource_PlayScheduled_m9F3C7245A13A1D4BC64AFA9A08763357133727D9(L_10, L_11, NULL);
		double L_12 = V_0;
		AudioObject_set_scheduledPlayingAtDspTime_m5C72D87CBE3F8C55EB234A5D4C26D971194F21B3(__this, L_12, NULL);
		__this->____dspTimeRemainingAtPause_33 = (-1.0);
		return;
	}

IL_0082:
	{
		bool L_13 = __this->____primaryAudioSourcePaused_43;
		if (!L_13)
		{
			goto IL_0095;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_14;
		L_14 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		NullCheck(L_14);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_14, NULL);
	}

IL_0095:
	{
		return;
	}
}
// System.Collections.IEnumerator ClockStone.AudioObject::_WaitThenPause(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AudioObject__WaitThenPause_mBA919DCF479344030B9FBE2502F27BAAF2010FFB (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, float ___0_waitTime, int32_t ___1_counter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3C_WaitThenPauseU3Ed__86_tFD34F3EC992FA2012BAF41C96E3F64D81058882A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3C_WaitThenPauseU3Ed__86_tFD34F3EC992FA2012BAF41C96E3F64D81058882A* L_0 = (U3C_WaitThenPauseU3Ed__86_tFD34F3EC992FA2012BAF41C96E3F64D81058882A*)il2cpp_codegen_object_new(U3C_WaitThenPauseU3Ed__86_tFD34F3EC992FA2012BAF41C96E3F64D81058882A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3C_WaitThenPauseU3Ed__86__ctor_mDD50BF89E05F4466DFE7C8ADD654FBC3DCC1F744(L_0, 0, NULL);
		U3C_WaitThenPauseU3Ed__86_tFD34F3EC992FA2012BAF41C96E3F64D81058882A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3C_WaitThenPauseU3Ed__86_tFD34F3EC992FA2012BAF41C96E3F64D81058882A* L_2 = L_1;
		float L_3 = ___0_waitTime;
		NullCheck(L_2);
		L_2->___waitTime_2 = L_3;
		U3C_WaitThenPauseU3Ed__86_tFD34F3EC992FA2012BAF41C96E3F64D81058882A* L_4 = L_2;
		int32_t L_5 = ___1_counter;
		NullCheck(L_4);
		L_4->___counter_4 = L_5;
		return L_4;
	}
}
// System.Void ClockStone.AudioObject::_PauseAudioSources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject__PauseAudioSources_mBEE509105D05E0B7DB0B930B385C3F5EC4B858F4 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_0, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		__this->____primaryAudioSourcePaused_43 = (bool)1;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		NullCheck(L_2);
		AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26(L_2, NULL);
		goto IL_0028;
	}

IL_0021:
	{
		__this->____primaryAudioSourcePaused_43 = (bool)0;
	}

IL_0028:
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3;
		L_3 = AudioObject_get_secondaryAudioSource_m0CF34784C9E1E9C35DC1CF3D7AE9D78F34FF2FA8_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0055;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5;
		L_5 = AudioObject_get_secondaryAudioSource_m0CF34784C9E1E9C35DC1CF3D7AE9D78F34FF2FA8_inline(__this, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_5, NULL);
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		__this->____secondaryAudioSourcePaused_44 = (bool)1;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7;
		L_7 = AudioObject_get_secondaryAudioSource_m0CF34784C9E1E9C35DC1CF3D7AE9D78F34FF2FA8_inline(__this, NULL);
		NullCheck(L_7);
		AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26(L_7, NULL);
		return;
	}

IL_0055:
	{
		__this->____secondaryAudioSourcePaused_44 = (bool)0;
		return;
	}
}
// System.Boolean ClockStone.AudioObject::IsPaused(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioObject_IsPaused_m3E5B6566C020302D843CF742122EC0A1DFDB5C08 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, bool ___0_returnTrueIfStillFadingOut, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_returnTrueIfStillFadingOut;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		bool L_1 = __this->____pauseWithFadeOutRequested_32;
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		bool L_2 = __this->____paused_18;
		return L_2;
	}

IL_0012:
	{
		return (bool)0;
	}

IL_0014:
	{
		bool L_3 = __this->____paused_18;
		return L_3;
	}
}
// System.Boolean ClockStone.AudioObject::IsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioObject_IsPlaying_m9A39EA279DC025604E0EB1423B38D2401CED651F (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = AudioObject_IsPrimaryPlaying_m5EFCCE428694C79A7A6F2C7DC988460C07E40CD0(__this, NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		bool L_1;
		L_1 = AudioObject_IsSecondaryPlaying_m9CF13022B78EA62701F9E43F9885FD4FD6B0934B(__this, NULL);
		return L_1;
	}

IL_000f:
	{
		return (bool)1;
	}
}
// System.Boolean ClockStone.AudioObject::IsPrimaryPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioObject_IsPrimaryPlaying_m5EFCCE428694C79A7A6F2C7DC988460C07E40CD0 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_0, NULL);
		return L_1;
	}
}
// System.Boolean ClockStone.AudioObject::IsSecondaryPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioObject_IsSecondaryPlaying_m9CF13022B78EA62701F9E43F9885FD4FD6B0934B (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = AudioObject_get_secondaryAudioSource_m0CF34784C9E1E9C35DC1CF3D7AE9D78F34FF2FA8_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = AudioObject_get_secondaryAudioSource_m0CF34784C9E1E9C35DC1CF3D7AE9D78F34FF2FA8_inline(__this, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_2, NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
// UnityEngine.AudioSource ClockStone.AudioObject::get_primaryAudioSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->____audioSource1_41;
		return L_0;
	}
}
// UnityEngine.AudioSource ClockStone.AudioObject::get_secondaryAudioSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* AudioObject_get_secondaryAudioSource_m0CF34784C9E1E9C35DC1CF3D7AE9D78F34FF2FA8 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->____audioSource2_42;
		return L_0;
	}
}
// System.Void ClockStone.AudioObject::SwitchAudioSources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_SwitchAudioSources_m50360C50BC6719AACB99613B8EA6C577F141DE02 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioObject__SwitchValues_TisAudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8_mD01DDF61AAD482FF917ABF510D6390A3759B5AD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioObject__SwitchValues_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m86A2AF4DF4D143489116E929D3A4C0B4066FE003_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioObject__SwitchValues_TisAudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3_m81B7579DB952183AA722630057764271354C34BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioObject__SwitchValues_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m46E67E3E75DD0AD4FFAA19643D52317BA37F1A32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->____audioSource2_42;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		AudioObject__CreateSecondAudioSource_mF4B9842B18AA1B709A1A7BD1403651747D7D2A14(__this, NULL);
	}

IL_0014:
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299** L_2 = (&__this->____audioSource1_41);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299** L_3 = (&__this->____audioSource2_42);
		AudioObject__SwitchValues_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m86A2AF4DF4D143489116E929D3A4C0B4066FE003(__this, L_2, L_3, AudioObject__SwitchValues_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m86A2AF4DF4D143489116E929D3A4C0B4066FE003_RuntimeMethod_var);
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8** L_4 = (&__this->____primaryFader_20);
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8** L_5 = (&__this->____secondaryFader_21);
		AudioObject__SwitchValues_TisAudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8_mD01DDF61AAD482FF917ABF510D6390A3759B5AD6(__this, L_4, L_5, AudioObject__SwitchValues_TisAudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8_mD01DDF61AAD482FF917ABF510D6390A3759B5AD6_RuntimeMethod_var);
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3** L_6 = (&__this->____subItemPrimary_9);
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3** L_7 = (&__this->____subItemSecondary_10);
		AudioObject__SwitchValues_TisAudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3_m81B7579DB952183AA722630057764271354C34BA(__this, L_6, L_7, AudioObject__SwitchValues_TisAudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3_m81B7579DB952183AA722630057764271354C34BA_RuntimeMethod_var);
		float* L_8 = (&__this->____volumeFromPrimaryFade_15);
		float* L_9 = (&__this->____volumeFromSecondaryFade_16);
		AudioObject__SwitchValues_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m46E67E3E75DD0AD4FFAA19643D52317BA37F1A32(__this, L_8, L_9, AudioObject__SwitchValues_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m46E67E3E75DD0AD4FFAA19643D52317BA37F1A32_RuntimeMethod_var);
		bool L_10 = __this->___areSources1and2Swapped_13;
		__this->___areSources1and2Swapped_13 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		return;
	}
}
// System.Single ClockStone.AudioObject::get__volumeFromCategory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioObject_get__volumeFromCategory_m2C856B7B608B413DCBDA254F26A4733419950E03 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_0;
		L_0 = AudioObject_get_category_m1B694D47010EA8BEDF53B11C36F460F99CE67AAD_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_1;
		L_1 = AudioObject_get_category_m1B694D47010EA8BEDF53B11C36F460F99CE67AAD_inline(__this, NULL);
		NullCheck(L_1);
		float L_2;
		L_2 = AudioCategory_get_VolumeTotal_m972D0490ECC2ED900D325E146ED55107082824C7(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		return (1.0f);
	}
}
// System.Single ClockStone.AudioObject::get__volumeWithCategory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioObject_get__volumeWithCategory_mD4749ADDA041F370362BD3BC4F9742AF19A23817 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = AudioObject_get__volumeFromCategory_m2C856B7B608B413DCBDA254F26A4733419950E03(__this, NULL);
		float L_1 = __this->____volumeExcludingCategory_14;
		return ((float)il2cpp_codegen_multiply(L_0, L_1));
	}
}
// System.Single ClockStone.AudioObject::get__stopClipAtTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioObject_get__stopClipAtTime_m1D112BF58ED2ED81BDCFF2A6801E62189933DD81 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_0;
		L_0 = AudioObject_get_subItem_mE36DC432092EBB487061B7FA4BCD2E6A198CF1CC_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		return (0.0f);
	}

IL_000e:
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_1;
		L_1 = AudioObject_get_subItem_mE36DC432092EBB487061B7FA4BCD2E6A198CF1CC_inline(__this, NULL);
		NullCheck(L_1);
		float L_2 = L_1->___ClipStopTime_12;
		return L_2;
	}
}
// System.Single ClockStone.AudioObject::get__startClipAtTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioObject_get__startClipAtTime_m8D667511D4F804DF10569940B2026AE44EAE0F81 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_0;
		L_0 = AudioObject_get_subItem_mE36DC432092EBB487061B7FA4BCD2E6A198CF1CC_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		return (0.0f);
	}

IL_000e:
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_1;
		L_1 = AudioObject_get_subItem_mE36DC432092EBB487061B7FA4BCD2E6A198CF1CC_inline(__this, NULL);
		NullCheck(L_1);
		float L_2 = L_1->___ClipStartTime_13;
		return L_2;
	}
}
// System.Void ClockStone.AudioObject::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_Awake_m47DD34B231C8D267D51779F4EBCFC5FB48B0AF1F (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m2C6D82D3DE7BFC234CEA24B6AC1EF7A3035F2D21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA483326EA55F0A6B9A8E3AE0E21669F06C201513);
		s_Il2CppMethodInitialized = true;
	}
	AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* V_0 = NULL;
	{
		RegisteredComponent_Awake_mC8F26A2390ED9A931DF40118CE10B9F60645B401(__this, NULL);
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* L_0 = __this->____primaryFader_20;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* L_1 = (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8*)il2cpp_codegen_object_new(AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AudioFader__ctor_m69B587C0B8EB180089B21B01590CF14E9C153344(L_1, NULL);
		__this->____primaryFader_20 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____primaryFader_20), (void*)L_1);
		goto IL_0026;
	}

IL_001b:
	{
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* L_2 = __this->____primaryFader_20;
		NullCheck(L_2);
		AudioFader_Set0_m5A26A1EDA73CA85CE8EFBA9937EE55532D19E584(L_2, NULL);
	}

IL_0026:
	{
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* L_3 = __this->____secondaryFader_21;
		if (L_3)
		{
			goto IL_003b;
		}
	}
	{
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* L_4 = (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8*)il2cpp_codegen_object_new(AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AudioFader__ctor_m69B587C0B8EB180089B21B01590CF14E9C153344(L_4, NULL);
		__this->____secondaryFader_21 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____secondaryFader_21), (void*)L_4);
		goto IL_0046;
	}

IL_003b:
	{
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* L_5 = __this->____secondaryFader_21;
		NullCheck(L_5);
		AudioFader_Set0_m5A26A1EDA73CA85CE8EFBA9937EE55532D19E584(L_5, NULL);
	}

IL_0046:
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->____audioSource1_41;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0085;
		}
	}
	{
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_8;
		L_8 = Component_GetComponents_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m2C6D82D3DE7BFC234CEA24B6AC1EF7A3035F2D21(__this, Component_GetComponents_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m2C6D82D3DE7BFC234CEA24B6AC1EF7A3035F2D21_RuntimeMethod_var);
		V_0 = L_8;
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_9 = V_0;
		NullCheck(L_9);
		if ((((RuntimeArray*)L_9)->max_length))
		{
			goto IL_006b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralA483326EA55F0A6B9A8E3AE0E21669F06C201513, NULL);
		goto IL_00a0;
	}

IL_006b:
	{
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = 0;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		__this->____audioSource1_41 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____audioSource1_41), (void*)L_12);
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))) < ((int32_t)2)))
		{
			goto IL_00a0;
		}
	}
	{
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = 1;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		__this->____audioSource2_42 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____audioSource2_42), (void*)L_16);
		goto IL_00a0;
	}

IL_0085:
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_17 = __this->____audioSource2_42;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_17, NULL);
		if (!L_18)
		{
			goto IL_00a0;
		}
	}
	{
		bool L_19 = __this->___areSources1and2Swapped_13;
		if (!L_19)
		{
			goto IL_00a0;
		}
	}
	{
		AudioObject_SwitchAudioSources_m50360C50BC6719AACB99613B8EA6C577F141DE02(__this, NULL);
	}

IL_00a0:
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_20;
		L_20 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		NullCheck(L_20);
		AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* L_21;
		L_21 = AudioSource_get_outputAudioMixerGroup_mE141F3A6337D84F9BD43196A28CC85D092695CAB(L_20, NULL);
		__this->____audioMixerGroup_39 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____audioMixerGroup_39), (void*)L_21);
		AudioObject__Set0_mEEEE226885A561AE5B2B481120C643DC86A0B4F5(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_22;
		L_22 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		__this->____audioController_34 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____audioController_34), (void*)L_22);
		return;
	}
}
// System.Void ClockStone.AudioObject::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_OnEnable_m7EEC587D63D4F4B273E8817B5F279FD9DBC076B2 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____primarySourceWasPlayingWhenDisabled_45;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		__this->____primarySourceWasPlayingWhenDisabled_45 = (bool)0;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		NullCheck(L_1);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_1, NULL);
	}

IL_001a:
	{
		bool L_2 = __this->____secondarySourceWasPlayingWhenDisabled_47;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		__this->____secondarySourceWasPlayingWhenDisabled_47 = (bool)0;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3;
		L_3 = AudioObject_get_secondaryAudioSource_m0CF34784C9E1E9C35DC1CF3D7AE9D78F34FF2FA8_inline(__this, NULL);
		NullCheck(L_3);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_3, NULL);
	}

IL_0034:
	{
		return;
	}
}
// System.Void ClockStone.AudioObject::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_OnDisable_m6430F3EF929A004FBE44930E32B7DCD6C65C8768 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* G_B4_0 = NULL;
	AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* G_B5_1 = NULL;
	AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* G_B7_0 = NULL;
	AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* G_B8_1 = NULL;
	{
		bool L_0 = __this->____IsInactive_27;
		if (L_0)
		{
			goto IL_004b;
		}
	}
	{
		bool L_1;
		L_1 = AudioObject_IsPaused_m3E5B6566C020302D843CF742122EC0A1DFDB5C08(__this, (bool)0, NULL);
		if (L_1)
		{
			goto IL_004b;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = __this;
		if (!L_3)
		{
			G_B4_0 = __this;
			goto IL_0028;
		}
	}
	{
		bool L_4 = __this->____primarySourceWasPlayingLastUpdate_46;
		G_B5_0 = ((int32_t)(L_4));
		G_B5_1 = G_B3_0;
		goto IL_0029;
	}

IL_0028:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
	}

IL_0029:
	{
		NullCheck(G_B5_1);
		G_B5_1->____primarySourceWasPlayingWhenDisabled_45 = (bool)G_B5_0;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5;
		L_5 = AudioObject_get_secondaryAudioSource_m0CF34784C9E1E9C35DC1CF3D7AE9D78F34FF2FA8_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B6_0 = __this;
		if (!L_6)
		{
			G_B7_0 = __this;
			goto IL_0045;
		}
	}
	{
		bool L_7 = __this->____secondarySourceWasPlayingLastUpdate_48;
		G_B8_0 = ((int32_t)(L_7));
		G_B8_1 = G_B6_0;
		goto IL_0046;
	}

IL_0045:
	{
		G_B8_0 = 0;
		G_B8_1 = G_B7_0;
	}

IL_0046:
	{
		NullCheck(G_B8_1);
		G_B8_1->____secondarySourceWasPlayingWhenDisabled_47 = (bool)G_B8_0;
	}

IL_004b:
	{
		return;
	}
}
// System.Void ClockStone.AudioObject::_CreateSecondAudioSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject__CreateSecondAudioSource_mF4B9842B18AA1B709A1A7BD1403651747D7D2A14 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14(L_0, GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		__this->____audioSource2_42 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____audioSource2_42), (void*)L_1);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->____audioSource2_42;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->____audioSource1_41;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = AudioSource_get_rolloffMode_m1D5F4CCF83174583ACF0C365051E58978ED02CFD(L_3, NULL);
		NullCheck(L_2);
		AudioSource_set_rolloffMode_m441D9552D8648D6040E66EE2C2650A79DC5E6FB4(L_2, L_4, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = __this->____audioSource2_42;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->____audioSource1_41;
		NullCheck(L_6);
		float L_7;
		L_7 = AudioSource_get_minDistance_m459BE399BBBEA04CBBCF50CFB15A09CB3D7431F0(L_6, NULL);
		NullCheck(L_5);
		AudioSource_set_minDistance_m6CBE3A60C03C0F179192FBDD62095B2E9D717690(L_5, L_7, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = __this->____audioSource2_42;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = __this->____audioSource1_41;
		NullCheck(L_9);
		float L_10;
		L_10 = AudioSource_get_maxDistance_m8C31CB391B999C8D344EFF0AFB8E20488F7A5F7E(L_9, NULL);
		NullCheck(L_8);
		AudioSource_set_maxDistance_m4BF310D54761500A77A6C4841A0BBDBD09225813(L_8, L_10, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11 = __this->____audioSource2_42;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12 = __this->____audioSource1_41;
		NullCheck(L_12);
		float L_13;
		L_13 = AudioSource_get_dopplerLevel_m7BF6F31D1E8927E059BC87933AD9B81D63AF97BE(L_12, NULL);
		NullCheck(L_11);
		AudioSource_set_dopplerLevel_mB9AC5164E5AF16ACECA3B8E29F5C8573C37E40D6(L_11, L_13, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_14 = __this->____audioSource2_42;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_15 = __this->____audioSource1_41;
		NullCheck(L_15);
		float L_16;
		L_16 = AudioSource_get_spread_mC21DF6C651AD67BEB5D721F0EA0B2F3B080F4C77(L_15, NULL);
		NullCheck(L_14);
		AudioSource_set_spread_mDFBC1BF11837C26EF9763A8DEEFC56AF95F6E83F(L_14, L_16, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_17 = __this->____audioSource2_42;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_18 = __this->____audioSource1_41;
		NullCheck(L_18);
		float L_19;
		L_19 = AudioSource_get_spatialBlend_m06E7948B2813AA3EAE031BD4D1DE61A29416B1CE(L_18, NULL);
		NullCheck(L_17);
		AudioSource_set_spatialBlend_mCEE7A3E87A8C146E048B2CA3413FDC7BDB7BE001(L_17, L_19, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_20 = __this->____audioSource2_42;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_21 = __this->____audioSource1_41;
		NullCheck(L_21);
		AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* L_22;
		L_22 = AudioSource_get_outputAudioMixerGroup_mE141F3A6337D84F9BD43196A28CC85D092695CAB(L_21, NULL);
		NullCheck(L_20);
		AudioSource_set_outputAudioMixerGroup_m10D0A0EAE270424CD2F3BB960CFAA158D9FC24CF(L_20, L_22, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_23 = __this->____audioSource2_42;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_24 = __this->____audioSource1_41;
		NullCheck(L_24);
		bool L_25;
		L_25 = AudioSource_get_spatialize_m5CA89537077D4BB8DBAABFD8EB36D0B89BA8DACB(L_24, NULL);
		NullCheck(L_23);
		AudioSource_set_spatialize_mDFA357EDCB0C59EF11F53C845F7ACBF6BF7F7B3C(L_23, L_25, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_26 = __this->____audioSource2_42;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_27 = __this->____audioSource1_41;
		NullCheck(L_27);
		bool L_28;
		L_28 = AudioSource_get_spatializePostEffects_m02D6863671C49B81DFACDA623C74188B1FD950A4(L_27, NULL);
		NullCheck(L_26);
		AudioSource_set_spatializePostEffects_m7CC219B7790E27667D49F4A36C8F62FFF399DA54(L_26, L_28, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_29 = __this->____audioSource2_42;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_30 = __this->____audioSource1_41;
		NullCheck(L_30);
		bool L_31;
		L_31 = AudioSource_get_bypassListenerEffects_m47CE7EC60DB5D13E4D818CFA6D5E1B9D6134EF02(L_30, NULL);
		NullCheck(L_29);
		AudioSource_set_bypassListenerEffects_m321403F18B6174D2E91D080DBF5090C29BC11899(L_29, L_31, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_32 = __this->____audioSource2_42;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_33 = __this->____audioSource1_41;
		NullCheck(L_33);
		bool L_34;
		L_34 = AudioSource_get_bypassReverbZones_mA640A5F9FF8E52777CF13950D966839729D1B3DF(L_33, NULL);
		NullCheck(L_32);
		AudioSource_set_bypassReverbZones_m900FD2BA30F36243B5A5B872B0D019CBAB6AC410(L_32, L_34, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_35 = __this->____audioSource2_42;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_36 = __this->____audioSource1_41;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = AudioSource_get_velocityUpdateMode_mEFF48403F8A591A14927408F806E0603391E153B(L_36, NULL);
		NullCheck(L_35);
		AudioSource_set_velocityUpdateMode_m379F5704F12211BFB9AF3E3DE6647A6B057C7426(L_35, L_37, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_38 = __this->____audioSource2_42;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_39 = __this->____audioSource1_41;
		NullCheck(L_39);
		bool L_40;
		L_40 = AudioSource_get_ignoreListenerVolume_mC58B59373161017F770D42A36C536511805AE87C(L_39, NULL);
		NullCheck(L_38);
		AudioSource_set_ignoreListenerVolume_mAB973FFB2B666C4C6DE3BF34C930C28CC315731D(L_38, L_40, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_41 = __this->____audioSource2_42;
		NullCheck(L_41);
		AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949(L_41, (bool)0, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_42 = __this->____audioSource2_42;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_43 = __this->____audioSource1_41;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = AudioSource_get_priority_mD4B6D16F6BCB1D5ACA3F2CC096EDA8861DA66881(L_43, NULL);
		NullCheck(L_42);
		AudioSource_set_priority_mD1AB7ED858D8A1233642F5DBA81AEFBE35DD4B40(L_42, L_44, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_45 = __this->____audioSource2_42;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_46 = __this->____audioSource1_41;
		NullCheck(L_46);
		bool L_47;
		L_47 = AudioSource_get_bypassEffects_m0172FACE00674F743A70870EB138B3223D42A35E(L_46, NULL);
		NullCheck(L_45);
		AudioSource_set_bypassEffects_m56E81C34448803D4B63105071D96AC644CFFEA9A(L_45, L_47, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_48 = __this->____audioSource2_42;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_49 = __this->____audioSource1_41;
		NullCheck(L_49);
		bool L_50;
		L_50 = AudioSource_get_ignoreListenerPause_m544337985D4025632846D4AB4EC1ADD0CF0B4B01(L_49, NULL);
		NullCheck(L_48);
		AudioSource_set_ignoreListenerPause_m1BC14FA0984DEDF62E1CDBAB323950100A0BF2B4(L_48, L_50, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_51 = __this->____audioSource2_42;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_52 = __this->____audioSource1_41;
		NullCheck(L_52);
		bool L_53;
		L_53 = AudioSource_get_bypassListenerEffects_m47CE7EC60DB5D13E4D818CFA6D5E1B9D6134EF02(L_52, NULL);
		NullCheck(L_51);
		AudioSource_set_bypassListenerEffects_m321403F18B6174D2E91D080DBF5090C29BC11899(L_51, L_53, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_54 = __this->____audioSource2_42;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_55 = __this->____audioSource1_41;
		NullCheck(L_55);
		bool L_56;
		L_56 = AudioSource_get_bypassReverbZones_mA640A5F9FF8E52777CF13950D966839729D1B3DF(L_55, NULL);
		NullCheck(L_54);
		AudioSource_set_bypassReverbZones_m900FD2BA30F36243B5A5B872B0D019CBAB6AC410(L_54, L_56, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_57 = __this->____audioSource2_42;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_58 = __this->____audioSource1_41;
		NullCheck(L_58);
		float L_59;
		L_59 = AudioSource_get_reverbZoneMix_mA1BE21696195BADD380311B236AA46314911B859(L_58, NULL);
		NullCheck(L_57);
		AudioSource_set_reverbZoneMix_m0AD755F3841952B06F87767F97CA93E2C9545D1E(L_57, L_59, NULL);
		return;
	}
}
// System.Void ClockStone.AudioObject::_Set0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject__Set0_mEEEE226885A561AE5B2B481120C643DC86A0B4F5 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioObject__SetReferences0_m79F2B7A07E22DAB9AD76CFFBAE879F67AE4AE4AB(__this, NULL);
		__this->____audioObjectTime_26 = (0.0);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		NullCheck(L_0);
		AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949(L_0, (bool)0, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = AudioObject_get_secondaryAudioSource_m0CF34784C9E1E9C35DC1CF3D7AE9D78F34FF2FA8_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3;
		L_3 = AudioObject_get_secondaryAudioSource_m0CF34784C9E1E9C35DC1CF3D7AE9D78F34FF2FA8_inline(__this, NULL);
		NullCheck(L_3);
		AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949(L_3, (bool)0, NULL);
	}

IL_003a:
	{
		__this->____lastChosenSubItemIndex_40 = (-1);
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* L_4 = __this->____primaryFader_20;
		NullCheck(L_4);
		AudioFader_Set0_m5A26A1EDA73CA85CE8EFBA9937EE55532D19E584(L_4, NULL);
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* L_5 = __this->____secondaryFader_21;
		NullCheck(L_5);
		AudioFader_Set0_m5A26A1EDA73CA85CE8EFBA9937EE55532D19E584(L_5, NULL);
		__this->____playTime_22 = (-1.0);
		__this->____playStartTimeLocal_23 = (-1.0);
		__this->____playStartTimeSystem_24 = (-1.0);
		__this->____playScheduledTimeDsp_25 = (-1.0);
		__this->____volumeFromPrimaryFade_15 = (1.0f);
		__this->____volumeFromSecondaryFade_16 = (1.0f);
		__this->____volumeFromScriptCall_17 = (1.0f);
		__this->____IsInactive_27 = (bool)1;
		__this->____stopRequested_28 = (bool)0;
		__this->____finishSequence_29 = (bool)0;
		__this->____volumeExcludingCategory_14 = (1.0f);
		__this->____paused_18 = (bool)0;
		__this->____applicationPaused_19 = (bool)0;
		__this->____isCurrentPlaylistTrack_35 = (bool)0;
		__this->____loopSequenceCount_30 = 0;
		__this->____stopAfterFadeoutUserSetting_31 = (bool)1;
		__this->____pauseWithFadeOutRequested_32 = (bool)0;
		__this->____dspTimeRemainingAtPause_33 = (-1.0);
		__this->____primaryAudioSourcePaused_43 = (bool)0;
		__this->____secondaryAudioSourcePaused_44 = (bool)0;
		__this->____primarySourceWasPlayingWhenDisabled_45 = (bool)0;
		__this->____secondarySourceWasPlayingWhenDisabled_47 = (bool)0;
		__this->____primarySourceWasPlayingLastUpdate_46 = (bool)0;
		__this->____secondarySourceWasPlayingLastUpdate_48 = (bool)0;
		return;
	}
}
// System.Void ClockStone.AudioObject::_SetReferences0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject__SetReferences0_m79F2B7A07E22DAB9AD76CFFBAE879F67AE4AE4AB (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->____audioController_34 = (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____audioController_34), (void*)(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B*)NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		NullCheck(L_0);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_0, (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)NULL, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = AudioObject_get_secondaryAudioSource_m0CF34784C9E1E9C35DC1CF3D7AE9D78F34FF2FA8_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3;
		L_3 = AudioObject_get_secondaryAudioSource_m0CF34784C9E1E9C35DC1CF3D7AE9D78F34FF2FA8_inline(__this, NULL);
		NullCheck(L_3);
		AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949(L_3, (bool)0, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4;
		L_4 = AudioObject_get_secondaryAudioSource_m0CF34784C9E1E9C35DC1CF3D7AE9D78F34FF2FA8_inline(__this, NULL);
		NullCheck(L_4);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_4, (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)NULL, NULL);
	}

IL_0039:
	{
		AudioObject_set_subItem_m84C0283818EFCF174279DD41374EB80FC9BC0250_inline(__this, (AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3*)NULL, NULL);
		AudioObject_set_category_m7341517B0BDD393E77BE2E576F21F1494CDAC1E1_inline(__this, (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA*)NULL, NULL);
		__this->____completelyPlayedDelegate_11 = (AudioEventDelegate_tC8822AE744F66D86E67505066207E918FAD55B49*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____completelyPlayedDelegate_11), (void*)(AudioEventDelegate_tC8822AE744F66D86E67505066207E918FAD55B49*)NULL);
		return;
	}
}
// System.Void ClockStone.AudioObject::_PlayScheduled(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject__PlayScheduled_mCBC287864C5BA629C95E67BB1E1A81A63F8D2FE7 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, double ___0_dspTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF05EFA084E340F89C4DE5E74F7E360320930829E);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		NullCheck(L_0);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1;
		L_1 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (L_2)
		{
			goto IL_002d;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF05EFA084E340F89C4DE5E74F7E360320930829E, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_5, NULL);
		return;
	}

IL_002d:
	{
		double L_6 = ___0_dspTime;
		__this->____playScheduledTimeDsp_25 = L_6;
		double L_7 = ___0_dspTime;
		double L_8;
		L_8 = AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA(NULL);
		V_0 = ((double)il2cpp_codegen_subtract(L_7, L_8));
		double L_9 = V_0;
		double L_10;
		L_10 = AudioObject_get_audioObjectTime_mC84CEB1B5C2BFAC1C2AA49FAF3902EBF5C6A24CE_inline(__this, NULL);
		__this->____playStartTimeLocal_23 = ((double)il2cpp_codegen_add(L_9, L_10));
		double L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = AudioController_get_systemTime_mB3A112C83ABEB814B3F4377F12D1385E886A9A1F_inline(NULL);
		__this->____playStartTimeSystem_24 = ((double)il2cpp_codegen_add(L_11, L_12));
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_13;
		L_13 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		double L_14 = ___0_dspTime;
		NullCheck(L_13);
		AudioSource_PlayScheduled_m9F3C7245A13A1D4BC64AFA9A08763357133727D9(L_13, L_14, NULL);
		AudioObject__OnPlay_mA334659B07EDFEF498F90C0743023921B9025795(__this, NULL);
		return;
	}
}
// System.Void ClockStone.AudioObject::_PlayDelayed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject__PlayDelayed_mBF496BC9D5DC41A7EA6745850063A9BEBC831DD6 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, float ___0_delay, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF05EFA084E340F89C4DE5E74F7E360320930829E);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		NullCheck(L_0);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1;
		L_1 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (L_2)
		{
			goto IL_002d;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF05EFA084E340F89C4DE5E74F7E360320930829E, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_5, NULL);
		return;
	}

IL_002d:
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6;
		L_6 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		float L_7 = ___0_delay;
		NullCheck(L_6);
		AudioSource_PlayDelayed_m6A4992F1A010DC12906C6002B22F19082967770E(L_6, L_7, NULL);
		__this->____playScheduledTimeDsp_25 = (-1.0);
		double L_8;
		L_8 = AudioObject_get_audioObjectTime_mC84CEB1B5C2BFAC1C2AA49FAF3902EBF5C6A24CE_inline(__this, NULL);
		float L_9 = ___0_delay;
		__this->____playStartTimeLocal_23 = ((double)il2cpp_codegen_add(L_8, ((double)L_9)));
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		double L_10;
		L_10 = AudioController_get_systemTime_mB3A112C83ABEB814B3F4377F12D1385E886A9A1F_inline(NULL);
		float L_11 = ___0_delay;
		__this->____playStartTimeSystem_24 = ((double)il2cpp_codegen_add(L_10, ((double)L_11)));
		AudioObject__OnPlay_mA334659B07EDFEF498F90C0743023921B9025795(__this, NULL);
		return;
	}
}
// System.Void ClockStone.AudioObject::_OnPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject__OnPlay_mA334659B07EDFEF498F90C0743023921B9025795 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		__this->____IsInactive_27 = (bool)0;
		double L_0;
		L_0 = AudioObject_get_audioObjectTime_mC84CEB1B5C2BFAC1C2AA49FAF3902EBF5C6A24CE_inline(__this, NULL);
		__this->____playTime_22 = L_0;
		__this->____paused_18 = (bool)0;
		__this->____primaryAudioSourcePaused_43 = (bool)0;
		__this->____secondaryAudioSourcePaused_44 = (bool)0;
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* L_1 = __this->____primaryFader_20;
		NullCheck(L_1);
		AudioFader_Set0_m5A26A1EDA73CA85CE8EFBA9937EE55532D19E584(L_1, NULL);
		return;
	}
}
// System.Void ClockStone.AudioObject::_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject__Stop_mA2DE6F2B7F72F8C2AF16A884F11019C9D62D67E3 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* L_0 = __this->____primaryFader_20;
		NullCheck(L_0);
		AudioFader_Set0_m5A26A1EDA73CA85CE8EFBA9937EE55532D19E584(L_0, NULL);
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* L_1 = __this->____secondaryFader_21;
		NullCheck(L_1);
		AudioFader_Set0_m5A26A1EDA73CA85CE8EFBA9937EE55532D19E584(L_1, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		NullCheck(L_2);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_2, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3;
		L_3 = AudioObject_get_secondaryAudioSource_m0CF34784C9E1E9C35DC1CF3D7AE9D78F34FF2FA8_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5;
		L_5 = AudioObject_get_secondaryAudioSource_m0CF34784C9E1E9C35DC1CF3D7AE9D78F34FF2FA8_inline(__this, NULL);
		NullCheck(L_5);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_5, NULL);
	}

IL_0039:
	{
		__this->____paused_18 = (bool)0;
		__this->____primaryAudioSourcePaused_43 = (bool)0;
		__this->____secondaryAudioSourcePaused_44 = (bool)0;
		__this->____primarySourceWasPlayingLastUpdate_46 = (bool)0;
		__this->____secondarySourceWasPlayingLastUpdate_48 = (bool)0;
		return;
	}
}
// System.Void ClockStone.AudioObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_Update_m8E7E034CADCE3ECB12DF2729C5BBE510B2A67C47 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		bool L_0 = __this->____IsInactive_27;
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
		bool L_1;
		L_1 = AudioObject_IsPaused_m3E5B6566C020302D843CF742122EC0A1DFDB5C08(__this, (bool)0, NULL);
		if (L_1)
		{
			goto IL_0046;
		}
	}
	{
		double L_2 = __this->____audioObjectTime_26;
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = AudioController_get_systemDeltaTime_m276484A295F65B3638BCA16FD90B7016E78BD8C2_inline(NULL);
		__this->____audioObjectTime_26 = ((double)il2cpp_codegen_add(L_2, L_3));
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* L_4 = __this->____primaryFader_20;
		double L_5 = __this->____audioObjectTime_26;
		NullCheck(L_4);
		AudioFader_set_time_m7D1CD98970587468432FE8B7942D010E7BCD31B9_inline(L_4, L_5, NULL);
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* L_6 = __this->____secondaryFader_21;
		double L_7 = __this->____audioObjectTime_26;
		NullCheck(L_6);
		AudioFader_set_time_m7D1CD98970587468432FE8B7942D010E7BCD31B9_inline(L_6, L_7, NULL);
	}

IL_0046:
	{
		double L_8 = __this->____playScheduledTimeDsp_25;
		if ((!(((double)L_8) > ((double)(0.0)))))
		{
			goto IL_0074;
		}
	}
	{
		double L_9 = __this->____audioObjectTime_26;
		double L_10 = __this->____playStartTimeLocal_23;
		if ((!(((double)L_9) > ((double)L_10))))
		{
			goto IL_0074;
		}
	}
	{
		__this->____playScheduledTimeDsp_25 = (-1.0);
	}

IL_0074:
	{
		bool L_11;
		L_11 = AudioObject_IsPrimaryPlaying_m5EFCCE428694C79A7A6F2C7DC988460C07E40CD0(__this, NULL);
		V_0 = L_11;
		bool L_12;
		L_12 = AudioObject_IsSecondaryPlaying_m9CF13022B78EA62701F9E43F9885FD4FD6B0934B(__this, NULL);
		V_1 = L_12;
		bool L_13 = V_0;
		__this->____primarySourceWasPlayingLastUpdate_46 = L_13;
		bool L_14 = V_1;
		__this->____secondarySourceWasPlayingLastUpdate_48 = L_14;
		bool L_15 = __this->____paused_18;
		if (L_15)
		{
			goto IL_01c9;
		}
	}
	{
		bool L_16 = __this->____applicationPaused_19;
		if (L_16)
		{
			goto IL_01c9;
		}
	}
	{
		bool L_17 = V_0;
		if (L_17)
		{
			goto IL_00fe;
		}
	}
	{
		bool L_18 = V_1;
		if (L_18)
		{
			goto IL_00fe;
		}
	}
	{
		V_2 = (bool)1;
		bool L_19 = __this->____stopRequested_28;
		if (L_19)
		{
			goto IL_00d7;
		}
	}
	{
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_00d7;
		}
	}
	{
		AudioEventDelegate_tC8822AE744F66D86E67505066207E918FAD55B49* L_21;
		L_21 = AudioObject_get_completelyPlayedDelegate_m778A754922B2E833AACEC21D9F5655DC4F4A408D_inline(__this, NULL);
		if (!L_21)
		{
			goto IL_00d7;
		}
	}
	{
		AudioEventDelegate_tC8822AE744F66D86E67505066207E918FAD55B49* L_22;
		L_22 = AudioObject_get_completelyPlayedDelegate_m778A754922B2E833AACEC21D9F5655DC4F4A408D_inline(__this, NULL);
		NullCheck(L_22);
		AudioEventDelegate_Invoke_m6CEE69572000A08372439B0733B708B13F2E769D_inline(L_22, __this, NULL);
		bool L_23;
		L_23 = AudioObject_IsPlaying_m9A39EA279DC025604E0EB1423B38D2401CED651F(__this, NULL);
		V_2 = (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_00d7:
	{
		bool L_24 = __this->____isCurrentPlaylistTrack_35;
		if (!L_24)
		{
			goto IL_00f1;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = AudioController_DoesInstanceExist_m6AF468A9E14546039D6929D36BF5CC749ECBAC94(NULL);
		if (!L_25)
		{
			goto IL_00f1;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_26;
		L_26 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		NullCheck(L_26);
		AudioController__NotifyPlaylistTrackCompleteleyPlayed_m4ECBAF059035FA03411CF46005B3A13AA2D67A3A(L_26, __this, NULL);
	}

IL_00f1:
	{
		bool L_27 = V_2;
		if (!L_27)
		{
			goto IL_01c9;
		}
	}
	{
		AudioObject_DestroyAudioObject_m10D228A30219C1B1364250EAFB8FEBFBC2F9E75A(__this, NULL);
		return;
	}

IL_00fe:
	{
		bool L_28 = __this->____stopRequested_28;
		if (L_28)
		{
			goto IL_0151;
		}
	}
	{
		bool L_29;
		L_29 = AudioObject__IsAudioLoopSequenceMode_mD941DC910428D21B428B736113AA719C8C1512B2(__this, NULL);
		if (!L_29)
		{
			goto IL_0151;
		}
	}
	{
		bool L_30;
		L_30 = AudioObject_IsSecondaryPlaying_m9CF13022B78EA62701F9E43F9885FD4FD6B0934B(__this, NULL);
		if (L_30)
		{
			goto IL_0151;
		}
	}
	{
		float L_31;
		L_31 = AudioObject_get_timeUntilEnd_m128758E4D90E1C16EDBA09DC993FDE766CBF3605(__this, NULL);
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_32;
		L_32 = AudioObject_get_audioItem_mA684BBD00181C2E65E7FE103BA73BC08530F4C35(__this, NULL);
		NullCheck(L_32);
		float L_33 = L_32->___loopSequenceOverlap_3;
		float L_34;
		L_34 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((0.0f), L_33, NULL);
		if ((!(((float)L_31) < ((float)((float)il2cpp_codegen_add((1.0f), L_34))))))
		{
			goto IL_0151;
		}
	}
	{
		double L_35 = __this->____playScheduledTimeDsp_25;
		if ((!(((double)L_35) < ((double)(0.0)))))
		{
			goto IL_0151;
		}
	}
	{
		bool L_36;
		L_36 = AudioObject__ScheduleNextInLoopSequence_m2566C66A5171E878436E4F199CA94B64EAFDC062(__this, NULL);
	}

IL_0151:
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_37;
		L_37 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		NullCheck(L_37);
		bool L_38;
		L_38 = AudioSource_get_loop_m2D83BF58E1BD1BEE4CC80413C12E761D3310FC2C(L_37, NULL);
		if (L_38)
		{
			goto IL_01c9;
		}
	}
	{
		bool L_39 = __this->____isCurrentPlaylistTrack_35;
		if (!L_39)
		{
			goto IL_01ae;
		}
	}
	{
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_40 = __this->____audioController_34;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_41;
		L_41 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_40, NULL);
		if (!L_41)
		{
			goto IL_01ae;
		}
	}
	{
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_42 = __this->____audioController_34;
		NullCheck(L_42);
		bool L_43 = L_42->___crossfadePlaylist_24;
		if (!L_43)
		{
			goto IL_01ae;
		}
	}
	{
		float L_44;
		L_44 = AudioObject_get_audioTime_m6B5A2EE06A41C5BF22E40B566F9CC651A2577F1D(__this, NULL);
		float L_45;
		L_45 = AudioObject_get_clipLength_mB96E3BA96B35CA8F1B7AFFB032F33197D76335CC(__this, NULL);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_46 = __this->____audioController_34;
		NullCheck(L_46);
		float L_47;
		L_47 = AudioController_get_musicCrossFadeTime_Out_m7EA9DEAAB1B393141B55C39126BDE10E67EFAC67(L_46, NULL);
		if ((!(((float)L_44) > ((float)((float)il2cpp_codegen_subtract(L_45, L_47))))))
		{
			goto IL_01ae;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		bool L_48;
		L_48 = AudioController_DoesInstanceExist_m6AF468A9E14546039D6929D36BF5CC749ECBAC94(NULL);
		if (!L_48)
		{
			goto IL_01c9;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_49;
		L_49 = AudioController_get_Instance_mF489906348A086C8C95DC3C53A45B2B1E3644A82(NULL);
		NullCheck(L_49);
		AudioController__NotifyPlaylistTrackCompleteleyPlayed_m4ECBAF059035FA03411CF46005B3A13AA2D67A3A(L_49, __this, NULL);
		goto IL_01c9;
	}

IL_01ae:
	{
		AudioObject__StartFadeOutIfNecessary_mAF1C85E3073CA95429066306FA7DC7BF1577B9B7(__this, NULL);
		bool L_50 = V_1;
		if (!L_50)
		{
			goto IL_01c9;
		}
	}
	{
		AudioObject_SwitchAudioSources_m50360C50BC6719AACB99613B8EA6C577F141DE02(__this, NULL);
		AudioObject__StartFadeOutIfNecessary_mAF1C85E3073CA95429066306FA7DC7BF1577B9B7(__this, NULL);
		AudioObject_SwitchAudioSources_m50360C50BC6719AACB99613B8EA6C577F141DE02(__this, NULL);
	}

IL_01c9:
	{
		AudioObject__UpdateFadeVolume_mF786330E839E40C100D02F30C8C85C530982A1B4(__this, NULL);
		return;
	}
}
// System.Void ClockStone.AudioObject::_StartFadeOutIfNecessary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject__StartFadeOutIfNecessary_mAF1C85E3073CA95429066306FA7DC7BF1577B9B7 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7D78C8963239480BEFACA5FCCCDACC7DC1BA882);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_0;
		L_0 = AudioObject_get_subItem_mE36DC432092EBB487061B7FA4BCD2E6A198CF1CC_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralE7D78C8963239480BEFACA5FCCCDACC7DC1BA882, NULL);
		return;
	}

IL_0013:
	{
		float L_1;
		L_1 = AudioObject_get_audioTime_m6B5A2EE06A41C5BF22E40B566F9CC651A2577F1D(__this, NULL);
		V_0 = L_1;
		V_1 = (0.0f);
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_2;
		L_2 = AudioObject_get_subItem_mE36DC432092EBB487061B7FA4BCD2E6A198CF1CC_inline(__this, NULL);
		NullCheck(L_2);
		float L_3 = L_2->___FadeOut_15;
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_0040;
		}
	}
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_4;
		L_4 = AudioObject_get_subItem_mE36DC432092EBB487061B7FA4BCD2E6A198CF1CC_inline(__this, NULL);
		NullCheck(L_4);
		float L_5 = L_4->___FadeOut_15;
		V_1 = L_5;
		goto IL_0053;
	}

IL_0040:
	{
		float L_6;
		L_6 = AudioObject_get__stopClipAtTime_m1D112BF58ED2ED81BDCFF2A6801E62189933DD81(__this, NULL);
		if ((!(((float)L_6) > ((float)(0.0f)))))
		{
			goto IL_0053;
		}
	}
	{
		V_1 = (0.100000001f);
	}

IL_0053:
	{
		bool L_7;
		L_7 = AudioObject_get_isFadingOutOrScheduled_mEB73E908CEADAB4170B1E6296565E63C479B567E(__this, NULL);
		if (L_7)
		{
			goto IL_007f;
		}
	}
	{
		float L_8 = V_1;
		if ((!(((float)L_8) > ((float)(0.0f)))))
		{
			goto IL_007f;
		}
	}
	{
		float L_9 = V_0;
		float L_10;
		L_10 = AudioObject_get_clipLength_mB96E3BA96B35CA8F1B7AFFB032F33197D76335CC(__this, NULL);
		float L_11 = V_1;
		if ((!(((float)L_9) > ((float)((float)il2cpp_codegen_subtract(L_10, L_11))))))
		{
			goto IL_007f;
		}
	}
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_12;
		L_12 = AudioObject_get_subItem_mE36DC432092EBB487061B7FA4BCD2E6A198CF1CC_inline(__this, NULL);
		NullCheck(L_12);
		float L_13 = L_12->___FadeOut_15;
		AudioObject_FadeOut_m2EB1EE73C1ACDC8F6277A0B1E5E8AB204328A9FC(__this, L_13, NULL);
	}

IL_007f:
	{
		return;
	}
}
// System.Boolean ClockStone.AudioObject::_IsAudioLoopSequenceMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioObject__IsAudioLoopSequenceMode_mD941DC910428D21B428B736113AA719C8C1512B2 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* V_0 = NULL;
	int32_t V_1 = 0;
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_0;
		L_0 = AudioObject_get_audioItem_mA684BBD00181C2E65E7FE103BA73BC08530F4C35(__this, NULL);
		V_0 = L_0;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___Loop_1;
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 2))) > ((uint32_t)1))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_5 = V_1;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, 4))) > ((uint32_t)1))))
		{
			goto IL_0021;
		}
	}
	{
		goto IL_0030;
	}

IL_001f:
	{
		return (bool)1;
	}

IL_0021:
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6;
		L_6 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = AudioSource_get_loop_m2D83BF58E1BD1BEE4CC80413C12E761D3310FC2C(L_6, NULL);
		return (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
	}

IL_0030:
	{
		return (bool)0;
	}
}
// System.Boolean ClockStone.AudioObject::_ScheduleNextInLoopSequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioObject__ScheduleNextInLoopSequence_m2566C66A5171E878436E4F199CA94B64EAFDC062 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	double V_1 = 0.0;
	AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* V_2 = NULL;
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_0;
		L_0 = AudioObject_get_audioItem_mA684BBD00181C2E65E7FE103BA73BC08530F4C35(__this, NULL);
		NullCheck(L_0);
		int32_t L_1 = L_0->___loopSequenceCount_2;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_2;
		L_2 = AudioObject_get_audioItem_mA684BBD00181C2E65E7FE103BA73BC08530F4C35(__this, NULL);
		NullCheck(L_2);
		int32_t L_3 = L_2->___loopSequenceCount_2;
		V_0 = L_3;
		goto IL_002a;
	}

IL_001c:
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_4;
		L_4 = AudioObject_get_audioItem_mA684BBD00181C2E65E7FE103BA73BC08530F4C35(__this, NULL);
		NullCheck(L_4);
		AudioSubItemU5BU5D_t76AB156B9611405B9C03FC6DCDE372AA8FECA34D* L_5 = L_4->___subItems_21;
		NullCheck(L_5);
		V_0 = ((int32_t)(((RuntimeArray*)L_5)->max_length));
	}

IL_002a:
	{
		bool L_6 = __this->____finishSequence_29;
		if (!L_6)
		{
			goto IL_005c;
		}
	}
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_7;
		L_7 = AudioObject_get_audioItem_mA684BBD00181C2E65E7FE103BA73BC08530F4C35(__this, NULL);
		NullCheck(L_7);
		int32_t L_8 = L_7->___Loop_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)5))))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_9 = __this->____loopSequenceCount_30;
		int32_t L_10 = V_0;
		if ((((int32_t)L_9) > ((int32_t)((int32_t)il2cpp_codegen_subtract(L_10, 3)))))
		{
			goto IL_004d;
		}
	}
	{
		return (bool)0;
	}

IL_004d:
	{
		int32_t L_11 = __this->____loopSequenceCount_30;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_12, 1)))))
		{
			goto IL_005c;
		}
	}
	{
		return (bool)0;
	}

IL_005a:
	{
		return (bool)0;
	}

IL_005c:
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_13;
		L_13 = AudioObject_get_audioItem_mA684BBD00181C2E65E7FE103BA73BC08530F4C35(__this, NULL);
		NullCheck(L_13);
		int32_t L_14 = L_13->___loopSequenceCount_2;
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_0081;
		}
	}
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_15;
		L_15 = AudioObject_get_audioItem_mA684BBD00181C2E65E7FE103BA73BC08530F4C35(__this, NULL);
		NullCheck(L_15);
		int32_t L_16 = L_15->___loopSequenceCount_2;
		int32_t L_17 = __this->____loopSequenceCount_30;
		if ((((int32_t)L_16) > ((int32_t)((int32_t)il2cpp_codegen_add(L_17, 1)))))
		{
			goto IL_0081;
		}
	}
	{
		return (bool)0;
	}

IL_0081:
	{
		double L_18;
		L_18 = AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA(NULL);
		float L_19;
		L_19 = AudioObject_get_timeUntilEnd_m128758E4D90E1C16EDBA09DC993FDE766CBF3605(__this, NULL);
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_20;
		L_20 = AudioObject_get_audioItem_mA684BBD00181C2E65E7FE103BA73BC08530F4C35(__this, NULL);
		float L_21;
		L_21 = AudioObject__GetRandomLoopSequenceDelay_mDD46DBCD2EEB77FAEAE85A888164859AA27B6818(__this, L_20, NULL);
		V_1 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(L_18, ((double)L_19))), ((double)L_21)));
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_22;
		L_22 = AudioObject_get_audioItem_mA684BBD00181C2E65E7FE103BA73BC08530F4C35(__this, NULL);
		V_2 = L_22;
		AudioObject_SwitchAudioSources_m50360C50BC6719AACB99613B8EA6C577F141DE02(__this, NULL);
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_23 = __this->____audioController_34;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_24 = V_2;
		float L_25 = __this->____volumeFromScriptCall_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		double L_27 = V_1;
		NullCheck(L_23);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_28;
		L_28 = AudioController_PlayAudioItem_m6510B59A4482E0E6F38D9E001D9E8DBBD498231A(L_23, L_24, L_25, L_26, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, (0.0f), (0.0f), (bool)0, __this, L_27, 0, (1.0f), NULL);
		int32_t L_29 = __this->____loopSequenceCount_30;
		__this->____loopSequenceCount_30 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_30;
		L_30 = AudioObject_get_audioItem_mA684BBD00181C2E65E7FE103BA73BC08530F4C35(__this, NULL);
		NullCheck(L_30);
		int32_t L_31 = L_30->___Loop_1;
		if ((((int32_t)L_31) == ((int32_t)4)))
		{
			goto IL_0100;
		}
	}
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_32;
		L_32 = AudioObject_get_audioItem_mA684BBD00181C2E65E7FE103BA73BC08530F4C35(__this, NULL);
		NullCheck(L_32);
		int32_t L_33 = L_32->___Loop_1;
		if ((!(((uint32_t)L_33) == ((uint32_t)5))))
		{
			goto IL_0146;
		}
	}

IL_0100:
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_34;
		L_34 = AudioObject_get_audioItem_mA684BBD00181C2E65E7FE103BA73BC08530F4C35(__this, NULL);
		NullCheck(L_34);
		int32_t L_35 = L_34->___Loop_1;
		if ((!(((uint32_t)L_35) == ((uint32_t)5))))
		{
			goto IL_012f;
		}
	}
	{
		bool L_36 = __this->____finishSequence_29;
		if (L_36)
		{
			goto IL_0146;
		}
	}
	{
		int32_t L_37 = V_0;
		int32_t L_38 = __this->____loopSequenceCount_30;
		if ((((int32_t)L_37) > ((int32_t)((int32_t)il2cpp_codegen_add(L_38, 2)))))
		{
			goto IL_0146;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_39;
		L_39 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		NullCheck(L_39);
		AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56(L_39, (bool)1, NULL);
		goto IL_0146;
	}

IL_012f:
	{
		int32_t L_40 = V_0;
		int32_t L_41 = __this->____loopSequenceCount_30;
		if ((((int32_t)L_40) > ((int32_t)((int32_t)il2cpp_codegen_add(L_41, 1)))))
		{
			goto IL_0146;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_42;
		L_42 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		NullCheck(L_42);
		AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56(L_42, (bool)1, NULL);
	}

IL_0146:
	{
		return (bool)1;
	}
}
// System.Void ClockStone.AudioObject::_UpdateFadeVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject__UpdateFadeVolume_mF786330E839E40C100D02F30C8C85C530982A1B4 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* L_0 = __this->____primaryFader_20;
		NullCheck(L_0);
		float L_1;
		L_1 = AudioFader_Get_m46460E26510C10AE7FF6592844B8793220845795(L_0, (&V_0), NULL);
		float L_2;
		L_2 = AudioObject__EqualizePowerForCrossfading_m6E6369DAA86E408403F1742908C053B2DDCEDC1D(__this, L_1, NULL);
		V_1 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		bool L_4 = __this->____stopRequested_28;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		AudioObject__Stop_mA2DE6F2B7F72F8C2AF16A884F11019C9D62D67E3(__this, NULL);
		return;
	}

IL_0026:
	{
		bool L_5;
		L_5 = AudioObject__IsAudioLoopSequenceMode_mD941DC910428D21B428B736113AA719C8C1512B2(__this, NULL);
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		bool L_6;
		L_6 = AudioObject_get__shouldStopIfPrimaryFadedOut_m8858F615E85E49B67985055F95FFA0783AE9B7E9(__this, NULL);
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		AudioObject__Stop_mA2DE6F2B7F72F8C2AF16A884F11019C9D62D67E3(__this, NULL);
	}

IL_003c:
	{
		return;
	}

IL_003d:
	{
		float L_7 = V_1;
		float L_8 = __this->____volumeFromPrimaryFade_15;
		if ((((float)L_7) == ((float)L_8)))
		{
			goto IL_004d;
		}
	}
	{
		float L_9 = V_1;
		__this->____volumeFromPrimaryFade_15 = L_9;
	}

IL_004d:
	{
		AudioObject__ApplyVolumePrimary_mA8DEF9B9775004AF5A666399C64CAECA2A7B05C6(__this, (1.0f), NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10 = __this->____audioSource2_42;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_00a4;
		}
	}
	{
		AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* L_12 = __this->____secondaryFader_21;
		NullCheck(L_12);
		float L_13;
		L_13 = AudioFader_Get_m46460E26510C10AE7FF6592844B8793220845795(L_12, (&V_0), NULL);
		float L_14;
		L_14 = AudioObject__EqualizePowerForCrossfading_m6E6369DAA86E408403F1742908C053B2DDCEDC1D(__this, L_13, NULL);
		V_2 = L_14;
		bool L_15 = V_0;
		if (!L_15)
		{
			goto IL_0089;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_16 = __this->____audioSource2_42;
		NullCheck(L_16);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_16, NULL);
		return;
	}

IL_0089:
	{
		float L_17 = V_2;
		float L_18 = __this->____volumeFromSecondaryFade_16;
		if ((((float)L_17) == ((float)L_18)))
		{
			goto IL_00a4;
		}
	}
	{
		float L_19 = V_2;
		__this->____volumeFromSecondaryFade_16 = L_19;
		AudioObject__ApplyVolumeSecondary_m8089C9F16EF4A75AD509F40B81FC3F8709C3F015(__this, (1.0f), NULL);
	}

IL_00a4:
	{
		return;
	}
}
// System.Single ClockStone.AudioObject::_EqualizePowerForCrossfading(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioObject__EqualizePowerForCrossfading_m6E6369DAA86E408403F1742908C053B2DDCEDC1D (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, float ___0_v, const RuntimeMethod* method) 
{
	{
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0 = __this->____audioController_34;
		NullCheck(L_0);
		bool L_1 = L_0->___EqualPowerCrossfade_10;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		float L_2 = ___0_v;
		return L_2;
	}

IL_000f:
	{
		float L_3 = ___0_v;
		float L_4;
		L_4 = sinf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, (3.14159274f))), (0.5f))));
		float L_5;
		L_5 = AudioObject_InverseTransformVolume_m335A32B0AE281C6F9F7633E73C5DBA45EACCB9AA(L_4, NULL);
		return L_5;
	}
}
// System.Boolean ClockStone.AudioObject::get__shouldStopIfPrimaryFadedOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioObject_get__shouldStopIfPrimaryFadedOut_m8858F615E85E49B67985055F95FFA0783AE9B7E9 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____stopAfterFadeoutUserSetting_31;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		bool L_1 = __this->____pauseWithFadeOutRequested_32;
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Void ClockStone.AudioObject::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_OnApplicationPause_m31EB3846DC0F8FCEC88964EF7FDCCFD13C898C5F (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, bool ___0_b, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_b;
		AudioObject_SetApplicationPaused_m44EC3CBA99D6DFFD0E315D5A8683C17F7DD6A891_inline(__this, L_0, NULL);
		return;
	}
}
// System.Void ClockStone.AudioObject::SetApplicationPaused(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_SetApplicationPaused_m44EC3CBA99D6DFFD0E315D5A8683C17F7DD6A891 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, bool ___0_isPaused, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_isPaused;
		__this->____applicationPaused_19 = L_0;
		return;
	}
}
// System.Void ClockStone.AudioObject::DestroyAudioObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_DestroyAudioObject_m10D228A30219C1B1364250EAFB8FEBFBC2F9E75A (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = AudioObject_IsPlaying_m9A39EA279DC025604E0EB1423B38D2401CED651F(__this, NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		AudioObject__Stop_mA2DE6F2B7F72F8C2AF16A884F11019C9D62D67E3(__this, NULL);
	}

IL_000e:
	{
		__this->____IsInactive_27 = (bool)1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_1, NULL);
		return;
	}
}
// System.Single ClockStone.AudioObject::TransformVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioObject_TransformVolume_m4E6AB3C6BCB41F5B1D7DBD7527E67BED94364B44 (float ___0_volume, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_volume;
		float L_1;
		L_1 = powf(L_0, (1.60000002f));
		return L_1;
	}
}
// System.Single ClockStone.AudioObject::InverseTransformVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioObject_InverseTransformVolume_m335A32B0AE281C6F9F7633E73C5DBA45EACCB9AA (float ___0_volume, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_volume;
		float L_1;
		L_1 = powf(L_0, (0.625f));
		return L_1;
	}
}
// System.Single ClockStone.AudioObject::TransformPitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioObject_TransformPitch_m69F30ACF757DBAE04792FFF9E35A6C79963DC953 (float ___0_pitchSemiTones, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_pitchSemiTones;
		float L_1;
		L_1 = powf((2.0f), ((float)(L_0/(12.0f))));
		return L_1;
	}
}
// System.Single ClockStone.AudioObject::InverseTransformPitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioObject_InverseTransformPitch_mAEF56D39DFF39483B66FC4FDE15ABBCFE3B7BF38 (float ___0_pitch, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_pitch;
		float L_1;
		L_1 = logf(L_0);
		float L_2;
		L_2 = logf((2.0f));
		return ((float)il2cpp_codegen_multiply(((float)(L_1/L_2)), (12.0f)));
	}
}
// System.Void ClockStone.AudioObject::_ApplyVolumeBoth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject__ApplyVolumeBoth_mC4D88C6291192E9269EFAB4BE5DDDFAB2EADA48C (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0;
		L_0 = AudioObject_get_volumeTotalWithoutFade_mA569F823EA1094D3EDBF6AEC5F89546B7054BA34(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = __this->____volumeFromPrimaryFade_15;
		float L_3;
		L_3 = AudioObject_TransformVolume_m4E6AB3C6BCB41F5B1D7DBD7527E67BED94364B44(((float)il2cpp_codegen_multiply(L_1, L_2)), NULL);
		V_1 = L_3;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4;
		L_4 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		float L_5 = V_1;
		NullCheck(L_4);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_4, L_5, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6;
		L_6 = AudioObject_get_secondaryAudioSource_m0CF34784C9E1E9C35DC1CF3D7AE9D78F34FF2FA8_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		float L_8 = V_0;
		float L_9 = __this->____volumeFromSecondaryFade_16;
		float L_10;
		L_10 = AudioObject_TransformVolume_m4E6AB3C6BCB41F5B1D7DBD7527E67BED94364B44(((float)il2cpp_codegen_multiply(L_8, L_9)), NULL);
		V_1 = L_10;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11;
		L_11 = AudioObject_get_secondaryAudioSource_m0CF34784C9E1E9C35DC1CF3D7AE9D78F34FF2FA8_inline(__this, NULL);
		float L_12 = V_1;
		NullCheck(L_11);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_11, L_12, NULL);
	}

IL_0048:
	{
		return;
	}
}
// System.Void ClockStone.AudioObject::_ApplyVolumePrimary(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject__ApplyVolumePrimary_mA8DEF9B9775004AF5A666399C64CAECA2A7B05C6 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, float ___0_volumeMultiplier, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0;
		L_0 = AudioObject_get_volumeTotalWithoutFade_mA569F823EA1094D3EDBF6AEC5F89546B7054BA34(__this, NULL);
		float L_1 = __this->____volumeFromPrimaryFade_15;
		float L_2 = ___0_volumeMultiplier;
		float L_3;
		L_3 = AudioObject_TransformVolume_m4E6AB3C6BCB41F5B1D7DBD7527E67BED94364B44(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_1)), L_2)), NULL);
		V_0 = L_3;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4;
		L_4 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		NullCheck(L_4);
		float L_5;
		L_5 = AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3(L_4, NULL);
		float L_6 = V_0;
		if ((((float)L_5) == ((float)L_6)))
		{
			goto IL_002f;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7;
		L_7 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		float L_8 = V_0;
		NullCheck(L_7);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_7, L_8, NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void ClockStone.AudioObject::_ApplyVolumeSecondary(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject__ApplyVolumeSecondary_m8089C9F16EF4A75AD509F40B81FC3F8709C3F015 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, float ___0_volumeMultiplier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = AudioObject_get_secondaryAudioSource_m0CF34784C9E1E9C35DC1CF3D7AE9D78F34FF2FA8_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		float L_2;
		L_2 = AudioObject_get_volumeTotalWithoutFade_mA569F823EA1094D3EDBF6AEC5F89546B7054BA34(__this, NULL);
		float L_3 = __this->____volumeFromSecondaryFade_16;
		float L_4 = ___0_volumeMultiplier;
		float L_5;
		L_5 = AudioObject_TransformVolume_m4E6AB3C6BCB41F5B1D7DBD7527E67BED94364B44(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_2, L_3)), L_4)), NULL);
		V_0 = L_5;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6;
		L_6 = AudioObject_get_secondaryAudioSource_m0CF34784C9E1E9C35DC1CF3D7AE9D78F34FF2FA8_inline(__this, NULL);
		NullCheck(L_6);
		float L_7;
		L_7 = AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3(L_6, NULL);
		float L_8 = V_0;
		if ((((float)L_7) == ((float)L_8)))
		{
			goto IL_003c;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9;
		L_9 = AudioObject_get_secondaryAudioSource_m0CF34784C9E1E9C35DC1CF3D7AE9D78F34FF2FA8_inline(__this, NULL);
		float L_10 = V_0;
		NullCheck(L_9);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_9, L_10, NULL);
	}

IL_003c:
	{
		return;
	}
}
// System.Void ClockStone.AudioObject::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject_OnDestroy_mBEF950848B19DE44F133087E201B2302F3BEF4B6 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* V_0 = NULL;
	{
		RegisteredComponent_OnDestroy_mADC01C507470832FA29FBF00B90F68BED19FCCD9(__this, NULL);
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_0;
		L_0 = AudioObject_get_audioItem_mA684BBD00181C2E65E7FE103BA73BC08530F4C35(__this, NULL);
		V_0 = L_0;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = L_2->___overrideAudioSourceSettings_17;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		AudioObject__RestoreOverrideAudioSourceSettings_m675CA709A7477CF1B23BDA32F9FACC94A5E9CA98(__this, NULL);
	}

IL_001e:
	{
		AudioObject__SetReferences0_m79F2B7A07E22DAB9AD76CFFBAE879F67AE4AE4AB(__this, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4;
		L_4 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* L_5 = __this->____audioMixerGroup_39;
		NullCheck(L_4);
		AudioSource_set_outputAudioMixerGroup_m10D0A0EAE270424CD2F3BB960CFAA158D9FC24CF(L_4, L_5, NULL);
		return;
	}
}
// System.Void ClockStone.AudioObject::_RestoreOverrideAudioSourceSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject__RestoreOverrideAudioSourceSettings_m675CA709A7477CF1B23BDA32F9FACC94A5E9CA98 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		float L_1 = __this->____audioSource_MinDistance_Saved_36;
		NullCheck(L_0);
		AudioSource_set_minDistance_m6CBE3A60C03C0F179192FBDD62095B2E9D717690(L_0, L_1, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		float L_3 = __this->____audioSource_MaxDistance_Saved_37;
		NullCheck(L_2);
		AudioSource_set_maxDistance_m4BF310D54761500A77A6C4841A0BBDBD09225813(L_2, L_3, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4;
		L_4 = AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline(__this, NULL);
		float L_5 = __this->____audioSource_SpatialBlend_Saved_38;
		NullCheck(L_4);
		AudioSource_set_spatialBlend_mCEE7A3E87A8C146E048B2CA3413FDC7BDB7BE001(L_4, L_5, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6;
		L_6 = AudioObject_get_secondaryAudioSource_m0CF34784C9E1E9C35DC1CF3D7AE9D78F34FF2FA8_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0074;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8;
		L_8 = AudioObject_get_secondaryAudioSource_m0CF34784C9E1E9C35DC1CF3D7AE9D78F34FF2FA8_inline(__this, NULL);
		float L_9 = __this->____audioSource_MinDistance_Saved_36;
		NullCheck(L_8);
		AudioSource_set_minDistance_m6CBE3A60C03C0F179192FBDD62095B2E9D717690(L_8, L_9, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10;
		L_10 = AudioObject_get_secondaryAudioSource_m0CF34784C9E1E9C35DC1CF3D7AE9D78F34FF2FA8_inline(__this, NULL);
		float L_11 = __this->____audioSource_MaxDistance_Saved_37;
		NullCheck(L_10);
		AudioSource_set_maxDistance_m4BF310D54761500A77A6C4841A0BBDBD09225813(L_10, L_11, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12;
		L_12 = AudioObject_get_secondaryAudioSource_m0CF34784C9E1E9C35DC1CF3D7AE9D78F34FF2FA8_inline(__this, NULL);
		float L_13 = __this->____audioSource_SpatialBlend_Saved_38;
		NullCheck(L_12);
		AudioSource_set_spatialBlend_mCEE7A3E87A8C146E048B2CA3413FDC7BDB7BE001(L_12, L_13, NULL);
	}

IL_0074:
	{
		return;
	}
}
// System.Boolean ClockStone.AudioObject::DoesBelongToCategory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioObject_DoesBelongToCategory_m16E47EDED67309A145EA4B2A7BC6CD8D92A32B18 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, String_t* ___0_categoryName, const RuntimeMethod* method) 
{
	AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* V_0 = NULL;
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_0;
		L_0 = AudioObject_get_category_m1B694D47010EA8BEDF53B11C36F460F99CE67AAD_inline(__this, NULL);
		V_0 = L_0;
		goto IL_0020;
	}

IL_0009:
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_1 = V_0;
		NullCheck(L_1);
		String_t* L_2 = L_1->___Name_0;
		String_t* L_3 = ___0_categoryName;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_5 = V_0;
		NullCheck(L_5);
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_6;
		L_6 = AudioCategory_get_parentCategory_m3A969B6B7C1D72529B37E06D779503A2A7C8F142(L_5, NULL);
		V_0 = L_6;
	}

IL_0020:
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_7 = V_0;
		if (L_7)
		{
			goto IL_0009;
		}
	}
	{
		return (bool)0;
	}
}
// System.Single ClockStone.AudioObject::_GetRandomLoopSequenceDelay(ClockStone.AudioItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioObject__GetRandomLoopSequenceDelay_mDD46DBCD2EEB77FAEAE85A888164859AA27B6818 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* ___0_audioItem, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_0 = ___0_audioItem;
		NullCheck(L_0);
		float L_1 = L_0->___loopSequenceOverlap_3;
		V_0 = ((-L_1));
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_2 = ___0_audioItem;
		NullCheck(L_2);
		float L_3 = L_2->___loopSequenceRandomDelay_4;
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_0028;
		}
	}
	{
		float L_4 = V_0;
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_5 = ___0_audioItem;
		NullCheck(L_5);
		float L_6 = L_5->___loopSequenceRandomDelay_4;
		float L_7;
		L_7 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), L_6, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_4, L_7));
	}

IL_0028:
	{
		float L_8 = V_0;
		return L_8;
	}
}
// System.Void ClockStone.AudioObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioObject__ctor_mEF677772736AC6A2AD67B3E79FB2088E7DFB4548 (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		__this->____volumeExcludingCategory_14 = (1.0f);
		__this->____volumeFromPrimaryFade_15 = (1.0f);
		__this->____volumeFromSecondaryFade_16 = (1.0f);
		__this->____volumeFromScriptCall_17 = (1.0f);
		__this->____playTime_22 = (-1.0);
		__this->____playStartTimeLocal_23 = (-1.0);
		__this->____playStartTimeSystem_24 = (-1.0);
		__this->____playScheduledTimeDsp_25 = (-1.0);
		__this->____IsInactive_27 = (bool)1;
		__this->____audioSource_MinDistance_Saved_36 = (1.0f);
		__this->____audioSource_MaxDistance_Saved_37 = (500.0f);
		__this->____lastChosenSubItemIndex_40 = (-1);
		RegisteredComponent__ctor_mFCC58D8F704F72B000677A41069D8BC513DE4B27(__this, NULL);
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
void AudioEventDelegate_Invoke_m6CEE69572000A08372439B0733B708B13F2E769D_Multicast(AudioEventDelegate_tC8822AE744F66D86E67505066207E918FAD55B49* __this, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* ___0_audioObject, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		AudioEventDelegate_tC8822AE744F66D86E67505066207E918FAD55B49* currentDelegate = reinterpret_cast<AudioEventDelegate_tC8822AE744F66D86E67505066207E918FAD55B49*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_audioObject, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void AudioEventDelegate_Invoke_m6CEE69572000A08372439B0733B708B13F2E769D_OpenInst(AudioEventDelegate_tC8822AE744F66D86E67505066207E918FAD55B49* __this, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* ___0_audioObject, const RuntimeMethod* method)
{
	NullCheck(___0_audioObject);
	typedef void (*FunctionPointerType) (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_audioObject, method);
}
void AudioEventDelegate_Invoke_m6CEE69572000A08372439B0733B708B13F2E769D_OpenStatic(AudioEventDelegate_tC8822AE744F66D86E67505066207E918FAD55B49* __this, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* ___0_audioObject, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_audioObject, method);
}
void AudioEventDelegate_Invoke_m6CEE69572000A08372439B0733B708B13F2E769D_OpenStaticInvoker(AudioEventDelegate_tC8822AE744F66D86E67505066207E918FAD55B49* __this, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* ___0_audioObject, const RuntimeMethod* method)
{
	InvokerActionInvoker1< AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_audioObject);
}
void AudioEventDelegate_Invoke_m6CEE69572000A08372439B0733B708B13F2E769D_ClosedStaticInvoker(AudioEventDelegate_tC8822AE744F66D86E67505066207E918FAD55B49* __this, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* ___0_audioObject, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_audioObject);
}
void AudioEventDelegate_Invoke_m6CEE69572000A08372439B0733B708B13F2E769D_OpenVirtual(AudioEventDelegate_tC8822AE744F66D86E67505066207E918FAD55B49* __this, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* ___0_audioObject, const RuntimeMethod* method)
{
	NullCheck(___0_audioObject);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_audioObject);
}
void AudioEventDelegate_Invoke_m6CEE69572000A08372439B0733B708B13F2E769D_OpenInterface(AudioEventDelegate_tC8822AE744F66D86E67505066207E918FAD55B49* __this, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* ___0_audioObject, const RuntimeMethod* method)
{
	NullCheck(___0_audioObject);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_audioObject);
}
void AudioEventDelegate_Invoke_m6CEE69572000A08372439B0733B708B13F2E769D_OpenGenericVirtual(AudioEventDelegate_tC8822AE744F66D86E67505066207E918FAD55B49* __this, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* ___0_audioObject, const RuntimeMethod* method)
{
	NullCheck(___0_audioObject);
	GenericVirtualActionInvoker0::Invoke(method, ___0_audioObject);
}
void AudioEventDelegate_Invoke_m6CEE69572000A08372439B0733B708B13F2E769D_OpenGenericInterface(AudioEventDelegate_tC8822AE744F66D86E67505066207E918FAD55B49* __this, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* ___0_audioObject, const RuntimeMethod* method)
{
	NullCheck(___0_audioObject);
	GenericInterfaceActionInvoker0::Invoke(method, ___0_audioObject);
}
// System.Void ClockStone.AudioObject/AudioEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEventDelegate__ctor_m162D349D48BBC7C2EADEAE5109770DBF8AE030FE (AudioEventDelegate_tC8822AE744F66D86E67505066207E918FAD55B49* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AudioEventDelegate_Invoke_m6CEE69572000A08372439B0733B708B13F2E769D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&AudioEventDelegate_Invoke_m6CEE69572000A08372439B0733B708B13F2E769D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AudioEventDelegate_Invoke_m6CEE69572000A08372439B0733B708B13F2E769D_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&AudioEventDelegate_Invoke_m6CEE69572000A08372439B0733B708B13F2E769D_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&AudioEventDelegate_Invoke_m6CEE69572000A08372439B0733B708B13F2E769D_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&AudioEventDelegate_Invoke_m6CEE69572000A08372439B0733B708B13F2E769D_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&AudioEventDelegate_Invoke_m6CEE69572000A08372439B0733B708B13F2E769D_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&AudioEventDelegate_Invoke_m6CEE69572000A08372439B0733B708B13F2E769D_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&AudioEventDelegate_Invoke_m6CEE69572000A08372439B0733B708B13F2E769D_Multicast;
}
// System.Void ClockStone.AudioObject/AudioEventDelegate::Invoke(ClockStone.AudioObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEventDelegate_Invoke_m6CEE69572000A08372439B0733B708B13F2E769D (AudioEventDelegate_tC8822AE744F66D86E67505066207E918FAD55B49* __this, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* ___0_audioObject, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_audioObject, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ClockStone.AudioObject/AudioEventDelegate::BeginInvoke(ClockStone.AudioObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AudioEventDelegate_BeginInvoke_mAEB723C79159A27C55E39E5BB26C6355039706B9 (AudioEventDelegate_tC8822AE744F66D86E67505066207E918FAD55B49* __this, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* ___0_audioObject, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_audioObject;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void ClockStone.AudioObject/AudioEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEventDelegate_EndInvoke_m55C12854F4455204133E0271EA9DB5EE4D2642D0 (AudioEventDelegate_tC8822AE744F66D86E67505066207E918FAD55B49* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ClockStone.AudioObject/<_WaitForSecondsThenStop>d__76::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_WaitForSecondsThenStopU3Ed__76__ctor_m5AD66320A1BD2DA3CB5E9D85D8CE8DD5FBB2D1B8 (U3C_WaitForSecondsThenStopU3Ed__76_t2808A470FCC20423D02D711EFA3877B423A25E2F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ClockStone.AudioObject/<_WaitForSecondsThenStop>d__76::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_WaitForSecondsThenStopU3Ed__76_System_IDisposable_Dispose_mCDF3D1D3796F0F3508231F564D3DDF05004D37A7 (U3C_WaitForSecondsThenStopU3Ed__76_t2808A470FCC20423D02D711EFA3877B423A25E2F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ClockStone.AudioObject/<_WaitForSecondsThenStop>d__76::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3C_WaitForSecondsThenStopU3Ed__76_MoveNext_mF9BD393393DBED9FB8898ECE2408F43D5E100FC8 (U3C_WaitForSecondsThenStopU3Ed__76_t2808A470FCC20423D02D711EFA3877B423A25E2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		float L_4 = __this->___startToFadeTime_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, L_4, NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0038:
	{
		__this->___U3CU3E1__state_0 = (-1);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_6 = V_1;
		NullCheck(L_6);
		bool L_7 = L_6->____IsInactive_27;
		if (L_7)
		{
			goto IL_0053;
		}
	}
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_8 = V_1;
		float L_9 = __this->___fadeOutLength_4;
		NullCheck(L_8);
		AudioObject_Stop_m793AABEC01EF24936D60037EB89C617B13AD9740(L_8, L_9, NULL);
	}

IL_0053:
	{
		return (bool)0;
	}
}
// System.Object ClockStone.AudioObject/<_WaitForSecondsThenStop>d__76::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3C_WaitForSecondsThenStopU3Ed__76_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8FBBFB43E2612CF2A2EFED9D150044A029645DF5 (U3C_WaitForSecondsThenStopU3Ed__76_t2808A470FCC20423D02D711EFA3877B423A25E2F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ClockStone.AudioObject/<_WaitForSecondsThenStop>d__76::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_WaitForSecondsThenStopU3Ed__76_System_Collections_IEnumerator_Reset_m126BF72F2CBE13F96E5285DCC9D6453398B4DD32 (U3C_WaitForSecondsThenStopU3Ed__76_t2808A470FCC20423D02D711EFA3877B423A25E2F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3C_WaitForSecondsThenStopU3Ed__76_System_Collections_IEnumerator_Reset_m126BF72F2CBE13F96E5285DCC9D6453398B4DD32_RuntimeMethod_var)));
	}
}
// System.Object ClockStone.AudioObject/<_WaitForSecondsThenStop>d__76::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3C_WaitForSecondsThenStopU3Ed__76_System_Collections_IEnumerator_get_Current_m1F174186811784E8F8A0AEA69865DCABF4C63600 (U3C_WaitForSecondsThenStopU3Ed__76_t2808A470FCC20423D02D711EFA3877B423A25E2F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void ClockStone.AudioObject/<_WaitThenPause>d__86::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_WaitThenPauseU3Ed__86__ctor_mDD50BF89E05F4466DFE7C8ADD654FBC3DCC1F744 (U3C_WaitThenPauseU3Ed__86_tFD34F3EC992FA2012BAF41C96E3F64D81058882A* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ClockStone.AudioObject/<_WaitThenPause>d__86::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_WaitThenPauseU3Ed__86_System_IDisposable_Dispose_m1E43687D018AD5F06CA668EF345736CC2B11C05C (U3C_WaitThenPauseU3Ed__86_tFD34F3EC992FA2012BAF41C96E3F64D81058882A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ClockStone.AudioObject/<_WaitThenPause>d__86::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3C_WaitThenPauseU3Ed__86_MoveNext_m65C7A2D430BC5D3008C1A0A7509989BF7E84E0C1 (U3C_WaitThenPauseU3Ed__86_tFD34F3EC992FA2012BAF41C96E3F64D81058882A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		float L_4 = __this->___waitTime_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, L_4, NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0038:
	{
		__this->___U3CU3E1__state_0 = (-1);
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_6 = V_1;
		NullCheck(L_6);
		bool L_7 = L_6->____pauseWithFadeOutRequested_32;
		if (!L_7)
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_8 = __this->___counter_4;
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = L_9->____pauseCoroutineCounter_12;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_10))))
		{
			goto IL_005b;
		}
	}
	{
		AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* L_11 = V_1;
		NullCheck(L_11);
		AudioObject__PauseNow_mF42489087FEEDF0C996075155D4CC64C1FE98D63(L_11, NULL);
	}

IL_005b:
	{
		return (bool)0;
	}
}
// System.Object ClockStone.AudioObject/<_WaitThenPause>d__86::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3C_WaitThenPauseU3Ed__86_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAE107492A1361163948AFDD84A741989635DCA61 (U3C_WaitThenPauseU3Ed__86_tFD34F3EC992FA2012BAF41C96E3F64D81058882A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ClockStone.AudioObject/<_WaitThenPause>d__86::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_WaitThenPauseU3Ed__86_System_Collections_IEnumerator_Reset_m607DB176BBA93E631EE139343927B840BE48E918 (U3C_WaitThenPauseU3Ed__86_tFD34F3EC992FA2012BAF41C96E3F64D81058882A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3C_WaitThenPauseU3Ed__86_System_Collections_IEnumerator_Reset_m607DB176BBA93E631EE139343927B840BE48E918_RuntimeMethod_var)));
	}
}
// System.Object ClockStone.AudioObject/<_WaitThenPause>d__86::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3C_WaitThenPauseU3Ed__86_System_Collections_IEnumerator_get_Current_mA0FC78070A9D6A432104B1AC4C9A8DE34AD6771B (U3C_WaitThenPauseU3Ed__86_tFD34F3EC992FA2012BAF41C96E3F64D81058882A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void ClockStone.RegisteredComponent::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisteredComponent_Awake_mC8F26A2390ED9A931DF40118CE10B9F60645B401 (RegisteredComponent_t4300DCA0919DC75A5C6AA393A74F58774173354F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegisteredComponentController_tFC8241C5D4FAEC07C39DCA2C0F997F0E09E809D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35798455FBDD71E543E990196E96A40A422D3261);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___isRegistered_4;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RegisteredComponentController_tFC8241C5D4FAEC07C39DCA2C0F997F0E09E809D7_il2cpp_TypeInfo_var);
		RegisteredComponentController__Register_m26560D3FB6DDB54F8AAAF17C8FD64354A58E81D0(__this, NULL);
		__this->___isRegistered_4 = (bool)1;
		__this->___isUnregistered_5 = (bool)0;
		return;
	}

IL_001d:
	{
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral35798455FBDD71E543E990196E96A40A422D3261, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_2, NULL);
		return;
	}
}
// System.Void ClockStone.RegisteredComponent::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisteredComponent_OnDestroy_mADC01C507470832FA29FBF00B90F68BED19FCCD9 (RegisteredComponent_t4300DCA0919DC75A5C6AA393A74F58774173354F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegisteredComponentController_tFC8241C5D4FAEC07C39DCA2C0F997F0E09E809D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65A81C7B08D02AFDF6690BDD0015CF7F88836AB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C46A04F21960BED5806E956686255EC8CFD6A8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B518739A78EB55ECB17A9B787CAC23030216C2C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B6_0 = 0;
	{
		bool L_0 = __this->___isRegistered_4;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		bool L_1 = __this->___isUnregistered_5;
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RegisteredComponentController_tFC8241C5D4FAEC07C39DCA2C0F997F0E09E809D7_il2cpp_TypeInfo_var);
		RegisteredComponentController__Unregister_m0463D4A70D2A5B80FD93F35083555BF77CCC008D(__this, NULL);
		__this->___isRegistered_4 = (bool)0;
		__this->___isUnregistered_5 = (bool)1;
		return;
	}

IL_0025:
	{
		bool L_2 = __this->___isRegistered_4;
		if (L_2)
		{
			goto IL_0035;
		}
	}
	{
		bool L_3 = __this->___isUnregistered_5;
		G_B6_0 = ((int32_t)(L_3));
		goto IL_0036;
	}

IL_0035:
	{
		G_B6_0 = 0;
	}

IL_0036:
	{
		if (G_B6_0)
		{
			goto IL_0085;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral8B518739A78EB55ECB17A9B787CAC23030216C2C);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral8B518739A78EB55ECB17A9B787CAC23030216C2C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral65A81C7B08D02AFDF6690BDD0015CF7F88836AB4);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral65A81C7B08D02AFDF6690BDD0015CF7F88836AB4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		bool* L_10 = (&__this->___isRegistered_4);
		String_t* L_11;
		L_11 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(L_10, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_9;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral6C46A04F21960BED5806E956686255EC8CFD6A8B);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral6C46A04F21960BED5806E956686255EC8CFD6A8B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		bool* L_14 = (&__this->___isUnregistered_5);
		String_t* L_15;
		L_15 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(L_14, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_15);
		String_t* L_16;
		L_16 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_16, NULL);
	}

IL_0085:
	{
		return;
	}
}
// System.Type ClockStone.RegisteredComponent::GetRegisteredComponentBaseClassType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* RegisteredComponent_GetRegisteredComponentBaseClassType_mDF3FBA5CED5E2D5E96EED6822ADA00F0D96987C5 (RegisteredComponent_t4300DCA0919DC75A5C6AA393A74F58774173354F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegisteredComponent_t4300DCA0919DC75A5C6AA393A74F58774173354F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (RegisteredComponent_t4300DCA0919DC75A5C6AA393A74F58774173354F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// System.Void ClockStone.RegisteredComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisteredComponent__ctor_mFCC58D8F704F72B000677A41069D8BC513DE4B27 (RegisteredComponent_t4300DCA0919DC75A5C6AA393A74F58774173354F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Object[] ClockStone.RegisteredComponentController::GetAllOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* RegisteredComponentController_GetAllOfType_mF1C951C9B305607BFF071D2972E55073D4909439 (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m671E538B6CB142DB87304768B126D265A3CBF9CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m066A063C37694D8BC74738B662FB6A4AD47BFF7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9C6572C9D8FFE42AAF104AACF3DBD905DB7467AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2F143CA36EEEAE0E91BA5630F399B8E0BBB03A3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m33EE605071E7FE4F7FD4F6E0E3AC582993B79115_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_mA1EA5E599C66C8ED58AC65EE9134B256EBC0DC9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegisteredComponentController_tFC8241C5D4FAEC07C39DCA2C0F997F0E09E809D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InstanceContainer_t53A92146FA15D51D3134CF2AE1CC0FF64CA2AA2D* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	Enumerator_tF1801DA5C50283A2AC81458838666BC4E4A128F5 V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RegisteredComponentController_tFC8241C5D4FAEC07C39DCA2C0F997F0E09E809D7_il2cpp_TypeInfo_var);
		Dictionary_2_t42D10458D588C0FEE5C42C3E1E28C6B103723366* L_0 = ((RegisteredComponentController_tFC8241C5D4FAEC07C39DCA2C0F997F0E09E809D7_StaticFields*)il2cpp_codegen_static_fields_for(RegisteredComponentController_tFC8241C5D4FAEC07C39DCA2C0F997F0E09E809D7_il2cpp_TypeInfo_var))->____instanceContainers_0;
		Type_t* L_1 = ___0_type;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m671E538B6CB142DB87304768B126D265A3CBF9CA(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m671E538B6CB142DB87304768B126D265A3CBF9CA_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		return L_3;
	}

IL_0016:
	{
		InstanceContainer_t53A92146FA15D51D3134CF2AE1CC0FF64CA2AA2D* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = HashSet_1_get_Count_mA1EA5E599C66C8ED58AC65EE9134B256EBC0DC9B_inline(L_4, HashSet_1_get_Count_mA1EA5E599C66C8ED58AC65EE9134B256EBC0DC9B_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_1 = L_6;
		V_2 = 0;
		InstanceContainer_t53A92146FA15D51D3134CF2AE1CC0FF64CA2AA2D* L_7 = V_0;
		NullCheck(L_7);
		Enumerator_tF1801DA5C50283A2AC81458838666BC4E4A128F5 L_8;
		L_8 = HashSet_1_GetEnumerator_m33EE605071E7FE4F7FD4F6E0E3AC582993B79115(L_7, HashSet_1_GetEnumerator_m33EE605071E7FE4F7FD4F6E0E3AC582993B79115_RuntimeMethod_var);
		V_3 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m066A063C37694D8BC74738B662FB6A4AD47BFF7A((&V_3), Enumerator_Dispose_m066A063C37694D8BC74738B662FB6A4AD47BFF7A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003f_1;
			}

IL_002d_1:
			{
				RuntimeObject* L_9;
				L_9 = Enumerator_get_Current_m2F143CA36EEEAE0E91BA5630F399B8E0BBB03A3D_inline((&V_3), Enumerator_get_Current_m2F143CA36EEEAE0E91BA5630F399B8E0BBB03A3D_RuntimeMethod_var);
				V_4 = L_9;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_1;
				int32_t L_11 = V_2;
				int32_t L_12 = L_11;
				V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
				RuntimeObject* L_13 = V_4;
				NullCheck(L_10);
				ArrayElementTypeCheck (L_10, L_13);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (RuntimeObject*)L_13);
			}

IL_003f_1:
			{
				bool L_14;
				L_14 = Enumerator_MoveNext_m9C6572C9D8FFE42AAF104AACF3DBD905DB7467AB((&V_3), Enumerator_MoveNext_m9C6572C9D8FFE42AAF104AACF3DBD905DB7467AB_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_002d_1;
				}
			}
			{
				goto IL_0058;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0058:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = V_1;
		return L_15;
	}
}
// ClockStone.RegisteredComponentController/InstanceContainer ClockStone.RegisteredComponentController::_GetInstanceContainer(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InstanceContainer_t53A92146FA15D51D3134CF2AE1CC0FF64CA2AA2D* RegisteredComponentController__GetInstanceContainer_m80808F18F8A3B94ABB0E95FB9BE6C6E7CC84AC12 (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mE3F35548095265950B93BBD4330F675F23EE8D8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m671E538B6CB142DB87304768B126D265A3CBF9CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstanceContainer_t53A92146FA15D51D3134CF2AE1CC0FF64CA2AA2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegisteredComponentController_tFC8241C5D4FAEC07C39DCA2C0F997F0E09E809D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InstanceContainer_t53A92146FA15D51D3134CF2AE1CC0FF64CA2AA2D* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RegisteredComponentController_tFC8241C5D4FAEC07C39DCA2C0F997F0E09E809D7_il2cpp_TypeInfo_var);
		Dictionary_2_t42D10458D588C0FEE5C42C3E1E28C6B103723366* L_0 = ((RegisteredComponentController_tFC8241C5D4FAEC07C39DCA2C0F997F0E09E809D7_StaticFields*)il2cpp_codegen_static_fields_for(RegisteredComponentController_tFC8241C5D4FAEC07C39DCA2C0F997F0E09E809D7_il2cpp_TypeInfo_var))->____instanceContainers_0;
		Type_t* L_1 = ___0_type;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m671E538B6CB142DB87304768B126D265A3CBF9CA(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m671E538B6CB142DB87304768B126D265A3CBF9CA_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		InstanceContainer_t53A92146FA15D51D3134CF2AE1CC0FF64CA2AA2D* L_3 = V_0;
		return L_3;
	}

IL_0011:
	{
		InstanceContainer_t53A92146FA15D51D3134CF2AE1CC0FF64CA2AA2D* L_4 = (InstanceContainer_t53A92146FA15D51D3134CF2AE1CC0FF64CA2AA2D*)il2cpp_codegen_object_new(InstanceContainer_t53A92146FA15D51D3134CF2AE1CC0FF64CA2AA2D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		InstanceContainer__ctor_m69EE232924A6DF41FADAD55CA4D710E106D3C367(L_4, NULL);
		V_0 = L_4;
		il2cpp_codegen_runtime_class_init_inline(RegisteredComponentController_tFC8241C5D4FAEC07C39DCA2C0F997F0E09E809D7_il2cpp_TypeInfo_var);
		Dictionary_2_t42D10458D588C0FEE5C42C3E1E28C6B103723366* L_5 = ((RegisteredComponentController_tFC8241C5D4FAEC07C39DCA2C0F997F0E09E809D7_StaticFields*)il2cpp_codegen_static_fields_for(RegisteredComponentController_tFC8241C5D4FAEC07C39DCA2C0F997F0E09E809D7_il2cpp_TypeInfo_var))->____instanceContainers_0;
		Type_t* L_6 = ___0_type;
		InstanceContainer_t53A92146FA15D51D3134CF2AE1CC0FF64CA2AA2D* L_7 = V_0;
		NullCheck(L_5);
		Dictionary_2_Add_mE3F35548095265950B93BBD4330F675F23EE8D8A(L_5, L_6, L_7, Dictionary_2_Add_mE3F35548095265950B93BBD4330F675F23EE8D8A_RuntimeMethod_var);
		InstanceContainer_t53A92146FA15D51D3134CF2AE1CC0FF64CA2AA2D* L_8 = V_0;
		return L_8;
	}
}
// System.Void ClockStone.RegisteredComponentController::_RegisterType(ClockStone.IRegisteredComponent,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisteredComponentController__RegisterType_m88FF77C9EE82A90B0211314634A5B7811B794140 (RuntimeObject* ___0_component, Type_t* ___1_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m987D7E79C14B9D85622FE79470F1074C4D51E901_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegisteredComponentController_tFC8241C5D4FAEC07C39DCA2C0F997F0E09E809D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4461E3855C5C38BF51905508061EC51329FC889);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(RegisteredComponentController_tFC8241C5D4FAEC07C39DCA2C0F997F0E09E809D7_il2cpp_TypeInfo_var);
		InstanceContainer_t53A92146FA15D51D3134CF2AE1CC0FF64CA2AA2D* L_1;
		L_1 = RegisteredComponentController__GetInstanceContainer_m80808F18F8A3B94ABB0E95FB9BE6C6E7CC84AC12(L_0, NULL);
		RuntimeObject* L_2 = ___0_component;
		NullCheck(L_1);
		bool L_3;
		L_3 = HashSet_1_Add_m987D7E79C14B9D85622FE79470F1074C4D51E901(L_1, L_2, HashSet_1_Add_m987D7E79C14B9D85622FE79470F1074C4D51E901_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralC4461E3855C5C38BF51905508061EC51329FC889, NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void ClockStone.RegisteredComponentController::_Register(ClockStone.IRegisteredComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisteredComponentController__Register_m26560D3FB6DDB54F8AAAF17C8FD64354A58E81D0 (RuntimeObject* ___0_component, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRegisteredComponent_t33AB1B7C4EE0FB04E502FD3D5F6C3B208FB4CA78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegisteredComponentController_tFC8241C5D4FAEC07C39DCA2C0F997F0E09E809D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_component;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		V_0 = L_1;
	}

IL_0007:
	{
		RuntimeObject* L_2 = ___0_component;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RegisteredComponentController_tFC8241C5D4FAEC07C39DCA2C0F997F0E09E809D7_il2cpp_TypeInfo_var);
		RegisteredComponentController__RegisterType_m88FF77C9EE82A90B0211314634A5B7811B794140(L_2, L_3, NULL);
		Type_t* L_4 = V_0;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = VirtualFuncInvoker0< Type_t* >::Invoke(106 /* System.Type System.Type::get_BaseType() */, L_4);
		V_0 = L_5;
		Type_t* L_6 = V_0;
		RuntimeObject* L_7 = ___0_component;
		NullCheck(L_7);
		Type_t* L_8;
		L_8 = InterfaceFuncInvoker0< Type_t* >::Invoke(0 /* System.Type ClockStone.IRegisteredComponent::GetRegisteredComponentBaseClassType() */, IRegisteredComponent_t33AB1B7C4EE0FB04E502FD3D5F6C3B208FB4CA78_il2cpp_TypeInfo_var, L_7);
		if ((!(((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ClockStone.RegisteredComponentController::_UnregisterType(ClockStone.IRegisteredComponent,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisteredComponentController__UnregisterType_m26AA61D881E6BF20DC5FF0CAECD7A81215C77CF0 (RuntimeObject* ___0_component, Type_t* ___1_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_mC23A58813071D3DAE5E0718CC758670F4A0A5AAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegisteredComponentController_tFC8241C5D4FAEC07C39DCA2C0F997F0E09E809D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C78D85F550E8C00B59090610190B9B5BD0C66F0);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(RegisteredComponentController_tFC8241C5D4FAEC07C39DCA2C0F997F0E09E809D7_il2cpp_TypeInfo_var);
		InstanceContainer_t53A92146FA15D51D3134CF2AE1CC0FF64CA2AA2D* L_1;
		L_1 = RegisteredComponentController__GetInstanceContainer_m80808F18F8A3B94ABB0E95FB9BE6C6E7CC84AC12(L_0, NULL);
		RuntimeObject* L_2 = ___0_component;
		NullCheck(L_1);
		bool L_3;
		L_3 = HashSet_1_Remove_mC23A58813071D3DAE5E0718CC758670F4A0A5AAA(L_1, L_2, HashSet_1_Remove_mC23A58813071D3DAE5E0718CC758670F4A0A5AAA_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral6C78D85F550E8C00B59090610190B9B5BD0C66F0, NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void ClockStone.RegisteredComponentController::_Unregister(ClockStone.IRegisteredComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisteredComponentController__Unregister_m0463D4A70D2A5B80FD93F35083555BF77CCC008D (RuntimeObject* ___0_component, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRegisteredComponent_t33AB1B7C4EE0FB04E502FD3D5F6C3B208FB4CA78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegisteredComponentController_tFC8241C5D4FAEC07C39DCA2C0F997F0E09E809D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_component;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		V_0 = L_1;
	}

IL_0007:
	{
		RuntimeObject* L_2 = ___0_component;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RegisteredComponentController_tFC8241C5D4FAEC07C39DCA2C0F997F0E09E809D7_il2cpp_TypeInfo_var);
		RegisteredComponentController__UnregisterType_m26AA61D881E6BF20DC5FF0CAECD7A81215C77CF0(L_2, L_3, NULL);
		Type_t* L_4 = V_0;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = VirtualFuncInvoker0< Type_t* >::Invoke(106 /* System.Type System.Type::get_BaseType() */, L_4);
		V_0 = L_5;
		Type_t* L_6 = V_0;
		RuntimeObject* L_7 = ___0_component;
		NullCheck(L_7);
		Type_t* L_8;
		L_8 = InterfaceFuncInvoker0< Type_t* >::Invoke(0 /* System.Type ClockStone.IRegisteredComponent::GetRegisteredComponentBaseClassType() */, IRegisteredComponent_t33AB1B7C4EE0FB04E502FD3D5F6C3B208FB4CA78_il2cpp_TypeInfo_var, L_7);
		if ((!(((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ClockStone.RegisteredComponentController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisteredComponentController__cctor_m9DC9845C1C91CA9CFC1ED04A6F9C3C63416CA12A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m938C00A5784839240D2001EF17093D200720CBD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t42D10458D588C0FEE5C42C3E1E28C6B103723366_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegisteredComponentController_tFC8241C5D4FAEC07C39DCA2C0F997F0E09E809D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t42D10458D588C0FEE5C42C3E1E28C6B103723366* L_0 = (Dictionary_2_t42D10458D588C0FEE5C42C3E1E28C6B103723366*)il2cpp_codegen_object_new(Dictionary_2_t42D10458D588C0FEE5C42C3E1E28C6B103723366_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m938C00A5784839240D2001EF17093D200720CBD3(L_0, Dictionary_2__ctor_m938C00A5784839240D2001EF17093D200720CBD3_RuntimeMethod_var);
		((RegisteredComponentController_tFC8241C5D4FAEC07C39DCA2C0F997F0E09E809D7_StaticFields*)il2cpp_codegen_static_fields_for(RegisteredComponentController_tFC8241C5D4FAEC07C39DCA2C0F997F0E09E809D7_il2cpp_TypeInfo_var))->____instanceContainers_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((RegisteredComponentController_tFC8241C5D4FAEC07C39DCA2C0F997F0E09E809D7_StaticFields*)il2cpp_codegen_static_fields_for(RegisteredComponentController_tFC8241C5D4FAEC07C39DCA2C0F997F0E09E809D7_il2cpp_TypeInfo_var))->____instanceContainers_0), (void*)L_0);
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
// System.Void ClockStone.RegisteredComponentController/InstanceContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstanceContainer__ctor_m69EE232924A6DF41FADAD55CA4D710E106D3C367 (InstanceContainer_t53A92146FA15D51D3134CF2AE1CC0FF64CA2AA2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m7ECA671710A9E24C7B10FAD5D26AA27852C0AB32_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashSet_1__ctor_m7ECA671710A9E24C7B10FAD5D26AA27852C0AB32(__this, HashSet_1__ctor_m7ECA671710A9E24C7B10FAD5D26AA27852C0AB32_RuntimeMethod_var);
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
// System.Double ClockStone.SystemTime::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SystemTime_get_time_m943A576076049F528F8DBA825760E825183A4490 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_0;
		int64_t L_1;
		L_1 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6((&V_0), NULL);
		return ((double)il2cpp_codegen_multiply(((double)L_1), (9.9999999999999995E-08)));
	}
}
// System.Double ClockStone.SystemTime::get_timeSinceLaunch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SystemTime_get_timeSinceLaunch_mD949F481D95BFDB8ADE5D4A49A204453730722FB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemTime_tBB4E6D26A0CC20E4075CE4171BC938B462E486FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SystemTime_tBB4E6D26A0CC20E4075CE4171BC938B462E486FC_il2cpp_TypeInfo_var);
		double L_0;
		L_0 = SystemTime_get_time_m943A576076049F528F8DBA825760E825183A4490(NULL);
		double L_1 = ((SystemTime_tBB4E6D26A0CC20E4075CE4171BC938B462E486FC_StaticFields*)il2cpp_codegen_static_fields_for(SystemTime_tBB4E6D26A0CC20E4075CE4171BC938B462E486FC_il2cpp_TypeInfo_var))->____timeAtLaunch_0;
		return ((double)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Void ClockStone.SystemTime::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemTime__cctor_m0A3C4CA079225AACFC70293A9BC1A15776BFA9CF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemTime_tBB4E6D26A0CC20E4075CE4171BC938B462E486FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0;
		L_0 = SystemTime_get_time_m943A576076049F528F8DBA825760E825183A4490(NULL);
		((SystemTime_tBB4E6D26A0CC20E4075CE4171BC938B462E486FC_StaticFields*)il2cpp_codegen_static_fields_for(SystemTime_tBB4E6D26A0CC20E4075CE4171BC938B462E486FC_il2cpp_TypeInfo_var))->____timeAtLaunch_0 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AudioController_get_musicEnabled_mF55BDA1639F54A02F7B88469DB1A57C853A7A8C2_inline (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____musicEnabled_32;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AudioController_get_ambienceSoundEnabled_m25FAB0BBB687B1DC2152293A4D38967B4F405073_inline (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____ambienceSoundEnabled_33;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* AudioObject_get_category_m1B694D47010EA8BEDF53B11C36F460F99CE67AAD_inline (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_0 = __this->____category_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AudioObject_get_audioID_m07AC1667AE18FFF1A4954E60D7223561E12DF0D1_inline (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CaudioIDU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AudioController_get_soundMuted_m1BEF7EB429D80238FF5440E7C017F632DEF92E58_inline (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____soundMuted_34;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AudioCategory_get_Volume_mF87941E6A9F8725B2DAA2780070B9E279E1DCF24_inline (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____volume_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AudioController_get_Volume_m76D0F25F710E931B3BCB1811834BBF45ACCCF137_inline (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____volume_41;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* AudioItem_get_category_mA6BE3D42E8FBE2687F68B5017B451ECC79884DE9_inline (AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* __this, const RuntimeMethod* method) 
{
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_0 = __this->____category_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* AudioObject_get_primaryAudioSource_m68BD2919E254D349AD6FB69DDA15ED3CC8F2E215_inline (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->____audioSource1_41;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___1_min;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___0_value;
		int32_t L_5 = ___2_max;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double AudioController_get_systemTime_mB3A112C83ABEB814B3F4377F12D1385E886A9A1F_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		double L_0 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____systemTime_42;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double AudioObject_get_startedPlayingAtTime_mD10B3AFA7BE749CD8B16D107B83B0359A7E8B7AF_inline (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->____playStartTimeSystem_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioObject_set_audioID_m8C5F78F770A16263871EE418FFFF98AD3DCEAE9F_inline (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CaudioIDU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CaudioIDU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* AudioObject_get_secondaryAudioSource_m0CF34784C9E1E9C35DC1CF3D7AE9D78F34FF2FA8_inline (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->____audioSource2_42;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AudioController_get_isAdditionalAudioController_m45AF12A42E7BF0FF1D9A8D91EE57B958AE531738_inline (AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____isAdditionalAudioController_36;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioCategory_set_audioController_m5276D4CA40A5C4D342C9E3928EBE8948EC0218D7_inline (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* ___0_value, const RuntimeMethod* method) 
{
	{
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0 = ___0_value;
		__this->___U3CaudioControllerU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CaudioControllerU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* AudioSubItem_get_item_m53E96EF703004CD165FD10212837F30EDBD20C38_inline (AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* __this, const RuntimeMethod* method) 
{
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_0 = __this->____item_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioObject_set_subItem_m84C0283818EFCF174279DD41374EB80FC9BC0250_inline (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* ___0_value, const RuntimeMethod* method) 
{
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_0 = ___0_value;
		__this->____subItemPrimary_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____subItemPrimary_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioObject_set_category_m7341517B0BDD393E77BE2E576F21F1494CDAC1E1_inline (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* ___0_value, const RuntimeMethod* method) 
{
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_0 = ___0_value;
		__this->____category_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____category_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioObject_set_channel_m713E350808B9959C31DAAAB5B0BD0D2FA74A1A22_inline (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CchannelU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* AudioCategory_get_audioController_m1675648A0516A6A61319734FD1ED7ACA5854AD14_inline (AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* __this, const RuntimeMethod* method) 
{
	{
		AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B* L_0 = __this->___U3CaudioControllerU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AudioSubItem_get__SummedProbability_mB306786B200874B880CA1521EA4BEAB4FB5503E2_inline (AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____summedProbability_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double AudioFader_get_time_mDA07910E26850056B54210CA6AC356C312C7E96C_inline (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CtimeU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioFader_set_time_m7D1CD98970587468432FE8B7942D010E7BCD31B9_inline (AudioFader_tD34FC64EBE8E4971094BAE5F1EB8B0CB03CADDF8* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_value;
		__this->___U3CtimeU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioItem_set_category_mF946B97E7958B6A89B66250254FAC5E54DEF9D7E_inline (AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* __this, AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* ___0_value, const RuntimeMethod* method) 
{
	{
		AudioCategory_t764F32B60AA2EDB9626DA90ACC595818A79A03FA* L_0 = ___0_value;
		__this->____category_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____category_24), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioSubItem_set_item_m77620B4DCA2E950E8CDBE98D5D4FE31E124E7E17_inline (AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* __this, AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* ___0_value, const RuntimeMethod* method) 
{
	{
		AudioItem_t8FEBD4FAA09ED62AB72DD2CCF60FFD8B6BED5EF0* L_0 = ___0_value;
		__this->____item_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____item_20), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioSubItem_set__SummedProbability_mAA86F675EC9F65A877972FD02012D2506A4BA46E_inline (AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		__this->____summedProbability_18 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* AudioObject_get_subItem_mE36DC432092EBB487061B7FA4BCD2E6A198CF1CC_inline (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		AudioSubItem_t03B85D219D3C27F82661B490CAB9B0C73CB50AB3* L_0 = __this->____subItemPrimary_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AudioObject_get_channel_mA8264029E34B019838CD26196E5B5F082C4FAF9B_inline (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CchannelU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double AudioObject_get_audioObjectTime_mC84CEB1B5C2BFAC1C2AA49FAF3902EBF5C6A24CE_inline (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->____audioObjectTime_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double AudioController_get_systemDeltaTime_m276484A295F65B3638BCA16FD90B7016E78BD8C2_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var);
		double L_0 = ((AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tB7EA63DC7EF18DC4033B405F144F41E1751C669B_il2cpp_TypeInfo_var))->____systemDeltaTime_44;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioEventDelegate_tC8822AE744F66D86E67505066207E918FAD55B49* AudioObject_get_completelyPlayedDelegate_m778A754922B2E833AACEC21D9F5655DC4F4A408D_inline (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, const RuntimeMethod* method) 
{
	{
		AudioEventDelegate_tC8822AE744F66D86E67505066207E918FAD55B49* L_0 = __this->____completelyPlayedDelegate_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioEventDelegate_Invoke_m6CEE69572000A08372439B0733B708B13F2E769D_inline (AudioEventDelegate_tC8822AE744F66D86E67505066207E918FAD55B49* __this, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* ___0_audioObject, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_audioObject, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioObject_SetApplicationPaused_m44EC3CBA99D6DFFD0E315D5A8683C17F7DD6A891_inline (AudioObject_t934255D0862E8764B4C6A58FDB6B91E3E7E3A553* __this, bool ___0_isPaused, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_isPaused;
		__this->____applicationPaused_19 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___0_item;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
