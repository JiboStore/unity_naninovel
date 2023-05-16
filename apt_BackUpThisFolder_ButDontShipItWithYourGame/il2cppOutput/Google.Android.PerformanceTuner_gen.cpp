#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Func`1<Google.Android.PerformanceTuner.Annotation>
struct Func_1_t6531FECA14929B6C85781801964CA96B8970328F;
// System.Func`1<Google.Android.PerformanceTuner.FidelityParams>
struct Func_1_t8000DF962808DD28C5F08125B00E7012CEC78782;
// System.Func`1<Google.Protobuf.IMessage>
struct Func_1_t726CD36CB50B2F99D102B003DBF9F7D5ECFE2918;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.IDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct IDictionary_2_tDB170C5929E4ACA380EEF5C8E082139CE49EC21B;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor>
struct IList_1_t2113D31E64AB4BC3FE73AB5985B7D30B220225D2;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>
struct IList_1_tBECF6C25D47C20B0CA9B3100FD02FED4BA91145E;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor>
struct IList_1_t1C3796CCB02A6FB46469A8C82C9FBB10883C38B1;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>
struct IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.OneofDescriptor>
struct IList_1_t72D63DEDFD3D09D9D034239EC2954718F7FCDB68;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.ServiceDescriptor>
struct IList_1_t9B74854C0814D339537A7FFF6105D1D25A39C180;
// System.Lazy`1<System.Collections.Generic.Dictionary`2<Google.Protobuf.Reflection.IDescriptor,Google.Protobuf.Reflection.DescriptorDeclaration>>
struct Lazy_1_t9EE2A1123EC79B036ABD6DA8C3433CC66609B4A6;
// Google.Protobuf.MessageParser`1<Google.Android.PerformanceTuner.Annotation>
struct MessageParser_1_t6001DE92B7B0DD22B06F4B1A0C2D3FB655F37E4C;
// Google.Protobuf.MessageParser`1<Google.Android.PerformanceTuner.FidelityParams>
struct MessageParser_1_t5AA61E459FCD6A79C51B4B48507735C508F6951A;
// Google.Protobuf.MessageParser`1<System.Object>
struct MessageParser_1_tE80B9A8972366E18F31910138469726593F6FD1F;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Google.Protobuf.Extension[]
struct ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66;
// Google.Protobuf.Reflection.FileDescriptor[]
struct FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F;
// Google.Protobuf.Reflection.GeneratedClrTypeInfo[]
struct GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Google.Android.PerformanceTuner.Annotation
struct Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Google.Protobuf.ByteString
struct ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592;
// Google.Protobuf.CodedInputStream
struct CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425;
// Google.Protobuf.CodedOutputStream
struct CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Google.Protobuf.Reflection.DescriptorPool
struct DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94;
// Google.Protobuf.Reflection.DescriptorProto
struct DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// Google.Protobuf.Reflection.ExtensionCollection
struct ExtensionCollection_tB99C14F49DA3F67113593C9FD990613B6072E7A0;
// Google.Protobuf.ExtensionRegistry
struct ExtensionRegistry_t3A02F9CABE27F85D70F5444B20C9640194BCBDCC;
// Google.Android.PerformanceTuner.FidelityParams
struct FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17;
// Google.Protobuf.Reflection.FileDescriptor
struct FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE;
// Google.Protobuf.Reflection.FileDescriptorProto
struct FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4;
// Google.Protobuf.Reflection.GeneratedClrTypeInfo
struct GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E;
// Google.Protobuf.IMessage
struct IMessage_t9ECCC3E84D1F213AF8837852FA69082DD564B940;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// Google.Protobuf.Reflection.MessageDescriptor
struct MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906;
// Google.Protobuf.MessageParser
struct MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Google.Android.PerformanceTuner.Annotation/<>c
struct U3CU3Ec_t525AE29AE5B5EE1A54D596A4DBA08314E97359FD;
// Google.Android.PerformanceTuner.FidelityParams/<>c
struct U3CU3Ec_tA8048C04E3D1CDD4A2BDA66F0D8F0F7BDC29722B;
// Google.Protobuf.Reflection.MessageDescriptor/FieldCollection
struct FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3;

IL2CPP_EXTERN_C RuntimeClass* Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DevTuningforkReflection_t1BCD735A96FA69F27B367692E27C35ACBF692615_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t6531FECA14929B6C85781801964CA96B8970328F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t8000DF962808DD28C5F08125B00E7012CEC78782_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageParser_1_t5AA61E459FCD6A79C51B4B48507735C508F6951A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageParser_1_t6001DE92B7B0DD22B06F4B1A0C2D3FB655F37E4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t525AE29AE5B5EE1A54D596A4DBA08314E97359FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA8048C04E3D1CDD4A2BDA66F0D8F0F7BDC29722B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1264D100EAC17F22DD63080C0C0308B7BF111DA4;
IL2CPP_EXTERN_C String_t* _stringLiteral13D6C3732D0408109ED13D5E50C10AD798C448A2;
IL2CPP_EXTERN_C String_t* _stringLiteral21DC87709F303D93C75C0F1AF1BCEA05281AEABC;
IL2CPP_EXTERN_C String_t* _stringLiteral2E0BBE40A9C543A1D313AAE2E683F4D1D0BFBFCB;
IL2CPP_EXTERN_C String_t* _stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B;
IL2CPP_EXTERN_C String_t* _stringLiteralE67EBC6E45203DB4981CC3FD4301EBF80A26F8E2;
IL2CPP_EXTERN_C String_t* _stringLiteralFEE98AE951E48A41902FA80D8D0A8CFDFB24DBFD;
IL2CPP_EXTERN_C const RuntimeMethod* MessageParser_1__ctor_m3CA59E56D81B66FF2EDB8286373E0B9D5D4C7854_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageParser_1__ctor_m99F66ED13EEC24554CA6E2FD204FD5D68375D131_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__24_0_m0880DF9A37F16B698724971F7B1A3574271BF0A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__24_0_mD920D17CE40BAD49A24FD8822B312331943B86D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Scene_tDA631F48915ECBADD382CEBF670B700E068703D1_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F;
struct GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t39CE58F47A10BCEEB49992B14B8AE1140C8774A9 
{
};

// Google.Android.PerformanceTuner.Annotation
struct Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19  : public RuntimeObject
{
	// Google.Android.PerformanceTuner.Scene Google.Android.PerformanceTuner.Annotation::scene_
	int32_t ___scene__2;
};

struct Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Android.PerformanceTuner.Annotation> Google.Android.PerformanceTuner.Annotation::_parser
	MessageParser_1_t6001DE92B7B0DD22B06F4B1A0C2D3FB655F37E4C* ____parser_0;
};
struct Il2CppArrayBounds;

// Google.Protobuf.CodedInputStream
struct CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425  : public RuntimeObject
{
	// System.Boolean Google.Protobuf.CodedInputStream::leaveOpen
	bool ___leaveOpen_0;
	// System.Byte[] Google.Protobuf.CodedInputStream::buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer_1;
	// System.Int32 Google.Protobuf.CodedInputStream::bufferSize
	int32_t ___bufferSize_2;
	// System.Int32 Google.Protobuf.CodedInputStream::bufferSizeAfterLimit
	int32_t ___bufferSizeAfterLimit_3;
	// System.Int32 Google.Protobuf.CodedInputStream::bufferPos
	int32_t ___bufferPos_4;
	// System.IO.Stream Google.Protobuf.CodedInputStream::input
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input_5;
	// System.UInt32 Google.Protobuf.CodedInputStream::lastTag
	uint32_t ___lastTag_6;
	// System.UInt32 Google.Protobuf.CodedInputStream::nextTag
	uint32_t ___nextTag_7;
	// System.Boolean Google.Protobuf.CodedInputStream::hasNextTag
	bool ___hasNextTag_8;
	// System.Int32 Google.Protobuf.CodedInputStream::totalBytesRetired
	int32_t ___totalBytesRetired_12;
	// System.Int32 Google.Protobuf.CodedInputStream::currentLimit
	int32_t ___currentLimit_13;
	// System.Int32 Google.Protobuf.CodedInputStream::recursionDepth
	int32_t ___recursionDepth_14;
	// System.Int32 Google.Protobuf.CodedInputStream::recursionLimit
	int32_t ___recursionLimit_15;
	// System.Int32 Google.Protobuf.CodedInputStream::sizeLimit
	int32_t ___sizeLimit_16;
	// System.Boolean Google.Protobuf.CodedInputStream::<DiscardUnknownFields>k__BackingField
	bool ___U3CDiscardUnknownFieldsU3Ek__BackingField_17;
	// Google.Protobuf.ExtensionRegistry Google.Protobuf.CodedInputStream::<ExtensionRegistry>k__BackingField
	ExtensionRegistry_t3A02F9CABE27F85D70F5444B20C9640194BCBDCC* ___U3CExtensionRegistryU3Ek__BackingField_18;
};

// Google.Protobuf.CodedOutputStream
struct CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163  : public RuntimeObject
{
	// System.Boolean Google.Protobuf.CodedOutputStream::leaveOpen
	bool ___leaveOpen_7;
	// System.Byte[] Google.Protobuf.CodedOutputStream::buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer_8;
	// System.Int32 Google.Protobuf.CodedOutputStream::limit
	int32_t ___limit_9;
	// System.Int32 Google.Protobuf.CodedOutputStream::position
	int32_t ___position_10;
	// System.IO.Stream Google.Protobuf.CodedOutputStream::output
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output_11;
};

struct CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_StaticFields
{
	// System.Text.Encoding Google.Protobuf.CodedOutputStream::Utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___Utf8Encoding_5;
	// System.Int32 Google.Protobuf.CodedOutputStream::DefaultBufferSize
	int32_t ___DefaultBufferSize_6;
};

// Google.Protobuf.Reflection.DescriptorBase
struct DescriptorBase_t5C5FA7C866B517618C4032DDBEF36522D92A18FA  : public RuntimeObject
{
	// System.Int32 Google.Protobuf.Reflection.DescriptorBase::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.String Google.Protobuf.Reflection.DescriptorBase::<FullName>k__BackingField
	String_t* ___U3CFullNameU3Ek__BackingField_1;
	// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.DescriptorBase::<File>k__BackingField
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___U3CFileU3Ek__BackingField_2;
};

// Google.Android.PerformanceTuner.DevTuningforkReflection
struct DevTuningforkReflection_t1BCD735A96FA69F27B367692E27C35ACBF692615  : public RuntimeObject
{
};

struct DevTuningforkReflection_t1BCD735A96FA69F27B367692E27C35ACBF692615_StaticFields
{
	// Google.Protobuf.Reflection.FileDescriptor Google.Android.PerformanceTuner.DevTuningforkReflection::descriptor
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___descriptor_0;
};

// Google.Android.PerformanceTuner.FidelityParams
struct FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17  : public RuntimeObject
{
	// System.Int32 Google.Android.PerformanceTuner.FidelityParams::level_
	int32_t ___level__2;
};

struct FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Android.PerformanceTuner.FidelityParams> Google.Android.PerformanceTuner.FidelityParams::_parser
	MessageParser_1_t5AA61E459FCD6A79C51B4B48507735C508F6951A* ____parser_0;
};

// Google.Protobuf.Reflection.FileDescriptor
struct FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE  : public RuntimeObject
{
	// System.Lazy`1<System.Collections.Generic.Dictionary`2<Google.Protobuf.Reflection.IDescriptor,Google.Protobuf.Reflection.DescriptorDeclaration>> Google.Protobuf.Reflection.FileDescriptor::declarations
	Lazy_1_t9EE2A1123EC79B036ABD6DA8C3433CC66609B4A6* ___declarations_0;
	// Google.Protobuf.Reflection.FileDescriptorProto Google.Protobuf.Reflection.FileDescriptor::<Proto>k__BackingField
	FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* ___U3CProtoU3Ek__BackingField_1;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.FileDescriptor::<MessageTypes>k__BackingField
	RuntimeObject* ___U3CMessageTypesU3Ek__BackingField_2;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor> Google.Protobuf.Reflection.FileDescriptor::<EnumTypes>k__BackingField
	RuntimeObject* ___U3CEnumTypesU3Ek__BackingField_3;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.ServiceDescriptor> Google.Protobuf.Reflection.FileDescriptor::<Services>k__BackingField
	RuntimeObject* ___U3CServicesU3Ek__BackingField_4;
	// Google.Protobuf.Reflection.ExtensionCollection Google.Protobuf.Reflection.FileDescriptor::<Extensions>k__BackingField
	ExtensionCollection_tB99C14F49DA3F67113593C9FD990613B6072E7A0* ___U3CExtensionsU3Ek__BackingField_5;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.FileDescriptor::<Dependencies>k__BackingField
	RuntimeObject* ___U3CDependenciesU3Ek__BackingField_6;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.FileDescriptor::<PublicDependencies>k__BackingField
	RuntimeObject* ___U3CPublicDependenciesU3Ek__BackingField_7;
	// Google.Protobuf.ByteString Google.Protobuf.Reflection.FileDescriptor::<SerializedData>k__BackingField
	ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* ___U3CSerializedDataU3Ek__BackingField_8;
	// Google.Protobuf.Reflection.DescriptorPool Google.Protobuf.Reflection.FileDescriptor::<DescriptorPool>k__BackingField
	DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* ___U3CDescriptorPoolU3Ek__BackingField_9;
};

// Google.Protobuf.Reflection.GeneratedClrTypeInfo
struct GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E  : public RuntimeObject
{
	// System.Type Google.Protobuf.Reflection.GeneratedClrTypeInfo::<ClrType>k__BackingField
	Type_t* ___U3CClrTypeU3Ek__BackingField_3;
	// Google.Protobuf.MessageParser Google.Protobuf.Reflection.GeneratedClrTypeInfo::<Parser>k__BackingField
	MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* ___U3CParserU3Ek__BackingField_4;
	// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<PropertyNames>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CPropertyNamesU3Ek__BackingField_5;
	// Google.Protobuf.Extension[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<Extensions>k__BackingField
	ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66* ___U3CExtensionsU3Ek__BackingField_6;
	// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<OneofNames>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3COneofNamesU3Ek__BackingField_7;
	// Google.Protobuf.Reflection.GeneratedClrTypeInfo[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<NestedTypes>k__BackingField
	GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* ___U3CNestedTypesU3Ek__BackingField_8;
	// System.Type[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<NestedEnums>k__BackingField
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___U3CNestedEnumsU3Ek__BackingField_9;
};

struct GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_StaticFields
{
	// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::EmptyNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___EmptyNames_0;
	// Google.Protobuf.Reflection.GeneratedClrTypeInfo[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::EmptyCodeInfo
	GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* ___EmptyCodeInfo_1;
	// Google.Protobuf.Extension[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::EmptyExtensions
	ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66* ___EmptyExtensions_2;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Google.Protobuf.MessageParser
struct MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D  : public RuntimeObject
{
	// System.Func`1<Google.Protobuf.IMessage> Google.Protobuf.MessageParser::factory
	Func_1_t726CD36CB50B2F99D102B003DBF9F7D5ECFE2918* ___factory_0;
	// System.Boolean Google.Protobuf.MessageParser::<DiscardUnknownFields>k__BackingField
	bool ___U3CDiscardUnknownFieldsU3Ek__BackingField_1;
	// Google.Protobuf.ExtensionRegistry Google.Protobuf.MessageParser::<Extensions>k__BackingField
	ExtensionRegistry_t3A02F9CABE27F85D70F5444B20C9640194BCBDCC* ___U3CExtensionsU3Ek__BackingField_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// Google.Android.PerformanceTuner.Annotation/<>c
struct U3CU3Ec_t525AE29AE5B5EE1A54D596A4DBA08314E97359FD  : public RuntimeObject
{
};

struct U3CU3Ec_t525AE29AE5B5EE1A54D596A4DBA08314E97359FD_StaticFields
{
	// Google.Android.PerformanceTuner.Annotation/<>c Google.Android.PerformanceTuner.Annotation/<>c::<>9
	U3CU3Ec_t525AE29AE5B5EE1A54D596A4DBA08314E97359FD* ___U3CU3E9_0;
};

// Google.Android.PerformanceTuner.FidelityParams/<>c
struct U3CU3Ec_tA8048C04E3D1CDD4A2BDA66F0D8F0F7BDC29722B  : public RuntimeObject
{
};

struct U3CU3Ec_tA8048C04E3D1CDD4A2BDA66F0D8F0F7BDC29722B_StaticFields
{
	// Google.Android.PerformanceTuner.FidelityParams/<>c Google.Android.PerformanceTuner.FidelityParams/<>c::<>9
	U3CU3Ec_tA8048C04E3D1CDD4A2BDA66F0D8F0F7BDC29722B* ___U3CU3E9_0;
};

// Google.Protobuf.MessageParser`1<Google.Android.PerformanceTuner.Annotation>
struct MessageParser_1_t6001DE92B7B0DD22B06F4B1A0C2D3FB655F37E4C  : public MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D
{
	// System.Func`1<T> Google.Protobuf.MessageParser`1::factory
	Func_1_t6531FECA14929B6C85781801964CA96B8970328F* ___factory_3;
};

// Google.Protobuf.MessageParser`1<Google.Android.PerformanceTuner.FidelityParams>
struct MessageParser_1_t5AA61E459FCD6A79C51B4B48507735C508F6951A  : public MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D
{
	// System.Func`1<T> Google.Protobuf.MessageParser`1::factory
	Func_1_t8000DF962808DD28C5F08125B00E7012CEC78782* ___factory_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// Google.Protobuf.Reflection.MessageDescriptor
struct MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906  : public DescriptorBase_t5C5FA7C866B517618C4032DDBEF36522D92A18FA
{
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::fieldsInDeclarationOrder
	RuntimeObject* ___fieldsInDeclarationOrder_4;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::fieldsInNumberOrder
	RuntimeObject* ___fieldsInNumberOrder_5;
	// System.Collections.Generic.IDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::jsonFieldMap
	RuntimeObject* ___jsonFieldMap_6;
	// Google.Protobuf.Reflection.DescriptorProto Google.Protobuf.Reflection.MessageDescriptor::<Proto>k__BackingField
	DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* ___U3CProtoU3Ek__BackingField_7;
	// System.Type Google.Protobuf.Reflection.MessageDescriptor::<ClrType>k__BackingField
	Type_t* ___U3CClrTypeU3Ek__BackingField_8;
	// Google.Protobuf.MessageParser Google.Protobuf.Reflection.MessageDescriptor::<Parser>k__BackingField
	MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* ___U3CParserU3Ek__BackingField_9;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MessageDescriptor::<ContainingType>k__BackingField
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___U3CContainingTypeU3Ek__BackingField_10;
	// Google.Protobuf.Reflection.MessageDescriptor/FieldCollection Google.Protobuf.Reflection.MessageDescriptor::<Fields>k__BackingField
	FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* ___U3CFieldsU3Ek__BackingField_11;
	// Google.Protobuf.Reflection.ExtensionCollection Google.Protobuf.Reflection.MessageDescriptor::<Extensions>k__BackingField
	ExtensionCollection_tB99C14F49DA3F67113593C9FD990613B6072E7A0* ___U3CExtensionsU3Ek__BackingField_12;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.MessageDescriptor::<NestedTypes>k__BackingField
	RuntimeObject* ___U3CNestedTypesU3Ek__BackingField_13;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor> Google.Protobuf.Reflection.MessageDescriptor::<EnumTypes>k__BackingField
	RuntimeObject* ___U3CEnumTypesU3Ek__BackingField_14;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.OneofDescriptor> Google.Protobuf.Reflection.MessageDescriptor::<Oneofs>k__BackingField
	RuntimeObject* ___U3COneofsU3Ek__BackingField_15;
};

struct MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_StaticFields
{
	// System.Collections.Generic.HashSet`1<System.String> Google.Protobuf.Reflection.MessageDescriptor::WellKnownTypeNames
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___WellKnownTypeNames_3;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

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

// System.Func`1<Google.Android.PerformanceTuner.Annotation>
struct Func_1_t6531FECA14929B6C85781801964CA96B8970328F  : public MulticastDelegate_t
{
};

// System.Func`1<Google.Android.PerformanceTuner.FidelityParams>
struct Func_1_t8000DF962808DD28C5F08125B00E7012CEC78782  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// Google.Protobuf.Reflection.FileDescriptor[]
struct FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F  : public RuntimeArray
{
	ALIGN_FIELD (8) FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* m_Items[1];

	inline FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Google.Protobuf.Reflection.GeneratedClrTypeInfo[]
struct GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89  : public RuntimeArray
{
	ALIGN_FIELD (8) GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* m_Items[1];

	inline GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.MessageParser`1<System.Object>::.ctor(System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageParser_1__ctor_m79DDE10FEBA79EB94DDBD4216164A97C85202DC8_gshared (MessageParser_1_tE80B9A8972366E18F31910138469726593F6FD1F* __this, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___factory0, const RuntimeMethod* method) ;

// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Byte[] System.Convert::FromBase64String(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C (String_t* ___s0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// Google.Protobuf.MessageParser`1<Google.Android.PerformanceTuner.Annotation> Google.Android.PerformanceTuner.Annotation::get_Parser()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageParser_1_t6001DE92B7B0DD22B06F4B1A0C2D3FB655F37E4C* Annotation_get_Parser_m8596CFE52ED80AACA94A79B61E30CAFE417C1C75_inline (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::.ctor(System.Type,Google.Protobuf.MessageParser,System.String[],System.String[],System.Type[],Google.Protobuf.Reflection.GeneratedClrTypeInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo__ctor_m99B9737F8FA9ADA1D9E0A059170EBBF4E37856A7 (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, Type_t* ___clrType0, MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* ___parser1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___propertyNames2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___oneofNames3, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___nestedEnums4, GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* ___nestedTypes5, const RuntimeMethod* method) ;
// Google.Protobuf.MessageParser`1<Google.Android.PerformanceTuner.FidelityParams> Google.Android.PerformanceTuner.FidelityParams::get_Parser()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageParser_1_t5AA61E459FCD6A79C51B4B48507735C508F6951A* FidelityParams_get_Parser_m011C3B9E82D24F24061016C21239EC783F7D4FE7_inline (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::.ctor(System.Type[],Google.Protobuf.Reflection.GeneratedClrTypeInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo__ctor_m4B87283798FCFBF617184A3F5417575E243A6F1E (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___nestedEnums0, GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* ___nestedTypes1, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.FileDescriptor::FromGeneratedCode(System.Byte[],Google.Protobuf.Reflection.FileDescriptor[],Google.Protobuf.Reflection.GeneratedClrTypeInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* FileDescriptor_FromGeneratedCode_mE8458CBFAFB2D3121B5EFC55182A02EAC93E0823 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___descriptorData0, FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* ___dependencies1, GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* ___generatedCodeInfo2, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.FileDescriptor Google.Android.PerformanceTuner.DevTuningforkReflection::get_Descriptor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* DevTuningforkReflection_get_Descriptor_m48851C1A9C0CCE683909BB83112B19C664D1A946_inline (const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.FileDescriptor::get_MessageTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_MessageTypes_m0FB1C458BB323A507214648AC7944A9FBE4D3E78_inline (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MessageDescriptor Google.Android.PerformanceTuner.Annotation::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* Annotation_get_Descriptor_mFD2E2167E9B9C25137EA62EF3C3135E7EE9E744A (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Google.Android.PerformanceTuner.Annotation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Annotation__ctor_mF53028360428163DF22AC3A25EFC9EA3650B24A7 (Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* __this, const RuntimeMethod* method) ;
// System.Void Google.Android.PerformanceTuner.Annotation::.ctor(Google.Android.PerformanceTuner.Annotation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Annotation__ctor_m6DC68EB2E3C68186A210565F1AC264EB782CAD62 (Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* __this, Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* ___other0, const RuntimeMethod* method) ;
// System.Boolean Google.Android.PerformanceTuner.Annotation::Equals(Google.Android.PerformanceTuner.Annotation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Annotation_Equals_mD8AED0161F3AB9A445F5019BBB799840EDF30466 (Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* __this, Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* ___other0, const RuntimeMethod* method) ;
// Google.Android.PerformanceTuner.Scene Google.Android.PerformanceTuner.Annotation::get_Scene()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Annotation_get_Scene_mB374E189EA9777DEE049D86891BA93657BDD9303_inline (Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.JsonFormatter::ToDiagnosticString(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonFormatter_ToDiagnosticString_mC6580DDBB77AE9E5DDDE29D40761DE2250D3EC89 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.CodedOutputStream::WriteRawTag(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteRawTag_m73DA7A01D5AA96250E25B889663888AAAD52A4E7 (CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* __this, uint8_t ___b10, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.CodedOutputStream::WriteEnum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteEnum_m11950773A9F2FC2E4EDCFEA2B2779E66855CF653 (CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.CodedOutputStream::ComputeEnumSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeEnumSize_mA1836D9E8169C256E0EF161A0A7CA86FE3CE0402 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Google.Android.PerformanceTuner.Annotation::set_Scene(Google.Android.PerformanceTuner.Scene)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Annotation_set_Scene_mE96CE6727999DB83664E911B2F1D557E4DD20CBD_inline (Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.CodedInputStream::SkipLastField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream_SkipLastField_mBFF9AF6970A4B812B9CE254B4AD5944EA3C9FCC5 (CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* __this, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.CodedInputStream::ReadEnum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedInputStream_ReadEnum_mBD44FB279BCBAEF5C48F53092864C99A44360561 (CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* __this, const RuntimeMethod* method) ;
// System.UInt32 Google.Protobuf.CodedInputStream::ReadTag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CodedInputStream_ReadTag_m5E3B124AC3D26CC786F4B15591C0D929E9013199 (CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<Google.Android.PerformanceTuner.Annotation>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mE6ED9EBC61F82502E78F509CEE3FB26677681711 (Func_1_t6531FECA14929B6C85781801964CA96B8970328F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t6531FECA14929B6C85781801964CA96B8970328F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Google.Protobuf.MessageParser`1<Google.Android.PerformanceTuner.Annotation>::.ctor(System.Func`1<T>)
inline void MessageParser_1__ctor_m99F66ED13EEC24554CA6E2FD204FD5D68375D131 (MessageParser_1_t6001DE92B7B0DD22B06F4B1A0C2D3FB655F37E4C* __this, Func_1_t6531FECA14929B6C85781801964CA96B8970328F* ___factory0, const RuntimeMethod* method)
{
	((  void (*) (MessageParser_1_t6001DE92B7B0DD22B06F4B1A0C2D3FB655F37E4C*, Func_1_t6531FECA14929B6C85781801964CA96B8970328F*, const RuntimeMethod*))MessageParser_1__ctor_m79DDE10FEBA79EB94DDBD4216164A97C85202DC8_gshared)(__this, ___factory0, method);
}
// System.Void Google.Android.PerformanceTuner.Annotation/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF0F260281BFB1693B98A15EA6737CA37E646C8FB (U3CU3Ec_t525AE29AE5B5EE1A54D596A4DBA08314E97359FD* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MessageDescriptor Google.Android.PerformanceTuner.FidelityParams::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* FidelityParams_get_Descriptor_mBEDAC79896994C81DCB7231D7D3F549F6DE72C64 (const RuntimeMethod* method) ;
// System.Void Google.Android.PerformanceTuner.FidelityParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FidelityParams__ctor_mCF5D8C68C1C178027CE89F77C3ADC86BCFF6621D (FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* __this, const RuntimeMethod* method) ;
// System.Void Google.Android.PerformanceTuner.FidelityParams::.ctor(Google.Android.PerformanceTuner.FidelityParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FidelityParams__ctor_m632DFEE497F1C4EE7CD25E3A5849E9C263C913DB (FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* __this, FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* ___other0, const RuntimeMethod* method) ;
// System.Boolean Google.Android.PerformanceTuner.FidelityParams::Equals(Google.Android.PerformanceTuner.FidelityParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FidelityParams_Equals_m0FC9834A15023FCE3931718BB07F665DB6011F98 (FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* __this, FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* ___other0, const RuntimeMethod* method) ;
// System.Int32 Google.Android.PerformanceTuner.FidelityParams::get_Level()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FidelityParams_get_Level_m02AD91F9EE35606C952AC5A09EFE67903EBDFB74_inline (FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.CodedOutputStream::WriteInt32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteInt32_m04AF441F8150B4EF8AA6FD12E98B35F8CC888E04 (CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.CodedOutputStream::ComputeInt32Size(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeInt32Size_m62CF15C91A41AC51B291BCD8EA973CF410D63B33 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Google.Android.PerformanceTuner.FidelityParams::set_Level(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FidelityParams_set_Level_m6E928790F7B43C0FA61D296D34D29758719104BE_inline (FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.CodedInputStream::ReadInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedInputStream_ReadInt32_m5E54CA34B6B643C7CEAF7E30B376AEE754BE86BF (CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<Google.Android.PerformanceTuner.FidelityParams>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mBBA62B77EC4C06427D036F12089C0DB47B5E1404 (Func_1_t8000DF962808DD28C5F08125B00E7012CEC78782* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t8000DF962808DD28C5F08125B00E7012CEC78782*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Google.Protobuf.MessageParser`1<Google.Android.PerformanceTuner.FidelityParams>::.ctor(System.Func`1<T>)
inline void MessageParser_1__ctor_m3CA59E56D81B66FF2EDB8286373E0B9D5D4C7854 (MessageParser_1_t5AA61E459FCD6A79C51B4B48507735C508F6951A* __this, Func_1_t8000DF962808DD28C5F08125B00E7012CEC78782* ___factory0, const RuntimeMethod* method)
{
	((  void (*) (MessageParser_1_t5AA61E459FCD6A79C51B4B48507735C508F6951A*, Func_1_t8000DF962808DD28C5F08125B00E7012CEC78782*, const RuntimeMethod*))MessageParser_1__ctor_m79DDE10FEBA79EB94DDBD4216164A97C85202DC8_gshared)(__this, ___factory0, method);
}
// System.Void Google.Android.PerformanceTuner.FidelityParams/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA0FEB3A7E2BEF92A5B49995DD485431DFCCD14E9 (U3CU3Ec_tA8048C04E3D1CDD4A2BDA66F0D8F0F7BDC29722B* __this, const RuntimeMethod* method) ;
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
// Google.Protobuf.Reflection.FileDescriptor Google.Android.PerformanceTuner.DevTuningforkReflection::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* DevTuningforkReflection_get_Descriptor_m48851C1A9C0CCE683909BB83112B19C664D1A946 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DevTuningforkReflection_t1BCD735A96FA69F27B367692E27C35ACBF692615_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return descriptor; }
		il2cpp_codegen_runtime_class_init_inline(DevTuningforkReflection_t1BCD735A96FA69F27B367692E27C35ACBF692615_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0 = ((DevTuningforkReflection_t1BCD735A96FA69F27B367692E27C35ACBF692615_StaticFields*)il2cpp_codegen_static_fields_for(DevTuningforkReflection_t1BCD735A96FA69F27B367692E27C35ACBF692615_il2cpp_TypeInfo_var))->___descriptor_0;
		return L_0;
	}
}
// System.Void Google.Android.PerformanceTuner.DevTuningforkReflection::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DevTuningforkReflection__cctor_mCEB23941D4A7F2DCB3C50F66942829323F71D1D9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DevTuningforkReflection_t1BCD735A96FA69F27B367692E27C35ACBF692615_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scene_tDA631F48915ECBADD382CEBF670B700E068703D1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1264D100EAC17F22DD63080C0C0308B7BF111DA4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13D6C3732D0408109ED13D5E50C10AD798C448A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21DC87709F303D93C75C0F1AF1BCEA05281AEABC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E0BBE40A9C543A1D313AAE2E683F4D1D0BFBFCB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE67EBC6E45203DB4981CC3FD4301EBF80A26F8E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEE98AE951E48A41902FA80D8D0A8CFDFB24DBFD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// byte[] descriptorData = global::System.Convert.FromBase64String(
		//     string.Concat(
		//       "ChRkZXZfdHVuaW5nZm9yay5wcm90byIjCgpBbm5vdGF0aW9uEhUKBXNjZW5l",
		//       "GAEgASgOMgYuU2NlbmUiHwoORmlkZWxpdHlQYXJhbXMSDQoFbGV2ZWwYASAB",
		//       "KAUqPwoFU2NlbmUSEQoNU0NFTkVfSU5WQUxJRBAAEiMKH1NDRU5FX0FTU0VU",
		//       "U19TQ0VORVNfU0FNUExFU0NFTkUQAUIiqgIfR29vZ2xlLkFuZHJvaWQuUGVy",
		//       "Zm9ybWFuY2VUdW5lcmIGcHJvdG8z"));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral1264D100EAC17F22DD63080C0C0308B7BF111DA4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1264D100EAC17F22DD63080C0C0308B7BF111DA4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral21DC87709F303D93C75C0F1AF1BCEA05281AEABC);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral21DC87709F303D93C75C0F1AF1BCEA05281AEABC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralE67EBC6E45203DB4981CC3FD4301EBF80A26F8E2);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralE67EBC6E45203DB4981CC3FD4301EBF80A26F8E2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral2E0BBE40A9C543A1D313AAE2E683F4D1D0BFBFCB);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral2E0BBE40A9C543A1D313AAE2E683F4D1D0BFBFCB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral13D6C3732D0408109ED13D5E50C10AD798C448A2);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral13D6C3732D0408109ED13D5E50C10AD798C448A2);
		String_t* L_6;
		L_6 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_6, NULL);
		// descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
		//     new pbr::FileDescriptor[] { },
		//     new pbr::GeneratedClrTypeInfo(new[] {typeof(global::Google.Android.PerformanceTuner.Scene), }, new pbr::GeneratedClrTypeInfo[] {
		//       new pbr::GeneratedClrTypeInfo(typeof(global::Google.Android.PerformanceTuner.Annotation), global::Google.Android.PerformanceTuner.Annotation.Parser, new[]{ "Scene" }, null, null, null),
		//       new pbr::GeneratedClrTypeInfo(typeof(global::Google.Android.PerformanceTuner.FidelityParams), global::Google.Android.PerformanceTuner.FidelityParams.Parser, new[]{ "Level" }, null, null, null)
		//     }));
		FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* L_8 = (FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F*)(FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F*)SZArrayNew(FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F_il2cpp_TypeInfo_var, (uint32_t)0);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_9 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_10 = L_9;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (Scene_tDA631F48915ECBADD382CEBF670B700E068703D1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_12);
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_13 = (GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89*)(GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89*)SZArrayNew(GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89_il2cpp_TypeInfo_var, (uint32_t)2);
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_14 = L_13;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19_0_0_0_var) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19_il2cpp_TypeInfo_var);
		MessageParser_1_t6001DE92B7B0DD22B06F4B1A0C2D3FB655F37E4C* L_17;
		L_17 = Annotation_get_Parser_m8596CFE52ED80AACA94A79B61E30CAFE417C1C75_inline(NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteralFEE98AE951E48A41902FA80D8D0A8CFDFB24DBFD);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralFEE98AE951E48A41902FA80D8D0A8CFDFB24DBFD);
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_20 = (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E*)il2cpp_codegen_object_new(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		GeneratedClrTypeInfo__ctor_m99B9737F8FA9ADA1D9E0A059170EBBF4E37856A7(L_20, L_16, L_17, L_19, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)NULL, (GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89*)NULL, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_20);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E*)L_20);
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_21 = L_14;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17_0_0_0_var) };
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		il2cpp_codegen_runtime_class_init_inline(FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17_il2cpp_TypeInfo_var);
		MessageParser_1_t5AA61E459FCD6A79C51B4B48507735C508F6951A* L_24;
		L_24 = FidelityParams_get_Parser_m011C3B9E82D24F24061016C21239EC783F7D4FE7_inline(NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B);
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_27 = (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E*)il2cpp_codegen_object_new(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		GeneratedClrTypeInfo__ctor_m99B9737F8FA9ADA1D9E0A059170EBBF4E37856A7(L_27, L_23, L_24, L_26, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)NULL, (GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89*)NULL, NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_27);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E*)L_27);
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_28 = (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E*)il2cpp_codegen_object_new(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		GeneratedClrTypeInfo__ctor_m4B87283798FCFBF617184A3F5417575E243A6F1E(L_28, L_10, L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_29;
		L_29 = FileDescriptor_FromGeneratedCode_mE8458CBFAFB2D3121B5EFC55182A02EAC93E0823(L_7, L_8, L_28, NULL);
		((DevTuningforkReflection_t1BCD735A96FA69F27B367692E27C35ACBF692615_StaticFields*)il2cpp_codegen_static_fields_for(DevTuningforkReflection_t1BCD735A96FA69F27B367692E27C35ACBF692615_il2cpp_TypeInfo_var))->___descriptor_0 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&((DevTuningforkReflection_t1BCD735A96FA69F27B367692E27C35ACBF692615_StaticFields*)il2cpp_codegen_static_fields_for(DevTuningforkReflection_t1BCD735A96FA69F27B367692E27C35ACBF692615_il2cpp_TypeInfo_var))->___descriptor_0), (void*)L_29);
		// }
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
// Google.Protobuf.MessageParser`1<Google.Android.PerformanceTuner.Annotation> Google.Android.PerformanceTuner.Annotation::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_1_t6001DE92B7B0DD22B06F4B1A0C2D3FB655F37E4C* Annotation_get_Parser_m8596CFE52ED80AACA94A79B61E30CAFE417C1C75 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static pb::MessageParser<Annotation> Parser { get { return _parser; } }
		il2cpp_codegen_runtime_class_init_inline(Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19_il2cpp_TypeInfo_var);
		MessageParser_1_t6001DE92B7B0DD22B06F4B1A0C2D3FB655F37E4C* L_0 = ((Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19_StaticFields*)il2cpp_codegen_static_fields_for(Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19_il2cpp_TypeInfo_var))->____parser_0;
		return L_0;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Android.PerformanceTuner.Annotation::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* Annotation_get_Descriptor_mFD2E2167E9B9C25137EA62EF3C3135E7EE9E744A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DevTuningforkReflection_t1BCD735A96FA69F27B367692E27C35ACBF692615_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return global::Google.Android.PerformanceTuner.DevTuningforkReflection.Descriptor.MessageTypes[0]; }
		il2cpp_codegen_runtime_class_init_inline(DevTuningforkReflection_t1BCD735A96FA69F27B367692E27C35ACBF692615_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0;
		L_0 = DevTuningforkReflection_get_Descriptor_m48851C1A9C0CCE683909BB83112B19C664D1A946_inline(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = FileDescriptor_get_MessageTypes_m0FB1C458BB323A507214648AC7944A9FBE4D3E78_inline(L_0, NULL);
		NullCheck(L_1);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_2;
		L_2 = InterfaceFuncInvoker1< MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Item(System.Int32) */, IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var, L_1, 0);
		return L_2;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Android.PerformanceTuner.Annotation::pb::Google.Protobuf.IMessage.get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* Annotation_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m3893A25B661D4CF321069A6D63BC272CDC9ACC7D (Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return Descriptor; }
		il2cpp_codegen_runtime_class_init_inline(Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19_il2cpp_TypeInfo_var);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0;
		L_0 = Annotation_get_Descriptor_mFD2E2167E9B9C25137EA62EF3C3135E7EE9E744A(NULL);
		return L_0;
	}
}
// System.Void Google.Android.PerformanceTuner.Annotation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Annotation__ctor_mF53028360428163DF22AC3A25EFC9EA3650B24A7 (Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* __this, const RuntimeMethod* method) 
{
	{
		// public Annotation() {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void Google.Android.PerformanceTuner.Annotation::.ctor(Google.Android.PerformanceTuner.Annotation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Annotation__ctor_m6DC68EB2E3C68186A210565F1AC264EB782CAD62 (Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* __this, Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* ___other0, const RuntimeMethod* method) 
{
	{
		// public Annotation(Annotation other) : this() {
		Annotation__ctor_mF53028360428163DF22AC3A25EFC9EA3650B24A7(__this, NULL);
		// scene_ = other.scene_;
		Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* L_0 = ___other0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___scene__2;
		__this->___scene__2 = L_1;
		// }
		return;
	}
}
// Google.Android.PerformanceTuner.Annotation Google.Android.PerformanceTuner.Annotation::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* Annotation_Clone_m86A7789E5A9FC2E806DDF16D775558234FA1702C (Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Annotation(this);
		Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* L_0 = (Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19*)il2cpp_codegen_object_new(Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Annotation__ctor_m6DC68EB2E3C68186A210565F1AC264EB782CAD62(L_0, __this, NULL);
		return L_0;
	}
}
// Google.Android.PerformanceTuner.Scene Google.Android.PerformanceTuner.Annotation::get_Scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Annotation_get_Scene_mB374E189EA9777DEE049D86891BA93657BDD9303 (Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* __this, const RuntimeMethod* method) 
{
	{
		// get { return scene_; }
		int32_t L_0 = __this->___scene__2;
		return L_0;
	}
}
// System.Void Google.Android.PerformanceTuner.Annotation::set_Scene(Google.Android.PerformanceTuner.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Annotation_set_Scene_mE96CE6727999DB83664E911B2F1D557E4DD20CBD (Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// scene_ = value;
		int32_t L_0 = ___value0;
		__this->___scene__2 = L_0;
		// }
		return;
	}
}
// System.Boolean Google.Android.PerformanceTuner.Annotation::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Annotation_Equals_m3BA0F3C5ECADA2E18994F89DBC7B6DDF5EA64A30 (Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Equals(other as Annotation);
		RuntimeObject* L_0 = ___other0;
		bool L_1;
		L_1 = Annotation_Equals_mD8AED0161F3AB9A445F5019BBB799840EDF30466(__this, ((Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19*)IsInstSealed((RuntimeObject*)L_0, Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// System.Boolean Google.Android.PerformanceTuner.Annotation::Equals(Google.Android.PerformanceTuner.Annotation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Annotation_Equals_mD8AED0161F3AB9A445F5019BBB799840EDF30466 (Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* __this, Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* ___other0, const RuntimeMethod* method) 
{
	{
		// if (ReferenceEquals(other, null)) {
		Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(other, this)) {
		Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* L_1 = ___other0;
		if ((!(((RuntimeObject*)(Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19*)L_1) == ((RuntimeObject*)(Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19*)__this))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// if (Scene != other.Scene) return false;
		int32_t L_2;
		L_2 = Annotation_get_Scene_mB374E189EA9777DEE049D86891BA93657BDD9303_inline(__this, NULL);
		Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* L_3 = ___other0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Annotation_get_Scene_mB374E189EA9777DEE049D86891BA93657BDD9303_inline(L_3, NULL);
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_001b;
		}
	}
	{
		// if (Scene != other.Scene) return false;
		return (bool)0;
	}

IL_001b:
	{
		// return true;
		return (bool)1;
	}
}
// System.Int32 Google.Android.PerformanceTuner.Annotation::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Annotation_GetHashCode_mB2110C10891F3D34FEEF6BDFDD68BD7846BE6264 (Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int hash = 1;
		V_0 = 1;
		// if (Scene != 0) hash ^= Scene.GetHashCode();
		int32_t L_0;
		L_0 = Annotation_get_Scene_mB374E189EA9777DEE049D86891BA93657BDD9303_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// if (Scene != 0) hash ^= Scene.GetHashCode();
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = Annotation_get_Scene_mB374E189EA9777DEE049D86891BA93657BDD9303_inline(__this, NULL);
		V_1 = L_2;
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((int32_t*)(&V_1), NULL);
		V_0 = ((int32_t)(L_1^L_3));
	}

IL_0021:
	{
		// return hash;
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.String Google.Android.PerformanceTuner.Annotation::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Annotation_ToString_m6AB83E67ED90CF9D0C57247A3D333118C45FD4FE (Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return pb::JsonFormatter.ToDiagnosticString(this);
		il2cpp_codegen_runtime_class_init_inline(JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = JsonFormatter_ToDiagnosticString_mC6580DDBB77AE9E5DDDE29D40761DE2250D3EC89(__this, NULL);
		return L_0;
	}
}
// System.Void Google.Android.PerformanceTuner.Annotation::WriteTo(Google.Protobuf.CodedOutputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Annotation_WriteTo_m2EB47E302B80B1DB352E174D3AA3D262002F5065 (Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* __this, CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* ___output0, const RuntimeMethod* method) 
{
	{
		// if (Scene != 0) {
		int32_t L_0;
		L_0 = Annotation_get_Scene_mB374E189EA9777DEE049D86891BA93657BDD9303_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// output.WriteRawTag(8);
		CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* L_1 = ___output0;
		NullCheck(L_1);
		CodedOutputStream_WriteRawTag_m73DA7A01D5AA96250E25B889663888AAAD52A4E7(L_1, (uint8_t)8, NULL);
		// output.WriteEnum((int) Scene);
		CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* L_2 = ___output0;
		int32_t L_3;
		L_3 = Annotation_get_Scene_mB374E189EA9777DEE049D86891BA93657BDD9303_inline(__this, NULL);
		NullCheck(L_2);
		CodedOutputStream_WriteEnum_m11950773A9F2FC2E4EDCFEA2B2779E66855CF653(L_2, L_3, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Int32 Google.Android.PerformanceTuner.Annotation::CalculateSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Annotation_CalculateSize_mDDD7D0093A70221DB18AE9167897B6AEE3D2C4E3 (Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int size = 0;
		V_0 = 0;
		// if (Scene != 0) {
		int32_t L_0;
		L_0 = Annotation_get_Scene_mB374E189EA9777DEE049D86891BA93657BDD9303_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// size += 1 + pb::CodedOutputStream.ComputeEnumSize((int) Scene);
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = Annotation_get_Scene_mB374E189EA9777DEE049D86891BA93657BDD9303_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = CodedOutputStream_ComputeEnumSize_mA1836D9E8169C256E0EF161A0A7CA86FE3CE0402(L_2, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_add(1, L_3))));
	}

IL_001a:
	{
		// return size;
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void Google.Android.PerformanceTuner.Annotation::MergeFrom(Google.Android.PerformanceTuner.Annotation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Annotation_MergeFrom_m826B1E2C5E554295E4FA01BE870418CC899D4875 (Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* __this, Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* ___other0, const RuntimeMethod* method) 
{
	{
		// if (other == null) {
		Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* L_0 = ___other0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// if (other.Scene != 0) {
		Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* L_1 = ___other0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Annotation_get_Scene_mB374E189EA9777DEE049D86891BA93657BDD9303_inline(L_1, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// Scene = other.Scene;
		Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* L_3 = ___other0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Annotation_get_Scene_mB374E189EA9777DEE049D86891BA93657BDD9303_inline(L_3, NULL);
		Annotation_set_Scene_mE96CE6727999DB83664E911B2F1D557E4DD20CBD_inline(__this, L_4, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void Google.Android.PerformanceTuner.Annotation::MergeFrom(Google.Protobuf.CodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Annotation_MergeFrom_mA06817FC5717CC4D7EB2B2A369A4DC4B142DB3C2 (Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* __this, CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* ___input0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		goto IL_001a;
	}

IL_0002:
	{
		uint32_t L_0 = V_0;
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			goto IL_000e;
		}
	}
	{
		// input.SkipLastField();
		CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* L_1 = ___input0;
		NullCheck(L_1);
		CodedInputStream_SkipLastField_mBFF9AF6970A4B812B9CE254B4AD5944EA3C9FCC5(L_1, NULL);
		// break;
		goto IL_001a;
	}

IL_000e:
	{
		// scene_ = (global::Google.Android.PerformanceTuner.Scene) input.ReadEnum();
		CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* L_2 = ___input0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = CodedInputStream_ReadEnum_mBD44FB279BCBAEF5C48F53092864C99A44360561(L_2, NULL);
		__this->___scene__2 = L_3;
	}

IL_001a:
	{
		// while ((tag = input.ReadTag()) != 0) {
		CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* L_4 = ___input0;
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = CodedInputStream_ReadTag_m5E3B124AC3D26CC786F4B15591C0D929E9013199(L_4, NULL);
		uint32_t L_6 = L_5;
		V_0 = L_6;
		if (L_6)
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Google.Android.PerformanceTuner.Annotation::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Annotation__cctor_mC95D63A30CEE22B6D105082755788EF4A8EB9F2B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t6531FECA14929B6C85781801964CA96B8970328F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1__ctor_m99F66ED13EEC24554CA6E2FD204FD5D68375D131_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1_t6001DE92B7B0DD22B06F4B1A0C2D3FB655F37E4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__24_0_m0880DF9A37F16B698724971F7B1A3574271BF0A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t525AE29AE5B5EE1A54D596A4DBA08314E97359FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<Annotation> _parser = new pb::MessageParser<Annotation>(() => new Annotation());
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t525AE29AE5B5EE1A54D596A4DBA08314E97359FD_il2cpp_TypeInfo_var);
		U3CU3Ec_t525AE29AE5B5EE1A54D596A4DBA08314E97359FD* L_0 = ((U3CU3Ec_t525AE29AE5B5EE1A54D596A4DBA08314E97359FD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t525AE29AE5B5EE1A54D596A4DBA08314E97359FD_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t6531FECA14929B6C85781801964CA96B8970328F* L_1 = (Func_1_t6531FECA14929B6C85781801964CA96B8970328F*)il2cpp_codegen_object_new(Func_1_t6531FECA14929B6C85781801964CA96B8970328F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_1__ctor_mE6ED9EBC61F82502E78F509CEE3FB26677681711(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__24_0_m0880DF9A37F16B698724971F7B1A3574271BF0A5_RuntimeMethod_var), NULL);
		MessageParser_1_t6001DE92B7B0DD22B06F4B1A0C2D3FB655F37E4C* L_2 = (MessageParser_1_t6001DE92B7B0DD22B06F4B1A0C2D3FB655F37E4C*)il2cpp_codegen_object_new(MessageParser_1_t6001DE92B7B0DD22B06F4B1A0C2D3FB655F37E4C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MessageParser_1__ctor_m99F66ED13EEC24554CA6E2FD204FD5D68375D131(L_2, L_1, MessageParser_1__ctor_m99F66ED13EEC24554CA6E2FD204FD5D68375D131_RuntimeMethod_var);
		((Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19_StaticFields*)il2cpp_codegen_static_fields_for(Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19_il2cpp_TypeInfo_var))->____parser_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19_StaticFields*)il2cpp_codegen_static_fields_for(Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19_il2cpp_TypeInfo_var))->____parser_0), (void*)L_2);
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
// System.Void Google.Android.PerformanceTuner.Annotation/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mBBD907CB6F1A314F3A67027E738209D4E857F7FB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t525AE29AE5B5EE1A54D596A4DBA08314E97359FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t525AE29AE5B5EE1A54D596A4DBA08314E97359FD* L_0 = (U3CU3Ec_t525AE29AE5B5EE1A54D596A4DBA08314E97359FD*)il2cpp_codegen_object_new(U3CU3Ec_t525AE29AE5B5EE1A54D596A4DBA08314E97359FD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mF0F260281BFB1693B98A15EA6737CA37E646C8FB(L_0, NULL);
		((U3CU3Ec_t525AE29AE5B5EE1A54D596A4DBA08314E97359FD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t525AE29AE5B5EE1A54D596A4DBA08314E97359FD_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t525AE29AE5B5EE1A54D596A4DBA08314E97359FD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t525AE29AE5B5EE1A54D596A4DBA08314E97359FD_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Google.Android.PerformanceTuner.Annotation/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF0F260281BFB1693B98A15EA6737CA37E646C8FB (U3CU3Ec_t525AE29AE5B5EE1A54D596A4DBA08314E97359FD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Google.Android.PerformanceTuner.Annotation Google.Android.PerformanceTuner.Annotation/<>c::<.cctor>b__24_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* U3CU3Ec_U3C_cctorU3Eb__24_0_m0880DF9A37F16B698724971F7B1A3574271BF0A5 (U3CU3Ec_t525AE29AE5B5EE1A54D596A4DBA08314E97359FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<Annotation> _parser = new pb::MessageParser<Annotation>(() => new Annotation());
		Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* L_0 = (Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19*)il2cpp_codegen_object_new(Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Annotation__ctor_mF53028360428163DF22AC3A25EFC9EA3650B24A7(L_0, NULL);
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
// Google.Protobuf.MessageParser`1<Google.Android.PerformanceTuner.FidelityParams> Google.Android.PerformanceTuner.FidelityParams::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_1_t5AA61E459FCD6A79C51B4B48507735C508F6951A* FidelityParams_get_Parser_m011C3B9E82D24F24061016C21239EC783F7D4FE7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static pb::MessageParser<FidelityParams> Parser { get { return _parser; } }
		il2cpp_codegen_runtime_class_init_inline(FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17_il2cpp_TypeInfo_var);
		MessageParser_1_t5AA61E459FCD6A79C51B4B48507735C508F6951A* L_0 = ((FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17_StaticFields*)il2cpp_codegen_static_fields_for(FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17_il2cpp_TypeInfo_var))->____parser_0;
		return L_0;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Android.PerformanceTuner.FidelityParams::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* FidelityParams_get_Descriptor_mBEDAC79896994C81DCB7231D7D3F549F6DE72C64 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DevTuningforkReflection_t1BCD735A96FA69F27B367692E27C35ACBF692615_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return global::Google.Android.PerformanceTuner.DevTuningforkReflection.Descriptor.MessageTypes[1]; }
		il2cpp_codegen_runtime_class_init_inline(DevTuningforkReflection_t1BCD735A96FA69F27B367692E27C35ACBF692615_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0;
		L_0 = DevTuningforkReflection_get_Descriptor_m48851C1A9C0CCE683909BB83112B19C664D1A946_inline(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = FileDescriptor_get_MessageTypes_m0FB1C458BB323A507214648AC7944A9FBE4D3E78_inline(L_0, NULL);
		NullCheck(L_1);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_2;
		L_2 = InterfaceFuncInvoker1< MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Item(System.Int32) */, IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var, L_1, 1);
		return L_2;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Android.PerformanceTuner.FidelityParams::pb::Google.Protobuf.IMessage.get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* FidelityParams_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m075DD7081C80DA6BD68A3FF17AB8FA42753DD932 (FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return Descriptor; }
		il2cpp_codegen_runtime_class_init_inline(FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17_il2cpp_TypeInfo_var);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0;
		L_0 = FidelityParams_get_Descriptor_mBEDAC79896994C81DCB7231D7D3F549F6DE72C64(NULL);
		return L_0;
	}
}
// System.Void Google.Android.PerformanceTuner.FidelityParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FidelityParams__ctor_mCF5D8C68C1C178027CE89F77C3ADC86BCFF6621D (FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* __this, const RuntimeMethod* method) 
{
	{
		// public FidelityParams() {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void Google.Android.PerformanceTuner.FidelityParams::.ctor(Google.Android.PerformanceTuner.FidelityParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FidelityParams__ctor_m632DFEE497F1C4EE7CD25E3A5849E9C263C913DB (FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* __this, FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* ___other0, const RuntimeMethod* method) 
{
	{
		// public FidelityParams(FidelityParams other) : this() {
		FidelityParams__ctor_mCF5D8C68C1C178027CE89F77C3ADC86BCFF6621D(__this, NULL);
		// level_ = other.level_;
		FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* L_0 = ___other0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___level__2;
		__this->___level__2 = L_1;
		// }
		return;
	}
}
// Google.Android.PerformanceTuner.FidelityParams Google.Android.PerformanceTuner.FidelityParams::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* FidelityParams_Clone_m0448ED2A02B6F72A1F22C91E3225FB0F23A78063 (FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new FidelityParams(this);
		FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* L_0 = (FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17*)il2cpp_codegen_object_new(FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		FidelityParams__ctor_m632DFEE497F1C4EE7CD25E3A5849E9C263C913DB(L_0, __this, NULL);
		return L_0;
	}
}
// System.Int32 Google.Android.PerformanceTuner.FidelityParams::get_Level()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FidelityParams_get_Level_m02AD91F9EE35606C952AC5A09EFE67903EBDFB74 (FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* __this, const RuntimeMethod* method) 
{
	{
		// get { return level_; }
		int32_t L_0 = __this->___level__2;
		return L_0;
	}
}
// System.Void Google.Android.PerformanceTuner.FidelityParams::set_Level(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FidelityParams_set_Level_m6E928790F7B43C0FA61D296D34D29758719104BE (FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// level_ = value;
		int32_t L_0 = ___value0;
		__this->___level__2 = L_0;
		// }
		return;
	}
}
// System.Boolean Google.Android.PerformanceTuner.FidelityParams::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FidelityParams_Equals_mB7A2B501BAAC0603EA526978B59B96BFDFD3A234 (FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Equals(other as FidelityParams);
		RuntimeObject* L_0 = ___other0;
		bool L_1;
		L_1 = FidelityParams_Equals_m0FC9834A15023FCE3931718BB07F665DB6011F98(__this, ((FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17*)IsInstSealed((RuntimeObject*)L_0, FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// System.Boolean Google.Android.PerformanceTuner.FidelityParams::Equals(Google.Android.PerformanceTuner.FidelityParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FidelityParams_Equals_m0FC9834A15023FCE3931718BB07F665DB6011F98 (FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* __this, FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* ___other0, const RuntimeMethod* method) 
{
	{
		// if (ReferenceEquals(other, null)) {
		FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(other, this)) {
		FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* L_1 = ___other0;
		if ((!(((RuntimeObject*)(FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17*)L_1) == ((RuntimeObject*)(FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17*)__this))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// if (Level != other.Level) return false;
		int32_t L_2;
		L_2 = FidelityParams_get_Level_m02AD91F9EE35606C952AC5A09EFE67903EBDFB74_inline(__this, NULL);
		FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* L_3 = ___other0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = FidelityParams_get_Level_m02AD91F9EE35606C952AC5A09EFE67903EBDFB74_inline(L_3, NULL);
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_001b;
		}
	}
	{
		// if (Level != other.Level) return false;
		return (bool)0;
	}

IL_001b:
	{
		// return true;
		return (bool)1;
	}
}
// System.Int32 Google.Android.PerformanceTuner.FidelityParams::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FidelityParams_GetHashCode_mFE2084691687DA0980B244E620B9B35CE895145E (FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int hash = 1;
		V_0 = 1;
		// if (Level != 0) hash ^= Level.GetHashCode();
		int32_t L_0;
		L_0 = FidelityParams_get_Level_m02AD91F9EE35606C952AC5A09EFE67903EBDFB74_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// if (Level != 0) hash ^= Level.GetHashCode();
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = FidelityParams_get_Level_m02AD91F9EE35606C952AC5A09EFE67903EBDFB74_inline(__this, NULL);
		V_1 = L_2;
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_1), NULL);
		V_0 = ((int32_t)(L_1^L_3));
	}

IL_001b:
	{
		// return hash;
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.String Google.Android.PerformanceTuner.FidelityParams::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FidelityParams_ToString_m69A07CD99E26F96C9AC096E42F069FAC0CB6884B (FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return pb::JsonFormatter.ToDiagnosticString(this);
		il2cpp_codegen_runtime_class_init_inline(JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = JsonFormatter_ToDiagnosticString_mC6580DDBB77AE9E5DDDE29D40761DE2250D3EC89(__this, NULL);
		return L_0;
	}
}
// System.Void Google.Android.PerformanceTuner.FidelityParams::WriteTo(Google.Protobuf.CodedOutputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FidelityParams_WriteTo_mFFC4FF7C5F360431449D19D098C1DDAD8B20BD29 (FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* __this, CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* ___output0, const RuntimeMethod* method) 
{
	{
		// if (Level != 0) {
		int32_t L_0;
		L_0 = FidelityParams_get_Level_m02AD91F9EE35606C952AC5A09EFE67903EBDFB74_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// output.WriteRawTag(8);
		CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* L_1 = ___output0;
		NullCheck(L_1);
		CodedOutputStream_WriteRawTag_m73DA7A01D5AA96250E25B889663888AAAD52A4E7(L_1, (uint8_t)8, NULL);
		// output.WriteInt32(Level);
		CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* L_2 = ___output0;
		int32_t L_3;
		L_3 = FidelityParams_get_Level_m02AD91F9EE35606C952AC5A09EFE67903EBDFB74_inline(__this, NULL);
		NullCheck(L_2);
		CodedOutputStream_WriteInt32_m04AF441F8150B4EF8AA6FD12E98B35F8CC888E04(L_2, L_3, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Int32 Google.Android.PerformanceTuner.FidelityParams::CalculateSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FidelityParams_CalculateSize_mD4FC02AE8D19C325A91F0BB4EB74924DD767E657 (FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int size = 0;
		V_0 = 0;
		// if (Level != 0) {
		int32_t L_0;
		L_0 = FidelityParams_get_Level_m02AD91F9EE35606C952AC5A09EFE67903EBDFB74_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// size += 1 + pb::CodedOutputStream.ComputeInt32Size(Level);
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = FidelityParams_get_Level_m02AD91F9EE35606C952AC5A09EFE67903EBDFB74_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = CodedOutputStream_ComputeInt32Size_m62CF15C91A41AC51B291BCD8EA973CF410D63B33(L_2, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_add(1, L_3))));
	}

IL_001a:
	{
		// return size;
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void Google.Android.PerformanceTuner.FidelityParams::MergeFrom(Google.Android.PerformanceTuner.FidelityParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FidelityParams_MergeFrom_m070F56F1C5AECB081FCA6FAB940F0D0D1E621961 (FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* __this, FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* ___other0, const RuntimeMethod* method) 
{
	{
		// if (other == null) {
		FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* L_0 = ___other0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// if (other.Level != 0) {
		FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* L_1 = ___other0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = FidelityParams_get_Level_m02AD91F9EE35606C952AC5A09EFE67903EBDFB74_inline(L_1, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// Level = other.Level;
		FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* L_3 = ___other0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = FidelityParams_get_Level_m02AD91F9EE35606C952AC5A09EFE67903EBDFB74_inline(L_3, NULL);
		FidelityParams_set_Level_m6E928790F7B43C0FA61D296D34D29758719104BE_inline(__this, L_4, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void Google.Android.PerformanceTuner.FidelityParams::MergeFrom(Google.Protobuf.CodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FidelityParams_MergeFrom_mF3BE0846ADC9835C0C164075863025F444C01E76 (FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* __this, CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* ___input0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		goto IL_001a;
	}

IL_0002:
	{
		uint32_t L_0 = V_0;
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			goto IL_000e;
		}
	}
	{
		// input.SkipLastField();
		CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* L_1 = ___input0;
		NullCheck(L_1);
		CodedInputStream_SkipLastField_mBFF9AF6970A4B812B9CE254B4AD5944EA3C9FCC5(L_1, NULL);
		// break;
		goto IL_001a;
	}

IL_000e:
	{
		// Level = input.ReadInt32();
		CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* L_2 = ___input0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = CodedInputStream_ReadInt32_m5E54CA34B6B643C7CEAF7E30B376AEE754BE86BF(L_2, NULL);
		FidelityParams_set_Level_m6E928790F7B43C0FA61D296D34D29758719104BE_inline(__this, L_3, NULL);
	}

IL_001a:
	{
		// while ((tag = input.ReadTag()) != 0) {
		CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* L_4 = ___input0;
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = CodedInputStream_ReadTag_m5E3B124AC3D26CC786F4B15591C0D929E9013199(L_4, NULL);
		uint32_t L_6 = L_5;
		V_0 = L_6;
		if (L_6)
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Google.Android.PerformanceTuner.FidelityParams::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FidelityParams__cctor_m3C2ACE0E4CD407F90395FE34AFCE0F397E1282C6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t8000DF962808DD28C5F08125B00E7012CEC78782_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1__ctor_m3CA59E56D81B66FF2EDB8286373E0B9D5D4C7854_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1_t5AA61E459FCD6A79C51B4B48507735C508F6951A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__24_0_mD920D17CE40BAD49A24FD8822B312331943B86D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA8048C04E3D1CDD4A2BDA66F0D8F0F7BDC29722B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<FidelityParams> _parser = new pb::MessageParser<FidelityParams>(() => new FidelityParams());
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA8048C04E3D1CDD4A2BDA66F0D8F0F7BDC29722B_il2cpp_TypeInfo_var);
		U3CU3Ec_tA8048C04E3D1CDD4A2BDA66F0D8F0F7BDC29722B* L_0 = ((U3CU3Ec_tA8048C04E3D1CDD4A2BDA66F0D8F0F7BDC29722B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA8048C04E3D1CDD4A2BDA66F0D8F0F7BDC29722B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t8000DF962808DD28C5F08125B00E7012CEC78782* L_1 = (Func_1_t8000DF962808DD28C5F08125B00E7012CEC78782*)il2cpp_codegen_object_new(Func_1_t8000DF962808DD28C5F08125B00E7012CEC78782_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_1__ctor_mBBA62B77EC4C06427D036F12089C0DB47B5E1404(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__24_0_mD920D17CE40BAD49A24FD8822B312331943B86D2_RuntimeMethod_var), NULL);
		MessageParser_1_t5AA61E459FCD6A79C51B4B48507735C508F6951A* L_2 = (MessageParser_1_t5AA61E459FCD6A79C51B4B48507735C508F6951A*)il2cpp_codegen_object_new(MessageParser_1_t5AA61E459FCD6A79C51B4B48507735C508F6951A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MessageParser_1__ctor_m3CA59E56D81B66FF2EDB8286373E0B9D5D4C7854(L_2, L_1, MessageParser_1__ctor_m3CA59E56D81B66FF2EDB8286373E0B9D5D4C7854_RuntimeMethod_var);
		((FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17_StaticFields*)il2cpp_codegen_static_fields_for(FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17_il2cpp_TypeInfo_var))->____parser_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17_StaticFields*)il2cpp_codegen_static_fields_for(FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17_il2cpp_TypeInfo_var))->____parser_0), (void*)L_2);
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
// System.Void Google.Android.PerformanceTuner.FidelityParams/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mFE56649333B43556E579B49E833200E282127FB7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA8048C04E3D1CDD4A2BDA66F0D8F0F7BDC29722B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA8048C04E3D1CDD4A2BDA66F0D8F0F7BDC29722B* L_0 = (U3CU3Ec_tA8048C04E3D1CDD4A2BDA66F0D8F0F7BDC29722B*)il2cpp_codegen_object_new(U3CU3Ec_tA8048C04E3D1CDD4A2BDA66F0D8F0F7BDC29722B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mA0FEB3A7E2BEF92A5B49995DD485431DFCCD14E9(L_0, NULL);
		((U3CU3Ec_tA8048C04E3D1CDD4A2BDA66F0D8F0F7BDC29722B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA8048C04E3D1CDD4A2BDA66F0D8F0F7BDC29722B_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA8048C04E3D1CDD4A2BDA66F0D8F0F7BDC29722B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA8048C04E3D1CDD4A2BDA66F0D8F0F7BDC29722B_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Google.Android.PerformanceTuner.FidelityParams/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA0FEB3A7E2BEF92A5B49995DD485431DFCCD14E9 (U3CU3Ec_tA8048C04E3D1CDD4A2BDA66F0D8F0F7BDC29722B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Google.Android.PerformanceTuner.FidelityParams Google.Android.PerformanceTuner.FidelityParams/<>c::<.cctor>b__24_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* U3CU3Ec_U3C_cctorU3Eb__24_0_mD920D17CE40BAD49A24FD8822B312331943B86D2 (U3CU3Ec_tA8048C04E3D1CDD4A2BDA66F0D8F0F7BDC29722B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<FidelityParams> _parser = new pb::MessageParser<FidelityParams>(() => new FidelityParams());
		FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* L_0 = (FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17*)il2cpp_codegen_object_new(FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		FidelityParams__ctor_mCF5D8C68C1C178027CE89F77C3ADC86BCFF6621D(L_0, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageParser_1_t6001DE92B7B0DD22B06F4B1A0C2D3FB655F37E4C* Annotation_get_Parser_m8596CFE52ED80AACA94A79B61E30CAFE417C1C75_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static pb::MessageParser<Annotation> Parser { get { return _parser; } }
		il2cpp_codegen_runtime_class_init_inline(Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19_il2cpp_TypeInfo_var);
		MessageParser_1_t6001DE92B7B0DD22B06F4B1A0C2D3FB655F37E4C* L_0 = ((Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19_StaticFields*)il2cpp_codegen_static_fields_for(Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19_il2cpp_TypeInfo_var))->____parser_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageParser_1_t5AA61E459FCD6A79C51B4B48507735C508F6951A* FidelityParams_get_Parser_m011C3B9E82D24F24061016C21239EC783F7D4FE7_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static pb::MessageParser<FidelityParams> Parser { get { return _parser; } }
		il2cpp_codegen_runtime_class_init_inline(FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17_il2cpp_TypeInfo_var);
		MessageParser_1_t5AA61E459FCD6A79C51B4B48507735C508F6951A* L_0 = ((FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17_StaticFields*)il2cpp_codegen_static_fields_for(FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17_il2cpp_TypeInfo_var))->____parser_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* DevTuningforkReflection_get_Descriptor_m48851C1A9C0CCE683909BB83112B19C664D1A946_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DevTuningforkReflection_t1BCD735A96FA69F27B367692E27C35ACBF692615_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return descriptor; }
		il2cpp_codegen_runtime_class_init_inline(DevTuningforkReflection_t1BCD735A96FA69F27B367692E27C35ACBF692615_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0 = ((DevTuningforkReflection_t1BCD735A96FA69F27B367692E27C35ACBF692615_StaticFields*)il2cpp_codegen_static_fields_for(DevTuningforkReflection_t1BCD735A96FA69F27B367692E27C35ACBF692615_il2cpp_TypeInfo_var))->___descriptor_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_MessageTypes_m0FB1C458BB323A507214648AC7944A9FBE4D3E78_inline (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMessageTypesU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Annotation_get_Scene_mB374E189EA9777DEE049D86891BA93657BDD9303_inline (Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* __this, const RuntimeMethod* method) 
{
	{
		// get { return scene_; }
		int32_t L_0 = __this->___scene__2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Annotation_set_Scene_mE96CE6727999DB83664E911B2F1D557E4DD20CBD_inline (Annotation_t42349AACE649F7A6343C25542A3E13C5EF25BF19* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// scene_ = value;
		int32_t L_0 = ___value0;
		__this->___scene__2 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FidelityParams_get_Level_m02AD91F9EE35606C952AC5A09EFE67903EBDFB74_inline (FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* __this, const RuntimeMethod* method) 
{
	{
		// get { return level_; }
		int32_t L_0 = __this->___level__2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FidelityParams_set_Level_m6E928790F7B43C0FA61D296D34D29758719104BE_inline (FidelityParams_t877CAC3D1409E1DEC76CBC74B9B28FE698AC7E17* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// level_ = value;
		int32_t L_0 = ___value0;
		__this->___level__2 = L_0;
		// }
		return;
	}
}
