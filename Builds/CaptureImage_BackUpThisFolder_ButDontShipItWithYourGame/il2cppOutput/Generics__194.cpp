#include "pch-cpp.hpp"





template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
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
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};

struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
struct ConcurrentQueue_1_t15C4F7C40BC2BB575BEC30003E92347B4A7B3471;
struct ConcurrentQueue_1_t251018BFB628D831E5879E1F49033D89EEC73DBC;
struct ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4;
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
struct Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3;
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
struct IValueTaskSource_1_t070809655ED205ECF3A94A12E2B5AC81E6B90964;
struct IValueTaskSource_1_t5F54F119A84BD7F3A7E39ED5A9040C19D0EC4782;
struct IXRInputValueReader_1_tC86C12DB1216B425E7880781CAFFE046A4E03898;
struct KeyCollection_t018A8DACA62B00F41314B17E9BB03E1169319CA5;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
struct Segment_tF19F07B8082438D500A3FEC5C760D140396A71CD;
struct Segment_t1AAD3F31B858EACB1BCCAE8FBA1FBBB87377A0D2;
struct TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B;
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
struct UnityObjectReferenceCache_1_t5037B37A78F59591F798651810A820937FB97158;
struct UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D;
struct ValueCollection_t26762FBAABEED8AF6FEC2532717F621A053E1E81;
struct XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F;
struct YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A;
struct YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4;
struct YieldInstructionWorker_1_t9A4AFC9A3F952AA70D128EBADA69AE23736BFBF2;
struct YieldInstructionWorker_1_tE9E92CD1FD1C2AAC7EF3F5EEAAA876F35D1907CA;
struct fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50;
struct fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C;
struct fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108;
struct fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95;
struct fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539;
struct fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388;
struct fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A;
struct fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD;
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
struct EntryU5BU5D_tCFEDD9B392BFDE2D313BC0974DB2CABF3A7A893D;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943;
struct AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6;
struct AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Exception_t;
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
struct String_t;
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59;
struct fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04;
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23;
struct fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668;
struct fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC;
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SyncContextUtility_t8C18C92862A979808EE386EBB8D8713B47047881_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A7D3B18DF4F9238A50A156FF06A5A7E794C1C7F;
IL2CPP_EXTERN_C String_t* _stringLiteralC2C7DF52EC0EF6E1C0B00223DC5CFB076E30C8F5;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m90F92BD374C42FBABE7941E2C01DB403342D24D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m2D2D41F7BC8424C4A66A95873CDD99E47AC274F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m4A0DFA3D000F3021915F4E31F9EC15E25CBD6A6F_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ConcurrentQueue_1_t15C4F7C40BC2BB575BEC30003E92347B4A7B3471  : public RuntimeObject
{
	RuntimeObject* ____crossSegmentLock;
	Segment_tF19F07B8082438D500A3FEC5C760D140396A71CD* ____tail;
	Segment_tF19F07B8082438D500A3FEC5C760D140396A71CD* ____head;
};
struct ConcurrentQueue_1_t251018BFB628D831E5879E1F49033D89EEC73DBC  : public RuntimeObject
{
	RuntimeObject* ____crossSegmentLock;
	Segment_t1AAD3F31B858EACB1BCCAE8FBA1FBBB87377A0D2* ____tail;
	Segment_t1AAD3F31B858EACB1BCCAE8FBA1FBBB87377A0D2* ____head;
};
struct Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tCFEDD9B392BFDE2D313BC0974DB2CABF3A7A893D* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t018A8DACA62B00F41314B17E9BB03E1169319CA5* ____keys;
	ValueCollection_t26762FBAABEED8AF6FEC2532717F621A053E1E81* ____values;
	RuntimeObject* ____syncRoot;
};
struct UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D  : public RuntimeObject
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_CapturedObject;
	RuntimeObject* ___m_Interface;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	int32_t ___m_taskId;
	Delegate_t* ___m_action;
	RuntimeObject* ___m_stateObject;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent;
	int32_t ___m_stateFlags;
	RuntimeObject* ___m_continuationObject;
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};
struct fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04  : public RuntimeObject
{
	fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* ___Serializer;
};
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23  : public RuntimeObject
{
	RuntimeObject* ____value;
};
struct BypassScope_t801793A02437762F196198D282A1980396D8B968 
{
	XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* ___m_Reader;
};
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	int32_t ___length;
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue;
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues;
};
struct ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	RuntimeObject* ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
typedef Il2CppFullySharedGenericStruct ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A;
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	RuntimeObject* ___m_result;
};
struct ValueTask_1_t7C5C39AB5B4A0ABA07AC934800D43DED916F9215 
{
	RuntimeObject* ____obj;
	RuntimeObject* ____result;
	int16_t ____token;
	bool ____continueOnCapturedContext;
};
typedef Il2CppFullySharedGenericStruct ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7;
typedef Il2CppFullySharedGenericStruct fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88;
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct CoroutineWrapper_t9C1780B5570255E0E28D419DECC20B7FEF014940 
{
	RuntimeObject* ___Coroutine;
};
struct CoroutineWrapper_t9C1780B5570255E0E28D419DECC20B7FEF014940_marshaled_pinvoke
{
	Il2CppIUnknown* ___Coroutine;
};
struct CoroutineWrapper_t9C1780B5570255E0E28D419DECC20B7FEF014940_marshaled_com
{
	Il2CppIUnknown* ___Coroutine;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	float ___m_Time;
	float ___m_Value;
	float ___m_InTangent;
	float ___m_OutTangent;
	int32_t ___m_WeightedMode;
	float ___m_InWeight;
	float ___m_OutWeight;
};
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	int32_t ___m_Mask;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
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
struct fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668  : public fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04
{
};
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 
{
	bool ____success;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages;
};
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_marshaled_pinvoke
{
	int32_t ____success;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages;
};
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_marshaled_com
{
	int32_t ____success;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages;
};
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 
{
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* ___Ancestors;
	String_t* ___VersionString;
	Type_t* ___ModelType;
};
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke* ___Ancestors;
	char* ___VersionString;
	Type_t* ___ModelType;
};
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com* ___Ancestors;
	Il2CppChar* ___VersionString;
	Type_t* ___ModelType;
};
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove;
};
struct Nullable_1_t3E31AC057D1396B991A9E84F22568C8B626E08FC 
{
	bool ___hasValue;
	CoroutineWrapper_t9C1780B5570255E0E28D419DECC20B7FEF014940 ___value;
};
struct ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1 
{
	ValueTask_1_t7C5C39AB5B4A0ABA07AC934800D43DED916F9215 ____value;
};
typedef Il2CppFullySharedGenericStruct ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C;
struct YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A  : public RuntimeObject
{
	YieldInstructionWorker_1_t9A4AFC9A3F952AA70D128EBADA69AE23736BFBF2* ___instructionWorker;
	ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985 ___core;
};
struct YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4 : public RuntimeObject {};
struct fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A 
{
	bool ____hasValue;
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ____value;
};
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	intptr_t ___m_Ptr;
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback;
};
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
	Il2CppMethodPointer ___m_completeCallback;
};
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr;
	Il2CppMethodPointer ___m_completeCallback;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	int32_t ___value__;
};
struct InputActionType_t7E3615BDDF3C84F39712E5889559D3AD8E773108 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction;
};
struct Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Origin;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Direction;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct ValueTaskSourceOnCompletedFlags_t3181838E33741E1E7338B33740CCEAD38C6B8BFF 
{
	int32_t ___value__;
};
struct ValueTaskSourceStatus_t9F496A09D3BF95F42C0C5366D8DEBA49F08C4FD3 
{
	int32_t ___value__;
};
struct fsDataType_t4DDBD7DB585B530CF852D23D5FF4D9801DDE4A16 
{
	int32_t ___value__;
};
struct ActionFlags_t639BD2944E073F8DD263CE2CA581FC62C401AB1E 
{
	int32_t ___value__;
};
struct Flags_t2ED4EFE461994B03533B3B524C8C2EA71315AAE6 
{
	int32_t ___value__;
};
struct InputSourceMode_tC6F86938AEFC93650B200F13CB1CDF660E091A6C 
{
	int32_t ___value__;
};
struct YieldInstructionAwaiter_1_t75EFCC9D4A37AF66B43EBA3018EBD918E9F10DEB 
{
	YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* ___taskSource;
	ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1 ___awaiter;
};
typedef Il2CppFullySharedGenericStruct YieldInstructionAwaiter_1_t5F44D4BD7E715EF8FCBF72381196EE41448C5F2E;
struct YieldInstructionWorker_1_t9A4AFC9A3F952AA70D128EBADA69AE23736BFBF2  : public RuntimeObject
{
	YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* ___taskSource;
	RuntimeObject* ___current;
	RuntimeObject* ___instruction;
	bool ___isRunning;
	bool ___isAwaitingCompletion;
	bool ___hasPendingInstruction;
	Nullable_1_t3E31AC057D1396B991A9E84F22568C8B626E08FC ___runner;
};
struct YieldInstructionWorker_1_tE9E92CD1FD1C2AAC7EF3F5EEAAA876F35D1907CA  : public RuntimeObject
{
	YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4* ___taskSource;
	RuntimeObject* ___current;
	RuntimeObject* ___instruction;
	bool ___isRunning;
	bool ___isAwaitingCompletion;
	bool ___hasPendingInstruction;
	Nullable_1_t3E31AC057D1396B991A9E84F22568C8B626E08FC ___runner;
};
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
};
struct AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
};
struct AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	String_t* ___m_Name;
	String_t* ___m_Id;
	String_t* ___m_Path;
	String_t* ___m_Interactions;
	String_t* ___m_Processors;
	String_t* ___m_Groups;
	String_t* ___m_Action;
	int32_t ___m_Flags;
	String_t* ___m_OverridePath;
	String_t* ___m_OverrideInteractions;
	String_t* ___m_OverrideProcessors;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name;
	char* ___m_Id;
	char* ___m_Path;
	char* ___m_Interactions;
	char* ___m_Processors;
	char* ___m_Groups;
	char* ___m_Action;
	int32_t ___m_Flags;
	char* ___m_OverridePath;
	char* ___m_OverrideInteractions;
	char* ___m_OverrideProcessors;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name;
	Il2CppChar* ___m_Id;
	Il2CppChar* ___m_Path;
	Il2CppChar* ___m_Interactions;
	Il2CppChar* ___m_Processors;
	Il2CppChar* ___m_Groups;
	Il2CppChar* ___m_Action;
	int32_t ___m_Flags;
	Il2CppChar* ___m_OverridePath;
	Il2CppChar* ___m_OverrideInteractions;
	Il2CppChar* ___m_OverrideProcessors;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	String_t* ___m_Path;
	Type_t* ___m_Type;
};
struct ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	char* ___m_Path;
	Type_t* ___m_Type;
};
struct ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	Il2CppChar* ___m_Path;
	Type_t* ___m_Type;
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59  : public RuntimeObject
{
	int32_t ___m_InputSourceMode;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_InputAction;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_InputActionReference;
	UnityObjectReferenceCache_1_t5037B37A78F59591F798651810A820937FB97158* ___m_InputActionReferenceCache;
};
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	bool ___hasValue;
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value;
};
struct XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F : public XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59 {};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621  : public ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868
{
};
struct AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshaled_pinvoke : public ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshaled_pinvoke
{
};
struct AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshaled_com : public ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshaled_com
{
};
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset;
	String_t* ___m_ActionId;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	String_t* ___m_Name;
	int32_t ___m_Type;
	String_t* ___m_ExpectedControlType;
	String_t* ___m_Id;
	String_t* ___m_Processors;
	String_t* ___m_Interactions;
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings;
	int32_t ___m_Flags;
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask;
	int32_t ___m_BindingsStartIndex;
	int32_t ___m_BindingsCount;
	int32_t ___m_ControlStartIndex;
	int32_t ___m_ControlCount;
	int32_t ___m_ActionIndexInState;
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap;
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted;
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled;
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	int32_t ___s_taskIdCounter;
	RuntimeObject* ___s_taskCompletionSentinel;
	bool ___s_asyncDebuggingEnabled;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback;
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties;
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField;
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate;
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback;
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate;
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks;
	RuntimeObject* ___s_activeTasksLock;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask;
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard;
};
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_StaticFields
{
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___True;
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___False;
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___Null;
};
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2_StaticFields
{
	TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B* ___s_defaultFactory;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_StaticFields
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___kZero;
};
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___EmptyStringArray;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___Success;
};
struct YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A_StaticFields
{
	ConcurrentQueue_1_t15C4F7C40BC2BB575BEC30003E92347B4A7B3471* ___pool;
};
struct YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4_StaticFields
{
	ConcurrentQueue_1_t251018BFB628D831E5879E1F49033D89EEC73DBC* ___pool;
};
struct fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A_StaticFields
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A ___Empty;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD_StaticFields
{
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InputActionEnableProfilerMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InputActionDisableProfilerMarker;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassScope_Dispose_mD2092263EF1CD137EB35D092B66915B2A0EFDE40_gshared (BypassScope_t801793A02437762F196198D282A1980396D8B968* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* YieldInstructionTaskSource_1_Rent_m0E47F8C67A4FAEFE37B6DEF27EA3D3913DE5BB53_gshared (RuntimeObject* ___0_instruction, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t YieldInstructionTaskSource_1_get_Version_m28FEA206F80C7A8CA1A36D11585C9FD48C675592_gshared (YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask_1__ctor_m177950552C93B57A4BB1739D0F7D66EDD7C59D11_gshared_inline (ValueTask_1_t7C5C39AB5B4A0ABA07AC934800D43DED916F9215* __this, RuntimeObject* ___0_source, int16_t ___1_token, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1 ValueTask_1_GetAwaiter_m22539C2335A475C19BDF8D65A9FCCC14284ECCC3_gshared_inline (ValueTask_1_t7C5C39AB5B4A0ABA07AC934800D43DED916F9215* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionAwaiter_1__ctor_m8D8767EB6A1E94DD948F5033E0FFBEF48CD305A1_gshared (YieldInstructionAwaiter_1_t75EFCC9D4A37AF66B43EBA3018EBD918E9F10DEB* __this, RuntimeObject* ___0_instruction, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTaskAwaiter_1_get_IsCompleted_m8243D9042B827FED4B48039D35244D30C78112F7_gshared_inline (ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YieldInstructionAwaiter_1_get_IsCompleted_mD815AE4D212ADE2F2446C91D44B25DA8B8FAFF1C_gshared (YieldInstructionAwaiter_1_t75EFCC9D4A37AF66B43EBA3018EBD918E9F10DEB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTaskAwaiter_1_OnCompleted_m21C8DCA59FBBB53ADCBDB5DA9BF7EC32C48C054E_gshared (ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionAwaiter_1_OnCompleted_m102C89F87A627BF690D5EF704286806CE4549133_gshared (YieldInstructionAwaiter_1_t75EFCC9D4A37AF66B43EBA3018EBD918E9F10DEB* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTaskAwaiter_1_UnsafeOnCompleted_m7F05330CC379BBBC22DA0F972F3D87C3E34B28EF_gshared (ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionAwaiter_1_UnsafeOnCompleted_m90201B4867B8B2934E692073E9967BDE082EAF02_gshared (YieldInstructionAwaiter_1_t75EFCC9D4A37AF66B43EBA3018EBD918E9F10DEB* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionTaskSource_1_Return_m43169EE2FD91675D99A514FB26E2DC139D72AE08_gshared (YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* ___0_taskSource, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ValueTaskAwaiter_1_GetResult_m7C1C2CFBD94C6D0E3D0D2F0FA5B1D57F9176A641_gshared_inline (ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* YieldInstructionAwaiter_1_GetResult_m76166B24646270ED64A906D6AE16E37C75188161_gshared_inline (YieldInstructionAwaiter_1_t75EFCC9D4A37AF66B43EBA3018EBD918E9F10DEB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask_1__ctor_m6290E5FE79CCE71C6983D5D86933A41BFB4BDEE0_gshared_inline (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* __this, RuntimeObject* ___0_source, int16_t ___1_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionAwaiter_1__ctor_m907BB646BEFBD3401C320BF16C812537E28E3EC9_gshared (YieldInstructionAwaiter_1_t5F44D4BD7E715EF8FCBF72381196EE41448C5F2E* __this, RuntimeObject* ___0_instruction, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YieldInstructionAwaiter_1_get_IsCompleted_m805A35419B7164E29557CA8D9E11F3C48BB211C6_gshared (YieldInstructionAwaiter_1_t5F44D4BD7E715EF8FCBF72381196EE41448C5F2E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionAwaiter_1_OnCompleted_m07208EA0DC68B40D91412ADDA7B6239F97806210_gshared (YieldInstructionAwaiter_1_t5F44D4BD7E715EF8FCBF72381196EE41448C5F2E* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionAwaiter_1_UnsafeOnCompleted_m4615DCE15A0CA30D81958F0F3CE72D66B94FAFDE_gshared (YieldInstructionAwaiter_1_t5F44D4BD7E715EF8FCBF72381196EE41448C5F2E* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void YieldInstructionAwaiter_1_GetResult_m94E8FFC9043D7A54EE239C1676A0B8645B3D0E90_gshared_inline (YieldInstructionAwaiter_1_t5F44D4BD7E715EF8FCBF72381196EE41448C5F2E* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t ManualResetValueTaskSourceCore_1_get_Version_m1152B5E9B9A7CE245182FA93E38692FCC00BD4AC_gshared_inline (ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManualResetValueTaskSourceCore_1_GetStatus_mE63A6F206365CB3630800FCDEF81DE1905F1CC60_gshared (ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionWorker_1__ctor_mA4B5E202D5565F47E935FF10E42271818500D714_gshared (YieldInstructionWorker_1_t9A4AFC9A3F952AA70D128EBADA69AE23736BFBF2* __this, YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* ___0_owner, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionWorker_1_Dispose_m1C2E7A9EB18D5810DAE6D8A6B55E82F2901C6650_gshared (YieldInstructionWorker_1_t9A4AFC9A3F952AA70D128EBADA69AE23736BFBF2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentQueue_1_TryDequeue_m04C6B697D83A4AA4BAD38344201C140ED7DC5CAA_gshared (ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* __this, RuntimeObject** ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionTaskSource_1__ctor_mEE0168E2012909BA6BCFFFA2FC432016EFBFAEC6_gshared (YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_Reset_m721893AEDD42B319DE00F9E296C68E4D46E20AD3_gshared (ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionWorker_1_Initialize_m28EF400BB5D26F557651B7CE249969AD99947F17_gshared (YieldInstructionWorker_1_t9A4AFC9A3F952AA70D128EBADA69AE23736BFBF2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionWorker_1_Reset_m45F1F1D060107DD5FB1AE8F5A68794CDA6C4D4CB_gshared (YieldInstructionWorker_1_t9A4AFC9A3F952AA70D128EBADA69AE23736BFBF2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentQueue_1_Enqueue_m6E14BFDDF046BB59B8EEF4A398D5AB7F4720D0A4_gshared (ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YieldInstructionTaskSource_1_get_IsCompleted_mEB3973100EF4F91D4902D5924FC13F51EEC0A0E9_gshared (YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetResult_m17450D6849EFB042FFB176DDFADE56CF97E1EBA1_gshared (ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetException_m9FA50C7E9CC155E7DEA50AD6E2E713AAEBB1AD80_gshared (ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985* __this, Exception_t* ___0_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ManualResetValueTaskSourceCore_1_GetResult_m0B8B52A05872ADB92E2D9DB5699F6893E7FE7877_gshared (ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_OnCompleted_m11CEF4B060AE3596FFED2D0EAD0392283958E662_gshared (ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentQueue_1__ctor_m45A2A2E43BA42D4368773A687E7BB6CBCD510345_gshared (ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionWorker_1_EnsureRunning_m266F014C2DE8EFE06C6DFB546604A54B31502D2C_gshared (YieldInstructionWorker_1_t9A4AFC9A3F952AA70D128EBADA69AE23736BFBF2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionTaskSource_1_CompleteWork_m79B4E08E9922783128B8447CA311CA16E76C8FA1_gshared (YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* __this, RuntimeObject* ___0_taskResult, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionWorker_1_InstructionComplete_m33D0B323F9CA6FB4E40AA04F684B05B3E5F0AA88_gshared (YieldInstructionWorker_1_t9A4AFC9A3F952AA70D128EBADA69AE23736BFBF2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m4A0DFA3D000F3021915F4E31F9EC15E25CBD6A6F_gshared_inline (Nullable_1_t3E31AC057D1396B991A9E84F22568C8B626E08FC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoroutineWrapper_t9C1780B5570255E0E28D419DECC20B7FEF014940 Nullable_1_GetValueOrDefault_m90F92BD374C42FBABE7941E2C01DB403342D24D8_gshared_inline (Nullable_1_t3E31AC057D1396B991A9E84F22568C8B626E08FC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m2D2D41F7BC8424C4A66A95873CDD99E47AC274F4_gshared (Nullable_1_t3E31AC057D1396B991A9E84F22568C8B626E08FC* __this, CoroutineWrapper_t9C1780B5570255E0E28D419DECC20B7FEF014940 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_gshared_inline (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared_inline (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTaskAwaiter_1__ctor_m7ABF980CA5045D3E81CF1B502732BB3C66BF6FC8_gshared_inline (ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1* __this, ValueTask_1_t7C5C39AB5B4A0ABA07AC934800D43DED916F9215 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTask_1_get_IsCompleted_mB5FE6398DBC9CBAECABB6AFC1B3F3A1F51D1479F_gshared_inline (ValueTask_1_t7C5C39AB5B4A0ABA07AC934800D43DED916F9215* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ValueTask_1_get_Result_m3035DEA69E68AD985EDB5285416C94558C72B23D_gshared_inline (ValueTask_1_t7C5C39AB5B4A0ABA07AC934800D43DED916F9215* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Task_1_get_ResultOnSuccess_m747DDF25AF20D348F75409600C9943ED5ED92BA0_gshared_inline (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader__ctor_mF80B938FCE31DD85F0E3048DC60D969C2E50A296 (XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionUtility_CreateValueAction_mF7C1DCF322EBC2C0478B2F0502AF265CBC570032 (Type_t* ___0_valueType, String_t* ___1_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader__ctor_mAFED8EF378777B7CB3C92AE4ED4FE6130C2A2A6F (XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59* __this, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_inputAction, int32_t ___1_inputSourceMode, const RuntimeMethod* method) ;
inline void BypassScope_Dispose_mD2092263EF1CD137EB35D092B66915B2A0EFDE40 (BypassScope_t801793A02437762F196198D282A1980396D8B968* __this, const RuntimeMethod* method)
{
	((  void (*) (BypassScope_t801793A02437762F196198D282A1980396D8B968*, const RuntimeMethod*))BypassScope_Dispose_mD2092263EF1CD137EB35D092B66915B2A0EFDE40_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806 (XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59* __this, InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1** ___0_reference, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRInputValueReader_get_inputSourceMode_m6D12A254104BBE6F3945ACFE6CAC42DC51CDD5E0_inline (XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAction_IsInProgress_m0572B3C5AA6C8E7FC4A1927DDAA54C3D40714E62 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
inline YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* YieldInstructionTaskSource_1_Rent_m0E47F8C67A4FAEFE37B6DEF27EA3D3913DE5BB53 (RuntimeObject* ___0_instruction, const RuntimeMethod* method)
{
	return ((  YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* (*) (RuntimeObject*, const RuntimeMethod*))YieldInstructionTaskSource_1_Rent_m0E47F8C67A4FAEFE37B6DEF27EA3D3913DE5BB53_gshared)(___0_instruction, method);
}
inline int16_t YieldInstructionTaskSource_1_get_Version_m28FEA206F80C7A8CA1A36D11585C9FD48C675592 (YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* __this, const RuntimeMethod* method)
{
	return ((  int16_t (*) (YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A*, const RuntimeMethod*))YieldInstructionTaskSource_1_get_Version_m28FEA206F80C7A8CA1A36D11585C9FD48C675592_gshared)(__this, method);
}
inline void ValueTask_1__ctor_m177950552C93B57A4BB1739D0F7D66EDD7C59D11_inline (ValueTask_1_t7C5C39AB5B4A0ABA07AC934800D43DED916F9215* __this, RuntimeObject* ___0_source, int16_t ___1_token, const RuntimeMethod* method)
{
	((  void (*) (ValueTask_1_t7C5C39AB5B4A0ABA07AC934800D43DED916F9215*, RuntimeObject*, int16_t, const RuntimeMethod*))ValueTask_1__ctor_m177950552C93B57A4BB1739D0F7D66EDD7C59D11_gshared_inline)(__this, ___0_source, ___1_token, method);
}
inline ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1 ValueTask_1_GetAwaiter_m22539C2335A475C19BDF8D65A9FCCC14284ECCC3_inline (ValueTask_1_t7C5C39AB5B4A0ABA07AC934800D43DED916F9215* __this, const RuntimeMethod* method)
{
	return ((  ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1 (*) (ValueTask_1_t7C5C39AB5B4A0ABA07AC934800D43DED916F9215*, const RuntimeMethod*))ValueTask_1_GetAwaiter_m22539C2335A475C19BDF8D65A9FCCC14284ECCC3_gshared_inline)(__this, method);
}
inline void YieldInstructionAwaiter_1__ctor_m8D8767EB6A1E94DD948F5033E0FFBEF48CD305A1 (YieldInstructionAwaiter_1_t75EFCC9D4A37AF66B43EBA3018EBD918E9F10DEB* __this, RuntimeObject* ___0_instruction, const RuntimeMethod* method)
{
	((  void (*) (YieldInstructionAwaiter_1_t75EFCC9D4A37AF66B43EBA3018EBD918E9F10DEB*, RuntimeObject*, const RuntimeMethod*))YieldInstructionAwaiter_1__ctor_m8D8767EB6A1E94DD948F5033E0FFBEF48CD305A1_gshared)(__this, ___0_instruction, method);
}
inline bool ValueTaskAwaiter_1_get_IsCompleted_m8243D9042B827FED4B48039D35244D30C78112F7_inline (ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1*, const RuntimeMethod*))ValueTaskAwaiter_1_get_IsCompleted_m8243D9042B827FED4B48039D35244D30C78112F7_gshared_inline)(__this, method);
}
inline bool YieldInstructionAwaiter_1_get_IsCompleted_mD815AE4D212ADE2F2446C91D44B25DA8B8FAFF1C (YieldInstructionAwaiter_1_t75EFCC9D4A37AF66B43EBA3018EBD918E9F10DEB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (YieldInstructionAwaiter_1_t75EFCC9D4A37AF66B43EBA3018EBD918E9F10DEB*, const RuntimeMethod*))YieldInstructionAwaiter_1_get_IsCompleted_mD815AE4D212ADE2F2446C91D44B25DA8B8FAFF1C_gshared)(__this, method);
}
inline void ValueTaskAwaiter_1_OnCompleted_m21C8DCA59FBBB53ADCBDB5DA9BF7EC32C48C054E (ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method)
{
	((  void (*) (ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))ValueTaskAwaiter_1_OnCompleted_m21C8DCA59FBBB53ADCBDB5DA9BF7EC32C48C054E_gshared)(__this, ___0_continuation, method);
}
inline void YieldInstructionAwaiter_1_OnCompleted_m102C89F87A627BF690D5EF704286806CE4549133 (YieldInstructionAwaiter_1_t75EFCC9D4A37AF66B43EBA3018EBD918E9F10DEB* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method)
{
	((  void (*) (YieldInstructionAwaiter_1_t75EFCC9D4A37AF66B43EBA3018EBD918E9F10DEB*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))YieldInstructionAwaiter_1_OnCompleted_m102C89F87A627BF690D5EF704286806CE4549133_gshared)(__this, ___0_continuation, method);
}
inline void ValueTaskAwaiter_1_UnsafeOnCompleted_m7F05330CC379BBBC22DA0F972F3D87C3E34B28EF (ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method)
{
	((  void (*) (ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))ValueTaskAwaiter_1_UnsafeOnCompleted_m7F05330CC379BBBC22DA0F972F3D87C3E34B28EF_gshared)(__this, ___0_continuation, method);
}
inline void YieldInstructionAwaiter_1_UnsafeOnCompleted_m90201B4867B8B2934E692073E9967BDE082EAF02 (YieldInstructionAwaiter_1_t75EFCC9D4A37AF66B43EBA3018EBD918E9F10DEB* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method)
{
	((  void (*) (YieldInstructionAwaiter_1_t75EFCC9D4A37AF66B43EBA3018EBD918E9F10DEB*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))YieldInstructionAwaiter_1_UnsafeOnCompleted_m90201B4867B8B2934E692073E9967BDE082EAF02_gshared)(__this, ___0_continuation, method);
}
inline void YieldInstructionTaskSource_1_Return_m43169EE2FD91675D99A514FB26E2DC139D72AE08 (YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* ___0_taskSource, const RuntimeMethod* method)
{
	((  void (*) (YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A*, const RuntimeMethod*))YieldInstructionTaskSource_1_Return_m43169EE2FD91675D99A514FB26E2DC139D72AE08_gshared)(___0_taskSource, method);
}
inline RuntimeObject* ValueTaskAwaiter_1_GetResult_m7C1C2CFBD94C6D0E3D0D2F0FA5B1D57F9176A641_inline (ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1*, const RuntimeMethod*))ValueTaskAwaiter_1_GetResult_m7C1C2CFBD94C6D0E3D0D2F0FA5B1D57F9176A641_gshared_inline)(__this, method);
}
inline RuntimeObject* YieldInstructionAwaiter_1_GetResult_m76166B24646270ED64A906D6AE16E37C75188161_inline (YieldInstructionAwaiter_1_t75EFCC9D4A37AF66B43EBA3018EBD918E9F10DEB* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (YieldInstructionAwaiter_1_t75EFCC9D4A37AF66B43EBA3018EBD918E9F10DEB*, const RuntimeMethod*))YieldInstructionAwaiter_1_GetResult_m76166B24646270ED64A906D6AE16E37C75188161_gshared_inline)(__this, method);
}
inline void ValueTask_1__ctor_m6290E5FE79CCE71C6983D5D86933A41BFB4BDEE0_inline (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* __this, RuntimeObject* ___0_source, int16_t ___1_token, const RuntimeMethod* method)
{
	((  void (*) (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7*, RuntimeObject*, int16_t, const RuntimeMethod*))ValueTask_1__ctor_m6290E5FE79CCE71C6983D5D86933A41BFB4BDEE0_gshared_inline)(__this, ___0_source, ___1_token, method);
}
inline void YieldInstructionAwaiter_1__ctor_m907BB646BEFBD3401C320BF16C812537E28E3EC9 (YieldInstructionAwaiter_1_t5F44D4BD7E715EF8FCBF72381196EE41448C5F2E* __this, RuntimeObject* ___0_instruction, const RuntimeMethod* method)
{
	((  void (*) (YieldInstructionAwaiter_1_t5F44D4BD7E715EF8FCBF72381196EE41448C5F2E*, RuntimeObject*, const RuntimeMethod*))YieldInstructionAwaiter_1__ctor_m907BB646BEFBD3401C320BF16C812537E28E3EC9_gshared)(__this, ___0_instruction, method);
}
inline bool YieldInstructionAwaiter_1_get_IsCompleted_m805A35419B7164E29557CA8D9E11F3C48BB211C6 (YieldInstructionAwaiter_1_t5F44D4BD7E715EF8FCBF72381196EE41448C5F2E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (YieldInstructionAwaiter_1_t5F44D4BD7E715EF8FCBF72381196EE41448C5F2E*, const RuntimeMethod*))YieldInstructionAwaiter_1_get_IsCompleted_m805A35419B7164E29557CA8D9E11F3C48BB211C6_gshared)(__this, method);
}
inline void YieldInstructionAwaiter_1_OnCompleted_m07208EA0DC68B40D91412ADDA7B6239F97806210 (YieldInstructionAwaiter_1_t5F44D4BD7E715EF8FCBF72381196EE41448C5F2E* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method)
{
	((  void (*) (YieldInstructionAwaiter_1_t5F44D4BD7E715EF8FCBF72381196EE41448C5F2E*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))YieldInstructionAwaiter_1_OnCompleted_m07208EA0DC68B40D91412ADDA7B6239F97806210_gshared)(__this, ___0_continuation, method);
}
inline void YieldInstructionAwaiter_1_UnsafeOnCompleted_m4615DCE15A0CA30D81958F0F3CE72D66B94FAFDE (YieldInstructionAwaiter_1_t5F44D4BD7E715EF8FCBF72381196EE41448C5F2E* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method)
{
	((  void (*) (YieldInstructionAwaiter_1_t5F44D4BD7E715EF8FCBF72381196EE41448C5F2E*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))YieldInstructionAwaiter_1_UnsafeOnCompleted_m4615DCE15A0CA30D81958F0F3CE72D66B94FAFDE_gshared)(__this, ___0_continuation, method);
}
inline void YieldInstructionAwaiter_1_GetResult_m94E8FFC9043D7A54EE239C1676A0B8645B3D0E90_inline (YieldInstructionAwaiter_1_t5F44D4BD7E715EF8FCBF72381196EE41448C5F2E* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (YieldInstructionAwaiter_1_t5F44D4BD7E715EF8FCBF72381196EE41448C5F2E*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))YieldInstructionAwaiter_1_GetResult_m94E8FFC9043D7A54EE239C1676A0B8645B3D0E90_gshared_inline)((YieldInstructionAwaiter_1_t5F44D4BD7E715EF8FCBF72381196EE41448C5F2E*)__this, il2cppRetVal, method);
}
inline int16_t ManualResetValueTaskSourceCore_1_get_Version_m1152B5E9B9A7CE245182FA93E38692FCC00BD4AC_inline (ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985* __this, const RuntimeMethod* method)
{
	return ((  int16_t (*) (ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_get_Version_m1152B5E9B9A7CE245182FA93E38692FCC00BD4AC_gshared_inline)(__this, method);
}
inline int32_t ManualResetValueTaskSourceCore_1_GetStatus_mE63A6F206365CB3630800FCDEF81DE1905F1CC60 (ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985*, int16_t, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_GetStatus_mE63A6F206365CB3630800FCDEF81DE1905F1CC60_gshared)(__this, ___0_token, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void YieldInstructionWorker_1__ctor_mA4B5E202D5565F47E935FF10E42271818500D714 (YieldInstructionWorker_1_t9A4AFC9A3F952AA70D128EBADA69AE23736BFBF2* __this, YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* ___0_owner, const RuntimeMethod* method)
{
	((  void (*) (YieldInstructionWorker_1_t9A4AFC9A3F952AA70D128EBADA69AE23736BFBF2*, YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A*, const RuntimeMethod*))YieldInstructionWorker_1__ctor_mA4B5E202D5565F47E935FF10E42271818500D714_gshared)(__this, ___0_owner, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void YieldInstructionWorker_1_Dispose_m1C2E7A9EB18D5810DAE6D8A6B55E82F2901C6650 (YieldInstructionWorker_1_t9A4AFC9A3F952AA70D128EBADA69AE23736BFBF2* __this, const RuntimeMethod* method)
{
	((  void (*) (YieldInstructionWorker_1_t9A4AFC9A3F952AA70D128EBADA69AE23736BFBF2*, const RuntimeMethod*))YieldInstructionWorker_1_Dispose_m1C2E7A9EB18D5810DAE6D8A6B55E82F2901C6650_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline bool ConcurrentQueue_1_TryDequeue_m99B33DE4B61C313549B7F25678BAF5A097A997EE (ConcurrentQueue_1_t15C4F7C40BC2BB575BEC30003E92347B4A7B3471* __this, YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A** ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentQueue_1_t15C4F7C40BC2BB575BEC30003E92347B4A7B3471*, YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A**, const RuntimeMethod*))ConcurrentQueue_1_TryDequeue_m04C6B697D83A4AA4BAD38344201C140ED7DC5CAA_gshared)(__this, ___0_result, method);
}
inline void YieldInstructionTaskSource_1__ctor_mEE0168E2012909BA6BCFFFA2FC432016EFBFAEC6 (YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* __this, const RuntimeMethod* method)
{
	((  void (*) (YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A*, const RuntimeMethod*))YieldInstructionTaskSource_1__ctor_mEE0168E2012909BA6BCFFFA2FC432016EFBFAEC6_gshared)(__this, method);
}
inline void ManualResetValueTaskSourceCore_1_Reset_m721893AEDD42B319DE00F9E296C68E4D46E20AD3 (ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_Reset_m721893AEDD42B319DE00F9E296C68E4D46E20AD3_gshared)(__this, method);
}
inline void YieldInstructionWorker_1_Initialize_m28EF400BB5D26F557651B7CE249969AD99947F17 (YieldInstructionWorker_1_t9A4AFC9A3F952AA70D128EBADA69AE23736BFBF2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (YieldInstructionWorker_1_t9A4AFC9A3F952AA70D128EBADA69AE23736BFBF2*, RuntimeObject*, const RuntimeMethod*))YieldInstructionWorker_1_Initialize_m28EF400BB5D26F557651B7CE249969AD99947F17_gshared)(__this, ___0_value, method);
}
inline void YieldInstructionWorker_1_Reset_m45F1F1D060107DD5FB1AE8F5A68794CDA6C4D4CB (YieldInstructionWorker_1_t9A4AFC9A3F952AA70D128EBADA69AE23736BFBF2* __this, const RuntimeMethod* method)
{
	((  void (*) (YieldInstructionWorker_1_t9A4AFC9A3F952AA70D128EBADA69AE23736BFBF2*, const RuntimeMethod*))YieldInstructionWorker_1_Reset_m45F1F1D060107DD5FB1AE8F5A68794CDA6C4D4CB_gshared)(__this, method);
}
inline void ConcurrentQueue_1_Enqueue_mCF894C2854888B05480FEE8434E58821CD5E5938 (ConcurrentQueue_1_t15C4F7C40BC2BB575BEC30003E92347B4A7B3471* __this, YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentQueue_1_t15C4F7C40BC2BB575BEC30003E92347B4A7B3471*, YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A*, const RuntimeMethod*))ConcurrentQueue_1_Enqueue_m6E14BFDDF046BB59B8EEF4A398D5AB7F4720D0A4_gshared)(__this, ___0_item, method);
}
inline bool YieldInstructionTaskSource_1_get_IsCompleted_mEB3973100EF4F91D4902D5924FC13F51EEC0A0E9 (YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A*, const RuntimeMethod*))YieldInstructionTaskSource_1_get_IsCompleted_mEB3973100EF4F91D4902D5924FC13F51EEC0A0E9_gshared)(__this, method);
}
inline void ManualResetValueTaskSourceCore_1_SetResult_m17450D6849EFB042FFB176DDFADE56CF97E1EBA1 (ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985* __this, RuntimeObject* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985*, RuntimeObject*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_SetResult_m17450D6849EFB042FFB176DDFADE56CF97E1EBA1_gshared)(__this, ___0_result, method);
}
inline void ManualResetValueTaskSourceCore_1_SetException_m9FA50C7E9CC155E7DEA50AD6E2E713AAEBB1AD80 (ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985* __this, Exception_t* ___0_error, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985*, Exception_t*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_SetException_m9FA50C7E9CC155E7DEA50AD6E2E713AAEBB1AD80_gshared)(__this, ___0_error, method);
}
inline RuntimeObject* ManualResetValueTaskSourceCore_1_GetResult_m0B8B52A05872ADB92E2D9DB5699F6893E7FE7877 (ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985*, int16_t, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_GetResult_m0B8B52A05872ADB92E2D9DB5699F6893E7FE7877_gshared)(__this, ___0_token, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncContextUtility_get_IsMainThread_mD0ADDDB5A45BF9AA040DD93BBBFCFEAB38385D04 (const RuntimeMethod* method) ;
inline void ManualResetValueTaskSourceCore_1_OnCompleted_m11CEF4B060AE3596FFED2D0EAD0392283958E662 (ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t, int32_t, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_OnCompleted_m11CEF4B060AE3596FFED2D0EAD0392283958E662_gshared)(__this, ___0_continuation, ___1_state, ___2_token, ___3_flags, method);
}
inline void ConcurrentQueue_1__ctor_m4FA15867B9F8C815F9C0E21909B4F6DCA2A6B114 (ConcurrentQueue_1_t15C4F7C40BC2BB575BEC30003E92347B4A7B3471* __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentQueue_1_t15C4F7C40BC2BB575BEC30003E92347B4A7B3471*, const RuntimeMethod*))ConcurrentQueue_1__ctor_m45A2A2E43BA42D4368773A687E7BB6CBCD510345_gshared)(__this, method);
}
inline void YieldInstructionWorker_1_EnsureRunning_m266F014C2DE8EFE06C6DFB546604A54B31502D2C (YieldInstructionWorker_1_t9A4AFC9A3F952AA70D128EBADA69AE23736BFBF2* __this, const RuntimeMethod* method)
{
	((  void (*) (YieldInstructionWorker_1_t9A4AFC9A3F952AA70D128EBADA69AE23736BFBF2*, const RuntimeMethod*))YieldInstructionWorker_1_EnsureRunning_m266F014C2DE8EFE06C6DFB546604A54B31502D2C_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncContextUtility_RunOnUnityThread_mD8B5AF352F933E1A48539EEFFC5EFF7F7D07220D (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* AssetBundleRequest_get_asset_mE9FDA3900215925371E7D15E7E19AA98713F5D6C (AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* __this, const RuntimeMethod* method) ;
inline void YieldInstructionTaskSource_1_CompleteWork_m79B4E08E9922783128B8447CA311CA16E76C8FA1 (YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* __this, RuntimeObject* ___0_taskResult, const RuntimeMethod* method)
{
	((  void (*) (YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A*, RuntimeObject*, const RuntimeMethod*))YieldInstructionTaskSource_1_CompleteWork_m79B4E08E9922783128B8447CA311CA16E76C8FA1_gshared)(__this, ___0_taskResult, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetBundle_tB38418819A49060CD738CB21541649340F082943* AssetBundleCreateRequest_get_assetBundle_m613FDE589FB86BE1E6920D38ED0706F785D9DB21 (AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ResourceRequest_get_asset_m740C394902843D080795A49372A2AB3CE9705087 (ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868* __this, const RuntimeMethod* method) ;
inline void YieldInstructionWorker_1_InstructionComplete_m33D0B323F9CA6FB4E40AA04F684B05B3E5F0AA88 (YieldInstructionWorker_1_t9A4AFC9A3F952AA70D128EBADA69AE23736BFBF2* __this, const RuntimeMethod* method)
{
	((  void (*) (YieldInstructionWorker_1_t9A4AFC9A3F952AA70D128EBADA69AE23736BFBF2*, const RuntimeMethod*))YieldInstructionWorker_1_InstructionComplete_m33D0B323F9CA6FB4E40AA04F684B05B3E5F0AA88_gshared)(__this, method);
}
inline bool Nullable_1_get_HasValue_m4A0DFA3D000F3021915F4E31F9EC15E25CBD6A6F_inline (Nullable_1_t3E31AC057D1396B991A9E84F22568C8B626E08FC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t3E31AC057D1396B991A9E84F22568C8B626E08FC*, const RuntimeMethod*))Nullable_1_get_HasValue_m4A0DFA3D000F3021915F4E31F9EC15E25CBD6A6F_gshared_inline)(__this, method);
}
inline CoroutineWrapper_t9C1780B5570255E0E28D419DECC20B7FEF014940 Nullable_1_GetValueOrDefault_m90F92BD374C42FBABE7941E2C01DB403342D24D8_inline (Nullable_1_t3E31AC057D1396B991A9E84F22568C8B626E08FC* __this, const RuntimeMethod* method)
{
	return ((  CoroutineWrapper_t9C1780B5570255E0E28D419DECC20B7FEF014940 (*) (Nullable_1_t3E31AC057D1396B991A9E84F22568C8B626E08FC*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m90F92BD374C42FBABE7941E2C01DB403342D24D8_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AwaiterExtensions_StopCoroutine_m2BFCEFC532C7C81F9FAE39C2058E637ABA37F669 (CoroutineWrapper_t9C1780B5570255E0E28D419DECC20B7FEF014940 ___0_wrapper, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoroutineWrapper_t9C1780B5570255E0E28D419DECC20B7FEF014940 AwaiterExtensions_RunCoroutine_m965F01BEC7FECC6E0838AC977736606C5429977A (RuntimeObject* ___0_enumerator, const RuntimeMethod* method) ;
inline void Nullable_1__ctor_m2D2D41F7BC8424C4A66A95873CDD99E47AC274F4 (Nullable_1_t3E31AC057D1396B991A9E84F22568C8B626E08FC* __this, CoroutineWrapper_t9C1780B5570255E0E28D419DECC20B7FEF014940 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t3E31AC057D1396B991A9E84F22568C8B626E08FC*, CoroutineWrapper_t9C1780B5570255E0E28D419DECC20B7FEF014940, const RuntimeMethod*))Nullable_1__ctor_m2D2D41F7BC8424C4A66A95873CDD99E47AC274F4_gshared)(__this, ___0_value, method);
}
inline void Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04 (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781 (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* __this, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* ___0_dict, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32 (fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, int32_t ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C (fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___0_a, fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB (fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86 (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1 (fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668* __this, const RuntimeMethod* method) ;
inline bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_inline (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, const RuntimeMethod*))fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_gshared_inline)(__this, method);
}
inline bool fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767 (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, const RuntimeMethod*))fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A_gshared)((fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*)__this, il2cppRetVal, method);
}
inline void fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516 (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method)
{
	((  void (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, Il2CppFullySharedGenericAny, const RuntimeMethod*))fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516_gshared)((fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*)__this, ___0_value, method);
}
inline bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_inline (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, const RuntimeMethod*))fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared_inline)(__this, method);
}
inline bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, const RuntimeMethod*))fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_gshared)(__this, method);
}
inline fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241 (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method)
{
	return ((  fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, const RuntimeMethod*))fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_gshared)(__this, method);
}
inline void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6 (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8, const RuntimeMethod*))fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
inline void ValueTaskAwaiter_1__ctor_m7ABF980CA5045D3E81CF1B502732BB3C66BF6FC8_inline (ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1* __this, ValueTask_1_t7C5C39AB5B4A0ABA07AC934800D43DED916F9215 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1*, ValueTask_1_t7C5C39AB5B4A0ABA07AC934800D43DED916F9215, const RuntimeMethod*))ValueTaskAwaiter_1__ctor_m7ABF980CA5045D3E81CF1B502732BB3C66BF6FC8_gshared_inline)(__this, ___0_value, method);
}
inline bool ValueTask_1_get_IsCompleted_mB5FE6398DBC9CBAECABB6AFC1B3F3A1F51D1479F_inline (ValueTask_1_t7C5C39AB5B4A0ABA07AC934800D43DED916F9215* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTask_1_t7C5C39AB5B4A0ABA07AC934800D43DED916F9215*, const RuntimeMethod*))ValueTask_1_get_IsCompleted_mB5FE6398DBC9CBAECABB6AFC1B3F3A1F51D1479F_gshared_inline)(__this, method);
}
inline RuntimeObject* ValueTask_1_get_Result_m3035DEA69E68AD985EDB5285416C94558C72B23D_inline (ValueTask_1_t7C5C39AB5B4A0ABA07AC934800D43DED916F9215* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ValueTask_1_t7C5C39AB5B4A0ABA07AC934800D43DED916F9215*, const RuntimeMethod*))ValueTask_1_get_Result_m3035DEA69E68AD985EDB5285416C94558C72B23D_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_ValidateEnd_m6BB967A466C17A106BC547009EDE196266651751 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_task, const RuntimeMethod* method) ;
inline RuntimeObject* Task_1_get_ResultOnSuccess_m747DDF25AF20D348F75409600C9943ED5ED92BA0_inline (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*, const RuntimeMethod*))Task_1_get_ResultOnSuccess_m747DDF25AF20D348F75409600C9943ED5ED92BA0_gshared_inline)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 29057
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_get_manualValue_m6580D9D0E90768453554EC4C3F3A8BDE118832AD_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:227>
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}
}
// Method Definition Index: 29058
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_set_manualValue_m7DE8FBB1F992F66B64970AE99224524E22F8232B_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:228>
		il2cpp_codegen_memcpy(L_0, ___0_value, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}
}
// Method Definition Index: 29059
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_m86D6EE8C2B6C04E222D96122A85F792D9A7B8CAB_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:234>
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		return L_0;
	}
}
// Method Definition Index: 29060
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_set_bypass_m391756331BB534D08D3C6DF2D5615F75B5E0E21E_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:234>
		RuntimeObject* L_0 = ___0_value;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_0);
		return;
	}
}
// Method Definition Index: 29061
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1__ctor_mC3F4DB0A46B3C8AE8E07B03FDE9B6AC8D81E1C78_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:243>
		UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D* L_0 = (UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		il2cpp_codegen_write_instance_field_data<UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_0);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:248>
		XRInputValueReader__ctor_mF80B938FCE31DD85F0E3048DC60D969C2E50A296((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, NULL);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:250>
		return;
	}
}
// Method Definition Index: 29062
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1__ctor_m8A6FE1E7C460CBD4EC6AE392547F9B5454503EFE_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, String_t* ___0_name, int32_t ___1_inputSourceMode, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:243>
		UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D* L_0 = (UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		il2cpp_codegen_write_instance_field_data<UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_0);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:258>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		String_t* L_3 = ___0_name;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4;
		L_4 = InputActionUtility_CreateValueAction_mF7C1DCF322EBC2C0478B2F0502AF265CBC570032(L_2, L_3, NULL);
		int32_t L_5 = ___1_inputSourceMode;
		XRInputValueReader__ctor_mAFED8EF378777B7CB3C92AE4ED4FE6130C2A2A6F((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, L_4, L_5, NULL);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:260>
		return;
	}
}
// Method Definition Index: 29063
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_GetObjectReference_m3BED8195FBDCE6A99FCC116EBDC1EB0D62D2A039_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:269>
		UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D* L_0 = *(UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = *(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return L_2;
	}
}
// Method Definition Index: 29064
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_SetObjectReference_m862D31846AB537F3363F51ACE9942E1FD7A486F1_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:282>
		UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D* L_0 = *(UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		((  void (*) (UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_0, (((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)))), L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:283>
		return;
	}
}
// Method Definition Index: 29065
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_ReadValue_mFB37AAAB53CB16F2EEA26BCDF3A0023969C5A554_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	const Il2CppFullySharedGenericStruct L_6 = L_3;
	const Il2CppFullySharedGenericStruct L_8 = L_3;
	const Il2CppFullySharedGenericStruct L_10 = L_3;
	const Il2CppFullySharedGenericStruct L_13 = L_3;
	const Il2CppFullySharedGenericStruct L_16 = L_3;
	const Il2CppFullySharedGenericStruct L_17 = L_3;
	const Il2CppFullySharedGenericStruct L_18 = L_3;
	const Il2CppFullySharedGenericStruct L_19 = L_3;
	BypassScope_t801793A02437762F196198D282A1980396D8B968 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	memset(V_1, 0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* V_2 = NULL;
	int32_t V_3 = 0;
	Il2CppFullySharedGenericStruct V_4 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	memset(V_4, 0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	RuntimeObject* G_B13_0 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:288>
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		bool L_1 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		if (L_1)
		{
			goto IL_0037;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:290>
		((  void (*) (BypassScope_t801793A02437762F196198D282A1980396D8B968*, XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((&V_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				BypassScope_Dispose_mD2092263EF1CD137EB35D092B66915B2A0EFDE40((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				return;
			}
		});
		try
		{
			//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:292>
			RuntimeObject* L_2;
			L_2 = ((  RuntimeObject* (*) (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			NullCheck(L_2);
			InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericStruct* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_2, (Il2CppFullySharedGenericStruct*)L_3);
			il2cpp_codegen_memcpy(V_1, L_3, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
			goto IL_00b2;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:296>
		int32_t L_4 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputSourceMode;
		V_3 = L_4;
		int32_t L_5 = V_3;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0058;
			}
			case 1:
			{
				goto IL_0063;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_0090;
			}
			case 4:
			{
				goto IL_00ab;
			}
		}
	}

IL_0058:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:300>
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_4, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(L_6, V_4, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}

IL_0063:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:303>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_7 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputAction;
		InvokerActionInvoker2< InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), NULL, L_7, (Il2CppFullySharedGenericStruct*)L_8);
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}

IL_006f:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:306>
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		bool L_9;
		L_9 = XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, (&V_2), NULL);
		if (L_9)
		{
			goto IL_0084;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_4, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(L_10, V_4, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_10, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}

IL_0084:
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_11 = V_2;
		NullCheck(L_11);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_12;
		L_12 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_11, NULL);
		InvokerActionInvoker2< InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), NULL, L_12, (Il2CppFullySharedGenericStruct*)L_13);
		il2cpp_codegen_memcpy(il2cppRetVal, L_13, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}

IL_0090:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:310>
		RuntimeObject* L_14;
		L_14 = ((  RuntimeObject* (*) (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:311>
		RuntimeObject* L_15 = L_14;
		if (L_15)
		{
			G_B13_0 = L_15;
			goto IL_00a5;
		}
		G_B12_0 = L_15;
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_4, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(L_16, V_4, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_16, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}

IL_00a5:
	{
		NullCheck(G_B13_0);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericStruct* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), G_B13_0, (Il2CppFullySharedGenericStruct*)L_17);
		il2cpp_codegen_memcpy(il2cppRetVal, L_17, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}

IL_00ab:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:315>
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_18, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}

IL_00b2:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:317>
		il2cpp_codegen_memcpy(L_19, V_1, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_19, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}
}
// Method Definition Index: 29066
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_mC84F19E640053D49DF7AC4E26440A3649D928CD4_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_24 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	BypassScope_t801793A02437762F196198D282A1980396D8B968 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:322>
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		bool L_1 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		if (L_1)
		{
			goto IL_0038;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:324>
		((  void (*) (BypassScope_t801793A02437762F196198D282A1980396D8B968*, XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((&V_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{
				BypassScope_Dispose_mD2092263EF1CD137EB35D092B66915B2A0EFDE40((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				return;
			}
		});
		try
		{
			//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:326>
			RuntimeObject* L_2;
			L_2 = ((  RuntimeObject* (*) (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			Il2CppFullySharedGenericStruct* L_3 = ___0_value;
			NullCheck(L_2);
			bool L_4;
			L_4 = InterfaceFuncInvoker1< bool, Il2CppFullySharedGenericStruct* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_2, L_3);
			V_1 = L_4;
			goto IL_00bb;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:330>
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		int32_t L_5;
		L_5 = XRInputValueReader_get_inputSourceMode_m6D12A254104BBE6F3945ACFE6CAC42DC51CDD5E0_inline((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, NULL);
		V_3 = L_5;
		int32_t L_6 = V_3;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0059;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_008f;
			}
			case 4:
			{
				goto IL_00ad;
			}
		}
	}

IL_0059:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:334>
		Il2CppFullySharedGenericStruct* L_7 = ___0_value;
		il2cpp_codegen_initobj(L_7, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:335>
		return (bool)0;
	}

IL_0062:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:338>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputAction;
		Il2CppFullySharedGenericStruct* L_9 = ___0_value;
		bool L_10;
		L_10 = ((  bool (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return L_10;
	}

IL_006f:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:341>
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		bool L_11;
		L_11 = XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, (&V_2), NULL);
		if (!L_11)
		{
			goto IL_0086;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:342>
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_12 = V_2;
		NullCheck(L_12);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_13;
		L_13 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_12, NULL);
		Il2CppFullySharedGenericStruct* L_14 = ___0_value;
		bool L_15;
		L_15 = ((  bool (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_13, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return L_15;
	}

IL_0086:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:344>
		Il2CppFullySharedGenericStruct* L_16 = ___0_value;
		il2cpp_codegen_initobj(L_16, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:345>
		return (bool)0;
	}

IL_008f:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:349>
		RuntimeObject* L_17;
		L_17 = ((  RuntimeObject* (*) (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		V_4 = L_17;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:350>
		RuntimeObject* L_18 = V_4;
		if (!L_18)
		{
			goto IL_00a4;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:351>
		RuntimeObject* L_19 = V_4;
		Il2CppFullySharedGenericStruct* L_20 = ___0_value;
		NullCheck(L_19);
		bool L_21;
		L_21 = InterfaceFuncInvoker1< bool, Il2CppFullySharedGenericStruct* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_19, L_20);
		return L_21;
	}

IL_00a4:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:353>
		Il2CppFullySharedGenericStruct* L_22 = ___0_value;
		il2cpp_codegen_initobj(L_22, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:354>
		return (bool)0;
	}

IL_00ad:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:358>
		Il2CppFullySharedGenericStruct* L_23 = ___0_value;
		il2cpp_codegen_memcpy(L_24, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_23, L_24, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 1), (void**)(Il2CppFullySharedGenericStruct*)L_23, (void*)L_24);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:359>
		return (bool)1;
	}

IL_00bb:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:361>
		bool L_25 = V_1;
		return L_25;
	}
}
// Method Definition Index: 29067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_ReadValue_mA9DD9A98276A883692B7BCBDFBAB6912D60F41E9_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	const Il2CppFullySharedGenericStruct L_3 = L_1;
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	memset(V_0, 0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:365>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}

IL_000d:
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2 = ___0_action;
		NullCheck(L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20), L_2, (Il2CppFullySharedGenericStruct*)L_3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}
}
// Method Definition Index: 29068
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_mAF814AE91F21FF5F3AD73616B7D14DB1CAD004D6_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, Il2CppFullySharedGenericStruct* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:370>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:372>
		Il2CppFullySharedGenericStruct* L_1 = ___1_value;
		il2cpp_codegen_initobj(L_1, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:373>
		return (bool)0;
	}

IL_000c:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:376>
		Il2CppFullySharedGenericStruct* L_2 = ___1_value;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3 = ___0_action;
		NullCheck(L_3);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20), L_3, (Il2CppFullySharedGenericStruct*)L_4);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_2, L_4, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), (void**)(Il2CppFullySharedGenericStruct*)L_2, (void*)L_4);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:377>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5 = ___0_action;
		NullCheck(L_5);
		bool L_6;
		L_6 = InputAction_IsInProgress_m0572B3C5AA6C8E7FC4A1927DDAA54C3D40714E62(L_5, NULL);
		return L_6;
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
// Method Definition Index: 100656
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionAwaiter_1__ctor_m8D8767EB6A1E94DD948F5033E0FFBEF48CD305A1_gshared (YieldInstructionAwaiter_1_t75EFCC9D4A37AF66B43EBA3018EBD918E9F10DEB* __this, RuntimeObject* ___0_instruction, const RuntimeMethod* method) 
{
	ValueTask_1_t7C5C39AB5B4A0ABA07AC934800D43DED916F9215 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionAwaiter.cs:51>
		RuntimeObject* L_0 = ___0_instruction;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* L_1;
		L_1 = YieldInstructionTaskSource_1_Rent_m0E47F8C67A4FAEFE37B6DEF27EA3D3913DE5BB53(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->___taskSource = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___taskSource), (void*)L_1);
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionAwaiter.cs:52>
		YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* L_2 = __this->___taskSource;
		YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* L_3 = __this->___taskSource;
		NullCheck(L_3);
		int16_t L_4;
		L_4 = YieldInstructionTaskSource_1_get_Version_m28FEA206F80C7A8CA1A36D11585C9FD48C675592(L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		ValueTask_1_t7C5C39AB5B4A0ABA07AC934800D43DED916F9215 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ValueTask_1__ctor_m177950552C93B57A4BB1739D0F7D66EDD7C59D11_inline((&L_5), (RuntimeObject*)L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		V_0 = L_5;
		ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1 L_6;
		L_6 = ValueTask_1_GetAwaiter_m22539C2335A475C19BDF8D65A9FCCC14284ECCC3_inline((&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		__this->___awaiter = L_6;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___awaiter))->____value))->____obj), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___awaiter))->____value))->____result), (void*)NULL);
		#endif
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionAwaiter.cs:53>
		return;
	}
}
IL2CPP_EXTERN_C  void YieldInstructionAwaiter_1__ctor_m8D8767EB6A1E94DD948F5033E0FFBEF48CD305A1_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_instruction, const RuntimeMethod* method)
{
	YieldInstructionAwaiter_1_t75EFCC9D4A37AF66B43EBA3018EBD918E9F10DEB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<YieldInstructionAwaiter_1_t75EFCC9D4A37AF66B43EBA3018EBD918E9F10DEB*>(__this + _offset);
	YieldInstructionAwaiter_1__ctor_m8D8767EB6A1E94DD948F5033E0FFBEF48CD305A1(_thisAdjusted, ___0_instruction, method);
}
// Method Definition Index: 100657
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YieldInstructionAwaiter_1_get_IsCompleted_mD815AE4D212ADE2F2446C91D44B25DA8B8FAFF1C_gshared (YieldInstructionAwaiter_1_t75EFCC9D4A37AF66B43EBA3018EBD918E9F10DEB* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionAwaiter.cs:55>
		ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1* L_0 = (ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1*)(&__this->___awaiter);
		bool L_1;
		L_1 = ValueTaskAwaiter_1_get_IsCompleted_m8243D9042B827FED4B48039D35244D30C78112F7_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool YieldInstructionAwaiter_1_get_IsCompleted_mD815AE4D212ADE2F2446C91D44B25DA8B8FAFF1C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	YieldInstructionAwaiter_1_t75EFCC9D4A37AF66B43EBA3018EBD918E9F10DEB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<YieldInstructionAwaiter_1_t75EFCC9D4A37AF66B43EBA3018EBD918E9F10DEB*>(__this + _offset);
	bool _returnValue;
	_returnValue = YieldInstructionAwaiter_1_get_IsCompleted_mD815AE4D212ADE2F2446C91D44B25DA8B8FAFF1C(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 100658
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionAwaiter_1_OnCompleted_m102C89F87A627BF690D5EF704286806CE4549133_gshared (YieldInstructionAwaiter_1_t75EFCC9D4A37AF66B43EBA3018EBD918E9F10DEB* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionAwaiter.cs:58>
		ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1* L_0 = (ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1*)(&__this->___awaiter);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ___0_continuation;
		ValueTaskAwaiter_1_OnCompleted_m21C8DCA59FBBB53ADCBDB5DA9BF7EC32C48C054E(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return;
	}
}
IL2CPP_EXTERN_C  void YieldInstructionAwaiter_1_OnCompleted_m102C89F87A627BF690D5EF704286806CE4549133_AdjustorThunk (RuntimeObject* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method)
{
	YieldInstructionAwaiter_1_t75EFCC9D4A37AF66B43EBA3018EBD918E9F10DEB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<YieldInstructionAwaiter_1_t75EFCC9D4A37AF66B43EBA3018EBD918E9F10DEB*>(__this + _offset);
	YieldInstructionAwaiter_1_OnCompleted_m102C89F87A627BF690D5EF704286806CE4549133(_thisAdjusted, ___0_continuation, method);
}
// Method Definition Index: 100659
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionAwaiter_1_UnsafeOnCompleted_m90201B4867B8B2934E692073E9967BDE082EAF02_gshared (YieldInstructionAwaiter_1_t75EFCC9D4A37AF66B43EBA3018EBD918E9F10DEB* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionAwaiter.cs:61>
		ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1* L_0 = (ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1*)(&__this->___awaiter);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ___0_continuation;
		ValueTaskAwaiter_1_UnsafeOnCompleted_m7F05330CC379BBBC22DA0F972F3D87C3E34B28EF(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C  void YieldInstructionAwaiter_1_UnsafeOnCompleted_m90201B4867B8B2934E692073E9967BDE082EAF02_AdjustorThunk (RuntimeObject* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method)
{
	YieldInstructionAwaiter_1_t75EFCC9D4A37AF66B43EBA3018EBD918E9F10DEB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<YieldInstructionAwaiter_1_t75EFCC9D4A37AF66B43EBA3018EBD918E9F10DEB*>(__this + _offset);
	YieldInstructionAwaiter_1_UnsafeOnCompleted_m90201B4867B8B2934E692073E9967BDE082EAF02(_thisAdjusted, ___0_continuation, method);
}
// Method Definition Index: 100660
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* YieldInstructionAwaiter_1_GetResult_m76166B24646270ED64A906D6AE16E37C75188161_gshared (YieldInstructionAwaiter_1_t75EFCC9D4A37AF66B43EBA3018EBD918E9F10DEB* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000e:
			{
				//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionAwaiter.cs:73>
				YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* L_0 = __this->___taskSource;
				il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
				YieldInstructionTaskSource_1_Return_m43169EE2FD91675D99A514FB26E2DC139D72AE08(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
				//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionAwaiter.cs:74>
				return;
			}
		});
		try
		{
			//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionAwaiter.cs:69>
			ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1* L_1 = (ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1*)(&__this->___awaiter);
			RuntimeObject* L_2;
			L_2 = ValueTaskAwaiter_1_GetResult_m7C1C2CFBD94C6D0E3D0D2F0FA5B1D57F9176A641_inline(L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
			V_0 = L_2;
			goto IL_001a;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionAwaiter.cs:75>
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* YieldInstructionAwaiter_1_GetResult_m76166B24646270ED64A906D6AE16E37C75188161_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	YieldInstructionAwaiter_1_t75EFCC9D4A37AF66B43EBA3018EBD918E9F10DEB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<YieldInstructionAwaiter_1_t75EFCC9D4A37AF66B43EBA3018EBD918E9F10DEB*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = YieldInstructionAwaiter_1_GetResult_m76166B24646270ED64A906D6AE16E37C75188161_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 100656
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionAwaiter_1__ctor_m907BB646BEFBD3401C320BF16C812537E28E3EC9_gshared (YieldInstructionAwaiter_1_t5F44D4BD7E715EF8FCBF72381196EE41448C5F2E* __this, RuntimeObject* ___0_instruction, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_ValueTask_1_tE780A524CEF79CBB349A67469FC829C81819890A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	const uint32_t SizeOf_ValueTaskAwaiter_1_tB134E7CBBA9A9DA14927F2A0F6913A47426E636A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 10));
	const ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C L_6 = alloca(SizeOf_ValueTaskAwaiter_1_tB134E7CBBA9A9DA14927F2A0F6913A47426E636A);
	const ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7 L_5 = alloca(SizeOf_ValueTask_1_tE780A524CEF79CBB349A67469FC829C81819890A);
	ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7 V_0 = alloca(SizeOf_ValueTask_1_tE780A524CEF79CBB349A67469FC829C81819890A);
	memset(V_0, 0, SizeOf_ValueTask_1_tE780A524CEF79CBB349A67469FC829C81819890A);
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionAwaiter.cs:51>
		RuntimeObject* L_0 = ___0_instruction;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4* L_1;
		L_1 = ((  YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		il2cpp_codegen_write_instance_field_data<YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3),0), L_1);
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionAwaiter.cs:52>
		YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4* L_2 = *(YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3),0));
		YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4* L_3 = *(YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3),0));
		NullCheck(L_3);
		int16_t L_4;
		L_4 = ((  int16_t (*) (YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4)))(L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		memset(L_5, 0, SizeOf_ValueTask_1_tE780A524CEF79CBB349A67469FC829C81819890A);
		ValueTask_1__ctor_m6290E5FE79CCE71C6983D5D86933A41BFB4BDEE0_inline((ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7*)L_5, (RuntimeObject*)L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_ValueTask_1_tE780A524CEF79CBB349A67469FC829C81819890A);
		InvokerActionInvoker1< ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7*)V_0, (ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C*)L_6);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3),1), L_6, SizeOf_ValueTaskAwaiter_1_tB134E7CBBA9A9DA14927F2A0F6913A47426E636A);
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionAwaiter.cs:53>
		return;
	}
}
IL2CPP_EXTERN_C  void YieldInstructionAwaiter_1__ctor_m907BB646BEFBD3401C320BF16C812537E28E3EC9_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_instruction, const RuntimeMethod* method)
{
	YieldInstructionAwaiter_1_t5F44D4BD7E715EF8FCBF72381196EE41448C5F2E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<YieldInstructionAwaiter_1_t5F44D4BD7E715EF8FCBF72381196EE41448C5F2E*>(__this + _offset);
	YieldInstructionAwaiter_1__ctor_m907BB646BEFBD3401C320BF16C812537E28E3EC9(_thisAdjusted, ___0_instruction, method);
}
// Method Definition Index: 100657
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YieldInstructionAwaiter_1_get_IsCompleted_m805A35419B7164E29557CA8D9E11F3C48BB211C6_gshared (YieldInstructionAwaiter_1_t5F44D4BD7E715EF8FCBF72381196EE41448C5F2E* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionAwaiter.cs:55>
		bool L_0;
		L_0 = ((  bool (*) (ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((((ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3),1)))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool YieldInstructionAwaiter_1_get_IsCompleted_m805A35419B7164E29557CA8D9E11F3C48BB211C6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	YieldInstructionAwaiter_1_t5F44D4BD7E715EF8FCBF72381196EE41448C5F2E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<YieldInstructionAwaiter_1_t5F44D4BD7E715EF8FCBF72381196EE41448C5F2E*>(__this + _offset);
	bool _returnValue;
	_returnValue = YieldInstructionAwaiter_1_get_IsCompleted_m805A35419B7164E29557CA8D9E11F3C48BB211C6(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 100658
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionAwaiter_1_OnCompleted_m07208EA0DC68B40D91412ADDA7B6239F97806210_gshared (YieldInstructionAwaiter_1_t5F44D4BD7E715EF8FCBF72381196EE41448C5F2E* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionAwaiter.cs:58>
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_continuation;
		((  void (*) (ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)))((((ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3),1)))), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return;
	}
}
IL2CPP_EXTERN_C  void YieldInstructionAwaiter_1_OnCompleted_m07208EA0DC68B40D91412ADDA7B6239F97806210_AdjustorThunk (RuntimeObject* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method)
{
	YieldInstructionAwaiter_1_t5F44D4BD7E715EF8FCBF72381196EE41448C5F2E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<YieldInstructionAwaiter_1_t5F44D4BD7E715EF8FCBF72381196EE41448C5F2E*>(__this + _offset);
	YieldInstructionAwaiter_1_OnCompleted_m07208EA0DC68B40D91412ADDA7B6239F97806210(_thisAdjusted, ___0_continuation, method);
}
// Method Definition Index: 100659
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionAwaiter_1_UnsafeOnCompleted_m4615DCE15A0CA30D81958F0F3CE72D66B94FAFDE_gshared (YieldInstructionAwaiter_1_t5F44D4BD7E715EF8FCBF72381196EE41448C5F2E* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionAwaiter.cs:61>
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_continuation;
		((  void (*) (ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)))((((ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3),1)))), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C  void YieldInstructionAwaiter_1_UnsafeOnCompleted_m4615DCE15A0CA30D81958F0F3CE72D66B94FAFDE_AdjustorThunk (RuntimeObject* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method)
{
	YieldInstructionAwaiter_1_t5F44D4BD7E715EF8FCBF72381196EE41448C5F2E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<YieldInstructionAwaiter_1_t5F44D4BD7E715EF8FCBF72381196EE41448C5F2E*>(__this + _offset);
	YieldInstructionAwaiter_1_UnsafeOnCompleted_m4615DCE15A0CA30D81958F0F3CE72D66B94FAFDE(_thisAdjusted, ___0_continuation, method);
}
// Method Definition Index: 100660
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionAwaiter_1_GetResult_m94E8FFC9043D7A54EE239C1676A0B8645B3D0E90_gshared (YieldInstructionAwaiter_1_t5F44D4BD7E715EF8FCBF72381196EE41448C5F2E* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t7E368A56FCD7BB01DF82F2D8ECDC5E27EB7BDDAF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 16));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t7E368A56FCD7BB01DF82F2D8ECDC5E27EB7BDDAF);
	const Il2CppFullySharedGenericAny L_2 = L_1;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t7E368A56FCD7BB01DF82F2D8ECDC5E27EB7BDDAF);
	memset(V_0, 0, SizeOf_T_t7E368A56FCD7BB01DF82F2D8ECDC5E27EB7BDDAF);
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000e:
			{
				//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionAwaiter.cs:73>
				YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4* L_0 = *(YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3),0));
				il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
				((  void (*) (YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17)))(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
				//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionAwaiter.cs:74>
				return;
			}
		});
		try
		{
			//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionAwaiter.cs:69>
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15), (((ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3),1)))), (Il2CppFullySharedGenericAny*)L_1);
			il2cpp_codegen_memcpy(V_0, L_1, SizeOf_T_t7E368A56FCD7BB01DF82F2D8ECDC5E27EB7BDDAF);
			goto IL_001a;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionAwaiter.cs:75>
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_T_t7E368A56FCD7BB01DF82F2D8ECDC5E27EB7BDDAF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t7E368A56FCD7BB01DF82F2D8ECDC5E27EB7BDDAF);
		return;
	}
}
IL2CPP_EXTERN_C  void YieldInstructionAwaiter_1_GetResult_m94E8FFC9043D7A54EE239C1676A0B8645B3D0E90_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	YieldInstructionAwaiter_1_t5F44D4BD7E715EF8FCBF72381196EE41448C5F2E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<YieldInstructionAwaiter_1_t5F44D4BD7E715EF8FCBF72381196EE41448C5F2E*>(__this + _offset);
	YieldInstructionAwaiter_1_GetResult_m94E8FFC9043D7A54EE239C1676A0B8645B3D0E90_inline(_thisAdjusted, il2cppRetVal, method);
	return;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 100661
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t YieldInstructionTaskSource_1_get_Version_m28FEA206F80C7A8CA1A36D11585C9FD48C675592_gshared (YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:20>
		ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985* L_0 = (ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985*)(&__this->___core);
		int16_t L_1;
		L_1 = ManualResetValueTaskSourceCore_1_get_Version_m1152B5E9B9A7CE245182FA93E38692FCC00BD4AC_inline(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_1;
	}
}
// Method Definition Index: 100662
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YieldInstructionTaskSource_1_get_IsCompleted_mEB3973100EF4F91D4902D5924FC13F51EEC0A0E9_gshared (YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* __this, const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:26>
		int16_t L_0;
		L_0 = YieldInstructionTaskSource_1_get_Version_m28FEA206F80C7A8CA1A36D11585C9FD48C675592(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:28>
		int16_t L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:30>
		return (bool)0;
	}

IL_000c:
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:33>
		ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985* L_2 = (ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985*)(&__this->___core);
		int16_t L_3 = V_0;
		int32_t L_4;
		L_4 = ManualResetValueTaskSourceCore_1_GetStatus_mE63A6F206365CB3630800FCDEF81DE1905F1CC60(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (bool)((!(((uint32_t)L_4) <= ((uint32_t)0)))? 1 : 0);
	}
}
// Method Definition Index: 100663
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionTaskSource_1__ctor_mEE0168E2012909BA6BCFFFA2FC432016EFBFAEC6_gshared (YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:42>
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:43>
		YieldInstructionWorker_1_t9A4AFC9A3F952AA70D128EBADA69AE23736BFBF2* L_0 = (YieldInstructionWorker_1_t9A4AFC9A3F952AA70D128EBADA69AE23736BFBF2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		YieldInstructionWorker_1__ctor_mA4B5E202D5565F47E935FF10E42271818500D714(L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->___instructionWorker = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___instructionWorker), (void*)L_0);
		return;
	}
}
// Method Definition Index: 100664
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionTaskSource_1_Finalize_m3AED3CF46E937A3AD2BA51E4D19F38BED60FF77D_gshared (YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{
				NullCheck((RuntimeObject*)__this);
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2((RuntimeObject*)__this, NULL);
				return;
			}
		});
		try
		{
			//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:46>
			YieldInstructionWorker_1_t9A4AFC9A3F952AA70D128EBADA69AE23736BFBF2* L_0 = __this->___instructionWorker;
			NullCheck(L_0);
			YieldInstructionWorker_1_Dispose_m1C2E7A9EB18D5810DAE6D8A6B55E82F2901C6650(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			goto IL_0014;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		return;
	}
}
// Method Definition Index: 100665
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* YieldInstructionTaskSource_1_Rent_m0E47F8C67A4FAEFE37B6DEF27EA3D3913DE5BB53_gshared (RuntimeObject* ___0_instruction, const RuntimeMethod* method) 
{
	YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:50>
		RuntimeObject* L_0 = ___0_instruction;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:52>
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC2C7DF52EC0EF6E1C0B00223DC5CFB076E30C8F5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:55>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		ConcurrentQueue_1_t15C4F7C40BC2BB575BEC30003E92347B4A7B3471* L_2 = ((YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___pool;
		NullCheck(L_2);
		bool L_3;
		L_3 = ConcurrentQueue_1_TryDequeue_m99B33DE4B61C313549B7F25678BAF5A097A997EE(L_2, (&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:57>
		YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* L_4 = (YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		YieldInstructionTaskSource_1__ctor_mEE0168E2012909BA6BCFFFA2FC432016EFBFAEC6(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_0 = L_4;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:60>
		YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* L_5 = V_0;
		NullCheck(L_5);
		ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985* L_6 = (ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985*)(&L_5->___core);
		ManualResetValueTaskSourceCore_1_Reset_m721893AEDD42B319DE00F9E296C68E4D46E20AD3(L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:61>
		YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* L_7 = V_0;
		NullCheck(L_7);
		YieldInstructionWorker_1_t9A4AFC9A3F952AA70D128EBADA69AE23736BFBF2* L_8 = L_7->___instructionWorker;
		RuntimeObject* L_9 = ___0_instruction;
		NullCheck(L_8);
		YieldInstructionWorker_1_Initialize_m28EF400BB5D26F557651B7CE249969AD99947F17(L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:75>
		YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* L_10 = V_0;
		return L_10;
	}
}
// Method Definition Index: 100666
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionTaskSource_1_Return_m43169EE2FD91675D99A514FB26E2DC139D72AE08_gshared (YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* ___0_taskSource, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:80>
		YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* L_0 = ___0_taskSource;
		NullCheck(L_0);
		YieldInstructionWorker_1_t9A4AFC9A3F952AA70D128EBADA69AE23736BFBF2* L_1 = L_0->___instructionWorker;
		NullCheck(L_1);
		YieldInstructionWorker_1_Reset_m45F1F1D060107DD5FB1AE8F5A68794CDA6C4D4CB(L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:86>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		ConcurrentQueue_1_t15C4F7C40BC2BB575BEC30003E92347B4A7B3471* L_2 = ((YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___pool;
		YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* L_3 = ___0_taskSource;
		NullCheck(L_2);
		ConcurrentQueue_1_Enqueue_mCF894C2854888B05480FEE8434E58821CD5E5938(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:87>
		return;
	}
}
// Method Definition Index: 100667
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionTaskSource_1_CompleteWork_m79B4E08E9922783128B8447CA311CA16E76C8FA1_gshared (YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* __this, RuntimeObject* ___0_taskResult, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:91>
		bool L_0;
		L_0 = YieldInstructionTaskSource_1_get_IsCompleted_mEB3973100EF4F91D4902D5924FC13F51EEC0A0E9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:91>
		return;
	}

IL_0009:
	{
	}
	try
	{
		{
			//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:95>
			//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:96>
			//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:97>
			//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:98>
			//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:99>
			//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:100>
			//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:101>
			RuntimeObject* L_1 = ___0_taskResult;
			V_3 = L_1;
			RuntimeObject* L_2 = V_3;
			if (!((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 19))))
			{
				goto IL_001d_1;
			}
		}
		{
			RuntimeObject* L_3 = V_3;
			V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 19)));
			goto IL_0022_1;
		}

IL_001d_1:
		{
			RuntimeObject* L_4 = V_3;
			if (!L_4)
			{
				goto IL_0026_1;
			}
		}
		{
			goto IL_0044_1;
		}

IL_0022_1:
		{
			//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:97>
			RuntimeObject* L_5 = V_1;
			V_2 = L_5;
			goto IL_004b_1;
		}

IL_0026_1:
		{
			//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:98>
			il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject*));
			RuntimeObject* L_6 = V_4;
			if (L_6)
			{
				goto IL_0044_1;
			}
		}
		{
			//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:98>
			il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject*));
			RuntimeObject* L_7 = V_4;
			V_2 = L_7;
			goto IL_004b_1;
		}

IL_0044_1:
		{
			//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:100>
			RuntimeObject* L_8 = ___0_taskResult;
			V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 19)));
		}

IL_004b_1:
		{
			RuntimeObject* L_9 = V_2;
			V_0 = L_9;
			//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:103>
			ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985* L_10 = (ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985*)(&__this->___core);
			RuntimeObject* L_11 = V_0;
			ManualResetValueTaskSourceCore_1_SetResult_m17450D6849EFB042FFB176DDFADE56CF97E1EBA1(L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
			//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:104>
			goto IL_006c;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005b;
		}
		throw e;
	}

CATCH_005b:
	{
		Exception_t* L_12 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:105>
		V_5 = L_12;
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:107>
		ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985* L_13 = (ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985*)(&__this->___core);
		Exception_t* L_14 = V_5;
		ManualResetValueTaskSourceCore_1_SetException_m9FA50C7E9CC155E7DEA50AD6E2E713AAEBB1AD80(L_13, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:108>
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_006c;
	}

IL_006c:
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:109>
		return;
	}
}
// Method Definition Index: 100668
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YieldInstructionTaskSource_1_System_Threading_Tasks_Sources_IValueTaskSourceU3CTU3E_GetStatus_mDB524EBEDE170AECE3B9EF8FC329B3C5934D9188_gshared (YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:112>
		ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985* L_0 = (ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985*)(&__this->___core);
		int16_t L_1 = ___0_token;
		int32_t L_2;
		L_2 = ManualResetValueTaskSourceCore_1_GetStatus_mE63A6F206365CB3630800FCDEF81DE1905F1CC60(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return L_2;
	}
}
// Method Definition Index: 100669
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* YieldInstructionTaskSource_1_System_Threading_Tasks_Sources_IValueTaskSourceU3CTU3E_GetResult_mD4AE7EC4726EC5EE7AE5A9335C3F8BA9328BAAAF_gshared (YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:115>
		ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985* L_0 = (ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985*)(&__this->___core);
		int16_t L_1 = ___0_token;
		RuntimeObject* L_2;
		L_2 = ManualResetValueTaskSourceCore_1_GetResult_m0B8B52A05872ADB92E2D9DB5699F6893E7FE7877(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_2;
	}
}
// Method Definition Index: 100670
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionTaskSource_1_System_Threading_Tasks_Sources_IValueTaskSourceU3CTU3E_OnCompleted_m5763B4D90D2D80DE9A141FC1352DCF0507C71306_gshared (YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_completedContinuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncContextUtility_t8C18C92862A979808EE386EBB8D8713B47047881_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:119>
		int32_t L_0 = ___3_flags;
		if (!((int32_t)((int32_t)L_0&1)))
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SyncContextUtility_t8C18C92862A979808EE386EBB8D8713B47047881_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SyncContextUtility_get_IsMainThread_mD0ADDDB5A45BF9AA040DD93BBBFCFEAB38385D04(NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:121>
		int32_t L_2 = ___3_flags;
		___3_flags = (int32_t)((int32_t)((int32_t)L_2&((int32_t)-2)));
	}

IL_0014:
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:124>
		ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985* L_3 = (ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985*)(&__this->___core);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4 = ___0_completedContinuation;
		RuntimeObject* L_5 = ___1_state;
		int16_t L_6 = ___2_token;
		int32_t L_7 = ___3_flags;
		ManualResetValueTaskSourceCore_1_OnCompleted_m11CEF4B060AE3596FFED2D0EAD0392283958E662(L_3, L_4, L_5, L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:125>
		return;
	}
}
// Method Definition Index: 100671
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionTaskSource_1__cctor_m0FA3F7477D85D1A129EA447F456E08C43FC718C2_gshared (const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:15>
		ConcurrentQueue_1_t15C4F7C40BC2BB575BEC30003E92347B4A7B3471* L_0 = (ConcurrentQueue_1_t15C4F7C40BC2BB575BEC30003E92347B4A7B3471*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ConcurrentQueue_1__ctor_m4FA15867B9F8C815F9C0E21909B4F6DCA2A6B114(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		((YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___pool = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___pool), (void*)L_0);
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
// Method Definition Index: 100661
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t YieldInstructionTaskSource_1_get_Version_mCDB1BB9C9D342373A79592CCF9BDDAB30998E874_gshared (YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:20>
		int16_t L_0;
		L_0 = ((  int16_t (*) (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((((ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_0;
	}
}
// Method Definition Index: 100662
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YieldInstructionTaskSource_1_get_IsCompleted_m0960C42B98203992C4DF812E1DF037001957C87C_gshared (YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4* __this, const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:26>
		int16_t L_0;
		L_0 = ((  int16_t (*) (YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:28>
		int16_t L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:30>
		return (bool)0;
	}

IL_000c:
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:33>
		int16_t L_2 = V_0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A*, int16_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((((ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
	}
}
// Method Definition Index: 100663
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionTaskSource_1__ctor_mA7E07A65F0600F0345EE2999395EEC111B909C9F_gshared (YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:42>
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:43>
		YieldInstructionWorker_1_tE9E92CD1FD1C2AAC7EF3F5EEAAA876F35D1907CA* L_0 = (YieldInstructionWorker_1_tE9E92CD1FD1C2AAC7EF3F5EEAAA876F35D1907CA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		((  void (*) (YieldInstructionWorker_1_tE9E92CD1FD1C2AAC7EF3F5EEAAA876F35D1907CA*, YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		il2cpp_codegen_write_instance_field_data<YieldInstructionWorker_1_tE9E92CD1FD1C2AAC7EF3F5EEAAA876F35D1907CA*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_0);
		return;
	}
}
// Method Definition Index: 100664
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionTaskSource_1_Finalize_mECB8B5CEE038E80C474F528EE3E96B4D63FCC17C_gshared (YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{
				NullCheck((RuntimeObject*)__this);
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2((RuntimeObject*)__this, NULL);
				return;
			}
		});
		try
		{
			//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:46>
			YieldInstructionWorker_1_tE9E92CD1FD1C2AAC7EF3F5EEAAA876F35D1907CA* L_0 = *(YieldInstructionWorker_1_tE9E92CD1FD1C2AAC7EF3F5EEAAA876F35D1907CA**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
			NullCheck(L_0);
			((  void (*) (YieldInstructionWorker_1_tE9E92CD1FD1C2AAC7EF3F5EEAAA876F35D1907CA*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			goto IL_0014;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		return;
	}
}
// Method Definition Index: 100665
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4* YieldInstructionTaskSource_1_Rent_m851F8A1CBC8A413722EAA9F6C9A8532E89F6C8D7_gshared (RuntimeObject* ___0_instruction, const RuntimeMethod* method) 
{
	YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:50>
		RuntimeObject* L_0 = ___0_instruction;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:52>
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC2C7DF52EC0EF6E1C0B00223DC5CFB076E30C8F5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:55>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		ConcurrentQueue_1_t251018BFB628D831E5879E1F49033D89EEC73DBC* L_2 = ((YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___pool;
		NullCheck(L_2);
		bool L_3;
		L_3 = ((  bool (*) (ConcurrentQueue_1_t251018BFB628D831E5879E1F49033D89EEC73DBC*, YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))(L_2, (&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:57>
		YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4* L_4 = (YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)))(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_0 = L_4;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:60>
		YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4* L_5 = V_0;
		((  void (*) (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)))((((ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A*)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),2)))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:61>
		YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4* L_6 = V_0;
		YieldInstructionWorker_1_tE9E92CD1FD1C2AAC7EF3F5EEAAA876F35D1907CA* L_7 = *(YieldInstructionWorker_1_tE9E92CD1FD1C2AAC7EF3F5EEAAA876F35D1907CA**)il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1));
		RuntimeObject* L_8 = ___0_instruction;
		NullCheck(L_7);
		((  void (*) (YieldInstructionWorker_1_tE9E92CD1FD1C2AAC7EF3F5EEAAA876F35D1907CA*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)))(L_7, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:75>
		YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4* L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 100666
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionTaskSource_1_Return_m9BFDFD5271427D9F637C93CACB5EB127EC3A227F_gshared (YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4* ___0_taskSource, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:80>
		YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4* L_0 = ___0_taskSource;
		YieldInstructionWorker_1_tE9E92CD1FD1C2AAC7EF3F5EEAAA876F35D1907CA* L_1 = *(YieldInstructionWorker_1_tE9E92CD1FD1C2AAC7EF3F5EEAAA876F35D1907CA**)il2cpp_codegen_get_instance_field_data_pointer(L_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1));
		NullCheck(L_1);
		((  void (*) (YieldInstructionWorker_1_tE9E92CD1FD1C2AAC7EF3F5EEAAA876F35D1907CA*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16)))(L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:86>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		ConcurrentQueue_1_t251018BFB628D831E5879E1F49033D89EEC73DBC* L_2 = ((YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___pool;
		YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4* L_3 = ___0_taskSource;
		NullCheck(L_2);
		InvokerActionInvoker1< YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17), L_2, L_3);
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:87>
		return;
	}
}
// Method Definition Index: 100667
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionTaskSource_1_CompleteWork_mF1F1399B6EF5A36B567985E7CF78A20BE15B85B4_gshared (YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4* __this, RuntimeObject* ___0_taskResult, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t61593C7426510597FE64D5175262A0E01952B799 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t61593C7426510597FE64D5175262A0E01952B799);
	const Il2CppFullySharedGenericAny L_7 = L_4;
	const Il2CppFullySharedGenericAny L_8 = L_4;
	const Il2CppFullySharedGenericAny L_10 = L_4;
	const Il2CppFullySharedGenericAny L_12 = L_4;
	const Il2CppFullySharedGenericAny L_14 = L_4;
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T_t61593C7426510597FE64D5175262A0E01952B799);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t61593C7426510597FE64D5175262A0E01952B799);
	memset(V_0, 0, SizeOf_T_t61593C7426510597FE64D5175262A0E01952B799);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t61593C7426510597FE64D5175262A0E01952B799);
	memset(V_1, 0, SizeOf_T_t61593C7426510597FE64D5175262A0E01952B799);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t61593C7426510597FE64D5175262A0E01952B799);
	memset(V_2, 0, SizeOf_T_t61593C7426510597FE64D5175262A0E01952B799);
	RuntimeObject* V_3 = NULL;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T_t61593C7426510597FE64D5175262A0E01952B799);
	memset(V_4, 0, SizeOf_T_t61593C7426510597FE64D5175262A0E01952B799);
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:91>
		bool L_0;
		L_0 = ((  bool (*) (YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:91>
		return;
	}

IL_0009:
	{
	}
	try
	{
		{
			//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:95>
			//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:96>
			//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:97>
			//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:98>
			//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:99>
			//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:100>
			//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:101>
			RuntimeObject* L_1 = ___0_taskResult;
			V_3 = L_1;
			RuntimeObject* L_2 = V_3;
			if (!((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 19))))
			{
				goto IL_001d_1;
			}
		}
		{
			RuntimeObject* L_3 = V_3;
			void* L_5 = UnBox_Any(L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_4);
			il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_5)), SizeOf_T_t61593C7426510597FE64D5175262A0E01952B799);
			goto IL_0022_1;
		}

IL_001d_1:
		{
			RuntimeObject* L_6 = V_3;
			if (!L_6)
			{
				goto IL_0026_1;
			}
		}
		{
			goto IL_0044_1;
		}

IL_0022_1:
		{
			//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:97>
			il2cpp_codegen_memcpy(L_7, V_1, SizeOf_T_t61593C7426510597FE64D5175262A0E01952B799);
			il2cpp_codegen_memcpy(V_2, L_7, SizeOf_T_t61593C7426510597FE64D5175262A0E01952B799);
			goto IL_004b_1;
		}

IL_0026_1:
		{
			//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:98>
			il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T_t61593C7426510597FE64D5175262A0E01952B799);
			il2cpp_codegen_memcpy(L_8, V_4, SizeOf_T_t61593C7426510597FE64D5175262A0E01952B799);
			bool L_9 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19), L_8);
			if (L_9)
			{
				goto IL_0044_1;
			}
		}
		{
			//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:98>
			il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T_t61593C7426510597FE64D5175262A0E01952B799);
			il2cpp_codegen_memcpy(L_10, V_4, SizeOf_T_t61593C7426510597FE64D5175262A0E01952B799);
			il2cpp_codegen_memcpy(V_2, L_10, SizeOf_T_t61593C7426510597FE64D5175262A0E01952B799);
			goto IL_004b_1;
		}

IL_0044_1:
		{
			//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:100>
			RuntimeObject* L_11 = ___0_taskResult;
			void* L_13 = UnBox_Any(L_11, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_12);
			il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_13)), SizeOf_T_t61593C7426510597FE64D5175262A0E01952B799);
		}

IL_004b_1:
		{
			il2cpp_codegen_memcpy(L_14, V_2, SizeOf_T_t61593C7426510597FE64D5175262A0E01952B799);
			il2cpp_codegen_memcpy(V_0, L_14, SizeOf_T_t61593C7426510597FE64D5175262A0E01952B799);
			//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:103>
			il2cpp_codegen_memcpy(L_15, V_0, SizeOf_T_t61593C7426510597FE64D5175262A0E01952B799);
			InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), (((ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_15: *(void**)L_15));
			//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:104>
			goto IL_006c;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005b;
		}
		throw e;
	}

CATCH_005b:
	{
		Exception_t* L_16 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:105>
		V_5 = L_16;
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:107>
		Exception_t* L_17 = V_5;
		((  void (*) (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))((((ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:108>
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_006c;
	}

IL_006c:
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:109>
		return;
	}
}
// Method Definition Index: 100668
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YieldInstructionTaskSource_1_System_Threading_Tasks_Sources_IValueTaskSourceU3CTU3E_GetStatus_mE3C925ECE04947A8154FD05B34551CA816CD4D75_gshared (YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:112>
		int16_t L_0 = ___0_token;
		int32_t L_1;
		L_1 = ((  int32_t (*) (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A*, int16_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((((ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return L_1;
	}
}
// Method Definition Index: 100669
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionTaskSource_1_System_Threading_Tasks_Sources_IValueTaskSourceU3CTU3E_GetResult_mA5CB26A33A0A13F56EB208BB66A483223D02C176_gshared (YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4* __this, int16_t ___0_token, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t61593C7426510597FE64D5175262A0E01952B799 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t61593C7426510597FE64D5175262A0E01952B799);
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:115>
		int16_t L_0 = ___0_token;
		InvokerActionInvoker2< int16_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), (((ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_t61593C7426510597FE64D5175262A0E01952B799);
		return;
	}
}
// Method Definition Index: 100670
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionTaskSource_1_System_Threading_Tasks_Sources_IValueTaskSourceU3CTU3E_OnCompleted_m18B000FF4F690B57F27A3011889C99ECB9C0FB82_gshared (YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_completedContinuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncContextUtility_t8C18C92862A979808EE386EBB8D8713B47047881_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:119>
		int32_t L_0 = ___3_flags;
		if (!((int32_t)((int32_t)L_0&1)))
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SyncContextUtility_t8C18C92862A979808EE386EBB8D8713B47047881_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SyncContextUtility_get_IsMainThread_mD0ADDDB5A45BF9AA040DD93BBBFCFEAB38385D04(NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:121>
		int32_t L_2 = ___3_flags;
		___3_flags = (int32_t)((int32_t)((int32_t)L_2&((int32_t)-2)));
	}

IL_0014:
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:124>
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ___0_completedContinuation;
		RuntimeObject* L_4 = ___1_state;
		int16_t L_5 = ___2_token;
		int32_t L_6 = ___3_flags;
		((  void (*) (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))((((ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:125>
		return;
	}
}
// Method Definition Index: 100671
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionTaskSource_1__cctor_m03EA5F7DE4167AAED5E4FC3A7DAABC0A2E951BF0_gshared (const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionTaskSource.cs:15>
		ConcurrentQueue_1_t251018BFB628D831E5879E1F49033D89EEC73DBC* L_0 = (ConcurrentQueue_1_t251018BFB628D831E5879E1F49033D89EEC73DBC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		((  void (*) (ConcurrentQueue_1_t251018BFB628D831E5879E1F49033D89EEC73DBC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24)))(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		((YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___pool = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___pool), (void*)L_0);
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
// Method Definition Index: 100672
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionWorker_1__ctor_mA4B5E202D5565F47E935FF10E42271818500D714_gshared (YieldInstructionWorker_1_t9A4AFC9A3F952AA70D128EBADA69AE23736BFBF2* __this, YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* ___0_owner, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:22>
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:23>
		YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* L_0 = ___0_owner;
		__this->___taskSource = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___taskSource), (void*)L_0);
		return;
	}
}
// Method Definition Index: 100673
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionWorker_1_Initialize_m28EF400BB5D26F557651B7CE249969AD99947F17_gshared (YieldInstructionWorker_1_t9A4AFC9A3F952AA70D128EBADA69AE23736BFBF2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:27>
		RuntimeObject* L_0 = ___0_value;
		__this->___instruction = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___instruction), (void*)L_0);
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:28>
		__this->___hasPendingInstruction = (bool)1;
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:29>
		__this->___isAwaitingCompletion = (bool)0;
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:30>
		__this->___current = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___current), (void*)NULL);
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:31>
		YieldInstructionWorker_1_EnsureRunning_m266F014C2DE8EFE06C6DFB546604A54B31502D2C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:32>
		return;
	}
}
// Method Definition Index: 100674
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionWorker_1_EnsureRunning_m266F014C2DE8EFE06C6DFB546604A54B31502D2C_gshared (YieldInstructionWorker_1_t9A4AFC9A3F952AA70D128EBADA69AE23736BFBF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncContextUtility_t8C18C92862A979808EE386EBB8D8713B47047881_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:36>
		bool L_0 = __this->___isRunning;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:36>
		return;
	}

IL_0009:
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:37>
		__this->___isRunning = (bool)1;
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:38>
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:39>
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:40>
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:41>
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 3)), NULL);
		il2cpp_codegen_runtime_class_init_inline(SyncContextUtility_t8C18C92862A979808EE386EBB8D8713B47047881_il2cpp_TypeInfo_var);
		SyncContextUtility_RunOnUnityThread_mD8B5AF352F933E1A48539EEFFC5EFF7F7D07220D(L_1, NULL);
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:42>
		return;
	}
}
// Method Definition Index: 100675
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionWorker_1_InstructionComplete_m33D0B323F9CA6FB4E40AA04F684B05B3E5F0AA88_gshared (YieldInstructionWorker_1_t9A4AFC9A3F952AA70D128EBADA69AE23736BFBF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* V_0 = NULL;
	AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* V_1 = NULL;
	ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:46>
		RuntimeObject* L_0 = __this->___instruction;
		V_3 = L_0;
		RuntimeObject* L_1 = V_3;
		V_0 = ((AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621*)IsInstClass((RuntimeObject*)L_1, AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_il2cpp_TypeInfo_var));
		AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* L_2 = V_0;
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		RuntimeObject* L_3 = V_3;
		V_1 = ((AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6*)IsInstClass((RuntimeObject*)L_3, AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_il2cpp_TypeInfo_var));
		AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* L_4 = V_1;
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_5 = V_3;
		V_2 = ((ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868*)IsInstClass((RuntimeObject*)L_5, ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_il2cpp_TypeInfo_var));
		ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868* L_6 = V_2;
		if (L_6)
		{
			goto IL_004b;
		}
	}
	{
		goto IL_005d;
	}

IL_0027:
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:50>
		YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* L_7 = __this->___taskSource;
		AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* L_8 = V_0;
		NullCheck(L_8);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_9;
		L_9 = AssetBundleRequest_get_asset_mE9FDA3900215925371E7D15E7E19AA98713F5D6C(L_8, NULL);
		NullCheck(L_7);
		YieldInstructionTaskSource_1_CompleteWork_m79B4E08E9922783128B8447CA311CA16E76C8FA1(L_7, (RuntimeObject*)L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:51>
		return;
	}

IL_0039:
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:53>
		YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* L_10 = __this->___taskSource;
		AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* L_11 = V_1;
		NullCheck(L_11);
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_12;
		L_12 = AssetBundleCreateRequest_get_assetBundle_m613FDE589FB86BE1E6920D38ED0706F785D9DB21(L_11, NULL);
		NullCheck(L_10);
		YieldInstructionTaskSource_1_CompleteWork_m79B4E08E9922783128B8447CA311CA16E76C8FA1(L_10, (RuntimeObject*)L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:54>
		return;
	}

IL_004b:
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:57>
		YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* L_13 = __this->___taskSource;
		ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868* L_14 = V_2;
		NullCheck(L_14);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_15;
		L_15 = ResourceRequest_get_asset_m740C394902843D080795A49372A2AB3CE9705087(L_14, NULL);
		NullCheck(L_13);
		YieldInstructionTaskSource_1_CompleteWork_m79B4E08E9922783128B8447CA311CA16E76C8FA1(L_13, (RuntimeObject*)L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:58>
		return;
	}

IL_005d:
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:65>
		YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* L_16 = __this->___taskSource;
		RuntimeObject* L_17 = __this->___instruction;
		NullCheck(L_16);
		YieldInstructionTaskSource_1_CompleteWork_m79B4E08E9922783128B8447CA311CA16E76C8FA1(L_16, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:68>
		return;
	}
}
// Method Definition Index: 100676
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* YieldInstructionWorker_1_System_Collections_IEnumerator_get_Current_mB6AD741D585FFB97CF19B90DDA4C653950B7251A_gshared (YieldInstructionWorker_1_t9A4AFC9A3F952AA70D128EBADA69AE23736BFBF2* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:72>
		RuntimeObject* L_0 = __this->___current;
		return L_0;
	}
}
// Method Definition Index: 100677
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YieldInstructionWorker_1_System_Collections_IEnumerator_MoveNext_m72AA7A6785C60962A8C9AC841552305CFAE38A34_gshared (YieldInstructionWorker_1_t9A4AFC9A3F952AA70D128EBADA69AE23736BFBF2* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:76>
		bool L_0 = __this->___hasPendingInstruction;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:78>
		__this->___current = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___current), (void*)NULL);
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:79>
		return (bool)1;
	}

IL_0011:
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:82>
		bool L_1 = __this->___isAwaitingCompletion;
		if (L_1)
		{
			goto IL_002e;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:84>
		__this->___isAwaitingCompletion = (bool)1;
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:85>
		RuntimeObject* L_2 = __this->___instruction;
		__this->___current = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___current), (void*)L_2);
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:86>
		return (bool)1;
	}

IL_002e:
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:89>
		__this->___isAwaitingCompletion = (bool)0;
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:90>
		__this->___hasPendingInstruction = (bool)0;
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:91>
		YieldInstructionWorker_1_InstructionComplete_m33D0B323F9CA6FB4E40AA04F684B05B3E5F0AA88(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:92>
		__this->___instruction = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___instruction), (void*)NULL);
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:93>
		__this->___current = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___current), (void*)NULL);
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:94>
		return (bool)1;
	}
}
// Method Definition Index: 100678
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionWorker_1_Reset_m45F1F1D060107DD5FB1AE8F5A68794CDA6C4D4CB_gshared (YieldInstructionWorker_1_t9A4AFC9A3F952AA70D128EBADA69AE23736BFBF2* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:99>
		__this->___instruction = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___instruction), (void*)NULL);
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:100>
		__this->___hasPendingInstruction = (bool)0;
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:101>
		__this->___isAwaitingCompletion = (bool)0;
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:102>
		__this->___current = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___current), (void*)NULL);
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:103>
		return;
	}
}
// Method Definition Index: 100679
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionWorker_1_Dispose_m1C2E7A9EB18D5810DAE6D8A6B55E82F2901C6650_gshared (YieldInstructionWorker_1_t9A4AFC9A3F952AA70D128EBADA69AE23736BFBF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m90F92BD374C42FBABE7941E2C01DB403342D24D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m4A0DFA3D000F3021915F4E31F9EC15E25CBD6A6F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t3E31AC057D1396B991A9E84F22568C8B626E08FC* G_B2_0 = NULL;
	Nullable_1_t3E31AC057D1396B991A9E84F22568C8B626E08FC* G_B1_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:108>
		Nullable_1_t3E31AC057D1396B991A9E84F22568C8B626E08FC* L_0 = (Nullable_1_t3E31AC057D1396B991A9E84F22568C8B626E08FC*)(&__this->___runner);
		Nullable_1_t3E31AC057D1396B991A9E84F22568C8B626E08FC* L_1 = L_0;
		bool L_2;
		L_2 = Nullable_1_get_HasValue_m4A0DFA3D000F3021915F4E31F9EC15E25CBD6A6F_inline(L_1, Nullable_1_get_HasValue_m4A0DFA3D000F3021915F4E31F9EC15E25CBD6A6F_RuntimeMethod_var);
		if (L_2)
		{
			G_B2_0 = L_1;
			goto IL_0010;
		}
		G_B1_0 = L_1;
	}
	{
		return;
	}

IL_0010:
	{
		CoroutineWrapper_t9C1780B5570255E0E28D419DECC20B7FEF014940 L_3;
		L_3 = Nullable_1_GetValueOrDefault_m90F92BD374C42FBABE7941E2C01DB403342D24D8_inline(G_B2_0, Nullable_1_GetValueOrDefault_m90F92BD374C42FBABE7941E2C01DB403342D24D8_RuntimeMethod_var);
		AwaiterExtensions_StopCoroutine_m2BFCEFC532C7C81F9FAE39C2058E637ABA37F669(L_3, NULL);
		return;
	}
}
// Method Definition Index: 100680
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionWorker_1_U3CEnsureRunningU3Eb__9_0_mD89ECD85FE1DE69948E643643D49B1E667FE6711_gshared (YieldInstructionWorker_1_t9A4AFC9A3F952AA70D128EBADA69AE23736BFBF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m2D2D41F7BC8424C4A66A95873CDD99E47AC274F4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:40>
		CoroutineWrapper_t9C1780B5570255E0E28D419DECC20B7FEF014940 L_0;
		L_0 = AwaiterExtensions_RunCoroutine_m965F01BEC7FECC6E0838AC977736606C5429977A((RuntimeObject*)__this, NULL);
		Nullable_1_t3E31AC057D1396B991A9E84F22568C8B626E08FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m2D2D41F7BC8424C4A66A95873CDD99E47AC274F4((&L_1), L_0, Nullable_1__ctor_m2D2D41F7BC8424C4A66A95873CDD99E47AC274F4_RuntimeMethod_var);
		__this->___runner = L_1;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___runner))->___value))->___Coroutine), (void*)NULL);
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:41>
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
// Method Definition Index: 100672
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionWorker_1__ctor_m129AB424D7869879F8378FE570419F14D8E71F49_gshared (YieldInstructionWorker_1_tE9E92CD1FD1C2AAC7EF3F5EEAAA876F35D1907CA* __this, YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4* ___0_owner, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:22>
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:23>
		YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4* L_0 = ___0_owner;
		__this->___taskSource = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___taskSource), (void*)L_0);
		return;
	}
}
// Method Definition Index: 100673
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionWorker_1_Initialize_m2FA3AFC5D9FFAA6F600C5D0955272471639AB057_gshared (YieldInstructionWorker_1_tE9E92CD1FD1C2AAC7EF3F5EEAAA876F35D1907CA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:27>
		RuntimeObject* L_0 = ___0_value;
		__this->___instruction = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___instruction), (void*)L_0);
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:28>
		__this->___hasPendingInstruction = (bool)1;
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:29>
		__this->___isAwaitingCompletion = (bool)0;
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:30>
		__this->___current = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___current), (void*)NULL);
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:31>
		((  void (*) (YieldInstructionWorker_1_tE9E92CD1FD1C2AAC7EF3F5EEAAA876F35D1907CA*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:32>
		return;
	}
}
// Method Definition Index: 100674
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionWorker_1_EnsureRunning_m26DF068596D99EBF8E102C385318F89F92D9CA46_gshared (YieldInstructionWorker_1_tE9E92CD1FD1C2AAC7EF3F5EEAAA876F35D1907CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncContextUtility_t8C18C92862A979808EE386EBB8D8713B47047881_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:36>
		bool L_0 = __this->___isRunning;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:36>
		return;
	}

IL_0009:
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:37>
		__this->___isRunning = (bool)1;
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:38>
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:39>
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:40>
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:41>
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 3)), NULL);
		il2cpp_codegen_runtime_class_init_inline(SyncContextUtility_t8C18C92862A979808EE386EBB8D8713B47047881_il2cpp_TypeInfo_var);
		SyncContextUtility_RunOnUnityThread_mD8B5AF352F933E1A48539EEFFC5EFF7F7D07220D(L_1, NULL);
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:42>
		return;
	}
}
// Method Definition Index: 100675
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionWorker_1_InstructionComplete_m6217D5D3DDC7848457E77723939133A93F27E6AC_gshared (YieldInstructionWorker_1_tE9E92CD1FD1C2AAC7EF3F5EEAAA876F35D1907CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* V_0 = NULL;
	AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* V_1 = NULL;
	ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:46>
		RuntimeObject* L_0 = __this->___instruction;
		V_3 = L_0;
		RuntimeObject* L_1 = V_3;
		V_0 = ((AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621*)IsInstClass((RuntimeObject*)L_1, AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_il2cpp_TypeInfo_var));
		AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* L_2 = V_0;
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		RuntimeObject* L_3 = V_3;
		V_1 = ((AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6*)IsInstClass((RuntimeObject*)L_3, AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_il2cpp_TypeInfo_var));
		AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* L_4 = V_1;
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_5 = V_3;
		V_2 = ((ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868*)IsInstClass((RuntimeObject*)L_5, ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_il2cpp_TypeInfo_var));
		ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868* L_6 = V_2;
		if (L_6)
		{
			goto IL_004b;
		}
	}
	{
		goto IL_005d;
	}

IL_0027:
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:50>
		YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4* L_7 = __this->___taskSource;
		AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* L_8 = V_0;
		NullCheck(L_8);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_9;
		L_9 = AssetBundleRequest_get_asset_mE9FDA3900215925371E7D15E7E19AA98713F5D6C(L_8, NULL);
		NullCheck(L_7);
		((  void (*) (YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_7, (RuntimeObject*)L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:51>
		return;
	}

IL_0039:
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:53>
		YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4* L_10 = __this->___taskSource;
		AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* L_11 = V_1;
		NullCheck(L_11);
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_12;
		L_12 = AssetBundleCreateRequest_get_assetBundle_m613FDE589FB86BE1E6920D38ED0706F785D9DB21(L_11, NULL);
		NullCheck(L_10);
		((  void (*) (YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_10, (RuntimeObject*)L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:54>
		return;
	}

IL_004b:
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:57>
		YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4* L_13 = __this->___taskSource;
		ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868* L_14 = V_2;
		NullCheck(L_14);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_15;
		L_15 = ResourceRequest_get_asset_m740C394902843D080795A49372A2AB3CE9705087(L_14, NULL);
		NullCheck(L_13);
		((  void (*) (YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_13, (RuntimeObject*)L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:58>
		return;
	}

IL_005d:
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:65>
		YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4* L_16 = __this->___taskSource;
		RuntimeObject* L_17 = __this->___instruction;
		NullCheck(L_16);
		((  void (*) (YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_16, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:68>
		return;
	}
}
// Method Definition Index: 100676
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* YieldInstructionWorker_1_System_Collections_IEnumerator_get_Current_m689D34141FB0A42118E11FBC7C36C665E8922A6E_gshared (YieldInstructionWorker_1_tE9E92CD1FD1C2AAC7EF3F5EEAAA876F35D1907CA* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:72>
		RuntimeObject* L_0 = __this->___current;
		return L_0;
	}
}
// Method Definition Index: 100677
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YieldInstructionWorker_1_System_Collections_IEnumerator_MoveNext_m4D368B190A21F1B1839704501CD6D9289DC86EFD_gshared (YieldInstructionWorker_1_tE9E92CD1FD1C2AAC7EF3F5EEAAA876F35D1907CA* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:76>
		bool L_0 = __this->___hasPendingInstruction;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:78>
		__this->___current = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___current), (void*)NULL);
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:79>
		return (bool)1;
	}

IL_0011:
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:82>
		bool L_1 = __this->___isAwaitingCompletion;
		if (L_1)
		{
			goto IL_002e;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:84>
		__this->___isAwaitingCompletion = (bool)1;
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:85>
		RuntimeObject* L_2 = __this->___instruction;
		__this->___current = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___current), (void*)L_2);
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:86>
		return (bool)1;
	}

IL_002e:
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:89>
		__this->___isAwaitingCompletion = (bool)0;
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:90>
		__this->___hasPendingInstruction = (bool)0;
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:91>
		((  void (*) (YieldInstructionWorker_1_tE9E92CD1FD1C2AAC7EF3F5EEAAA876F35D1907CA*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:92>
		__this->___instruction = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___instruction), (void*)NULL);
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:93>
		__this->___current = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___current), (void*)NULL);
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:94>
		return (bool)1;
	}
}
// Method Definition Index: 100678
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionWorker_1_Reset_m40955ECA5345FF5502628E0925D0628D2ACE90BF_gshared (YieldInstructionWorker_1_tE9E92CD1FD1C2AAC7EF3F5EEAAA876F35D1907CA* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:99>
		__this->___instruction = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___instruction), (void*)NULL);
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:100>
		__this->___hasPendingInstruction = (bool)0;
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:101>
		__this->___isAwaitingCompletion = (bool)0;
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:102>
		__this->___current = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___current), (void*)NULL);
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:103>
		return;
	}
}
// Method Definition Index: 100679
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionWorker_1_Dispose_m6D51FCD917905B53759BCFE9F879A9CF8EF60A7A_gshared (YieldInstructionWorker_1_tE9E92CD1FD1C2AAC7EF3F5EEAAA876F35D1907CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m90F92BD374C42FBABE7941E2C01DB403342D24D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m4A0DFA3D000F3021915F4E31F9EC15E25CBD6A6F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t3E31AC057D1396B991A9E84F22568C8B626E08FC* G_B2_0 = NULL;
	Nullable_1_t3E31AC057D1396B991A9E84F22568C8B626E08FC* G_B1_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:108>
		Nullable_1_t3E31AC057D1396B991A9E84F22568C8B626E08FC* L_0 = (Nullable_1_t3E31AC057D1396B991A9E84F22568C8B626E08FC*)(&__this->___runner);
		Nullable_1_t3E31AC057D1396B991A9E84F22568C8B626E08FC* L_1 = L_0;
		bool L_2;
		L_2 = Nullable_1_get_HasValue_m4A0DFA3D000F3021915F4E31F9EC15E25CBD6A6F_inline(L_1, Nullable_1_get_HasValue_m4A0DFA3D000F3021915F4E31F9EC15E25CBD6A6F_RuntimeMethod_var);
		if (L_2)
		{
			G_B2_0 = L_1;
			goto IL_0010;
		}
		G_B1_0 = L_1;
	}
	{
		return;
	}

IL_0010:
	{
		CoroutineWrapper_t9C1780B5570255E0E28D419DECC20B7FEF014940 L_3;
		L_3 = Nullable_1_GetValueOrDefault_m90F92BD374C42FBABE7941E2C01DB403342D24D8_inline(G_B2_0, Nullable_1_GetValueOrDefault_m90F92BD374C42FBABE7941E2C01DB403342D24D8_RuntimeMethod_var);
		AwaiterExtensions_StopCoroutine_m2BFCEFC532C7C81F9FAE39C2058E637ABA37F669(L_3, NULL);
		return;
	}
}
// Method Definition Index: 100680
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstructionWorker_1_U3CEnsureRunningU3Eb__9_0_mD2B12A9C7BDC1CDA632224DDB5ADB2E2EAE0E6BF_gshared (YieldInstructionWorker_1_tE9E92CD1FD1C2AAC7EF3F5EEAAA876F35D1907CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m2D2D41F7BC8424C4A66A95873CDD99E47AC274F4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:40>
		CoroutineWrapper_t9C1780B5570255E0E28D419DECC20B7FEF014940 L_0;
		L_0 = AwaiterExtensions_RunCoroutine_m965F01BEC7FECC6E0838AC977736606C5429977A((RuntimeObject*)__this, NULL);
		Nullable_1_t3E31AC057D1396B991A9E84F22568C8B626E08FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m2D2D41F7BC8424C4A66A95873CDD99E47AC274F4((&L_1), L_0, Nullable_1__ctor_m2D2D41F7BC8424C4A66A95873CDD99E47AC274F4_RuntimeMethod_var);
		__this->___runner = L_1;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___runner))->___value))->___Coroutine), (void*)NULL);
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionWorker.cs:41>
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
// Method Definition Index: 64679
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m66614734A851F69863F28F36CAE8C109DFE633A0_gshared (fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:24>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 64680
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_mD7FB6CCCB39160CC4D1837430E55165CA2686FE6_gshared (fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:28>
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:29>
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, ((*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))), L_2);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:30>
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:31>
		return L_3;
	}
}
// Method Definition Index: 64681
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m9DC7A75C5043D26A8B0F27C1EBF6414DB1F38947_gshared (fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:36>
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:37>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:39>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:42>
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)UnBox(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:43>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___0_data;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* >::Invoke(11, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:44>
		RuntimeObject** L_15 = ___1_instance;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_16 = V_1;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_17);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_18);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:45>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
// Method Definition Index: 64684
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m469B29DA8E93A109CE1A84DEF411C216C2E91B3C_gshared (fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// Method Definition Index: 64679
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m3B1D5B68B9A2AB907D286BB041E68825E23D338B_gshared (fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:24>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 64680
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_m228B3D61FB850893564D237F0F16E30BBD9B6B04_gshared (fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:28>
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:29>
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, ((*(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))), L_2);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:30>
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:31>
		return L_3;
	}
}
// Method Definition Index: 64681
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_mDDCD92619631E9ED6DE40EDE7B2E4E0A586513DA_gshared (fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:36>
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:37>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:39>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:42>
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((*(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)UnBox(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:43>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___0_data;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* >::Invoke(11, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:44>
		RuntimeObject** L_15 = ___1_instance;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_16 = V_1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_17);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_18);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:45>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
// Method Definition Index: 64684
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m67B64763A70B6CFF7BC8E207844892AFCCFA9B72_gshared (fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// Method Definition Index: 64679
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m9F76A8BA82C3043DFB71DA4C07A250F84CDB0184_gshared (fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:24>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 64680
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_m641FFE348BDF3531BF6BDBDD22704DE53ED14F4A_gshared (fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:28>
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:29>
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, ((*(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))), L_2);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:30>
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:31>
		return L_3;
	}
}
// Method Definition Index: 64681
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_mFFB6258A349189C4019C5E3C202AAFC7230C1BF9_gshared (fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:36>
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:37>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:39>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:42>
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((*(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)UnBox(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:43>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___0_data;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* >::Invoke(11, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:44>
		RuntimeObject** L_15 = ___1_instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_16 = V_1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_17);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_18);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:45>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
// Method Definition Index: 64684
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m8386B8479295E3AC361DE4EBBFC2C3CCB11BB908_gshared (fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// Method Definition Index: 64679
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m434ECAC51B09FD530A6DD456388A8B3B39F71DE1_gshared (fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:24>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 64680
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_m012F8AADBFF962499339189E5EABB41B2F51D491_gshared (fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:28>
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:29>
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, RuntimeObject*, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))), L_2);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:30>
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:31>
		return L_3;
	}
}
// Method Definition Index: 64681
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m9DA1D304ED129B105B65D30686CE2CE0BFACBBD0_gshared (fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:36>
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:37>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:39>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:42>
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:43>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___0_data;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, RuntimeObject** >::Invoke(11, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:44>
		RuntimeObject** L_15 = ___1_instance;
		RuntimeObject* L_16 = V_1;
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_16);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:45>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_17 = V_0;
		return L_17;
	}
}
// Method Definition Index: 64684
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_mC4D982EAE127626844AA2FF8D98F3CEA570A1A10_gshared (fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// Method Definition Index: 64679
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_mC32E7553583DD793467D6FB5CE24747854A070E4_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:24>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 64680
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_m8B301BF0E4624082448AC261F66E55A9069C9F2B_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:28>
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:29>
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, ((*(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))), L_2);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:30>
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:31>
		return L_3;
	}
}
// Method Definition Index: 64681
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_mB57F1FED13B2F213B3A9C45337315BC8E5E3F6A6_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:36>
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:37>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:39>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:42>
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((*(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)UnBox(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:43>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___0_data;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* >::Invoke(11, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:44>
		RuntimeObject** L_15 = ___1_instance;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_16 = V_1;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_17);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_18);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:45>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
// Method Definition Index: 64684
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m644F4C264CCF8F165037066D5AC2034B6D176110_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// Method Definition Index: 64679
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m58E406781ACEFCFD3F1526A502D26109CE14F8DF_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:24>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 64680
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_mBF17673DDC9A3AF571B07DA5640AA0BFE06B3FB4_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:28>
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:29>
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, ((*(Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))), L_2);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:30>
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:31>
		return L_3;
	}
}
// Method Definition Index: 64681
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m6DC3716E17198067B467187A41C5F378F9C2753F_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:36>
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:37>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:39>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:42>
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((*(Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)UnBox(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:43>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___0_data;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A* >::Invoke(11, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:44>
		RuntimeObject** L_15 = ___1_instance;
		Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A L_16 = V_1;
		Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_17);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_18);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:45>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
// Method Definition Index: 64684
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_mBFCA0DE0165FE7459AEBC89AC73731BBCF7F64E6_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// Method Definition Index: 64679
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m3FD4D633636A5AF98D07BE76673F55CC9262FB13_gshared (fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:24>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 64680
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_mA6F80C2C119177F6A02BE2DCE8B17803F98E0A2A_gshared (fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:28>
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:29>
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, ((*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))), L_2);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:30>
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:31>
		return L_3;
	}
}
// Method Definition Index: 64681
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m055ADA15BC7796EDA3848DBC9F9B51BB2562A886_gshared (fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:36>
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:37>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:39>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:42>
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)UnBox(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:43>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___0_data;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* >::Invoke(11, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:44>
		RuntimeObject** L_15 = ___1_instance;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_16 = V_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_17);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_18);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:45>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
// Method Definition Index: 64684
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m74EBB5195DD5F746EE58C2B7FE7E20A93E44DFE8_gshared (fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// Method Definition Index: 64679
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m7BFCBE6128959F6AAA08BB9FB82C5E3DA07FB3AD_gshared (fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:24>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 64680
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_mAB417033757D14765392C802374EE82941F7E430_gshared (fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:28>
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:29>
		RuntimeObject* L_1 = ___0_instance;
		void* L_3 = UnBox_Any(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_2);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_4 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5;
		L_5 = VirtualFuncInvoker2Invoker< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Il2CppFullySharedGenericAny, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3))), L_4);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:30>
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_6 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_7 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_8 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_8, L_7, NULL);
		*((RuntimeObject**)L_6) = (RuntimeObject*)L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)L_8);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:31>
		return L_5;
	}
}
// Method Definition Index: 64681
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m68AEEE5C3FB70E702E364D7B0C537966E0B079CF_gshared (fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	memset(V_1, 0, SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:36>
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:37>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:39>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:42>
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		void* L_11 = UnBox_Any(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_10);
		il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_11)), SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:43>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_12 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_13 = ___0_data;
		NullCheck(L_13);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_14;
		L_14 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_13, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_15;
		L_15 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Il2CppFullySharedGenericAny* >::Invoke(11, __this, L_14, (Il2CppFullySharedGenericAny*)V_1);
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_16;
		L_16 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_12, L_15, NULL);
		V_0 = L_16;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:44>
		RuntimeObject** L_17 = ___1_instance;
		il2cpp_codegen_memcpy(L_18, V_1, SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), L_18);
		*((RuntimeObject**)L_17) = (RuntimeObject*)L_19;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)L_19);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:45>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_20 = V_0;
		return L_20;
	}
}
// Method Definition Index: 64684
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_mA219A5FF100DBCB35147606E9E4E9C565D2F8D50_gshared (fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// Method Definition Index: 64860
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:13>
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_inline(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 64861
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:15>
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 64862
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:21>
		bool L_0;
		L_0 = ((  bool (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:23>
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A7D3B18DF4F9238A50A156FF06A5A7E794C1C7F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:25>
		il2cpp_codegen_memcpy(L_2, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)), SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
		return;
	}
}
IL2CPP_EXTERN_C  void fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*>(__this + _offset);
	fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A(_thisAdjusted, il2cppRetVal, method);
	return;
}
// Method Definition Index: 64863
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:31>
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), (bool)1);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:32>
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)) ? ___0_value : &___0_value), SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1), L_0, SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:33>
		return;
	}
}
IL2CPP_EXTERN_C  void fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method)
{
	fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*>(__this + _offset);
	fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516(_thisAdjusted, ___0_value, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 64860
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:13>
		bool L_0 = __this->____hasValue;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_inline(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 64861
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:15>
		bool L_0 = __this->____hasValue;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 64862
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:21>
		bool L_0;
		L_0 = fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:23>
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A7D3B18DF4F9238A50A156FF06A5A7E794C1C7F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:25>
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_2 = __this->____value;
		return L_2;
	}
}
IL2CPP_EXTERN_C  fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 _returnValue;
	_returnValue = fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 64863
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:31>
		__this->____hasValue = (bool)1;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:32>
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_0 = ___0_value;
		__this->____value = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value))->___Ancestors), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value))->___VersionString), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value))->___ModelType), (void*)NULL);
		#endif
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:33>
		return;
	}
}
IL2CPP_EXTERN_C  void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_AdjustorThunk (RuntimeObject* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_value, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6(_thisAdjusted, ___0_value, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 29046
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRInputValueReader_get_inputSourceMode_m6D12A254104BBE6F3945ACFE6CAC42DC51CDD5E0_inline (XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@5f736ad4ccd8/Runtime/Inputs/Readers/XRInputValueReader.cs:107>
		int32_t L_0 = __this->___m_InputSourceMode;
		return L_0;
	}
}
// Method Definition Index: 4486
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask_1__ctor_m177950552C93B57A4BB1739D0F7D66EDD7C59D11_gshared_inline (ValueTask_1_t7C5C39AB5B4A0ABA07AC934800D43DED916F9215* __this, RuntimeObject* ___0_source, int16_t ___1_token, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)39), NULL);
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___0_source;
		__this->____obj = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj), (void*)(RuntimeObject*)L_1);
		int16_t L_2 = ___1_token;
		__this->____token = L_2;
		RuntimeObject** L_3 = (RuntimeObject**)(&__this->____result);
		il2cpp_codegen_initobj(L_3, sizeof(RuntimeObject*));
		__this->____continueOnCapturedContext = (bool)1;
		return;
	}
}
// Method Definition Index: 4494
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1 ValueTask_1_GetAwaiter_m22539C2335A475C19BDF8D65A9FCCC14284ECCC3_gshared_inline (ValueTask_1_t7C5C39AB5B4A0ABA07AC934800D43DED916F9215* __this, const RuntimeMethod* method) 
{
	{
		ValueTask_1_t7C5C39AB5B4A0ABA07AC934800D43DED916F9215 L_0 = (*(ValueTask_1_t7C5C39AB5B4A0ABA07AC934800D43DED916F9215*)__this);
		ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1 L_1;
		memset((&L_1), 0, sizeof(L_1));
		ValueTaskAwaiter_1__ctor_m7ABF980CA5045D3E81CF1B502732BB3C66BF6FC8_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_1;
	}
}
// Method Definition Index: 7109
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTaskAwaiter_1_get_IsCompleted_m8243D9042B827FED4B48039D35244D30C78112F7_gshared_inline (ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1* __this, const RuntimeMethod* method) 
{
	{
		ValueTask_1_t7C5C39AB5B4A0ABA07AC934800D43DED916F9215* L_0 = (ValueTask_1_t7C5C39AB5B4A0ABA07AC934800D43DED916F9215*)(&__this->____value);
		bool L_1;
		L_1 = ValueTask_1_get_IsCompleted_mB5FE6398DBC9CBAECABB6AFC1B3F3A1F51D1479F_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// Method Definition Index: 7110
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ValueTaskAwaiter_1_GetResult_m7C1C2CFBD94C6D0E3D0D2F0FA5B1D57F9176A641_gshared_inline (ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1* __this, const RuntimeMethod* method) 
{
	{
		ValueTask_1_t7C5C39AB5B4A0ABA07AC934800D43DED916F9215* L_0 = (ValueTask_1_t7C5C39AB5B4A0ABA07AC934800D43DED916F9215*)(&__this->____value);
		RuntimeObject* L_1;
		L_1 = ValueTask_1_get_Result_m3035DEA69E68AD985EDB5285416C94558C72B23D_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		return L_1;
	}
}
// Method Definition Index: 100660
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* YieldInstructionAwaiter_1_GetResult_m76166B24646270ED64A906D6AE16E37C75188161_gshared_inline (YieldInstructionAwaiter_1_t75EFCC9D4A37AF66B43EBA3018EBD918E9F10DEB* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000e:
			{
				//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionAwaiter.cs:73>
				YieldInstructionTaskSource_1_t5C3CF730C44F8B1900966AF687EE5CFBA9A38A5A* L_0 = __this->___taskSource;
				il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
				YieldInstructionTaskSource_1_Return_m43169EE2FD91675D99A514FB26E2DC139D72AE08(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
				//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionAwaiter.cs:74>
				return;
			}
		});
		try
		{
			//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionAwaiter.cs:69>
			ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1* L_1 = (ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1*)(&__this->___awaiter);
			RuntimeObject* L_2;
			L_2 = ValueTaskAwaiter_1_GetResult_m7C1C2CFBD94C6D0E3D0D2F0FA5B1D57F9176A641_inline(L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
			V_0 = L_2;
			goto IL_001a;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionAwaiter.cs:75>
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// Method Definition Index: 4486
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask_1__ctor_m6290E5FE79CCE71C6983D5D86933A41BFB4BDEE0_gshared_inline (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* __this, RuntimeObject* ___0_source, int16_t ___1_token, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)39), NULL);
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___0_source;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0), (RuntimeObject*)L_1);
		int16_t L_2 = ___1_token;
		il2cpp_codegen_write_instance_field_data<int16_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2), L_2);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)))), SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3), (bool)1);
		return;
	}
}
// Method Definition Index: 100660
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void YieldInstructionAwaiter_1_GetResult_m94E8FFC9043D7A54EE239C1676A0B8645B3D0E90_gshared_inline (YieldInstructionAwaiter_1_t5F44D4BD7E715EF8FCBF72381196EE41448C5F2E* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t7E368A56FCD7BB01DF82F2D8ECDC5E27EB7BDDAF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 16));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t7E368A56FCD7BB01DF82F2D8ECDC5E27EB7BDDAF);
	const Il2CppFullySharedGenericAny L_2 = L_1;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t7E368A56FCD7BB01DF82F2D8ECDC5E27EB7BDDAF);
	memset(V_0, 0, SizeOf_T_t7E368A56FCD7BB01DF82F2D8ECDC5E27EB7BDDAF);
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000e:
			{
				//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionAwaiter.cs:73>
				YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4* L_0 = *(YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3),0));
				il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
				((  void (*) (YieldInstructionTaskSource_1_tBCF9DA0489451BFC80E806747EA3FA8FB44BF7A4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17)))(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
				//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionAwaiter.cs:74>
				return;
			}
		});
		try
		{
			//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionAwaiter.cs:69>
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15), (((ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3),1)))), (Il2CppFullySharedGenericAny*)L_1);
			il2cpp_codegen_memcpy(V_0, L_1, SizeOf_T_t7E368A56FCD7BB01DF82F2D8ECDC5E27EB7BDDAF);
			goto IL_001a;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		//<source_info:./Library/PackageCache/com.utilities.async@226439ca16b2/Runtime/Async/YieldInstructionAwaiter.cs:75>
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_T_t7E368A56FCD7BB01DF82F2D8ECDC5E27EB7BDDAF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t7E368A56FCD7BB01DF82F2D8ECDC5E27EB7BDDAF);
		return;
	}
}
// Method Definition Index: 4797
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t ManualResetValueTaskSourceCore_1_get_Version_m1152B5E9B9A7CE245182FA93E38692FCC00BD4AC_gshared_inline (ManualResetValueTaskSourceCore_1_t6451DA975B280BA45E6B4FFEE5DAC9D2A188E985* __this, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = __this->____version;
		return L_0;
	}
}
// Method Definition Index: 1815
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m4A0DFA3D000F3021915F4E31F9EC15E25CBD6A6F_gshared_inline (Nullable_1_t3E31AC057D1396B991A9E84F22568C8B626E08FC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___hasValue;
		return L_0;
	}
}
// Method Definition Index: 1817
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoroutineWrapper_t9C1780B5570255E0E28D419DECC20B7FEF014940 Nullable_1_GetValueOrDefault_m90F92BD374C42FBABE7941E2C01DB403342D24D8_gshared_inline (Nullable_1_t3E31AC057D1396B991A9E84F22568C8B626E08FC* __this, const RuntimeMethod* method) 
{
	{
		CoroutineWrapper_t9C1780B5570255E0E28D419DECC20B7FEF014940 L_0 = __this->___value;
		return L_0;
	}
}
// Method Definition Index: 64860
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_gshared_inline (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:13>
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		return L_0;
	}
}
// Method Definition Index: 64860
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared_inline (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@191c0d7e3b69/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:13>
		bool L_0 = __this->____hasValue;
		return L_0;
	}
}
// Method Definition Index: 7108
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTaskAwaiter_1__ctor_m7ABF980CA5045D3E81CF1B502732BB3C66BF6FC8_gshared_inline (ValueTaskAwaiter_1_t484A6D55E6F421165E7A6EF19475C8921BB1DAB1* __this, ValueTask_1_t7C5C39AB5B4A0ABA07AC934800D43DED916F9215 ___0_value, const RuntimeMethod* method) 
{
	{
		ValueTask_1_t7C5C39AB5B4A0ABA07AC934800D43DED916F9215 L_0 = ___0_value;
		__this->____value = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value))->____obj), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value))->____result), (void*)NULL);
		#endif
		return;
	}
}
// Method Definition Index: 4491
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTask_1_get_IsCompleted_mB5FE6398DBC9CBAECABB6AFC1B3F3A1F51D1479F_gshared_inline (ValueTask_1_t7C5C39AB5B4A0ABA07AC934800D43DED916F9215* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* V_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____obj;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}

IL_000c:
	{
		RuntimeObject* L_2 = V_0;
		V_1 = ((Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)IsInstClass((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)));
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_3 = V_1;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_4 = V_1;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_4);
		bool L_5;
		L_5 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_4, NULL);
		return L_5;
	}

IL_001d:
	{
		RuntimeObject* L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = il2cpp_unsafe_as<RuntimeObject*>(L_6);
		int16_t L_8 = __this->____token;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_7, L_8);
		return (bool)((!(((uint32_t)L_9) <= ((uint32_t)0)))? 1 : 0);
	}
}
// Method Definition Index: 4493
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ValueTask_1_get_Result_m3035DEA69E68AD985EDB5285416C94558C72B23D_gshared_inline (ValueTask_1_t7C5C39AB5B4A0ABA07AC934800D43DED916F9215* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* V_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____obj;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = __this->____result;
		return L_2;
	}

IL_0011:
	{
		RuntimeObject* L_3 = V_0;
		V_1 = ((Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)));
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_5 = V_1;
		TaskAwaiter_ValidateEnd_m6BB967A466C17A106BC547009EDE196266651751((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5, NULL);
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_6 = V_1;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = Task_1_get_ResultOnSuccess_m747DDF25AF20D348F75409600C9943ED5ED92BA0_inline(L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_7;
	}

IL_0028:
	{
		RuntimeObject* L_8 = V_0;
		RuntimeObject* L_9;
		L_9 = il2cpp_unsafe_as<RuntimeObject*>(L_8);
		int16_t L_10 = __this->____token;
		NullCheck(L_9);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker1< RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_9, L_10);
		return L_11;
	}
}
// Method Definition Index: 4520
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Task_1_get_ResultOnSuccess_m747DDF25AF20D348F75409600C9943ED5ED92BA0_gshared_inline (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___m_result;
		return L_0;
	}
}
