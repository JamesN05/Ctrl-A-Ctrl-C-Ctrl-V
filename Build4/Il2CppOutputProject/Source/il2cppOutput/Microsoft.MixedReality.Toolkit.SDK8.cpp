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

template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer
struct ControllerPoseSynchronizer_t0F46D842A5E324732465481B59A9615ADB6F9C0F;
// Microsoft.MixedReality.Toolkit.Input.ICursorModifier
struct ICursorModifier_t7D89C88FA6F5D79D163F8F8293A83B670DBAF544;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController
struct IMixedRealityController_t9457C7AD80BBFCE56F9A26A9DBBF5ED3F7417B02;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor
struct IMixedRealityCursor_tD0143D71492AF9B3891F7FBB55EB57C9683255DA;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler
struct IMixedRealityFocusHandler_t610019EA5C6EC6BAEEB92365ACE2070DE45B153B;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService
struct IMixedRealityHandJointService_tF7D229F0BD919C8709872CF57D273F17E85CC0B6;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_t211FB4C219E164AF2854B2EEAE3A021D0730347E;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t51DE3E6D80CC3F88E678D864EC94450C52351CB4;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_t8B056268027051905768F6E5B780F7155BBF5B63;
// Microsoft.MixedReality.Toolkit.Input.IPointerResult
struct IPointerResult_t5C352F2262EFB8113AF4E80EACAEB1BA73D3153B;
// Microsoft.MixedReality.Toolkit.Input.LinePointer
struct LinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_t32A435D8A6FE8E1EFAB56237504C51979F2586B3;
// Microsoft.MixedReality.Toolkit.Physics.IBaseRayStabilizer
struct IBaseRayStabilizer_tE3DA4F2878436181BC6A9CC1652CEC4BE6031E68;
// Microsoft.MixedReality.Toolkit.Physics.RayStep[]
struct RayStepU5BU5D_tC821C087287A98BA74889ED180CCF3A3E1198715;
// Microsoft.MixedReality.Toolkit.Utilities.BaseMixedRealityLineDataProvider
struct BaseMixedRealityLineDataProvider_tAE52DB4AF0B2DF1AFFDBF395314F8113E2B4ACAB;
// Microsoft.MixedReality.Toolkit.Utilities.BaseMixedRealityLineRenderer[]
struct BaseMixedRealityLineRendererU5BU5D_tB88B8BBE85BA03334EE92FB7FD092880CEDC44FE;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Overlap
struct Overlap_t51F3560DB117AF00D0753CF0682C6C85B847C63B;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView
struct RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver
struct Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler
struct SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver[]
struct SolverU5BU5D_t6D0D5FF2BA7A73417C57F703565C10E0ECCD3329;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism
struct SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace
struct TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6;
// Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection
struct TileGridObjectCollection_tA10CBCAEB57EC353B7B745FE141753DFF26A2FDF;
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct IEnumerable_1_t4D36947177F08910EDE220B0D74B2330019C8FB7;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IList`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct IList_1_t038780E6F9BB52F7D8D7E35800BAF3DFD71FF778;
// System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct IReadOnlyCollection_1_tAAF53FAD35E6D1D1E9703E0E58D52898D40DAF3B;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct ReadOnlyCollection_1_tC2B53DDDB28D93E1A8D52A093954124DD5E7C5E2;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.BoxCollider
struct BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Gradient
struct Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A;
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C RuntimeClass* CoreServices_tB284CAD260668D8742F59ED5DDC128A38712D7F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityHandJointService_tF7D229F0BD919C8709872CF57D273F17E85CC0B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityRaycaster_t576296B9AC5CC17AC79E55E62D12D22E99001EB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral12A714AA794D509644FB3179B18725E73759EA26;
IL2CPP_EXTERN_C String_t* _stringLiteral3440B5DB21ACDFBDBDF54B78CCD20D24F1FE0FDC;
IL2CPP_EXTERN_C String_t* _stringLiteral6EF0514AA4017533AA16ED833590C7207CDFAE67;
IL2CPP_EXTERN_C String_t* _stringLiteral856AE3ECE3EEE609B18AD6DAB47EAD71A921A33E;
IL2CPP_EXTERN_C String_t* _stringLiteral8F4978D97C91FB89AFEE30FCE57DD7FD2FADFA7B;
IL2CPP_EXTERN_C String_t* _stringLiteralACF914D58CBEED02A6B4918D9E01DD865FA4931F;
IL2CPP_EXTERN_C String_t* _stringLiteralB77BEAEBB0343C40DD9CDA270E3835797BAB5BA9;
IL2CPP_EXTERN_C String_t* _stringLiteralCF5B58E13AC9E0BBDD8929CAC9A7A3EC3DACCCE9;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionsExtensions_ToReadOnlyCollection_TisSolver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA_mA4FCE36F856E036DC2DB4F6D01B11E0F34FA1FC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_m81892AA8DC35D8BB06288E5A4C16CF366174953E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSolverHandler_t075811D0044ED96286DC029AD5537D75A007A167_mAE44FADD03F8FEE68CC0FBE9FCE9222ADE1E7B44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisSolver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA_mF0952A0907F7528AC813F0C40F1DBD8C4F05328F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreServices_GetInputSystemDataProvider_TisIMixedRealityHandJointService_tF7D229F0BD919C8709872CF57D273F17E85CC0B6_m297655E591D62B290EF0E6CED306F34506EFAB8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Intersect_TisSolver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA_m7109401B942D63F7CF29FF4B9D90F56D78F8E29D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Union_TisSolver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA_m7D30E36E3551057C187A9F484FA6B43F13FBF050_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityEventSystem_RegisterHandler_TisIMixedRealityPointerHandler_t614135A0BD4B7C047DE9B0BFD27BCB187B3D27DB_m32B7508AD414DFB1FD8B2EC28925C98DE5AA2930_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealityPointerHandler_t614135A0BD4B7C047DE9B0BFD27BCB187B3D27DB_m33F91BA4B75CF5D9E9B067C036D45C4560803D0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m90E8446CBAF979C79C61A2777ADC1716C5D39393_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4C86FC11FC665E227E594B0EC27C8CC1D704704F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AsReadOnly_m728335573FEB3134BC3487CA2A3AF964222665BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mA2A6D866C608AFFA8663476EC564B6580E2F24C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m8018A11BFA7FD65F838DA368052C4FC76EEAD101_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m13B9DB64A4BD24C01A7E456C7C9A3825EAA21F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC011A6791D0183C3059D24C5C3841BB38C34CD70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD0352A2C2F0E13994ACDE2AE6EB3A3414FBC1CE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m45E05148CA6342157F24BF07D5AAD8864F0FC2BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PointerUtils_GetPointer_TisLinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0_mB31DBF5B34B2078856C73866757431D9873F1347_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t Overlap_SolverUpdate_m86D0EFD7920E25601EDEEDAE609ED78413351840_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RadialView_GetDesiredOrientation_DistanceOnly_mCD21B8DDD3686E192E74FB9ED29EA4CAEDD59473_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RadialView_GetDesiredOrientation_m1F6499701A37A65D153D85A0AB1CB53F3E8A3979_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RadialView_SolverUpdate_mE946A7456876810FAEDAE12A76677DDF43419776_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RadialView_get_ReferencePoint_m6FAAD1254ABAE9E9F32DE8EC519A19F82E2E23C3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RadialView_get_SolverReferenceDirection_mE12D876E014F4BF4CF26892BAF746A483D725035_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RadialView_get_UpReference_mAB142E48D0F3E633E2B5D6393776DDCC2D68DBC7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_AttachToNewTrackedObject_m582FD67691766791AEF27D1F5D8A2C6F8FB4D4C2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_Awake_mBFDE2640A2BB8F893D1F70590DD417FC90A22A08_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_DetachFromCurrentTrackedObject_m13D25CB26E505327F5E3B0E19C2FF49AB7682F25_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_GetControllerRay_m585209180CEE135589AD90C58B37EF65F5FAAA7E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_IsInvalidTracking_m3CE37227589915F5D74F5161DD726DE2AD9F4807_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_LateUpdate_m423A59D15650CCBABDA8959C493E33C09711E719_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_OnDestroy_m2ED62559A609E634BC0B07E2498DC2F498DE3A64_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_RegisterSolver_m65EDEA901AFE897E19AF3E5326F8EDF2EAEFD090_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_TrackTransform_mDA30174893E2C3E1F8C464114B0151026F54CABE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_UnregisterSolver_m40C67B6576B3D06EC3902BE54E4C70433FC6B305_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler__ctor_mB3E7725D8B6C7C48FF9B17E050A988EFC2D77232_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_get_HandJointService_m96674C6CAB2F50D33CF592DFBE6E79A1C4E01B12_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_get_Solvers_mEC87829E9EC0EA90A66888F7B7C03A2E93931DFA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_get_TransformTarget_m34789672B6825F92BF6C982E9BBCB5D7D6ED4FBB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_set_AdditionalOffset_mB1336DC89DF22F49D9F7C8866968A9482435DFD7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_set_AdditionalRotation_m50975EC9F5BA66A92F5F9BF529B617FBDB2E3A04_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_set_Solvers_mF53F9AFBB3D7814A84106CDC2A1849C663041D3C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_set_TransformOverride_m02C93ABC335DF1E2F7DCE35949B6C547ABB8DFBA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver_AddOffset_mDA56570F58AB1256BEA4811524536EE394784243_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver_Awake_mD4D5C1CE508C2F54728F4162A4844452A426B521_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver_OnDestroy_mC861A88185FFD1BF5EEB02F9CABA76DB00023A46_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver_OnEnable_m48DD66EDD166E5988EEA59DC3615FDDE2419581E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver_SmoothTo_m2C2EEE1EA524FDBD140BB4CD3C2B71864710D542_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver_SmoothTo_m48CFC1287FD6DC1CB44CC393FD3B755837390E59_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver_Start_m667FE1B37A72CC2D586E88025E9E52681E010409_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_BoxRaycastStepUpdate_mDA6B670B927BCE8FE97B5DE2F77F81F7783C9DAF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_CalculateMagnetismOrientation_mF4062942F4A2FEC9C93202C4C84B2C40923638ED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_FindPlacementPlane_m4DDBECFFC7244A476911D23B48E5AB769803CF5C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_IsNormalVertical_mBE0147F050C5E31998817DA117425FE1AA55CB8F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_SimpleRaycastStepUpdate_mCB659570ECD9B53D8F1033FB467A9337ED801F03_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_SolverUpdate_m6A0894074003DAA737632E65C716547AB68AF152_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_SphereRaycastStepUpdate_m81C7BB2E29C0482415CAB36DF4F83745C7166233_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism__ctor_m0858D01A80AC067343F3C21BA4741AAB40691199_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_get_RaycastDirection_mF9D8C1923CD47C9D4016B02168D02926364EEAC7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_get_RaycastEndPoint_mFD4351223905C0F251B85284C9AC9658BE907E1A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_get_RaycastOrigin_m7E406FCE166669C77E36342DC172E66874CA0940_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TapToPlace_OnDisable_mBD4AE6D5F19B50436ABC2A8DB059C6D697B2F2F1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TapToPlace_PerformRaycast_m5EF76805EBDC01BAE18DD5FDFE9D91F883E6A9DC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TapToPlace_SetPosition_mD000BD8FF3FAA4CF2E843040EA9A280AC4D4FE26_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TapToPlace_SetRotation_m7CE4B4EA9794CC8D69E693F4E31AD7BC83FB2ABF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TapToPlace_SolverUpdate_mD11E9408FE0A0E940EF902AC2DB4D5B24D140DA5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TapToPlace_StartPlacement_m5E3F040F4CDC32D685F4BE17528097435DCD0A6C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TapToPlace_Start_mFF0BE7D67BBA3035CF699C46BB6B434D060E1661_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TapToPlace_StopPlacement_m9DF16CBC0C31E25AB0910DAD84AFAC3657BB409E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TapToPlace__ctor_m7ACA40D133AAA2B11F07C62CC77ADDA1850686C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TapToPlace_get_IsColliderPresent_m0EE83D6E2C10C3510851A739CDE677B9D70310CE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TapToPlace_get_defaultSurfaceNormalOffset_m3B7B2FD2D570E38FCDE6D121A5AEB9ED39523BDA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TileGridObjectCollection_GetListPosition_mA5EA666F9E713A462DDB83CF740BAF1A76EC3B46_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TileGridObjectCollection_Update_mF081C5268B9B03F2E66B513493806172CC09409C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TileGridObjectCollection__ctor_mF1F18455722EB21E5FB0376E6B1B6B6DB8AB2D68_MetadataUsageId;

struct SolverU5BU5D_t6D0D5FF2BA7A73417C57F703565C10E0ECCD3329;
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SolverU5BU5D_t6D0D5FF2BA7A73417C57F703565C10E0ECCD3329* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2, ____items_1)); }
	inline SolverU5BU5D_t6D0D5FF2BA7A73417C57F703565C10E0ECCD3329* get__items_1() const { return ____items_1; }
	inline SolverU5BU5D_t6D0D5FF2BA7A73417C57F703565C10E0ECCD3329** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SolverU5BU5D_t6D0D5FF2BA7A73417C57F703565C10E0ECCD3329* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SolverU5BU5D_t6D0D5FF2BA7A73417C57F703565C10E0ECCD3329* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2_StaticFields, ____emptyArray_5)); }
	inline SolverU5BU5D_t6D0D5FF2BA7A73417C57F703565C10E0ECCD3329* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SolverU5BU5D_t6D0D5FF2BA7A73417C57F703565C10E0ECCD3329** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SolverU5BU5D_t6D0D5FF2BA7A73417C57F703565C10E0ECCD3329* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct ReadOnlyCollection_1_tC2B53DDDB28D93E1A8D52A093954124DD5E7C5E2  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_tC2B53DDDB28D93E1A8D52A093954124DD5E7C5E2, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_tC2B53DDDB28D93E1A8D52A093954124DD5E7C5E2, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


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

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
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


// System.DateTime
struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
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
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
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


// UnityEngine.Color
struct Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
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


// UnityEngine.Matrix4x4
struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
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


// Microsoft.MixedReality.Toolkit.Physics.RayStep
struct RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Origin>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3COriginU3Ek__BackingField_3;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Terminus>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CTerminusU3Ek__BackingField_4;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Direction>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CDirectionU3Ek__BackingField_5;
	// System.Single Microsoft.MixedReality.Toolkit.Physics.RayStep::<Length>k__BackingField
	float ___U3CLengthU3Ek__BackingField_6;
	// System.Single Microsoft.MixedReality.Toolkit.Physics.RayStep::epsilon
	float ___epsilon_7;

public:
	inline static int32_t get_offset_of_U3COriginU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862, ___U3COriginU3Ek__BackingField_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3COriginU3Ek__BackingField_3() const { return ___U3COriginU3Ek__BackingField_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3COriginU3Ek__BackingField_3() { return &___U3COriginU3Ek__BackingField_3; }
	inline void set_U3COriginU3Ek__BackingField_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3COriginU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTerminusU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862, ___U3CTerminusU3Ek__BackingField_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CTerminusU3Ek__BackingField_4() const { return ___U3CTerminusU3Ek__BackingField_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CTerminusU3Ek__BackingField_4() { return &___U3CTerminusU3Ek__BackingField_4; }
	inline void set_U3CTerminusU3Ek__BackingField_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CTerminusU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CDirectionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862, ___U3CDirectionU3Ek__BackingField_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CDirectionU3Ek__BackingField_5() const { return ___U3CDirectionU3Ek__BackingField_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CDirectionU3Ek__BackingField_5() { return &___U3CDirectionU3Ek__BackingField_5; }
	inline void set_U3CDirectionU3Ek__BackingField_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CDirectionU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CLengthU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862, ___U3CLengthU3Ek__BackingField_6)); }
	inline float get_U3CLengthU3Ek__BackingField_6() const { return ___U3CLengthU3Ek__BackingField_6; }
	inline float* get_address_of_U3CLengthU3Ek__BackingField_6() { return &___U3CLengthU3Ek__BackingField_6; }
	inline void set_U3CLengthU3Ek__BackingField_6(float value)
	{
		___U3CLengthU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_epsilon_7() { return static_cast<int32_t>(offsetof(RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862, ___epsilon_7)); }
	inline float get_epsilon_7() const { return ___epsilon_7; }
	inline float* get_address_of_epsilon_7() { return &___epsilon_7; }
	inline void set_epsilon_7(float value)
	{
		___epsilon_7 = value;
	}
};

struct RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862_StaticFields
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::dist
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___dist_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::dir
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___dir_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::pos
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pos_2;

public:
	inline static int32_t get_offset_of_dist_0() { return static_cast<int32_t>(offsetof(RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862_StaticFields, ___dist_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_dist_0() const { return ___dist_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_dist_0() { return &___dist_0; }
	inline void set_dist_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___dist_0 = value;
	}

	inline static int32_t get_offset_of_dir_1() { return static_cast<int32_t>(offsetof(RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862_StaticFields, ___dir_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_dir_1() const { return ___dir_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_dir_1() { return &___dir_1; }
	inline void set_dir_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___dir_1 = value;
	}

	inline static int32_t get_offset_of_pos_2() { return static_cast<int32_t>(offsetof(RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862_StaticFields, ___pos_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_pos_2() const { return ___pos_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_pos_2() { return &___pos_2; }
	inline void set_pos_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___pos_2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType
struct SceneQueryType_t805323977510F94033AF54C6E9FA1E20848F1F84 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Physics.SceneQueryType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneQueryType_t805323977510F94033AF54C6E9FA1E20848F1F84, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.TrackingState
struct TrackingState_t6FE09CD4266DD194F217A21737296641DC36B683 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_t6FE09CD4266DD194F217A21737296641DC36B683, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct AxisType_t5FACB61D5D4AD5443474947662AA2D751F15CDDC 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_t5FACB61D5D4AD5443474947662AA2D751F15CDDC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct Handedness_t80B0B5567F9F1D7DC29DE4EA4D5EC7A615C0237D 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_t80B0B5567F9F1D7DC29DE4EA4D5EC7A615C0237D, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.RadialViewReferenceDirection
struct RadialViewReferenceDirection_tC6DFA1FE1836E2381DD0A7A84894CD513F34C972 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RadialViewReferenceDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RadialViewReferenceDirection_tC6DFA1FE1836E2381DD0A7A84894CD513F34C972, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/OrientationMode
struct OrientationMode_tF2AEC1689E6EE4CDE0C71711F59BD7F16368B7AF 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/OrientationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OrientationMode_tF2AEC1689E6EE4CDE0C71711F59BD7F16368B7AF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/RaycastDirectionMode
struct RaycastDirectionMode_t990CEB726A6E13918FBECA93FC24A49991DCE9C9 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/RaycastDirectionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RaycastDirectionMode_t990CEB726A6E13918FBECA93FC24A49991DCE9C9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection/GridDivisions
struct GridDivisions_t8F250363C676AA64CFFCF42F295E37B9CE857CB4 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection/GridDivisions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GridDivisions_t8F250363C676AA64CFFCF42F295E37B9CE857CB4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint
struct TrackedHandJoint_t9734B522B4400E6544A71EA8FB45EF2C8BBD180D 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedHandJoint_t9734B522B4400E6544A71EA8FB45EF2C8BBD180D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType
struct TrackedObjectType_t96842CE44238193194372973EFF10C9F402D20D5 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedObjectType_t96842CE44238193194372973EFF10C9F402D20D5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed
struct Vector3Smoothed_t1A35366991A6CB8D3A2FB1AC19520B9F1EEBE656 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::<Current>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CCurrentU3Ek__BackingField_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::<Goal>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CGoalU3Ek__BackingField_1;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::<SmoothTime>k__BackingField
	float ___U3CSmoothTimeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CCurrentU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Vector3Smoothed_t1A35366991A6CB8D3A2FB1AC19520B9F1EEBE656, ___U3CCurrentU3Ek__BackingField_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CCurrentU3Ek__BackingField_0() const { return ___U3CCurrentU3Ek__BackingField_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CCurrentU3Ek__BackingField_0() { return &___U3CCurrentU3Ek__BackingField_0; }
	inline void set_U3CCurrentU3Ek__BackingField_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CCurrentU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CGoalU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Vector3Smoothed_t1A35366991A6CB8D3A2FB1AC19520B9F1EEBE656, ___U3CGoalU3Ek__BackingField_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CGoalU3Ek__BackingField_1() const { return ___U3CGoalU3Ek__BackingField_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CGoalU3Ek__BackingField_1() { return &___U3CGoalU3Ek__BackingField_1; }
	inline void set_U3CGoalU3Ek__BackingField_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CGoalU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CSmoothTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Vector3Smoothed_t1A35366991A6CB8D3A2FB1AC19520B9F1EEBE656, ___U3CSmoothTimeU3Ek__BackingField_2)); }
	inline float get_U3CSmoothTimeU3Ek__BackingField_2() const { return ___U3CSmoothTimeU3Ek__BackingField_2; }
	inline float* get_address_of_U3CSmoothTimeU3Ek__BackingField_2() { return &___U3CSmoothTimeU3Ek__BackingField_2; }
	inline void set_U3CSmoothTimeU3Ek__BackingField_2(float value)
	{
		___U3CSmoothTimeU3Ek__BackingField_2 = value;
	}
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


// UnityEngine.Bounds
struct Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Center_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Extents_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.HideFlags
struct HideFlags_t30B57DC00548E963A569318C8F4A4123E7447E37 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_t30B57DC00548E963A569318C8F4A4123E7447E37, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// UnityEngine.Plane
struct Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED, ___m_Normal_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};


// UnityEngine.Ray
struct Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Origin_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Direction_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit
struct RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Point_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Normal_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_UV_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tCF113910A92EDEA11D49672BC780F392606FC21E 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tCF113910A92EDEA11D49672BC780F392606FC21E, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tCF113910A92EDEA11D49672BC780F392606FC21E, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tCF113910A92EDEA11D49672BC780F392606FC21E, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_tCF113910A92EDEA11D49672BC780F392606FC21E_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_tCF113910A92EDEA11D49672BC780F392606FC21E  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tCF113910A92EDEA11D49672BC780F392606FC21E_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_tCF113910A92EDEA11D49672BC780F392606FC21E  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_tCF113910A92EDEA11D49672BC780F392606FC21E * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_tCF113910A92EDEA11D49672BC780F392606FC21E  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tCF113910A92EDEA11D49672BC780F392606FC21E_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tCF113910A92EDEA11D49672BC780F392606FC21E_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
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


// Microsoft.MixedReality.Toolkit.Input.BaseInputEventData
struct BaseInputEventData_t80E2FC1B8295246D7B5F368F2781FE442480FECF  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<EventTime>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CEventTimeU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<MixedRealityInputAction>k__BackingField
	MixedRealityInputAction_tCF113910A92EDEA11D49672BC780F392606FC21E  ___U3CMixedRealityInputActionU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CEventTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseInputEventData_t80E2FC1B8295246D7B5F368F2781FE442480FECF, ___U3CEventTimeU3Ek__BackingField_2)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CEventTimeU3Ek__BackingField_2() const { return ___U3CEventTimeU3Ek__BackingField_2; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CEventTimeU3Ek__BackingField_2() { return &___U3CEventTimeU3Ek__BackingField_2; }
	inline void set_U3CEventTimeU3Ek__BackingField_2(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CEventTimeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseInputEventData_t80E2FC1B8295246D7B5F368F2781FE442480FECF, ___U3CInputSourceU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_3() const { return ___U3CInputSourceU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_3() { return &___U3CInputSourceU3Ek__BackingField_3; }
	inline void set_U3CInputSourceU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMixedRealityInputActionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseInputEventData_t80E2FC1B8295246D7B5F368F2781FE442480FECF, ___U3CMixedRealityInputActionU3Ek__BackingField_4)); }
	inline MixedRealityInputAction_tCF113910A92EDEA11D49672BC780F392606FC21E  get_U3CMixedRealityInputActionU3Ek__BackingField_4() const { return ___U3CMixedRealityInputActionU3Ek__BackingField_4; }
	inline MixedRealityInputAction_tCF113910A92EDEA11D49672BC780F392606FC21E * get_address_of_U3CMixedRealityInputActionU3Ek__BackingField_4() { return &___U3CMixedRealityInputActionU3Ek__BackingField_4; }
	inline void set_U3CMixedRealityInputActionU3Ek__BackingField_4(MixedRealityInputAction_tCF113910A92EDEA11D49672BC780F392606FC21E  value)
	{
		___U3CMixedRealityInputActionU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CMixedRealityInputActionU3Ek__BackingField_4))->___description_2), (void*)NULL);
	}
};


// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
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


// Microsoft.MixedReality.Toolkit.Input.InputEventData
struct InputEventData_tA871A8D19650684FFF6664D3C46E521DA3F6C4EA  : public BaseInputEventData_t80E2FC1B8295246D7B5F368F2781FE442480FECF
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.InputEventData::<Handedness>k__BackingField
	uint8_t ___U3CHandednessU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CHandednessU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(InputEventData_tA871A8D19650684FFF6664D3C46E521DA3F6C4EA, ___U3CHandednessU3Ek__BackingField_5)); }
	inline uint8_t get_U3CHandednessU3Ek__BackingField_5() const { return ___U3CHandednessU3Ek__BackingField_5; }
	inline uint8_t* get_address_of_U3CHandednessU3Ek__BackingField_5() { return &___U3CHandednessU3Ek__BackingField_5; }
	inline void set_U3CHandednessU3Ek__BackingField_5(uint8_t value)
	{
		___U3CHandednessU3Ek__BackingField_5 = value;
	}
};


// UnityEngine.BoxCollider
struct BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA  : public Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF
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


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener
struct InputSystemGlobalHandlerListener_t74774CE161F4A74C6DB59EDD6E6BA762F74E95CC  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener::lateInitialize
	bool ___lateInitialize_4;

public:
	inline static int32_t get_offset_of_lateInitialize_4() { return static_cast<int32_t>(offsetof(InputSystemGlobalHandlerListener_t74774CE161F4A74C6DB59EDD6E6BA762F74E95CC, ___lateInitialize_4)); }
	inline bool get_lateInitialize_4() const { return ___lateInitialize_4; }
	inline bool* get_address_of_lateInitialize_4() { return &___lateInitialize_4; }
	inline void set_lateInitialize_4(bool value)
	{
		___lateInitialize_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_t32A435D8A6FE8E1EFAB56237504C51979F2586B3  : public InputEventData_tA871A8D19650684FFF6664D3C46E521DA3F6C4EA
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CPointerU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MixedRealityPointerEventData_t32A435D8A6FE8E1EFAB56237504C51979F2586B3, ___U3CPointerU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CPointerU3Ek__BackingField_6() const { return ___U3CPointerU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CPointerU3Ek__BackingField_6() { return &___U3CPointerU3Ek__BackingField_6; }
	inline void set_U3CPointerU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CPointerU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointerU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCountU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(MixedRealityPointerEventData_t32A435D8A6FE8E1EFAB56237504C51979F2586B3, ___U3CCountU3Ek__BackingField_7)); }
	inline int32_t get_U3CCountU3Ek__BackingField_7() const { return ___U3CCountU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CCountU3Ek__BackingField_7() { return &___U3CCountU3Ek__BackingField_7; }
	inline void set_U3CCountU3Ek__BackingField_7(int32_t value)
	{
		___U3CCountU3Ek__BackingField_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver
struct Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::updateLinkedTransform
	bool ___updateLinkedTransform_4;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::moveLerpTime
	float ___moveLerpTime_5;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::rotateLerpTime
	float ___rotateLerpTime_6;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::scaleLerpTime
	float ___scaleLerpTime_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::maintainScaleOnInitialization
	bool ___maintainScaleOnInitialization_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::smoothing
	bool ___smoothing_9;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::lifetime
	float ___lifetime_10;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::currentLifetime
	float ___currentLifetime_11;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SolverHandler
	SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * ___SolverHandler_12;

public:
	inline static int32_t get_offset_of_updateLinkedTransform_4() { return static_cast<int32_t>(offsetof(Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA, ___updateLinkedTransform_4)); }
	inline bool get_updateLinkedTransform_4() const { return ___updateLinkedTransform_4; }
	inline bool* get_address_of_updateLinkedTransform_4() { return &___updateLinkedTransform_4; }
	inline void set_updateLinkedTransform_4(bool value)
	{
		___updateLinkedTransform_4 = value;
	}

	inline static int32_t get_offset_of_moveLerpTime_5() { return static_cast<int32_t>(offsetof(Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA, ___moveLerpTime_5)); }
	inline float get_moveLerpTime_5() const { return ___moveLerpTime_5; }
	inline float* get_address_of_moveLerpTime_5() { return &___moveLerpTime_5; }
	inline void set_moveLerpTime_5(float value)
	{
		___moveLerpTime_5 = value;
	}

	inline static int32_t get_offset_of_rotateLerpTime_6() { return static_cast<int32_t>(offsetof(Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA, ___rotateLerpTime_6)); }
	inline float get_rotateLerpTime_6() const { return ___rotateLerpTime_6; }
	inline float* get_address_of_rotateLerpTime_6() { return &___rotateLerpTime_6; }
	inline void set_rotateLerpTime_6(float value)
	{
		___rotateLerpTime_6 = value;
	}

	inline static int32_t get_offset_of_scaleLerpTime_7() { return static_cast<int32_t>(offsetof(Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA, ___scaleLerpTime_7)); }
	inline float get_scaleLerpTime_7() const { return ___scaleLerpTime_7; }
	inline float* get_address_of_scaleLerpTime_7() { return &___scaleLerpTime_7; }
	inline void set_scaleLerpTime_7(float value)
	{
		___scaleLerpTime_7 = value;
	}

	inline static int32_t get_offset_of_maintainScaleOnInitialization_8() { return static_cast<int32_t>(offsetof(Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA, ___maintainScaleOnInitialization_8)); }
	inline bool get_maintainScaleOnInitialization_8() const { return ___maintainScaleOnInitialization_8; }
	inline bool* get_address_of_maintainScaleOnInitialization_8() { return &___maintainScaleOnInitialization_8; }
	inline void set_maintainScaleOnInitialization_8(bool value)
	{
		___maintainScaleOnInitialization_8 = value;
	}

	inline static int32_t get_offset_of_smoothing_9() { return static_cast<int32_t>(offsetof(Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA, ___smoothing_9)); }
	inline bool get_smoothing_9() const { return ___smoothing_9; }
	inline bool* get_address_of_smoothing_9() { return &___smoothing_9; }
	inline void set_smoothing_9(bool value)
	{
		___smoothing_9 = value;
	}

	inline static int32_t get_offset_of_lifetime_10() { return static_cast<int32_t>(offsetof(Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA, ___lifetime_10)); }
	inline float get_lifetime_10() const { return ___lifetime_10; }
	inline float* get_address_of_lifetime_10() { return &___lifetime_10; }
	inline void set_lifetime_10(float value)
	{
		___lifetime_10 = value;
	}

	inline static int32_t get_offset_of_currentLifetime_11() { return static_cast<int32_t>(offsetof(Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA, ___currentLifetime_11)); }
	inline float get_currentLifetime_11() const { return ___currentLifetime_11; }
	inline float* get_address_of_currentLifetime_11() { return &___currentLifetime_11; }
	inline void set_currentLifetime_11(float value)
	{
		___currentLifetime_11 = value;
	}

	inline static int32_t get_offset_of_SolverHandler_12() { return static_cast<int32_t>(offsetof(Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA, ___SolverHandler_12)); }
	inline SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * get_SolverHandler_12() const { return ___SolverHandler_12; }
	inline SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 ** get_address_of_SolverHandler_12() { return &___SolverHandler_12; }
	inline void set_SolverHandler_12(SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * value)
	{
		___SolverHandler_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SolverHandler_12), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler
struct SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::trackedTargetType
	int32_t ___trackedTargetType_4;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::trackedHandedness
	uint8_t ___trackedHandedness_5;
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::trackedHandJoint
	int32_t ___trackedHandJoint_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::transformOverride
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transformOverride_7;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::additionalOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___additionalOffset_8;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::additionalRotation
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___additionalRotation_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::updateSolvers
	bool ___updateSolvers_10;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver> Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::solvers
	List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2 * ___solvers_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::updateSolversList
	bool ___updateSolversList_12;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<GoalPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CGoalPositionU3Ek__BackingField_13;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<GoalRotation>k__BackingField
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3CGoalRotationU3Ek__BackingField_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<GoalScale>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CGoalScaleU3Ek__BackingField_15;
	// Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<AltScale>k__BackingField
	Vector3Smoothed_t1A35366991A6CB8D3A2FB1AC19520B9F1EEBE656  ___U3CAltScaleU3Ek__BackingField_16;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<DeltaTime>k__BackingField
	float ___U3CDeltaTimeU3Ek__BackingField_17;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::currentTrackedHandedness
	uint8_t ___currentTrackedHandedness_18;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::preferredTrackedHandedness
	uint8_t ___preferredTrackedHandedness_19;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::trackingTarget
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___trackingTarget_20;
	// Microsoft.MixedReality.Toolkit.Input.LinePointer Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::controllerRay
	LinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0 * ___controllerRay_21;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::lastUpdateTime
	float ___lastUpdateTime_22;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::handJointService
	RuntimeObject* ___handJointService_23;

public:
	inline static int32_t get_offset_of_trackedTargetType_4() { return static_cast<int32_t>(offsetof(SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167, ___trackedTargetType_4)); }
	inline int32_t get_trackedTargetType_4() const { return ___trackedTargetType_4; }
	inline int32_t* get_address_of_trackedTargetType_4() { return &___trackedTargetType_4; }
	inline void set_trackedTargetType_4(int32_t value)
	{
		___trackedTargetType_4 = value;
	}

	inline static int32_t get_offset_of_trackedHandedness_5() { return static_cast<int32_t>(offsetof(SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167, ___trackedHandedness_5)); }
	inline uint8_t get_trackedHandedness_5() const { return ___trackedHandedness_5; }
	inline uint8_t* get_address_of_trackedHandedness_5() { return &___trackedHandedness_5; }
	inline void set_trackedHandedness_5(uint8_t value)
	{
		___trackedHandedness_5 = value;
	}

	inline static int32_t get_offset_of_trackedHandJoint_6() { return static_cast<int32_t>(offsetof(SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167, ___trackedHandJoint_6)); }
	inline int32_t get_trackedHandJoint_6() const { return ___trackedHandJoint_6; }
	inline int32_t* get_address_of_trackedHandJoint_6() { return &___trackedHandJoint_6; }
	inline void set_trackedHandJoint_6(int32_t value)
	{
		___trackedHandJoint_6 = value;
	}

	inline static int32_t get_offset_of_transformOverride_7() { return static_cast<int32_t>(offsetof(SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167, ___transformOverride_7)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_transformOverride_7() const { return ___transformOverride_7; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_transformOverride_7() { return &___transformOverride_7; }
	inline void set_transformOverride_7(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___transformOverride_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transformOverride_7), (void*)value);
	}

	inline static int32_t get_offset_of_additionalOffset_8() { return static_cast<int32_t>(offsetof(SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167, ___additionalOffset_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_additionalOffset_8() const { return ___additionalOffset_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_additionalOffset_8() { return &___additionalOffset_8; }
	inline void set_additionalOffset_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___additionalOffset_8 = value;
	}

	inline static int32_t get_offset_of_additionalRotation_9() { return static_cast<int32_t>(offsetof(SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167, ___additionalRotation_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_additionalRotation_9() const { return ___additionalRotation_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_additionalRotation_9() { return &___additionalRotation_9; }
	inline void set_additionalRotation_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___additionalRotation_9 = value;
	}

	inline static int32_t get_offset_of_updateSolvers_10() { return static_cast<int32_t>(offsetof(SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167, ___updateSolvers_10)); }
	inline bool get_updateSolvers_10() const { return ___updateSolvers_10; }
	inline bool* get_address_of_updateSolvers_10() { return &___updateSolvers_10; }
	inline void set_updateSolvers_10(bool value)
	{
		___updateSolvers_10 = value;
	}

	inline static int32_t get_offset_of_solvers_11() { return static_cast<int32_t>(offsetof(SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167, ___solvers_11)); }
	inline List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2 * get_solvers_11() const { return ___solvers_11; }
	inline List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2 ** get_address_of_solvers_11() { return &___solvers_11; }
	inline void set_solvers_11(List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2 * value)
	{
		___solvers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___solvers_11), (void*)value);
	}

	inline static int32_t get_offset_of_updateSolversList_12() { return static_cast<int32_t>(offsetof(SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167, ___updateSolversList_12)); }
	inline bool get_updateSolversList_12() const { return ___updateSolversList_12; }
	inline bool* get_address_of_updateSolversList_12() { return &___updateSolversList_12; }
	inline void set_updateSolversList_12(bool value)
	{
		___updateSolversList_12 = value;
	}

	inline static int32_t get_offset_of_U3CGoalPositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167, ___U3CGoalPositionU3Ek__BackingField_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CGoalPositionU3Ek__BackingField_13() const { return ___U3CGoalPositionU3Ek__BackingField_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CGoalPositionU3Ek__BackingField_13() { return &___U3CGoalPositionU3Ek__BackingField_13; }
	inline void set_U3CGoalPositionU3Ek__BackingField_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CGoalPositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CGoalRotationU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167, ___U3CGoalRotationU3Ek__BackingField_14)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_U3CGoalRotationU3Ek__BackingField_14() const { return ___U3CGoalRotationU3Ek__BackingField_14; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_U3CGoalRotationU3Ek__BackingField_14() { return &___U3CGoalRotationU3Ek__BackingField_14; }
	inline void set_U3CGoalRotationU3Ek__BackingField_14(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___U3CGoalRotationU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CGoalScaleU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167, ___U3CGoalScaleU3Ek__BackingField_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CGoalScaleU3Ek__BackingField_15() const { return ___U3CGoalScaleU3Ek__BackingField_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CGoalScaleU3Ek__BackingField_15() { return &___U3CGoalScaleU3Ek__BackingField_15; }
	inline void set_U3CGoalScaleU3Ek__BackingField_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CGoalScaleU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CAltScaleU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167, ___U3CAltScaleU3Ek__BackingField_16)); }
	inline Vector3Smoothed_t1A35366991A6CB8D3A2FB1AC19520B9F1EEBE656  get_U3CAltScaleU3Ek__BackingField_16() const { return ___U3CAltScaleU3Ek__BackingField_16; }
	inline Vector3Smoothed_t1A35366991A6CB8D3A2FB1AC19520B9F1EEBE656 * get_address_of_U3CAltScaleU3Ek__BackingField_16() { return &___U3CAltScaleU3Ek__BackingField_16; }
	inline void set_U3CAltScaleU3Ek__BackingField_16(Vector3Smoothed_t1A35366991A6CB8D3A2FB1AC19520B9F1EEBE656  value)
	{
		___U3CAltScaleU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CDeltaTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167, ___U3CDeltaTimeU3Ek__BackingField_17)); }
	inline float get_U3CDeltaTimeU3Ek__BackingField_17() const { return ___U3CDeltaTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CDeltaTimeU3Ek__BackingField_17() { return &___U3CDeltaTimeU3Ek__BackingField_17; }
	inline void set_U3CDeltaTimeU3Ek__BackingField_17(float value)
	{
		___U3CDeltaTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_currentTrackedHandedness_18() { return static_cast<int32_t>(offsetof(SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167, ___currentTrackedHandedness_18)); }
	inline uint8_t get_currentTrackedHandedness_18() const { return ___currentTrackedHandedness_18; }
	inline uint8_t* get_address_of_currentTrackedHandedness_18() { return &___currentTrackedHandedness_18; }
	inline void set_currentTrackedHandedness_18(uint8_t value)
	{
		___currentTrackedHandedness_18 = value;
	}

	inline static int32_t get_offset_of_preferredTrackedHandedness_19() { return static_cast<int32_t>(offsetof(SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167, ___preferredTrackedHandedness_19)); }
	inline uint8_t get_preferredTrackedHandedness_19() const { return ___preferredTrackedHandedness_19; }
	inline uint8_t* get_address_of_preferredTrackedHandedness_19() { return &___preferredTrackedHandedness_19; }
	inline void set_preferredTrackedHandedness_19(uint8_t value)
	{
		___preferredTrackedHandedness_19 = value;
	}

	inline static int32_t get_offset_of_trackingTarget_20() { return static_cast<int32_t>(offsetof(SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167, ___trackingTarget_20)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_trackingTarget_20() const { return ___trackingTarget_20; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_trackingTarget_20() { return &___trackingTarget_20; }
	inline void set_trackingTarget_20(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___trackingTarget_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingTarget_20), (void*)value);
	}

	inline static int32_t get_offset_of_controllerRay_21() { return static_cast<int32_t>(offsetof(SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167, ___controllerRay_21)); }
	inline LinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0 * get_controllerRay_21() const { return ___controllerRay_21; }
	inline LinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0 ** get_address_of_controllerRay_21() { return &___controllerRay_21; }
	inline void set_controllerRay_21(LinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0 * value)
	{
		___controllerRay_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerRay_21), (void*)value);
	}

	inline static int32_t get_offset_of_lastUpdateTime_22() { return static_cast<int32_t>(offsetof(SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167, ___lastUpdateTime_22)); }
	inline float get_lastUpdateTime_22() const { return ___lastUpdateTime_22; }
	inline float* get_address_of_lastUpdateTime_22() { return &___lastUpdateTime_22; }
	inline void set_lastUpdateTime_22(float value)
	{
		___lastUpdateTime_22 = value;
	}

	inline static int32_t get_offset_of_handJointService_23() { return static_cast<int32_t>(offsetof(SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167, ___handJointService_23)); }
	inline RuntimeObject* get_handJointService_23() const { return ___handJointService_23; }
	inline RuntimeObject** get_address_of_handJointService_23() { return &___handJointService_23; }
	inline void set_handJointService_23(RuntimeObject* value)
	{
		___handJointService_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handJointService_23), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection
struct TileGridObjectCollection_tA10CBCAEB57EC353B7B745FE141753DFF26A2FDF  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::Columns
	int32_t ___Columns_4;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::TileSize
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___TileSize_5;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::Gutters
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Gutters_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::LayoutDireciton
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___LayoutDireciton_7;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::StartPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___StartPosition_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::Centered
	bool ___Centered_9;
	// Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection/GridDivisions Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::DepthCalculatedBy
	int32_t ___DepthCalculatedBy_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::OnlyInEditMode
	bool ___OnlyInEditMode_11;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::offSet
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___offSet_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::editorUpdated
	bool ___editorUpdated_13;

public:
	inline static int32_t get_offset_of_Columns_4() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_tA10CBCAEB57EC353B7B745FE141753DFF26A2FDF, ___Columns_4)); }
	inline int32_t get_Columns_4() const { return ___Columns_4; }
	inline int32_t* get_address_of_Columns_4() { return &___Columns_4; }
	inline void set_Columns_4(int32_t value)
	{
		___Columns_4 = value;
	}

	inline static int32_t get_offset_of_TileSize_5() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_tA10CBCAEB57EC353B7B745FE141753DFF26A2FDF, ___TileSize_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_TileSize_5() const { return ___TileSize_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_TileSize_5() { return &___TileSize_5; }
	inline void set_TileSize_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___TileSize_5 = value;
	}

	inline static int32_t get_offset_of_Gutters_6() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_tA10CBCAEB57EC353B7B745FE141753DFF26A2FDF, ___Gutters_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_Gutters_6() const { return ___Gutters_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_Gutters_6() { return &___Gutters_6; }
	inline void set_Gutters_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___Gutters_6 = value;
	}

	inline static int32_t get_offset_of_LayoutDireciton_7() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_tA10CBCAEB57EC353B7B745FE141753DFF26A2FDF, ___LayoutDireciton_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_LayoutDireciton_7() const { return ___LayoutDireciton_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_LayoutDireciton_7() { return &___LayoutDireciton_7; }
	inline void set_LayoutDireciton_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___LayoutDireciton_7 = value;
	}

	inline static int32_t get_offset_of_StartPosition_8() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_tA10CBCAEB57EC353B7B745FE141753DFF26A2FDF, ___StartPosition_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_StartPosition_8() const { return ___StartPosition_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_StartPosition_8() { return &___StartPosition_8; }
	inline void set_StartPosition_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___StartPosition_8 = value;
	}

	inline static int32_t get_offset_of_Centered_9() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_tA10CBCAEB57EC353B7B745FE141753DFF26A2FDF, ___Centered_9)); }
	inline bool get_Centered_9() const { return ___Centered_9; }
	inline bool* get_address_of_Centered_9() { return &___Centered_9; }
	inline void set_Centered_9(bool value)
	{
		___Centered_9 = value;
	}

	inline static int32_t get_offset_of_DepthCalculatedBy_10() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_tA10CBCAEB57EC353B7B745FE141753DFF26A2FDF, ___DepthCalculatedBy_10)); }
	inline int32_t get_DepthCalculatedBy_10() const { return ___DepthCalculatedBy_10; }
	inline int32_t* get_address_of_DepthCalculatedBy_10() { return &___DepthCalculatedBy_10; }
	inline void set_DepthCalculatedBy_10(int32_t value)
	{
		___DepthCalculatedBy_10 = value;
	}

	inline static int32_t get_offset_of_OnlyInEditMode_11() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_tA10CBCAEB57EC353B7B745FE141753DFF26A2FDF, ___OnlyInEditMode_11)); }
	inline bool get_OnlyInEditMode_11() const { return ___OnlyInEditMode_11; }
	inline bool* get_address_of_OnlyInEditMode_11() { return &___OnlyInEditMode_11; }
	inline void set_OnlyInEditMode_11(bool value)
	{
		___OnlyInEditMode_11 = value;
	}

	inline static int32_t get_offset_of_offSet_12() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_tA10CBCAEB57EC353B7B745FE141753DFF26A2FDF, ___offSet_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_offSet_12() const { return ___offSet_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_offSet_12() { return &___offSet_12; }
	inline void set_offSet_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___offSet_12 = value;
	}

	inline static int32_t get_offset_of_editorUpdated_13() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_tA10CBCAEB57EC353B7B745FE141753DFF26A2FDF, ___editorUpdated_13)); }
	inline bool get_editorUpdated_13() const { return ___editorUpdated_13; }
	inline bool* get_address_of_editorUpdated_13() { return &___editorUpdated_13; }
	inline void set_editorUpdated_13(bool value)
	{
		___editorUpdated_13 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer
struct ControllerPoseSynchronizer_t0F46D842A5E324732465481B59A9615ADB6F9C0F  : public InputSystemGlobalHandlerListener_t74774CE161F4A74C6DB59EDD6E6BA762F74E95CC
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::destroyOnSourceLost
	bool ___destroyOnSourceLost_5;
	// Microsoft.MixedReality.Toolkit.TrackingState Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::TrackingState
	int32_t ___TrackingState_6;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::controller
	RuntimeObject* ___controller_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::useSourcePoseData
	bool ___useSourcePoseData_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::useSourcePoseAsFallback
	bool ___useSourcePoseAsFallback_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::poseActionDetected
	bool ___poseActionDetected_10;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::poseAction
	MixedRealityInputAction_tCF113910A92EDEA11D49672BC780F392606FC21E  ___poseAction_11;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::handedness
	uint8_t ___handedness_12;

public:
	inline static int32_t get_offset_of_destroyOnSourceLost_5() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t0F46D842A5E324732465481B59A9615ADB6F9C0F, ___destroyOnSourceLost_5)); }
	inline bool get_destroyOnSourceLost_5() const { return ___destroyOnSourceLost_5; }
	inline bool* get_address_of_destroyOnSourceLost_5() { return &___destroyOnSourceLost_5; }
	inline void set_destroyOnSourceLost_5(bool value)
	{
		___destroyOnSourceLost_5 = value;
	}

	inline static int32_t get_offset_of_TrackingState_6() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t0F46D842A5E324732465481B59A9615ADB6F9C0F, ___TrackingState_6)); }
	inline int32_t get_TrackingState_6() const { return ___TrackingState_6; }
	inline int32_t* get_address_of_TrackingState_6() { return &___TrackingState_6; }
	inline void set_TrackingState_6(int32_t value)
	{
		___TrackingState_6 = value;
	}

	inline static int32_t get_offset_of_controller_7() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t0F46D842A5E324732465481B59A9615ADB6F9C0F, ___controller_7)); }
	inline RuntimeObject* get_controller_7() const { return ___controller_7; }
	inline RuntimeObject** get_address_of_controller_7() { return &___controller_7; }
	inline void set_controller_7(RuntimeObject* value)
	{
		___controller_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_7), (void*)value);
	}

	inline static int32_t get_offset_of_useSourcePoseData_8() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t0F46D842A5E324732465481B59A9615ADB6F9C0F, ___useSourcePoseData_8)); }
	inline bool get_useSourcePoseData_8() const { return ___useSourcePoseData_8; }
	inline bool* get_address_of_useSourcePoseData_8() { return &___useSourcePoseData_8; }
	inline void set_useSourcePoseData_8(bool value)
	{
		___useSourcePoseData_8 = value;
	}

	inline static int32_t get_offset_of_useSourcePoseAsFallback_9() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t0F46D842A5E324732465481B59A9615ADB6F9C0F, ___useSourcePoseAsFallback_9)); }
	inline bool get_useSourcePoseAsFallback_9() const { return ___useSourcePoseAsFallback_9; }
	inline bool* get_address_of_useSourcePoseAsFallback_9() { return &___useSourcePoseAsFallback_9; }
	inline void set_useSourcePoseAsFallback_9(bool value)
	{
		___useSourcePoseAsFallback_9 = value;
	}

	inline static int32_t get_offset_of_poseActionDetected_10() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t0F46D842A5E324732465481B59A9615ADB6F9C0F, ___poseActionDetected_10)); }
	inline bool get_poseActionDetected_10() const { return ___poseActionDetected_10; }
	inline bool* get_address_of_poseActionDetected_10() { return &___poseActionDetected_10; }
	inline void set_poseActionDetected_10(bool value)
	{
		___poseActionDetected_10 = value;
	}

	inline static int32_t get_offset_of_poseAction_11() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t0F46D842A5E324732465481B59A9615ADB6F9C0F, ___poseAction_11)); }
	inline MixedRealityInputAction_tCF113910A92EDEA11D49672BC780F392606FC21E  get_poseAction_11() const { return ___poseAction_11; }
	inline MixedRealityInputAction_tCF113910A92EDEA11D49672BC780F392606FC21E * get_address_of_poseAction_11() { return &___poseAction_11; }
	inline void set_poseAction_11(MixedRealityInputAction_tCF113910A92EDEA11D49672BC780F392606FC21E  value)
	{
		___poseAction_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___poseAction_11))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_handedness_12() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t0F46D842A5E324732465481B59A9615ADB6F9C0F, ___handedness_12)); }
	inline uint8_t get_handedness_12() const { return ___handedness_12; }
	inline uint8_t* get_address_of_handedness_12() { return &___handedness_12; }
	inline void set_handedness_12(uint8_t value)
	{
		___handedness_12 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Overlap
struct Overlap_t51F3560DB117AF00D0753CF0682C6C85B847C63B  : public Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView
struct RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD  : public Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.RadialViewReferenceDirection Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::referenceDirection
	int32_t ___referenceDirection_13;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::minDistance
	float ___minDistance_14;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::maxDistance
	float ___maxDistance_15;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::minViewDegrees
	float ___minViewDegrees_16;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::maxViewDegrees
	float ___maxViewDegrees_17;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::aspectV
	float ___aspectV_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::ignoreAngleClamp
	bool ___ignoreAngleClamp_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::ignoreDistanceClamp
	bool ___ignoreDistanceClamp_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::useFixedVerticalPosition
	bool ___useFixedVerticalPosition_21;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::fixedVerticalPosition
	float ___fixedVerticalPosition_22;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::orientToReferenceDirection
	bool ___orientToReferenceDirection_23;

public:
	inline static int32_t get_offset_of_referenceDirection_13() { return static_cast<int32_t>(offsetof(RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD, ___referenceDirection_13)); }
	inline int32_t get_referenceDirection_13() const { return ___referenceDirection_13; }
	inline int32_t* get_address_of_referenceDirection_13() { return &___referenceDirection_13; }
	inline void set_referenceDirection_13(int32_t value)
	{
		___referenceDirection_13 = value;
	}

	inline static int32_t get_offset_of_minDistance_14() { return static_cast<int32_t>(offsetof(RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD, ___minDistance_14)); }
	inline float get_minDistance_14() const { return ___minDistance_14; }
	inline float* get_address_of_minDistance_14() { return &___minDistance_14; }
	inline void set_minDistance_14(float value)
	{
		___minDistance_14 = value;
	}

	inline static int32_t get_offset_of_maxDistance_15() { return static_cast<int32_t>(offsetof(RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD, ___maxDistance_15)); }
	inline float get_maxDistance_15() const { return ___maxDistance_15; }
	inline float* get_address_of_maxDistance_15() { return &___maxDistance_15; }
	inline void set_maxDistance_15(float value)
	{
		___maxDistance_15 = value;
	}

	inline static int32_t get_offset_of_minViewDegrees_16() { return static_cast<int32_t>(offsetof(RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD, ___minViewDegrees_16)); }
	inline float get_minViewDegrees_16() const { return ___minViewDegrees_16; }
	inline float* get_address_of_minViewDegrees_16() { return &___minViewDegrees_16; }
	inline void set_minViewDegrees_16(float value)
	{
		___minViewDegrees_16 = value;
	}

	inline static int32_t get_offset_of_maxViewDegrees_17() { return static_cast<int32_t>(offsetof(RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD, ___maxViewDegrees_17)); }
	inline float get_maxViewDegrees_17() const { return ___maxViewDegrees_17; }
	inline float* get_address_of_maxViewDegrees_17() { return &___maxViewDegrees_17; }
	inline void set_maxViewDegrees_17(float value)
	{
		___maxViewDegrees_17 = value;
	}

	inline static int32_t get_offset_of_aspectV_18() { return static_cast<int32_t>(offsetof(RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD, ___aspectV_18)); }
	inline float get_aspectV_18() const { return ___aspectV_18; }
	inline float* get_address_of_aspectV_18() { return &___aspectV_18; }
	inline void set_aspectV_18(float value)
	{
		___aspectV_18 = value;
	}

	inline static int32_t get_offset_of_ignoreAngleClamp_19() { return static_cast<int32_t>(offsetof(RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD, ___ignoreAngleClamp_19)); }
	inline bool get_ignoreAngleClamp_19() const { return ___ignoreAngleClamp_19; }
	inline bool* get_address_of_ignoreAngleClamp_19() { return &___ignoreAngleClamp_19; }
	inline void set_ignoreAngleClamp_19(bool value)
	{
		___ignoreAngleClamp_19 = value;
	}

	inline static int32_t get_offset_of_ignoreDistanceClamp_20() { return static_cast<int32_t>(offsetof(RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD, ___ignoreDistanceClamp_20)); }
	inline bool get_ignoreDistanceClamp_20() const { return ___ignoreDistanceClamp_20; }
	inline bool* get_address_of_ignoreDistanceClamp_20() { return &___ignoreDistanceClamp_20; }
	inline void set_ignoreDistanceClamp_20(bool value)
	{
		___ignoreDistanceClamp_20 = value;
	}

	inline static int32_t get_offset_of_useFixedVerticalPosition_21() { return static_cast<int32_t>(offsetof(RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD, ___useFixedVerticalPosition_21)); }
	inline bool get_useFixedVerticalPosition_21() const { return ___useFixedVerticalPosition_21; }
	inline bool* get_address_of_useFixedVerticalPosition_21() { return &___useFixedVerticalPosition_21; }
	inline void set_useFixedVerticalPosition_21(bool value)
	{
		___useFixedVerticalPosition_21 = value;
	}

	inline static int32_t get_offset_of_fixedVerticalPosition_22() { return static_cast<int32_t>(offsetof(RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD, ___fixedVerticalPosition_22)); }
	inline float get_fixedVerticalPosition_22() const { return ___fixedVerticalPosition_22; }
	inline float* get_address_of_fixedVerticalPosition_22() { return &___fixedVerticalPosition_22; }
	inline void set_fixedVerticalPosition_22(float value)
	{
		___fixedVerticalPosition_22 = value;
	}

	inline static int32_t get_offset_of_orientToReferenceDirection_23() { return static_cast<int32_t>(offsetof(RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD, ___orientToReferenceDirection_23)); }
	inline bool get_orientToReferenceDirection_23() const { return ___orientToReferenceDirection_23; }
	inline bool* get_address_of_orientToReferenceDirection_23() { return &___orientToReferenceDirection_23; }
	inline void set_orientToReferenceDirection_23(bool value)
	{
		___orientToReferenceDirection_23 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism
struct SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62  : public Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA
{
public:
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::magneticSurfaces
	LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___magneticSurfaces_13;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::maxRaycastDistance
	float ___maxRaycastDistance_14;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::closestDistance
	float ___closestDistance_15;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::surfaceNormalOffset
	float ___surfaceNormalOffset_16;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::surfaceRayOffset
	float ___surfaceRayOffset_17;
	// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::raycastMode
	int32_t ___raycastMode_18;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::boxRaysPerEdge
	int32_t ___boxRaysPerEdge_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::orthographicBoxCast
	bool ___orthographicBoxCast_20;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::maximumNormalVariance
	float ___maximumNormalVariance_21;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::sphereSize
	float ___sphereSize_22;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::volumeCastSizeOverride
	float ___volumeCastSizeOverride_23;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::useLinkedAltScaleOverride
	bool ___useLinkedAltScaleOverride_24;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/RaycastDirectionMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::currentRaycastDirectionMode
	int32_t ___currentRaycastDirectionMode_25;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/OrientationMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::orientationMode
	int32_t ___orientationMode_26;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::orientationBlend
	float ___orientationBlend_27;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::keepOrientationVertical
	bool ___keepOrientationVertical_28;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::debugEnabled
	bool ___debugEnabled_29;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::<OnSurface>k__BackingField
	bool ___U3COnSurfaceU3Ek__BackingField_30;
	// Microsoft.MixedReality.Toolkit.Physics.RayStep Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::currentRayStep
	RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862  ___currentRayStep_32;
	// UnityEngine.BoxCollider Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::boxCollider
	BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * ___boxCollider_33;

public:
	inline static int32_t get_offset_of_magneticSurfaces_13() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62, ___magneticSurfaces_13)); }
	inline LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* get_magneticSurfaces_13() const { return ___magneticSurfaces_13; }
	inline LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D** get_address_of_magneticSurfaces_13() { return &___magneticSurfaces_13; }
	inline void set_magneticSurfaces_13(LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* value)
	{
		___magneticSurfaces_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___magneticSurfaces_13), (void*)value);
	}

	inline static int32_t get_offset_of_maxRaycastDistance_14() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62, ___maxRaycastDistance_14)); }
	inline float get_maxRaycastDistance_14() const { return ___maxRaycastDistance_14; }
	inline float* get_address_of_maxRaycastDistance_14() { return &___maxRaycastDistance_14; }
	inline void set_maxRaycastDistance_14(float value)
	{
		___maxRaycastDistance_14 = value;
	}

	inline static int32_t get_offset_of_closestDistance_15() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62, ___closestDistance_15)); }
	inline float get_closestDistance_15() const { return ___closestDistance_15; }
	inline float* get_address_of_closestDistance_15() { return &___closestDistance_15; }
	inline void set_closestDistance_15(float value)
	{
		___closestDistance_15 = value;
	}

	inline static int32_t get_offset_of_surfaceNormalOffset_16() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62, ___surfaceNormalOffset_16)); }
	inline float get_surfaceNormalOffset_16() const { return ___surfaceNormalOffset_16; }
	inline float* get_address_of_surfaceNormalOffset_16() { return &___surfaceNormalOffset_16; }
	inline void set_surfaceNormalOffset_16(float value)
	{
		___surfaceNormalOffset_16 = value;
	}

	inline static int32_t get_offset_of_surfaceRayOffset_17() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62, ___surfaceRayOffset_17)); }
	inline float get_surfaceRayOffset_17() const { return ___surfaceRayOffset_17; }
	inline float* get_address_of_surfaceRayOffset_17() { return &___surfaceRayOffset_17; }
	inline void set_surfaceRayOffset_17(float value)
	{
		___surfaceRayOffset_17 = value;
	}

	inline static int32_t get_offset_of_raycastMode_18() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62, ___raycastMode_18)); }
	inline int32_t get_raycastMode_18() const { return ___raycastMode_18; }
	inline int32_t* get_address_of_raycastMode_18() { return &___raycastMode_18; }
	inline void set_raycastMode_18(int32_t value)
	{
		___raycastMode_18 = value;
	}

	inline static int32_t get_offset_of_boxRaysPerEdge_19() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62, ___boxRaysPerEdge_19)); }
	inline int32_t get_boxRaysPerEdge_19() const { return ___boxRaysPerEdge_19; }
	inline int32_t* get_address_of_boxRaysPerEdge_19() { return &___boxRaysPerEdge_19; }
	inline void set_boxRaysPerEdge_19(int32_t value)
	{
		___boxRaysPerEdge_19 = value;
	}

	inline static int32_t get_offset_of_orthographicBoxCast_20() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62, ___orthographicBoxCast_20)); }
	inline bool get_orthographicBoxCast_20() const { return ___orthographicBoxCast_20; }
	inline bool* get_address_of_orthographicBoxCast_20() { return &___orthographicBoxCast_20; }
	inline void set_orthographicBoxCast_20(bool value)
	{
		___orthographicBoxCast_20 = value;
	}

	inline static int32_t get_offset_of_maximumNormalVariance_21() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62, ___maximumNormalVariance_21)); }
	inline float get_maximumNormalVariance_21() const { return ___maximumNormalVariance_21; }
	inline float* get_address_of_maximumNormalVariance_21() { return &___maximumNormalVariance_21; }
	inline void set_maximumNormalVariance_21(float value)
	{
		___maximumNormalVariance_21 = value;
	}

	inline static int32_t get_offset_of_sphereSize_22() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62, ___sphereSize_22)); }
	inline float get_sphereSize_22() const { return ___sphereSize_22; }
	inline float* get_address_of_sphereSize_22() { return &___sphereSize_22; }
	inline void set_sphereSize_22(float value)
	{
		___sphereSize_22 = value;
	}

	inline static int32_t get_offset_of_volumeCastSizeOverride_23() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62, ___volumeCastSizeOverride_23)); }
	inline float get_volumeCastSizeOverride_23() const { return ___volumeCastSizeOverride_23; }
	inline float* get_address_of_volumeCastSizeOverride_23() { return &___volumeCastSizeOverride_23; }
	inline void set_volumeCastSizeOverride_23(float value)
	{
		___volumeCastSizeOverride_23 = value;
	}

	inline static int32_t get_offset_of_useLinkedAltScaleOverride_24() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62, ___useLinkedAltScaleOverride_24)); }
	inline bool get_useLinkedAltScaleOverride_24() const { return ___useLinkedAltScaleOverride_24; }
	inline bool* get_address_of_useLinkedAltScaleOverride_24() { return &___useLinkedAltScaleOverride_24; }
	inline void set_useLinkedAltScaleOverride_24(bool value)
	{
		___useLinkedAltScaleOverride_24 = value;
	}

	inline static int32_t get_offset_of_currentRaycastDirectionMode_25() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62, ___currentRaycastDirectionMode_25)); }
	inline int32_t get_currentRaycastDirectionMode_25() const { return ___currentRaycastDirectionMode_25; }
	inline int32_t* get_address_of_currentRaycastDirectionMode_25() { return &___currentRaycastDirectionMode_25; }
	inline void set_currentRaycastDirectionMode_25(int32_t value)
	{
		___currentRaycastDirectionMode_25 = value;
	}

	inline static int32_t get_offset_of_orientationMode_26() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62, ___orientationMode_26)); }
	inline int32_t get_orientationMode_26() const { return ___orientationMode_26; }
	inline int32_t* get_address_of_orientationMode_26() { return &___orientationMode_26; }
	inline void set_orientationMode_26(int32_t value)
	{
		___orientationMode_26 = value;
	}

	inline static int32_t get_offset_of_orientationBlend_27() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62, ___orientationBlend_27)); }
	inline float get_orientationBlend_27() const { return ___orientationBlend_27; }
	inline float* get_address_of_orientationBlend_27() { return &___orientationBlend_27; }
	inline void set_orientationBlend_27(float value)
	{
		___orientationBlend_27 = value;
	}

	inline static int32_t get_offset_of_keepOrientationVertical_28() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62, ___keepOrientationVertical_28)); }
	inline bool get_keepOrientationVertical_28() const { return ___keepOrientationVertical_28; }
	inline bool* get_address_of_keepOrientationVertical_28() { return &___keepOrientationVertical_28; }
	inline void set_keepOrientationVertical_28(bool value)
	{
		___keepOrientationVertical_28 = value;
	}

	inline static int32_t get_offset_of_debugEnabled_29() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62, ___debugEnabled_29)); }
	inline bool get_debugEnabled_29() const { return ___debugEnabled_29; }
	inline bool* get_address_of_debugEnabled_29() { return &___debugEnabled_29; }
	inline void set_debugEnabled_29(bool value)
	{
		___debugEnabled_29 = value;
	}

	inline static int32_t get_offset_of_U3COnSurfaceU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62, ___U3COnSurfaceU3Ek__BackingField_30)); }
	inline bool get_U3COnSurfaceU3Ek__BackingField_30() const { return ___U3COnSurfaceU3Ek__BackingField_30; }
	inline bool* get_address_of_U3COnSurfaceU3Ek__BackingField_30() { return &___U3COnSurfaceU3Ek__BackingField_30; }
	inline void set_U3COnSurfaceU3Ek__BackingField_30(bool value)
	{
		___U3COnSurfaceU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_currentRayStep_32() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62, ___currentRayStep_32)); }
	inline RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862  get_currentRayStep_32() const { return ___currentRayStep_32; }
	inline RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * get_address_of_currentRayStep_32() { return &___currentRayStep_32; }
	inline void set_currentRayStep_32(RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862  value)
	{
		___currentRayStep_32 = value;
	}

	inline static int32_t get_offset_of_boxCollider_33() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62, ___boxCollider_33)); }
	inline BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * get_boxCollider_33() const { return ___boxCollider_33; }
	inline BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA ** get_address_of_boxCollider_33() { return &___boxCollider_33; }
	inline void set_boxCollider_33(BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * value)
	{
		___boxCollider_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boxCollider_33), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace
struct TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6  : public Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::autoStart
	bool ___autoStart_13;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::defaultPlacementDistance
	float ___defaultPlacementDistance_14;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::maxRaycastDistance
	float ___maxRaycastDistance_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::<IsBeingPlaced>k__BackingField
	bool ___U3CIsBeingPlacedU3Ek__BackingField_16;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::surfaceNormalOffset
	float ___surfaceNormalOffset_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::useDefaultSurfaceNormalOffset
	bool ___useDefaultSurfaceNormalOffset_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::keepOrientationVertical
	bool ___keepOrientationVertical_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::rotateAccordingToSurface
	bool ___rotateAccordingToSurface_20;
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::magneticSurfaces
	LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___magneticSurfaces_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::debugEnabled
	bool ___debugEnabled_22;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::onPlacingStarted
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___onPlacingStarted_23;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::onPlacingStopped
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___onPlacingStopped_24;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::<GameObjectLayer>k__BackingField
	int32_t ___U3CGameObjectLayerU3Ek__BackingField_25;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::ignoreRaycastLayer
	int32_t ___ignoreRaycastLayer_26;
	// Microsoft.MixedReality.Toolkit.Physics.RayStep Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::CurrentRay
	RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862  ___CurrentRay_27;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::DidHitSurface
	bool ___DidHitSurface_28;
	// UnityEngine.RaycastHit Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::CurrentHit
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  ___CurrentHit_29;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::LastTimeClicked
	float ___LastTimeClicked_30;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::DoubleClickTimeout
	float ___DoubleClickTimeout_31;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::startCalled
	bool ___startCalled_32;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::placementRequested
	bool ___placementRequested_33;

public:
	inline static int32_t get_offset_of_autoStart_13() { return static_cast<int32_t>(offsetof(TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6, ___autoStart_13)); }
	inline bool get_autoStart_13() const { return ___autoStart_13; }
	inline bool* get_address_of_autoStart_13() { return &___autoStart_13; }
	inline void set_autoStart_13(bool value)
	{
		___autoStart_13 = value;
	}

	inline static int32_t get_offset_of_defaultPlacementDistance_14() { return static_cast<int32_t>(offsetof(TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6, ___defaultPlacementDistance_14)); }
	inline float get_defaultPlacementDistance_14() const { return ___defaultPlacementDistance_14; }
	inline float* get_address_of_defaultPlacementDistance_14() { return &___defaultPlacementDistance_14; }
	inline void set_defaultPlacementDistance_14(float value)
	{
		___defaultPlacementDistance_14 = value;
	}

	inline static int32_t get_offset_of_maxRaycastDistance_15() { return static_cast<int32_t>(offsetof(TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6, ___maxRaycastDistance_15)); }
	inline float get_maxRaycastDistance_15() const { return ___maxRaycastDistance_15; }
	inline float* get_address_of_maxRaycastDistance_15() { return &___maxRaycastDistance_15; }
	inline void set_maxRaycastDistance_15(float value)
	{
		___maxRaycastDistance_15 = value;
	}

	inline static int32_t get_offset_of_U3CIsBeingPlacedU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6, ___U3CIsBeingPlacedU3Ek__BackingField_16)); }
	inline bool get_U3CIsBeingPlacedU3Ek__BackingField_16() const { return ___U3CIsBeingPlacedU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CIsBeingPlacedU3Ek__BackingField_16() { return &___U3CIsBeingPlacedU3Ek__BackingField_16; }
	inline void set_U3CIsBeingPlacedU3Ek__BackingField_16(bool value)
	{
		___U3CIsBeingPlacedU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_surfaceNormalOffset_17() { return static_cast<int32_t>(offsetof(TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6, ___surfaceNormalOffset_17)); }
	inline float get_surfaceNormalOffset_17() const { return ___surfaceNormalOffset_17; }
	inline float* get_address_of_surfaceNormalOffset_17() { return &___surfaceNormalOffset_17; }
	inline void set_surfaceNormalOffset_17(float value)
	{
		___surfaceNormalOffset_17 = value;
	}

	inline static int32_t get_offset_of_useDefaultSurfaceNormalOffset_18() { return static_cast<int32_t>(offsetof(TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6, ___useDefaultSurfaceNormalOffset_18)); }
	inline bool get_useDefaultSurfaceNormalOffset_18() const { return ___useDefaultSurfaceNormalOffset_18; }
	inline bool* get_address_of_useDefaultSurfaceNormalOffset_18() { return &___useDefaultSurfaceNormalOffset_18; }
	inline void set_useDefaultSurfaceNormalOffset_18(bool value)
	{
		___useDefaultSurfaceNormalOffset_18 = value;
	}

	inline static int32_t get_offset_of_keepOrientationVertical_19() { return static_cast<int32_t>(offsetof(TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6, ___keepOrientationVertical_19)); }
	inline bool get_keepOrientationVertical_19() const { return ___keepOrientationVertical_19; }
	inline bool* get_address_of_keepOrientationVertical_19() { return &___keepOrientationVertical_19; }
	inline void set_keepOrientationVertical_19(bool value)
	{
		___keepOrientationVertical_19 = value;
	}

	inline static int32_t get_offset_of_rotateAccordingToSurface_20() { return static_cast<int32_t>(offsetof(TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6, ___rotateAccordingToSurface_20)); }
	inline bool get_rotateAccordingToSurface_20() const { return ___rotateAccordingToSurface_20; }
	inline bool* get_address_of_rotateAccordingToSurface_20() { return &___rotateAccordingToSurface_20; }
	inline void set_rotateAccordingToSurface_20(bool value)
	{
		___rotateAccordingToSurface_20 = value;
	}

	inline static int32_t get_offset_of_magneticSurfaces_21() { return static_cast<int32_t>(offsetof(TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6, ___magneticSurfaces_21)); }
	inline LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* get_magneticSurfaces_21() const { return ___magneticSurfaces_21; }
	inline LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D** get_address_of_magneticSurfaces_21() { return &___magneticSurfaces_21; }
	inline void set_magneticSurfaces_21(LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* value)
	{
		___magneticSurfaces_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___magneticSurfaces_21), (void*)value);
	}

	inline static int32_t get_offset_of_debugEnabled_22() { return static_cast<int32_t>(offsetof(TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6, ___debugEnabled_22)); }
	inline bool get_debugEnabled_22() const { return ___debugEnabled_22; }
	inline bool* get_address_of_debugEnabled_22() { return &___debugEnabled_22; }
	inline void set_debugEnabled_22(bool value)
	{
		___debugEnabled_22 = value;
	}

	inline static int32_t get_offset_of_onPlacingStarted_23() { return static_cast<int32_t>(offsetof(TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6, ___onPlacingStarted_23)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_onPlacingStarted_23() const { return ___onPlacingStarted_23; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_onPlacingStarted_23() { return &___onPlacingStarted_23; }
	inline void set_onPlacingStarted_23(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___onPlacingStarted_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPlacingStarted_23), (void*)value);
	}

	inline static int32_t get_offset_of_onPlacingStopped_24() { return static_cast<int32_t>(offsetof(TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6, ___onPlacingStopped_24)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_onPlacingStopped_24() const { return ___onPlacingStopped_24; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_onPlacingStopped_24() { return &___onPlacingStopped_24; }
	inline void set_onPlacingStopped_24(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___onPlacingStopped_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPlacingStopped_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGameObjectLayerU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6, ___U3CGameObjectLayerU3Ek__BackingField_25)); }
	inline int32_t get_U3CGameObjectLayerU3Ek__BackingField_25() const { return ___U3CGameObjectLayerU3Ek__BackingField_25; }
	inline int32_t* get_address_of_U3CGameObjectLayerU3Ek__BackingField_25() { return &___U3CGameObjectLayerU3Ek__BackingField_25; }
	inline void set_U3CGameObjectLayerU3Ek__BackingField_25(int32_t value)
	{
		___U3CGameObjectLayerU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_ignoreRaycastLayer_26() { return static_cast<int32_t>(offsetof(TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6, ___ignoreRaycastLayer_26)); }
	inline int32_t get_ignoreRaycastLayer_26() const { return ___ignoreRaycastLayer_26; }
	inline int32_t* get_address_of_ignoreRaycastLayer_26() { return &___ignoreRaycastLayer_26; }
	inline void set_ignoreRaycastLayer_26(int32_t value)
	{
		___ignoreRaycastLayer_26 = value;
	}

	inline static int32_t get_offset_of_CurrentRay_27() { return static_cast<int32_t>(offsetof(TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6, ___CurrentRay_27)); }
	inline RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862  get_CurrentRay_27() const { return ___CurrentRay_27; }
	inline RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * get_address_of_CurrentRay_27() { return &___CurrentRay_27; }
	inline void set_CurrentRay_27(RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862  value)
	{
		___CurrentRay_27 = value;
	}

	inline static int32_t get_offset_of_DidHitSurface_28() { return static_cast<int32_t>(offsetof(TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6, ___DidHitSurface_28)); }
	inline bool get_DidHitSurface_28() const { return ___DidHitSurface_28; }
	inline bool* get_address_of_DidHitSurface_28() { return &___DidHitSurface_28; }
	inline void set_DidHitSurface_28(bool value)
	{
		___DidHitSurface_28 = value;
	}

	inline static int32_t get_offset_of_CurrentHit_29() { return static_cast<int32_t>(offsetof(TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6, ___CurrentHit_29)); }
	inline RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  get_CurrentHit_29() const { return ___CurrentHit_29; }
	inline RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * get_address_of_CurrentHit_29() { return &___CurrentHit_29; }
	inline void set_CurrentHit_29(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  value)
	{
		___CurrentHit_29 = value;
	}

	inline static int32_t get_offset_of_LastTimeClicked_30() { return static_cast<int32_t>(offsetof(TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6, ___LastTimeClicked_30)); }
	inline float get_LastTimeClicked_30() const { return ___LastTimeClicked_30; }
	inline float* get_address_of_LastTimeClicked_30() { return &___LastTimeClicked_30; }
	inline void set_LastTimeClicked_30(float value)
	{
		___LastTimeClicked_30 = value;
	}

	inline static int32_t get_offset_of_DoubleClickTimeout_31() { return static_cast<int32_t>(offsetof(TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6, ___DoubleClickTimeout_31)); }
	inline float get_DoubleClickTimeout_31() const { return ___DoubleClickTimeout_31; }
	inline float* get_address_of_DoubleClickTimeout_31() { return &___DoubleClickTimeout_31; }
	inline void set_DoubleClickTimeout_31(float value)
	{
		___DoubleClickTimeout_31 = value;
	}

	inline static int32_t get_offset_of_startCalled_32() { return static_cast<int32_t>(offsetof(TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6, ___startCalled_32)); }
	inline bool get_startCalled_32() const { return ___startCalled_32; }
	inline bool* get_address_of_startCalled_32() { return &___startCalled_32; }
	inline void set_startCalled_32(bool value)
	{
		___startCalled_32 = value;
	}

	inline static int32_t get_offset_of_placementRequested_33() { return static_cast<int32_t>(offsetof(TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6, ___placementRequested_33)); }
	inline bool get_placementRequested_33() const { return ___placementRequested_33; }
	inline bool* get_address_of_placementRequested_33() { return &___placementRequested_33; }
	inline void set_placementRequested_33(bool value)
	{
		___placementRequested_33 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer
struct BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878  : public ControllerPoseSynchronizer_t0F46D842A5E324732465481B59A9615ADB6F9C0F
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::cursorPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___cursorPrefab_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::disableCursorOnStart
	bool ___disableCursorOnStart_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::setCursorVisibilityOnSourceDetected
	bool ___setCursorVisibilityOnSourceDetected_15;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::cursorInstance
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___cursorInstance_16;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::raycastOrigin
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___raycastOrigin_17;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::activeHoldAction
	MixedRealityInputAction_tCF113910A92EDEA11D49672BC780F392606FC21E  ___activeHoldAction_18;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::pointerAction
	MixedRealityInputAction_tCF113910A92EDEA11D49672BC780F392606FC21E  ___pointerAction_19;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::grabAction
	MixedRealityInputAction_tCF113910A92EDEA11D49672BC780F392606FC21E  ___grabAction_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::IsGrabPressed
	bool ___IsGrabPressed_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::requiresHoldAction
	bool ___requiresHoldAction_22;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::requiresActionBeforeEnabling
	bool ___requiresActionBeforeEnabling_23;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::IsSelectPressed
	bool ___IsSelectPressed_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::HasSelectPressedOnce
	bool ___HasSelectPressedOnce_25;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::IsHoldPressed
	bool ___IsHoldPressed_26;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::isCursorInstantiatedFromPrefab
	bool ___isCursorInstantiatedFromPrefab_27;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::pointerId
	uint32_t ___pointerId_29;
	// System.String Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::basePointerName
	String_t* ___basePointerName_30;
	// System.String Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::pointerName
	String_t* ___pointerName_31;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<BaseCursor>k__BackingField
	RuntimeObject* ___U3CBaseCursorU3Ek__BackingField_32;
	// Microsoft.MixedReality.Toolkit.Input.ICursorModifier Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<CursorModifier>k__BackingField
	RuntimeObject* ___U3CCursorModifierU3Ek__BackingField_33;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_34;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<IsFocusLocked>k__BackingField
	bool ___U3CIsFocusLockedU3Ek__BackingField_35;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<IsTargetPositionLockedOnFocusLock>k__BackingField
	bool ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_36;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::overrideGlobalPointerExtent
	bool ___overrideGlobalPointerExtent_37;
	// System.Single Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::pointerExtent
	float ___pointerExtent_38;
	// System.Single Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::defaultPointerExtent
	float ___defaultPointerExtent_39;
	// Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<Rays>k__BackingField
	RayStepU5BU5D_tC821C087287A98BA74889ED180CCF3A3E1198715* ___U3CRaysU3Ek__BackingField_40;
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<PrioritizedLayerMasksOverride>k__BackingField
	LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_41;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<FocusTarget>k__BackingField
	RuntimeObject* ___U3CFocusTargetU3Ek__BackingField_42;
	// Microsoft.MixedReality.Toolkit.Input.IPointerResult Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<Result>k__BackingField
	RuntimeObject* ___U3CResultU3Ek__BackingField_43;
	// Microsoft.MixedReality.Toolkit.Physics.IBaseRayStabilizer Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<RayStabilizer>k__BackingField
	RuntimeObject* ___U3CRayStabilizerU3Ek__BackingField_44;
	// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<SceneQueryType>k__BackingField
	int32_t ___U3CSceneQueryTypeU3Ek__BackingField_45;
	// System.Single Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::sphereCastRadius
	float ___sphereCastRadius_46;

public:
	inline static int32_t get_offset_of_cursorPrefab_13() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878, ___cursorPrefab_13)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_cursorPrefab_13() const { return ___cursorPrefab_13; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_cursorPrefab_13() { return &___cursorPrefab_13; }
	inline void set_cursorPrefab_13(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___cursorPrefab_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cursorPrefab_13), (void*)value);
	}

	inline static int32_t get_offset_of_disableCursorOnStart_14() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878, ___disableCursorOnStart_14)); }
	inline bool get_disableCursorOnStart_14() const { return ___disableCursorOnStart_14; }
	inline bool* get_address_of_disableCursorOnStart_14() { return &___disableCursorOnStart_14; }
	inline void set_disableCursorOnStart_14(bool value)
	{
		___disableCursorOnStart_14 = value;
	}

	inline static int32_t get_offset_of_setCursorVisibilityOnSourceDetected_15() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878, ___setCursorVisibilityOnSourceDetected_15)); }
	inline bool get_setCursorVisibilityOnSourceDetected_15() const { return ___setCursorVisibilityOnSourceDetected_15; }
	inline bool* get_address_of_setCursorVisibilityOnSourceDetected_15() { return &___setCursorVisibilityOnSourceDetected_15; }
	inline void set_setCursorVisibilityOnSourceDetected_15(bool value)
	{
		___setCursorVisibilityOnSourceDetected_15 = value;
	}

	inline static int32_t get_offset_of_cursorInstance_16() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878, ___cursorInstance_16)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_cursorInstance_16() const { return ___cursorInstance_16; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_cursorInstance_16() { return &___cursorInstance_16; }
	inline void set_cursorInstance_16(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___cursorInstance_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cursorInstance_16), (void*)value);
	}

	inline static int32_t get_offset_of_raycastOrigin_17() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878, ___raycastOrigin_17)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_raycastOrigin_17() const { return ___raycastOrigin_17; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_raycastOrigin_17() { return &___raycastOrigin_17; }
	inline void set_raycastOrigin_17(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___raycastOrigin_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raycastOrigin_17), (void*)value);
	}

	inline static int32_t get_offset_of_activeHoldAction_18() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878, ___activeHoldAction_18)); }
	inline MixedRealityInputAction_tCF113910A92EDEA11D49672BC780F392606FC21E  get_activeHoldAction_18() const { return ___activeHoldAction_18; }
	inline MixedRealityInputAction_tCF113910A92EDEA11D49672BC780F392606FC21E * get_address_of_activeHoldAction_18() { return &___activeHoldAction_18; }
	inline void set_activeHoldAction_18(MixedRealityInputAction_tCF113910A92EDEA11D49672BC780F392606FC21E  value)
	{
		___activeHoldAction_18 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___activeHoldAction_18))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_pointerAction_19() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878, ___pointerAction_19)); }
	inline MixedRealityInputAction_tCF113910A92EDEA11D49672BC780F392606FC21E  get_pointerAction_19() const { return ___pointerAction_19; }
	inline MixedRealityInputAction_tCF113910A92EDEA11D49672BC780F392606FC21E * get_address_of_pointerAction_19() { return &___pointerAction_19; }
	inline void set_pointerAction_19(MixedRealityInputAction_tCF113910A92EDEA11D49672BC780F392606FC21E  value)
	{
		___pointerAction_19 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pointerAction_19))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_grabAction_20() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878, ___grabAction_20)); }
	inline MixedRealityInputAction_tCF113910A92EDEA11D49672BC780F392606FC21E  get_grabAction_20() const { return ___grabAction_20; }
	inline MixedRealityInputAction_tCF113910A92EDEA11D49672BC780F392606FC21E * get_address_of_grabAction_20() { return &___grabAction_20; }
	inline void set_grabAction_20(MixedRealityInputAction_tCF113910A92EDEA11D49672BC780F392606FC21E  value)
	{
		___grabAction_20 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___grabAction_20))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_IsGrabPressed_21() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878, ___IsGrabPressed_21)); }
	inline bool get_IsGrabPressed_21() const { return ___IsGrabPressed_21; }
	inline bool* get_address_of_IsGrabPressed_21() { return &___IsGrabPressed_21; }
	inline void set_IsGrabPressed_21(bool value)
	{
		___IsGrabPressed_21 = value;
	}

	inline static int32_t get_offset_of_requiresHoldAction_22() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878, ___requiresHoldAction_22)); }
	inline bool get_requiresHoldAction_22() const { return ___requiresHoldAction_22; }
	inline bool* get_address_of_requiresHoldAction_22() { return &___requiresHoldAction_22; }
	inline void set_requiresHoldAction_22(bool value)
	{
		___requiresHoldAction_22 = value;
	}

	inline static int32_t get_offset_of_requiresActionBeforeEnabling_23() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878, ___requiresActionBeforeEnabling_23)); }
	inline bool get_requiresActionBeforeEnabling_23() const { return ___requiresActionBeforeEnabling_23; }
	inline bool* get_address_of_requiresActionBeforeEnabling_23() { return &___requiresActionBeforeEnabling_23; }
	inline void set_requiresActionBeforeEnabling_23(bool value)
	{
		___requiresActionBeforeEnabling_23 = value;
	}

	inline static int32_t get_offset_of_IsSelectPressed_24() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878, ___IsSelectPressed_24)); }
	inline bool get_IsSelectPressed_24() const { return ___IsSelectPressed_24; }
	inline bool* get_address_of_IsSelectPressed_24() { return &___IsSelectPressed_24; }
	inline void set_IsSelectPressed_24(bool value)
	{
		___IsSelectPressed_24 = value;
	}

	inline static int32_t get_offset_of_HasSelectPressedOnce_25() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878, ___HasSelectPressedOnce_25)); }
	inline bool get_HasSelectPressedOnce_25() const { return ___HasSelectPressedOnce_25; }
	inline bool* get_address_of_HasSelectPressedOnce_25() { return &___HasSelectPressedOnce_25; }
	inline void set_HasSelectPressedOnce_25(bool value)
	{
		___HasSelectPressedOnce_25 = value;
	}

	inline static int32_t get_offset_of_IsHoldPressed_26() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878, ___IsHoldPressed_26)); }
	inline bool get_IsHoldPressed_26() const { return ___IsHoldPressed_26; }
	inline bool* get_address_of_IsHoldPressed_26() { return &___IsHoldPressed_26; }
	inline void set_IsHoldPressed_26(bool value)
	{
		___IsHoldPressed_26 = value;
	}

	inline static int32_t get_offset_of_isCursorInstantiatedFromPrefab_27() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878, ___isCursorInstantiatedFromPrefab_27)); }
	inline bool get_isCursorInstantiatedFromPrefab_27() const { return ___isCursorInstantiatedFromPrefab_27; }
	inline bool* get_address_of_isCursorInstantiatedFromPrefab_27() { return &___isCursorInstantiatedFromPrefab_27; }
	inline void set_isCursorInstantiatedFromPrefab_27(bool value)
	{
		___isCursorInstantiatedFromPrefab_27 = value;
	}

	inline static int32_t get_offset_of_pointerId_29() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878, ___pointerId_29)); }
	inline uint32_t get_pointerId_29() const { return ___pointerId_29; }
	inline uint32_t* get_address_of_pointerId_29() { return &___pointerId_29; }
	inline void set_pointerId_29(uint32_t value)
	{
		___pointerId_29 = value;
	}

	inline static int32_t get_offset_of_basePointerName_30() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878, ___basePointerName_30)); }
	inline String_t* get_basePointerName_30() const { return ___basePointerName_30; }
	inline String_t** get_address_of_basePointerName_30() { return &___basePointerName_30; }
	inline void set_basePointerName_30(String_t* value)
	{
		___basePointerName_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___basePointerName_30), (void*)value);
	}

	inline static int32_t get_offset_of_pointerName_31() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878, ___pointerName_31)); }
	inline String_t* get_pointerName_31() const { return ___pointerName_31; }
	inline String_t** get_address_of_pointerName_31() { return &___pointerName_31; }
	inline void set_pointerName_31(String_t* value)
	{
		___pointerName_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerName_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBaseCursorU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878, ___U3CBaseCursorU3Ek__BackingField_32)); }
	inline RuntimeObject* get_U3CBaseCursorU3Ek__BackingField_32() const { return ___U3CBaseCursorU3Ek__BackingField_32; }
	inline RuntimeObject** get_address_of_U3CBaseCursorU3Ek__BackingField_32() { return &___U3CBaseCursorU3Ek__BackingField_32; }
	inline void set_U3CBaseCursorU3Ek__BackingField_32(RuntimeObject* value)
	{
		___U3CBaseCursorU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBaseCursorU3Ek__BackingField_32), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCursorModifierU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878, ___U3CCursorModifierU3Ek__BackingField_33)); }
	inline RuntimeObject* get_U3CCursorModifierU3Ek__BackingField_33() const { return ___U3CCursorModifierU3Ek__BackingField_33; }
	inline RuntimeObject** get_address_of_U3CCursorModifierU3Ek__BackingField_33() { return &___U3CCursorModifierU3Ek__BackingField_33; }
	inline void set_U3CCursorModifierU3Ek__BackingField_33(RuntimeObject* value)
	{
		___U3CCursorModifierU3Ek__BackingField_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCursorModifierU3Ek__BackingField_33), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsActiveU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878, ___U3CIsActiveU3Ek__BackingField_34)); }
	inline bool get_U3CIsActiveU3Ek__BackingField_34() const { return ___U3CIsActiveU3Ek__BackingField_34; }
	inline bool* get_address_of_U3CIsActiveU3Ek__BackingField_34() { return &___U3CIsActiveU3Ek__BackingField_34; }
	inline void set_U3CIsActiveU3Ek__BackingField_34(bool value)
	{
		___U3CIsActiveU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CIsFocusLockedU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878, ___U3CIsFocusLockedU3Ek__BackingField_35)); }
	inline bool get_U3CIsFocusLockedU3Ek__BackingField_35() const { return ___U3CIsFocusLockedU3Ek__BackingField_35; }
	inline bool* get_address_of_U3CIsFocusLockedU3Ek__BackingField_35() { return &___U3CIsFocusLockedU3Ek__BackingField_35; }
	inline void set_U3CIsFocusLockedU3Ek__BackingField_35(bool value)
	{
		___U3CIsFocusLockedU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878, ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_36)); }
	inline bool get_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_36() const { return ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_36; }
	inline bool* get_address_of_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_36() { return &___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_36; }
	inline void set_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_36(bool value)
	{
		___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_overrideGlobalPointerExtent_37() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878, ___overrideGlobalPointerExtent_37)); }
	inline bool get_overrideGlobalPointerExtent_37() const { return ___overrideGlobalPointerExtent_37; }
	inline bool* get_address_of_overrideGlobalPointerExtent_37() { return &___overrideGlobalPointerExtent_37; }
	inline void set_overrideGlobalPointerExtent_37(bool value)
	{
		___overrideGlobalPointerExtent_37 = value;
	}

	inline static int32_t get_offset_of_pointerExtent_38() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878, ___pointerExtent_38)); }
	inline float get_pointerExtent_38() const { return ___pointerExtent_38; }
	inline float* get_address_of_pointerExtent_38() { return &___pointerExtent_38; }
	inline void set_pointerExtent_38(float value)
	{
		___pointerExtent_38 = value;
	}

	inline static int32_t get_offset_of_defaultPointerExtent_39() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878, ___defaultPointerExtent_39)); }
	inline float get_defaultPointerExtent_39() const { return ___defaultPointerExtent_39; }
	inline float* get_address_of_defaultPointerExtent_39() { return &___defaultPointerExtent_39; }
	inline void set_defaultPointerExtent_39(float value)
	{
		___defaultPointerExtent_39 = value;
	}

	inline static int32_t get_offset_of_U3CRaysU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878, ___U3CRaysU3Ek__BackingField_40)); }
	inline RayStepU5BU5D_tC821C087287A98BA74889ED180CCF3A3E1198715* get_U3CRaysU3Ek__BackingField_40() const { return ___U3CRaysU3Ek__BackingField_40; }
	inline RayStepU5BU5D_tC821C087287A98BA74889ED180CCF3A3E1198715** get_address_of_U3CRaysU3Ek__BackingField_40() { return &___U3CRaysU3Ek__BackingField_40; }
	inline void set_U3CRaysU3Ek__BackingField_40(RayStepU5BU5D_tC821C087287A98BA74889ED180CCF3A3E1198715* value)
	{
		___U3CRaysU3Ek__BackingField_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRaysU3Ek__BackingField_40), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878, ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_41)); }
	inline LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* get_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_41() const { return ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_41; }
	inline LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D** get_address_of_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_41() { return &___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_41; }
	inline void set_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_41(LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* value)
	{
		___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_41), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFocusTargetU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878, ___U3CFocusTargetU3Ek__BackingField_42)); }
	inline RuntimeObject* get_U3CFocusTargetU3Ek__BackingField_42() const { return ___U3CFocusTargetU3Ek__BackingField_42; }
	inline RuntimeObject** get_address_of_U3CFocusTargetU3Ek__BackingField_42() { return &___U3CFocusTargetU3Ek__BackingField_42; }
	inline void set_U3CFocusTargetU3Ek__BackingField_42(RuntimeObject* value)
	{
		___U3CFocusTargetU3Ek__BackingField_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFocusTargetU3Ek__BackingField_42), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878, ___U3CResultU3Ek__BackingField_43)); }
	inline RuntimeObject* get_U3CResultU3Ek__BackingField_43() const { return ___U3CResultU3Ek__BackingField_43; }
	inline RuntimeObject** get_address_of_U3CResultU3Ek__BackingField_43() { return &___U3CResultU3Ek__BackingField_43; }
	inline void set_U3CResultU3Ek__BackingField_43(RuntimeObject* value)
	{
		___U3CResultU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultU3Ek__BackingField_43), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRayStabilizerU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878, ___U3CRayStabilizerU3Ek__BackingField_44)); }
	inline RuntimeObject* get_U3CRayStabilizerU3Ek__BackingField_44() const { return ___U3CRayStabilizerU3Ek__BackingField_44; }
	inline RuntimeObject** get_address_of_U3CRayStabilizerU3Ek__BackingField_44() { return &___U3CRayStabilizerU3Ek__BackingField_44; }
	inline void set_U3CRayStabilizerU3Ek__BackingField_44(RuntimeObject* value)
	{
		___U3CRayStabilizerU3Ek__BackingField_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRayStabilizerU3Ek__BackingField_44), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSceneQueryTypeU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878, ___U3CSceneQueryTypeU3Ek__BackingField_45)); }
	inline int32_t get_U3CSceneQueryTypeU3Ek__BackingField_45() const { return ___U3CSceneQueryTypeU3Ek__BackingField_45; }
	inline int32_t* get_address_of_U3CSceneQueryTypeU3Ek__BackingField_45() { return &___U3CSceneQueryTypeU3Ek__BackingField_45; }
	inline void set_U3CSceneQueryTypeU3Ek__BackingField_45(int32_t value)
	{
		___U3CSceneQueryTypeU3Ek__BackingField_45 = value;
	}

	inline static int32_t get_offset_of_sphereCastRadius_46() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878, ___sphereCastRadius_46)); }
	inline float get_sphereCastRadius_46() const { return ___sphereCastRadius_46; }
	inline float* get_address_of_sphereCastRadius_46() { return &___sphereCastRadius_46; }
	inline void set_sphereCastRadius_46(float value)
	{
		___sphereCastRadius_46 = value;
	}
};

struct BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::SetCursorPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___SetCursorPerfMarker_28;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::OnPostSceneQueryPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___OnPostSceneQueryPerfMarker_47;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::OnSourceLostPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___OnSourceLostPerfMarker_48;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::OnInputUpPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___OnInputUpPerfMarker_49;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::OnInputDownPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___OnInputDownPerfMarker_50;

public:
	inline static int32_t get_offset_of_SetCursorPerfMarker_28() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878_StaticFields, ___SetCursorPerfMarker_28)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_SetCursorPerfMarker_28() const { return ___SetCursorPerfMarker_28; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_SetCursorPerfMarker_28() { return &___SetCursorPerfMarker_28; }
	inline void set_SetCursorPerfMarker_28(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___SetCursorPerfMarker_28 = value;
	}

	inline static int32_t get_offset_of_OnPostSceneQueryPerfMarker_47() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878_StaticFields, ___OnPostSceneQueryPerfMarker_47)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_OnPostSceneQueryPerfMarker_47() const { return ___OnPostSceneQueryPerfMarker_47; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_OnPostSceneQueryPerfMarker_47() { return &___OnPostSceneQueryPerfMarker_47; }
	inline void set_OnPostSceneQueryPerfMarker_47(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___OnPostSceneQueryPerfMarker_47 = value;
	}

	inline static int32_t get_offset_of_OnSourceLostPerfMarker_48() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878_StaticFields, ___OnSourceLostPerfMarker_48)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_OnSourceLostPerfMarker_48() const { return ___OnSourceLostPerfMarker_48; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_OnSourceLostPerfMarker_48() { return &___OnSourceLostPerfMarker_48; }
	inline void set_OnSourceLostPerfMarker_48(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___OnSourceLostPerfMarker_48 = value;
	}

	inline static int32_t get_offset_of_OnInputUpPerfMarker_49() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878_StaticFields, ___OnInputUpPerfMarker_49)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_OnInputUpPerfMarker_49() const { return ___OnInputUpPerfMarker_49; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_OnInputUpPerfMarker_49() { return &___OnInputUpPerfMarker_49; }
	inline void set_OnInputUpPerfMarker_49(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___OnInputUpPerfMarker_49 = value;
	}

	inline static int32_t get_offset_of_OnInputDownPerfMarker_50() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878_StaticFields, ___OnInputDownPerfMarker_50)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_OnInputDownPerfMarker_50() const { return ___OnInputDownPerfMarker_50; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_OnInputDownPerfMarker_50() { return &___OnInputDownPerfMarker_50; }
	inline void set_OnInputDownPerfMarker_50(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___OnInputDownPerfMarker_50 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.LinePointer
struct LinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0  : public BaseControllerPointer_tD5ABFE2F89B93A43F27B893C8AD6FDBB3E396878
{
public:
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Input.LinePointer::LineColorSelected
	Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * ___LineColorSelected_51;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Input.LinePointer::LineColorValid
	Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * ___LineColorValid_52;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Input.LinePointer::LineColorInvalid
	Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * ___LineColorInvalid_53;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Input.LinePointer::LineColorNoTarget
	Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * ___LineColorNoTarget_54;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Input.LinePointer::LineColorLockFocus
	Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * ___LineColorLockFocus_55;
	// Microsoft.MixedReality.Toolkit.Utilities.BaseMixedRealityLineDataProvider Microsoft.MixedReality.Toolkit.Input.LinePointer::lineDataProvider
	BaseMixedRealityLineDataProvider_tAE52DB4AF0B2DF1AFFDBF395314F8113E2B4ACAB * ___lineDataProvider_56;
	// Microsoft.MixedReality.Toolkit.Utilities.BaseMixedRealityLineRenderer[] Microsoft.MixedReality.Toolkit.Input.LinePointer::lineRenderers
	BaseMixedRealityLineRendererU5BU5D_tB88B8BBE85BA03334EE92FB7FD092880CEDC44FE* ___lineRenderers_57;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.LinePointer::lineStartPoint
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lineStartPoint_58;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.LinePointer::lineEndPoint
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lineEndPoint_59;

public:
	inline static int32_t get_offset_of_LineColorSelected_51() { return static_cast<int32_t>(offsetof(LinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0, ___LineColorSelected_51)); }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * get_LineColorSelected_51() const { return ___LineColorSelected_51; }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A ** get_address_of_LineColorSelected_51() { return &___LineColorSelected_51; }
	inline void set_LineColorSelected_51(Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * value)
	{
		___LineColorSelected_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LineColorSelected_51), (void*)value);
	}

	inline static int32_t get_offset_of_LineColorValid_52() { return static_cast<int32_t>(offsetof(LinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0, ___LineColorValid_52)); }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * get_LineColorValid_52() const { return ___LineColorValid_52; }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A ** get_address_of_LineColorValid_52() { return &___LineColorValid_52; }
	inline void set_LineColorValid_52(Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * value)
	{
		___LineColorValid_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LineColorValid_52), (void*)value);
	}

	inline static int32_t get_offset_of_LineColorInvalid_53() { return static_cast<int32_t>(offsetof(LinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0, ___LineColorInvalid_53)); }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * get_LineColorInvalid_53() const { return ___LineColorInvalid_53; }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A ** get_address_of_LineColorInvalid_53() { return &___LineColorInvalid_53; }
	inline void set_LineColorInvalid_53(Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * value)
	{
		___LineColorInvalid_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LineColorInvalid_53), (void*)value);
	}

	inline static int32_t get_offset_of_LineColorNoTarget_54() { return static_cast<int32_t>(offsetof(LinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0, ___LineColorNoTarget_54)); }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * get_LineColorNoTarget_54() const { return ___LineColorNoTarget_54; }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A ** get_address_of_LineColorNoTarget_54() { return &___LineColorNoTarget_54; }
	inline void set_LineColorNoTarget_54(Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * value)
	{
		___LineColorNoTarget_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LineColorNoTarget_54), (void*)value);
	}

	inline static int32_t get_offset_of_LineColorLockFocus_55() { return static_cast<int32_t>(offsetof(LinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0, ___LineColorLockFocus_55)); }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * get_LineColorLockFocus_55() const { return ___LineColorLockFocus_55; }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A ** get_address_of_LineColorLockFocus_55() { return &___LineColorLockFocus_55; }
	inline void set_LineColorLockFocus_55(Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * value)
	{
		___LineColorLockFocus_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LineColorLockFocus_55), (void*)value);
	}

	inline static int32_t get_offset_of_lineDataProvider_56() { return static_cast<int32_t>(offsetof(LinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0, ___lineDataProvider_56)); }
	inline BaseMixedRealityLineDataProvider_tAE52DB4AF0B2DF1AFFDBF395314F8113E2B4ACAB * get_lineDataProvider_56() const { return ___lineDataProvider_56; }
	inline BaseMixedRealityLineDataProvider_tAE52DB4AF0B2DF1AFFDBF395314F8113E2B4ACAB ** get_address_of_lineDataProvider_56() { return &___lineDataProvider_56; }
	inline void set_lineDataProvider_56(BaseMixedRealityLineDataProvider_tAE52DB4AF0B2DF1AFFDBF395314F8113E2B4ACAB * value)
	{
		___lineDataProvider_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineDataProvider_56), (void*)value);
	}

	inline static int32_t get_offset_of_lineRenderers_57() { return static_cast<int32_t>(offsetof(LinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0, ___lineRenderers_57)); }
	inline BaseMixedRealityLineRendererU5BU5D_tB88B8BBE85BA03334EE92FB7FD092880CEDC44FE* get_lineRenderers_57() const { return ___lineRenderers_57; }
	inline BaseMixedRealityLineRendererU5BU5D_tB88B8BBE85BA03334EE92FB7FD092880CEDC44FE** get_address_of_lineRenderers_57() { return &___lineRenderers_57; }
	inline void set_lineRenderers_57(BaseMixedRealityLineRendererU5BU5D_tB88B8BBE85BA03334EE92FB7FD092880CEDC44FE* value)
	{
		___lineRenderers_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineRenderers_57), (void*)value);
	}

	inline static int32_t get_offset_of_lineStartPoint_58() { return static_cast<int32_t>(offsetof(LinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0, ___lineStartPoint_58)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_lineStartPoint_58() const { return ___lineStartPoint_58; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_lineStartPoint_58() { return &___lineStartPoint_58; }
	inline void set_lineStartPoint_58(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___lineStartPoint_58 = value;
	}

	inline static int32_t get_offset_of_lineEndPoint_59() { return static_cast<int32_t>(offsetof(LinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0, ___lineEndPoint_59)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_lineEndPoint_59() const { return ___lineEndPoint_59; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_lineEndPoint_59() { return &___lineEndPoint_59; }
	inline void set_lineEndPoint_59(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___lineEndPoint_59 = value;
	}
};

struct LinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.LinePointer::OnPreSceneQueryPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___OnPreSceneQueryPerfMarker_60;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.LinePointer::OnPostSceneQueryPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___OnPostSceneQueryPerfMarker_61;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.LinePointer::PreUpdateLineRenderersPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___PreUpdateLineRenderersPerfMarker_62;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.LinePointer::PostUpdateLineRenderersPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___PostUpdateLineRenderersPerfMarker_63;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.LinePointer::UpdateRaysPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateRaysPerfMarker_64;

public:
	inline static int32_t get_offset_of_OnPreSceneQueryPerfMarker_60() { return static_cast<int32_t>(offsetof(LinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0_StaticFields, ___OnPreSceneQueryPerfMarker_60)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_OnPreSceneQueryPerfMarker_60() const { return ___OnPreSceneQueryPerfMarker_60; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_OnPreSceneQueryPerfMarker_60() { return &___OnPreSceneQueryPerfMarker_60; }
	inline void set_OnPreSceneQueryPerfMarker_60(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___OnPreSceneQueryPerfMarker_60 = value;
	}

	inline static int32_t get_offset_of_OnPostSceneQueryPerfMarker_61() { return static_cast<int32_t>(offsetof(LinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0_StaticFields, ___OnPostSceneQueryPerfMarker_61)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_OnPostSceneQueryPerfMarker_61() const { return ___OnPostSceneQueryPerfMarker_61; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_OnPostSceneQueryPerfMarker_61() { return &___OnPostSceneQueryPerfMarker_61; }
	inline void set_OnPostSceneQueryPerfMarker_61(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___OnPostSceneQueryPerfMarker_61 = value;
	}

	inline static int32_t get_offset_of_PreUpdateLineRenderersPerfMarker_62() { return static_cast<int32_t>(offsetof(LinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0_StaticFields, ___PreUpdateLineRenderersPerfMarker_62)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_PreUpdateLineRenderersPerfMarker_62() const { return ___PreUpdateLineRenderersPerfMarker_62; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_PreUpdateLineRenderersPerfMarker_62() { return &___PreUpdateLineRenderersPerfMarker_62; }
	inline void set_PreUpdateLineRenderersPerfMarker_62(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___PreUpdateLineRenderersPerfMarker_62 = value;
	}

	inline static int32_t get_offset_of_PostUpdateLineRenderersPerfMarker_63() { return static_cast<int32_t>(offsetof(LinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0_StaticFields, ___PostUpdateLineRenderersPerfMarker_63)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_PostUpdateLineRenderersPerfMarker_63() const { return ___PostUpdateLineRenderersPerfMarker_63; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_PostUpdateLineRenderersPerfMarker_63() { return &___PostUpdateLineRenderersPerfMarker_63; }
	inline void set_PostUpdateLineRenderersPerfMarker_63(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___PostUpdateLineRenderersPerfMarker_63 = value;
	}

	inline static int32_t get_offset_of_UpdateRaysPerfMarker_64() { return static_cast<int32_t>(offsetof(LinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0_StaticFields, ___UpdateRaysPerfMarker_64)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateRaysPerfMarker_64() const { return ___UpdateRaysPerfMarker_64; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateRaysPerfMarker_64() { return &___UpdateRaysPerfMarker_64; }
	inline void set_UpdateRaysPerfMarker_64(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateRaysPerfMarker_64 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver[]
struct SolverU5BU5D_t6D0D5FF2BA7A73417C57F703565C10E0ECCD3329  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * m_Items[1];

public:
	inline Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  m_Items[1];

public:
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<!0> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50 * List_1_AsReadOnly_mA3A95833512F80018CC1A0B37766AEF91A1FD34B_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.CoreServices::GetInputSystemDataProvider<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CoreServices_GetInputSystemDataProvider_TisRuntimeObject_m0D92288EAC12D96D3C725A5FB289D02656E9EE03_gshared (const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponents_TisRuntimeObject_m1B7342AF989DE9DCE4CED42BF55A0AC6FFCBF6C6_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Intersect<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Intersect_TisRuntimeObject_m4D7F0556812B095D1D2C66EF2AF1EF98D6201333_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Union<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Union_TisRuntimeObject_m176BEF1318CEDA82CAC53F47013E273574719157_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<!!0> Microsoft.MixedReality.Toolkit.CollectionsExtensions::ToReadOnlyCollection<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50 * CollectionsExtensions_ToReadOnlyCollection_TisRuntimeObject_mADE87783A603D330F57E5406FC6FBB9431305E3B_gshared (RuntimeObject* ___elements0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// T Microsoft.MixedReality.Toolkit.Input.PointerUtils::GetPointer<System.Object>(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PointerUtils_GetPointer_TisRuntimeObject_mBD76BBCFA489C1F9EC8278A73CFED563D65A7D90_gshared (uint8_t ___handedness0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);

// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TransformTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * SolverHandler_get_TransformTarget_m34789672B6825F92BF6C982E9BBCB5D7D6ED4FBB (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalPosition_m181477018FB1D4AF5CF70436516CCC30CE14877E (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalRotation_m03C706FACD2E7E83220451B69BBB997D7FFC509B (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver__ctor_mA7C0EDFA6896365A1CBF28E995151F5E02A1CE3E (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_WorkingPosition_m37427593915BD327BD778F10D73F886FBDFC4EC6 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::GetDesiredOrientation_DistanceOnly(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_DistanceOnly_mCD21B8DDD3686E192E74FB9ED29EA4CAEDD59473 (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___desiredPos0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::GetDesiredOrientation(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_m1F6499701A37A65D153D85A0AB1CB53F3E8A3979 (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___desiredPos0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_UpReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_UpReference_mAB142E48D0F3E633E2B5D6393776DDCC2D68DBC7 (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_SolverReferenceDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_SolverReferenceDirection_mE12D876E014F4BF4CF26892BAF746A483D725035 (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forward0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upwards1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_ReferencePoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_ReferencePoint_m6FAAD1254ABAE9E9F32DE8EC519A19F82E2E23C3 (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_UseFixedVerticalPosition()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool RadialView_get_UseFixedVerticalPosition_mAE564460D7A4AB9EE031F84122686E138E2171DB_inline (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_FixedVerticalPosition()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float RadialView_get_FixedVerticalPosition_m37583CA426CBBF1211747DF5737707092CCC5250_inline (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Boolean System.Single::Equals(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7 (float* __this, float ___obj0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839 (float ___d0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Angle_m8911FFA1DD1C8C46D923B52645B352FA1521CD5F (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___from0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___to1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalPosition()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalPosition_m5102D634870888C102BF0CF6F68E5B0F9D8E3797_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_GoalPosition_mCA1EC96742B8D9B4D2C4DBE37D43A2FE633C9C6D_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalRotation()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SolverHandler_get_GoalRotation_m40B3BD4A339F646454157B696A10F34D43758F36_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_GoalRotation_mEE3895F3F4C9807CCACC45DCC3560A2809E2122D_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalScale()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalScale_m68C2A89EB3B566E14EAB67EDF2FCF8C139D15AA1_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_GoalScale_mF7B8DFF69E4BDBE3C58FB4C8329B177D735653AE_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_GoalPosition_m394D053AFC2F35C35F099B0114E9DA9222EE1264 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_get_GoalRotation_m2A68E785EFB8C49288970FE9D2535F8B2DE53938 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_GoalScale_m7C0ACE908663BD2F74F6CCF4B640EAF74A43056B (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalScale_mA6AE29743A6CDE257ED9F4A174D59F2F6D018FB6 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler>()
inline SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * Component_GetComponent_TisSolverHandler_t075811D0044ED96286DC029AD5537D75A007A167_mAE44FADD03F8FEE68CC0FBE9FCE9222ADE1E7B44 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::RegisterSolver(Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_RegisterSolver_m65EDEA901AFE897E19AF3E5326F8EDF2EAEFD090 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * ___solver0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::UnregisterSolver(Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_UnregisterSolver_m40C67B6576B3D06EC3902BE54E4C70433FC6B305 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * ___solver0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_DeltaTime()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float SolverHandler_get_DeltaTime_m28843D7B464589AA956BF5615647D34326EC115C_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingToGoal_mBC06E9FD394F45A784EAA67DC00002E3B6BB3A52 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingPosition_m575BC0FB62B8E0CD410FBB6F45B47ED6B3BAF6DC (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingRotation_m73388DCBA57188E64798CE8309F6362A080051F1 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingScale_mDCA2CC7892C7A1576C4ECA0124A7875736BCCD04 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___a0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SmoothTo(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_SmoothTo_m48CFC1287FD6DC1CB44CC393FD3B755837390E59 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___goal1, float ___deltaTime2, float ___lerpTime3, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SmoothTo(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_SmoothTo_m2C2EEE1EA524FDBD140BB4CD3C2B71864710D542 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___source0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___goal1, float ___deltaTime2, float ___lerpTime3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingPositionToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingPositionToGoal_m027244825EB87DCA8FC2D40F7361A573EC6F7563 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingRotationToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingRotationToGoal_mD8D4C3429B6162EA7D659CCD1F9C161CC71AA581 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingScaleToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingScaleToGoal_mCC945043190821332A05364F791966B962909D70 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_get_WorkingRotation_m6F1C52533CE353EA3D9C1B20215D77BC31FB27C2 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_WorkingScale_mDD2DD7A5D70B0FA888DE7D3FD3E0CBB776369A08 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsValidTrackedObjectType(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsValidTrackedObjectType_m9717B53DE05E69B90C63FCC17201D3205D21BA83 (int32_t ___type0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::RefreshTrackedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_RefreshTrackedObject_mDA868E45E4782D26CF6992309214847724473C4C (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsValidHandedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsValidHandedness_m40ED3F7CC29001302FA888923C0C2A4795CA6A8A (uint8_t ___hand0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedHandedness()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_TrackedHandedness_m31CB2BE6506E6CC855C9B606F267C9254CA0B0B4_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedHandedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedHandedness_m9EB0F052B9E69F3BB9E54B808D509FBBF3823B74 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<!0> System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::AsReadOnly()
inline ReadOnlyCollection_1_tC2B53DDDB28D93E1A8D52A093954124DD5E7C5E2 * List_1_AsReadOnly_m728335573FEB3134BC3487CA2A3AF964222665BD (List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2 * __this, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_tC2B53DDDB28D93E1A8D52A093954124DD5E7C5E2 * (*) (List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2 *, const RuntimeMethod*))List_1_AsReadOnly_mA3A95833512F80018CC1A0B37766AEF91A1FD34B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::Clear()
inline void List_1_Clear_mA2A6D866C608AFFA8663476EC564B6580E2F24C9 (List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2 *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m90E8446CBAF979C79C61A2777ADC1716C5D39393 (List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared)(__this, ___collection0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsInvalidTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsInvalidTracking_m3CE37227589915F5D74F5161DD726DE2AD9F4807 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.HandednessExtensions::IsLeft(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandednessExtensions_IsLeft_m946EC0863DC18E1FFE49583509A68D87BD0AB0BA (uint8_t ___current0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.HandednessExtensions::IsRight(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandednessExtensions_IsRight_m8F33E1E8FA84009E617C4260B607170E326FEAC7 (uint8_t ___current0, const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.CoreServices::GetInputSystemDataProvider<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService>()
inline RuntimeObject* CoreServices_GetInputSystemDataProvider_TisIMixedRealityHandJointService_tF7D229F0BD919C8709872CF57D273F17E85CC0B6_m297655E591D62B290EF0E6CED306F34506EFAB8A (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))CoreServices_GetInputSystemDataProvider_TisRuntimeObject_m0D92288EAC12D96D3C725A5FB289D02656E9EE03_gshared)(method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::.ctor(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed__ctor_m063602B9E7CEB2BDBE2E56851FFD03A239087E14 (Vector3Smoothed_t1A35366991A6CB8D3A2FB1AC19520B9F1EEBE656 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, float ___smoothingTime1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_AltScale(Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_AltScale_m9C2C220DC94C9A60575F81DEB51F4C8D26CD1F62_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, Vector3Smoothed_t1A35366991A6CB8D3A2FB1AC19520B9F1EEBE656  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_DeltaTime(System.Single)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_DeltaTime_m0087F3F9A92DA982927C5D81576A26ECD3CA3696_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedTargetType(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedTargetType_m67B5A38431DDCACF054A1EE501C1DB7ACCF2C0F4 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponents<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>()
inline SolverU5BU5D_t6D0D5FF2BA7A73417C57F703565C10E0ECCD3329* Component_GetComponents_TisSolver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA_mF0952A0907F7528AC813F0C40F1DBD8C4F05328F (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  SolverU5BU5D_t6D0D5FF2BA7A73417C57F703565C10E0ECCD3329* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_m1B7342AF989DE9DCE4CED42BF55A0AC6FFCBF6C6_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Intersect<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject* Enumerable_Intersect_TisSolver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA_m7109401B942D63F7CF29FF4B9D90F56D78F8E29D (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Intersect_TisRuntimeObject_m4D7F0556812B095D1D2C66EF2AF1EF98D6201333_gshared)(___first0, ___second1, method);
}
// System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver> Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_Solvers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SolverHandler_get_Solvers_mEC87829E9EC0EA90A66888F7B7C03A2E93931DFA (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Union<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject* Enumerable_Union_TisSolver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA_m7D30E36E3551057C187A9F484FA6B43F13FBF050 (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Union_TisRuntimeObject_m176BEF1318CEDA82CAC53F47013E273574719157_gshared)(___first0, ___second1, method);
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<!!0> Microsoft.MixedReality.Toolkit.CollectionsExtensions::ToReadOnlyCollection<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>(System.Collections.Generic.IEnumerable`1<!!0>)
inline ReadOnlyCollection_1_tC2B53DDDB28D93E1A8D52A093954124DD5E7C5E2 * CollectionsExtensions_ToReadOnlyCollection_TisSolver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA_mA4FCE36F856E036DC2DB4F6D01B11E0F34FA1FC9 (RuntimeObject* ___elements0, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_tC2B53DDDB28D93E1A8D52A093954124DD5E7C5E2 * (*) (RuntimeObject*, const RuntimeMethod*))CollectionsExtensions_ToReadOnlyCollection_TisRuntimeObject_mADE87783A603D330F57E5406FC6FBB9431305E3B_gshared)(___elements0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_Solvers(System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_Solvers_mF53F9AFBB3D7814A84106CDC2A1849C663041D3C (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_UpdateSolvers()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SolverHandler_get_UpdateSolvers_m8D19B78489FC5D19E88397BD2CB01E8725560219_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::get_Item(System.Int32)
inline Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * List_1_get_Item_m45E05148CA6342157F24BF07D5AAD8864F0FC2BC_inline (List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * (*) (List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SolverUpdateEntry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_SolverUpdateEntry_m03B1AAD3CB46472DB55E7D008A38E5A8FED4CBBA (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::get_Count()
inline int32_t List_1_get_Count_mD0352A2C2F0E13994ACDE2AE6EB3A3414FBC1CE7_inline (List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::Contains(!0)
inline bool List_1_Contains_m8018A11BFA7FD65F838DA368052C4FC76EEAD101 (List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2 * __this, Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2 *, Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA *, const RuntimeMethod*))List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::Add(!0)
inline void List_1_Add_m4C86FC11FC665E227E594B0EC27C8CC1D704704F (List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2 * __this, Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2 *, Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::Remove(!0)
inline bool List_1_Remove_m13B9DB64A4BD24C01A7E456C7C9A3825EAA21F69 (List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2 * __this, Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2 *, Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA *, const RuntimeMethod*))List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedTargetType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedTargetType_mDBBC1FF4E55E543CAB6472AA1B9EE46708BFB75D_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * CameraCache_get_Main_m7E8C960AE7377D88571B34D5FC306D9F3F8108BA (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_PreferredTrackedHandedness()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_PreferredTrackedHandedness_mC7D96C214939B94DF348662E580BFF9EDEFC04D1_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method);
// T Microsoft.MixedReality.Toolkit.Input.PointerUtils::GetPointer<Microsoft.MixedReality.Toolkit.Input.LinePointer>(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
inline LinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0 * PointerUtils_GetPointer_TisLinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0_mB31DBF5B34B2078856C73866757431D9873F1347 (uint8_t ___handedness0, const RuntimeMethod* method)
{
	return ((  LinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0 * (*) (uint8_t, const RuntimeMethod*))PointerUtils_GetPointer_TisRuntimeObject_mBD76BBCFA489C1F9EC8278A73CFED563D65A7D90_gshared)(___handedness0, method);
}
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.HandednessExtensions::GetOppositeHandedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t HandednessExtensions_GetOppositeHandedness_m5B656328579F88BBBDDCC372BAD3297BDA134B23 (uint8_t ___current0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_HandJointService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SolverHandler_get_HandJointService_m96674C6CAB2F50D33CF592DFBE6E79A1C4E01B12 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedHandJoint()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedHandJoint_m006DC3C432A40EF9341030504844805B0A6C8F58_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::TrackTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_TrackTransform_mDA30174893E2C3E1F8C464114B0151026F54CABE (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mB0B45A19A5871EF407D7B09E0EB76003496BA4F0 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AdditionalOffset()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalOffset_m8DAC4002CC1E9D3B7A4010F2BCBE0A8071239575_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AdditionalRotation()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalRotation_mB59E20825CC961F6FB4DD99AA6862DF999AD7FFF_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___euler0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::get_IsTracked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ControllerPoseSynchronizer_get_IsTracked_m5D23489B3214AD35424F878CDF895CCE08ECCBAC (ControllerPoseSynchronizer_t0F46D842A5E324732465481B59A9615ADB6F9C0F * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.HandednessExtensions::IsNone(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandednessExtensions_IsNone_m61C0DAD3517AFFF65D6FD94CB66F15AE2A2E8F38 (uint8_t ___current0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::.ctor()
inline void List_1__ctor_mC011A6791D0183C3059D24C5C3841BB38C34CD70 (List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SurfaceMagnetism_get_RaycastOrigin_m7E406FCE166669C77E36342DC172E66874CA0940 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/RaycastDirectionMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_CurrentRaycastDirectionMode()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentRaycastDirectionMode_m251616578EC68B653AE610BB2C6C14429BF4661F_inline (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SurfaceMagnetism_get_RaycastEndPoint_mFD4351223905C0F251B85284C9AC9658BE907E1A (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AltScale()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3Smoothed_t1A35366991A6CB8D3A2FB1AC19520B9F1EEBE656  SolverHandler_get_AltScale_m7640A53A763EF60957AD2FB75B5E3280EA6FA47D_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::get_Current()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3Smoothed_get_Current_m849BB7F2EC08EFB2C716CEBC38B8915EDAB82ABC_inline (Vector3Smoothed_t1A35366991A6CB8D3A2FB1AC19520B9F1EEBE656 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_KeepOrientationVertical()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_KeepOrientationVertical_m4052B2E3AFFB0A91707C12EDC0E63BD4C3A51A39_inline (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_FromToRotation_m9FEC4227991508EC27E2C3664AC7DDD4E69BA9BB (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___fromDirection0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___toDirection1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___lhs0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rhs1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/OrientationMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_CurrentOrientationMode()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentOrientationMode_m51A3F7D9C28941D5887DB884B5C1C12A0C343CEA_inline (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.RayStep::UpdateRayStep(UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayStep_UpdateRayStep_m117EC93764AE04F88839E2E0843AB752E8DEA04C (RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___terminus1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Direction()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RayStep_get_Direction_m8250D5F0B337508C3296A13785DA7145C6F00218_inline (RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_DebugEnabled()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_DebugEnabled_mF3A383A6D9DEC3040F691D8B4597775582D5E5C2_inline (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Origin()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RayStep_get_Origin_m1E79D7F702D7F081F045D5748DB3B0BA253E1B03_inline (RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Terminus()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RayStep_get_Terminus_m60FBD17F4BAD18A4D62D004D47E5BBC01C5EE368_inline (RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_magenta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_magenta_m04E2DDB63AA6288C701A93E248643A06EBD2D7AD (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___start0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___end1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color2, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastMode()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_RaycastMode_mE4FAAD8468A7654CFBFFD9185F3EA88172C68911_inline (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::SimpleRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_SimpleRaycastStepUpdate_mCB659570ECD9B53D8F1033FB467A9337ED801F03 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * ___rayStep0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::BoxRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_BoxRaycastStepUpdate_mDA6B670B927BCE8FE97B5DE2F77F81F7783C9DAF (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * ___rayStep0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::SphereRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_SphereRaycastStepUpdate_m81C7BB2E29C0482415CAB36DF4F83745C7166233 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * ___rayStep0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_UpdateSolvers(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_UpdateSolvers_m30F1B914ECC35FD7605652B350A70805B2D0D140_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Physics.MixedRealityRaycaster::RaycastSimplePhysicsStep(Microsoft.MixedReality.Toolkit.Physics.RayStep,System.Single,UnityEngine.LayerMask[],System.Boolean,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityRaycaster_RaycastSimplePhysicsStep_m035F875D7ECC5B82498C66E4561CA28B530F1FC0 (RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862  ___step0, float ___maxDistance1, LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___prioritizedLayerMasks2, bool ___focusIndividualCompoundCollider3, RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * ___physicsHit4, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_OnSurface(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OnSurface_m55D6EDB03DD38C3C40C959266D103699F9BB1363_inline (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001 (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RaycastHit::set_point(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHit_set_point_mCB652835DA3A0AED8A8574B4A47FD9BF8F9A4191 (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94 (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::CalculateMagnetismOrientation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SurfaceMagnetism_CalculateMagnetismOrientation_mF4062942F4A2FEC9C93202C4C84B2C40923638ED (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___surfaceNormal1, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_ScaleOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_ScaleOverride_m1F277829F04AF868E4212C38EF84F3DF0A550E7B (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Physics.MixedRealityRaycaster::RaycastSpherePhysicsStep(Microsoft.MixedReality.Toolkit.Physics.RayStep,System.Single,System.Single,UnityEngine.LayerMask[],System.Boolean,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityRaycaster_RaycastSpherePhysicsStep_m8E60E79FC8AB4D75E705DE6B368CCF3C811EA19D (RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862  ___step0, float ___radius1, float ___maxDistance2, LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___prioritizedLayerMasks3, bool ___focusIndividualCompoundCollider4, RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * ___physicsHit5, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pos0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___q1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___s2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * Component_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_m81892AA8DC35D8BB06288E5A4C16CF366174953E (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BoxCollider_get_size_m1C7DA815D3BA9DDB3D92A58BEEFE2FCBA5206FE2 (BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Physics.MixedRealityRaycaster::RaycastBoxPhysicsStep(Microsoft.MixedReality.Toolkit.Physics.RayStep,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Matrix4x4,System.Single,UnityEngine.LayerMask[],System.Int32,System.Boolean,System.Boolean,UnityEngine.Vector3[]&,UnityEngine.Vector3[]&,System.Boolean[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityRaycaster_RaycastBoxPhysicsStep_mB2301B854D4450745C2CF99BA05897FE7279C398 (RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862  ___step0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___extents1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___targetPosition2, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___matrix3, float ___maxDistance4, LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___prioritizedLayerMasks5, int32_t ___raysPerEdge6, bool ___isOrthographic7, bool ___focusIndividualCompoundCollider8, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** ___points9, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** ___normals10, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040** ___hits11, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::FindPlacementPlane(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3[],UnityEngine.Vector3[],System.Boolean[],System.Single,System.Single,System.Boolean,System.Boolean,UnityEngine.Plane&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_FindPlacementPlane_m4DDBECFFC7244A476911D23B48E5AB769803CF5C (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction1, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___positions2, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___normals3, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ___hits4, float ___assetWidth5, float ___maxNormalVariance6, bool ___constrainVertical7, bool ___useClosestDistance8, Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * ___plane9, float* ___closestDistance10, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Plane_get_normal_m203D43F51C449990214D04F332E8261295162E84 (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::IsNormalVertical(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_IsNormalVertical_mBE0147F050C5E31998817DA117425FE1AA55CB8F (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normal0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Matrix4x4_MultiplyVector_mFED70C58FB201633483463CE64DBF0D0BE081863 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vector0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_m6535EAD5E675627C2533962F1F7890CBFA2BA44A (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___inNormal0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___inPoint1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_green_mD53D8F980E92A0755759FBB2981E3DDEFCD084C0 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_blue_m5449DCBB31EEB2324489989754C00123982EBABA (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_cyan_m4E9C84C7E1003311C2D4BDB281F2D11DF5F7FDE2 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_m0D11229E8004FAAE411E457CD7DB316DEF6F9DE3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___start0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___dir1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color2, const RuntimeMethod* method);
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plane_Raycast_m04E61D7C78A5DA70F4F73F9805ABB54177B799A9 (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * __this, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___ray0, float* ___enter1, const RuntimeMethod* method);
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  LayerMask_op_Implicit_m3F256A7D96C66548F5B62C4621B9725301850300 (int32_t ___intVal0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  Collider_get_bounds_mD3CB68E38FB998406193A88D18C01F510272058A (Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Bounds_get_extents_mBA4B2196036DD5A858BDAD53BC71A778B41841C9 (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_Start_m667FE1B37A72CC2D586E88025E9E52681E010409 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Physics::SyncTransforms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics_SyncTransforms_mCC0AB451C1384416298E5FAEF4E818503929AE58 (const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_m6491D9EA75F68B1F8AE15A9B4F193FFB9352B901 (String_t* ___layerName0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_AutoStart()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool TapToPlace_get_AutoStart_mFB07CEFD849851649541B54B5530FD245AF32C8C_inline (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::StartPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_StartPlacement_m5E3F040F4CDC32D685F4BE17528097435DCD0A6C (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m37F8BF26FAFB4976BAAD92492214E58DC868DC27 (const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_IsBeingPlaced()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool TapToPlace_get_IsBeingPlaced_m378CB677F72E25C93E5B43CDAFB00BCE2D380844_inline (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_GameObjectLayer(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TapToPlace_set_GameObjectLayer_mD0BEF54A6CFF41AE952A21F3F102548A09E10974_inline (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_IsBeingPlaced(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TapToPlace_set_IsBeingPlaced_mD532A8660961BCD99432C3577378532D24F76034_inline (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_OnPlacingStarted()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * TapToPlace_get_OnPlacingStarted_m9B1A9AAFCF25CBB02576510CADF49676FEC83A99_inline (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325 (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_GameObjectLayer()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t TapToPlace_get_GameObjectLayer_mC4984D3CA437DC807C7F6AC710E8C9AF455DC4F5_inline (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method);
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_OnPlacingStopped()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * TapToPlace_get_OnPlacingStopped_m53FFA8A3BE933285B1975950E864111A5184D4A7_inline (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_MaxRaycastDistance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float TapToPlace_get_MaxRaycastDistance_m357D3DEC9B2141DFB1150D75130452B32A0C53D9_inline (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method);
// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_MagneticSurfaces()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* TapToPlace_get_MagneticSurfaces_m38E82447D7C6018A7C0519672295F7173CF4DE57_inline (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_UseDefaultSurfaceNormalOffset()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool TapToPlace_get_UseDefaultSurfaceNormalOffset_m8FBBF7F8AFFC831780D4C6D109380E70FA372BE5_inline (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_SurfaceNormalOffset()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float TapToPlace_get_SurfaceNormalOffset_m3BD1BB01D35B9AE2ECB26D865FA4AF8781E7F57D_inline (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_defaultSurfaceNormalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TapToPlace_get_defaultSurfaceNormalOffset_m3B7B2FD2D570E38FCDE6D121A5AEB9ED39523BDA (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_DefaultPlacementDistance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float TapToPlace_get_DefaultPlacementDistance_mA896B600DEE2C8D96BACDDFCB39627A43B3993A3_inline (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_KeepOrientationVertical()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool TapToPlace_get_KeepOrientationVertical_mD803ECB5E181CC6200AB867677172886556858E9_inline (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::StopPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_StopPlacement_m9DF16CBC0C31E25AB0910DAD84AFAC3657BB409E (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m2F8C02F28E289CA65598FF4FA8EAB84D955FF028 (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m0C42B64571CE92A738AD7BB82388CE12FBE7457C (float ___f0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_m0230CCC7CC9266F18125D9425C38A25D1CA4275B (float ___f0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Overlap::SolverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Overlap_SolverUpdate_m86D0EFD7920E25601EDEEDAE609ED78413351840 (Overlap_t51F3560DB117AF00D0753CF0682C6C85B847C63B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Overlap_SolverUpdate_m86D0EFD7920E25601EDEEDAE609ED78413351840_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	{
		// var target = SolverHandler.TransformTarget;
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_0 = ((Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m34789672B6825F92BF6C982E9BBCB5D7D6ED4FBB(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (target != null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// GoalPosition = target.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = V_0;
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m181477018FB1D4AF5CF70436516CCC30CE14877E(__this, L_5, /*hidden argument*/NULL);
		// GoalRotation = target.rotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = V_0;
		NullCheck(L_6);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_6, /*hidden argument*/NULL);
		Solver_set_GoalRotation_m03C706FACD2E7E83220451B69BBB997D7FFC509B(__this, L_7, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Overlap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Overlap__ctor_mA3B089B1297FE0AC91EF44AAE9F66B5936544025 (Overlap_t51F3560DB117AF00D0753CF0682C6C85B847C63B * __this, const RuntimeMethod* method)
{
	{
		Solver__ctor_mA7C0EDFA6896365A1CBF28E995151F5E02A1CE3E(__this, /*hidden argument*/NULL);
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
// Microsoft.MixedReality.Toolkit.Utilities.RadialViewReferenceDirection Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_ReferenceDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RadialView_get_ReferenceDirection_m8E4E194C75240A831B67E3F2EA7A68BEA1CE26B0 (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, const RuntimeMethod* method)
{
	{
		// get => referenceDirection;
		int32_t L_0 = __this->get_referenceDirection_13();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_ReferenceDirection(Microsoft.MixedReality.Toolkit.Utilities.RadialViewReferenceDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_ReferenceDirection_mC4420CC00414CA962C4AF87E4BFA1A9FABC128E0 (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => referenceDirection = value;
		int32_t L_0 = ___value0;
		__this->set_referenceDirection_13(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_MinDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_MinDistance_m827FC9CF225F2D8C60E20EE641D65D41FD4FBE94 (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, const RuntimeMethod* method)
{
	{
		// get => minDistance;
		float L_0 = __this->get_minDistance_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_MinDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_MinDistance_m0F59F9AE4B9CAEDADB708EDDF182C163B3C986D8 (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => minDistance = value;
		float L_0 = ___value0;
		__this->set_minDistance_14(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_MaxDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_MaxDistance_m431FB56BE9033BB6A6DB097AF93C9B6B0CF86390 (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, const RuntimeMethod* method)
{
	{
		// get => maxDistance;
		float L_0 = __this->get_maxDistance_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_MaxDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_MaxDistance_mBD79EA4647CB89C36F885708A0400F597CC6250D (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => maxDistance = value;
		float L_0 = ___value0;
		__this->set_maxDistance_15(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_MinViewDegrees()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_MinViewDegrees_m779A84FD718E6904693B2A1D0877112922483718 (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, const RuntimeMethod* method)
{
	{
		// get => minViewDegrees;
		float L_0 = __this->get_minViewDegrees_16();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_MinViewDegrees(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_MinViewDegrees_m76A81E9CABAEC0CE4D395C1234AF37DE07E0340C (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => minViewDegrees = value;
		float L_0 = ___value0;
		__this->set_minViewDegrees_16(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_MaxViewDegrees()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_MaxViewDegrees_m77B73E40F4DF02B484404273F516A945297E5AC2 (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, const RuntimeMethod* method)
{
	{
		// get => maxViewDegrees;
		float L_0 = __this->get_maxViewDegrees_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_MaxViewDegrees(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_MaxViewDegrees_mF3D1CD01BFD9C6B1789D1ED6D4082FAB7790A49A (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => maxViewDegrees = value;
		float L_0 = ___value0;
		__this->set_maxViewDegrees_17(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_AspectV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_AspectV_mFAD9C528ECB4CF9BBE6BAEB0738CE98698B5B94C (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, const RuntimeMethod* method)
{
	{
		// get => aspectV;
		float L_0 = __this->get_aspectV_18();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_AspectV(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_AspectV_m322C162833D0D787BDF07BA75C996794239FE5C0 (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => aspectV = value;
		float L_0 = ___value0;
		__this->set_aspectV_18(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_IgnoreAngleClamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RadialView_get_IgnoreAngleClamp_m9A93DE8E6CDFFF3D59F306CE1506A67EB68F5AF9 (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, const RuntimeMethod* method)
{
	{
		// get => ignoreAngleClamp;
		bool L_0 = __this->get_ignoreAngleClamp_19();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_IgnoreAngleClamp(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_IgnoreAngleClamp_m9165E38B48C33B425948B615E946001004807EE6 (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => ignoreAngleClamp = value;
		bool L_0 = ___value0;
		__this->set_ignoreAngleClamp_19(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_IgnoreDistanceClamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RadialView_get_IgnoreDistanceClamp_mD0C7DDD2ED8EE12B86EC29A57CFBD124DB7F9095 (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, const RuntimeMethod* method)
{
	{
		// get => ignoreDistanceClamp;
		bool L_0 = __this->get_ignoreDistanceClamp_20();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_IgnoreDistanceClamp(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_IgnoreDistanceClamp_mF748F707A4F1A4AED34B250306BB3F62682B8E5B (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => ignoreDistanceClamp = value;
		bool L_0 = ___value0;
		__this->set_ignoreDistanceClamp_20(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_UseFixedVerticalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RadialView_get_UseFixedVerticalPosition_mAE564460D7A4AB9EE031F84122686E138E2171DB (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, const RuntimeMethod* method)
{
	{
		// get => useFixedVerticalPosition;
		bool L_0 = __this->get_useFixedVerticalPosition_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_UseFixedVerticalPosition(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_UseFixedVerticalPosition_m9C7A3DB3146E2619E6C903C989AC702D435736A2 (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => useFixedVerticalPosition = value;
		bool L_0 = ___value0;
		__this->set_useFixedVerticalPosition_21(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_FixedVerticalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_FixedVerticalPosition_m37583CA426CBBF1211747DF5737707092CCC5250 (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, const RuntimeMethod* method)
{
	{
		// get => fixedVerticalPosition;
		float L_0 = __this->get_fixedVerticalPosition_22();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_FixedVerticalPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_FixedVerticalPosition_mC65DBEF580E6F859940C2D85CA2C32B6590B8241 (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => fixedVerticalPosition = value;
		float L_0 = ___value0;
		__this->set_fixedVerticalPosition_22(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_OrientToReferenceDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RadialView_get_OrientToReferenceDirection_m04959DFFD9BB5DBB61A3B82C3271DA03288110B5 (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, const RuntimeMethod* method)
{
	{
		// get => orientToReferenceDirection;
		bool L_0 = __this->get_orientToReferenceDirection_23();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_OrientToReferenceDirection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_OrientToReferenceDirection_m50D498B01B71AA196FC5AAA9C1EB343CF2958662 (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => orientToReferenceDirection = value;
		bool L_0 = ___value0;
		__this->set_orientToReferenceDirection_23(L_0);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_SolverReferenceDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_SolverReferenceDirection_mE12D876E014F4BF4CF26892BAF746A483D725035 (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_get_SolverReferenceDirection_mE12D876E014F4BF4CF26892BAF746A483D725035_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 SolverReferenceDirection => SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.forward : Vector3.forward;
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_0 = ((Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m34789672B6825F92BF6C982E9BBCB5D7D6ED4FBB(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		return L_3;
	}

IL_0019:
	{
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_4 = ((Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA *)__this)->get_SolverHandler_12();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = SolverHandler_get_TransformTarget_m34789672B6825F92BF6C982E9BBCB5D7D6ED4FBB(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_UpReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_UpReference_mAB142E48D0F3E633E2B5D6393776DDCC2D68DBC7 (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_get_UpReference_mAB142E48D0F3E633E2B5D6393776DDCC2D68DBC7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		// Vector3 upReference = Vector3.up;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (referenceDirection == RadialViewReferenceDirection.ObjectOriented)
		int32_t L_1 = __this->get_referenceDirection_13();
		if (L_1)
		{
			goto IL_0039;
		}
	}
	{
		// upReference = SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.up : Vector3.up;
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_2 = ((Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA *)__this)->get_SolverHandler_12();
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = SolverHandler_get_TransformTarget_m34789672B6825F92BF6C982E9BBCB5D7D6ED4FBB(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		G_B4_0 = L_5;
		goto IL_0038;
	}

IL_0028:
	{
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_6 = ((Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA *)__this)->get_SolverHandler_12();
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = SolverHandler_get_TransformTarget_m34789672B6825F92BF6C982E9BBCB5D7D6ED4FBB(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_7, /*hidden argument*/NULL);
		G_B4_0 = L_8;
	}

IL_0038:
	{
		V_0 = G_B4_0;
	}

IL_0039:
	{
		// return upReference;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_0;
		return L_9;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_ReferencePoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_ReferencePoint_m6FAAD1254ABAE9E9F32DE8EC519A19F82E2E23C3 (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_get_ReferencePoint_m6FAAD1254ABAE9E9F32DE8EC519A19F82E2E23C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 ReferencePoint => SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.position : Vector3.zero;
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_0 = ((Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m34789672B6825F92BF6C982E9BBCB5D7D6ED4FBB(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		return L_3;
	}

IL_0019:
	{
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_4 = ((Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA *)__this)->get_SolverHandler_12();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = SolverHandler_get_TransformTarget_m34789672B6825F92BF6C982E9BBCB5D7D6ED4FBB(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::SolverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_SolverUpdate_mE946A7456876810FAEDAE12A76677DDF43419776 (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_SolverUpdate_mE946A7456876810FAEDAE12A76677DDF43419776_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		// Vector3 goalPosition = WorkingPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Solver_get_WorkingPosition_m37427593915BD327BD778F10D73F886FBDFC4EC6(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (ignoreAngleClamp)
		bool L_1 = __this->get_ignoreAngleClamp_19();
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		// if (ignoreDistanceClamp)
		bool L_2 = __this->get_ignoreDistanceClamp_20();
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// goalPosition = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// }
		goto IL_0037;
	}

IL_0025:
	{
		// GetDesiredOrientation_DistanceOnly(ref goalPosition);
		RadialView_GetDesiredOrientation_DistanceOnly_mCD21B8DDD3686E192E74FB9ED29EA4CAEDD59473(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		// }
		goto IL_0037;
	}

IL_002f:
	{
		// GetDesiredOrientation(ref goalPosition);
		RadialView_GetDesiredOrientation_m1F6499701A37A65D153D85A0AB1CB53F3E8A3979(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
	}

IL_0037:
	{
		// Vector3 refDirUp = UpReference;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = RadialView_get_UpReference_mAB142E48D0F3E633E2B5D6393776DDCC2D68DBC7(__this, /*hidden argument*/NULL);
		V_1 = L_5;
		// if (orientToReferenceDirection)
		bool L_6 = __this->get_orientToReferenceDirection_23();
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		// goalRotation = Quaternion.LookRotation(SolverReferenceDirection, refDirUp);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = RadialView_get_SolverReferenceDirection_mE12D876E014F4BF4CF26892BAF746A483D725035(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_9 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_7, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		// }
		goto IL_0068;
	}

IL_0055:
	{
		// goalRotation = Quaternion.LookRotation(goalPosition - ReferencePoint, refDirUp);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = RadialView_get_ReferencePoint_m6FAAD1254ABAE9E9F32DE8EC519A19F82E2E23C3(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_10, L_11, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_12, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
	}

IL_0068:
	{
		// if (referenceDirection == RadialViewReferenceDirection.GravityAligned)
		int32_t L_15 = __this->get_referenceDirection_13();
		if ((!(((uint32_t)L_15) == ((uint32_t)2))))
		{
			goto IL_0087;
		}
	}
	{
		// goalRotation.x = goalRotation.z = 0f;
		float L_16 = (0.0f);
		V_3 = L_16;
		(&V_2)->set_z_2(L_16);
		float L_17 = V_3;
		(&V_2)->set_x_0(L_17);
	}

IL_0087:
	{
		// if (UseFixedVerticalPosition)
		bool L_18 = RadialView_get_UseFixedVerticalPosition_mAE564460D7A4AB9EE031F84122686E138E2171DB_inline(__this, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00a8;
		}
	}
	{
		// goalPosition.y = ReferencePoint.y + FixedVerticalPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = RadialView_get_ReferencePoint_m6FAAD1254ABAE9E9F32DE8EC519A19F82E2E23C3(__this, /*hidden argument*/NULL);
		float L_20 = L_19.get_y_3();
		float L_21 = RadialView_get_FixedVerticalPosition_m37583CA426CBBF1211747DF5737707092CCC5250_inline(__this, /*hidden argument*/NULL);
		(&V_0)->set_y_3(((float)il2cpp_codegen_add((float)L_20, (float)L_21)));
	}

IL_00a8:
	{
		// GoalPosition = goalPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = V_0;
		Solver_set_GoalPosition_m181477018FB1D4AF5CF70436516CCC30CE14877E(__this, L_22, /*hidden argument*/NULL);
		// GoalRotation = goalRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_23 = V_2;
		Solver_set_GoalRotation_m03C706FACD2E7E83220451B69BBB997D7FFC509B(__this, L_23, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::GetDesiredOrientation_DistanceOnly(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_DistanceOnly_mCD21B8DDD3686E192E74FB9ED29EA4CAEDD59473 (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___desiredPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_GetDesiredOrientation_DistanceOnly_mCD21B8DDD3686E192E74FB9ED29EA4CAEDD59473_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// Vector3 refPoint = ReferencePoint;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = RadialView_get_ReferencePoint_m6FAAD1254ABAE9E9F32DE8EC519A19F82E2E23C3(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// Vector3 elementPoint = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		// Vector3 elementDelta = elementPoint - refPoint;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// float elementDist = elementDelta.magnitude;
		float L_5 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_5;
		// Vector3 elementDir = elementDist > 0 ? elementDelta / elementDist : Vector3.one;
		float L_6 = V_2;
		if ((((float)L_6) > ((float)(0.0f))))
		{
			goto IL_0030;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		G_B3_0 = L_7;
		goto IL_0037;
	}

IL_0030:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = V_1;
		float L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_8, L_9, /*hidden argument*/NULL);
		G_B3_0 = L_10;
	}

IL_0037:
	{
		V_3 = G_B3_0;
		// float clampedDistance = Mathf.Clamp(elementDist, minDistance, maxDistance);
		float L_11 = V_2;
		float L_12 = __this->get_minDistance_14();
		float L_13 = __this->get_maxDistance_15();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_14 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_11, L_12, L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		// if (!clampedDistance.Equals(elementDist))
		float L_15 = V_2;
		bool L_16 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&V_4), L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_006a;
		}
	}
	{
		// desiredPos = refPoint + clampedDistance * elementDir;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_17 = ___desiredPos0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = V_0;
		float L_19 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_19, L_20, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_18, L_21, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_17 = L_22;
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::GetDesiredOrientation(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_m1F6499701A37A65D153D85A0AB1CB53F3E8A3979 (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___desiredPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_GetDesiredOrientation_m1F6499701A37A65D153D85A0AB1CB53F3E8A3979_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	float G_B5_0 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	{
		// Vector3 direction = SolverReferenceDirection;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = RadialView_get_SolverReferenceDirection_mE12D876E014F4BF4CF26892BAF746A483D725035(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// Vector3 upDirection = UpReference;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = RadialView_get_UpReference_mAB142E48D0F3E633E2B5D6393776DDCC2D68DBC7(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		// Vector3 referencePoint = ReferencePoint;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = RadialView_get_ReferencePoint_m6FAAD1254ABAE9E9F32DE8EC519A19F82E2E23C3(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		// Vector3 elementPoint = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		// Vector3 elementDelta = elementPoint - referencePoint;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_4, L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		// float elementDist = elementDelta.magnitude;
		float L_7 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_3), /*hidden argument*/NULL);
		V_4 = L_7;
		// Vector3 elementDir = elementDist > 0 ? elementDelta / elementDist : Vector3.one;
		float L_8 = V_4;
		if ((((float)L_8) > ((float)(0.0f))))
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		G_B3_0 = L_9;
		goto IL_0048;
	}

IL_0040:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_3;
		float L_11 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_10, L_11, /*hidden argument*/NULL);
		G_B3_0 = L_12;
	}

IL_0048:
	{
		V_5 = G_B3_0;
		// Vector3 perpendicularDirection = (elementDir - direction);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_13, L_14, /*hidden argument*/NULL);
		V_6 = L_15;
		// perpendicularDirection -= direction * Vector3.Dot(perpendicularDirection, direction);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_0;
		float L_20 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_18, L_19, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_17, L_20, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_16, L_21, /*hidden argument*/NULL);
		V_6 = L_22;
		// perpendicularDirection.Normalize();
		Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_6), /*hidden argument*/NULL);
		// float heightToViewAngle = Vector3.Angle(perpendicularDirection, upDirection);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = V_1;
		float L_25 = Vector3_Angle_m8911FFA1DD1C8C46D923B52645B352FA1521CD5F(L_23, L_24, /*hidden argument*/NULL);
		V_7 = L_25;
		// float verticalAspectScale = Mathf.Lerp(aspectV, 1f, Mathf.Abs(Mathf.Sin(heightToViewAngle * Mathf.Deg2Rad)));
		float L_26 = __this->get_aspectV_18();
		float L_27 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_28 = sinf(((float)il2cpp_codegen_multiply((float)L_27, (float)(0.0174532924f))));
		float L_29 = fabsf(L_28);
		float L_30 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_26, (1.0f), L_29, /*hidden argument*/NULL);
		V_8 = L_30;
		// float currentAngle = Vector3.Angle(elementDir, direction);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = V_0;
		float L_33 = Vector3_Angle_m8911FFA1DD1C8C46D923B52645B352FA1521CD5F(L_31, L_32, /*hidden argument*/NULL);
		// float currentAngleClamped = Mathf.Clamp(currentAngle, minViewDegrees * verticalAspectScale, maxViewDegrees * verticalAspectScale);
		float L_34 = L_33;
		float L_35 = __this->get_minViewDegrees_16();
		float L_36 = V_8;
		float L_37 = __this->get_maxViewDegrees_17();
		float L_38 = V_8;
		float L_39 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_34, ((float)il2cpp_codegen_multiply((float)L_35, (float)L_36)), ((float)il2cpp_codegen_multiply((float)L_37, (float)L_38)), /*hidden argument*/NULL);
		V_9 = L_39;
		// float clampedDistance = ignoreDistanceClamp ? elementDist : Mathf.Clamp(elementDist, minDistance, maxDistance);
		bool L_40 = __this->get_ignoreDistanceClamp_20();
		G_B4_0 = L_34;
		if (L_40)
		{
			G_B5_0 = L_34;
			goto IL_00df;
		}
	}
	{
		float L_41 = V_4;
		float L_42 = __this->get_minDistance_14();
		float L_43 = __this->get_maxDistance_15();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_44 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_41, L_42, L_43, /*hidden argument*/NULL);
		G_B6_0 = L_44;
		G_B6_1 = G_B4_0;
		goto IL_00e1;
	}

IL_00df:
	{
		float L_45 = V_4;
		G_B6_0 = L_45;
		G_B6_1 = G_B5_0;
	}

IL_00e1:
	{
		V_10 = G_B6_0;
		// if (currentAngle != currentAngleClamped)
		float L_46 = V_9;
		if ((((float)G_B6_1) == ((float)L_46)))
		{
			goto IL_0125;
		}
	}
	{
		// float angRad = currentAngleClamped * Mathf.Deg2Rad;
		float L_47 = V_9;
		V_11 = ((float)il2cpp_codegen_multiply((float)L_47, (float)(0.0174532924f)));
		// desiredPos = referencePoint + clampedDistance * (direction * Mathf.Cos(angRad) + perpendicularDirection * Mathf.Sin(angRad));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_48 = ___desiredPos0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_49 = V_2;
		float L_50 = V_10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_51 = V_0;
		float L_52 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_53 = cosf(L_52);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_54 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_51, L_53, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_55 = V_6;
		float L_56 = V_11;
		float L_57 = sinf(L_56);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_58 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_55, L_57, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_59 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_54, L_58, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_60 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_50, L_59, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_61 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_49, L_60, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_48 = L_61;
		// }
		return;
	}

IL_0125:
	{
		// else if (!clampedDistance.Equals(elementDist))
		float L_62 = V_4;
		bool L_63 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&V_10), L_62, /*hidden argument*/NULL);
		if (L_63)
		{
			goto IL_0145;
		}
	}
	{
		// desiredPos = referencePoint + clampedDistance * elementDir;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_64 = ___desiredPos0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_65 = V_2;
		float L_66 = V_10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_67 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_68 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_66, L_67, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_69 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_65, L_68, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_64 = L_69;
	}

IL_0145:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView__ctor_m886CF550310521C084C7E16DEF292AECAFE0F20A (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, const RuntimeMethod* method)
{
	{
		// private RadialViewReferenceDirection referenceDirection = RadialViewReferenceDirection.FacingWorldUp;
		__this->set_referenceDirection_13(1);
		// private float minDistance = 1f;
		__this->set_minDistance_14((1.0f));
		// private float maxDistance = 2f;
		__this->set_maxDistance_15((2.0f));
		// private float maxViewDegrees = 30f;
		__this->set_maxViewDegrees_17((30.0f));
		// private float aspectV = 1f;
		__this->set_aspectV_18((1.0f));
		// private float fixedVerticalPosition = -0.4f;
		__this->set_fixedVerticalPosition_22((-0.4f));
		Solver__ctor_mA7C0EDFA6896365A1CBF28E995151F5E02A1CE3E(__this, /*hidden argument*/NULL);
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
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_UpdateLinkedTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver_get_UpdateLinkedTransform_m2B22209A2E40DB0036C12DAF7CAEB903A05CB3D7 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, const RuntimeMethod* method)
{
	{
		// get => updateLinkedTransform;
		bool L_0 = __this->get_updateLinkedTransform_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_UpdateLinkedTransform(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_UpdateLinkedTransform_mEFB8EDD5DE6E84A721981B2C5CDFE4C6D298CC98 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => updateLinkedTransform = value;
		bool L_0 = ___value0;
		__this->set_updateLinkedTransform_4(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_MoveLerpTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Solver_get_MoveLerpTime_m94C5CE2A47022191A2DBDABE790AAF35B6206DAE (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, const RuntimeMethod* method)
{
	{
		// get => moveLerpTime;
		float L_0 = __this->get_moveLerpTime_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_MoveLerpTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_MoveLerpTime_mBC12D496481198E1A09A5C9EE97C1096C8AA54BC (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => moveLerpTime = value;
		float L_0 = ___value0;
		__this->set_moveLerpTime_5(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_RotateLerpTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Solver_get_RotateLerpTime_mB1A9A7AB16E561640A8B950FDF1FD653ED4DB507 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, const RuntimeMethod* method)
{
	{
		// get => rotateLerpTime;
		float L_0 = __this->get_rotateLerpTime_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_RotateLerpTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_RotateLerpTime_m94ABC6D8318E102C858135FD4E6D4E7F695B1E92 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => rotateLerpTime = value;
		float L_0 = ___value0;
		__this->set_rotateLerpTime_6(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_ScaleLerpTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Solver_get_ScaleLerpTime_m42F5C4A8B588D88E0B31869FBE47A7B609536670 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, const RuntimeMethod* method)
{
	{
		// get => scaleLerpTime;
		float L_0 = __this->get_scaleLerpTime_7();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_ScaleLerpTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_ScaleLerpTime_m5D13681EE59A358C08C96C6A08C3F1D126AEA5D9 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => scaleLerpTime = value;
		float L_0 = ___value0;
		__this->set_scaleLerpTime_7(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_Smoothing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver_get_Smoothing_m601B4AAEF2E1F741C532F1DF62C8303536156B56 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, const RuntimeMethod* method)
{
	{
		// get => smoothing;
		bool L_0 = __this->get_smoothing_9();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_Smoothing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_Smoothing_mD3F4321B47FEB93999EDDD345345B2FB97049F7F (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => smoothing = value;
		bool L_0 = ___value0;
		__this->set_smoothing_9(L_0);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_GoalPosition_m394D053AFC2F35C35F099B0114E9DA9222EE1264 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, const RuntimeMethod* method)
{
	{
		// get { return SolverHandler.GoalPosition; }
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_0 = __this->get_SolverHandler_12();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = SolverHandler_get_GoalPosition_m5102D634870888C102BF0CF6F68E5B0F9D8E3797_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalPosition_m181477018FB1D4AF5CF70436516CCC30CE14877E (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// set { SolverHandler.GoalPosition = value; }
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_0 = __this->get_SolverHandler_12();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___value0;
		NullCheck(L_0);
		SolverHandler_set_GoalPosition_mCA1EC96742B8D9B4D2C4DBE37D43A2FE633C9C6D_inline(L_0, L_1, /*hidden argument*/NULL);
		// set { SolverHandler.GoalPosition = value; }
		return;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_get_GoalRotation_m2A68E785EFB8C49288970FE9D2535F8B2DE53938 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, const RuntimeMethod* method)
{
	{
		// get { return SolverHandler.GoalRotation; }
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_0 = __this->get_SolverHandler_12();
		NullCheck(L_0);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = SolverHandler_get_GoalRotation_m40B3BD4A339F646454157B696A10F34D43758F36_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalRotation_m03C706FACD2E7E83220451B69BBB997D7FFC509B (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	{
		// set { SolverHandler.GoalRotation = value; }
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_0 = __this->get_SolverHandler_12();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___value0;
		NullCheck(L_0);
		SolverHandler_set_GoalRotation_mEE3895F3F4C9807CCACC45DCC3560A2809E2122D_inline(L_0, L_1, /*hidden argument*/NULL);
		// set { SolverHandler.GoalRotation = value; }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_GoalScale_m7C0ACE908663BD2F74F6CCF4B640EAF74A43056B (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, const RuntimeMethod* method)
{
	{
		// get { return SolverHandler.GoalScale; }
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_0 = __this->get_SolverHandler_12();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = SolverHandler_get_GoalScale_m68C2A89EB3B566E14EAB67EDF2FCF8C139D15AA1_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalScale_mA6AE29743A6CDE257ED9F4A174D59F2F6D018FB6 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// set { SolverHandler.GoalScale = value; }
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_0 = __this->get_SolverHandler_12();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___value0;
		NullCheck(L_0);
		SolverHandler_set_GoalScale_mF7B8DFF69E4BDBE3C58FB4C8329B177D735653AE_inline(L_0, L_1, /*hidden argument*/NULL);
		// set { SolverHandler.GoalScale = value; }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_WorkingPosition_m37427593915BD327BD778F10D73F886FBDFC4EC6 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, const RuntimeMethod* method)
{
	{
		// return updateLinkedTransform ? GoalPosition : transform.position;
		bool L_0 = __this->get_updateLinkedTransform_4();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Solver_get_GoalPosition_m394D053AFC2F35C35F099B0114E9DA9222EE1264(__this, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingPosition_m575BC0FB62B8E0CD410FBB6F45B47ED6B3BAF6DC (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// if (updateLinkedTransform)
		bool L_0 = __this->get_updateLinkedTransform_4();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// GoalPosition = value;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___value0;
		Solver_set_GoalPosition_m181477018FB1D4AF5CF70436516CCC30CE14877E(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0010:
	{
		// transform.position = value;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___value0;
		NullCheck(L_2);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_get_WorkingRotation_m6F1C52533CE353EA3D9C1B20215D77BC31FB27C2 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, const RuntimeMethod* method)
{
	{
		// return updateLinkedTransform ? GoalRotation : transform.rotation;
		bool L_0 = __this->get_updateLinkedTransform_4();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Solver_get_GoalRotation_m2A68E785EFB8C49288970FE9D2535F8B2DE53938(__this, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingRotation_m73388DCBA57188E64798CE8309F6362A080051F1 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	{
		// if (updateLinkedTransform)
		bool L_0 = __this->get_updateLinkedTransform_4();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// GoalRotation = value;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___value0;
		Solver_set_GoalRotation_m03C706FACD2E7E83220451B69BBB997D7FFC509B(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0010:
	{
		// transform.rotation = value;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = ___value0;
		NullCheck(L_2);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_WorkingScale_mDD2DD7A5D70B0FA888DE7D3FD3E0CBB776369A08 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, const RuntimeMethod* method)
{
	{
		// return updateLinkedTransform ? GoalScale : transform.localScale;
		bool L_0 = __this->get_updateLinkedTransform_4();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Solver_get_GoalScale_m7C0ACE908663BD2F74F6CCF4B640EAF74A43056B(__this, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingScale_mDCA2CC7892C7A1576C4ECA0124A7875736BCCD04 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// if (updateLinkedTransform)
		bool L_0 = __this->get_updateLinkedTransform_4();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// GoalScale = value;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___value0;
		Solver_set_GoalScale_mA6AE29743A6CDE257ED9F4A174D59F2F6D018FB6(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0010:
	{
		// transform.localScale = value;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___value0;
		NullCheck(L_2);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_Awake_mD4D5C1CE508C2F54728F4162A4844452A426B521 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_Awake_mD4D5C1CE508C2F54728F4162A4844452A426B521_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * G_B7_0 = NULL;
	Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * G_B6_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * G_B8_1 = NULL;
	{
		// if (SolverHandler == null)
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_0 = __this->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// SolverHandler = GetComponent<SolverHandler>();
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_2 = Component_GetComponent_TisSolverHandler_t075811D0044ED96286DC029AD5537D75A007A167_mAE44FADD03F8FEE68CC0FBE9FCE9222ADE1E7B44(__this, /*hidden argument*/Component_GetComponent_TisSolverHandler_t075811D0044ED96286DC029AD5537D75A007A167_mAE44FADD03F8FEE68CC0FBE9FCE9222ADE1E7B44_RuntimeMethod_var);
		__this->set_SolverHandler_12(L_2);
	}

IL_001a:
	{
		// if (updateLinkedTransform && SolverHandler == null)
		bool L_3 = __this->get_updateLinkedTransform_4();
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_4 = __this->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		// Debug.LogError("No SolverHandler component found on " + name + " when UpdateLinkedTransform was set to true! Disabling UpdateLinkedTransform.");
		String_t* L_6 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(__this, /*hidden argument*/NULL);
		String_t* L_7 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral8F4978D97C91FB89AFEE30FCE57DD7FD2FADFA7B, L_6, _stringLiteral856AE3ECE3EEE609B18AD6DAB47EAD71A921A33E, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_7, /*hidden argument*/NULL);
		// updateLinkedTransform = false;
		__this->set_updateLinkedTransform_4((bool)0);
	}

IL_0051:
	{
		// GoalScale = maintainScaleOnInitialization ? transform.localScale : Vector3.one;
		bool L_8 = __this->get_maintainScaleOnInitialization_8();
		G_B6_0 = __this;
		if (L_8)
		{
			G_B7_0 = __this;
			goto IL_0061;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		G_B8_0 = L_9;
		G_B8_1 = G_B6_0;
		goto IL_006c;
	}

IL_0061:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_10, /*hidden argument*/NULL);
		G_B8_0 = L_11;
		G_B8_1 = G_B7_0;
	}

IL_006c:
	{
		NullCheck(G_B8_1);
		Solver_set_GoalScale_mA6AE29743A6CDE257ED9F4A174D59F2F6D018FB6(G_B8_1, G_B8_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_OnEnable_m48DD66EDD166E5988EEA59DC3615FDDE2419581E (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_OnEnable_m48DD66EDD166E5988EEA59DC3615FDDE2419581E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SolverHandler != null)
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_0 = __this->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// SnapGoalTo(GoalPosition, GoalRotation, GoalScale);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Solver_get_GoalPosition_m394D053AFC2F35C35F099B0114E9DA9222EE1264(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Solver_get_GoalRotation_m2A68E785EFB8C49288970FE9D2535F8B2DE53938(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Solver_get_GoalScale_m7C0ACE908663BD2F74F6CCF4B640EAF74A43056B(__this, /*hidden argument*/NULL);
		VirtActionInvoker3< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(10 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3) */, __this, L_2, L_3, L_4);
	}

IL_0026:
	{
		// currentLifetime = 0;
		__this->set_currentLifetime_11((0.0f));
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_Start_m667FE1B37A72CC2D586E88025E9E52681E010409 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_Start_m667FE1B37A72CC2D586E88025E9E52681E010409_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SolverHandler != null)
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_0 = __this->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// SolverHandler.RegisterSolver(this);
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_2 = __this->get_SolverHandler_12();
		NullCheck(L_2);
		SolverHandler_RegisterSolver_m65EDEA901AFE897E19AF3E5326F8EDF2EAEFD090(L_2, __this, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_OnDestroy_mC861A88185FFD1BF5EEB02F9CABA76DB00023A46 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_OnDestroy_mC861A88185FFD1BF5EEB02F9CABA76DB00023A46_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SolverHandler != null)
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_0 = __this->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// SolverHandler.UnregisterSolver(this);
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_2 = __this->get_SolverHandler_12();
		NullCheck(L_2);
		SolverHandler_UnregisterSolver_m40C67B6576B3D06EC3902BE54E4C70433FC6B305(L_2, __this, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SolverUpdateEntry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_SolverUpdateEntry_m03B1AAD3CB46472DB55E7D008A38E5A8FED4CBBA (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, const RuntimeMethod* method)
{
	{
		// currentLifetime += SolverHandler.DeltaTime;
		float L_0 = __this->get_currentLifetime_11();
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_1 = __this->get_SolverHandler_12();
		NullCheck(L_1);
		float L_2 = SolverHandler_get_DeltaTime_m28843D7B464589AA956BF5615647D34326EC115C_inline(L_1, /*hidden argument*/NULL);
		__this->set_currentLifetime_11(((float)il2cpp_codegen_add((float)L_0, (float)L_2)));
		// if (lifetime > 0 && currentLifetime >= lifetime)
		float L_3 = __this->get_lifetime_10();
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_003b;
		}
	}
	{
		float L_4 = __this->get_currentLifetime_11();
		float L_5 = __this->get_lifetime_10();
		if ((!(((float)L_4) >= ((float)L_5))))
		{
			goto IL_003b;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(__this, (bool)0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_003b:
	{
		// SolverUpdate();
		VirtActionInvoker0::Invoke(8 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SolverUpdate() */, __this);
		// UpdateWorkingToGoal();
		Solver_UpdateWorkingToGoal_mBC06E9FD394F45A784EAA67DC00002E3B6BB3A52(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_SnapTo_m2B4DE04E28F3BA0E6DE96BEF94D3B9A247AA03A9 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale2, const RuntimeMethod* method)
{
	{
		// SnapGoalTo(position, rotation, scale);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___scale2;
		VirtActionInvoker3< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(10 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3) */, __this, L_0, L_1, L_2);
		// WorkingPosition = position;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___position0;
		Solver_set_WorkingPosition_m575BC0FB62B8E0CD410FBB6F45B47ED6B3BAF6DC(__this, L_3, /*hidden argument*/NULL);
		// WorkingRotation = rotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = ___rotation1;
		Solver_set_WorkingRotation_m73388DCBA57188E64798CE8309F6362A080051F1(__this, L_4, /*hidden argument*/NULL);
		// WorkingScale = scale;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = ___scale2;
		Solver_set_WorkingScale_mDCA2CC7892C7A1576C4ECA0124A7875736BCCD04(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_SnapGoalTo_m19A8E146217A65E8D3A6202F6BBAD6CD3AB77E80 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale2, const RuntimeMethod* method)
{
	{
		// GoalPosition = position;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		Solver_set_GoalPosition_m181477018FB1D4AF5CF70436516CCC30CE14877E(__this, L_0, /*hidden argument*/NULL);
		// GoalRotation = rotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation1;
		Solver_set_GoalRotation_m03C706FACD2E7E83220451B69BBB997D7FFC509B(__this, L_1, /*hidden argument*/NULL);
		// GoalScale = scale;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___scale2;
		Solver_set_GoalScale_mA6AE29743A6CDE257ED9F4A174D59F2F6D018FB6(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapTo(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_SnapTo_m77EF046CF263F962982226EFEB8EF80081D04CCB (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method)
{
	{
		// SnapGoalTo(position, rotation);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation1;
		VirtActionInvoker2< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  >::Invoke(12 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion) */, __this, L_0, L_1);
		// WorkingPosition = position;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___position0;
		Solver_set_WorkingPosition_m575BC0FB62B8E0CD410FBB6F45B47ED6B3BAF6DC(__this, L_2, /*hidden argument*/NULL);
		// WorkingRotation = rotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = ___rotation1;
		Solver_set_WorkingRotation_m73388DCBA57188E64798CE8309F6362A080051F1(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_SnapGoalTo_m260959DF3C7D68326B6A546E1028F8EEC528C415 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method)
{
	{
		// GoalPosition = position;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		Solver_set_GoalPosition_m181477018FB1D4AF5CF70436516CCC30CE14877E(__this, L_0, /*hidden argument*/NULL);
		// GoalRotation = rotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation1;
		Solver_set_GoalRotation_m03C706FACD2E7E83220451B69BBB997D7FFC509B(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::AddOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_AddOffset_mDA56570F58AB1256BEA4811524536EE394784243 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___offset0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_AddOffset_mDA56570F58AB1256BEA4811524536EE394784243_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GoalPosition += offset;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Solver_get_GoalPosition_m394D053AFC2F35C35F099B0114E9DA9222EE1264(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___offset0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_0, L_1, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m181477018FB1D4AF5CF70436516CCC30CE14877E(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SmoothTo(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_SmoothTo_m48CFC1287FD6DC1CB44CC393FD3B755837390E59 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___goal1, float ___deltaTime2, float ___lerpTime3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_SmoothTo_m48CFC1287FD6DC1CB44CC393FD3B755837390E59_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	float G_B3_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	{
		// return Vector3.Lerp(source, goal, lerpTime.Equals(0.0f) ? 1f : deltaTime / lerpTime);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___source0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___goal1;
		bool L_2 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&___lerpTime3), (0.0f), /*hidden argument*/NULL);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_0015;
		}
	}
	{
		float L_3 = ___deltaTime2;
		float L_4 = ___lerpTime3;
		G_B3_0 = ((float)((float)L_3/(float)L_4));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SmoothTo(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_SmoothTo_m2C2EEE1EA524FDBD140BB4CD3C2B71864710D542 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___source0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___goal1, float ___deltaTime2, float ___lerpTime3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_SmoothTo_m2C2EEE1EA524FDBD140BB4CD3C2B71864710D542_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	float G_B3_0 = 0.0f;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	{
		// return Quaternion.Slerp(source, goal, lerpTime.Equals(0.0f) ? 1f : deltaTime / lerpTime);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___source0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___goal1;
		bool L_2 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&___lerpTime3), (0.0f), /*hidden argument*/NULL);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_0015;
		}
	}
	{
		float L_3 = ___deltaTime2;
		float L_4 = ___lerpTime3;
		G_B3_0 = ((float)((float)L_3/(float)L_4));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateTransformToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateTransformToGoal_m5AD89427C8DAEB4B29080F56FAA24355C869B64C (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (smoothing)
		bool L_0 = __this->get_smoothing_9();
		if (!L_0)
		{
			goto IL_00ae;
		}
	}
	{
		// Vector3 pos = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// Quaternion rot = transform.rotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// Vector3 scale = transform.localScale;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		// pos = SmoothTo(pos, GoalPosition, SolverHandler.DeltaTime, moveLerpTime);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Solver_get_GoalPosition_m394D053AFC2F35C35F099B0114E9DA9222EE1264(__this, /*hidden argument*/NULL);
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_9 = __this->get_SolverHandler_12();
		NullCheck(L_9);
		float L_10 = SolverHandler_get_DeltaTime_m28843D7B464589AA956BF5615647D34326EC115C_inline(L_9, /*hidden argument*/NULL);
		float L_11 = __this->get_moveLerpTime_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Solver_SmoothTo_m48CFC1287FD6DC1CB44CC393FD3B755837390E59(L_7, L_8, L_10, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		// rot = SmoothTo(rot, GoalRotation, SolverHandler.DeltaTime, rotateLerpTime);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = V_1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = Solver_get_GoalRotation_m2A68E785EFB8C49288970FE9D2535F8B2DE53938(__this, /*hidden argument*/NULL);
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_15 = __this->get_SolverHandler_12();
		NullCheck(L_15);
		float L_16 = SolverHandler_get_DeltaTime_m28843D7B464589AA956BF5615647D34326EC115C_inline(L_15, /*hidden argument*/NULL);
		float L_17 = __this->get_rotateLerpTime_6();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_18 = Solver_SmoothTo_m2C2EEE1EA524FDBD140BB4CD3C2B71864710D542(L_13, L_14, L_16, L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		// scale = SmoothTo(scale, GoalScale, SolverHandler.DeltaTime, scaleLerpTime);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Solver_get_GoalScale_m7C0ACE908663BD2F74F6CCF4B640EAF74A43056B(__this, /*hidden argument*/NULL);
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_21 = __this->get_SolverHandler_12();
		NullCheck(L_21);
		float L_22 = SolverHandler_get_DeltaTime_m28843D7B464589AA956BF5615647D34326EC115C_inline(L_21, /*hidden argument*/NULL);
		float L_23 = __this->get_scaleLerpTime_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Solver_SmoothTo_m48CFC1287FD6DC1CB44CC393FD3B755837390E59(L_19, L_20, L_22, L_23, /*hidden argument*/NULL);
		V_2 = L_24;
		// transform.position = pos;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = V_0;
		NullCheck(L_25);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_25, L_26, /*hidden argument*/NULL);
		// transform.rotation = rot;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_27 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_28 = V_1;
		NullCheck(L_27);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_27, L_28, /*hidden argument*/NULL);
		// transform.localScale = scale;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = V_2;
		NullCheck(L_29);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_29, L_30, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00ae:
	{
		// transform.position = GoalPosition;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Solver_get_GoalPosition_m394D053AFC2F35C35F099B0114E9DA9222EE1264(__this, /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_31, L_32, /*hidden argument*/NULL);
		// transform.rotation = GoalRotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_33 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_34 = Solver_get_GoalRotation_m2A68E785EFB8C49288970FE9D2535F8B2DE53938(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_33, L_34, /*hidden argument*/NULL);
		// transform.localScale = GoalScale;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_35 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = Solver_get_GoalScale_m7C0ACE908663BD2F74F6CCF4B640EAF74A43056B(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_35, L_36, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingToGoal_mBC06E9FD394F45A784EAA67DC00002E3B6BB3A52 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, const RuntimeMethod* method)
{
	{
		// UpdateWorkingPositionToGoal();
		Solver_UpdateWorkingPositionToGoal_m027244825EB87DCA8FC2D40F7361A573EC6F7563(__this, /*hidden argument*/NULL);
		// UpdateWorkingRotationToGoal();
		Solver_UpdateWorkingRotationToGoal_mD8D4C3429B6162EA7D659CCD1F9C161CC71AA581(__this, /*hidden argument*/NULL);
		// UpdateWorkingScaleToGoal();
		Solver_UpdateWorkingScaleToGoal_mCC945043190821332A05364F791966B962909D70(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingPositionToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingPositionToGoal_m027244825EB87DCA8FC2D40F7361A573EC6F7563 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, const RuntimeMethod* method)
{
	Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * G_B2_0 = NULL;
	Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * G_B1_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * G_B3_1 = NULL;
	{
		// WorkingPosition = smoothing ? SmoothTo(WorkingPosition, GoalPosition, SolverHandler.DeltaTime, moveLerpTime) : GoalPosition;
		bool L_0 = __this->get_smoothing_9();
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Solver_get_GoalPosition_m394D053AFC2F35C35F099B0114E9DA9222EE1264(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0033;
	}

IL_0011:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Solver_get_WorkingPosition_m37427593915BD327BD778F10D73F886FBDFC4EC6(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Solver_get_GoalPosition_m394D053AFC2F35C35F099B0114E9DA9222EE1264(__this, /*hidden argument*/NULL);
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_4 = __this->get_SolverHandler_12();
		NullCheck(L_4);
		float L_5 = SolverHandler_get_DeltaTime_m28843D7B464589AA956BF5615647D34326EC115C_inline(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_moveLerpTime_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Solver_SmoothTo_m48CFC1287FD6DC1CB44CC393FD3B755837390E59(L_2, L_3, L_5, L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0033:
	{
		NullCheck(G_B3_1);
		Solver_set_WorkingPosition_m575BC0FB62B8E0CD410FBB6F45B47ED6B3BAF6DC(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingRotationToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingRotationToGoal_mD8D4C3429B6162EA7D659CCD1F9C161CC71AA581 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, const RuntimeMethod* method)
{
	Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * G_B2_0 = NULL;
	Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * G_B1_0 = NULL;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * G_B3_1 = NULL;
	{
		// WorkingRotation = smoothing ? SmoothTo(WorkingRotation, GoalRotation, SolverHandler.DeltaTime, rotateLerpTime) : GoalRotation;
		bool L_0 = __this->get_smoothing_9();
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = Solver_get_GoalRotation_m2A68E785EFB8C49288970FE9D2535F8B2DE53938(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0033;
	}

IL_0011:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Solver_get_WorkingRotation_m6F1C52533CE353EA3D9C1B20215D77BC31FB27C2(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Solver_get_GoalRotation_m2A68E785EFB8C49288970FE9D2535F8B2DE53938(__this, /*hidden argument*/NULL);
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_4 = __this->get_SolverHandler_12();
		NullCheck(L_4);
		float L_5 = SolverHandler_get_DeltaTime_m28843D7B464589AA956BF5615647D34326EC115C_inline(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_rotateLerpTime_6();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = Solver_SmoothTo_m2C2EEE1EA524FDBD140BB4CD3C2B71864710D542(L_2, L_3, L_5, L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0033:
	{
		NullCheck(G_B3_1);
		Solver_set_WorkingRotation_m73388DCBA57188E64798CE8309F6362A080051F1(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingScaleToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingScaleToGoal_mCC945043190821332A05364F791966B962909D70 (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, const RuntimeMethod* method)
{
	Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * G_B2_0 = NULL;
	Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * G_B1_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * G_B3_1 = NULL;
	{
		// WorkingScale = smoothing ? SmoothTo(WorkingScale, GoalScale, SolverHandler.DeltaTime, scaleLerpTime) : GoalScale;
		bool L_0 = __this->get_smoothing_9();
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Solver_get_GoalScale_m7C0ACE908663BD2F74F6CCF4B640EAF74A43056B(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0033;
	}

IL_0011:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Solver_get_WorkingScale_mDD2DD7A5D70B0FA888DE7D3FD3E0CBB776369A08(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Solver_get_GoalScale_m7C0ACE908663BD2F74F6CCF4B640EAF74A43056B(__this, /*hidden argument*/NULL);
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_4 = __this->get_SolverHandler_12();
		NullCheck(L_4);
		float L_5 = SolverHandler_get_DeltaTime_m28843D7B464589AA956BF5615647D34326EC115C_inline(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_scaleLerpTime_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Solver_SmoothTo_m48CFC1287FD6DC1CB44CC393FD3B755837390E59(L_2, L_3, L_5, L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0033:
	{
		NullCheck(G_B3_1);
		Solver_set_WorkingScale_mDCA2CC7892C7A1576C4ECA0124A7875736BCCD04(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver__ctor_mA7C0EDFA6896365A1CBF28E995151F5E02A1CE3E (Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * __this, const RuntimeMethod* method)
{
	{
		// private float moveLerpTime = 0.1f;
		__this->set_moveLerpTime_5((0.1f));
		// private float rotateLerpTime = 0.1f;
		__this->set_rotateLerpTime_6((0.1f));
		// private bool maintainScaleOnInitialization = true;
		__this->set_maintainScaleOnInitialization_8((bool)1);
		// private bool smoothing = true;
		__this->set_smoothing_9((bool)1);
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
// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedTargetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedTargetType_mDBBC1FF4E55E543CAB6472AA1B9EE46708BFB75D (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	{
		// get => trackedTargetType;
		int32_t L_0 = __this->get_trackedTargetType_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedTargetType(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedTargetType_m67B5A38431DDCACF054A1EE501C1DB7ACCF2C0F4 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// if (trackedTargetType != value && IsValidTrackedObjectType(value))
		int32_t L_0 = __this->get_trackedTargetType_4();
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = ___value0;
		bool L_3 = SolverHandler_IsValidTrackedObjectType_m9717B53DE05E69B90C63FCC17201D3205D21BA83(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// trackedTargetType = value;
		int32_t L_4 = ___value0;
		__this->set_trackedTargetType_4(L_4);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_mDA868E45E4782D26CF6992309214847724473C4C(__this, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedHandedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_TrackedHandedness_m31CB2BE6506E6CC855C9B606F267C9254CA0B0B4 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	{
		// get => trackedHandedness;
		uint8_t L_0 = __this->get_trackedHandedness_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedHandedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedHandedness_m9EB0F052B9E69F3BB9E54B808D509FBBF3823B74 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// if (trackedHandedness != value && IsValidHandedness(value))
		uint8_t L_0 = __this->get_trackedHandedness_5();
		uint8_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001e;
		}
	}
	{
		uint8_t L_2 = ___value0;
		bool L_3 = SolverHandler_IsValidHandedness_m40ED3F7CC29001302FA888923C0C2A4795CA6A8A(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// trackedHandedness = value;
		uint8_t L_4 = ___value0;
		__this->set_trackedHandedness_5(L_4);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_mDA868E45E4782D26CF6992309214847724473C4C(__this, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedHandness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_TrackedHandness_m5528EDECF26FD29259CB202E080DA3672A815F4C (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	{
		// get => TrackedHandedness;
		uint8_t L_0 = SolverHandler_get_TrackedHandedness_m31CB2BE6506E6CC855C9B606F267C9254CA0B0B4_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedHandness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedHandness_mF819290F37798C4C4074FBA15704DC2EB08883DF (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// set => TrackedHandedness = value;
		uint8_t L_0 = ___value0;
		SolverHandler_set_TrackedHandedness_m9EB0F052B9E69F3BB9E54B808D509FBBF3823B74(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedHandJoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedHandJoint_m006DC3C432A40EF9341030504844805B0A6C8F58 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	{
		// get => trackedHandJoint;
		int32_t L_0 = __this->get_trackedHandJoint_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedHandJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedHandJoint_m66AB4E5F769CE8CF38AE241F4DC7CA97314CD584 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// if (trackedHandJoint != value)
		int32_t L_0 = __this->get_trackedHandJoint_6();
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		// trackedHandJoint = value;
		int32_t L_2 = ___value0;
		__this->set_trackedHandJoint_6(L_2);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_mDA868E45E4782D26CF6992309214847724473C4C(__this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TransformOverride(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TransformOverride_m02C93ABC335DF1E2F7DCE35949B6C547ABB8DFBA (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_set_TransformOverride_m02C93ABC335DF1E2F7DCE35949B6C547ABB8DFBA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != null && transformOverride != value)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = __this->get_transformOverride_7();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// transformOverride = value;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = ___value0;
		__this->set_transformOverride_7(L_5);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_mDA868E45E4782D26CF6992309214847724473C4C(__this, /*hidden argument*/NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AdditionalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalOffset_m8DAC4002CC1E9D3B7A4010F2BCBE0A8071239575 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	{
		// get => additionalOffset;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_additionalOffset_8();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_AdditionalOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_AdditionalOffset_mB1336DC89DF22F49D9F7C8866968A9482435DFD7 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_set_AdditionalOffset_mB1336DC89DF22F49D9F7C8866968A9482435DFD7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (additionalOffset != value)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_additionalOffset_8();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		bool L_2 = Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// additionalOffset = value;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___value0;
		__this->set_additionalOffset_8(L_3);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_mDA868E45E4782D26CF6992309214847724473C4C(__this, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AdditionalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalRotation_mB59E20825CC961F6FB4DD99AA6862DF999AD7FFF (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	{
		// get => additionalRotation;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_additionalRotation_9();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_AdditionalRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_AdditionalRotation_m50975EC9F5BA66A92F5F9BF529B617FBDB2E3A04 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_set_AdditionalRotation_m50975EC9F5BA66A92F5F9BF529B617FBDB2E3A04_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (additionalRotation != value)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_additionalRotation_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		bool L_2 = Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// additionalRotation = value;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___value0;
		__this->set_additionalRotation_9(L_3);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_mDA868E45E4782D26CF6992309214847724473C4C(__this, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_UpdateSolvers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_get_UpdateSolvers_m8D19B78489FC5D19E88397BD2CB01E8725560219 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	{
		// get => updateSolvers;
		bool L_0 = __this->get_updateSolvers_10();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_UpdateSolvers(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_UpdateSolvers_m30F1B914ECC35FD7605652B350A70805B2D0D140 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => updateSolvers = value;
		bool L_0 = ___value0;
		__this->set_updateSolvers_10(L_0);
		return;
	}
}
// System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver> Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_Solvers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SolverHandler_get_Solvers_mEC87829E9EC0EA90A66888F7B7C03A2E93931DFA (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_get_Solvers_mEC87829E9EC0EA90A66888F7B7C03A2E93931DFA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => solvers.AsReadOnly();
		List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2 * L_0 = __this->get_solvers_11();
		NullCheck(L_0);
		ReadOnlyCollection_1_tC2B53DDDB28D93E1A8D52A093954124DD5E7C5E2 * L_1 = List_1_AsReadOnly_m728335573FEB3134BC3487CA2A3AF964222665BD(L_0, /*hidden argument*/List_1_AsReadOnly_m728335573FEB3134BC3487CA2A3AF964222665BD_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_Solvers(System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_Solvers_mF53F9AFBB3D7814A84106CDC2A1849C663041D3C (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_set_Solvers_mF53F9AFBB3D7814A84106CDC2A1849C663041D3C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != null)
		RuntimeObject* L_0 = ___value0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// solvers.Clear();
		List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2 * L_1 = __this->get_solvers_11();
		NullCheck(L_1);
		List_1_Clear_mA2A6D866C608AFFA8663476EC564B6580E2F24C9(L_1, /*hidden argument*/List_1_Clear_mA2A6D866C608AFFA8663476EC564B6580E2F24C9_RuntimeMethod_var);
		// solvers.AddRange(value);
		List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2 * L_2 = __this->get_solvers_11();
		RuntimeObject* L_3 = ___value0;
		NullCheck(L_2);
		List_1_AddRange_m90E8446CBAF979C79C61A2777ADC1716C5D39393(L_2, L_3, /*hidden argument*/List_1_AddRange_m90E8446CBAF979C79C61A2777ADC1716C5D39393_RuntimeMethod_var);
	}

IL_001a:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalPosition_m5102D634870888C102BF0CF6F68E5B0F9D8E3797 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalPosition { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CGoalPositionU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_GoalPosition_mCA1EC96742B8D9B4D2C4DBE37D43A2FE633C9C6D (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalPosition { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CGoalPositionU3Ek__BackingField_13(L_0);
		return;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SolverHandler_get_GoalRotation_m40B3BD4A339F646454157B696A10F34D43758F36 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	{
		// public Quaternion GoalRotation { get; set; }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = __this->get_U3CGoalRotationU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_GoalRotation_mEE3895F3F4C9807CCACC45DCC3560A2809E2122D (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion GoalRotation { get; set; }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___value0;
		__this->set_U3CGoalRotationU3Ek__BackingField_14(L_0);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalScale_m68C2A89EB3B566E14EAB67EDF2FCF8C139D15AA1 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalScale { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CGoalScaleU3Ek__BackingField_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_GoalScale_mF7B8DFF69E4BDBE3C58FB4C8329B177D735653AE (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalScale { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CGoalScaleU3Ek__BackingField_15(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AltScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Smoothed_t1A35366991A6CB8D3A2FB1AC19520B9F1EEBE656  SolverHandler_get_AltScale_m7640A53A763EF60957AD2FB75B5E3280EA6FA47D (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Smoothed AltScale { get; set; }
		Vector3Smoothed_t1A35366991A6CB8D3A2FB1AC19520B9F1EEBE656  L_0 = __this->get_U3CAltScaleU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_AltScale(Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_AltScale_m9C2C220DC94C9A60575F81DEB51F4C8D26CD1F62 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, Vector3Smoothed_t1A35366991A6CB8D3A2FB1AC19520B9F1EEBE656  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Smoothed AltScale { get; set; }
		Vector3Smoothed_t1A35366991A6CB8D3A2FB1AC19520B9F1EEBE656  L_0 = ___value0;
		__this->set_U3CAltScaleU3Ek__BackingField_16(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_DeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SolverHandler_get_DeltaTime_m28843D7B464589AA956BF5615647D34326EC115C (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	{
		// public float DeltaTime { get; set; }
		float L_0 = __this->get_U3CDeltaTimeU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_DeltaTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_DeltaTime_m0087F3F9A92DA982927C5D81576A26ECD3CA3696 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float DeltaTime { get; set; }
		float L_0 = ___value0;
		__this->set_U3CDeltaTimeU3Ek__BackingField_17(L_0);
		return;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TransformTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * SolverHandler_get_TransformTarget_m34789672B6825F92BF6C982E9BBCB5D7D6ED4FBB (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_get_TransformTarget_m34789672B6825F92BF6C982E9BBCB5D7D6ED4FBB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsInvalidTracking())
		bool L_0 = SolverHandler_IsInvalidTracking_m3CE37227589915F5D74F5161DD726DE2AD9F4807(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_mDA868E45E4782D26CF6992309214847724473C4C(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// return trackingTarget != null ? trackingTarget.transform : null;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_trackingTarget_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		return (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)NULL;
	}

IL_001e:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_trackingTarget_20();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_CurrentTrackedHandedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_CurrentTrackedHandedness_m5320B889206D27F45D02AD42A373353CAE47B77E (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	{
		// public Handedness CurrentTrackedHandedness => currentTrackedHandedness;
		uint8_t L_0 = __this->get_currentTrackedHandedness_18();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_PreferredTrackedHandedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_PreferredTrackedHandedness_mC7D96C214939B94DF348662E580BFF9EDEFC04D1 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	{
		// get => preferredTrackedHandedness;
		uint8_t L_0 = __this->get_preferredTrackedHandedness_19();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_PreferredTrackedHandedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_PreferredTrackedHandedness_m28AA6CDF9D5AA11D31B38257A135581F24116832 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// if ((value.IsLeft() || value.IsRight())
		//     && preferredTrackedHandedness != value)
		uint8_t L_0 = ___value0;
		bool L_1 = HandednessExtensions_IsLeft_m946EC0863DC18E1FFE49583509A68D87BD0AB0BA(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		uint8_t L_2 = ___value0;
		bool L_3 = HandednessExtensions_IsRight_m8F33E1E8FA84009E617C4260B607170E326FEAC7(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0020;
		}
	}

IL_0010:
	{
		uint8_t L_4 = __this->get_preferredTrackedHandedness_19();
		uint8_t L_5 = ___value0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0020;
		}
	}
	{
		// preferredTrackedHandedness = value;
		uint8_t L_6 = ___value0;
		__this->set_preferredTrackedHandedness_19(L_6);
	}

IL_0020:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_HandJointService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SolverHandler_get_HandJointService_m96674C6CAB2F50D33CF592DFBE6E79A1C4E01B12 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_get_HandJointService_m96674C6CAB2F50D33CF592DFBE6E79A1C4E01B12_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// => handJointService ?? (handJointService = CoreServices.GetInputSystemDataProvider<IMixedRealityHandJointService>());
		RuntimeObject* L_0 = __this->get_handJointService_23();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB284CAD260668D8742F59ED5DDC128A38712D7F4_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = CoreServices_GetInputSystemDataProvider_TisIMixedRealityHandJointService_tF7D229F0BD919C8709872CF57D273F17E85CC0B6_m297655E591D62B290EF0E6CED306F34506EFAB8A(/*hidden argument*/CoreServices_GetInputSystemDataProvider_TisIMixedRealityHandJointService_tF7D229F0BD919C8709872CF57D273F17E85CC0B6_m297655E591D62B290EF0E6CED306F34506EFAB8A_RuntimeMethod_var);
		RuntimeObject* L_3 = L_2;
		V_0 = L_3;
		__this->set_handJointService_23(L_3);
		RuntimeObject* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_Awake_mBFDE2640A2BB8F893D1F70590DD417FC90A22A08 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_Awake_mBFDE2640A2BB8F893D1F70590DD417FC90A22A08_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GoalScale = Vector3.one;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		SolverHandler_set_GoalScale_mF7B8DFF69E4BDBE3C58FB4C8329B177D735653AE_inline(__this, L_0, /*hidden argument*/NULL);
		// AltScale = new Vector3Smoothed(Vector3.one, 0.1f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		Vector3Smoothed_t1A35366991A6CB8D3A2FB1AC19520B9F1EEBE656  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3Smoothed__ctor_m063602B9E7CEB2BDBE2E56851FFD03A239087E14((&L_2), L_1, (0.1f), /*hidden argument*/NULL);
		SolverHandler_set_AltScale_m9C2C220DC94C9A60575F81DEB51F4C8D26CD1F62_inline(__this, L_2, /*hidden argument*/NULL);
		// DeltaTime = Time.deltaTime;
		float L_3 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		SolverHandler_set_DeltaTime_m0087F3F9A92DA982927C5D81576A26ECD3CA3696_inline(__this, L_3, /*hidden argument*/NULL);
		// lastUpdateTime = Time.realtimeSinceStartup;
		float L_4 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		__this->set_lastUpdateTime_22(L_4);
		// if (!IsValidTrackedObjectType(trackedTargetType))
		int32_t L_5 = __this->get_trackedTargetType_4();
		bool L_6 = SolverHandler_IsValidTrackedObjectType_m9717B53DE05E69B90C63FCC17201D3205D21BA83(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_00b8;
		}
	}
	{
		// Debug.LogError("Using obsolete SolverHandler.TrackedTargetType. Attempting to update or defaulting to type Head if unsuccessful.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral3440B5DB21ACDFBDBDF54B78CCD20D24F1FE0FDC, /*hidden argument*/NULL);
		// if (trackedTargetType == TrackedObjectType.HandJointLeft)
		int32_t L_7 = __this->get_trackedTargetType_4();
		if ((!(((uint32_t)L_7) == ((uint32_t)3))))
		{
			goto IL_0066;
		}
	}
	{
		// TrackedTargetType = TrackedObjectType.HandJoint;
		SolverHandler_set_TrackedTargetType_m67B5A38431DDCACF054A1EE501C1DB7ACCF2C0F4(__this, 6, /*hidden argument*/NULL);
		// TrackedHandedness = Handedness.Left;
		SolverHandler_set_TrackedHandedness_m9EB0F052B9E69F3BB9E54B808D509FBBF3823B74(__this, 1, /*hidden argument*/NULL);
		// }
		goto IL_00b8;
	}

IL_0066:
	{
		// else if (trackedTargetType == TrackedObjectType.HandJointRight)
		int32_t L_8 = __this->get_trackedTargetType_4();
		if ((!(((uint32_t)L_8) == ((uint32_t)4))))
		{
			goto IL_007f;
		}
	}
	{
		// TrackedTargetType = TrackedObjectType.HandJoint;
		SolverHandler_set_TrackedTargetType_m67B5A38431DDCACF054A1EE501C1DB7ACCF2C0F4(__this, 6, /*hidden argument*/NULL);
		// TrackedHandedness = Handedness.Right;
		SolverHandler_set_TrackedHandedness_m9EB0F052B9E69F3BB9E54B808D509FBBF3823B74(__this, 2, /*hidden argument*/NULL);
		// }
		goto IL_00b8;
	}

IL_007f:
	{
		// else if (trackedTargetType == TrackedObjectType.MotionControllerLeft)
		int32_t L_9 = __this->get_trackedTargetType_4();
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0098;
		}
	}
	{
		// TrackedTargetType = TrackedObjectType.ControllerRay;
		SolverHandler_set_TrackedTargetType_m67B5A38431DDCACF054A1EE501C1DB7ACCF2C0F4(__this, 5, /*hidden argument*/NULL);
		// TrackedHandedness = Handedness.Left;
		SolverHandler_set_TrackedHandedness_m9EB0F052B9E69F3BB9E54B808D509FBBF3823B74(__this, 1, /*hidden argument*/NULL);
		// }
		goto IL_00b8;
	}

IL_0098:
	{
		// else if (trackedTargetType == TrackedObjectType.MotionControllerRight)
		int32_t L_10 = __this->get_trackedTargetType_4();
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_00b1;
		}
	}
	{
		// TrackedTargetType = TrackedObjectType.ControllerRay;
		SolverHandler_set_TrackedTargetType_m67B5A38431DDCACF054A1EE501C1DB7ACCF2C0F4(__this, 5, /*hidden argument*/NULL);
		// TrackedHandedness = Handedness.Right;
		SolverHandler_set_TrackedHandedness_m9EB0F052B9E69F3BB9E54B808D509FBBF3823B74(__this, 2, /*hidden argument*/NULL);
		// }
		goto IL_00b8;
	}

IL_00b1:
	{
		// TrackedTargetType = TrackedObjectType.Head;
		SolverHandler_set_TrackedTargetType_m67B5A38431DDCACF054A1EE501C1DB7ACCF2C0F4(__this, 0, /*hidden argument*/NULL);
	}

IL_00b8:
	{
		// if (!IsValidHandedness(trackedHandedness))
		uint8_t L_11 = __this->get_trackedHandedness_5();
		bool L_12 = SolverHandler_IsValidHandedness_m40ED3F7CC29001302FA888923C0C2A4795CA6A8A(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_00d6;
		}
	}
	{
		// Debug.LogError("Using invalid SolverHandler.TrackedHandedness value. Defaulting to Handedness.Both");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral12A714AA794D509644FB3179B18725E73759EA26, /*hidden argument*/NULL);
		// trackedHandedness = Handedness.Both;
		__this->set_trackedHandedness_5(3);
	}

IL_00d6:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_Start_m6BD92DA0463BF607E7D6FF876C898EDC663FDE9F (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	{
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_mDA868E45E4782D26CF6992309214847724473C4C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_Update_m1C48729E327A98F4DA0447FAABF2F7779E2CCB80 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	{
		// if (IsInvalidTracking())
		bool L_0 = SolverHandler_IsInvalidTracking_m3CE37227589915F5D74F5161DD726DE2AD9F4807(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_mDA868E45E4782D26CF6992309214847724473C4C(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// DeltaTime = Time.realtimeSinceStartup - lastUpdateTime;
		float L_1 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		float L_2 = __this->get_lastUpdateTime_22();
		SolverHandler_set_DeltaTime_m0087F3F9A92DA982927C5D81576A26ECD3CA3696_inline(__this, ((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)), /*hidden argument*/NULL);
		// lastUpdateTime = Time.realtimeSinceStartup;
		float L_3 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		__this->set_lastUpdateTime_22(L_3);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_LateUpdate_m423A59D15650CCBABDA8959C493E33C09711E719 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_LateUpdate_m423A59D15650CCBABDA8959C493E33C09711E719_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * V_2 = NULL;
	{
		// if (updateSolversList)
		bool L_0 = __this->get_updateSolversList_12();
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		// IEnumerable<Solver> inspectorOrderedSolvers = GetComponents<Solver>().Intersect(solvers);
		SolverU5BU5D_t6D0D5FF2BA7A73417C57F703565C10E0ECCD3329* L_1 = Component_GetComponents_TisSolver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA_mF0952A0907F7528AC813F0C40F1DBD8C4F05328F(__this, /*hidden argument*/Component_GetComponents_TisSolver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA_mF0952A0907F7528AC813F0C40F1DBD8C4F05328F_RuntimeMethod_var);
		List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2 * L_2 = __this->get_solvers_11();
		RuntimeObject* L_3 = Enumerable_Intersect_TisSolver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA_m7109401B942D63F7CF29FF4B9D90F56D78F8E29D((RuntimeObject*)(RuntimeObject*)L_1, L_2, /*hidden argument*/Enumerable_Intersect_TisSolver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA_m7109401B942D63F7CF29FF4B9D90F56D78F8E29D_RuntimeMethod_var);
		V_0 = L_3;
		// Solvers = inspectorOrderedSolvers.Union(Solvers).ToReadOnlyCollection();
		RuntimeObject* L_4 = V_0;
		RuntimeObject* L_5 = SolverHandler_get_Solvers_mEC87829E9EC0EA90A66888F7B7C03A2E93931DFA(__this, /*hidden argument*/NULL);
		RuntimeObject* L_6 = Enumerable_Union_TisSolver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA_m7D30E36E3551057C187A9F484FA6B43F13FBF050(L_4, L_5, /*hidden argument*/Enumerable_Union_TisSolver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA_m7D30E36E3551057C187A9F484FA6B43F13FBF050_RuntimeMethod_var);
		ReadOnlyCollection_1_tC2B53DDDB28D93E1A8D52A093954124DD5E7C5E2 * L_7 = CollectionsExtensions_ToReadOnlyCollection_TisSolver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA_mA4FCE36F856E036DC2DB4F6D01B11E0F34FA1FC9(L_6, /*hidden argument*/CollectionsExtensions_ToReadOnlyCollection_TisSolver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA_mA4FCE36F856E036DC2DB4F6D01B11E0F34FA1FC9_RuntimeMethod_var);
		SolverHandler_set_Solvers_mF53F9AFBB3D7814A84106CDC2A1849C663041D3C(__this, L_7, /*hidden argument*/NULL);
		// updateSolversList = false;
		__this->set_updateSolversList_12((bool)0);
	}

IL_0038:
	{
		// if (UpdateSolvers)
		bool L_8 = SolverHandler_get_UpdateSolvers_m8D19B78489FC5D19E88397BD2CB01E8725560219_inline(__this, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00ad;
		}
	}
	{
		// GoalPosition = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_9, /*hidden argument*/NULL);
		SolverHandler_set_GoalPosition_mCA1EC96742B8D9B4D2C4DBE37D43A2FE633C9C6D_inline(__this, L_10, /*hidden argument*/NULL);
		// GoalRotation = transform.rotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_11, /*hidden argument*/NULL);
		SolverHandler_set_GoalRotation_mEE3895F3F4C9807CCACC45DCC3560A2809E2122D_inline(__this, L_12, /*hidden argument*/NULL);
		// GoalScale = transform.localScale;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_13, /*hidden argument*/NULL);
		SolverHandler_set_GoalScale_mF7B8DFF69E4BDBE3C58FB4C8329B177D735653AE_inline(__this, L_14, /*hidden argument*/NULL);
		// for (int i = 0; i < solvers.Count; ++i)
		V_1 = 0;
		goto IL_009f;
	}

IL_0077:
	{
		// Solver solver = solvers[i];
		List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2 * L_15 = __this->get_solvers_11();
		int32_t L_16 = V_1;
		NullCheck(L_15);
		Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * L_17 = List_1_get_Item_m45E05148CA6342157F24BF07D5AAD8864F0FC2BC_inline(L_15, L_16, /*hidden argument*/List_1_get_Item_m45E05148CA6342157F24BF07D5AAD8864F0FC2BC_RuntimeMethod_var);
		V_2 = L_17;
		// if (solver != null && solver.enabled)
		Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * L_18 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_19 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_18, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_009b;
		}
	}
	{
		Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * L_20 = V_2;
		NullCheck(L_20);
		bool L_21 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_009b;
		}
	}
	{
		// solver.SolverUpdateEntry();
		Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * L_22 = V_2;
		NullCheck(L_22);
		Solver_SolverUpdateEntry_m03B1AAD3CB46472DB55E7D008A38E5A8FED4CBBA(L_22, /*hidden argument*/NULL);
	}

IL_009b:
	{
		// for (int i = 0; i < solvers.Count; ++i)
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_009f:
	{
		// for (int i = 0; i < solvers.Count; ++i)
		int32_t L_24 = V_1;
		List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2 * L_25 = __this->get_solvers_11();
		NullCheck(L_25);
		int32_t L_26 = List_1_get_Count_mD0352A2C2F0E13994ACDE2AE6EB3A3414FBC1CE7_inline(L_25, /*hidden argument*/List_1_get_Count_mD0352A2C2F0E13994ACDE2AE6EB3A3414FBC1CE7_RuntimeMethod_var);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0077;
		}
	}

IL_00ad:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_OnDestroy_m2ED62559A609E634BC0B07E2498DC2F498DE3A64 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_OnDestroy_m2ED62559A609E634BC0B07E2498DC2F498DE3A64_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (trackingTarget != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_trackingTarget_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Destroy(trackingTarget);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_trackingTarget_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::RefreshTrackedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_RefreshTrackedObject_mDA868E45E4782D26CF6992309214847724473C4C (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	{
		// DetachFromCurrentTrackedObject();
		VirtActionInvoker0::Invoke(6 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::DetachFromCurrentTrackedObject() */, __this);
		// AttachToNewTrackedObject();
		VirtActionInvoker0::Invoke(7 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::AttachToNewTrackedObject() */, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::RegisterSolver(Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_RegisterSolver_m65EDEA901AFE897E19AF3E5326F8EDF2EAEFD090 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * ___solver0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_RegisterSolver_m65EDEA901AFE897E19AF3E5326F8EDF2EAEFD090_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!solvers.Contains(solver))
		List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2 * L_0 = __this->get_solvers_11();
		Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * L_1 = ___solver0;
		NullCheck(L_0);
		bool L_2 = List_1_Contains_m8018A11BFA7FD65F838DA368052C4FC76EEAD101(L_0, L_1, /*hidden argument*/List_1_Contains_m8018A11BFA7FD65F838DA368052C4FC76EEAD101_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		// solvers.Add(solver);
		List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2 * L_3 = __this->get_solvers_11();
		Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * L_4 = ___solver0;
		NullCheck(L_3);
		List_1_Add_m4C86FC11FC665E227E594B0EC27C8CC1D704704F(L_3, L_4, /*hidden argument*/List_1_Add_m4C86FC11FC665E227E594B0EC27C8CC1D704704F_RuntimeMethod_var);
		// updateSolversList = true;
		__this->set_updateSolversList_12((bool)1);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::UnregisterSolver(Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_UnregisterSolver_m40C67B6576B3D06EC3902BE54E4C70433FC6B305 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * ___solver0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_UnregisterSolver_m40C67B6576B3D06EC3902BE54E4C70433FC6B305_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// solvers.Remove(solver);
		List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2 * L_0 = __this->get_solvers_11();
		Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA * L_1 = ___solver0;
		NullCheck(L_0);
		List_1_Remove_m13B9DB64A4BD24C01A7E456C7C9A3825EAA21F69(L_0, L_1, /*hidden argument*/List_1_Remove_m13B9DB64A4BD24C01A7E456C7C9A3825EAA21F69_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::DetachFromCurrentTrackedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_DetachFromCurrentTrackedObject_m13D25CB26E505327F5E3B0E19C2FF49AB7682F25 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_DetachFromCurrentTrackedObject_m13D25CB26E505327F5E3B0E19C2FF49AB7682F25_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (trackingTarget != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_trackingTarget_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// trackingTarget.transform.parent = null;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_trackingTarget_20();
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_3, (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)NULL, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::AttachToNewTrackedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_AttachToNewTrackedObject_m582FD67691766791AEF27D1F5D8A2C6F8FB4D4C2 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_AttachToNewTrackedObject_m582FD67691766791AEF27D1F5D8A2C6F8FB4D4C2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	{
		// currentTrackedHandedness = Handedness.None;
		__this->set_currentTrackedHandedness_18(0);
		// controllerRay = null;
		__this->set_controllerRay_21((LinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0 *)NULL);
		// Transform target = null;
		V_0 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)NULL;
		// if (TrackedTargetType == TrackedObjectType.Head)
		int32_t L_0 = SolverHandler_get_TrackedTargetType_mDBBC1FF4E55E543CAB6472AA1B9EE46708BFB75D_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		// target = CameraCache.Main.transform;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_1 = CameraCache_get_Main_m7E8C960AE7377D88571B34D5FC306D9F3F8108BA(/*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// }
		goto IL_017d;
	}

IL_0028:
	{
		// else if (TrackedTargetType == TrackedObjectType.ControllerRay)
		int32_t L_3 = SolverHandler_get_TrackedTargetType_mDBBC1FF4E55E543CAB6472AA1B9EE46708BFB75D_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)5))))
		{
			goto IL_00d4;
		}
	}
	{
		// if (TrackedHandedness == Handedness.Both)
		uint8_t L_4 = SolverHandler_get_TrackedHandedness_m31CB2BE6506E6CC855C9B606F267C9254CA0B0B4_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_008c;
		}
	}
	{
		// currentTrackedHandedness = PreferredTrackedHandedness;
		uint8_t L_5 = SolverHandler_get_PreferredTrackedHandedness_mC7D96C214939B94DF348662E580BFF9EDEFC04D1_inline(__this, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_5);
		// controllerRay = PointerUtils.GetPointer<LinePointer>(currentTrackedHandedness);
		uint8_t L_6 = __this->get_currentTrackedHandedness_18();
		LinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0 * L_7 = PointerUtils_GetPointer_TisLinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0_mB31DBF5B34B2078856C73866757431D9873F1347(L_6, /*hidden argument*/PointerUtils_GetPointer_TisLinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0_mB31DBF5B34B2078856C73866757431D9873F1347_RuntimeMethod_var);
		__this->set_controllerRay_21(L_7);
		// if (controllerRay == null)
		LinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0 * L_8 = __this->get_controllerRay_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00a9;
		}
	}
	{
		// currentTrackedHandedness = currentTrackedHandedness.GetOppositeHandedness();
		uint8_t L_10 = __this->get_currentTrackedHandedness_18();
		uint8_t L_11 = HandednessExtensions_GetOppositeHandedness_m5B656328579F88BBBDDCC372BAD3297BDA134B23(L_10, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_11);
		// controllerRay = PointerUtils.GetPointer<LinePointer>(currentTrackedHandedness);
		uint8_t L_12 = __this->get_currentTrackedHandedness_18();
		LinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0 * L_13 = PointerUtils_GetPointer_TisLinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0_mB31DBF5B34B2078856C73866757431D9873F1347(L_12, /*hidden argument*/PointerUtils_GetPointer_TisLinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0_mB31DBF5B34B2078856C73866757431D9873F1347_RuntimeMethod_var);
		__this->set_controllerRay_21(L_13);
		// }
		goto IL_00a9;
	}

IL_008c:
	{
		// currentTrackedHandedness = TrackedHandedness;
		uint8_t L_14 = SolverHandler_get_TrackedHandedness_m31CB2BE6506E6CC855C9B606F267C9254CA0B0B4_inline(__this, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_14);
		// controllerRay = PointerUtils.GetPointer<LinePointer>(currentTrackedHandedness);
		uint8_t L_15 = __this->get_currentTrackedHandedness_18();
		LinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0 * L_16 = PointerUtils_GetPointer_TisLinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0_mB31DBF5B34B2078856C73866757431D9873F1347(L_15, /*hidden argument*/PointerUtils_GetPointer_TisLinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0_mB31DBF5B34B2078856C73866757431D9873F1347_RuntimeMethod_var);
		__this->set_controllerRay_21(L_16);
	}

IL_00a9:
	{
		// if (controllerRay != null)
		LinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0 * L_17 = __this->get_controllerRay_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_17, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00c8;
		}
	}
	{
		// target = controllerRay.transform;
		LinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0 * L_19 = __this->get_controllerRay_21();
		NullCheck(L_19);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		// }
		goto IL_017d;
	}

IL_00c8:
	{
		// currentTrackedHandedness = Handedness.None;
		__this->set_currentTrackedHandedness_18(0);
		// }
		goto IL_017d;
	}

IL_00d4:
	{
		// else if (TrackedTargetType == TrackedObjectType.HandJoint)
		int32_t L_21 = SolverHandler_get_TrackedTargetType_mDBBC1FF4E55E543CAB6472AA1B9EE46708BFB75D_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)6))))
		{
			goto IL_016d;
		}
	}
	{
		// if (HandJointService != null)
		RuntimeObject* L_22 = SolverHandler_get_HandJointService_m96674C6CAB2F50D33CF592DFBE6E79A1C4E01B12(__this, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_017d;
		}
	}
	{
		// currentTrackedHandedness = TrackedHandedness;
		uint8_t L_23 = SolverHandler_get_TrackedHandedness_m31CB2BE6506E6CC855C9B606F267C9254CA0B0B4_inline(__this, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_23);
		// if (currentTrackedHandedness == Handedness.Both)
		uint8_t L_24 = __this->get_currentTrackedHandedness_18();
		if ((!(((uint32_t)L_24) == ((uint32_t)3))))
		{
			goto IL_0153;
		}
	}
	{
		// if (HandJointService.IsHandTracked(PreferredTrackedHandedness))
		RuntimeObject* L_25 = SolverHandler_get_HandJointService_m96674C6CAB2F50D33CF592DFBE6E79A1C4E01B12(__this, /*hidden argument*/NULL);
		uint8_t L_26 = SolverHandler_get_PreferredTrackedHandedness_mC7D96C214939B94DF348662E580BFF9EDEFC04D1_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		bool L_27 = InterfaceFuncInvoker1< bool, uint8_t >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::IsHandTracked(Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_tF7D229F0BD919C8709872CF57D273F17E85CC0B6_il2cpp_TypeInfo_var, L_25, L_26);
		if (!L_27)
		{
			goto IL_0121;
		}
	}
	{
		// currentTrackedHandedness = PreferredTrackedHandedness;
		uint8_t L_28 = SolverHandler_get_PreferredTrackedHandedness_mC7D96C214939B94DF348662E580BFF9EDEFC04D1_inline(__this, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_28);
		// }
		goto IL_0153;
	}

IL_0121:
	{
		// else if (HandJointService.IsHandTracked(PreferredTrackedHandedness.GetOppositeHandedness()))
		RuntimeObject* L_29 = SolverHandler_get_HandJointService_m96674C6CAB2F50D33CF592DFBE6E79A1C4E01B12(__this, /*hidden argument*/NULL);
		uint8_t L_30 = SolverHandler_get_PreferredTrackedHandedness_mC7D96C214939B94DF348662E580BFF9EDEFC04D1_inline(__this, /*hidden argument*/NULL);
		uint8_t L_31 = HandednessExtensions_GetOppositeHandedness_m5B656328579F88BBBDDCC372BAD3297BDA134B23(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		bool L_32 = InterfaceFuncInvoker1< bool, uint8_t >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::IsHandTracked(Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_tF7D229F0BD919C8709872CF57D273F17E85CC0B6_il2cpp_TypeInfo_var, L_29, L_31);
		if (!L_32)
		{
			goto IL_014c;
		}
	}
	{
		// currentTrackedHandedness = PreferredTrackedHandedness.GetOppositeHandedness();
		uint8_t L_33 = SolverHandler_get_PreferredTrackedHandedness_mC7D96C214939B94DF348662E580BFF9EDEFC04D1_inline(__this, /*hidden argument*/NULL);
		uint8_t L_34 = HandednessExtensions_GetOppositeHandedness_m5B656328579F88BBBDDCC372BAD3297BDA134B23(L_33, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_34);
		// }
		goto IL_0153;
	}

IL_014c:
	{
		// currentTrackedHandedness = Handedness.None;
		__this->set_currentTrackedHandedness_18(0);
	}

IL_0153:
	{
		// target = HandJointService.RequestJointTransform(this.TrackedHandJoint, currentTrackedHandedness);
		RuntimeObject* L_35 = SolverHandler_get_HandJointService_m96674C6CAB2F50D33CF592DFBE6E79A1C4E01B12(__this, /*hidden argument*/NULL);
		int32_t L_36 = SolverHandler_get_TrackedHandJoint_m006DC3C432A40EF9341030504844805B0A6C8F58_inline(__this, /*hidden argument*/NULL);
		uint8_t L_37 = __this->get_currentTrackedHandedness_18();
		NullCheck(L_35);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_38 = InterfaceFuncInvoker2< Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, int32_t, uint8_t >::Invoke(0 /* UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::RequestJointTransform(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_tF7D229F0BD919C8709872CF57D273F17E85CC0B6_il2cpp_TypeInfo_var, L_35, L_36, L_37);
		V_0 = L_38;
		// }
		goto IL_017d;
	}

IL_016d:
	{
		// else if (TrackedTargetType == TrackedObjectType.CustomOverride)
		int32_t L_39 = SolverHandler_get_TrackedTargetType_mDBBC1FF4E55E543CAB6472AA1B9EE46708BFB75D_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_39) == ((uint32_t)7))))
		{
			goto IL_017d;
		}
	}
	{
		// target = this.transformOverride;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_40 = __this->get_transformOverride_7();
		V_0 = L_40;
	}

IL_017d:
	{
		// TrackTransform(target);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_41 = V_0;
		SolverHandler_TrackTransform_mDA30174893E2C3E1F8C464114B0151026F54CABE(__this, L_41, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::TrackTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_TrackTransform_mDA30174893E2C3E1F8C464114B0151026F54CABE (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_TrackTransform_mDA30174893E2C3E1F8C464114B0151026F54CABE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (trackingTarget == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_trackingTarget_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// trackingTarget = new GameObject(TrackingTargetName);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_2, _stringLiteral6EF0514AA4017533AA16ED833590C7207CDFAE67, /*hidden argument*/NULL);
		__this->set_trackingTarget_20(L_2);
		// trackingTarget.hideFlags = HideFlags.HideInHierarchy;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_trackingTarget_20();
		NullCheck(L_3);
		Object_set_hideFlags_mB0B45A19A5871EF407D7B09E0EB76003496BA4F0(L_3, 1, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// if (target != null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = ___target0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_008a;
		}
	}
	{
		// trackingTarget.transform.parent = target;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_trackingTarget_20();
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_6, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = ___target0;
		NullCheck(L_7);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_7, L_8, /*hidden argument*/NULL);
		// trackingTarget.transform.localPosition = Vector3.Scale(AdditionalOffset, trackingTarget.transform.localScale);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = __this->get_trackingTarget_20();
		NullCheck(L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_9, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = SolverHandler_get_AdditionalOffset_m8DAC4002CC1E9D3B7A4010F2BCBE0A8071239575_inline(__this, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = __this->get_trackingTarget_20();
		NullCheck(L_12);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775(L_11, L_14, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_10, L_15, /*hidden argument*/NULL);
		// trackingTarget.transform.localRotation = Quaternion.Euler(AdditionalRotation);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = __this->get_trackingTarget_20();
		NullCheck(L_16);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_16, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = SolverHandler_get_AdditionalRotation_mB59E20825CC961F6FB4DD99AA6862DF999AD7FFF_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_17, L_19, /*hidden argument*/NULL);
	}

IL_008a:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.LinePointer Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::GetControllerRay(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0 * SolverHandler_GetControllerRay_m585209180CEE135589AD90C58B37EF65F5FAAA7E (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, uint8_t ___handedness0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_GetControllerRay_m585209180CEE135589AD90C58B37EF65F5FAAA7E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PointerUtils.GetPointer<LinePointer>(handedness);
		uint8_t L_0 = ___handedness0;
		LinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0 * L_1 = PointerUtils_GetPointer_TisLinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0_mB31DBF5B34B2078856C73866757431D9873F1347(L_0, /*hidden argument*/PointerUtils_GetPointer_TisLinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0_mB31DBF5B34B2078856C73866757431D9873F1347_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsInvalidTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsInvalidTracking_m3CE37227589915F5D74F5161DD726DE2AD9F4807 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_IsInvalidTracking_m3CE37227589915F5D74F5161DD726DE2AD9F4807_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (trackingTarget == null || trackingTarget.transform.parent == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_trackingTarget_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_trackingTarget_20();
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0028;
		}
	}

IL_0026:
	{
		// return true;
		return (bool)1;
	}

IL_0028:
	{
		// if (TrackedTargetType == TrackedObjectType.ControllerRay &&
		//     (controllerRay == null || !controllerRay.IsTracked))
		int32_t L_6 = SolverHandler_get_TrackedTargetType_mDBBC1FF4E55E543CAB6472AA1B9EE46708BFB75D_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)5))))
		{
			goto IL_004e;
		}
	}
	{
		LinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0 * L_7 = __this->get_controllerRay_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_7, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_004c;
		}
	}
	{
		LinePointer_tAF09E30A80EAB0004E5509F216D7926CC4AA74C0 * L_9 = __this->get_controllerRay_21();
		NullCheck(L_9);
		bool L_10 = ControllerPoseSynchronizer_get_IsTracked_m5D23489B3214AD35424F878CDF895CCE08ECCBAC(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_004e;
		}
	}

IL_004c:
	{
		// return true;
		return (bool)1;
	}

IL_004e:
	{
		// if (TrackedTargetType == TrackedObjectType.HandJoint && !currentTrackedHandedness.IsNone())
		int32_t L_11 = SolverHandler_get_TrackedTargetType_mDBBC1FF4E55E543CAB6472AA1B9EE46708BFB75D_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)6))))
		{
			goto IL_00a4;
		}
	}
	{
		uint8_t L_12 = __this->get_currentTrackedHandedness_18();
		bool L_13 = HandednessExtensions_IsNone_m61C0DAD3517AFFF65D6FD94CB66F15AE2A2E8F38(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_00a4;
		}
	}
	{
		// bool trackingLeft = HandJointService.IsHandTracked(Handedness.Left);
		RuntimeObject* L_14 = SolverHandler_get_HandJointService_m96674C6CAB2F50D33CF592DFBE6E79A1C4E01B12(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		bool L_15 = InterfaceFuncInvoker1< bool, uint8_t >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::IsHandTracked(Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_tF7D229F0BD919C8709872CF57D273F17E85CC0B6_il2cpp_TypeInfo_var, L_14, 1);
		V_0 = L_15;
		// bool trackingRight = HandJointService.IsHandTracked(Handedness.Right);
		RuntimeObject* L_16 = SolverHandler_get_HandJointService_m96674C6CAB2F50D33CF592DFBE6E79A1C4E01B12(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		bool L_17 = InterfaceFuncInvoker1< bool, uint8_t >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::IsHandTracked(Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_tF7D229F0BD919C8709872CF57D273F17E85CC0B6_il2cpp_TypeInfo_var, L_16, 2);
		V_1 = L_17;
		// return (currentTrackedHandedness.IsLeft() && !trackingLeft) ||
		//        (currentTrackedHandedness.IsRight() && !trackingRight);
		uint8_t L_18 = __this->get_currentTrackedHandedness_18();
		bool L_19 = HandednessExtensions_IsLeft_m946EC0863DC18E1FFE49583509A68D87BD0AB0BA(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_008e;
		}
	}
	{
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_00a2;
		}
	}

IL_008e:
	{
		uint8_t L_21 = __this->get_currentTrackedHandedness_18();
		bool L_22 = HandednessExtensions_IsRight_m8F33E1E8FA84009E617C4260B607170E326FEAC7(L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00a0;
		}
	}
	{
		bool L_23 = V_1;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_00a0:
	{
		return (bool)0;
	}

IL_00a2:
	{
		return (bool)1;
	}

IL_00a4:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsValidHandedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsValidHandedness_m40ED3F7CC29001302FA888923C0C2A4795CA6A8A (uint8_t ___hand0, const RuntimeMethod* method)
{
	{
		// return hand <= Handedness.Both;
		uint8_t L_0 = ___hand0;
		return (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsValidTrackedObjectType(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsValidTrackedObjectType_m9717B53DE05E69B90C63FCC17201D3205D21BA83 (int32_t ___type0, const RuntimeMethod* method)
{
	{
		// return type == TrackedObjectType.Head || type >= TrackedObjectType.ControllerRay;
		int32_t L_0 = ___type0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___type0;
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_000b:
	{
		return (bool)1;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedObjectToReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedObjectToReference_mF721B1E51609D39F418799D3DC61001F03E72A50 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	{
		// get => trackedTargetType;
		int32_t L_0 = __this->get_trackedTargetType_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedObjectToReference(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedObjectToReference_m3A1DC3B0E5D60AC42D66AE7418DA66AD546D2B66 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// if (trackedTargetType != value)
		int32_t L_0 = __this->get_trackedTargetType_4();
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		// trackedTargetType = value;
		int32_t L_2 = ___value0;
		__this->set_trackedTargetType_4(L_2);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_mDA868E45E4782D26CF6992309214847724473C4C(__this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler__ctor_mB3E7725D8B6C7C48FF9B17E050A988EFC2D77232 (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler__ctor_mB3E7725D8B6C7C48FF9B17E050A988EFC2D77232_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Handedness trackedHandedness = Handedness.Both;
		__this->set_trackedHandedness_5(3);
		// private TrackedHandJoint trackedHandJoint = TrackedHandJoint.Palm;
		__this->set_trackedHandJoint_6(2);
		// private bool updateSolvers = true;
		__this->set_updateSolvers_10((bool)1);
		// protected readonly List<Solver> solvers = new List<Solver>();
		List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2 * L_0 = (List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2 *)il2cpp_codegen_object_new(List_1_t4101262B5F4030C461E485B7E4AF4731D8F4FBB2_il2cpp_TypeInfo_var);
		List_1__ctor_mC011A6791D0183C3059D24C5C3841BB38C34CD70(L_0, /*hidden argument*/List_1__ctor_mC011A6791D0183C3059D24C5C3841BB38C34CD70_RuntimeMethod_var);
		__this->set_solvers_11(L_0);
		// protected Handedness preferredTrackedHandedness = Handedness.Left;
		__this->set_preferredTrackedHandedness_19(1);
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
// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_MagneticSurfaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* SurfaceMagnetism_get_MagneticSurfaces_m6C32F7854AF70976DAEDE2CDE8455CB25C2F5BB5 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method)
{
	{
		// get => magneticSurfaces;
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_0 = __this->get_magneticSurfaces_13();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_MagneticSurfaces(UnityEngine.LayerMask[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_MagneticSurfaces_m85DDE6A58B1D07736D1736411AB04908C918D5C7 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___value0, const RuntimeMethod* method)
{
	{
		// set => magneticSurfaces = value;
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_0 = ___value0;
		__this->set_magneticSurfaces_13(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_MaxRaycastDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_MaxRaycastDistance_mC76C481ECA035A1AF7A85AEA9CACAEEE1E4F5C09 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method)
{
	{
		// get => maxRaycastDistance;
		float L_0 = __this->get_maxRaycastDistance_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_MaxRaycastDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_MaxRaycastDistance_mC04B10C32949DC2AF363C2CE826AC3989744126A (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => maxRaycastDistance = value;
		float L_0 = ___value0;
		__this->set_maxRaycastDistance_14(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_ClosestDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_ClosestDistance_m85A3B9F700C1D1E44797ECBDAC35AA9D35C3275A (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method)
{
	{
		// get => closestDistance;
		float L_0 = __this->get_closestDistance_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_ClosestDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_ClosestDistance_mB96BAF94BFC704936486A1D6BA2F0B0732F9F6F9 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => closestDistance = value;
		float L_0 = ___value0;
		__this->set_closestDistance_15(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_SurfaceNormalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_SurfaceNormalOffset_mDFFC08398417B249278314F9DFAB5DD79964C8E7 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method)
{
	{
		// get => surfaceNormalOffset;
		float L_0 = __this->get_surfaceNormalOffset_16();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_SurfaceNormalOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_SurfaceNormalOffset_m6579676E852BA20265814645401D8E29FF4CBCA1 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => surfaceNormalOffset = value;
		float L_0 = ___value0;
		__this->set_surfaceNormalOffset_16(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_SurfaceRayOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_SurfaceRayOffset_m7390B94408945D1DE71C55EE7FCE42A55D71D680 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method)
{
	{
		// get => surfaceRayOffset;
		float L_0 = __this->get_surfaceRayOffset_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_SurfaceRayOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_SurfaceRayOffset_m58C56503A486E2E8F35B680DE0F343A7BE57E3BF (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => surfaceRayOffset = value;
		float L_0 = ___value0;
		__this->set_surfaceRayOffset_17(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_RaycastMode_mE4FAAD8468A7654CFBFFD9185F3EA88172C68911 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method)
{
	{
		// get => raycastMode;
		int32_t L_0 = __this->get_raycastMode_18();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_RaycastMode(Microsoft.MixedReality.Toolkit.Physics.SceneQueryType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_RaycastMode_m349062EF7076DE18A548BE503B4AD5AC425F2D00 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => raycastMode = value;
		int32_t L_0 = ___value0;
		__this->set_raycastMode_18(L_0);
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_BoxRaysPerEdge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_BoxRaysPerEdge_mF68CBE51FFD1CB5C14585059E51F0B7697F92EDA (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method)
{
	{
		// get => boxRaysPerEdge;
		int32_t L_0 = __this->get_boxRaysPerEdge_19();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_BoxRaysPerEdge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_BoxRaysPerEdge_mCB7E5C01A29FD1460DA7E529C13C852BE1B4B4E1 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => boxRaysPerEdge = value;
		int32_t L_0 = ___value0;
		__this->set_boxRaysPerEdge_19(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_OrthographicBoxCast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_OrthographicBoxCast_mF362556EECC98588ABA59516C0745A15CCC9BFA2 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method)
{
	{
		// get => orthographicBoxCast;
		bool L_0 = __this->get_orthographicBoxCast_20();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_OrthographicBoxCast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OrthographicBoxCast_m9E3B2F679F295B96AEB8308B0BDA6B8C28CD4647 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => orthographicBoxCast = value;
		bool L_0 = ___value0;
		__this->set_orthographicBoxCast_20(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_MaximumNormalVariance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_MaximumNormalVariance_m55ECA96D38568EBD388DA44D9D863C85C22BFB14 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method)
{
	{
		// get => maximumNormalVariance;
		float L_0 = __this->get_maximumNormalVariance_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_MaximumNormalVariance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_MaximumNormalVariance_m3096C4CD0999371684E5B8E9B19B05ECE23C95B3 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => maximumNormalVariance = value;
		float L_0 = ___value0;
		__this->set_maximumNormalVariance_21(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_SphereSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_SphereSize_mC8F57BF23EC9EBEAA91280286DF5E421D6868536 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method)
{
	{
		// get => sphereSize;
		float L_0 = __this->get_sphereSize_22();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_SphereSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_SphereSize_m2F1C7A55C214B9DE6488DD31CB20CBF034290DBE (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => sphereSize = value;
		float L_0 = ___value0;
		__this->set_sphereSize_22(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_VolumeCastSizeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_VolumeCastSizeOverride_m3C390065BA35F0AEFFD9B1BA3FFDB18062CD9BC3 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method)
{
	{
		// get => volumeCastSizeOverride;
		float L_0 = __this->get_volumeCastSizeOverride_23();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_VolumeCastSizeOverride(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_VolumeCastSizeOverride_m1DE34AC1F569683CE54468720C9C88112C2C1E47 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => volumeCastSizeOverride = value;
		float L_0 = ___value0;
		__this->set_volumeCastSizeOverride_23(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_UseLinkedAltScaleOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_UseLinkedAltScaleOverride_m286D130684BF3E1FB75A5C51928CA967FCD2B6F6 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method)
{
	{
		// get => useLinkedAltScaleOverride;
		bool L_0 = __this->get_useLinkedAltScaleOverride_24();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_UseLinkedAltScaleOverride(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_UseLinkedAltScaleOverride_mB2551ABE84DDE2C3313297261A81CBC35D9AEAE0 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => useLinkedAltScaleOverride = value;
		bool L_0 = ___value0;
		__this->set_useLinkedAltScaleOverride_24(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/RaycastDirectionMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_CurrentRaycastDirectionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentRaycastDirectionMode_m251616578EC68B653AE610BB2C6C14429BF4661F (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method)
{
	{
		// get => currentRaycastDirectionMode;
		int32_t L_0 = __this->get_currentRaycastDirectionMode_25();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_CurrentRaycastDirectionMode(Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/RaycastDirectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_CurrentRaycastDirectionMode_m82B564347135BF5F0493D0B04F171D5BBE81212C (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => currentRaycastDirectionMode = value;
		int32_t L_0 = ___value0;
		__this->set_currentRaycastDirectionMode_25(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/OrientationMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_CurrentOrientationMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentOrientationMode_m51A3F7D9C28941D5887DB884B5C1C12A0C343CEA (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method)
{
	{
		// get => orientationMode;
		int32_t L_0 = __this->get_orientationMode_26();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_CurrentOrientationMode(Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/OrientationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_CurrentOrientationMode_mBEB3057A5853AEF5F58969E67E68273C45685CB5 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => orientationMode = value;
		int32_t L_0 = ___value0;
		__this->set_orientationMode_26(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_OrientationBlend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_OrientationBlend_m3F88DD8C0D42376CB6B3A8F470DFC29E24A52D22 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method)
{
	{
		// get => orientationBlend;
		float L_0 = __this->get_orientationBlend_27();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_OrientationBlend(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OrientationBlend_mFE3F232D180D0E6C8E71E3851FA193E4DDD2A270 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => orientationBlend = value;
		float L_0 = ___value0;
		__this->set_orientationBlend_27(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_KeepOrientationVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_KeepOrientationVertical_m4052B2E3AFFB0A91707C12EDC0E63BD4C3A51A39 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method)
{
	{
		// get => keepOrientationVertical;
		bool L_0 = __this->get_keepOrientationVertical_28();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_KeepOrientationVertical(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_KeepOrientationVertical_mABAF8A239A3967EF40FA33AB95AA862BD2231F9F (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => keepOrientationVertical = value;
		bool L_0 = ___value0;
		__this->set_keepOrientationVertical_28(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_DebugEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_DebugEnabled_mF3A383A6D9DEC3040F691D8B4597775582D5E5C2 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method)
{
	{
		// get => debugEnabled;
		bool L_0 = __this->get_debugEnabled_29();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_DebugEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_DebugEnabled_m52A0CB36DADE3206808BEB107D16AC8CB30F845C (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => debugEnabled = value;
		bool L_0 = ___value0;
		__this->set_debugEnabled_29(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_OnSurface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_OnSurface_mDE77ACEF3EA7CA205E8A08C7AB4D46616DA82836 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method)
{
	{
		// public bool OnSurface { get; private set; }
		bool L_0 = __this->get_U3COnSurfaceU3Ek__BackingField_30();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_OnSurface(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OnSurface_m55D6EDB03DD38C3C40C959266D103699F9BB1363 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool OnSurface { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3COnSurfaceU3Ek__BackingField_30(L_0);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SurfaceMagnetism_get_RaycastOrigin_m7E406FCE166669C77E36342DC172E66874CA0940 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_get_RaycastOrigin_m7E406FCE166669C77E36342DC172E66874CA0940_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 RaycastOrigin => SolverHandler.TransformTarget == null ? Vector3.zero : SolverHandler.TransformTarget.position;
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_0 = ((Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m34789672B6825F92BF6C982E9BBCB5D7D6ED4FBB(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_3 = ((Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA *)__this)->get_SolverHandler_12();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = SolverHandler_get_TransformTarget_m34789672B6825F92BF6C982E9BBCB5D7D6ED4FBB(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SurfaceMagnetism_get_RaycastEndPoint_mFD4351223905C0F251B85284C9AC9658BE907E1A (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_get_RaycastEndPoint_mFD4351223905C0F251B85284C9AC9658BE907E1A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// Vector3 origin = RaycastOrigin;
		SurfaceMagnetism_get_RaycastOrigin_m7E406FCE166669C77E36342DC172E66874CA0940(__this, /*hidden argument*/NULL);
		// Vector3 endPoint = Vector3.forward;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		V_0 = L_0;
		// switch (CurrentRaycastDirectionMode)
		int32_t L_1 = SurfaceMagnetism_get_CurrentRaycastDirectionMode_m251616578EC68B653AE610BB2C6C14429BF4661F_inline(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_0071;
			}
			case 2:
			{
				goto IL_007f;
			}
		}
	}
	{
		goto IL_008b;
	}

IL_0028:
	{
		// if (SolverHandler != null && SolverHandler.TransformTarget != null)
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_3 = ((Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA *)__this)->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_008b;
		}
	}
	{
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_5 = ((Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA *)__this)->get_SolverHandler_12();
		NullCheck(L_5);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = SolverHandler_get_TransformTarget_m34789672B6825F92BF6C982E9BBCB5D7D6ED4FBB(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_6, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_008b;
		}
	}
	{
		// endPoint = SolverHandler.TransformTarget.position + SolverHandler.TransformTarget.forward;
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_8 = ((Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA *)__this)->get_SolverHandler_12();
		NullCheck(L_8);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = SolverHandler_get_TransformTarget_m34789672B6825F92BF6C982E9BBCB5D7D6ED4FBB(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_9, /*hidden argument*/NULL);
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_11 = ((Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA *)__this)->get_SolverHandler_12();
		NullCheck(L_11);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = SolverHandler_get_TransformTarget_m34789672B6825F92BF6C982E9BBCB5D7D6ED4FBB(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_10, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		// break;
		goto IL_008b;
	}

IL_0071:
	{
		// endPoint = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		// break;
		goto IL_008b;
	}

IL_007f:
	{
		// endPoint = SolverHandler.GoalPosition;
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_17 = ((Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA *)__this)->get_SolverHandler_12();
		NullCheck(L_17);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = SolverHandler_get_GoalPosition_m5102D634870888C102BF0CF6F68E5B0F9D8E3797_inline(L_17, /*hidden argument*/NULL);
		V_0 = L_18;
	}

IL_008b:
	{
		// return endPoint;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_0;
		return L_19;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SurfaceMagnetism_get_RaycastDirection_mF9D8C1923CD47C9D4016B02168D02926364EEAC7 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_get_RaycastDirection_mF9D8C1923CD47C9D4016B02168D02926364EEAC7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 direction = Vector3.forward;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (CurrentRaycastDirectionMode == RaycastDirectionMode.TrackedTargetForward)
		int32_t L_1 = SurfaceMagnetism_get_CurrentRaycastDirectionMode_m251616578EC68B653AE610BB2C6C14429BF4661F_inline(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0034;
		}
	}
	{
		// if (SolverHandler.TransformTarget != null)
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_2 = ((Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA *)__this)->get_SolverHandler_12();
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = SolverHandler_get_TransformTarget_m34789672B6825F92BF6C982E9BBCB5D7D6ED4FBB(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		// direction = SolverHandler.TransformTarget.forward;
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_5 = ((Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA *)__this)->get_SolverHandler_12();
		NullCheck(L_5);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = SolverHandler_get_TransformTarget_m34789672B6825F92BF6C982E9BBCB5D7D6ED4FBB(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// }
		goto IL_004e;
	}

IL_0034:
	{
		// direction = (RaycastEndPoint - RaycastOrigin).normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = SurfaceMagnetism_get_RaycastEndPoint_mFD4351223905C0F251B85284C9AC9658BE907E1A(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = SurfaceMagnetism_get_RaycastOrigin_m7E406FCE166669C77E36342DC172E66874CA0940(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_11;
	}

IL_004e:
	{
		// return direction;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = V_0;
		return L_12;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_ScaleOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_ScaleOverride_m1F277829F04AF868E4212C38EF84F3DF0A550E7B (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method)
{
	Vector3Smoothed_t1A35366991A6CB8D3A2FB1AC19520B9F1EEBE656  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// private float ScaleOverride => useLinkedAltScaleOverride ? SolverHandler.AltScale.Current.magnitude : volumeCastSizeOverride;
		bool L_0 = __this->get_useLinkedAltScaleOverride_24();
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		float L_1 = __this->get_volumeCastSizeOverride_23();
		return L_1;
	}

IL_000f:
	{
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_2 = ((Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA *)__this)->get_SolverHandler_12();
		NullCheck(L_2);
		Vector3Smoothed_t1A35366991A6CB8D3A2FB1AC19520B9F1EEBE656  L_3 = SolverHandler_get_AltScale_m7640A53A763EF60957AD2FB75B5E3280EA6FA47D_inline(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3Smoothed_get_Current_m849BB7F2EC08EFB2C716CEBC38B8915EDAB82ABC_inline((Vector3Smoothed_t1A35366991A6CB8D3A2FB1AC19520B9F1EEBE656 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::CalculateMagnetismOrientation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SurfaceMagnetism_CalculateMagnetismOrientation_mF4062942F4A2FEC9C93202C4C84B2C40923638ED (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___surfaceNormal1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_CalculateMagnetismOrientation_mF4062942F4A2FEC9C93202C4C84B2C40923638ED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		// Vector3 currentUpVector = WorkingRotation * Vector3.up;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = Solver_get_WorkingRotation_m6F1C52533CE353EA3D9C1B20215D77BC31FB27C2(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// Quaternion trackedReferenceRotation = Quaternion.LookRotation(-direction, currentUpVector);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___direction0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_3, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// Quaternion surfaceReferenceRotation = Quaternion.LookRotation(-surfaceNormal, currentUpVector);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = ___surfaceNormal1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_7, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_8, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		// if (KeepOrientationVertical)
		bool L_11 = SurfaceMagnetism_get_KeepOrientationVertical_m4052B2E3AFFB0A91707C12EDC0E63BD4C3A51A39_inline(__this, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		// Vector3 trackedReferenceUp = trackedReferenceRotation * Vector3.up;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_12, L_13, /*hidden argument*/NULL);
		// trackedReferenceRotation = Quaternion.FromToRotation(trackedReferenceUp, Vector3.up) * trackedReferenceRotation;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = Quaternion_FromToRotation_m9FEC4227991508EC27E2C3664AC7DDD4E69BA9BB(L_14, L_15, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_17 = V_1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_18 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_16, L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		// Vector3 surfaceReferenceUp = surfaceReferenceRotation * Vector3.up;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_19, L_20, /*hidden argument*/NULL);
		// surfaceReferenceRotation = Quaternion.FromToRotation(surfaceReferenceUp, Vector3.up) * surfaceReferenceRotation;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_23 = Quaternion_FromToRotation_m9FEC4227991508EC27E2C3664AC7DDD4E69BA9BB(L_21, L_22, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_24 = V_2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_25 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_23, L_24, /*hidden argument*/NULL);
		V_2 = L_25;
	}

IL_006b:
	{
		// switch (CurrentOrientationMode)
		int32_t L_26 = SurfaceMagnetism_get_CurrentOrientationMode_m51A3F7D9C28941D5887DB884B5C1C12A0C343CEA_inline(__this, /*hidden argument*/NULL);
		V_3 = L_26;
		int32_t L_27 = V_3;
		switch (L_27)
		{
			case 0:
			{
				goto IL_008e;
			}
			case 1:
			{
				goto IL_009a;
			}
			case 2:
			{
				goto IL_009c;
			}
			case 3:
			{
				goto IL_009e;
			}
			case 4:
			{
				goto IL_00ac;
			}
		}
	}
	{
		goto IL_00b8;
	}

IL_008e:
	{
		// return SolverHandler.GoalRotation;
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_28 = ((Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA *)__this)->get_SolverHandler_12();
		NullCheck(L_28);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_29 = SolverHandler_get_GoalRotation_m40B3BD4A339F646454157B696A10F34D43758F36_inline(L_28, /*hidden argument*/NULL);
		return L_29;
	}

IL_009a:
	{
		// return trackedReferenceRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_30 = V_1;
		return L_30;
	}

IL_009c:
	{
		// return surfaceReferenceRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_31 = V_2;
		return L_31;
	}

IL_009e:
	{
		// return Quaternion.Slerp(trackedReferenceRotation, surfaceReferenceRotation, orientationBlend);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_32 = V_1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_33 = V_2;
		float L_34 = __this->get_orientationBlend_27();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_35 = Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756(L_32, L_33, L_34, /*hidden argument*/NULL);
		return L_35;
	}

IL_00ac:
	{
		// return Quaternion.LookRotation(direction, Vector3.up);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = ___direction0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_38 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_36, L_37, /*hidden argument*/NULL);
		return L_38;
	}

IL_00b8:
	{
		// return Quaternion.identity;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_39 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		return L_39;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::SolverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_SolverUpdate_m6A0894074003DAA737632E65C716547AB68AF152 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_SolverUpdate_m6A0894074003DAA737632E65C716547AB68AF152_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// GoalPosition = WorkingPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Solver_get_WorkingPosition_m37427593915BD327BD778F10D73F886FBDFC4EC6(__this, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m181477018FB1D4AF5CF70436516CCC30CE14877E(__this, L_0, /*hidden argument*/NULL);
		// GoalRotation = WorkingRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = Solver_get_WorkingRotation_m6F1C52533CE353EA3D9C1B20215D77BC31FB27C2(__this, /*hidden argument*/NULL);
		Solver_set_GoalRotation_m03C706FACD2E7E83220451B69BBB997D7FFC509B(__this, L_1, /*hidden argument*/NULL);
		// Vector3 origin = RaycastOrigin;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = SurfaceMagnetism_get_RaycastOrigin_m7E406FCE166669C77E36342DC172E66874CA0940(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		// Vector3 endpoint = RaycastEndPoint;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = SurfaceMagnetism_get_RaycastEndPoint_mFD4351223905C0F251B85284C9AC9658BE907E1A(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		// currentRayStep.UpdateRayStep(ref origin, ref endpoint);
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * L_4 = __this->get_address_of_currentRayStep_32();
		RayStep_UpdateRayStep_m117EC93764AE04F88839E2E0843AB752E8DEA04C((RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 *)L_4, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), /*hidden argument*/NULL);
		// if (currentRayStep.Direction == Vector3.zero)
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * L_5 = __this->get_address_of_currentRayStep_32();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = RayStep_get_Direction_m8250D5F0B337508C3296A13785DA7145C6F00218_inline((RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 *)L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		bool L_8 = Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		// return;
		return;
	}

IL_004d:
	{
		// if (DebugEnabled)
		bool L_9 = SurfaceMagnetism_get_DebugEnabled_mF3A383A6D9DEC3040F691D8B4597775582D5E5C2_inline(__this, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0075;
		}
	}
	{
		// Debug.DrawLine(currentRayStep.Origin, currentRayStep.Terminus, Color.magenta);
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * L_10 = __this->get_address_of_currentRayStep_32();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = RayStep_get_Origin_m1E79D7F702D7F081F045D5748DB3B0BA253E1B03_inline((RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 *)L_10, /*hidden argument*/NULL);
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * L_12 = __this->get_address_of_currentRayStep_32();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = RayStep_get_Terminus_m60FBD17F4BAD18A4D62D004D47E5BBC01C5EE368_inline((RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 *)L_12, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_14 = Color_get_magenta_m04E2DDB63AA6288C701A93E248643A06EBD2D7AD(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2(L_11, L_13, L_14, /*hidden argument*/NULL);
	}

IL_0075:
	{
		// switch (RaycastMode)
		int32_t L_15 = SurfaceMagnetism_get_RaycastMode_mE4FAAD8468A7654CFBFFD9185F3EA88172C68911_inline(__this, /*hidden argument*/NULL);
		V_2 = L_15;
		int32_t L_16 = V_2;
		switch (L_16)
		{
			case 0:
			{
				goto IL_0093;
			}
			case 1:
			{
				goto IL_00a0;
			}
			case 2:
			{
				goto IL_00ad;
			}
			case 3:
			{
				goto IL_00ba;
			}
		}
	}
	{
		return;
	}

IL_0093:
	{
		// SimpleRaycastStepUpdate(ref this.currentRayStep);
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * L_17 = __this->get_address_of_currentRayStep_32();
		SurfaceMagnetism_SimpleRaycastStepUpdate_mCB659570ECD9B53D8F1033FB467A9337ED801F03(__this, (RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 *)L_17, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00a0:
	{
		// BoxRaycastStepUpdate(ref this.currentRayStep);
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * L_18 = __this->get_address_of_currentRayStep_32();
		SurfaceMagnetism_BoxRaycastStepUpdate_mDA6B670B927BCE8FE97B5DE2F77F81F7783C9DAF(__this, (RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 *)L_18, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00ad:
	{
		// SphereRaycastStepUpdate(ref this.currentRayStep);
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * L_19 = __this->get_address_of_currentRayStep_32();
		SurfaceMagnetism_SphereRaycastStepUpdate_m81C7BB2E29C0482415CAB36DF4F83745C7166233(__this, (RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 *)L_19, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00ba:
	{
		// Debug.LogError("Raycast mode set to SphereOverlap which is not valid for SurfaceMagnetism component. Disabling update solvers...");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralCF5B58E13AC9E0BBDD8929CAC9A7A3EC3DACCCE9, /*hidden argument*/NULL);
		// SolverHandler.UpdateSolvers = false;
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_20 = ((Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA *)__this)->get_SolverHandler_12();
		NullCheck(L_20);
		SolverHandler_set_UpdateSolvers_m30F1B914ECC35FD7605652B350A70805B2D0D140_inline(L_20, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::SimpleRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_SimpleRaycastStepUpdate_mCB659570ECD9B53D8F1033FB467A9337ED801F03 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * ___rayStep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_SimpleRaycastStepUpdate_mCB659570ECD9B53D8F1033FB467A9337ED801F03_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// isHit = MixedRealityRaycaster.RaycastSimplePhysicsStep(rayStep, maxRaycastDistance, magneticSurfaces, false, out result);
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * L_0 = ___rayStep0;
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862  L_1 = (*(RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 *)L_0);
		float L_2 = __this->get_maxRaycastDistance_14();
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_3 = __this->get_magneticSurfaces_13();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityRaycaster_t576296B9AC5CC17AC79E55E62D12D22E99001EB3_il2cpp_TypeInfo_var);
		bool L_4 = MixedRealityRaycaster_RaycastSimplePhysicsStep_m035F875D7ECC5B82498C66E4561CA28B530F1FC0(L_1, L_2, L_3, (bool)0, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_4;
		// OnSurface = isHit;
		bool L_5 = V_0;
		SurfaceMagnetism_set_OnSurface_m55D6EDB03DD38C3C40C959266D103699F9BB1363_inline(__this, L_5, /*hidden argument*/NULL);
		// Vector3 hitDelta = result.point - rayStep.Origin;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * L_7 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = RayStep_get_Origin_m1E79D7F702D7F081F045D5748DB3B0BA253E1B03_inline((RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 *)L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_6, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		// float length = hitDelta.magnitude;
		float L_10 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), /*hidden argument*/NULL);
		// if (length < closestDistance)
		float L_11 = __this->get_closestDistance_15();
		if ((!(((float)L_10) < ((float)L_11))))
		{
			goto IL_0067;
		}
	}
	{
		// result.point = rayStep.Origin + rayStep.Direction * closestDistance;
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * L_12 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = RayStep_get_Origin_m1E79D7F702D7F081F045D5748DB3B0BA253E1B03_inline((RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 *)L_12, /*hidden argument*/NULL);
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * L_14 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = RayStep_get_Direction_m8250D5F0B337508C3296A13785DA7145C6F00218_inline((RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 *)L_14, /*hidden argument*/NULL);
		float L_16 = __this->get_closestDistance_15();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_15, L_16, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_13, L_17, /*hidden argument*/NULL);
		RaycastHit_set_point_mCB652835DA3A0AED8A8574B4A47FD9BF8F9A4191((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), L_18, /*hidden argument*/NULL);
	}

IL_0067:
	{
		// if (isHit)
		bool L_19 = V_0;
		if (!L_19)
		{
			goto IL_00bd;
		}
	}
	{
		// GoalPosition = result.point + surfaceNormalOffset * result.normal + surfaceRayOffset * rayStep.Direction;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		float L_21 = __this->get_surfaceNormalOffset_16();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_21, L_22, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_20, L_23, /*hidden argument*/NULL);
		float L_25 = __this->get_surfaceRayOffset_17();
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * L_26 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = RayStep_get_Direction_m8250D5F0B337508C3296A13785DA7145C6F00218_inline((RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 *)L_26, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_25, L_27, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_24, L_28, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m181477018FB1D4AF5CF70436516CCC30CE14877E(__this, L_29, /*hidden argument*/NULL);
		// GoalRotation = CalculateMagnetismOrientation(rayStep.Direction, result.normal);
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * L_30 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = RayStep_get_Direction_m8250D5F0B337508C3296A13785DA7145C6F00218_inline((RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 *)L_30, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_33 = SurfaceMagnetism_CalculateMagnetismOrientation_mF4062942F4A2FEC9C93202C4C84B2C40923638ED(__this, L_31, L_32, /*hidden argument*/NULL);
		Solver_set_GoalRotation_m03C706FACD2E7E83220451B69BBB997D7FFC509B(__this, L_33, /*hidden argument*/NULL);
	}

IL_00bd:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::SphereRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_SphereRaycastStepUpdate_m81C7BB2E29C0482415CAB36DF4F83745C7166233 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * ___rayStep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_SphereRaycastStepUpdate_m81C7BB2E29C0482415CAB36DF4F83745C7166233_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float G_B3_0 = 0.0f;
	{
		// float size = ScaleOverride > 0 ? ScaleOverride : transform.lossyScale.x * sphereSize;
		float L_0 = SurfaceMagnetism_get_ScaleOverride_m1F277829F04AF868E4212C38EF84F3DF0A550E7B(__this, /*hidden argument*/NULL);
		if ((((float)L_0) > ((float)(0.0f))))
		{
			goto IL_0026;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		float L_4 = __this->get_sphereSize_22();
		G_B3_0 = ((float)il2cpp_codegen_multiply((float)L_3, (float)L_4));
		goto IL_002c;
	}

IL_0026:
	{
		float L_5 = SurfaceMagnetism_get_ScaleOverride_m1F277829F04AF868E4212C38EF84F3DF0A550E7B(__this, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_002c:
	{
		V_2 = G_B3_0;
		// isHit = MixedRealityRaycaster.RaycastSpherePhysicsStep(rayStep, size, maxRaycastDistance, magneticSurfaces, false, out result);
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * L_6 = ___rayStep0;
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862  L_7 = (*(RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 *)L_6);
		float L_8 = V_2;
		float L_9 = __this->get_maxRaycastDistance_14();
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_10 = __this->get_magneticSurfaces_13();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityRaycaster_t576296B9AC5CC17AC79E55E62D12D22E99001EB3_il2cpp_TypeInfo_var);
		bool L_11 = MixedRealityRaycaster_RaycastSpherePhysicsStep_m8E60E79FC8AB4D75E705DE6B368CCF3C811EA19D(L_7, L_8, L_9, L_10, (bool)0, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_11;
		// OnSurface = isHit;
		bool L_12 = V_0;
		SurfaceMagnetism_set_OnSurface_m55D6EDB03DD38C3C40C959266D103699F9BB1363_inline(__this, L_12, /*hidden argument*/NULL);
		// Vector3 hitDelta = result.point - rayStep.Origin;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * L_14 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = RayStep_get_Origin_m1E79D7F702D7F081F045D5748DB3B0BA253E1B03_inline((RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 *)L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_13, L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		// float length = hitDelta.magnitude;
		float L_17 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_3), /*hidden argument*/NULL);
		// if (length < closestDistance)
		float L_18 = __this->get_closestDistance_15();
		if ((!(((float)L_17) < ((float)L_18))))
		{
			goto IL_0095;
		}
	}
	{
		// result.point = rayStep.Origin + rayStep.Direction * closestDistance;
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * L_19 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = RayStep_get_Origin_m1E79D7F702D7F081F045D5748DB3B0BA253E1B03_inline((RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 *)L_19, /*hidden argument*/NULL);
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * L_21 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = RayStep_get_Direction_m8250D5F0B337508C3296A13785DA7145C6F00218_inline((RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 *)L_21, /*hidden argument*/NULL);
		float L_23 = __this->get_closestDistance_15();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_22, L_23, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_20, L_24, /*hidden argument*/NULL);
		RaycastHit_set_point_mCB652835DA3A0AED8A8574B4A47FD9BF8F9A4191((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), L_25, /*hidden argument*/NULL);
	}

IL_0095:
	{
		// if (isHit)
		bool L_26 = V_0;
		if (!L_26)
		{
			goto IL_00eb;
		}
	}
	{
		// GoalPosition = result.point + surfaceNormalOffset * result.normal + surfaceRayOffset * rayStep.Direction;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		float L_28 = __this->get_surfaceNormalOffset_16();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_28, L_29, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_27, L_30, /*hidden argument*/NULL);
		float L_32 = __this->get_surfaceRayOffset_17();
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * L_33 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = RayStep_get_Direction_m8250D5F0B337508C3296A13785DA7145C6F00218_inline((RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 *)L_33, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_32, L_34, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_31, L_35, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m181477018FB1D4AF5CF70436516CCC30CE14877E(__this, L_36, /*hidden argument*/NULL);
		// GoalRotation = CalculateMagnetismOrientation(rayStep.Direction, result.normal);
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * L_37 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = RayStep_get_Direction_m8250D5F0B337508C3296A13785DA7145C6F00218_inline((RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 *)L_37, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_40 = SurfaceMagnetism_CalculateMagnetismOrientation_mF4062942F4A2FEC9C93202C4C84B2C40923638ED(__this, L_38, L_39, /*hidden argument*/NULL);
		Solver_set_GoalRotation_m03C706FACD2E7E83220451B69BBB997D7FFC509B(__this, L_40, /*hidden argument*/NULL);
	}

IL_00eb:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::BoxRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_BoxRaycastStepUpdate_mDA6B670B927BCE8FE97B5DE2F77F81F7783C9DAF (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * ___rayStep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_BoxRaycastStepUpdate_mDA6B670B927BCE8FE97B5DE2F77F81F7783C9DAF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_4 = NULL;
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_5 = NULL;
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* V_6 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	{
		// Vector3 scale = ScaleOverride > 0 ? transform.lossyScale.normalized * ScaleOverride : transform.lossyScale;
		float L_0 = SurfaceMagnetism_get_ScaleOverride_m1F277829F04AF868E4212C38EF84F3DF0A550E7B(__this, /*hidden argument*/NULL);
		if ((((float)L_0) > ((float)(0.0f))))
		{
			goto IL_001a;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0039;
	}

IL_001a:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F(L_3, /*hidden argument*/NULL);
		V_7 = L_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_7), /*hidden argument*/NULL);
		float L_6 = SurfaceMagnetism_get_ScaleOverride_m1F277829F04AF868E4212C38EF84F3DF0A550E7B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_5, L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
	}

IL_0039:
	{
		V_0 = G_B3_0;
		// Quaternion orientation = orientationMode == OrientationMode.None ?
		//     Quaternion.LookRotation(rayStep.Direction, Vector3.up) :
		//     CalculateMagnetismOrientation(rayStep.Direction, Vector3.up);
		int32_t L_8 = __this->get_orientationMode_26();
		if (!L_8)
		{
			goto IL_0055;
		}
	}
	{
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * L_9 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = RayStep_get_Direction_m8250D5F0B337508C3296A13785DA7145C6F00218_inline((RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 *)L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = SurfaceMagnetism_CalculateMagnetismOrientation_mF4062942F4A2FEC9C93202C4C84B2C40923638ED(__this, L_10, L_11, /*hidden argument*/NULL);
		G_B6_0 = L_12;
		goto IL_0065;
	}

IL_0055:
	{
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * L_13 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = RayStep_get_Direction_m8250D5F0B337508C3296A13785DA7145C6F00218_inline((RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 *)L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_14, L_15, /*hidden argument*/NULL);
		G_B6_0 = L_16;
	}

IL_0065:
	{
		V_1 = G_B6_0;
		// Matrix4x4 targetMatrix = Matrix4x4.TRS(Vector3.zero, orientation, scale);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_18 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_20 = Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990(L_17, L_18, L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		// if (this.boxCollider == null)
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_21 = __this->get_boxCollider_33();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_22 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_21, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_008d;
		}
	}
	{
		// this.boxCollider = GetComponent<BoxCollider>();
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_23 = Component_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_m81892AA8DC35D8BB06288E5A4C16CF366174953E(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_m81892AA8DC35D8BB06288E5A4C16CF366174953E_RuntimeMethod_var);
		__this->set_boxCollider_33(L_23);
	}

IL_008d:
	{
		// Vector3 extents = boxCollider.size;
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_24 = __this->get_boxCollider_33();
		NullCheck(L_24);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = BoxCollider_get_size_m1C7DA815D3BA9DDB3D92A58BEEFE2FCBA5206FE2(L_24, /*hidden argument*/NULL);
		V_3 = L_25;
		// if (MixedRealityRaycaster.RaycastBoxPhysicsStep(rayStep, extents, transform.position, targetMatrix, maxRaycastDistance, magneticSurfaces, boxRaysPerEdge, orthographicBoxCast, false, out positions, out normals, out hits))
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * L_26 = ___rayStep0;
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862  L_27 = (*(RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 *)L_26);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = V_3;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_29, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_31 = V_2;
		float L_32 = __this->get_maxRaycastDistance_14();
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_33 = __this->get_magneticSurfaces_13();
		int32_t L_34 = __this->get_boxRaysPerEdge_19();
		bool L_35 = __this->get_orthographicBoxCast_20();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityRaycaster_t576296B9AC5CC17AC79E55E62D12D22E99001EB3_il2cpp_TypeInfo_var);
		bool L_36 = MixedRealityRaycaster_RaycastBoxPhysicsStep_mB2301B854D4450745C2CF99BA05897FE7279C398(L_27, L_28, L_30, L_31, L_32, L_33, L_34, L_35, (bool)0, (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28**)(&V_4), (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28**)(&V_5), (BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040**)(&V_6), /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_0233;
		}
	}
	{
		// FindPlacementPlane(rayStep.Origin, rayStep.Direction, positions, normals, hits, boxCollider.size.x, maximumNormalVariance, false, orientationMode == OrientationMode.None, out plane, out distance);
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * L_37 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = RayStep_get_Origin_m1E79D7F702D7F081F045D5748DB3B0BA253E1B03_inline((RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 *)L_37, /*hidden argument*/NULL);
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * L_39 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = RayStep_get_Direction_m8250D5F0B337508C3296A13785DA7145C6F00218_inline((RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 *)L_39, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_41 = V_4;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_42 = V_5;
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_43 = V_6;
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_44 = __this->get_boxCollider_33();
		NullCheck(L_44);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = BoxCollider_get_size_m1C7DA815D3BA9DDB3D92A58BEEFE2FCBA5206FE2(L_44, /*hidden argument*/NULL);
		float L_46 = L_45.get_x_2();
		float L_47 = __this->get_maximumNormalVariance_21();
		int32_t L_48 = __this->get_orientationMode_26();
		SurfaceMagnetism_FindPlacementPlane_m4DDBECFFC7244A476911D23B48E5AB769803CF5C(__this, L_38, L_40, L_41, L_42, L_43, L_46, L_47, (bool)0, (bool)((((int32_t)L_48) == ((int32_t)0))? 1 : 0), (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)(&V_8), (float*)(&V_9), /*hidden argument*/NULL);
		// float verticalCorrectionOffset = 0;
		V_10 = (0.0f);
		// if (IsNormalVertical(plane.normal) && !Mathf.Approximately(rayStep.Direction.y, 0))
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_49 = Plane_get_normal_m203D43F51C449990214D04F332E8261295162E84((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)(&V_8), /*hidden argument*/NULL);
		bool L_50 = SurfaceMagnetism_IsNormalVertical_mBE0147F050C5E31998817DA117425FE1AA55CB8F(L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_018f;
		}
	}
	{
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * L_51 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = RayStep_get_Direction_m8250D5F0B337508C3296A13785DA7145C6F00218_inline((RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 *)L_51, /*hidden argument*/NULL);
		float L_53 = L_52.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_54 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_53, (0.0f), /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_018f;
		}
	}
	{
		// float boxSurfaceVerticalOffset = targetMatrix.MultiplyVector(new Vector3(0, extents.y * 0.5f, 0)).magnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_55 = V_3;
		float L_56 = L_55.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_57;
		memset((&L_57), 0, sizeof(L_57));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_57), (0.0f), ((float)il2cpp_codegen_multiply((float)L_56, (float)(0.5f))), (0.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_58 = Matrix4x4_MultiplyVector_mFED70C58FB201633483463CE64DBF0D0BE081863((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_2), L_57, /*hidden argument*/NULL);
		V_7 = L_58;
		float L_59 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_7), /*hidden argument*/NULL);
		// Vector3 correctionVector = boxSurfaceVerticalOffset * (rayStep.Direction / rayStep.Direction.y);
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * L_60 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_61 = RayStep_get_Direction_m8250D5F0B337508C3296A13785DA7145C6F00218_inline((RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 *)L_60, /*hidden argument*/NULL);
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * L_62 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_63 = RayStep_get_Direction_m8250D5F0B337508C3296A13785DA7145C6F00218_inline((RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 *)L_62, /*hidden argument*/NULL);
		float L_64 = L_63.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_65 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_61, L_64, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_66 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_59, L_65, /*hidden argument*/NULL);
		V_12 = L_66;
		// verticalCorrectionOffset = -correctionVector.magnitude;
		float L_67 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_12), /*hidden argument*/NULL);
		V_10 = ((-L_67));
	}

IL_018f:
	{
		// float boxSurfaceOffset = targetMatrix.MultiplyVector(new Vector3(0, 0, extents.z * 0.5f)).magnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_68 = V_3;
		float L_69 = L_68.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_70;
		memset((&L_70), 0, sizeof(L_70));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_70), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)L_69, (float)(0.5f))), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_71 = Matrix4x4_MultiplyVector_mFED70C58FB201633483463CE64DBF0D0BE081863((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_2), L_70, /*hidden argument*/NULL);
		V_7 = L_71;
		float L_72 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_7), /*hidden argument*/NULL);
		V_11 = L_72;
		// GoalPosition = rayStep.Origin + rayStep.Direction * Mathf.Max(closestDistance, distance + surfaceRayOffset + boxSurfaceOffset + verticalCorrectionOffset) + plane.normal * (0 * boxSurfaceOffset + surfaceNormalOffset);
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * L_73 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_74 = RayStep_get_Origin_m1E79D7F702D7F081F045D5748DB3B0BA253E1B03_inline((RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 *)L_73, /*hidden argument*/NULL);
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * L_75 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_76 = RayStep_get_Direction_m8250D5F0B337508C3296A13785DA7145C6F00218_inline((RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 *)L_75, /*hidden argument*/NULL);
		float L_77 = __this->get_closestDistance_15();
		float L_78 = V_9;
		float L_79 = __this->get_surfaceRayOffset_17();
		float L_80 = V_11;
		float L_81 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_82 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_77, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_78, (float)L_79)), (float)L_80)), (float)L_81)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_83 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_76, L_82, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_84 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_74, L_83, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_85 = Plane_get_normal_m203D43F51C449990214D04F332E8261295162E84((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)(&V_8), /*hidden argument*/NULL);
		float L_86 = V_11;
		float L_87 = __this->get_surfaceNormalOffset_16();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_88 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_85, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)(0.0f), (float)L_86)), (float)L_87)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_89 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_84, L_88, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m181477018FB1D4AF5CF70436516CCC30CE14877E(__this, L_89, /*hidden argument*/NULL);
		// GoalRotation = CalculateMagnetismOrientation(rayStep.Direction, plane.normal);
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * L_90 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_91 = RayStep_get_Direction_m8250D5F0B337508C3296A13785DA7145C6F00218_inline((RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 *)L_90, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_92 = Plane_get_normal_m203D43F51C449990214D04F332E8261295162E84((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)(&V_8), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_93 = SurfaceMagnetism_CalculateMagnetismOrientation_mF4062942F4A2FEC9C93202C4C84B2C40923638ED(__this, L_91, L_92, /*hidden argument*/NULL);
		Solver_set_GoalRotation_m03C706FACD2E7E83220451B69BBB997D7FFC509B(__this, L_93, /*hidden argument*/NULL);
		// OnSurface = true;
		SurfaceMagnetism_set_OnSurface_m55D6EDB03DD38C3C40C959266D103699F9BB1363_inline(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0233:
	{
		// OnSurface = false;
		SurfaceMagnetism_set_OnSurface_m55D6EDB03DD38C3C40C959266D103699F9BB1363_inline(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::FindPlacementPlane(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3[],UnityEngine.Vector3[],System.Boolean[],System.Single,System.Single,System.Boolean,System.Boolean,UnityEngine.Plane&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_FindPlacementPlane_m4DDBECFFC7244A476911D23B48E5AB769803CF5C (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction1, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___positions2, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___normals3, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ___hits4, float ___assetWidth5, float ___maxNormalVariance6, bool ___constrainVertical7, bool ___useClosestDistance8, Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * ___plane9, float* ___closestDistance10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_FindPlacementPlane_m4DDBECFFC7244A476911D23B48E5AB769803CF5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_12;
	memset((&V_12), 0, sizeof(V_12));
	int32_t V_13 = 0;
	float V_14 = 0.0f;
	int32_t V_15 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t V_17 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_18;
	memset((&V_18), 0, sizeof(V_18));
	float V_19 = 0.0f;
	int32_t V_20 = 0;
	float V_21 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_22;
	memset((&V_22), 0, sizeof(V_22));
	float V_23 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B48_0;
	memset((&G_B48_0), 0, sizeof(G_B48_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B47_0;
	memset((&G_B47_0), 0, sizeof(G_B47_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B49_0;
	memset((&G_B49_0), 0, sizeof(G_B49_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B49_1;
	memset((&G_B49_1), 0, sizeof(G_B49_1));
	{
		// int rayCount = positions.Length;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_0 = ___positions2;
		NullCheck(L_0);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		// Vector3 originalDirection = direction;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___direction1;
		V_1 = L_1;
		// if (constrainVertical)
		bool L_2 = ___constrainVertical7;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// direction.y = 0.0f;
		(&___direction1)->set_y_3((0.0f));
		// direction = direction.normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___direction1), /*hidden argument*/NULL);
		___direction1 = L_3;
	}

IL_001f:
	{
		// closestDistance = float.PositiveInfinity;
		float* L_4 = ___closestDistance10;
		*((float*)L_4) = (float)(std::numeric_limits<float>::infinity());
		// int numHits = 0;
		V_2 = 0;
		// int closestPointIdx = -1;
		V_3 = (-1);
		// float farthestDistance = 0f;
		V_4 = (0.0f);
		// var averageNormal = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		V_5 = L_5;
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		V_13 = 0;
		goto IL_0090;
	}

IL_003e:
	{
		// if (hits[hitIndex])
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_6 = ___hits4;
		int32_t L_7 = V_13;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (uint8_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		if (!L_9)
		{
			goto IL_008a;
		}
	}
	{
		// float distance = Vector3.Dot(direction, positions[hitIndex] - origin);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = ___direction1;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_11 = ___positions2;
		int32_t L_12 = V_13;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = ___origin0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_14, L_15, /*hidden argument*/NULL);
		float L_17 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_10, L_16, /*hidden argument*/NULL);
		V_14 = L_17;
		// if (distance < closestDistance)
		float L_18 = V_14;
		float* L_19 = ___closestDistance10;
		float L_20 = *((float*)L_19);
		if ((!(((float)L_18) < ((float)L_20))))
		{
			goto IL_006a;
		}
	}
	{
		// closestPointIdx = hitIndex;
		int32_t L_21 = V_13;
		V_3 = L_21;
		// closestDistance = distance;
		float* L_22 = ___closestDistance10;
		float L_23 = V_14;
		*((float*)L_22) = (float)L_23;
	}

IL_006a:
	{
		// if (distance > farthestDistance)
		float L_24 = V_14;
		float L_25 = V_4;
		if ((!(((float)L_24) > ((float)L_25))))
		{
			goto IL_0074;
		}
	}
	{
		// farthestDistance = distance;
		float L_26 = V_14;
		V_4 = L_26;
	}

IL_0074:
	{
		// averageNormal += normals[hitIndex];
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = V_5;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_28 = ___normals3;
		int32_t L_29 = V_13;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_27, L_31, /*hidden argument*/NULL);
		V_5 = L_32;
		// ++numHits;
		int32_t L_33 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_008a:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_34 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_0090:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_35 = V_13;
		int32_t L_36 = V_0;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_003e;
		}
	}
	{
		// Vector3 closestPoint = positions[closestPointIdx];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_37 = ___positions2;
		int32_t L_38 = V_3;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_6 = L_40;
		// averageNormal /= numHits;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = V_5;
		int32_t L_42 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_41, (((float)((float)L_42))), /*hidden argument*/NULL);
		V_5 = L_43;
		// float variance = 0;
		V_7 = (0.0f);
		// for (int hitIndex = 0; hitIndex < rayCount; ++hitIndex)
		V_15 = 0;
		goto IL_00e0;
	}

IL_00b5:
	{
		// if (hits[hitIndex])
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_44 = ___hits4;
		int32_t L_45 = V_15;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		uint8_t L_47 = (uint8_t)(L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		if (!L_47)
		{
			goto IL_00da;
		}
	}
	{
		// variance += (normals[hitIndex] - averageNormal).magnitude;
		float L_48 = V_7;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_49 = ___normals3;
		int32_t L_50 = V_15;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_53 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_54 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_52, L_53, /*hidden argument*/NULL);
		V_16 = L_54;
		float L_55 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_16), /*hidden argument*/NULL);
		V_7 = ((float)il2cpp_codegen_add((float)L_48, (float)L_55));
	}

IL_00da:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; ++hitIndex)
		int32_t L_56 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
	}

IL_00e0:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; ++hitIndex)
		int32_t L_57 = V_15;
		int32_t L_58 = V_0;
		if ((((int32_t)L_57) < ((int32_t)L_58)))
		{
			goto IL_00b5;
		}
	}
	{
		// variance /= numHits;
		float L_59 = V_7;
		int32_t L_60 = V_2;
		V_7 = ((float)((float)L_59/(float)(((float)((float)L_60)))));
		// if (variance > maxNormalVariance || numHits < rayCount * 0.25f)
		float L_61 = V_7;
		float L_62 = ___maxNormalVariance6;
		if ((((float)L_61) > ((float)L_62)))
		{
			goto IL_00fe;
		}
	}
	{
		int32_t L_63 = V_2;
		int32_t L_64 = V_0;
		if ((!(((float)(((float)((float)L_63)))) < ((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_64))), (float)(0.25f)))))))
		{
			goto IL_0113;
		}
	}

IL_00fe:
	{
		// plane = new Plane(-direction, closestPoint);
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * L_65 = ___plane9;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_66 = ___direction1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_67 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_66, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_68 = V_6;
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  L_69;
		memset((&L_69), 0, sizeof(L_69));
		Plane__ctor_m6535EAD5E675627C2533962F1F7890CBFA2BA44A((&L_69), L_67, L_68, /*hidden argument*/NULL);
		*(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)L_65 = L_69;
		// return;
		return;
	}

IL_0113:
	{
		// var lowAngle = float.PositiveInfinity;
		V_8 = (std::numeric_limits<float>::infinity());
		// var highAngle = float.NegativeInfinity;
		V_9 = (-std::numeric_limits<float>::infinity());
		// int lowIndex = -1;
		V_10 = (-1);
		// int highIndex = -1;
		V_11 = (-1);
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		V_17 = 0;
		goto IL_0193;
	}

IL_012c:
	{
		// if (hits[hitIndex] == false || hitIndex == closestPointIdx)
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_70 = ___hits4;
		int32_t L_71 = V_17;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		uint8_t L_73 = (uint8_t)(L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		if (!L_73)
		{
			goto IL_018d;
		}
	}
	{
		int32_t L_74 = V_17;
		int32_t L_75 = V_3;
		if ((((int32_t)L_74) == ((int32_t)L_75)))
		{
			goto IL_018d;
		}
	}
	{
		// Vector3 difference = positions[hitIndex] - closestPoint;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_76 = ___positions2;
		int32_t L_77 = V_17;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_80 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_81 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_79, L_80, /*hidden argument*/NULL);
		V_18 = L_81;
		// if (constrainVertical)
		bool L_82 = ___constrainVertical7;
		if (!L_82)
		{
			goto IL_016e;
		}
	}
	{
		// difference.y = 0.0f;
		(&V_18)->set_y_3((0.0f));
		// difference.Normalize();
		Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_18), /*hidden argument*/NULL);
		// if (difference == Vector3.zero)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_83 = V_18;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_84 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		bool L_85 = Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806(L_83, L_84, /*hidden argument*/NULL);
		if (L_85)
		{
			goto IL_018d;
		}
	}

IL_016e:
	{
		// difference.Normalize();
		Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_18), /*hidden argument*/NULL);
		// float angle = Vector3.Dot(direction, difference);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_86 = ___direction1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_87 = V_18;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_88 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_86, L_87, /*hidden argument*/NULL);
		V_19 = L_88;
		// if (angle < lowAngle)
		float L_89 = V_19;
		float L_90 = V_8;
		if ((!(((float)L_89) < ((float)L_90))))
		{
			goto IL_018d;
		}
	}
	{
		// lowAngle = angle;
		float L_91 = V_19;
		V_8 = L_91;
		// lowIndex = hitIndex;
		int32_t L_92 = V_17;
		V_10 = L_92;
	}

IL_018d:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_93 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)1));
	}

IL_0193:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_94 = V_17;
		int32_t L_95 = V_0;
		if ((((int32_t)L_94) < ((int32_t)L_95)))
		{
			goto IL_012c;
		}
	}
	{
		// if (!constrainVertical && lowIndex != -1)
		bool L_96 = ___constrainVertical7;
		if (L_96)
		{
			goto IL_0260;
		}
	}
	{
		int32_t L_97 = V_10;
		if ((((int32_t)L_97) == ((int32_t)(-1))))
		{
			goto IL_0260;
		}
	}
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		V_20 = 0;
		goto IL_0258;
	}

IL_01af:
	{
		// if (hits[hitIndex] == false || hitIndex == closestPointIdx || hitIndex == lowIndex)
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_98 = ___hits4;
		int32_t L_99 = V_20;
		NullCheck(L_98);
		int32_t L_100 = L_99;
		uint8_t L_101 = (uint8_t)(L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		if (!L_101)
		{
			goto IL_0252;
		}
	}
	{
		int32_t L_102 = V_20;
		int32_t L_103 = V_3;
		if ((((int32_t)L_102) == ((int32_t)L_103)))
		{
			goto IL_0252;
		}
	}
	{
		int32_t L_104 = V_20;
		int32_t L_105 = V_10;
		if ((((int32_t)L_104) == ((int32_t)L_105)))
		{
			goto IL_0252;
		}
	}
	{
		// float dot = Mathf.Abs(Vector3.Dot((positions[hitIndex] - closestPoint).normalized, (positions[lowIndex] - closestPoint).normalized));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_106 = ___positions2;
		int32_t L_107 = V_20;
		NullCheck(L_106);
		int32_t L_108 = L_107;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_110 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_111 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_109, L_110, /*hidden argument*/NULL);
		V_16 = L_111;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_112 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_16), /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_113 = ___positions2;
		int32_t L_114 = V_10;
		NullCheck(L_113);
		int32_t L_115 = L_114;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_116 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_117 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_118 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_116, L_117, /*hidden argument*/NULL);
		V_16 = L_118;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_119 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_16), /*hidden argument*/NULL);
		float L_120 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_112, L_119, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_121 = fabsf(L_120);
		// if (dot > MaxDot)
		if ((((float)L_121) > ((float)(0.97f))))
		{
			goto IL_0252;
		}
	}
	{
		// float nextAngle = Mathf.Abs(Vector3.Dot(direction, Vector3.Cross(positions[lowIndex] - closestPoint, positions[hitIndex] - closestPoint).normalized));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_122 = ___direction1;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_123 = ___positions2;
		int32_t L_124 = V_10;
		NullCheck(L_123);
		int32_t L_125 = L_124;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_126 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_127 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_128 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_126, L_127, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_129 = ___positions2;
		int32_t L_130 = V_20;
		NullCheck(L_129);
		int32_t L_131 = L_130;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_133 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_134 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_132, L_133, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_135 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_128, L_134, /*hidden argument*/NULL);
		V_16 = L_135;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_136 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_16), /*hidden argument*/NULL);
		float L_137 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_122, L_136, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_138 = fabsf(L_137);
		V_21 = L_138;
		// if (nextAngle > highAngle)
		float L_139 = V_21;
		float L_140 = V_9;
		if ((!(((float)L_139) > ((float)L_140))))
		{
			goto IL_0252;
		}
	}
	{
		// highAngle = nextAngle;
		float L_141 = V_21;
		V_9 = L_141;
		// highIndex = hitIndex;
		int32_t L_142 = V_20;
		V_11 = L_142;
	}

IL_0252:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_143 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_143, (int32_t)1));
	}

IL_0258:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_144 = V_20;
		int32_t L_145 = V_0;
		if ((((int32_t)L_144) < ((int32_t)L_145)))
		{
			goto IL_01af;
		}
	}

IL_0260:
	{
		// if (lowIndex != -1)
		int32_t L_146 = V_10;
		if ((((int32_t)L_146) == ((int32_t)(-1))))
		{
			goto IL_0337;
		}
	}
	{
		// if (debugEnabled)
		bool L_147 = __this->get_debugEnabled_29();
		if (!L_147)
		{
			goto IL_0284;
		}
	}
	{
		// Debug.DrawLine(closestPoint, positions[lowIndex], Color.red);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_148 = V_6;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_149 = ___positions2;
		int32_t L_150 = V_10;
		NullCheck(L_149);
		int32_t L_151 = L_150;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_152 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_153 = Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2(L_148, L_152, L_153, /*hidden argument*/NULL);
	}

IL_0284:
	{
		// if (highIndex != -1)
		int32_t L_154 = V_11;
		if ((((int32_t)L_154) == ((int32_t)(-1))))
		{
			goto IL_02d5;
		}
	}
	{
		// if (debugEnabled)
		bool L_155 = __this->get_debugEnabled_29();
		if (!L_155)
		{
			goto IL_02a5;
		}
	}
	{
		// Debug.DrawLine(closestPoint, positions[highIndex], Color.green);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_156 = V_6;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_157 = ___positions2;
		int32_t L_158 = V_11;
		NullCheck(L_157);
		int32_t L_159 = L_158;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_160 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_161 = Color_get_green_mD53D8F980E92A0755759FBB2981E3DDEFCD084C0(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2(L_156, L_160, L_161, /*hidden argument*/NULL);
	}

IL_02a5:
	{
		// placementNormal = Vector3.Cross(positions[lowIndex] - closestPoint, positions[highIndex] - closestPoint).normalized;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_162 = ___positions2;
		int32_t L_163 = V_10;
		NullCheck(L_162);
		int32_t L_164 = L_163;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_165 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_166 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_167 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_165, L_166, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_168 = ___positions2;
		int32_t L_169 = V_11;
		NullCheck(L_168);
		int32_t L_170 = L_169;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_171 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_172 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_173 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_171, L_172, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_174 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_167, L_173, /*hidden argument*/NULL);
		V_16 = L_174;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_175 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_16), /*hidden argument*/NULL);
		V_12 = L_175;
		// }
		goto IL_0318;
	}

IL_02d5:
	{
		// Vector3 planeUp = Vector3.Cross(positions[lowIndex] - closestPoint, direction);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_176 = ___positions2;
		int32_t L_177 = V_10;
		NullCheck(L_176);
		int32_t L_178 = L_177;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_179 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_180 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_181 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_179, L_180, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_182 = ___direction1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_183 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_181, L_182, /*hidden argument*/NULL);
		V_22 = L_183;
		// placementNormal = Vector3.Cross(positions[lowIndex] - closestPoint, constrainVertical ? Vector3.up : planeUp).normalized;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_184 = ___positions2;
		int32_t L_185 = V_10;
		NullCheck(L_184);
		int32_t L_186 = L_185;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_187 = (L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_186));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_188 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_189 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_187, L_188, /*hidden argument*/NULL);
		bool L_190 = ___constrainVertical7;
		G_B47_0 = L_189;
		if (L_190)
		{
			G_B48_0 = L_189;
			goto IL_0303;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_191 = V_22;
		G_B49_0 = L_191;
		G_B49_1 = G_B47_0;
		goto IL_0308;
	}

IL_0303:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_192 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		G_B49_0 = L_192;
		G_B49_1 = G_B48_0;
	}

IL_0308:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_193 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(G_B49_1, G_B49_0, /*hidden argument*/NULL);
		V_16 = L_193;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_194 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_16), /*hidden argument*/NULL);
		V_12 = L_194;
	}

IL_0318:
	{
		// if (debugEnabled)
		bool L_195 = __this->get_debugEnabled_29();
		if (!L_195)
		{
			goto IL_0344;
		}
	}
	{
		// Debug.DrawLine(closestPoint, closestPoint + placementNormal, Color.blue);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_196 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_197 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_198 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_199 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_197, L_198, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_200 = Color_get_blue_m5449DCBB31EEB2324489989754C00123982EBABA(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2(L_196, L_199, L_200, /*hidden argument*/NULL);
		// }
		goto IL_0344;
	}

IL_0337:
	{
		// placementNormal = direction * -1.0f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_201 = ___direction1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_202 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_201, (-1.0f), /*hidden argument*/NULL);
		V_12 = L_202;
	}

IL_0344:
	{
		// if (Vector3.Dot(placementNormal, direction) > 0.0f)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_203 = V_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_204 = ___direction1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_205 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_203, L_204, /*hidden argument*/NULL);
		if ((!(((float)L_205) > ((float)(0.0f)))))
		{
			goto IL_0361;
		}
	}
	{
		// placementNormal *= -1.0f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_206 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_207 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_206, (-1.0f), /*hidden argument*/NULL);
		V_12 = L_207;
	}

IL_0361:
	{
		// plane = new Plane(placementNormal, closestPoint);
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * L_208 = ___plane9;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_209 = V_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_210 = V_6;
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  L_211;
		memset((&L_211), 0, sizeof(L_211));
		Plane__ctor_m6535EAD5E675627C2533962F1F7890CBFA2BA44A((&L_211), L_209, L_210, /*hidden argument*/NULL);
		*(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)L_208 = L_211;
		// if (debugEnabled)
		bool L_212 = __this->get_debugEnabled_29();
		if (!L_212)
		{
			goto IL_0387;
		}
	}
	{
		// Debug.DrawRay(closestPoint, placementNormal, Color.cyan);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_213 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_214 = V_12;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_215 = Color_get_cyan_m4E9C84C7E1003311C2D4BDB281F2D11DF5F7FDE2(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawRay_m0D11229E8004FAAE411E457CD7DB316DEF6F9DE3(L_213, L_214, L_215, /*hidden argument*/NULL);
	}

IL_0387:
	{
		// if (!useClosestDistance && closestPointIdx >= 0)
		bool L_216 = ___useClosestDistance8;
		if (L_216)
		{
			goto IL_03d2;
		}
	}
	{
		int32_t L_217 = V_3;
		if ((((int32_t)L_217) < ((int32_t)0)))
		{
			goto IL_03d2;
		}
	}
	{
		// if (plane.Raycast(new Ray(origin, originalDirection), out centerPlaneDistance) || !centerPlaneDistance.Equals(0.0f))
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * L_218 = ___plane9;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_219 = ___origin0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_220 = V_1;
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_221;
		memset((&L_221), 0, sizeof(L_221));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_221), L_219, L_220, /*hidden argument*/NULL);
		bool L_222 = Plane_Raycast_m04E61D7C78A5DA70F4F73F9805ABB54177B799A9((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)L_218, L_221, (float*)(&V_23), /*hidden argument*/NULL);
		if (L_222)
		{
			goto IL_03af;
		}
	}
	{
		bool L_223 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&V_23), (0.0f), /*hidden argument*/NULL);
		if (L_223)
		{
			goto IL_03c8;
		}
	}

IL_03af:
	{
		// closestDistance = Mathf.Clamp(centerPlaneDistance, closestDistance, farthestDistance + assetWidth * 0.5f);
		float* L_224 = ___closestDistance10;
		float L_225 = V_23;
		float* L_226 = ___closestDistance10;
		float L_227 = *((float*)L_226);
		float L_228 = V_4;
		float L_229 = ___assetWidth5;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_230 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_225, L_227, ((float)il2cpp_codegen_add((float)L_228, (float)((float)il2cpp_codegen_multiply((float)L_229, (float)(0.5f))))), /*hidden argument*/NULL);
		*((float*)L_224) = (float)L_230;
		// }
		return;
	}

IL_03c8:
	{
		// Debug.LogError("FindPlacementPlane: Not expected to have the center point not intersect the plane.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralACF914D58CBEED02A6B4918D9E01DD865FA4931F, /*hidden argument*/NULL);
	}

IL_03d2:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::IsNormalVertical(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_IsNormalVertical_mBE0147F050C5E31998817DA117425FE1AA55CB8F (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normal0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_IsNormalVertical_mBE0147F050C5E31998817DA117425FE1AA55CB8F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static bool IsNormalVertical(Vector3 normal) => 1f - Mathf.Abs(normal.y) < 0.01f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___normal0;
		float L_1 = L_0.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_2 = fabsf(L_1);
		return (bool)((((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_2))) < ((float)(0.01f)))? 1 : 0);
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_MaxDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_MaxDistance_m3FCE6167350AD3FC70A44DB6A6A332017DD1E060 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method)
{
	{
		// get => maxRaycastDistance;
		float L_0 = __this->get_maxRaycastDistance_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_MaxDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_MaxDistance_mDC3C339D7EADD3A51BF496B946EE3477CBCC2486 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => maxRaycastDistance = value;
		float L_0 = ___value0;
		__this->set_maxRaycastDistance_14(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_CloseDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_CloseDistance_m6A88A0BDF61BC0FAE7007A777ECDF52181987AFA (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method)
{
	{
		// get { return closestDistance; }
		float L_0 = __this->get_closestDistance_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_CloseDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_CloseDistance_mFD3F3393D8B1C32A5193D96F0EB0EDAF273E280B (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { closestDistance = value; }
		float L_0 = ___value0;
		__this->set_closestDistance_15(L_0);
		// set { closestDistance = value; }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism__ctor_m0858D01A80AC067343F3C21BA4741AAB40691199 (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism__ctor_m0858D01A80AC067343F3C21BA4741AAB40691199_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private LayerMask[] magneticSurfaces = { UnityEngine.Physics.DefaultRaycastLayers };
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_0 = (LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D*)(LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D*)SZArrayNew(LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D_il2cpp_TypeInfo_var, (uint32_t)1);
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_1 = L_0;
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_2 = LayerMask_op_Implicit_m3F256A7D96C66548F5B62C4621B9725301850300(((int32_t)-5), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 )L_2);
		__this->set_magneticSurfaces_13(L_1);
		// private float maxRaycastDistance = 50.0f;
		__this->set_maxRaycastDistance_14((50.0f));
		// private float closestDistance = 0.5f;
		__this->set_closestDistance_15((0.5f));
		// private float surfaceNormalOffset = 0.5f;
		__this->set_surfaceNormalOffset_16((0.5f));
		// private int boxRaysPerEdge = 3;
		__this->set_boxRaysPerEdge_19(3);
		// private float maximumNormalVariance = 0.5f;
		__this->set_maximumNormalVariance_21((0.5f));
		// private float sphereSize = 1.0f;
		__this->set_sphereSize_22((1.0f));
		// private OrientationMode orientationMode = OrientationMode.TrackedTarget;
		__this->set_orientationMode_26(1);
		// private float orientationBlend = 0.65f;
		__this->set_orientationBlend_27((0.65f));
		// private bool keepOrientationVertical = true;
		__this->set_keepOrientationVertical_28((bool)1);
		Solver__ctor_mA7C0EDFA6896365A1CBF28E995151F5E02A1CE3E(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_AutoStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_AutoStart_mFB07CEFD849851649541B54B5530FD245AF32C8C (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method)
{
	{
		// get => autoStart;
		bool L_0 = __this->get_autoStart_13();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_AutoStart(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_AutoStart_m678BB441D0E481810ED277F8BA7A80EB72E2E7B9 (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => autoStart = value;
		bool L_0 = ___value0;
		__this->set_autoStart_13(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_DefaultPlacementDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TapToPlace_get_DefaultPlacementDistance_mA896B600DEE2C8D96BACDDFCB39627A43B3993A3 (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method)
{
	{
		// get => defaultPlacementDistance;
		float L_0 = __this->get_defaultPlacementDistance_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_DefaultPlacementDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_DefaultPlacementDistance_m0F54505B616530BAC7F044797B753BC39B9D5435 (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => defaultPlacementDistance = value;
		float L_0 = ___value0;
		__this->set_defaultPlacementDistance_14(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_MaxRaycastDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TapToPlace_get_MaxRaycastDistance_m357D3DEC9B2141DFB1150D75130452B32A0C53D9 (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method)
{
	{
		// get => maxRaycastDistance;
		float L_0 = __this->get_maxRaycastDistance_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_MaxRaycastDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_MaxRaycastDistance_mEADB4593380F2FEFA6E9753D68B2A0D37785264C (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => maxRaycastDistance = value;
		float L_0 = ___value0;
		__this->set_maxRaycastDistance_15(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_IsBeingPlaced()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_IsBeingPlaced_m378CB677F72E25C93E5B43CDAFB00BCE2D380844 (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsBeingPlaced { get; protected set; }
		bool L_0 = __this->get_U3CIsBeingPlacedU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_IsBeingPlaced(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_IsBeingPlaced_mD532A8660961BCD99432C3577378532D24F76034 (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsBeingPlaced { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CIsBeingPlacedU3Ek__BackingField_16(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_SurfaceNormalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TapToPlace_get_SurfaceNormalOffset_m3BD1BB01D35B9AE2ECB26D865FA4AF8781E7F57D (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method)
{
	{
		// get => surfaceNormalOffset;
		float L_0 = __this->get_surfaceNormalOffset_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_SurfaceNormalOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_SurfaceNormalOffset_m23D05A69BF58BA242338B26BFEA2641D08A51F6A (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// surfaceNormalOffset = value;
		float L_0 = ___value0;
		__this->set_surfaceNormalOffset_17(L_0);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_UseDefaultSurfaceNormalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_UseDefaultSurfaceNormalOffset_m8FBBF7F8AFFC831780D4C6D109380E70FA372BE5 (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method)
{
	{
		// get => useDefaultSurfaceNormalOffset;
		bool L_0 = __this->get_useDefaultSurfaceNormalOffset_18();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_UseDefaultSurfaceNormalOffset(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_UseDefaultSurfaceNormalOffset_m20E7A9E06F751888A7ABB0F4B12C1FAF68A3465B (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => useDefaultSurfaceNormalOffset = value;
		bool L_0 = ___value0;
		__this->set_useDefaultSurfaceNormalOffset_18(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_KeepOrientationVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_KeepOrientationVertical_mD803ECB5E181CC6200AB867677172886556858E9 (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method)
{
	{
		// get => keepOrientationVertical;
		bool L_0 = __this->get_keepOrientationVertical_19();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_KeepOrientationVertical(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_KeepOrientationVertical_m2932C93C6B7A69B909B0051EB3DE44C03FA8A49E (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => keepOrientationVertical = value;
		bool L_0 = ___value0;
		__this->set_keepOrientationVertical_19(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_RotateAccordingToSurface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_RotateAccordingToSurface_m5C024ECD78C42C62FD23F547A95B63DA1B3DFFAE (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method)
{
	{
		// get => rotateAccordingToSurface;
		bool L_0 = __this->get_rotateAccordingToSurface_20();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_RotateAccordingToSurface(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_RotateAccordingToSurface_mB2090F6CAA404AAC8D6123269232195E0F10378C (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => rotateAccordingToSurface = value;
		bool L_0 = ___value0;
		__this->set_rotateAccordingToSurface_20(L_0);
		return;
	}
}
// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_MagneticSurfaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* TapToPlace_get_MagneticSurfaces_m38E82447D7C6018A7C0519672295F7173CF4DE57 (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method)
{
	{
		// get => magneticSurfaces;
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_0 = __this->get_magneticSurfaces_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_MagneticSurfaces(UnityEngine.LayerMask[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_MagneticSurfaces_m48DBC11C09DC8108348EB604071F0FB94B6325EF (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___value0, const RuntimeMethod* method)
{
	{
		// set => magneticSurfaces = value;
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_0 = ___value0;
		__this->set_magneticSurfaces_21(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_DebugEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_DebugEnabled_m80AC7403507B82606D8A038F6505EB28F1C8D12D (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method)
{
	{
		// get => debugEnabled;
		bool L_0 = __this->get_debugEnabled_22();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_DebugEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_DebugEnabled_m9ADC655AEB953B1D0E1D88C0B8DDF5A9A21A9CDC (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => debugEnabled = value;
		bool L_0 = ___value0;
		__this->set_debugEnabled_22(L_0);
		return;
	}
}
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_OnPlacingStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * TapToPlace_get_OnPlacingStarted_m9B1A9AAFCF25CBB02576510CADF49676FEC83A99 (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method)
{
	{
		// get => onPlacingStarted;
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = __this->get_onPlacingStarted_23();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_OnPlacingStarted(UnityEngine.Events.UnityEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_OnPlacingStarted_mFC3D08B8E16758B960B9AB0A7B0D9B1704931978 (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___value0, const RuntimeMethod* method)
{
	{
		// set => onPlacingStarted = value;
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = ___value0;
		__this->set_onPlacingStarted_23(L_0);
		return;
	}
}
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_OnPlacingStopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * TapToPlace_get_OnPlacingStopped_m53FFA8A3BE933285B1975950E864111A5184D4A7 (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method)
{
	{
		// get => onPlacingStopped;
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = __this->get_onPlacingStopped_24();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_OnPlacingStopped(UnityEngine.Events.UnityEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_OnPlacingStopped_m1FB902054B2E628AA7E609C442485F11D1223E02 (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___value0, const RuntimeMethod* method)
{
	{
		// set => onPlacingStopped = value;
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = ___value0;
		__this->set_onPlacingStopped_24(L_0);
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_GameObjectLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TapToPlace_get_GameObjectLayer_mC4984D3CA437DC807C7F6AC710E8C9AF455DC4F5 (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method)
{
	{
		// protected internal int GameObjectLayer { get; protected set; }
		int32_t L_0 = __this->get_U3CGameObjectLayerU3Ek__BackingField_25();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_GameObjectLayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_GameObjectLayer_mD0BEF54A6CFF41AE952A21F3F102548A09E10974 (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// protected internal int GameObjectLayer { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CGameObjectLayerU3Ek__BackingField_25(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_IsColliderPresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_IsColliderPresent_m0EE83D6E2C10C3510851A739CDE677B9D70310CE (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapToPlace_get_IsColliderPresent_m0EE83D6E2C10C3510851A739CDE677B9D70310CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected internal bool IsColliderPresent => gameObject != null && gameObject.GetComponent<Collider>() != null;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_3 = GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300(L_2, /*hidden argument*/GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		return L_4;
	}

IL_0020:
	{
		return (bool)0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_defaultSurfaceNormalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TapToPlace_get_defaultSurfaceNormalOffset_m3B7B2FD2D570E38FCDE6D121A5AEB9ED39523BDA (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapToPlace_get_defaultSurfaceNormalOffset_m3B7B2FD2D570E38FCDE6D121A5AEB9ED39523BDA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// private float defaultSurfaceNormalOffset => gameObject.GetComponent<Collider>().bounds.extents.z;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_1 = GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300(L_0, /*hidden argument*/GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300_RuntimeMethod_var);
		NullCheck(L_1);
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_2 = Collider_get_bounds_mD3CB68E38FB998406193A88D18C01F510272058A(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Bounds_get_extents_mBA4B2196036DD5A858BDAD53BC71A778B41841C9((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_0), /*hidden argument*/NULL);
		float L_4 = L_3.get_z_4();
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_Start_mFF0BE7D67BBA3035CF699C46BB6B434D060E1661 (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapToPlace_Start_mFF0BE7D67BBA3035CF699C46BB6B434D060E1661_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		Solver_Start_m667FE1B37A72CC2D586E88025E9E52681E010409(__this, /*hidden argument*/NULL);
		// UnityPhysics.SyncTransforms();
		Physics_SyncTransforms_mCC0AB451C1384416298E5FAEF4E818503929AE58(/*hidden argument*/NULL);
		// ignoreRaycastLayer = LayerMask.NameToLayer("Ignore Raycast");
		int32_t L_0 = LayerMask_NameToLayer_m6491D9EA75F68B1F8AE15A9B4F193FFB9352B901(_stringLiteralB77BEAEBB0343C40DD9CDA270E3835797BAB5BA9, /*hidden argument*/NULL);
		__this->set_ignoreRaycastLayer_26(L_0);
		// startCalled = true;
		__this->set_startCalled_32((bool)1);
		// if (AutoStart || placementRequested)
		bool L_1 = TapToPlace_get_AutoStart_mFB07CEFD849851649541B54B5530FD245AF32C8C_inline(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0032;
		}
	}
	{
		bool L_2 = __this->get_placementRequested_33();
		if (!L_2)
		{
			goto IL_0039;
		}
	}

IL_0032:
	{
		// StartPlacement();
		TapToPlace_StartPlacement_m5E3F040F4CDC32D685F4BE17528097435DCD0A6C(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0039:
	{
		// SolverHandler.UpdateSolvers = false;
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_3 = ((Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA *)__this)->get_SolverHandler_12();
		NullCheck(L_3);
		SolverHandler_set_UpdateSolvers_m30F1B914ECC35FD7605652B350A70805B2D0D140_inline(L_3, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_OnDisable_mBD4AE6D5F19B50436ABC2A8DB059C6D697B2F2F1 (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapToPlace_OnDisable_mBD4AE6D5F19B50436ABC2A8DB059C6D697B2F2F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// CoreServices.InputSystem?.UnregisterHandler<IMixedRealityPointerHandler>(this);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB284CAD260668D8742F59ED5DDC128A38712D7F4_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = CoreServices_get_InputSystem_m37F8BF26FAFB4976BAAD92492214E58DC868DC27(/*hidden argument*/NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		NullCheck(G_B2_0);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealityPointerHandler_t614135A0BD4B7C047DE9B0BFD27BCB187B3D27DB_m33F91BA4B75CF5D9E9B067C036D45C4560803D0F_RuntimeMethod_var, G_B2_0, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::StartPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_StartPlacement_m5E3F040F4CDC32D685F4BE17528097435DCD0A6C (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapToPlace_StartPlacement_m5E3F040F4CDC32D685F4BE17528097435DCD0A6C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * G_B5_0 = NULL;
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * G_B4_0 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	{
		// if (!startCalled)
		bool L_0 = __this->get_startCalled_32();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// placementRequested = true;
		__this->set_placementRequested_33((bool)1);
		// return;
		return;
	}

IL_0010:
	{
		// if (!IsBeingPlaced)
		bool L_1 = TapToPlace_get_IsBeingPlaced_m378CB677F72E25C93E5B43CDAFB00BCE2D380844_inline(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_006e;
		}
	}
	{
		// GameObjectLayer = gameObject.layer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8(L_2, /*hidden argument*/NULL);
		TapToPlace_set_GameObjectLayer_mD0BEF54A6CFF41AE952A21F3F102548A09E10974_inline(__this, L_3, /*hidden argument*/NULL);
		// gameObject.layer = ignoreRaycastLayer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_ignoreRaycastLayer_26();
		NullCheck(L_4);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_4, L_5, /*hidden argument*/NULL);
		// SolverHandler.UpdateSolvers = true;
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_6 = ((Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA *)__this)->get_SolverHandler_12();
		NullCheck(L_6);
		SolverHandler_set_UpdateSolvers_m30F1B914ECC35FD7605652B350A70805B2D0D140_inline(L_6, (bool)1, /*hidden argument*/NULL);
		// IsBeingPlaced = true;
		TapToPlace_set_IsBeingPlaced_mD532A8660961BCD99432C3577378532D24F76034_inline(__this, (bool)1, /*hidden argument*/NULL);
		// OnPlacingStarted?.Invoke();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_7 = TapToPlace_get_OnPlacingStarted_m9B1A9AAFCF25CBB02576510CADF49676FEC83A99_inline(__this, /*hidden argument*/NULL);
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_8 = L_7;
		G_B4_0 = L_8;
		if (L_8)
		{
			G_B5_0 = L_8;
			goto IL_0059;
		}
	}
	{
		goto IL_005e;
	}

IL_0059:
	{
		NullCheck(G_B5_0);
		UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325(G_B5_0, /*hidden argument*/NULL);
	}

IL_005e:
	{
		// CoreServices.InputSystem?.RegisterHandler<IMixedRealityPointerHandler>(this);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB284CAD260668D8742F59ED5DDC128A38712D7F4_il2cpp_TypeInfo_var);
		RuntimeObject* L_9 = CoreServices_get_InputSystem_m37F8BF26FAFB4976BAAD92492214E58DC868DC27(/*hidden argument*/NULL);
		RuntimeObject* L_10 = L_9;
		G_B7_0 = L_10;
		if (L_10)
		{
			G_B8_0 = L_10;
			goto IL_0068;
		}
	}
	{
		return;
	}

IL_0068:
	{
		NullCheck(G_B8_0);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_RegisterHandler_TisIMixedRealityPointerHandler_t614135A0BD4B7C047DE9B0BFD27BCB187B3D27DB_m32B7508AD414DFB1FD8B2EC28925C98DE5AA2930_RuntimeMethod_var, G_B8_0, __this);
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::StopPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_StopPlacement_m9DF16CBC0C31E25AB0910DAD84AFAC3657BB409E (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapToPlace_StopPlacement_m9DF16CBC0C31E25AB0910DAD84AFAC3657BB409E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * G_B3_0 = NULL;
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * G_B2_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	{
		// if (IsBeingPlaced)
		bool L_0 = TapToPlace_get_IsBeingPlaced_m378CB677F72E25C93E5B43CDAFB00BCE2D380844_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_004d;
		}
	}
	{
		// gameObject.layer = GameObjectLayer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		int32_t L_2 = TapToPlace_get_GameObjectLayer_mC4984D3CA437DC807C7F6AC710E8C9AF455DC4F5_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_1, L_2, /*hidden argument*/NULL);
		// SolverHandler.UpdateSolvers = false;
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_3 = ((Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA *)__this)->get_SolverHandler_12();
		NullCheck(L_3);
		SolverHandler_set_UpdateSolvers_m30F1B914ECC35FD7605652B350A70805B2D0D140_inline(L_3, (bool)0, /*hidden argument*/NULL);
		// IsBeingPlaced = false;
		TapToPlace_set_IsBeingPlaced_mD532A8660961BCD99432C3577378532D24F76034_inline(__this, (bool)0, /*hidden argument*/NULL);
		// OnPlacingStopped?.Invoke();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_4 = TapToPlace_get_OnPlacingStopped_m53FFA8A3BE933285B1975950E864111A5184D4A7_inline(__this, /*hidden argument*/NULL);
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_5 = L_4;
		G_B2_0 = L_5;
		if (L_5)
		{
			G_B3_0 = L_5;
			goto IL_0038;
		}
	}
	{
		goto IL_003d;
	}

IL_0038:
	{
		NullCheck(G_B3_0);
		UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325(G_B3_0, /*hidden argument*/NULL);
	}

IL_003d:
	{
		// CoreServices.InputSystem?.UnregisterHandler<IMixedRealityPointerHandler>(this);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB284CAD260668D8742F59ED5DDC128A38712D7F4_il2cpp_TypeInfo_var);
		RuntimeObject* L_6 = CoreServices_get_InputSystem_m37F8BF26FAFB4976BAAD92492214E58DC868DC27(/*hidden argument*/NULL);
		RuntimeObject* L_7 = L_6;
		G_B5_0 = L_7;
		if (L_7)
		{
			G_B6_0 = L_7;
			goto IL_0047;
		}
	}
	{
		return;
	}

IL_0047:
	{
		NullCheck(G_B6_0);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealityPointerHandler_t614135A0BD4B7C047DE9B0BFD27BCB187B3D27DB_m33F91BA4B75CF5D9E9B067C036D45C4560803D0F_RuntimeMethod_var, G_B6_0, __this);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::SolverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_SolverUpdate_mD11E9408FE0A0E940EF902AC2DB4D5B24D140DA5 (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapToPlace_SolverUpdate_mD11E9408FE0A0E940EF902AC2DB4D5B24D140DA5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SolverHandler.TransformTarget != null)
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_0 = ((Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m34789672B6825F92BF6C982E9BBCB5D7D6ED4FBB(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// PerformRaycast();
		VirtActionInvoker0::Invoke(18 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::PerformRaycast() */, __this);
		// SetPosition();
		VirtActionInvoker0::Invoke(19 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::SetPosition() */, __this);
		// SetRotation();
		VirtActionInvoker0::Invoke(20 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::SetRotation() */, __this);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::PerformRaycast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_PerformRaycast_m5EF76805EBDC01BAE18DD5FDFE9D91F883E6A9DC (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapToPlace_PerformRaycast_m5EF76805EBDC01BAE18DD5FDFE9D91F883E6A9DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var transform = SolverHandler.TransformTarget;
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_0 = ((Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m34789672B6825F92BF6C982E9BBCB5D7D6ED4FBB(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// Vector3 origin = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = V_0;
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// Vector3 endpoint = transform.position + transform.forward;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = V_0;
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = V_0;
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_5, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		// CurrentRay.UpdateRayStep(ref origin, ref endpoint);
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * L_9 = __this->get_address_of_CurrentRay_27();
		RayStep_UpdateRayStep_m117EC93764AE04F88839E2E0843AB752E8DEA04C((RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 *)L_9, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), /*hidden argument*/NULL);
		// DidHitSurface = MixedRealityRaycaster.RaycastSimplePhysicsStep(CurrentRay, MaxRaycastDistance, MagneticSurfaces, false, out CurrentHit);
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862  L_10 = __this->get_CurrentRay_27();
		float L_11 = TapToPlace_get_MaxRaycastDistance_m357D3DEC9B2141DFB1150D75130452B32A0C53D9_inline(__this, /*hidden argument*/NULL);
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_12 = TapToPlace_get_MagneticSurfaces_m38E82447D7C6018A7C0519672295F7173CF4DE57_inline(__this, /*hidden argument*/NULL);
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_13 = __this->get_address_of_CurrentHit_29();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityRaycaster_t576296B9AC5CC17AC79E55E62D12D22E99001EB3_il2cpp_TypeInfo_var);
		bool L_14 = MixedRealityRaycaster_RaycastSimplePhysicsStep_m035F875D7ECC5B82498C66E4561CA28B530F1FC0(L_10, L_11, L_12, (bool)0, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_13, /*hidden argument*/NULL);
		__this->set_DidHitSurface_28(L_14);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::SetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_SetPosition_mD000BD8FF3FAA4CF2E843040EA9A280AC4D4FE26 (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapToPlace_SetPosition_mD000BD8FF3FAA4CF2E843040EA9A280AC4D4FE26_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float G_B4_0 = 0.0f;
	{
		// if (DidHitSurface)
		bool L_0 = __this->get_DidHitSurface_28();
		if (!L_0)
		{
			goto IL_0048;
		}
	}
	{
		// GoalPosition = CurrentHit.point;
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_1 = __this->get_address_of_CurrentHit_29();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_1, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m181477018FB1D4AF5CF70436516CCC30CE14877E(__this, L_2, /*hidden argument*/NULL);
		// float currentSurfaceNormalOffset = UseDefaultSurfaceNormalOffset ? defaultSurfaceNormalOffset : SurfaceNormalOffset;
		bool L_3 = TapToPlace_get_UseDefaultSurfaceNormalOffset_m8FBBF7F8AFFC831780D4C6D109380E70FA372BE5_inline(__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		float L_4 = TapToPlace_get_SurfaceNormalOffset_m3BD1BB01D35B9AE2ECB26D865FA4AF8781E7F57D_inline(__this, /*hidden argument*/NULL);
		G_B4_0 = L_4;
		goto IL_002f;
	}

IL_0029:
	{
		float L_5 = TapToPlace_get_defaultSurfaceNormalOffset_m3B7B2FD2D570E38FCDE6D121A5AEB9ED39523BDA(__this, /*hidden argument*/NULL);
		G_B4_0 = L_5;
	}

IL_002f:
	{
		V_0 = G_B4_0;
		// AddOffset(CurrentHit.normal * currentSurfaceNormalOffset);
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_6 = __this->get_address_of_CurrentHit_29();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_6, /*hidden argument*/NULL);
		float L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_7, L_8, /*hidden argument*/NULL);
		VirtActionInvoker1< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(13 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::AddOffset(UnityEngine.Vector3) */, __this, L_9);
		// }
		return;
	}

IL_0048:
	{
		// GoalPosition = SolverHandler.TransformTarget.position + (SolverHandler.TransformTarget.forward * DefaultPlacementDistance);
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_10 = ((Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA *)__this)->get_SolverHandler_12();
		NullCheck(L_10);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = SolverHandler_get_TransformTarget_m34789672B6825F92BF6C982E9BBCB5D7D6ED4FBB(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_11, /*hidden argument*/NULL);
		SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * L_13 = ((Solver_tFA51A80CFEAEA2E4C1DFD3E0CFCBC5AFE0917FAA *)__this)->get_SolverHandler_12();
		NullCheck(L_13);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = SolverHandler_get_TransformTarget_m34789672B6825F92BF6C982E9BBCB5D7D6ED4FBB(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_14, /*hidden argument*/NULL);
		float L_16 = TapToPlace_get_DefaultPlacementDistance_mA896B600DEE2C8D96BACDDFCB39627A43B3993A3_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_15, L_16, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_12, L_17, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m181477018FB1D4AF5CF70436516CCC30CE14877E(__this, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::SetRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_SetRotation_m7CE4B4EA9794CC8D69E693F4E31AD7BC83FB2ABF (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapToPlace_SetRotation_m7CE4B4EA9794CC8D69E693F4E31AD7BC83FB2ABF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 direction = CurrentRay.Direction;
		RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * L_0 = __this->get_address_of_CurrentRay_27();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = RayStep_get_Direction_m8250D5F0B337508C3296A13785DA7145C6F00218_inline((RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 *)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// Vector3 surfaceNormal = CurrentHit.normal;
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_2 = __this->get_address_of_CurrentHit_29();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// if (KeepOrientationVertical)
		bool L_4 = TapToPlace_get_KeepOrientationVertical_mD803ECB5E181CC6200AB867677172886556858E9_inline(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// direction.y = 0;
		(&V_0)->set_y_3((0.0f));
		// surfaceNormal.y = 0;
		(&V_1)->set_y_3((0.0f));
	}

IL_0038:
	{
		// if (DidHitSurface && rotateAccordingToSurface)
		bool L_5 = __this->get_DidHitSurface_28();
		if (!L_5)
		{
			goto IL_005f;
		}
	}
	{
		bool L_6 = __this->get_rotateAccordingToSurface_20();
		if (!L_6)
		{
			goto IL_005f;
		}
	}
	{
		// GoalRotation = Quaternion.LookRotation(-surfaceNormal, Vector3.up);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_7, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_8, L_9, /*hidden argument*/NULL);
		Solver_set_GoalRotation_m03C706FACD2E7E83220451B69BBB997D7FFC509B(__this, L_10, /*hidden argument*/NULL);
		// }
		return;
	}

IL_005f:
	{
		// GoalRotation = Quaternion.LookRotation(direction, Vector3.up);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_11, L_12, /*hidden argument*/NULL);
		Solver_set_GoalRotation_m03C706FACD2E7E83220451B69BBB997D7FFC509B(__this, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::OnPointerDown(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_OnPointerDown_m4759C0973C7A7DE7558DA5E3B9CB4B5A9A91466F (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, MixedRealityPointerEventData_t32A435D8A6FE8E1EFAB56237504C51979F2586B3 * ___eventData0, const RuntimeMethod* method)
{
	{
		// public void OnPointerDown(MixedRealityPointerEventData eventData) { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::OnPointerDragged(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_OnPointerDragged_m1110F46A39CBE50604F563F5B3B44001DF72710D (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, MixedRealityPointerEventData_t32A435D8A6FE8E1EFAB56237504C51979F2586B3 * ___eventData0, const RuntimeMethod* method)
{
	{
		// public void OnPointerDragged(MixedRealityPointerEventData eventData) { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::OnPointerUp(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_OnPointerUp_mD6839A85157B43FBAA6266479EC5A8943EC04548 (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, MixedRealityPointerEventData_t32A435D8A6FE8E1EFAB56237504C51979F2586B3 * ___eventData0, const RuntimeMethod* method)
{
	{
		// public void OnPointerUp(MixedRealityPointerEventData eventData) { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::OnPointerClicked(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_OnPointerClicked_mADDBE4ACDC21BB324634B2576DDC9ED9E148A84D (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, MixedRealityPointerEventData_t32A435D8A6FE8E1EFAB56237504C51979F2586B3 * ___eventData0, const RuntimeMethod* method)
{
	{
		// if ((Time.time - LastTimeClicked) < DoubleClickTimeout)
		float L_0 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_1 = __this->get_LastTimeClicked_30();
		float L_2 = __this->get_DoubleClickTimeout_31();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_0, (float)L_1))) < ((float)L_2))))
		{
			goto IL_0015;
		}
	}
	{
		// return;
		return;
	}

IL_0015:
	{
		// if (!IsBeingPlaced)
		bool L_3 = TapToPlace_get_IsBeingPlaced_m378CB677F72E25C93E5B43CDAFB00BCE2D380844_inline(__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		// StartPlacement();
		TapToPlace_StartPlacement_m5E3F040F4CDC32D685F4BE17528097435DCD0A6C(__this, /*hidden argument*/NULL);
		// }
		goto IL_002b;
	}

IL_0025:
	{
		// StopPlacement();
		TapToPlace_StopPlacement_m9DF16CBC0C31E25AB0910DAD84AFAC3657BB409E(__this, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// LastTimeClicked = Time.time;
		float L_4 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		__this->set_LastTimeClicked_30(L_4);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace__ctor_m7ACA40D133AAA2B11F07C62CC77ADDA1850686C0 (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapToPlace__ctor_m7ACA40D133AAA2B11F07C62CC77ADDA1850686C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float defaultPlacementDistance = 1.5f;
		__this->set_defaultPlacementDistance_14((1.5f));
		// private float maxRaycastDistance = 20.0f;
		__this->set_maxRaycastDistance_15((20.0f));
		// private bool useDefaultSurfaceNormalOffset = true;
		__this->set_useDefaultSurfaceNormalOffset_18((bool)1);
		// private LayerMask[] magneticSurfaces = { UnityEngine.Physics.DefaultRaycastLayers };
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_0 = (LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D*)(LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D*)SZArrayNew(LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D_il2cpp_TypeInfo_var, (uint32_t)1);
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_1 = L_0;
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_2 = LayerMask_op_Implicit_m3F256A7D96C66548F5B62C4621B9725301850300(((int32_t)-5), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 )L_2);
		__this->set_magneticSurfaces_21(L_1);
		// private bool debugEnabled = true;
		__this->set_debugEnabled_22((bool)1);
		// private UnityEvent onPlacingStarted = new UnityEvent();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_3 = (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F *)il2cpp_codegen_object_new(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m2F8C02F28E289CA65598FF4FA8EAB84D955FF028(L_3, /*hidden argument*/NULL);
		__this->set_onPlacingStarted_23(L_3);
		// private UnityEvent onPlacingStopped = new UnityEvent();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_4 = (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F *)il2cpp_codegen_object_new(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m2F8C02F28E289CA65598FF4FA8EAB84D955FF028(L_4, /*hidden argument*/NULL);
		__this->set_onPlacingStopped_24(L_4);
		// protected float DoubleClickTimeout = 0.5f;
		__this->set_DoubleClickTimeout_31((0.5f));
		Solver__ctor_mA7C0EDFA6896365A1CBF28E995151F5E02A1CE3E(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::ConfigureGrid(System.Int32,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileGridObjectCollection_ConfigureGrid_m0B42B7381EE43E6302C83A87ABF5E913A962112A (TileGridObjectCollection_tA10CBCAEB57EC353B7B745FE141753DFF26A2FDF * __this, int32_t ___columns0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___tileSize1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___gutters2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___layouDirection3, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___startPosition4, bool ___centered5, const RuntimeMethod* method)
{
	{
		// Columns = columns;
		int32_t L_0 = ___columns0;
		__this->set_Columns_4(L_0);
		// TileSize = tileSize;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___tileSize1;
		__this->set_TileSize_5(L_1);
		// Gutters = gutters;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___gutters2;
		__this->set_Gutters_6(L_2);
		// LayoutDireciton = layouDirection;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___layouDirection3;
		__this->set_LayoutDireciton_7(L_3);
		// StartPosition = startPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___startPosition4;
		__this->set_StartPosition_8(L_4);
		// Centered = centered;
		bool L_5 = ___centered5;
		__this->set_Centered_9(L_5);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileGridObjectCollection_OnValidate_m0F3F72A5663BB879FE6FCDC820BB8992E54FB5C9 (TileGridObjectCollection_tA10CBCAEB57EC353B7B745FE141753DFF26A2FDF * __this, const RuntimeMethod* method)
{
	{
		// editorUpdated = true;
		__this->set_editorUpdated_13((bool)1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileGridObjectCollection_Start_m1A0B3C975587612E8FE570F55C6AD49497AEA29A (TileGridObjectCollection_tA10CBCAEB57EC353B7B745FE141753DFF26A2FDF * __this, const RuntimeMethod* method)
{
	{
		// editorUpdated = true;
		__this->set_editorUpdated_13((bool)1);
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::GetListPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TileGridObjectCollection_GetListPosition_mA5EA666F9E713A462DDB83CF740BAF1A76EC3B46 (TileGridObjectCollection_tA10CBCAEB57EC353B7B745FE141753DFF26A2FDF * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileGridObjectCollection_GetListPosition_mA5EA666F9E713A462DDB83CF740BAF1A76EC3B46_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t G_B3_0 = 0;
	float G_B5_0 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	{
		// int column = index % Columns;
		int32_t L_0 = ___index0;
		int32_t L_1 = __this->get_Columns_4();
		V_0 = ((int32_t)((int32_t)L_0%(int32_t)L_1));
		// int row = Columns > 0 ? Mathf.FloorToInt(index / Columns) : index;
		int32_t L_2 = __this->get_Columns_4();
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = ___index0;
		G_B3_0 = L_3;
		goto IL_0023;
	}

IL_0015:
	{
		int32_t L_4 = ___index0;
		int32_t L_5 = __this->get_Columns_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_6 = Mathf_FloorToInt_m0C42B64571CE92A738AD7BB82388CE12FBE7457C((((float)((float)((int32_t)((int32_t)L_4/(int32_t)L_5))))), /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_0023:
	{
		V_1 = G_B3_0;
		// Vector3 size = Vector3.Scale(TileSize + Gutters, LayoutDireciton);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = __this->get_TileSize_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = __this->get_Gutters_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_7, L_8, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = __this->get_LayoutDireciton_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775(L_9, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		// float xPos = size.x * column;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = V_2;
		float L_13 = L_12.get_x_2();
		int32_t L_14 = V_0;
		// float yPos = size.y * row;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = V_2;
		float L_16 = L_15.get_y_3();
		int32_t L_17 = V_1;
		V_3 = ((float)il2cpp_codegen_multiply((float)L_16, (float)(((float)((float)L_17)))));
		// float zPos = DepthCalculatedBy == GridDivisions.Rows ? size.z * row : size.z * column;
		int32_t L_18 = __this->get_DepthCalculatedBy_10();
		G_B4_0 = ((float)il2cpp_codegen_multiply((float)L_13, (float)(((float)((float)L_14)))));
		if (!L_18)
		{
			G_B5_0 = ((float)il2cpp_codegen_multiply((float)L_13, (float)(((float)((float)L_14)))));
			goto IL_0067;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_2;
		float L_20 = L_19.get_z_4();
		int32_t L_21 = V_0;
		G_B6_0 = ((float)il2cpp_codegen_multiply((float)L_20, (float)(((float)((float)L_21)))));
		G_B6_1 = G_B4_0;
		goto IL_0070;
	}

IL_0067:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = V_2;
		float L_23 = L_22.get_z_4();
		int32_t L_24 = V_1;
		G_B6_0 = ((float)il2cpp_codegen_multiply((float)L_23, (float)(((float)((float)L_24)))));
		G_B6_1 = G_B5_0;
	}

IL_0070:
	{
		V_4 = G_B6_0;
		// return new Vector3(xPos, yPos, zPos);
		float L_25 = V_3;
		float L_26 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_27), G_B6_1, L_25, L_26, /*hidden argument*/NULL);
		return L_27;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileGridObjectCollection_Update_mF081C5268B9B03F2E66B513493806172CC09409C (TileGridObjectCollection_tA10CBCAEB57EC353B7B745FE141753DFF26A2FDF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileGridObjectCollection_Update_mF081C5268B9B03F2E66B513493806172CC09409C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if ((Application.isPlaying || !OnlyInEditMode) || editorUpdated)
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		bool L_1 = __this->get_OnlyInEditMode_11();
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		bool L_2 = __this->get_editorUpdated_13();
		if (!L_2)
		{
			goto IL_00e9;
		}
	}

IL_001a:
	{
		// int childCount = transform.childCount;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// if (Centered)
		bool L_5 = __this->get_Centered_9();
		if (!L_5)
		{
			goto IL_007d;
		}
	}
	{
		// offSet = GetListPosition(Mathf.CeilToInt(childCount / Columns) * Columns - 1) * -0.5f + Vector3.Scale(TileSize, LayoutDireciton) * -0.5f;
		int32_t L_6 = V_0;
		int32_t L_7 = __this->get_Columns_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_8 = Mathf_CeilToInt_m0230CCC7CC9266F18125D9425C38A25D1CA4275B((((float)((float)((int32_t)((int32_t)L_6/(int32_t)L_7))))), /*hidden argument*/NULL);
		int32_t L_9 = __this->get_Columns_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = VirtFuncInvoker1< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , int32_t >::Invoke(7 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::GetListPosition(System.Int32) */, __this, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)L_9)), (int32_t)1)));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_10, (-0.5f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = __this->get_TileSize_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = __this->get_LayoutDireciton_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775(L_12, L_13, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_14, (-0.5f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_11, L_15, /*hidden argument*/NULL);
		__this->set_offSet_12(L_16);
		// }
		goto IL_0088;
	}

IL_007d:
	{
		// offSet = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_offSet_12(L_17);
	}

IL_0088:
	{
		// for (int i = 0; i < childCount; i++)
		V_1 = 0;
		goto IL_00de;
	}

IL_008c:
	{
		// Transform item = transform.GetChild(i);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		int32_t L_19 = V_1;
		NullCheck(L_18);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_18, L_19, /*hidden argument*/NULL);
		// item.localPosition = StartPosition + offSet + (Vector3.Scale(TileSize, LayoutDireciton) * 0.5f) + GetListPosition(i);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = __this->get_StartPosition_8();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = __this->get_offSet_12();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_21, L_22, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = __this->get_TileSize_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = __this->get_LayoutDireciton_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775(L_24, L_25, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_26, (0.5f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_23, L_27, /*hidden argument*/NULL);
		int32_t L_29 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = VirtFuncInvoker1< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , int32_t >::Invoke(7 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::GetListPosition(System.Int32) */, __this, L_29);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_28, L_30, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_20, L_31, /*hidden argument*/NULL);
		// for (int i = 0; i < childCount; i++)
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00de:
	{
		// for (int i = 0; i < childCount; i++)
		int32_t L_33 = V_1;
		int32_t L_34 = V_0;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_008c;
		}
	}
	{
		// editorUpdated = false;
		__this->set_editorUpdated_13((bool)0);
	}

IL_00e9:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileGridObjectCollection__ctor_mF1F18455722EB21E5FB0376E6B1B6B6DB8AB2D68 (TileGridObjectCollection_tA10CBCAEB57EC353B7B745FE141753DFF26A2FDF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileGridObjectCollection__ctor_mF1F18455722EB21E5FB0376E6B1B6B6DB8AB2D68_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected int Columns = 4;
		__this->set_Columns_4(4);
		// protected Vector3 TileSize = new Vector3(0.1f, 0.1f, 0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_0), (0.1f), (0.1f), (0.0f), /*hidden argument*/NULL);
		__this->set_TileSize_5(L_0);
		// protected Vector3 Gutters = new Vector3(0.005f, 0.005f, 0.005f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_1), (0.005f), (0.005f), (0.005f), /*hidden argument*/NULL);
		__this->set_Gutters_6(L_1);
		// protected Vector3 LayoutDireciton = new Vector3(1, -1, 0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_2), (1.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_LayoutDireciton_7(L_2);
		// protected Vector3 StartPosition = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_StartPosition_8(L_3);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool RadialView_get_UseFixedVerticalPosition_mAE564460D7A4AB9EE031F84122686E138E2171DB_inline (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, const RuntimeMethod* method)
{
	{
		// get => useFixedVerticalPosition;
		bool L_0 = __this->get_useFixedVerticalPosition_21();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float RadialView_get_FixedVerticalPosition_m37583CA426CBBF1211747DF5737707092CCC5250_inline (RadialView_t05B35D20499436CDA895C6BF920CDB4240A20ACD * __this, const RuntimeMethod* method)
{
	{
		// get => fixedVerticalPosition;
		float L_0 = __this->get_fixedVerticalPosition_22();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalPosition_m5102D634870888C102BF0CF6F68E5B0F9D8E3797_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalPosition { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CGoalPositionU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_GoalPosition_mCA1EC96742B8D9B4D2C4DBE37D43A2FE633C9C6D_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalPosition { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CGoalPositionU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SolverHandler_get_GoalRotation_m40B3BD4A339F646454157B696A10F34D43758F36_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	{
		// public Quaternion GoalRotation { get; set; }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = __this->get_U3CGoalRotationU3Ek__BackingField_14();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_GoalRotation_mEE3895F3F4C9807CCACC45DCC3560A2809E2122D_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion GoalRotation { get; set; }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___value0;
		__this->set_U3CGoalRotationU3Ek__BackingField_14(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalScale_m68C2A89EB3B566E14EAB67EDF2FCF8C139D15AA1_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalScale { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CGoalScaleU3Ek__BackingField_15();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_GoalScale_mF7B8DFF69E4BDBE3C58FB4C8329B177D735653AE_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalScale { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CGoalScaleU3Ek__BackingField_15(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float SolverHandler_get_DeltaTime_m28843D7B464589AA956BF5615647D34326EC115C_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	{
		// public float DeltaTime { get; set; }
		float L_0 = __this->get_U3CDeltaTimeU3Ek__BackingField_17();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_TrackedHandedness_m31CB2BE6506E6CC855C9B606F267C9254CA0B0B4_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	{
		// get => trackedHandedness;
		uint8_t L_0 = __this->get_trackedHandedness_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_AltScale_m9C2C220DC94C9A60575F81DEB51F4C8D26CD1F62_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, Vector3Smoothed_t1A35366991A6CB8D3A2FB1AC19520B9F1EEBE656  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Smoothed AltScale { get; set; }
		Vector3Smoothed_t1A35366991A6CB8D3A2FB1AC19520B9F1EEBE656  L_0 = ___value0;
		__this->set_U3CAltScaleU3Ek__BackingField_16(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_DeltaTime_m0087F3F9A92DA982927C5D81576A26ECD3CA3696_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float DeltaTime { get; set; }
		float L_0 = ___value0;
		__this->set_U3CDeltaTimeU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SolverHandler_get_UpdateSolvers_m8D19B78489FC5D19E88397BD2CB01E8725560219_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	{
		// get => updateSolvers;
		bool L_0 = __this->get_updateSolvers_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedTargetType_mDBBC1FF4E55E543CAB6472AA1B9EE46708BFB75D_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	{
		// get => trackedTargetType;
		int32_t L_0 = __this->get_trackedTargetType_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_PreferredTrackedHandedness_mC7D96C214939B94DF348662E580BFF9EDEFC04D1_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	{
		// get => preferredTrackedHandedness;
		uint8_t L_0 = __this->get_preferredTrackedHandedness_19();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedHandJoint_m006DC3C432A40EF9341030504844805B0A6C8F58_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	{
		// get => trackedHandJoint;
		int32_t L_0 = __this->get_trackedHandJoint_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalOffset_m8DAC4002CC1E9D3B7A4010F2BCBE0A8071239575_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	{
		// get => additionalOffset;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_additionalOffset_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalRotation_mB59E20825CC961F6FB4DD99AA6862DF999AD7FFF_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	{
		// get => additionalRotation;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_additionalRotation_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentRaycastDirectionMode_m251616578EC68B653AE610BB2C6C14429BF4661F_inline (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method)
{
	{
		// get => currentRaycastDirectionMode;
		int32_t L_0 = __this->get_currentRaycastDirectionMode_25();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3Smoothed_t1A35366991A6CB8D3A2FB1AC19520B9F1EEBE656  SolverHandler_get_AltScale_m7640A53A763EF60957AD2FB75B5E3280EA6FA47D_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Smoothed AltScale { get; set; }
		Vector3Smoothed_t1A35366991A6CB8D3A2FB1AC19520B9F1EEBE656  L_0 = __this->get_U3CAltScaleU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3Smoothed_get_Current_m849BB7F2EC08EFB2C716CEBC38B8915EDAB82ABC_inline (Vector3Smoothed_t1A35366991A6CB8D3A2FB1AC19520B9F1EEBE656 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Current { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CCurrentU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_KeepOrientationVertical_m4052B2E3AFFB0A91707C12EDC0E63BD4C3A51A39_inline (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method)
{
	{
		// get => keepOrientationVertical;
		bool L_0 = __this->get_keepOrientationVertical_28();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentOrientationMode_m51A3F7D9C28941D5887DB884B5C1C12A0C343CEA_inline (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method)
{
	{
		// get => orientationMode;
		int32_t L_0 = __this->get_orientationMode_26();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RayStep_get_Direction_m8250D5F0B337508C3296A13785DA7145C6F00218_inline (RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Direction { get; private set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CDirectionU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_DebugEnabled_mF3A383A6D9DEC3040F691D8B4597775582D5E5C2_inline (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method)
{
	{
		// get => debugEnabled;
		bool L_0 = __this->get_debugEnabled_29();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RayStep_get_Origin_m1E79D7F702D7F081F045D5748DB3B0BA253E1B03_inline (RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Origin { get; private set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3COriginU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RayStep_get_Terminus_m60FBD17F4BAD18A4D62D004D47E5BBC01C5EE368_inline (RayStep_tFCCDB007BCD87755EB6A3E96605B49F589B16862 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Terminus { get; private set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CTerminusU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_RaycastMode_mE4FAAD8468A7654CFBFFD9185F3EA88172C68911_inline (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, const RuntimeMethod* method)
{
	{
		// get => raycastMode;
		int32_t L_0 = __this->get_raycastMode_18();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_UpdateSolvers_m30F1B914ECC35FD7605652B350A70805B2D0D140_inline (SolverHandler_t075811D0044ED96286DC029AD5537D75A007A167 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => updateSolvers = value;
		bool L_0 = ___value0;
		__this->set_updateSolvers_10(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OnSurface_m55D6EDB03DD38C3C40C959266D103699F9BB1363_inline (SurfaceMagnetism_tCEFA9A6982729CA5B16FA1E15FF215A279C58D62 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool OnSurface { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3COnSurfaceU3Ek__BackingField_30(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool TapToPlace_get_AutoStart_mFB07CEFD849851649541B54B5530FD245AF32C8C_inline (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method)
{
	{
		// get => autoStart;
		bool L_0 = __this->get_autoStart_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool TapToPlace_get_IsBeingPlaced_m378CB677F72E25C93E5B43CDAFB00BCE2D380844_inline (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsBeingPlaced { get; protected set; }
		bool L_0 = __this->get_U3CIsBeingPlacedU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TapToPlace_set_GameObjectLayer_mD0BEF54A6CFF41AE952A21F3F102548A09E10974_inline (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// protected internal int GameObjectLayer { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CGameObjectLayerU3Ek__BackingField_25(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TapToPlace_set_IsBeingPlaced_mD532A8660961BCD99432C3577378532D24F76034_inline (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsBeingPlaced { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CIsBeingPlacedU3Ek__BackingField_16(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * TapToPlace_get_OnPlacingStarted_m9B1A9AAFCF25CBB02576510CADF49676FEC83A99_inline (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method)
{
	{
		// get => onPlacingStarted;
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = __this->get_onPlacingStarted_23();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t TapToPlace_get_GameObjectLayer_mC4984D3CA437DC807C7F6AC710E8C9AF455DC4F5_inline (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method)
{
	{
		// protected internal int GameObjectLayer { get; protected set; }
		int32_t L_0 = __this->get_U3CGameObjectLayerU3Ek__BackingField_25();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * TapToPlace_get_OnPlacingStopped_m53FFA8A3BE933285B1975950E864111A5184D4A7_inline (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method)
{
	{
		// get => onPlacingStopped;
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = __this->get_onPlacingStopped_24();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float TapToPlace_get_MaxRaycastDistance_m357D3DEC9B2141DFB1150D75130452B32A0C53D9_inline (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method)
{
	{
		// get => maxRaycastDistance;
		float L_0 = __this->get_maxRaycastDistance_15();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* TapToPlace_get_MagneticSurfaces_m38E82447D7C6018A7C0519672295F7173CF4DE57_inline (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method)
{
	{
		// get => magneticSurfaces;
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_0 = __this->get_magneticSurfaces_21();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool TapToPlace_get_UseDefaultSurfaceNormalOffset_m8FBBF7F8AFFC831780D4C6D109380E70FA372BE5_inline (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method)
{
	{
		// get => useDefaultSurfaceNormalOffset;
		bool L_0 = __this->get_useDefaultSurfaceNormalOffset_18();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float TapToPlace_get_SurfaceNormalOffset_m3BD1BB01D35B9AE2ECB26D865FA4AF8781E7F57D_inline (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method)
{
	{
		// get => surfaceNormalOffset;
		float L_0 = __this->get_surfaceNormalOffset_17();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float TapToPlace_get_DefaultPlacementDistance_mA896B600DEE2C8D96BACDDFCB39627A43B3993A3_inline (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method)
{
	{
		// get => defaultPlacementDistance;
		float L_0 = __this->get_defaultPlacementDistance_14();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool TapToPlace_get_KeepOrientationVertical_mD803ECB5E181CC6200AB867677172886556858E9_inline (TapToPlace_t46245AB06469892D1214AB3B37D2EE69B71FF4E6 * __this, const RuntimeMethod* method)
{
	{
		// get => keepOrientationVertical;
		bool L_0 = __this->get_keepOrientationVertical_19();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
