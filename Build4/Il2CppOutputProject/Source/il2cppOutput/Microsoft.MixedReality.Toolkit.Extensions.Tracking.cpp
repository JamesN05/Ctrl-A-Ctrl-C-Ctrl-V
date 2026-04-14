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

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Microsoft.MixedReality.Toolkit.BaseExtensionService
struct BaseExtensionService_t3F0E7E096A45E6E98016F9C94E5D3A94D50127DF;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_t2A0A98B91AB85C25A1A55C5154A6C4BEB33222FA;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t37408A99C1C9139C195AB7DE6CEFFE40C3FDBC77;
// Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual
struct BasicLostTrackingVisual_t7737F3B84019D1D1E02A35038ABF2083429C1E03;
// Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual
struct ILostTrackingVisual_tE28F9C3602B0D096666F5457F067152C48CA258D;
// Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService
struct LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D;
// Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile
struct LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_tA366CA6D3EDB57F957426EBE9EAC91A169DA3F37;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AudioClip
struct AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801;
// UnityEngine.AudioSource
struct AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.MeshRenderer
struct MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Transform[]
struct TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804;
// UnityEngine.XR.WSA.WorldManager/OnPositionalLocatorStateChangedDelegate
struct OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B;

IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILostTrackingVisual_tE28F9C3602B0D096666F5457F067152C48CA258D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2898F47DA9C854A4CCA74054354C58B3EF9E90F7;
IL2CPP_EXTERN_C String_t* _stringLiteral3BC620A0D51B570B2EC06A5FEDBB8892E99E869A;
IL2CPP_EXTERN_C String_t* _stringLiteral7B88EF10801997FB9BC916F3A54B2909D6CDD203;
IL2CPP_EXTERN_C String_t* _stringLiteral7F150DB49BE5211DEE33ED681B35512189789774;
IL2CPP_EXTERN_C String_t* _stringLiteralA3D298A77CBCBBF423FF029039310D1DC19D8583;
IL2CPP_EXTERN_C String_t* _stringLiteralD098A68B379F7A373020990B860A646E1431CFE4;
IL2CPP_EXTERN_C String_t* _stringLiteralE81FB5C253068009561B6E452887770A732107A2;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m335E18CE04D2AD7313D89DBEA3A88EDB76255113_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisILostTrackingVisual_tE28F9C3602B0D096666F5457F067152C48CA258D_m7774D5B9161AA387C38248BFC4911D2AFA49CF4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LostTrackingService_OnPositionalLocatorStateChanged_mD5F13C88A168C64A2BA10FBC8407007652A6E299_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t BasicLostTrackingVisual_ResetVisual_mDB645F61DB048513435AC623961EBC48B75F37A0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BasicLostTrackingVisual_SetLayer_m489C1B24E9B3D0B1FB4CAA2AFF8786B38A947504_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BasicLostTrackingVisual_Update_mFAA9BB7BE9B3C50ED5429132F1A13C9935B6499E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LostTrackingService_DisableTrackingLostVisual_m07F310D896DDE48F5642973570CCFAA562D72ED2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LostTrackingService_EnableTrackingLostVisual_mF79BA1C102A06DFC4CCD005A340544861D40CBCD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LostTrackingService_Initialize_m2698B009A3157868A9369227625E460661C1E49B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LostTrackingService_OnPositionalLocatorStateChanged_mD5F13C88A168C64A2BA10FBC8407007652A6E299_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LostTrackingService_SetTrackingLost_mE995B7A8457A2498AEFA5D143F9D90EC7F557082_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LostTrackingService__cctor_mBB92714B301FCE07B4963747440DB505D0008ED6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LostTrackingService__ctor_m2A18F101CC6F6E0C4B9D4AA54B19552113C88250_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t9629CD27D499B7F2122774E8FB4832553787C5C6 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Boolean
struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
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
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
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
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
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


// System.IntPtr
struct IntPtr_t 
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


// System.Nullable`1<System.Boolean>
struct Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Single
struct Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
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


// System.UInt16
struct UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
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


// System.UInt32
struct UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
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


// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
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


// UnityEngine.LayerMask
struct LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t37408A99C1C9139C195AB7DE6CEFFE40C3FDBC77  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_t2A0A98B91AB85C25A1A55C5154A6C4BEB33222FA * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isInitialized
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___isInitialized_4;
	// System.String[] Microsoft.MixedReality.Toolkit.BaseService::typeName
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___typeName_5;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isEnabled
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___isEnabled_9;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isMarkedDestroyed
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___isMarkedDestroyed_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_11;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_t37408A99C1C9139C195AB7DE6CEFFE40C3FDBC77, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_t37408A99C1C9139C195AB7DE6CEFFE40C3FDBC77, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_t37408A99C1C9139C195AB7DE6CEFFE40C3FDBC77, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_t2A0A98B91AB85C25A1A55C5154A6C4BEB33222FA * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_t2A0A98B91AB85C25A1A55C5154A6C4BEB33222FA ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_t2A0A98B91AB85C25A1A55C5154A6C4BEB33222FA * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_4() { return static_cast<int32_t>(offsetof(BaseService_t37408A99C1C9139C195AB7DE6CEFFE40C3FDBC77, ___isInitialized_4)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_isInitialized_4() const { return ___isInitialized_4; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_isInitialized_4() { return &___isInitialized_4; }
	inline void set_isInitialized_4(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___isInitialized_4 = value;
	}

	inline static int32_t get_offset_of_typeName_5() { return static_cast<int32_t>(offsetof(BaseService_t37408A99C1C9139C195AB7DE6CEFFE40C3FDBC77, ___typeName_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_typeName_5() const { return ___typeName_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_typeName_5() { return &___typeName_5; }
	inline void set_typeName_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___typeName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeName_5), (void*)value);
	}

	inline static int32_t get_offset_of_isEnabled_9() { return static_cast<int32_t>(offsetof(BaseService_t37408A99C1C9139C195AB7DE6CEFFE40C3FDBC77, ___isEnabled_9)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_isEnabled_9() const { return ___isEnabled_9; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_isEnabled_9() { return &___isEnabled_9; }
	inline void set_isEnabled_9(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___isEnabled_9 = value;
	}

	inline static int32_t get_offset_of_isMarkedDestroyed_10() { return static_cast<int32_t>(offsetof(BaseService_t37408A99C1C9139C195AB7DE6CEFFE40C3FDBC77, ___isMarkedDestroyed_10)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_isMarkedDestroyed_10() const { return ___isMarkedDestroyed_10; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_isMarkedDestroyed_10() { return &___isMarkedDestroyed_10; }
	inline void set_isMarkedDestroyed_10(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___isMarkedDestroyed_10 = value;
	}

	inline static int32_t get_offset_of_disposed_11() { return static_cast<int32_t>(offsetof(BaseService_t37408A99C1C9139C195AB7DE6CEFFE40C3FDBC77, ___disposed_11)); }
	inline bool get_disposed_11() const { return ___disposed_11; }
	inline bool* get_address_of_disposed_11() { return &___disposed_11; }
	inline void set_disposed_11(bool value)
	{
		___disposed_11 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.XR.WSA.PositionalLocatorState
struct PositionalLocatorState_tE622489AA7DB67A92489D77CD1EF22EC2C5F0598 
{
public:
	// System.Int32 UnityEngine.XR.WSA.PositionalLocatorState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PositionalLocatorState_tE622489AA7DB67A92489D77CD1EF22EC2C5F0598, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseExtensionService
struct BaseExtensionService_t3F0E7E096A45E6E98016F9C94E5D3A94D50127DF  : public BaseService_t37408A99C1C9139C195AB7DE6CEFFE40C3FDBC77
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseExtensionService::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseExtensionService_t3F0E7E096A45E6E98016F9C94E5D3A94D50127DF, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
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
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

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

// UnityEngine.AudioClip
struct AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_t2A0A98B91AB85C25A1A55C5154A6C4BEB33222FA  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_t2A0A98B91AB85C25A1A55C5154A6C4BEB33222FA, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService
struct LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D  : public BaseExtensionService_t3F0E7E096A45E6E98016F9C94E5D3A94D50127DF
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::<TrackingLost>k__BackingField
	bool ___U3CTrackingLostU3Ek__BackingField_13;
	// System.Action Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::<OnTrackingLost>k__BackingField
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___U3COnTrackingLostU3Ek__BackingField_14;
	// System.Action Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::<OnTrackingRestored>k__BackingField
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___U3COnTrackingRestoredU3Ek__BackingField_15;
	// Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::profile
	LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533 * ___profile_16;
	// Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::visual
	RuntimeObject* ___visual_17;
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::cullingMaskOnTrackingLost
	int32_t ___cullingMaskOnTrackingLost_18;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::timeScaleOnTrackingLost
	float ___timeScaleOnTrackingLost_19;

public:
	inline static int32_t get_offset_of_U3CTrackingLostU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D, ___U3CTrackingLostU3Ek__BackingField_13)); }
	inline bool get_U3CTrackingLostU3Ek__BackingField_13() const { return ___U3CTrackingLostU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CTrackingLostU3Ek__BackingField_13() { return &___U3CTrackingLostU3Ek__BackingField_13; }
	inline void set_U3CTrackingLostU3Ek__BackingField_13(bool value)
	{
		___U3CTrackingLostU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3COnTrackingLostU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D, ___U3COnTrackingLostU3Ek__BackingField_14)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_U3COnTrackingLostU3Ek__BackingField_14() const { return ___U3COnTrackingLostU3Ek__BackingField_14; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_U3COnTrackingLostU3Ek__BackingField_14() { return &___U3COnTrackingLostU3Ek__BackingField_14; }
	inline void set_U3COnTrackingLostU3Ek__BackingField_14(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___U3COnTrackingLostU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnTrackingLostU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnTrackingRestoredU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D, ___U3COnTrackingRestoredU3Ek__BackingField_15)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_U3COnTrackingRestoredU3Ek__BackingField_15() const { return ___U3COnTrackingRestoredU3Ek__BackingField_15; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_U3COnTrackingRestoredU3Ek__BackingField_15() { return &___U3COnTrackingRestoredU3Ek__BackingField_15; }
	inline void set_U3COnTrackingRestoredU3Ek__BackingField_15(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___U3COnTrackingRestoredU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnTrackingRestoredU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_profile_16() { return static_cast<int32_t>(offsetof(LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D, ___profile_16)); }
	inline LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533 * get_profile_16() const { return ___profile_16; }
	inline LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533 ** get_address_of_profile_16() { return &___profile_16; }
	inline void set_profile_16(LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533 * value)
	{
		___profile_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___profile_16), (void*)value);
	}

	inline static int32_t get_offset_of_visual_17() { return static_cast<int32_t>(offsetof(LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D, ___visual_17)); }
	inline RuntimeObject* get_visual_17() const { return ___visual_17; }
	inline RuntimeObject** get_address_of_visual_17() { return &___visual_17; }
	inline void set_visual_17(RuntimeObject* value)
	{
		___visual_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visual_17), (void*)value);
	}

	inline static int32_t get_offset_of_cullingMaskOnTrackingLost_18() { return static_cast<int32_t>(offsetof(LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D, ___cullingMaskOnTrackingLost_18)); }
	inline int32_t get_cullingMaskOnTrackingLost_18() const { return ___cullingMaskOnTrackingLost_18; }
	inline int32_t* get_address_of_cullingMaskOnTrackingLost_18() { return &___cullingMaskOnTrackingLost_18; }
	inline void set_cullingMaskOnTrackingLost_18(int32_t value)
	{
		___cullingMaskOnTrackingLost_18 = value;
	}

	inline static int32_t get_offset_of_timeScaleOnTrackingLost_19() { return static_cast<int32_t>(offsetof(LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D, ___timeScaleOnTrackingLost_19)); }
	inline float get_timeScaleOnTrackingLost_19() const { return ___timeScaleOnTrackingLost_19; }
	inline float* get_address_of_timeScaleOnTrackingLost_19() { return &___timeScaleOnTrackingLost_19; }
	inline void set_timeScaleOnTrackingLost_19(float value)
	{
		___timeScaleOnTrackingLost_19 = value;
	}
};

struct LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::DisableTrackingLostVisualPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___DisableTrackingLostVisualPerfMarker_20;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::EnableTrackingLostVisualPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___EnableTrackingLostVisualPerfMarker_21;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::SetTrackingLostPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___SetTrackingLostPerfMarker_22;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::OnPositionLocatorStateChangedPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___OnPositionLocatorStateChangedPerfMarker_23;

public:
	inline static int32_t get_offset_of_DisableTrackingLostVisualPerfMarker_20() { return static_cast<int32_t>(offsetof(LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D_StaticFields, ___DisableTrackingLostVisualPerfMarker_20)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_DisableTrackingLostVisualPerfMarker_20() const { return ___DisableTrackingLostVisualPerfMarker_20; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_DisableTrackingLostVisualPerfMarker_20() { return &___DisableTrackingLostVisualPerfMarker_20; }
	inline void set_DisableTrackingLostVisualPerfMarker_20(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___DisableTrackingLostVisualPerfMarker_20 = value;
	}

	inline static int32_t get_offset_of_EnableTrackingLostVisualPerfMarker_21() { return static_cast<int32_t>(offsetof(LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D_StaticFields, ___EnableTrackingLostVisualPerfMarker_21)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_EnableTrackingLostVisualPerfMarker_21() const { return ___EnableTrackingLostVisualPerfMarker_21; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_EnableTrackingLostVisualPerfMarker_21() { return &___EnableTrackingLostVisualPerfMarker_21; }
	inline void set_EnableTrackingLostVisualPerfMarker_21(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___EnableTrackingLostVisualPerfMarker_21 = value;
	}

	inline static int32_t get_offset_of_SetTrackingLostPerfMarker_22() { return static_cast<int32_t>(offsetof(LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D_StaticFields, ___SetTrackingLostPerfMarker_22)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_SetTrackingLostPerfMarker_22() const { return ___SetTrackingLostPerfMarker_22; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_SetTrackingLostPerfMarker_22() { return &___SetTrackingLostPerfMarker_22; }
	inline void set_SetTrackingLostPerfMarker_22(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___SetTrackingLostPerfMarker_22 = value;
	}

	inline static int32_t get_offset_of_OnPositionLocatorStateChangedPerfMarker_23() { return static_cast<int32_t>(offsetof(LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D_StaticFields, ___OnPositionLocatorStateChangedPerfMarker_23)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_OnPositionLocatorStateChangedPerfMarker_23() const { return ___OnPositionLocatorStateChangedPerfMarker_23; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_OnPositionLocatorStateChangedPerfMarker_23() { return &___OnPositionLocatorStateChangedPerfMarker_23; }
	inline void set_OnPositionLocatorStateChangedPerfMarker_23(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___OnPositionLocatorStateChangedPerfMarker_23 = value;
	}
};


// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.XR.WSA.WorldManager/OnPositionalLocatorStateChangedDelegate
struct OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile
struct LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533  : public BaseMixedRealityProfile_t2A0A98B91AB85C25A1A55C5154A6C4BEB33222FA
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::trackingLostVisualPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___trackingLostVisualPrefab_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::trackingLostVisualLayer
	int32_t ___trackingLostVisualLayer_6;
	// UnityEngine.LayerMask Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::trackingLostCullingMask
	LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___trackingLostCullingMask_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::haltTimeWhileTrackingLost
	bool ___haltTimeWhileTrackingLost_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::haltAudioWhileTrackingLost
	bool ___haltAudioWhileTrackingLost_9;

public:
	inline static int32_t get_offset_of_trackingLostVisualPrefab_5() { return static_cast<int32_t>(offsetof(LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533, ___trackingLostVisualPrefab_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_trackingLostVisualPrefab_5() const { return ___trackingLostVisualPrefab_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_trackingLostVisualPrefab_5() { return &___trackingLostVisualPrefab_5; }
	inline void set_trackingLostVisualPrefab_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___trackingLostVisualPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingLostVisualPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_trackingLostVisualLayer_6() { return static_cast<int32_t>(offsetof(LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533, ___trackingLostVisualLayer_6)); }
	inline int32_t get_trackingLostVisualLayer_6() const { return ___trackingLostVisualLayer_6; }
	inline int32_t* get_address_of_trackingLostVisualLayer_6() { return &___trackingLostVisualLayer_6; }
	inline void set_trackingLostVisualLayer_6(int32_t value)
	{
		___trackingLostVisualLayer_6 = value;
	}

	inline static int32_t get_offset_of_trackingLostCullingMask_7() { return static_cast<int32_t>(offsetof(LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533, ___trackingLostCullingMask_7)); }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  get_trackingLostCullingMask_7() const { return ___trackingLostCullingMask_7; }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * get_address_of_trackingLostCullingMask_7() { return &___trackingLostCullingMask_7; }
	inline void set_trackingLostCullingMask_7(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  value)
	{
		___trackingLostCullingMask_7 = value;
	}

	inline static int32_t get_offset_of_haltTimeWhileTrackingLost_8() { return static_cast<int32_t>(offsetof(LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533, ___haltTimeWhileTrackingLost_8)); }
	inline bool get_haltTimeWhileTrackingLost_8() const { return ___haltTimeWhileTrackingLost_8; }
	inline bool* get_address_of_haltTimeWhileTrackingLost_8() { return &___haltTimeWhileTrackingLost_8; }
	inline void set_haltTimeWhileTrackingLost_8(bool value)
	{
		___haltTimeWhileTrackingLost_8 = value;
	}

	inline static int32_t get_offset_of_haltAudioWhileTrackingLost_9() { return static_cast<int32_t>(offsetof(LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533, ___haltAudioWhileTrackingLost_9)); }
	inline bool get_haltAudioWhileTrackingLost_9() const { return ___haltAudioWhileTrackingLost_9; }
	inline bool* get_address_of_haltAudioWhileTrackingLost_9() { return &___haltAudioWhileTrackingLost_9; }
	inline void set_haltAudioWhileTrackingLost_9(bool value)
	{
		___haltAudioWhileTrackingLost_9 = value;
	}
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MeshRenderer
struct MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual
struct BasicLostTrackingVisual_t7737F3B84019D1D1E02A35038ABF2083429C1E03  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.MeshRenderer Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::gridRenderer
	MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * ___gridRenderer_4;
	// UnityEngine.AudioClip Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::loopClip
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___loopClip_5;
	// UnityEngine.AudioSource Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::audioSource
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___audioSource_6;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::pulseTimer
	float ___pulseTimer_7;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::pulseDuration
	float ___pulseDuration_8;

public:
	inline static int32_t get_offset_of_gridRenderer_4() { return static_cast<int32_t>(offsetof(BasicLostTrackingVisual_t7737F3B84019D1D1E02A35038ABF2083429C1E03, ___gridRenderer_4)); }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * get_gridRenderer_4() const { return ___gridRenderer_4; }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED ** get_address_of_gridRenderer_4() { return &___gridRenderer_4; }
	inline void set_gridRenderer_4(MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * value)
	{
		___gridRenderer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gridRenderer_4), (void*)value);
	}

	inline static int32_t get_offset_of_loopClip_5() { return static_cast<int32_t>(offsetof(BasicLostTrackingVisual_t7737F3B84019D1D1E02A35038ABF2083429C1E03, ___loopClip_5)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_loopClip_5() const { return ___loopClip_5; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_loopClip_5() { return &___loopClip_5; }
	inline void set_loopClip_5(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___loopClip_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loopClip_5), (void*)value);
	}

	inline static int32_t get_offset_of_audioSource_6() { return static_cast<int32_t>(offsetof(BasicLostTrackingVisual_t7737F3B84019D1D1E02A35038ABF2083429C1E03, ___audioSource_6)); }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * get_audioSource_6() const { return ___audioSource_6; }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C ** get_address_of_audioSource_6() { return &___audioSource_6; }
	inline void set_audioSource_6(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * value)
	{
		___audioSource_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_6), (void*)value);
	}

	inline static int32_t get_offset_of_pulseTimer_7() { return static_cast<int32_t>(offsetof(BasicLostTrackingVisual_t7737F3B84019D1D1E02A35038ABF2083429C1E03, ___pulseTimer_7)); }
	inline float get_pulseTimer_7() const { return ___pulseTimer_7; }
	inline float* get_address_of_pulseTimer_7() { return &___pulseTimer_7; }
	inline void set_pulseTimer_7(float value)
	{
		___pulseTimer_7 = value;
	}

	inline static int32_t get_offset_of_pulseDuration_8() { return static_cast<int32_t>(offsetof(BasicLostTrackingVisual_t7737F3B84019D1D1E02A35038ABF2083429C1E03, ___pulseDuration_8)); }
	inline float get_pulseDuration_8() const { return ___pulseDuration_8; }
	inline float* get_address_of_pulseDuration_8() { return &___pulseDuration_8; }
	inline void set_pulseDuration_8(float value)
	{
		___pulseDuration_8 = value;
	}
};


// UnityEngine.AudioSource
struct AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C  : public AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Transform[]
struct TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * m_Items[1];

public:
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponentsInChildren_TisRuntimeObject_m96A4AA0545C19F58121E6C5142474CB26EAB9717_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4566F033303F52A6D430A06E5FA2D29E2A8D6ED3_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_m29A18F5AEC1DD0A23BB53D51D813EA0ACE9AE27C_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mF574231E0B749E0167CAF9E4FCBA06BAA0F9ED9B (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_m4DEE785C31213E964D7014B633F0FFC7E98B79F4 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Transform>()
inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* Component_GetComponentsInChildren_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m335E18CE04D2AD7313D89DBEA3A88EDB76255113 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m96A4AA0545C19F58121E6C5142474CB26EAB9717_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mA0AE7A144C88AE8AABB42DF17B0F3F0714BA06B2 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B (float ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  Vector4_op_Implicit_m5BFA8D95F88CB2AEA6E02B200A61B718314A8495 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_m6FC2CC4EBE6C45D48D8B9164148A0CB3124335EC (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___name0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::.ctor(System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService__ctor_m2A18F101CC6F6E0C4B9D4AA54B19552113C88250 (LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D * __this, String_t* ___name0, uint32_t ___priority1, BaseMixedRealityProfile_t2A0A98B91AB85C25A1A55C5154A6C4BEB33222FA * ___profile2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseExtensionService::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseExtensionService_set_Registrar_m1D3A72C300FA5726A02BC379034AB2F628A96FB8_inline (BaseExtensionService_t3F0E7E096A45E6E98016F9C94E5D3A94D50127DF * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseExtensionService::.ctor(System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseExtensionService__ctor_m56DA1AA650C9D1255E386E53E93B9BCB2A71DCEE (BaseExtensionService_t3F0E7E096A45E6E98016F9C94E5D3A94D50127DF * __this, String_t* ___name0, uint32_t ___priority1, BaseMixedRealityProfile_t2A0A98B91AB85C25A1A55C5154A6C4BEB33222FA * ___profile2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Initialize_mFCB9B6171C9F4AA09D2BA1D69C386669A626C432 (BaseService_t37408A99C1C9139C195AB7DE6CEFFE40C3FDBC77 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WorldManager/OnPositionalLocatorStateChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPositionalLocatorStateChangedDelegate__ctor_mD1849CEC79E785F210827F85B69D618A1E3822D2 (OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WorldManager::add_OnPositionalLocatorStateChanged(UnityEngine.XR.WSA.WorldManager/OnPositionalLocatorStateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldManager_add_OnPositionalLocatorStateChanged_m2C5CBEE910A53ED9AAD26AA82DCA0D1B0EFA632D (OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * ___value0, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * CameraCache_get_Main_m7E8C960AE7377D88571B34D5FC306D9F3F8108BA (const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_cullingMask_m215DB1C878CF1ADEEF6800AF449EEEA7680ECCCD (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_HaltTimeWhileTrackingLost()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool LostTrackingServiceProfile_get_HaltTimeWhileTrackingLost_m810AC6D41D0CAFF201A4D74813EDE6C3E1D45535_inline (LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mAB89C3BB5DEE81934159C23F103397A77AC3F4AF (float ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_HaltAudioOnTrackingLost()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool LostTrackingServiceProfile_get_HaltAudioOnTrackingLost_m6A657F4639C23F8B4FA9010094A222E42DB4DA3B_inline (LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioListener::set_pause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_set_pause_mF016E18A018A7CC403D59F7120EB909ED7A687B0 (bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_TrackingLostVisualPrefab()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * LostTrackingServiceProfile_get_TrackingLostVisualPrefab_m2974013F77EA62A5375F5D32B6CB3CC82ADF9123_inline (LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4566F033303F52A6D430A06E5FA2D29E2A8D6ED3_gshared)(___original0, method);
}
// !!0 UnityEngine.GameObject::GetComponentInChildren<Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual>()
inline RuntimeObject* GameObject_GetComponentInChildren_TisILostTrackingVisual_tE28F9C3602B0D096666F5457F067152C48CA258D_m7774D5B9161AA387C38248BFC4911D2AFA49CF4F (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_m29A18F5AEC1DD0A23BB53D51D813EA0ACE9AE27C_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Camera::get_cullingMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_cullingMask_m0992E96D87A4221E38746EBD882780CEFF7C2BCD (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m7E198A5814859A08FD0FFE6DD5F7ED5C907719F8 (const RuntimeMethod* method);
// UnityEngine.LayerMask Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_TrackingLostCullingMask()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  LostTrackingServiceProfile_get_TrackingLostCullingMask_mF180B68095C91CA8D004DCFFDC44177815718ACE_inline (LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m2AFFC7F931005437E8F356C953F439829AF4CFA5 (LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___mask0, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_TrackingLostVisualLayer()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t LostTrackingServiceProfile_get_TrackingLostVisualLayer_m7B808DA8109AE14F333B3E2C15C10B2BE4825C5C_inline (LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::get_TrackingLost()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool LostTrackingService_get_TrackingLost_mD50146E416B65CE25FA4D2E32372D1164B03E6DE_inline (LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::set_TrackingLost(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void LostTrackingService_set_TrackingLost_m982CA3C6F3248F5C1675E99BA5F5937F3348F063_inline (LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D * __this, bool ___value0, const RuntimeMethod* method);
// System.Action Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::get_OnTrackingLost()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * LostTrackingService_get_OnTrackingLost_m8867D85BFC1319E7A0E1D8927FAD0A6B5D7E7FD5_inline (LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::EnableTrackingLostVisual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_EnableTrackingLostVisual_mF79BA1C102A06DFC4CCD005A340544861D40CBCD (LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D * __this, const RuntimeMethod* method);
// System.Action Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::get_OnTrackingRestored()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * LostTrackingService_get_OnTrackingRestored_m09A65E05AE237F8E8FA7B30222DB86B41C2A4239_inline (LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::DisableTrackingLostVisual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_DisableTrackingLostVisual_m07F310D896DDE48F5642973570CCFAA562D72ED2 (LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::SetTrackingLost(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_SetTrackingLost_mE995B7A8457A2498AEFA5D143F9D90EC7F557082 (LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D * __this, bool ___trackingLost0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_get_value_m682288E860BBE36F5668DCDBC59245DE6319E537 (LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.LayerMask::set_value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayerMask_set_value_m56653944C7760E9D456E6B9E68F85CAA5B24A042 (LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMixedRealityProfile__ctor_m499CEFEFD8AA8B1F4CCEE27F77EA0ECB1A3C4A19 (BaseMixedRealityProfile_t2A0A98B91AB85C25A1A55C5154A6C4BEB33222FA * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::Internal_End(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerMarker_Internal_End_mE25FE55A23DF111614CE890359972D96A65B499A (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.ProfilerMarker::Internal_Create(System.String,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerMarker_Internal_Create_m92F2A7651D4BF3F3D0CB62078DD79B71839FA370 (String_t* ___name0, uint16_t ___flags1, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::Internal_Begin(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerMarker_Internal_Begin_m79272E72708A53AFDEEEB81CF66C7D62920AC5B5 (intptr_t ___markerPtr0, const RuntimeMethod* method);
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
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::get_Enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BasicLostTrackingVisual_get_Enabled_m864616D4084D054CE19D68E11B06C556160C818A (BasicLostTrackingVisual_t7737F3B84019D1D1E02A35038ABF2083429C1E03 * __this, const RuntimeMethod* method)
{
	{
		// get { return gameObject.activeSelf; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::set_Enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicLostTrackingVisual_set_Enabled_m19922A4A4E4203C27F207C0DCC50B34FEAE5F893 (BasicLostTrackingVisual_t7737F3B84019D1D1E02A35038ABF2083429C1E03 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { gameObject.SetActive(value); }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		bool L_1 = ___value0;
		NullCheck(L_0);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_0, L_1, /*hidden argument*/NULL);
		// set { gameObject.SetActive(value); }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::ResetVisual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicLostTrackingVisual_ResetVisual_mDB645F61DB048513435AC623961EBC48B75F37A0 (BasicLostTrackingVisual_t7737F3B84019D1D1E02A35038ABF2083429C1E03 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BasicLostTrackingVisual_ResetVisual_mDB645F61DB048513435AC623961EBC48B75F37A0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (audioSource != null && loopClip != null)
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_0 = __this->get_audioSource_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_2 = __this->get_loopClip_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		// audioSource.clip = loopClip;
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_4 = __this->get_audioSource_6();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_5 = __this->get_loopClip_5();
		NullCheck(L_4);
		AudioSource_set_clip_mF574231E0B749E0167CAF9E4FCBA06BAA0F9ED9B(L_4, L_5, /*hidden argument*/NULL);
		// audioSource.loop = true;
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_6 = __this->get_audioSource_6();
		NullCheck(L_6);
		AudioSource_set_loop_m4DEE785C31213E964D7014B633F0FFC7E98B79F4(L_6, (bool)1, /*hidden argument*/NULL);
		// audioSource.Play();
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_7 = __this->get_audioSource_6();
		NullCheck(L_7);
		AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164(L_7, /*hidden argument*/NULL);
	}

IL_0044:
	{
		// pulseTimer = 0.0f;
		__this->set_pulseTimer_7((0.0f));
		// if (gridRenderer != null)
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_8 = __this->get_gridRenderer_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0077;
		}
	}
	{
		// gridRenderer.material.SetFloat("_Pulse_", 0.0f);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_10 = __this->get_gridRenderer_4();
		NullCheck(L_10);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_11 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2(L_11, _stringLiteral3BC620A0D51B570B2EC06A5FEDBB8892E99E869A, (0.0f), /*hidden argument*/NULL);
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::SetLayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicLostTrackingVisual_SetLayer_m489C1B24E9B3D0B1FB4CAA2AFF8786B38A947504 (BasicLostTrackingVisual_t7737F3B84019D1D1E02A35038ABF2083429C1E03 * __this, int32_t ___layer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BasicLostTrackingVisual_SetLayer_m489C1B24E9B3D0B1FB4CAA2AFF8786B38A947504_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (Transform child in transform.GetComponentsInChildren<Transform>())
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_1 = Component_GetComponentsInChildren_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m335E18CE04D2AD7313D89DBEA3A88EDB76255113(L_0, /*hidden argument*/Component_GetComponentsInChildren_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m335E18CE04D2AD7313D89DBEA3A88EDB76255113_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0022;
	}

IL_0010:
	{
		// foreach (Transform child in transform.GetComponentsInChildren<Transform>())
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// child.gameObject.layer = layer;
		NullCheck(L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_5, /*hidden argument*/NULL);
		int32_t L_7 = ___layer0;
		NullCheck(L_6);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_6, L_7, /*hidden argument*/NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0022:
	{
		// foreach (Transform child in transform.GetComponentsInChildren<Transform>())
		int32_t L_9 = V_1;
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicLostTrackingVisual_Update_mFAA9BB7BE9B3C50ED5429132F1A13C9935B6499E (BasicLostTrackingVisual_t7737F3B84019D1D1E02A35038ABF2083429C1E03 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BasicLostTrackingVisual_Update_mFAA9BB7BE9B3C50ED5429132F1A13C9935B6499E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// pulseTimer += Time.unscaledDeltaTime;
		float L_0 = __this->get_pulseTimer_7();
		float L_1 = Time_get_unscaledDeltaTime_mA0AE7A144C88AE8AABB42DF17B0F3F0714BA06B2(/*hidden argument*/NULL);
		__this->set_pulseTimer_7(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// float normalizedPulseValue = Mathf.Clamp01(pulseTimer / pulseDuration);
		float L_2 = __this->get_pulseTimer_7();
		float L_3 = __this->get_pulseDuration_8();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_4 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B(((float)((float)L_2/(float)L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		// if (pulseTimer >= pulseDuration)
		float L_5 = __this->get_pulseTimer_7();
		float L_6 = __this->get_pulseDuration_8();
		if ((!(((float)L_5) >= ((float)L_6))))
		{
			goto IL_003e;
		}
	}
	{
		// pulseTimer = 0;
		__this->set_pulseTimer_7((0.0f));
	}

IL_003e:
	{
		// if (gridRenderer != null)
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_7 = __this->get_gridRenderer_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_7, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_008c;
		}
	}
	{
		// gridRenderer.material.SetFloat("_Pulse_", normalizedPulseValue);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_9 = __this->get_gridRenderer_4();
		NullCheck(L_9);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_10 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_9, /*hidden argument*/NULL);
		float L_11 = V_0;
		NullCheck(L_10);
		Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2(L_10, _stringLiteral3BC620A0D51B570B2EC06A5FEDBB8892E99E869A, L_11, /*hidden argument*/NULL);
		// gridRenderer.material.SetVector("_Pulse_Origin_", gridRenderer.transform.position);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_12 = __this->get_gridRenderer_4();
		NullCheck(L_12);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_13 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_12, /*hidden argument*/NULL);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_14 = __this->get_gridRenderer_4();
		NullCheck(L_14);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_17 = Vector4_op_Implicit_m5BFA8D95F88CB2AEA6E02B200A61B718314A8495(L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		Material_SetVector_m6FC2CC4EBE6C45D48D8B9164148A0CB3124335EC(L_13, _stringLiteralA3D298A77CBCBBF423FF029039310D1DC19D8583, L_17, /*hidden argument*/NULL);
	}

IL_008c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicLostTrackingVisual__ctor_m5BDF82B0DAC7CC418ECD851A31D2A8E4455AC154 (BasicLostTrackingVisual_t7737F3B84019D1D1E02A35038ABF2083429C1E03 * __this, const RuntimeMethod* method)
{
	{
		// private float pulseDuration = 2.0f;
		__this->set_pulseDuration_8((2.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::get_TrackingLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LostTrackingService_get_TrackingLost_mD50146E416B65CE25FA4D2E32372D1164B03E6DE (LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D * __this, const RuntimeMethod* method)
{
	{
		// public bool TrackingLost { get; private set; } = false;
		bool L_0 = __this->get_U3CTrackingLostU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::set_TrackingLost(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_set_TrackingLost_m982CA3C6F3248F5C1675E99BA5F5937F3348F063 (LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool TrackingLost { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CTrackingLostU3Ek__BackingField_13(L_0);
		return;
	}
}
// System.Action Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::get_OnTrackingLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * LostTrackingService_get_OnTrackingLost_m8867D85BFC1319E7A0E1D8927FAD0A6B5D7E7FD5 (LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D * __this, const RuntimeMethod* method)
{
	{
		// public Action OnTrackingLost { get; set; }
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = __this->get_U3COnTrackingLostU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::set_OnTrackingLost(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_set_OnTrackingLost_m37A3A8E28A308F3F5ABF6239C34BF17C51C13187 (LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action OnTrackingLost { get; set; }
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = ___value0;
		__this->set_U3COnTrackingLostU3Ek__BackingField_14(L_0);
		return;
	}
}
// System.Action Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::get_OnTrackingRestored()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * LostTrackingService_get_OnTrackingRestored_m09A65E05AE237F8E8FA7B30222DB86B41C2A4239 (LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D * __this, const RuntimeMethod* method)
{
	{
		// public Action OnTrackingRestored { get; set; }
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = __this->get_U3COnTrackingRestoredU3Ek__BackingField_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::set_OnTrackingRestored(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_set_OnTrackingRestored_mB225A6182A9ECD0C14715E6CB361EE65A35C5245 (LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action OnTrackingRestored { get; set; }
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = ___value0;
		__this->set_U3COnTrackingRestoredU3Ek__BackingField_15(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService__ctor_m946D4AF4AA0A89193A3BCEAD9CC624CC021B2C17 (LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D * __this, RuntimeObject* ___registrar0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_t2A0A98B91AB85C25A1A55C5154A6C4BEB33222FA * ___profile3, const RuntimeMethod* method)
{
	{
		// BaseMixedRealityProfile profile) : this(name, priority, profile)
		String_t* L_0 = ___name1;
		uint32_t L_1 = ___priority2;
		BaseMixedRealityProfile_t2A0A98B91AB85C25A1A55C5154A6C4BEB33222FA * L_2 = ___profile3;
		LostTrackingService__ctor_m2A18F101CC6F6E0C4B9D4AA54B19552113C88250(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// Registrar = registrar;
		RuntimeObject* L_3 = ___registrar0;
		BaseExtensionService_set_Registrar_m1D3A72C300FA5726A02BC379034AB2F628A96FB8_inline(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::.ctor(System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService__ctor_m2A18F101CC6F6E0C4B9D4AA54B19552113C88250 (LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D * __this, String_t* ___name0, uint32_t ___priority1, BaseMixedRealityProfile_t2A0A98B91AB85C25A1A55C5154A6C4BEB33222FA * ___profile2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LostTrackingService__ctor_m2A18F101CC6F6E0C4B9D4AA54B19552113C88250_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BaseMixedRealityProfile profile) : base(name, priority, profile)
		String_t* L_0 = ___name0;
		uint32_t L_1 = ___priority1;
		BaseMixedRealityProfile_t2A0A98B91AB85C25A1A55C5154A6C4BEB33222FA * L_2 = ___profile2;
		BaseExtensionService__ctor_m56DA1AA650C9D1255E386E53E93B9BCB2A71DCEE(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// this.profile = profile as LostTrackingServiceProfile;
		BaseMixedRealityProfile_t2A0A98B91AB85C25A1A55C5154A6C4BEB33222FA * L_3 = ___profile2;
		__this->set_profile_16(((LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533 *)IsInstClass((RuntimeObject*)L_3, LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_Initialize_m2698B009A3157868A9369227625E460661C1E49B (LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LostTrackingService_Initialize_m2698B009A3157868A9369227625E460661C1E49B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Initialize();
		BaseService_Initialize_mFCB9B6171C9F4AA09D2BA1D69C386669A626C432(__this, /*hidden argument*/NULL);
		// WorldManager.OnPositionalLocatorStateChanged += OnPositionalLocatorStateChanged;
		OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * L_0 = (OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B *)il2cpp_codegen_object_new(OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B_il2cpp_TypeInfo_var);
		OnPositionalLocatorStateChangedDelegate__ctor_mD1849CEC79E785F210827F85B69D618A1E3822D2(L_0, __this, (intptr_t)((intptr_t)LostTrackingService_OnPositionalLocatorStateChanged_mD5F13C88A168C64A2BA10FBC8407007652A6E299_RuntimeMethod_var), /*hidden argument*/NULL);
		WorldManager_add_OnPositionalLocatorStateChanged_m2C5CBEE910A53ED9AAD26AA82DCA0D1B0EFA632D(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::DisableTrackingLostVisual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_DisableTrackingLostVisual_m07F310D896DDE48F5642973570CCFAA562D72ED2 (LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LostTrackingService_DisableTrackingLostVisual_m07F310D896DDE48F5642973570CCFAA562D72ED2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (DisableTrackingLostVisualPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D_il2cpp_TypeInfo_var))->get_DisableTrackingLostVisualPerfMarker_20();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (visual != null && visual.Enabled)
			RuntimeObject* L_2 = __this->get_visual_17();
			if (!L_2)
			{
				goto IL_006a;
			}
		}

IL_0016:
		{
			RuntimeObject* L_3 = __this->get_visual_17();
			NullCheck(L_3);
			bool L_4 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual::get_Enabled() */, ILostTrackingVisual_tE28F9C3602B0D096666F5457F067152C48CA258D_il2cpp_TypeInfo_var, L_3);
			if (!L_4)
			{
				goto IL_006a;
			}
		}

IL_0023:
		{
			// CameraCache.Main.cullingMask = cullingMaskOnTrackingLost;
			Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_5 = CameraCache_get_Main_m7E8C960AE7377D88571B34D5FC306D9F3F8108BA(/*hidden argument*/NULL);
			int32_t L_6 = __this->get_cullingMaskOnTrackingLost_18();
			NullCheck(L_5);
			Camera_set_cullingMask_m215DB1C878CF1ADEEF6800AF449EEEA7680ECCCD(L_5, L_6, /*hidden argument*/NULL);
			// if (profile.HaltTimeWhileTrackingLost)
			LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533 * L_7 = __this->get_profile_16();
			NullCheck(L_7);
			bool L_8 = LostTrackingServiceProfile_get_HaltTimeWhileTrackingLost_m810AC6D41D0CAFF201A4D74813EDE6C3E1D45535_inline(L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_004b;
			}
		}

IL_0040:
		{
			// Time.timeScale = timeScaleOnTrackingLost;
			float L_9 = __this->get_timeScaleOnTrackingLost_19();
			Time_set_timeScale_mAB89C3BB5DEE81934159C23F103397A77AC3F4AF(L_9, /*hidden argument*/NULL);
		}

IL_004b:
		{
			// if (profile.HaltAudioOnTrackingLost)
			LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533 * L_10 = __this->get_profile_16();
			NullCheck(L_10);
			bool L_11 = LostTrackingServiceProfile_get_HaltAudioOnTrackingLost_m6A657F4639C23F8B4FA9010094A222E42DB4DA3B_inline(L_10, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_005e;
			}
		}

IL_0058:
		{
			// AudioListener.pause = false;
			AudioListener_set_pause_mF016E18A018A7CC403D59F7120EB909ED7A687B0((bool)0, /*hidden argument*/NULL);
		}

IL_005e:
		{
			// visual.Enabled = false;
			RuntimeObject* L_12 = __this->get_visual_17();
			NullCheck(L_12);
			InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual::set_Enabled(System.Boolean) */, ILostTrackingVisual_tE28F9C3602B0D096666F5457F067152C48CA258D_il2cpp_TypeInfo_var, L_12, (bool)0);
		}

IL_006a:
		{
			// }
			IL2CPP_LEAVE(0x7A, FINALLY_006c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006c;
	}

FINALLY_006c:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(108)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(108)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7A, IL_007a)
	}

IL_007a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::EnableTrackingLostVisual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_EnableTrackingLostVisual_mF79BA1C102A06DFC4CCD005A340544861D40CBCD (LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LostTrackingService_EnableTrackingLostVisual_mF79BA1C102A06DFC4CCD005A340544861D40CBCD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (EnableTrackingLostVisualPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D_il2cpp_TypeInfo_var))->get_EnableTrackingLostVisualPerfMarker_21();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (visual == null)
			RuntimeObject* L_2 = __this->get_visual_17();
			if (L_2)
			{
				goto IL_005f;
			}
		}

IL_0016:
		{
			// GameObject visualObject = UnityEngine.Object.Instantiate(profile.TrackingLostVisualPrefab);
			LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533 * L_3 = __this->get_profile_16();
			NullCheck(L_3);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = LostTrackingServiceProfile_get_TrackingLostVisualPrefab_m2974013F77EA62A5375F5D32B6CB3CC82ADF9123_inline(L_3, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90(L_4, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90_RuntimeMethod_var);
			V_2 = L_5;
			// if (visualObject != null)
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = V_2;
			bool L_7 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_6, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_003c;
			}
		}

IL_0030:
		{
			// visual = visualObject.GetComponentInChildren<ILostTrackingVisual>();
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = V_2;
			NullCheck(L_8);
			RuntimeObject* L_9 = GameObject_GetComponentInChildren_TisILostTrackingVisual_tE28F9C3602B0D096666F5457F067152C48CA258D_m7774D5B9161AA387C38248BFC4911D2AFA49CF4F(L_8, /*hidden argument*/GameObject_GetComponentInChildren_TisILostTrackingVisual_tE28F9C3602B0D096666F5457F067152C48CA258D_m7774D5B9161AA387C38248BFC4911D2AFA49CF4F_RuntimeMethod_var);
			__this->set_visual_17(L_9);
		}

IL_003c:
		{
			// if (visual == null)
			RuntimeObject* L_10 = __this->get_visual_17();
			if (L_10)
			{
				goto IL_0053;
			}
		}

IL_0044:
		{
			// Debug.LogError("No ILostTrackingVisual found on prefab supplied by LostTrackingServiceProfile.");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralD098A68B379F7A373020990B860A646E1431CFE4, /*hidden argument*/NULL);
			// return;
			IL2CPP_LEAVE(0x10B, FINALLY_00fd);
		}

IL_0053:
		{
			// visual.Enabled = false;
			RuntimeObject* L_11 = __this->get_visual_17();
			NullCheck(L_11);
			InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual::set_Enabled(System.Boolean) */, ILostTrackingVisual_tE28F9C3602B0D096666F5457F067152C48CA258D_il2cpp_TypeInfo_var, L_11, (bool)0);
		}

IL_005f:
		{
			// if (!visual.Enabled)
			RuntimeObject* L_12 = __this->get_visual_17();
			NullCheck(L_12);
			bool L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual::get_Enabled() */, ILostTrackingVisual_tE28F9C3602B0D096666F5457F067152C48CA258D_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_00fb;
			}
		}

IL_006f:
		{
			// cullingMaskOnTrackingLost = CameraCache.Main.cullingMask;
			Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_14 = CameraCache_get_Main_m7E8C960AE7377D88571B34D5FC306D9F3F8108BA(/*hidden argument*/NULL);
			NullCheck(L_14);
			int32_t L_15 = Camera_get_cullingMask_m0992E96D87A4221E38746EBD882780CEFF7C2BCD(L_14, /*hidden argument*/NULL);
			__this->set_cullingMaskOnTrackingLost_18(L_15);
			// timeScaleOnTrackingLost = Time.timeScale;
			float L_16 = Time_get_timeScale_m7E198A5814859A08FD0FFE6DD5F7ED5C907719F8(/*hidden argument*/NULL);
			__this->set_timeScaleOnTrackingLost_19(L_16);
			// CameraCache.Main.cullingMask = profile.TrackingLostCullingMask;
			Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_17 = CameraCache_get_Main_m7E8C960AE7377D88571B34D5FC306D9F3F8108BA(/*hidden argument*/NULL);
			LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533 * L_18 = __this->get_profile_16();
			NullCheck(L_18);
			LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_19 = LostTrackingServiceProfile_get_TrackingLostCullingMask_mF180B68095C91CA8D004DCFFDC44177815718ACE_inline(L_18, /*hidden argument*/NULL);
			int32_t L_20 = LayerMask_op_Implicit_m2AFFC7F931005437E8F356C953F439829AF4CFA5(L_19, /*hidden argument*/NULL);
			NullCheck(L_17);
			Camera_set_cullingMask_m215DB1C878CF1ADEEF6800AF449EEEA7680ECCCD(L_17, L_20, /*hidden argument*/NULL);
			// if (profile.HaltTimeWhileTrackingLost)
			LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533 * L_21 = __this->get_profile_16();
			NullCheck(L_21);
			bool L_22 = LostTrackingServiceProfile_get_HaltTimeWhileTrackingLost_m810AC6D41D0CAFF201A4D74813EDE6C3E1D45535_inline(L_21, /*hidden argument*/NULL);
			if (!L_22)
			{
				goto IL_00bb;
			}
		}

IL_00b1:
		{
			// Time.timeScale = 0.0f;
			Time_set_timeScale_mAB89C3BB5DEE81934159C23F103397A77AC3F4AF((0.0f), /*hidden argument*/NULL);
		}

IL_00bb:
		{
			// if (profile.HaltAudioOnTrackingLost)
			LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533 * L_23 = __this->get_profile_16();
			NullCheck(L_23);
			bool L_24 = LostTrackingServiceProfile_get_HaltAudioOnTrackingLost_m6A657F4639C23F8B4FA9010094A222E42DB4DA3B_inline(L_23, /*hidden argument*/NULL);
			if (!L_24)
			{
				goto IL_00ce;
			}
		}

IL_00c8:
		{
			// AudioListener.pause = true;
			AudioListener_set_pause_mF016E18A018A7CC403D59F7120EB909ED7A687B0((bool)1, /*hidden argument*/NULL);
		}

IL_00ce:
		{
			// visual.Enabled = true;
			RuntimeObject* L_25 = __this->get_visual_17();
			NullCheck(L_25);
			InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual::set_Enabled(System.Boolean) */, ILostTrackingVisual_tE28F9C3602B0D096666F5457F067152C48CA258D_il2cpp_TypeInfo_var, L_25, (bool)1);
			// visual.SetLayer(profile.TrackingLostVisualLayer);
			RuntimeObject* L_26 = __this->get_visual_17();
			LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533 * L_27 = __this->get_profile_16();
			NullCheck(L_27);
			int32_t L_28 = LostTrackingServiceProfile_get_TrackingLostVisualLayer_m7B808DA8109AE14F333B3E2C15C10B2BE4825C5C_inline(L_27, /*hidden argument*/NULL);
			NullCheck(L_26);
			InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual::SetLayer(System.Int32) */, ILostTrackingVisual_tE28F9C3602B0D096666F5457F067152C48CA258D_il2cpp_TypeInfo_var, L_26, L_28);
			// visual.ResetVisual();
			RuntimeObject* L_29 = __this->get_visual_17();
			NullCheck(L_29);
			InterfaceActionInvoker0::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual::ResetVisual() */, ILostTrackingVisual_tE28F9C3602B0D096666F5457F067152C48CA258D_il2cpp_TypeInfo_var, L_29);
		}

IL_00fb:
		{
			// }
			IL2CPP_LEAVE(0x10B, FINALLY_00fd);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00fd;
	}

FINALLY_00fd:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(253)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(253)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x10B, IL_010b)
	}

IL_010b:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::SetTrackingLost(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_SetTrackingLost_mE995B7A8457A2498AEFA5D143F9D90EC7F557082 (LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D * __this, bool ___trackingLost0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LostTrackingService_SetTrackingLost_mE995B7A8457A2498AEFA5D143F9D90EC7F557082_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * G_B5_0 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * G_B4_0 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * G_B9_0 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * G_B8_0 = NULL;
	{
		// using (SetTrackingLostPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D_il2cpp_TypeInfo_var))->get_SetTrackingLostPerfMarker_22();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (TrackingLost != trackingLost)
			bool L_2 = LostTrackingService_get_TrackingLost_mD50146E416B65CE25FA4D2E32372D1164B03E6DE_inline(__this, /*hidden argument*/NULL);
			bool L_3 = ___trackingLost0;
			if ((((int32_t)L_2) == ((int32_t)L_3)))
			{
				goto IL_0056;
			}
		}

IL_0017:
		{
			// TrackingLost = trackingLost;
			bool L_4 = ___trackingLost0;
			LostTrackingService_set_TrackingLost_m982CA3C6F3248F5C1675E99BA5F5937F3348F063_inline(__this, L_4, /*hidden argument*/NULL);
			// if (TrackingLost)
			bool L_5 = LostTrackingService_get_TrackingLost_mD50146E416B65CE25FA4D2E32372D1164B03E6DE_inline(__this, /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_003f;
			}
		}

IL_0026:
		{
			// OnTrackingLost?.Invoke();
			Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_6 = LostTrackingService_get_OnTrackingLost_m8867D85BFC1319E7A0E1D8927FAD0A6B5D7E7FD5_inline(__this, /*hidden argument*/NULL);
			Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_7 = L_6;
			G_B4_0 = L_7;
			if (L_7)
			{
				G_B5_0 = L_7;
				goto IL_0032;
			}
		}

IL_002f:
		{
			goto IL_0037;
		}

IL_0032:
		{
			NullCheck(G_B5_0);
			Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(G_B5_0, /*hidden argument*/NULL);
		}

IL_0037:
		{
			// EnableTrackingLostVisual();
			LostTrackingService_EnableTrackingLostVisual_mF79BA1C102A06DFC4CCD005A340544861D40CBCD(__this, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x66, FINALLY_0058);
		}

IL_003f:
		{
			// OnTrackingRestored?.Invoke();
			Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_8 = LostTrackingService_get_OnTrackingRestored_m09A65E05AE237F8E8FA7B30222DB86B41C2A4239_inline(__this, /*hidden argument*/NULL);
			Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_9 = L_8;
			G_B8_0 = L_9;
			if (L_9)
			{
				G_B9_0 = L_9;
				goto IL_004b;
			}
		}

IL_0048:
		{
			goto IL_0050;
		}

IL_004b:
		{
			NullCheck(G_B9_0);
			Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(G_B9_0, /*hidden argument*/NULL);
		}

IL_0050:
		{
			// DisableTrackingLostVisual();
			LostTrackingService_DisableTrackingLostVisual_m07F310D896DDE48F5642973570CCFAA562D72ED2(__this, /*hidden argument*/NULL);
		}

IL_0056:
		{
			// }
			IL2CPP_LEAVE(0x66, FINALLY_0058);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0058;
	}

FINALLY_0058:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(88)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(88)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x66, IL_0066)
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::OnPositionalLocatorStateChanged(UnityEngine.XR.WSA.PositionalLocatorState,UnityEngine.XR.WSA.PositionalLocatorState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_OnPositionalLocatorStateChanged_mD5F13C88A168C64A2BA10FBC8407007652A6E299 (LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D * __this, int32_t ___oldState0, int32_t ___newState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LostTrackingService_OnPositionalLocatorStateChanged_mD5F13C88A168C64A2BA10FBC8407007652A6E299_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (OnPositionLocatorStateChangedPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D_il2cpp_TypeInfo_var))->get_OnPositionLocatorStateChangedPerfMarker_23();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// switch (newState)
			int32_t L_2 = ___newState1;
			if ((!(((uint32_t)L_2) == ((uint32_t)4))))
			{
				goto IL_001b;
			}
		}

IL_0012:
		{
			// SetTrackingLost(true);
			LostTrackingService_SetTrackingLost_mE995B7A8457A2498AEFA5D143F9D90EC7F557082(__this, (bool)1, /*hidden argument*/NULL);
			// break;
			IL2CPP_LEAVE(0x32, FINALLY_0024);
		}

IL_001b:
		{
			// SetTrackingLost(false);
			LostTrackingService_SetTrackingLost_mE995B7A8457A2498AEFA5D143F9D90EC7F557082(__this, (bool)0, /*hidden argument*/NULL);
			// break;
			IL2CPP_LEAVE(0x32, FINALLY_0024);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(36)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x32, IL_0032)
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService__cctor_mBB92714B301FCE07B4963747440DB505D0008ED6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LostTrackingService__cctor_mBB92714B301FCE07B4963747440DB505D0008ED6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker DisableTrackingLostVisualPerfMarker = new ProfilerMarker("[MRTK] LostTrackingService.DisableTrackingLostVisual");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_0), _stringLiteral2898F47DA9C854A4CCA74054354C58B3EF9E90F7, /*hidden argument*/NULL);
		((LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D_il2cpp_TypeInfo_var))->set_DisableTrackingLostVisualPerfMarker_20(L_0);
		// private static readonly ProfilerMarker EnableTrackingLostVisualPerfMarker = new ProfilerMarker("[MRTK] LostTrackingService.EnableTrackingLostVisual");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_1), _stringLiteral7B88EF10801997FB9BC916F3A54B2909D6CDD203, /*hidden argument*/NULL);
		((LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D_il2cpp_TypeInfo_var))->set_EnableTrackingLostVisualPerfMarker_21(L_1);
		// private static readonly ProfilerMarker SetTrackingLostPerfMarker = new ProfilerMarker("[MRTK] LostTrackingService.SetTrackingLost");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_2), _stringLiteralE81FB5C253068009561B6E452887770A732107A2, /*hidden argument*/NULL);
		((LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D_il2cpp_TypeInfo_var))->set_SetTrackingLostPerfMarker_22(L_2);
		// private static readonly ProfilerMarker OnPositionLocatorStateChangedPerfMarker = new ProfilerMarker("[MRTK] LostTrackingService.OnPositionalLocatorStateChanged");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_3), _stringLiteral7F150DB49BE5211DEE33ED681B35512189789774, /*hidden argument*/NULL);
		((LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D_il2cpp_TypeInfo_var))->set_OnPositionLocatorStateChangedPerfMarker_23(L_3);
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
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_TrackingLostVisualPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * LostTrackingServiceProfile_get_TrackingLostVisualPrefab_m2974013F77EA62A5375F5D32B6CB3CC82ADF9123 (LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject TrackingLostVisualPrefab => trackingLostVisualPrefab;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_trackingLostVisualPrefab_5();
		return L_0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_TrackingLostVisualLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LostTrackingServiceProfile_get_TrackingLostVisualLayer_m7B808DA8109AE14F333B3E2C15C10B2BE4825C5C (LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533 * __this, const RuntimeMethod* method)
{
	{
		// public int TrackingLostVisualLayer => trackingLostVisualLayer;
		int32_t L_0 = __this->get_trackingLostVisualLayer_6();
		return L_0;
	}
}
// UnityEngine.LayerMask Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_TrackingLostCullingMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  LostTrackingServiceProfile_get_TrackingLostCullingMask_mF180B68095C91CA8D004DCFFDC44177815718ACE (LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533 * __this, const RuntimeMethod* method)
{
	{
		// public LayerMask TrackingLostCullingMask => trackingLostCullingMask;
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_0 = __this->get_trackingLostCullingMask_7();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_HaltTimeWhileTrackingLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LostTrackingServiceProfile_get_HaltTimeWhileTrackingLost_m810AC6D41D0CAFF201A4D74813EDE6C3E1D45535 (LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533 * __this, const RuntimeMethod* method)
{
	{
		// public bool HaltTimeWhileTrackingLost => haltTimeWhileTrackingLost;
		bool L_0 = __this->get_haltTimeWhileTrackingLost_8();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_HaltAudioOnTrackingLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LostTrackingServiceProfile_get_HaltAudioOnTrackingLost_m6A657F4639C23F8B4FA9010094A222E42DB4DA3B (LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533 * __this, const RuntimeMethod* method)
{
	{
		// public bool HaltAudioOnTrackingLost => haltAudioWhileTrackingLost;
		bool L_0 = __this->get_haltAudioWhileTrackingLost_9();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingServiceProfile_OnValidate_mD84FE851BAB0F7DA044D56EE835CEDC41EDEE0FF (LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533 * __this, const RuntimeMethod* method)
{
	{
		// trackingLostCullingMask.value |= 1 << trackingLostVisualLayer;
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * L_0 = __this->get_address_of_trackingLostCullingMask_7();
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * L_1 = L_0;
		int32_t L_2 = LayerMask_get_value_m682288E860BBE36F5668DCDBC59245DE6319E537((LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 *)L_1, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_trackingLostVisualLayer_6();
		LayerMask_set_value_m56653944C7760E9D456E6B9E68F85CAA5B24A042((LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 *)L_1, ((int32_t)((int32_t)L_2|(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)31))))))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingServiceProfile__ctor_mD9E1900F7D2428F0D4A4BE3A3A36F14763E2B2CD (LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533 * __this, const RuntimeMethod* method)
{
	{
		// private int trackingLostVisualLayer = 31;
		__this->set_trackingLostVisualLayer_6(((int32_t)31));
		// private bool haltTimeWhileTrackingLost = true;
		__this->set_haltTimeWhileTrackingLost_8((bool)1);
		// private bool haltAudioWhileTrackingLost = true;
		__this->set_haltAudioWhileTrackingLost_9((bool)1);
		BaseMixedRealityProfile__ctor_m499CEFEFD8AA8B1F4CCEE27F77EA0ECB1A3C4A19(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseExtensionService_set_Registrar_m1D3A72C300FA5726A02BC379034AB2F628A96FB8_inline (BaseExtensionService_t3F0E7E096A45E6E98016F9C94E5D3A94D50127DF * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// protected IMixedRealityServiceRegistrar Registrar { get; set; } = null;
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CRegistrarU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method)
{
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_inline((&L_1), (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool LostTrackingServiceProfile_get_HaltTimeWhileTrackingLost_m810AC6D41D0CAFF201A4D74813EDE6C3E1D45535_inline (LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533 * __this, const RuntimeMethod* method)
{
	{
		// public bool HaltTimeWhileTrackingLost => haltTimeWhileTrackingLost;
		bool L_0 = __this->get_haltTimeWhileTrackingLost_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool LostTrackingServiceProfile_get_HaltAudioOnTrackingLost_m6A657F4639C23F8B4FA9010094A222E42DB4DA3B_inline (LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533 * __this, const RuntimeMethod* method)
{
	{
		// public bool HaltAudioOnTrackingLost => haltAudioWhileTrackingLost;
		bool L_0 = __this->get_haltAudioWhileTrackingLost_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerMarker_Internal_End_mE25FE55A23DF111614CE890359972D96A65B499A((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * LostTrackingServiceProfile_get_TrackingLostVisualPrefab_m2974013F77EA62A5375F5D32B6CB3CC82ADF9123_inline (LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject TrackingLostVisualPrefab => trackingLostVisualPrefab;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_trackingLostVisualPrefab_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  LostTrackingServiceProfile_get_TrackingLostCullingMask_mF180B68095C91CA8D004DCFFDC44177815718ACE_inline (LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533 * __this, const RuntimeMethod* method)
{
	{
		// public LayerMask TrackingLostCullingMask => trackingLostCullingMask;
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_0 = __this->get_trackingLostCullingMask_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t LostTrackingServiceProfile_get_TrackingLostVisualLayer_m7B808DA8109AE14F333B3E2C15C10B2BE4825C5C_inline (LostTrackingServiceProfile_tD6066E34BF5A2A5EBFFA98CB12DECE325DC8C533 * __this, const RuntimeMethod* method)
{
	{
		// public int TrackingLostVisualLayer => trackingLostVisualLayer;
		int32_t L_0 = __this->get_trackingLostVisualLayer_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool LostTrackingService_get_TrackingLost_mD50146E416B65CE25FA4D2E32372D1164B03E6DE_inline (LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D * __this, const RuntimeMethod* method)
{
	{
		// public bool TrackingLost { get; private set; } = false;
		bool L_0 = __this->get_U3CTrackingLostU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void LostTrackingService_set_TrackingLost_m982CA3C6F3248F5C1675E99BA5F5937F3348F063_inline (LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool TrackingLost { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CTrackingLostU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * LostTrackingService_get_OnTrackingLost_m8867D85BFC1319E7A0E1D8927FAD0A6B5D7E7FD5_inline (LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D * __this, const RuntimeMethod* method)
{
	{
		// public Action OnTrackingLost { get; set; }
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = __this->get_U3COnTrackingLostU3Ek__BackingField_14();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * LostTrackingService_get_OnTrackingRestored_m09A65E05AE237F8E8FA7B30222DB86B41C2A4239_inline (LostTrackingService_tA6B97D32D0964CD1AE19FDC9B9569D9DA1DB378D * __this, const RuntimeMethod* method)
{
	{
		// public Action OnTrackingRestored { get; set; }
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = __this->get_U3COnTrackingRestoredU3Ek__BackingField_15();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1 = ProfilerMarker_Internal_Create_m92F2A7651D4BF3F3D0CB62078DD79B71839FA370(L_0, (uint16_t)0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, intptr_t ___markerPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___markerPtr0;
		__this->set_m_Ptr_0((intptr_t)L_0);
		intptr_t L_1 = ___markerPtr0;
		ProfilerMarker_Internal_Begin_m79272E72708A53AFDEEEB81CF66C7D62920AC5B5((intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
