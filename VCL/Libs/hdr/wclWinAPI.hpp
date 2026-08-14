// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wclWinAPI.pas' rev: 30.00 (Windows)

#ifndef WclwinapiHPP
#define WclwinapiHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.WinSock.hpp>
#include <Winapi.ActiveX.hpp>
#include <wclSync.hpp>
#include <Winapi.msxml.hpp>

//-- user supplied -----------------------------------------------------------
#ifdef _WIN64
  #pragma comment(lib, "ws2_32.a")
#else
  #pragma comment(lib, "ws2_32.lib")
#endif

namespace Wclwinapi
{
//-- forward type declarations -----------------------------------------------
struct CM_NOTIFY_FILTER;
struct CM_NOTIFY_EVENT_DATA;
struct DEVPROPKEY;
struct SERIAL_LINE_CONTROL;
struct SERIAL_CHARS;
struct SERIAL_HANDFLOW;
struct DateTime;
struct TimeSpan;
struct EventRegistrationToken;
struct RoundTripTimeStatistics;
struct BandwidthStatistics;
struct Color;
struct Point;
struct Rect;
struct Size;
__interface IInspectable;
typedef System::DelphiInterface<IInspectable> _di_IInspectable;
__interface IActivationFactory;
typedef System::DelphiInterface<IActivationFactory> _di_IActivationFactory;
__interface IHSTRINGVectorView;
typedef System::DelphiInterface<IHSTRINGVectorView> _di_IHSTRINGVectorView;
__interface IUInt32Reference;
typedef System::DelphiInterface<IUInt32Reference> _di_IUInt32Reference;
__interface IIntReference;
typedef System::DelphiInterface<IIntReference> _di_IIntReference;
__interface IUInt64Reference;
typedef System::DelphiInterface<IUInt64Reference> _di_IUInt64Reference;
__interface IDateTimeReference;
typedef System::DelphiInterface<IDateTimeReference> _di_IDateTimeReference;
__interface ITimeSpanReference;
typedef System::DelphiInterface<ITimeSpanReference> _di_ITimeSpanReference;
__interface IByteReference;
typedef System::DelphiInterface<IByteReference> _di_IByteReference;
__interface IShortReference;
typedef System::DelphiInterface<IShortReference> _di_IShortReference;
__interface IRandomAccessStreamReference;
typedef System::DelphiInterface<IRandomAccessStreamReference> _di_IRandomAccessStreamReference;
__interface IHSTRINGIterator;
typedef System::DelphiInterface<IHSTRINGIterator> _di_IHSTRINGIterator;
__interface IHSTRINGInspectableKeyValuePairIterator;
typedef System::DelphiInterface<IHSTRINGInspectableKeyValuePairIterator> _di_IHSTRINGInspectableKeyValuePairIterator;
__interface IHSTRINGIterable;
typedef System::DelphiInterface<IHSTRINGIterable> _di_IHSTRINGIterable;
__interface IHSTRINGInspectableKeyValuePairIterable;
typedef System::DelphiInterface<IHSTRINGInspectableKeyValuePairIterable> _di_IHSTRINGInspectableKeyValuePairIterable;
__interface IBuffer;
typedef System::DelphiInterface<IBuffer> _di_IBuffer;
__interface IHSTRINGMapView;
typedef System::DelphiInterface<IHSTRINGMapView> _di_IHSTRINGMapView;
__interface IRandomAccessStreamWithContentType;
typedef System::DelphiInterface<IRandomAccessStreamWithContentType> _di_IRandomAccessStreamWithContentType;
__interface IRandomAccessStreamWithContentTypeAsyncOperationCompletedHandler;
typedef System::DelphiInterface<IRandomAccessStreamWithContentTypeAsyncOperationCompletedHandler> _di_IRandomAccessStreamWithContentTypeAsyncOperationCompletedHandler;
__interface IRandomAccessStreamWithContentTypeAsyncOperation;
typedef System::DelphiInterface<IRandomAccessStreamWithContentTypeAsyncOperation> _di_IRandomAccessStreamWithContentTypeAsyncOperation;
__interface IPropertySet;
typedef System::DelphiInterface<IPropertySet> _di_IPropertySet;
__interface IHSTRINGInspectableKeyValuePair;
typedef System::DelphiInterface<IHSTRINGInspectableKeyValuePair> _di_IHSTRINGInspectableKeyValuePair;
__interface IUint32AsyncOperationCompletedHandler;
typedef System::DelphiInterface<IUint32AsyncOperationCompletedHandler> _di_IUint32AsyncOperationCompletedHandler;
__interface IUint32AsyncOperation;
typedef System::DelphiInterface<IUint32AsyncOperation> _di_IUint32AsyncOperation;
__interface IInspectableAsyncOperationCompletedHandler;
typedef System::DelphiInterface<IInspectableAsyncOperationCompletedHandler> _di_IInspectableAsyncOperationCompletedHandler;
__interface IInspectableAsyncOperation;
typedef System::DelphiInterface<IInspectableAsyncOperation> _di_IInspectableAsyncOperation;
__interface IPropertySetAsyncOperationCompletedHandler;
typedef System::DelphiInterface<IPropertySetAsyncOperationCompletedHandler> _di_IPropertySetAsyncOperationCompletedHandler;
__interface IPropertySetAsyncOperation;
typedef System::DelphiInterface<IPropertySetAsyncOperation> _di_IPropertySetAsyncOperation;
__interface IRandomAccessStreamReferenceAsyncOperationCompletedHandler;
typedef System::DelphiInterface<IRandomAccessStreamReferenceAsyncOperationCompletedHandler> _di_IRandomAccessStreamReferenceAsyncOperationCompletedHandler;
__interface IRandomAccessStreamReferenceAsyncOperation;
typedef System::DelphiInterface<IRandomAccessStreamReferenceAsyncOperation> _di_IRandomAccessStreamReferenceAsyncOperation;
__interface IUser;
typedef System::DelphiInterface<IUser> _di_IUser;
__interface IPropertyValue;
typedef System::DelphiInterface<IPropertyValue> _di_IPropertyValue;
__interface IPropertyValueStatics;
typedef System::DelphiInterface<IPropertyValueStatics> _di_IPropertyValueStatics;
__interface IConnectionCost;
typedef System::DelphiInterface<IConnectionCost> _di_IConnectionCost;
__interface IDataPlanUsage;
typedef System::DelphiInterface<IDataPlanUsage> _di_IDataPlanUsage;
__interface IDataPlanStatus;
typedef System::DelphiInterface<IDataPlanStatus> _di_IDataPlanStatus;
__interface IDataUsage;
typedef System::DelphiInterface<IDataUsage> _di_IDataUsage;
__interface INetworkSecuritySettings;
typedef System::DelphiInterface<INetworkSecuritySettings> _di_INetworkSecuritySettings;
__interface IConnectionProfile;
typedef System::DelphiInterface<IConnectionProfile> _di_IConnectionProfile;
__interface IConnectionProfileAsyncOperation;
typedef System::DelphiInterface<IConnectionProfileAsyncOperation> _di_IConnectionProfileAsyncOperation;
__interface IConnectionProfileAsyncOperationCompletedHandler;
typedef System::DelphiInterface<IConnectionProfileAsyncOperationCompletedHandler> _di_IConnectionProfileAsyncOperationCompletedHandler;
__interface INetworkItem;
typedef System::DelphiInterface<INetworkItem> _di_INetworkItem;
__interface INetworkAdapter;
typedef System::DelphiInterface<INetworkAdapter> _di_INetworkAdapter;
__interface IIPInformation;
typedef System::DelphiInterface<IIPInformation> _di_IIPInformation;
__interface IHostName;
typedef System::DelphiInterface<IHostName> _di_IHostName;
__interface IEndpointPair;
typedef System::DelphiInterface<IEndpointPair> _di_IEndpointPair;
__interface IEndpointPairIterator;
typedef System::DelphiInterface<IEndpointPairIterator> _di_IEndpointPairIterator;
__interface IEndpointPairVectorView;
typedef System::DelphiInterface<IEndpointPairVectorView> _di_IEndpointPairVectorView;
__interface IEnclosureLocation;
typedef System::DelphiInterface<IEnclosureLocation> _di_IEnclosureLocation;
__interface IDeviceInformationUpdate;
typedef System::DelphiInterface<IDeviceInformationUpdate> _di_IDeviceInformationUpdate;
__interface IDeviceThumbnailAsyncOperationCompletedHandler;
typedef System::DelphiInterface<IDeviceThumbnailAsyncOperationCompletedHandler> _di_IDeviceThumbnailAsyncOperationCompletedHandler;
__interface IDeviceThumbnailAsyncOperation;
typedef System::DelphiInterface<IDeviceThumbnailAsyncOperation> _di_IDeviceThumbnailAsyncOperation;
__interface IDeviceInformation;
typedef System::DelphiInterface<IDeviceInformation> _di_IDeviceInformation;
__interface IDeviceInformationAsyncOperationCompletedHandler;
typedef System::DelphiInterface<IDeviceInformationAsyncOperationCompletedHandler> _di_IDeviceInformationAsyncOperationCompletedHandler;
__interface IDeviceInformationAsyncOperation;
typedef System::DelphiInterface<IDeviceInformationAsyncOperation> _di_IDeviceInformationAsyncOperation;
__interface IDeviceInformationCollectionAsyncOperationCompletedHandler;
typedef System::DelphiInterface<IDeviceInformationCollectionAsyncOperationCompletedHandler> _di_IDeviceInformationCollectionAsyncOperationCompletedHandler;
__interface IDeviceInformationVectorView;
typedef System::DelphiInterface<IDeviceInformationVectorView> _di_IDeviceInformationVectorView;
__interface IDeviceInformationCollectionAsyncOperation;
typedef System::DelphiInterface<IDeviceInformationCollectionAsyncOperation> _di_IDeviceInformationCollectionAsyncOperation;
__interface IDeviceInformationEventHandler;
typedef System::DelphiInterface<IDeviceInformationEventHandler> _di_IDeviceInformationEventHandler;
__interface IDeviceInformationUpdateEventHandler;
typedef System::DelphiInterface<IDeviceInformationUpdateEventHandler> _di_IDeviceInformationUpdateEventHandler;
__interface IDeviceWatcherEventHandler;
typedef System::DelphiInterface<IDeviceWatcherEventHandler> _di_IDeviceWatcherEventHandler;
__interface IDeviceWatcher;
typedef System::DelphiInterface<IDeviceWatcher> _di_IDeviceWatcher;
__interface IDeviceInformationStatics;
typedef System::DelphiInterface<IDeviceInformationStatics> _di_IDeviceInformationStatics;
__interface IDeviceInformationStatics2;
typedef System::DelphiInterface<IDeviceInformationStatics2> _di_IDeviceInformationStatics2;
__interface ICredentialFactory;
typedef System::DelphiInterface<ICredentialFactory> _di_ICredentialFactory;
__interface IPasswordCredential;
typedef System::DelphiInterface<IPasswordCredential> _di_IPasswordCredential;
__interface IDeferral;
typedef System::DelphiInterface<IDeferral> _di_IDeferral;
__interface IHSTRINGVector;
typedef System::DelphiInterface<IHSTRINGVector> _di_IHSTRINGVector;
__interface IAsyncAction;
typedef System::DelphiInterface<IAsyncAction> _di_IAsyncAction;
__interface IAsyncActionCompletedHandler;
typedef System::DelphiInterface<IAsyncActionCompletedHandler> _di_IAsyncActionCompletedHandler;
__interface IBufferByteAccess;
typedef System::DelphiInterface<IBufferByteAccess> _di_IBufferByteAccess;
__interface IAsyncInfo;
typedef System::DelphiInterface<IAsyncInfo> _di_IAsyncInfo;
__interface IBufferVectorView;
typedef System::DelphiInterface<IBufferVectorView> _di_IBufferVectorView;
__interface IUInt32BufferMapView;
typedef System::DelphiInterface<IUInt32BufferMapView> _di_IUInt32BufferMapView;
__interface IRadioVectorView;
typedef System::DelphiInterface<IRadioVectorView> _di_IRadioVectorView;
__interface IRadioAsyncOperationCompletedHandler;
typedef System::DelphiInterface<IRadioAsyncOperationCompletedHandler> _di_IRadioAsyncOperationCompletedHandler;
__interface IRadioAccessStatusAsyncOperationCompletedHandler;
typedef System::DelphiInterface<IRadioAccessStatusAsyncOperationCompletedHandler> _di_IRadioAccessStatusAsyncOperationCompletedHandler;
__interface IRadioEventHandler;
typedef System::DelphiInterface<IRadioEventHandler> _di_IRadioEventHandler;
__interface IRadioStaticsAsyncOperationCompletedHandler;
typedef System::DelphiInterface<IRadioStaticsAsyncOperationCompletedHandler> _di_IRadioStaticsAsyncOperationCompletedHandler;
__interface IRadioAsyncOperation;
typedef System::DelphiInterface<IRadioAsyncOperation> _di_IRadioAsyncOperation;
__interface IRadioAccessStatusAsyncOperation;
typedef System::DelphiInterface<IRadioAccessStatusAsyncOperation> _di_IRadioAccessStatusAsyncOperation;
__interface IRadioStaticsAsyncOperation;
typedef System::DelphiInterface<IRadioStaticsAsyncOperation> _di_IRadioStaticsAsyncOperation;
__interface IRadio;
typedef System::DelphiInterface<IRadio> _di_IRadio;
__interface IRadioStatics;
typedef System::DelphiInterface<IRadioStatics> _di_IRadioStatics;
__interface IDeviceAccessChangedEventArgs;
typedef System::DelphiInterface<IDeviceAccessChangedEventArgs> _di_IDeviceAccessChangedEventArgs;
__interface IDeviceAccessInformationEventHandler;
typedef System::DelphiInterface<IDeviceAccessInformationEventHandler> _di_IDeviceAccessInformationEventHandler;
__interface IDeviceAccessInformation;
typedef System::DelphiInterface<IDeviceAccessInformation> _di_IDeviceAccessInformation;
__interface IDeviceAccessStatusAsyncOperationCompletedHandler;
typedef System::DelphiInterface<IDeviceAccessStatusAsyncOperationCompletedHandler> _di_IDeviceAccessStatusAsyncOperationCompletedHandler;
__interface IDeviceAccessStatusAsyncOperation;
typedef System::DelphiInterface<IDeviceAccessStatusAsyncOperation> _di_IDeviceAccessStatusAsyncOperation;
__interface IDataWriter;
typedef System::DelphiInterface<IDataWriter> _di_IDataWriter;
__interface IBufferAsyncOperationProgressHandler;
typedef System::DelphiInterface<IBufferAsyncOperationProgressHandler> _di_IBufferAsyncOperationProgressHandler;
__interface IBufferAsyncOperationWithProgressCompletedHandler;
typedef System::DelphiInterface<IBufferAsyncOperationWithProgressCompletedHandler> _di_IBufferAsyncOperationWithProgressCompletedHandler;
__interface IStreamAsyncOperationWithProgress;
typedef System::DelphiInterface<IStreamAsyncOperationWithProgress> _di_IStreamAsyncOperationWithProgress;
__interface IInputStream;
typedef System::DelphiInterface<IInputStream> _di_IInputStream;
__interface IUint32AsyncOperationProgressHandler;
typedef System::DelphiInterface<IUint32AsyncOperationProgressHandler> _di_IUint32AsyncOperationProgressHandler;
__interface IUInt32AsyncOperationWithProgressCompletedHandler;
typedef System::DelphiInterface<IUInt32AsyncOperationWithProgressCompletedHandler> _di_IUInt32AsyncOperationWithProgressCompletedHandler;
__interface IUint32AsyncOperationWithProgress;
typedef System::DelphiInterface<IUint32AsyncOperationWithProgress> _di_IUint32AsyncOperationWithProgress;
__interface IInspectableEventHandler;
typedef System::DelphiInterface<IInspectableEventHandler> _di_IInspectableEventHandler;
__interface IGuidAsyncOperationCompletedHandler;
typedef System::DelphiInterface<IGuidAsyncOperationCompletedHandler> _di_IGuidAsyncOperationCompletedHandler;
__interface IGuidAsyncOperation;
typedef System::DelphiInterface<IGuidAsyncOperation> _di_IGuidAsyncOperation;
__interface IBooleanAsyncOperationCompletedHandler;
typedef System::DelphiInterface<IBooleanAsyncOperationCompletedHandler> _di_IBooleanAsyncOperationCompletedHandler;
__interface IBooleanAsyncOperation;
typedef System::DelphiInterface<IBooleanAsyncOperation> _di_IBooleanAsyncOperation;
__interface IOutputStream;
typedef System::DelphiInterface<IOutputStream> _di_IOutputStream;
__interface IStreamSocketListenerControl;
typedef System::DelphiInterface<IStreamSocketListenerControl> _di_IStreamSocketListenerControl;
__interface IStreamSocketListenerControl2;
typedef System::DelphiInterface<IStreamSocketListenerControl2> _di_IStreamSocketListenerControl2;
__interface IStreamSocketListenerInformation;
typedef System::DelphiInterface<IStreamSocketListenerInformation> _di_IStreamSocketListenerInformation;
__interface IStreamSocketControl;
typedef System::DelphiInterface<IStreamSocketControl> _di_IStreamSocketControl;
__interface IStreamSocketInformation;
typedef System::DelphiInterface<IStreamSocketInformation> _di_IStreamSocketInformation;
__interface IStreamSocket;
typedef System::DelphiInterface<IStreamSocket> _di_IStreamSocket;
__interface IStreamSocket2;
typedef System::DelphiInterface<IStreamSocket2> _di_IStreamSocket2;
__interface ISocketActivityContext;
typedef System::DelphiInterface<ISocketActivityContext> _di_ISocketActivityContext;
__interface IStreamSocket3;
typedef System::DelphiInterface<IStreamSocket3> _di_IStreamSocket3;
__interface IStreamSocketListenerConnectionReceivedEventArgs;
typedef System::DelphiInterface<IStreamSocketListenerConnectionReceivedEventArgs> _di_IStreamSocketListenerConnectionReceivedEventArgs;
__interface IStreamSocketListenerConnectionReceivedEventHandler;
typedef System::DelphiInterface<IStreamSocketListenerConnectionReceivedEventHandler> _di_IStreamSocketListenerConnectionReceivedEventHandler;
__interface IStreamSocketListener;
typedef System::DelphiInterface<IStreamSocketListener> _di_IStreamSocketListener;
__interface IStreamSocketListener2;
typedef System::DelphiInterface<IStreamSocketListener2> _di_IStreamSocketListener2;
__interface IStreamSocketListener3;
typedef System::DelphiInterface<IStreamSocketListener3> _di_IStreamSocketListener3;
__interface IDeviceInformationPairing;
typedef System::DelphiInterface<IDeviceInformationPairing> _di_IDeviceInformationPairing;
__interface IDeviceInformation2;
typedef System::DelphiInterface<IDeviceInformation2> _di_IDeviceInformation2;
__interface IDevicePairingSettings;
typedef System::DelphiInterface<IDevicePairingSettings> _di_IDevicePairingSettings;
__interface IDeviceInformationCustomPairing;
typedef System::DelphiInterface<IDeviceInformationCustomPairing> _di_IDeviceInformationCustomPairing;
__interface IDeviceInformationPairing2;
typedef System::DelphiInterface<IDeviceInformationPairing2> _di_IDeviceInformationPairing2;
__interface IGUIDVectorView;
typedef System::DelphiInterface<IGUIDVectorView> _di_IGUIDVectorView;
__interface IGUIDVector;
typedef System::DelphiInterface<IGUIDVector> _di_IGUIDVector;
__interface IDevicePairingResultAsyncOperationCompletedHandler;
typedef System::DelphiInterface<IDevicePairingResultAsyncOperationCompletedHandler> _di_IDevicePairingResultAsyncOperationCompletedHandler;
__interface IDevicePairingRequestedEventHandler;
typedef System::DelphiInterface<IDevicePairingRequestedEventHandler> _di_IDevicePairingRequestedEventHandler;
__interface IDeviceUnpairingResultAsyncOperationCompletedHandler;
typedef System::DelphiInterface<IDeviceUnpairingResultAsyncOperationCompletedHandler> _di_IDeviceUnpairingResultAsyncOperationCompletedHandler;
__interface IDevicePairingResultAsyncOperation;
typedef System::DelphiInterface<IDevicePairingResultAsyncOperation> _di_IDevicePairingResultAsyncOperation;
__interface IDeviceUnpairingResultAsyncOperation;
typedef System::DelphiInterface<IDeviceUnpairingResultAsyncOperation> _di_IDeviceUnpairingResultAsyncOperation;
__interface IDevicePairingResult;
typedef System::DelphiInterface<IDevicePairingResult> _di_IDevicePairingResult;
__interface IDeviceUnpairingResult;
typedef System::DelphiInterface<IDeviceUnpairingResult> _di_IDeviceUnpairingResult;
__interface IDevicePairingRequestedEventArgs;
typedef System::DelphiInterface<IDevicePairingRequestedEventArgs> _di_IDevicePairingRequestedEventArgs;
__interface IClosable;
typedef System::DelphiInterface<IClosable> _di_IClosable;
__interface IUriRuntimeClass;
typedef System::DelphiInterface<IUriRuntimeClass> _di_IUriRuntimeClass;
__interface IWwwFormUrlDecoderRuntimeClass;
typedef System::DelphiInterface<IWwwFormUrlDecoderRuntimeClass> _di_IWwwFormUrlDecoderRuntimeClass;
__interface IAdaptiveCard;
typedef System::DelphiInterface<IAdaptiveCard> _di_IAdaptiveCard;
__interface IWebAccount;
typedef System::DelphiInterface<IWebAccount> _di_IWebAccount;
__interface IWebAccountProvider;
typedef System::DelphiInterface<IWebAccountProvider> _di_IWebAccountProvider;
__interface IUriRuntimeClassFactory;
typedef System::DelphiInterface<IUriRuntimeClassFactory> _di_IUriRuntimeClassFactory;
__interface IHostNameVectorView;
typedef System::DelphiInterface<IHostNameVectorView> _di_IHostNameVectorView;
__interface ILimitedAccessFeatureRequestResult;
typedef System::DelphiInterface<ILimitedAccessFeatureRequestResult> _di_ILimitedAccessFeatureRequestResult;
__interface ILimitedAccessFeaturesStatics;
typedef System::DelphiInterface<ILimitedAccessFeaturesStatics> _di_ILimitedAccessFeaturesStatics;
class DELPHICLASS TwclWinRtDeviceWatcherStoppedEventHandler;
class DELPHICLASS TwclWinRtHStringIterator;
class DELPHICLASS TwclWinRtHStringIterable;
class DELPHICLASS TwclWinRtShortReference;
class DELPHICLASS TwclWinRtUInt32Reference;
//-- type declarations -------------------------------------------------------
typedef System::WideChar * *PLPCWSTR;

typedef System::WideChar * *PLPWSTR;

typedef __int64 ULONG64;

typedef unsigned CONFIGRET;

typedef System::WideChar * DEVINSTID;

typedef unsigned *PDEVINST;

typedef unsigned DEVINST;

typedef unsigned *PDEVNODE;

typedef unsigned DEVNODE;

enum DECLSPEC_DENUM CM_NOTIFY_FILTER_TYPE : unsigned int { CM_NOTIFY_FILTER_TYPE_DEVICEINTERFACE, CM_NOTIFY_FILTER_TYPE_DEVICEHANDLE, CM_NOTIFY_FILTER_TYPE_DEVICEINSTANCE, CM_NOTIFY_FILTER_TYPE_MAX };

typedef CM_NOTIFY_FILTER_TYPE *PCM_NOTIFY_FILTER_TYPE;

typedef CM_NOTIFY_FILTER *PCM_NOTIFY_FILTER;

struct DECLSPEC_DRECORD CM_NOTIFY_FILTER
{
	
private:
	struct DECLSPEC_DRECORD _CM_NOTIFY_FILTER__1
	{
		
	private:
		struct DECLSPEC_DRECORD __CM_NOTIFY_FILTER__1__1
		{
		public:
			GUID ClassGuid;
		};
		
		
		struct DECLSPEC_DRECORD __CM_NOTIFY_FILTER__1__2
		{
		public:
			NativeUInt hTarget;
		};
		
		
		struct DECLSPEC_DRECORD __CM_NOTIFY_FILTER__1__3
		{
		public:
			System::StaticArray<System::WideChar, 200> InstanceId;
		};
		
		
		
		
	public:
		union
		{
			struct 
			{
				__CM_NOTIFY_FILTER__1__3 DeviceInstance;
			};
			struct 
			{
				__CM_NOTIFY_FILTER__1__2 DeviceHandle;
			};
			struct 
			{
				__CM_NOTIFY_FILTER__1__1 DeviceInterface;
			};
			
		};
	};
	
	
	
public:
	unsigned cbSize;
	unsigned Flags;
	CM_NOTIFY_FILTER_TYPE FilterType;
	unsigned Reserved;
	_CM_NOTIFY_FILTER__1 u;
};


typedef NativeUInt *PHCMNOTIFICATION;

typedef NativeUInt HCMNOTIFICATION;

enum DECLSPEC_DENUM CM_NOTIFY_ACTION : unsigned int { CM_NOTIFY_ACTION_DEVICEINTERFACEARRIVAL, CM_NOTIFY_ACTION_DEVICEINTERFACEREMOVAL, CM_NOTIFY_ACTION_DEVICEQUERYREMOVE, CM_NOTIFY_ACTION_DEVICEQUERYREMOVEFAILED, CM_NOTIFY_ACTION_DEVICEREMOVEPENDING, CM_NOTIFY_ACTION_DEVICEREMOVECOMPLETE, CM_NOTIFY_ACTION_DEVICECUSTOMEVENT, CM_NOTIFY_ACTION_DEVICEINSTANCEENUMERATED, CM_NOTIFY_ACTION_DEVICEINSTANCESTARTED, CM_NOTIFY_ACTION_DEVICEINSTANCEREMOVED, CM_NOTIFY_ACTION_MAX };

typedef CM_NOTIFY_ACTION *PCM_NOTIFY_ACTION;

typedef CM_NOTIFY_EVENT_DATA *PCM_NOTIFY_EVENT_DATA;

struct DECLSPEC_DRECORD CM_NOTIFY_EVENT_DATA
{
	
private:
	struct DECLSPEC_DRECORD _CM_NOTIFY_EVENT_DATA__1
	{
		
	private:
		struct DECLSPEC_DRECORD __CM_NOTIFY_EVENT_DATA__1__1
		{
		public:
			GUID ClassGuid;
			System::StaticArray<System::WideChar, 1> SymbolicLink;
		};
		
		
		struct DECLSPEC_DRECORD __CM_NOTIFY_EVENT_DATA__1__2
		{
		public:
			GUID EventGuid;
			int NameOffset;
			unsigned DataSize;
			System::StaticArray<System::Byte, 1> Data;
		};
		
		
		struct DECLSPEC_DRECORD __CM_NOTIFY_EVENT_DATA__1__3
		{
		public:
			System::StaticArray<System::WideChar, 1> InstanceId;
		};
		
		
		
		
	public:
		union
		{
			struct 
			{
				__CM_NOTIFY_EVENT_DATA__1__3 DeviceInstance;
			};
			struct 
			{
				__CM_NOTIFY_EVENT_DATA__1__2 DeviceHandle;
			};
			struct 
			{
				__CM_NOTIFY_EVENT_DATA__1__1 DeviceInterface;
			};
			
		};
	};
	
	
	
public:
	CM_NOTIFY_FILTER_TYPE FilterType;
	unsigned Reserved;
	_CM_NOTIFY_EVENT_DATA__1 u;
};


typedef GUID *PDEVPROPGUID;

typedef GUID DEVPROPGUID;

typedef unsigned *PDEVPROPID;

typedef unsigned DEVPROPID;

typedef DEVPROPKEY *PDEVPROPKEY;

struct DECLSPEC_DRECORD DEVPROPKEY
{
public:
	GUID fmtid;
	unsigned pid;
};


typedef unsigned *PDEVPROPTYPE;

typedef unsigned DEVPROPTYPE;

typedef unsigned __stdcall (*PCM_NOTIFY_CALLBACK)(NativeUInt hNotify, void * Context, CM_NOTIFY_ACTION Action, PCM_NOTIFY_EVENT_DATA EventData, unsigned EventDataSize);

typedef SERIAL_LINE_CONTROL *PSERIAL_LINE_CONTROL;

#pragma pack(push,1)
struct DECLSPEC_DRECORD SERIAL_LINE_CONTROL
{
public:
	System::Byte StopBits;
	System::Byte Parity;
	System::Byte WordLength;
};
#pragma pack(pop)


typedef SERIAL_CHARS *PSERIAL_CHARS;

#pragma pack(push,1)
struct DECLSPEC_DRECORD SERIAL_CHARS
{
public:
	System::Byte EofChar;
	System::Byte ErrorChar;
	System::Byte BreakChar;
	System::Byte EventChar;
	System::Byte XonChar;
	System::Byte XoffChar;
};
#pragma pack(pop)


typedef SERIAL_HANDFLOW *PSERIAL_HANDFLOW;

#pragma pack(push,1)
struct DECLSPEC_DRECORD SERIAL_HANDFLOW
{
public:
	unsigned ControlHandShake;
	unsigned FlowReplace;
	int XonLimit;
	int XoffLimit;
};
#pragma pack(pop)


typedef short INT16;

typedef System::Word UINT16;

typedef unsigned UINT32;

typedef System::WideChar * PCNZWCH;

typedef void * HSTRING;

typedef void * *PHSTRING;

typedef PHSTRING *PPHSTRING;

struct DECLSPEC_DRECORD DateTime
{
public:
	__int64 UniversalTime;
};


struct DECLSPEC_DRECORD TimeSpan
{
public:
	__int64 Duration;
};


struct DECLSPEC_DRECORD EventRegistrationToken
{
public:
	__int64 value;
};


struct DECLSPEC_DRECORD RoundTripTimeStatistics
{
public:
	unsigned Variance;
	unsigned Max;
	unsigned Min;
	unsigned Sum;
};


struct DECLSPEC_DRECORD BandwidthStatistics
{
public:
	unsigned __int64 OutboundBitsPerSecond;
	unsigned __int64 InboundBitsPerSecond;
	unsigned __int64 OutboundBitsPerSecondInstability;
	unsigned __int64 InboundBitsPerSecondInstability;
	bool OutboundBandwidthPeaked;
	bool InboundBandwidthPeaked;
};


struct DECLSPEC_DRECORD Color
{
public:
	System::Byte A;
	System::Byte R;
	System::Byte G;
	System::Byte B;
};


struct DECLSPEC_DRECORD Point
{
public:
	float X;
	float Y;
};


struct DECLSPEC_DRECORD Rect
{
public:
	float X;
	float Y;
	float Width;
	float Height;
};


struct DECLSPEC_DRECORD Size
{
public:
	float Width;
	float Height;
};


enum DECLSPEC_DENUM RO_INIT_TYPE : unsigned int { RO_INIT_SINGLETHREADED, RO_INIT_MULTITHREADED };

enum DECLSPEC_DENUM TrustLevel : unsigned int { BaseTrust, PartialTrust, FullTrust };

enum DECLSPEC_DENUM AsyncStatus : unsigned int { Started, Completed, Canceled, Error };

typedef AsyncStatus *PAsyncStatus;

enum DECLSPEC_DENUM NetworkConnectivityLevel : unsigned int { NetworkConnectivityLevel_None, NetworkConnectivityLevel_LocalAccess, NetworkConnectivityLevel_ConstrainedInternetAccess, NetworkConnectivityLevel_InternetAccess };

enum DECLSPEC_DENUM NetworkCostType : unsigned int { NetworkCostType_Unknown, NetworkCostType_Unrestricted, NetworkCostType_Fixed, NetworkCostType_Variable };

enum DECLSPEC_DENUM RoamingStates : unsigned int { RoamingStates_None, RoamingStates_NotRoaming, RoamingStates_Roaming };

enum DECLSPEC_DENUM NetworkAuthenticationType : unsigned int { NetworkAuthenticationType_None, NetworkAuthenticationType_Unknown, NetworkAuthenticationType_Open80211, NetworkAuthenticationType_SharedKey80211, NetworkAuthenticationType_Wpa, NetworkAuthenticationType_WpaPsk, NetworkAuthenticationType_WpaNone, NetworkAuthenticationType_Rsna, NetworkAuthenticationType_RsnaPsk, NetworkAuthenticationType_Ihv };

enum DECLSPEC_DENUM NetworkEncryptionType : unsigned int { NetworkEncryptionType_None, NetworkEncryptionType_Unknown, NetworkEncryptionType_Wep, NetworkEncryptionType_Wep40, NetworkEncryptionType_Wep104, NetworkEncryptionType_Tkip, NetworkEncryptionType_Ccmp, NetworkEncryptionType_WpaUseGroup, NetworkEncryptionType_RsnUseGroup, NetworkEncryptionType_Ihv };

enum DECLSPEC_DENUM NetworkTypes : unsigned int { NetworkTypes_None, NetworkTypes_Internet, NetworkTypes_PrivateNetwork };

enum DECLSPEC_DENUM HostNameType : unsigned int { HostNameType_DomainName, HostNameType_Ipv4, HostNameType_Ipv6, HostNameType_Bluetooth };

enum DECLSPEC_DENUM Panel : unsigned int { Panel_Unknown, Panel_Front, Panel_Back, Panel_Top, Panel_Bottom, Panel_Left, Panel_Right };

enum DECLSPEC_DENUM DevicePairingKinds : unsigned int { DevicePairingKinds_None, DevicePairingKinds_ConfirmOnly, DevicePairingKinds_DisplayPin, DevicePairingKinds_ProvidePin = 0x4, DevicePairingKinds_ConfirmPinMatch = 0x8, ProvidePasswordCredentia = 0x10, ProvideAddress = 0x20, All = 0x40 };

enum DECLSPEC_DENUM SocketProtectionLevel : unsigned int { SocketProtectionLevel_PlainSocket, SocketProtectionLevel_Ssl, SocketProtectionLevel_SslAllowNullEncryption, SocketProtectionLevel_BluetoothEncryptionAllowNullAuthentication, SocketProtectionLevel_BluetoothEncryptionWithAuthentication, SocketProtectionLevel_Ssl3AllowWeakEncryption, SocketProtectionLevel_Tls10, SocketProtectionLevel_Tls11, SocketProtectionLevel_Tls12 };

enum DECLSPEC_DENUM DeviceClass : unsigned int { DeviceClass_All, DeviceClass_AudioCapture, DeviceClass_AudioRender, DeviceClass_PortableStorageDevice, DeviceClass_VideoCapture, DeviceClass_ImageScanner, DeviceClass_Location };

enum DECLSPEC_DENUM DeviceWatcherStatus : unsigned int { DeviceWatcherStatus_Created, DeviceWatcherStatus_Started, DeviceWatcherStatus_EnumerationCompleted, DeviceWatcherStatus_Stopping, DeviceWatcherStatus_Stopped, DeviceWatcherStatus_Aborted };

enum DECLSPEC_DENUM RadioState : unsigned int { RadioState_Unknown, RadioState_On, RadioState_Off, RadioState_Disabled };

enum DECLSPEC_DENUM RadioAccessStatus : unsigned int { RadioAccessStatus_Unspecified, RadioAccessStatus_Allowed, RadioAccessStatus_DeniedByUser, RadioAccessStatus_DeniedBySystem };

enum DECLSPEC_DENUM RadioKind : unsigned int { RadioKind_Other, RadioKind_WiFi, RadioKind_MobileBroadband, RadioKind_Bluetooth, RadioKind_FM };

enum DECLSPEC_DENUM DeviceAccessStatus : unsigned int { DeviceAccessStatus_Unspecified, DeviceAccessStatus_Allowed, DeviceAccessStatus_DeniedByUser, DeviceAccessStatus_DeniedBySystem };

enum DECLSPEC_DENUM UnicodeEncoding : unsigned int { UnicodeEncoding_Utf8, UnicodeEncoding_Utf16LE, UnicodeEncoding_Utf16BE };

enum DECLSPEC_DENUM ByteOrder : unsigned int { ByteOrder_LittleEndian, ByteOrder_BigEndian };

enum DECLSPEC_DENUM SocketQualityOfService : unsigned int { SocketQualityOfService_Normal, SocketQualityOfService_LowLatency };

enum DECLSPEC_DENUM InputStreamOptions : unsigned int { InputStreamOptions_None, InputStreamOptions_Partial, InputStreamOptions_ReadAhead };

enum DECLSPEC_DENUM SocketActivityConnectedStandbyAction : unsigned int { SocketActivityConnectedStandbyAction_DoNotWake, SocketActivityConnectedStandbyAction_Wake };

enum DECLSPEC_DENUM DeviceInformationKind : unsigned int { DeviceInformationKind_Unknown, DeviceInformationKind_DeviceInterface, DeviceInformationKind_DeviceContainer, DeviceInformationKind_Device, DeviceInformationKind_DeviceInterfaceClass, DeviceInformationKind_AssociationEndpoint, DeviceInformationKind_AssociationEndpointContainer, DeviceInformationKind_AssociationEndpointService };

enum DECLSPEC_DENUM DevicePairingResultStatus : unsigned int { DevicePairingResultStatus_Paired, DevicePairingResultStatus_NotReadyToPair, DevicePairingResultStatus_NotPaired, DevicePairingResultStatus_AlreadyPaired, DevicePairingResultStatus_ConnectionRejected, DevicePairingResultStatus_TooManyConnections, DevicePairingResultStatus_HardwareFailure, DevicePairingResultStatus_AuthenticationTimeout, DevicePairingResultStatus_AuthenticationNotAllowed, DevicePairingResultStatus_AuthenticationFailure, DevicePairingResultStatus_NoSupportedProfiles, DevicePairingResultStatus_ProtectionLevelCouldNotBeMet, DevicePairingResultStatus_AccessDenied, DevicePairingResultStatus_InvalidCeremonyData, DevicePairingResultStatus_PairingCanceled, 
	DevicePairingResultStatus_OperationAlreadyInProgress, DevicePairingResultStatus_RequiredHandlerNotRegistered, DevicePairingResultStatus_RejectedByHandler, DevicePairingResultStatus_RemoteDeviceHasAssociation, DevicePairingResultStatus_Failed };

enum DECLSPEC_DENUM DevicePairingProtectionLevel : unsigned int { DevicePairingProtectionLevel_Default, DevicePairingProtectionLevel_None, DevicePairingProtectionLevel_Encryption, DevicePairingProtectionLevel_EncryptionAndAuthentication };

enum DECLSPEC_DENUM DeviceUnpairingResultStatus : unsigned int { DeviceUnpairingResultStatus_Unpaired, DeviceUnpairingResultStatus_AlreadyUnpaired, DeviceUnpairingResultStatus_OperationAlreadyInProgress, DeviceUnpairingResultStatus_AccessDenied, DeviceUnpairingResultStatus_Failed };

enum DECLSPEC_DENUM WebAccountState : unsigned int { WebAccountState_None, WebAccountState_Connected, WebAccountState_Error };

enum DECLSPEC_DENUM PropertyType : unsigned int { PropertyType_Empty, PropertyType_UInt8, PropertyType_Int16, PropertyType_UInt16, PropertyType_Int32, PropertyType_UInt32, PropertyType_Int64, PropertyType_UInt64, PropertyType_Single, PropertyType_Double, PropertyType_Char16, PropertyType_Boolean, PropertyType_String, PropertyType_Inspectable, PropertyType_DateTime, PropertyType_TimeSpan, PropertyType_Guid, PropertyType_Point, PropertyType_Size, PropertyType_Rect, PropertyType_OtherType, PropertyType_UInt8Array = 1025, PropertyType_Int16Array, PropertyType_UInt16Array, PropertyType_Int32Array, PropertyType_UInt32Array, PropertyType_Int64Array, PropertyType_UInt64Array, PropertyType_SingleArray, PropertyType_DoubleArray, PropertyType_Char16Array, 
	PropertyType_BooleanArray, PropertyType_StringArray, PropertyType_InspectableArray, PropertyType_DateTimeArray, PropertyType_TimeSpanArray, PropertyType_GuidArray, PropertyType_PointArray, PropertyType_SizeArray, PropertyType_RectArray, PropertyType_OtherTypeArray };

enum DECLSPEC_DENUM UserAuthenticationStatus : unsigned int { UserAuthenticationStatus_Unauthenticated, UserAuthenticationStatus_LocallyAuthenticated, UserAuthenticationStatus_RemotelyAuthenticated };

enum DECLSPEC_DENUM UserType : unsigned int { UserType_LocalUser, UserType_RemoteUser, UserType_LocalGuest, UserType_RemoteGuest };

enum DECLSPEC_DENUM UserPictureSize : unsigned int { UserPictureSize_Size64x64, UserPictureSize_Size208x208, UserPictureSize_Size424x424, UserPictureSize_Size1080x1080 };

enum DECLSPEC_DENUM LimitedAccessFeatureStatus : unsigned int { LimitedAccessFeatureStatus_Unavailable, LimitedAccessFeatureStatus_Available, LimitedAccessFeatureStatus_AvailableWithoutToken, LimitedAccessFeatureStatus_Unknown };

typedef _di_IRadio *PIRadio;

typedef _di_IHostName *PIHostName;

typedef _di_IInspectable *PIInspectable;

__interface  INTERFACE_UUID("{AF86E2E0-B12D-4C6A-9C5A-D7AA65101E90}") IInspectable  : public System::IInterface 
{
	virtual HRESULT __stdcall GetIids(/* out */ unsigned &iidCount, /* out */ System::PGUID &iids) = 0 ;
	virtual HRESULT __stdcall GetRuntimeClassName(/* out */ void * &className) = 0 ;
	virtual HRESULT __stdcall GetTrustLevel(/* out */ TrustLevel &trust) = 0 ;
};

__interface  INTERFACE_UUID("{00000035-0000-0000-C000-000000000046}") IActivationFactory  : public IInspectable 
{
	virtual HRESULT __stdcall ActivateInstance(/* out */ _di_IInspectable &instance) = 0 ;
};

__interface  INTERFACE_UUID("{2F13C006-A03A-5F69-B090-75A43E33423E}") IHSTRINGVectorView  : public IInspectable 
{
	virtual HRESULT __stdcall GetAt(unsigned index, /* out */ void * &item) = 0 ;
	virtual HRESULT __stdcall get_Size(/* out */ unsigned &size) = 0 ;
	virtual HRESULT __stdcall IndexOf(void * item, /* out */ unsigned &index, /* out */ bool &found) = 0 ;
	virtual HRESULT __stdcall GetMany(unsigned startIndex, unsigned capacity, PHSTRING items, /* out */ unsigned &actual) = 0 ;
};

__interface  INTERFACE_UUID("{513EF3AF-E784-5325-A91E-97C2B8111CF3}") IUInt32Reference  : public IInspectable 
{
	virtual HRESULT __stdcall get_Value(/* out */ unsigned &value) = 0 ;
};

__interface  INTERFACE_UUID("{548CEFBD-BC8A-5FA0-8DF2-957440FC8BF4}") IIntReference  : public IInspectable 
{
	virtual HRESULT __stdcall get_Value(/* out */ int &value) = 0 ;
};

__interface  INTERFACE_UUID("{6755E376-53BB-568B-A11D-17239868309E}") IUInt64Reference  : public IInspectable 
{
	virtual HRESULT __stdcall get_Value(/* out */ __int64 &value) = 0 ;
};

__interface  INTERFACE_UUID("{5541D8A7-497C-5AA4-86FC-7713ADBF2A2C}") IDateTimeReference  : public IInspectable 
{
	virtual HRESULT __stdcall get_Value(/* out */ DateTime &value) = 0 ;
};

__interface  INTERFACE_UUID("{604D0C4C-91DE-5C2A-935F-362F13EAF800}") ITimeSpanReference  : public IInspectable 
{
	virtual HRESULT __stdcall get_Value(/* out */ TimeSpan &value) = 0 ;
};

__interface  INTERFACE_UUID("{E5198CC8-2873-55F5-B0A1-84FF9E4AAD62}") IByteReference  : public IInspectable 
{
	virtual HRESULT __stdcall get_Value(/* out */ System::Byte &value) = 0 ;
};

__interface  INTERFACE_UUID("{6EC9E41B-6709-5647-9918-A1270110FC4E}") IShortReference  : public IInspectable 
{
	virtual HRESULT __stdcall get_Value(/* out */ short &value) = 0 ;
};

__interface  INTERFACE_UUID("{33EE3134-1DD6-4E3A-8067-D1C162E8642B}") IRandomAccessStreamReference  : public IInspectable 
{
	virtual HRESULT __stdcall OpenReadAsync(/* out */ _di_IRandomAccessStreamWithContentTypeAsyncOperation &operation) = 0 ;
};

__interface  INTERFACE_UUID("{8C304EBB-6615-50A4-8829-879ECD443236}") IHSTRINGIterator  : public IInspectable 
{
	virtual HRESULT __stdcall get_Current(/* out */ void * &current) = 0 ;
	virtual HRESULT __stdcall get_HasCurrent(/* out */ bool &hasCurrent) = 0 ;
	virtual HRESULT __stdcall MoveNext(/* out */ bool &hasCurrent) = 0 ;
	virtual HRESULT __stdcall GetMany(unsigned capacity, PHSTRING items, /* out */ unsigned &actual) = 0 ;
};

__interface  INTERFACE_UUID("{5DB5FA32-707C-5849-A06B-91C8EB9D10E8}") IHSTRINGInspectableKeyValuePairIterator  : public IInspectable 
{
	virtual HRESULT __stdcall get_Current(/* out */ _di_IHSTRINGInspectableKeyValuePair &current) = 0 ;
	virtual HRESULT __stdcall get_HasCurrent(/* out */ bool &hasCurrent) = 0 ;
	virtual HRESULT __stdcall MoveNext(/* out */ bool &hasCurrent) = 0 ;
	virtual HRESULT __stdcall GetMany(unsigned capacity, /* out */ _di_IHSTRINGInspectableKeyValuePair &items, /* out */ unsigned &actual) = 0 ;
};

__interface  INTERFACE_UUID("{E2FCC7C1-3BFC-5A0B-B2B0-72E769D1CB7E}") IHSTRINGIterable  : public IInspectable 
{
	virtual HRESULT __stdcall First(/* out */ _di_IHSTRINGIterator &first) = 0 ;
};

__interface  INTERFACE_UUID("{FE2F3D47-5D47-5499-8374-430C7CDA0204}") IHSTRINGInspectableKeyValuePairIterable  : public IInspectable 
{
	virtual HRESULT __stdcall First(/* out */ _di_IHSTRINGInspectableKeyValuePairIterator &first) = 0 ;
};

typedef _di_IBuffer *PIBuffer;

__interface  INTERFACE_UUID("{905A0FE0-BC53-11DF-8C49-001E4FC686DA}") IBuffer  : public IInspectable 
{
	virtual HRESULT __stdcall get_Capacity(/* out */ unsigned &value) = 0 ;
	virtual HRESULT __stdcall get_Length(/* out */ unsigned &value) = 0 ;
	virtual HRESULT __stdcall put_Length(unsigned value) = 0 ;
};

__interface  INTERFACE_UUID("{BB78502A-F79D-54FA-92C9-90C5039FDF7E}") IHSTRINGMapView  : public IInspectable 
{
	virtual HRESULT __stdcall Lookup(void * key, /* out */ _di_IInspectable &value) = 0 ;
	virtual HRESULT __stdcall get_Size(/* out */ unsigned &size) = 0 ;
	virtual HRESULT __stdcall HasKey(void * key, /* out */ bool &found) = 0 ;
	virtual HRESULT __stdcall Split(/* out */ _di_IHSTRINGMapView &firstPartition, /* out */ _di_IHSTRINGMapView &secondPartition) = 0 ;
};

__interface  INTERFACE_UUID("{CC254827-4B3D-438F-9232-10C76BC7E038}") IRandomAccessStreamWithContentType  : public IInspectable 
{
	
};

__interface  INTERFACE_UUID("{3DDDECF4-1D39-58E8-83B1-DBED541C7F35}") IRandomAccessStreamWithContentTypeAsyncOperationCompletedHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IRandomAccessStreamWithContentTypeAsyncOperation asyncInfo, AsyncStatus asyncStatus) = 0 ;
};

__interface  INTERFACE_UUID("{C4A57C5E-32B0-55B3-AD13-CE1C23041ED6}") IRandomAccessStreamWithContentTypeAsyncOperation  : public IInspectable 
{
	virtual HRESULT __stdcall put_Completed(_di_IRandomAccessStreamWithContentTypeAsyncOperationCompletedHandler handler) = 0 ;
	virtual HRESULT __stdcall get_Completed(/* out */ _di_IRandomAccessStreamWithContentTypeAsyncOperationCompletedHandler &result) = 0 ;
	virtual HRESULT __stdcall GetResults(/* out */ _di_IRandomAccessStreamWithContentType &result) = 0 ;
};

__interface  INTERFACE_UUID("{8A43ED9F-F4E6-4421-ACF9-1DAB2986820C}") IPropertySet  : public IInspectable 
{
	
};

__interface  INTERFACE_UUID("{09335560-6C6B-5A26-9348-97B781132B20}") IHSTRINGInspectableKeyValuePair  : public IInspectable 
{
	virtual HRESULT __stdcall get_Key(/* out */ void * &key) = 0 ;
	virtual HRESULT __stdcall get_Value(/* out */ _di_IInspectable &value) = 0 ;
};

__interface  INTERFACE_UUID("{9343B6E7-E3D2-5E4A-AB2D-2BCE4919A6A4}") IUint32AsyncOperationCompletedHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IUint32AsyncOperation asyncInfo, AsyncStatus status) = 0 ;
};

__interface  INTERFACE_UUID("{EF60385F-BE78-584B-AAEF-7829ADA2B0DE}") IUint32AsyncOperation  : public IInspectable 
{
	virtual HRESULT __stdcall put_Completed(_di_IUint32AsyncOperationCompletedHandler handler) = 0 ;
	virtual HRESULT __stdcall get_Completed(/* out */ _di_IUint32AsyncOperationCompletedHandler &handler) = 0 ;
	virtual HRESULT __stdcall GetResults(/* out */ unsigned &results) = 0 ;
};

__interface  INTERFACE_UUID("{3F08262E-A2E1-5134-9297-E9211F481A2D}") IInspectableAsyncOperationCompletedHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IInspectableAsyncOperation asyncInfo, AsyncStatus status) = 0 ;
};

__interface  INTERFACE_UUID("{ABF53C57-EE50-5342-B52A-26E3B8CC024F}") IInspectableAsyncOperation  : public IInspectable 
{
	virtual HRESULT __stdcall put_Completed(_di_IInspectableAsyncOperationCompletedHandler handler) = 0 ;
	virtual HRESULT __stdcall get_Completed(/* out */ _di_IInspectableAsyncOperationCompletedHandler &handler) = 0 ;
	virtual HRESULT __stdcall GetResults(/* out */ _di_IInspectable &results) = 0 ;
};

__interface  INTERFACE_UUID("{5075A55F-68BA-56F2-97E6-9B1CBFA2C5F2}") IPropertySetAsyncOperationCompletedHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IPropertySetAsyncOperation asyncInfo, AsyncStatus status) = 0 ;
};

__interface  INTERFACE_UUID("{490B0686-AFD7-5037-9647-D8FE248F182C}") IPropertySetAsyncOperation  : public IInspectable 
{
	virtual HRESULT __stdcall put_Completed(_di_IPropertySetAsyncOperationCompletedHandler handler) = 0 ;
	virtual HRESULT __stdcall get_Completed(/* out */ _di_IPropertySetAsyncOperationCompletedHandler &handler) = 0 ;
	virtual HRESULT __stdcall GetResults(/* out */ _di_IPropertySet &results) = 0 ;
};

__interface  INTERFACE_UUID("{60847289-EA0B-5DF6-89DF-F2C62CBA9693}") IRandomAccessStreamReferenceAsyncOperationCompletedHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IRandomAccessStreamReferenceAsyncOperation asyncInfo, AsyncStatus status) = 0 ;
};

__interface  INTERFACE_UUID("{65178D50-E6A2-5D16-B244-65E9725E5A0C}") IRandomAccessStreamReferenceAsyncOperation  : public IInspectable 
{
	virtual HRESULT __stdcall put_Completed(_di_IRandomAccessStreamReferenceAsyncOperationCompletedHandler handler) = 0 ;
	virtual HRESULT __stdcall get_Completed(/* out */ _di_IRandomAccessStreamReferenceAsyncOperationCompletedHandler &handler) = 0 ;
	virtual HRESULT __stdcall GetResults(/* out */ _di_IRandomAccessStreamReference &results) = 0 ;
};

__interface  INTERFACE_UUID("{DF9A26C6-E746-4BCD-B5D4-120103C4209B}") IUser  : public IInspectable 
{
	virtual HRESULT __stdcall get_NonRoamableId(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall get_AuthenticationStatus(/* out */ UserAuthenticationStatus &value) = 0 ;
	virtual HRESULT __stdcall get_Type(/* out */ UserType &value) = 0 ;
	virtual HRESULT __stdcall GetPropertyAsync(void * value, /* out */ _di_IInspectableAsyncOperation &operation) = 0 ;
	virtual HRESULT __stdcall GetPropertiesAsync(_di_IHSTRINGVectorView values, /* out */ _di_IPropertySetAsyncOperation &operation) = 0 ;
	virtual HRESULT __stdcall GetPictureAsync(UserPictureSize desiredSize, /* out */ _di_IRandomAccessStreamReferenceAsyncOperation &operation) = 0 ;
};

typedef System::Byte *BYTE_ARRAY;

typedef short *INT16_ARRAY;

typedef System::Word *UINT16_ARRAY;

typedef int *INT32_ARRAY;

typedef unsigned *UINT32_ARRAY;

typedef __int64 *INT64_ARRAY;

typedef unsigned __int64 *UINT64_ARRAY;

typedef float *FLOAT_ARRAY;

typedef double *DOUBLE_ARRAY;

typedef System::WideChar *WCHAR_ARRAY;

typedef bool *BOOLEAN_ARRAY;

typedef void * *HSTRING_ARRAY;

typedef _di_IInspectable *IINSPECTABLE_ARRAY;

typedef GUID *GUID_ARRAY;

typedef DateTime *DATETIME_ARRAY;

typedef TimeSpan *TIMESPAN_ARRAY;

typedef Point *POINT_ARRAY;

typedef Size *SIZE_ARRAY;

typedef Rect *RECT_ARRAY;

__interface  INTERFACE_UUID("{4BD682DD-7554-40E9-9A9B-82654EDE7E62}") IPropertyValue  : public IInspectable 
{
	virtual HRESULT __stdcall get_Type(/* out */ PropertyType &value) = 0 ;
	virtual HRESULT __stdcall get_IsNumericScalar(/* out */ bool &value) = 0 ;
	virtual HRESULT __stdcall GetUInt8(/* out */ System::Byte &value) = 0 ;
	virtual HRESULT __stdcall GetInt16(/* out */ short &value) = 0 ;
	virtual HRESULT __stdcall GetUInt16(/* out */ System::Word &value) = 0 ;
	virtual HRESULT __stdcall GetInt32(/* out */ int &value) = 0 ;
	virtual HRESULT __stdcall GetUInt32(/* out */ unsigned &value) = 0 ;
	virtual HRESULT __stdcall GetInt64(/* out */ __int64 &value) = 0 ;
	virtual HRESULT __stdcall GetUInt64(/* out */ unsigned __int64 &value) = 0 ;
	virtual HRESULT __stdcall GetSingle(/* out */ float &value) = 0 ;
	virtual HRESULT __stdcall GetDouble(/* out */ double &value) = 0 ;
	virtual HRESULT __stdcall GetChar16(/* out */ System::WideChar &value) = 0 ;
	virtual HRESULT __stdcall GetBoolean(/* out */ bool &value) = 0 ;
	virtual HRESULT __stdcall GetString(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall GetGuid(/* out */ GUID &value) = 0 ;
	virtual HRESULT __stdcall GetDateTime(/* out */ DateTime &value) = 0 ;
	virtual HRESULT __stdcall GetTimeSpan(/* out */ TimeSpan &value) = 0 ;
	virtual HRESULT __stdcall GetPoint(/* out */ Point &value) = 0 ;
	virtual HRESULT __stdcall GetSize(/* out */ Size &value) = 0 ;
	virtual HRESULT __stdcall GetRect(/* out */ Rect &value) = 0 ;
	virtual HRESULT __stdcall GetUInt8Array(/* out */ unsigned &__valueSize, /* out */ BYTE_ARRAY &value) = 0 ;
	virtual HRESULT __stdcall GetInt16Array(/* out */ unsigned &__valueSize, /* out */ INT16_ARRAY &value) = 0 ;
	virtual HRESULT __stdcall GetUInt16Array(/* out */ unsigned &__valueSize, /* out */ UINT16_ARRAY &value) = 0 ;
	virtual HRESULT __stdcall GetInt32Array(/* out */ unsigned &__valueSize, /* out */ INT32_ARRAY &value) = 0 ;
	virtual HRESULT __stdcall GetUInt32Array(/* out */ unsigned &__valueSize, /* out */ UINT32_ARRAY &value) = 0 ;
	virtual HRESULT __stdcall GetInt64Array(/* out */ unsigned &__valueSize, /* out */ INT64_ARRAY &value) = 0 ;
	virtual HRESULT __stdcall GetUInt64Array(/* out */ unsigned &__valueSize, /* out */ UINT64_ARRAY &value) = 0 ;
	virtual HRESULT __stdcall GetSingleArray(/* out */ unsigned &__valueSize, /* out */ FLOAT_ARRAY &value) = 0 ;
	virtual HRESULT __stdcall GetDoubleArray(/* out */ unsigned &__valueSize, /* out */ DOUBLE_ARRAY &value) = 0 ;
	virtual HRESULT __stdcall GetChar16Array(/* out */ unsigned &__valueSize, /* out */ WCHAR_ARRAY &value) = 0 ;
	virtual HRESULT __stdcall GetBooleanArray(/* out */ unsigned &__valueSize, /* out */ BOOLEAN_ARRAY &value) = 0 ;
	virtual HRESULT __stdcall GetStringArray(/* out */ unsigned &__valueSize, /* out */ HSTRING_ARRAY &value) = 0 ;
	virtual HRESULT __stdcall GetInspectableArray(/* out */ unsigned &__valueSize, /* out */ IINSPECTABLE_ARRAY &value) = 0 ;
	virtual HRESULT __stdcall GetGuidArray(/* out */ unsigned &__valueSize, /* out */ GUID_ARRAY &value) = 0 ;
	virtual HRESULT __stdcall GetDateTimeArray(/* out */ unsigned &__valueSize, /* out */ DATETIME_ARRAY &value) = 0 ;
	virtual HRESULT __stdcall GetTimeSpanArray(/* out */ unsigned &__valueSize, /* out */ TIMESPAN_ARRAY &value) = 0 ;
	virtual HRESULT __stdcall GetPointArray(/* out */ unsigned &__valueSize, /* out */ POINT_ARRAY &value) = 0 ;
	virtual HRESULT __stdcall GetSizeArray(/* out */ unsigned &__valueSize, /* out */ SIZE_ARRAY &value) = 0 ;
	virtual HRESULT __stdcall GetRectArray(/* out */ unsigned &__valueSize, /* out */ RECT_ARRAY &value) = 0 ;
};

__interface  INTERFACE_UUID("{629BDBC8-D932-4FF4-96B9-8D96C5C1E858}") IPropertyValueStatics  : public IInspectable 
{
	virtual HRESULT __stdcall CreateEmpty(/* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateUInt8(System::Byte value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateInt16(short value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateUInt16(System::Word value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateInt32(int value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateUInt32(unsigned value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateInt64(__int64 value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateUInt64(unsigned __int64 value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateSingle(float value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateDouble(double value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateChar16(System::WideChar value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateBoolean(bool value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateString(void * value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateInspectable(_di_IInspectable value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateGuid(const GUID value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateDateTime(const DateTime value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateTimeSpan(const TimeSpan value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreatePoint(const Point value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateSize(const Size value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateRect(const Rect value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateUInt8Array(unsigned __valueSize, BYTE_ARRAY value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateInt16Array(unsigned __valueSize, INT16_ARRAY value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateUInt16Array(unsigned __valueSize, UINT16_ARRAY value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateInt32Array(unsigned __valueSize, INT32_ARRAY value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateUInt32Array(unsigned __valueSize, UINT32_ARRAY value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateInt64Array(unsigned __valueSize, INT64_ARRAY value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateUInt64Array(unsigned __valueSize, UINT64_ARRAY value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateSingleArray(unsigned __valueSize, FLOAT_ARRAY value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateDoubleArray(unsigned __valueSize, DOUBLE_ARRAY value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateChar16Array(unsigned __valueSize, WCHAR_ARRAY value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateBooleanArray(unsigned __valueSize, BOOLEAN_ARRAY value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateStringArray(unsigned __valueSize, HSTRING_ARRAY value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateInspectableArray(unsigned __valueSize, IINSPECTABLE_ARRAY value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateGuidArray(unsigned __valueSize, GUID_ARRAY value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateDateTimeArray(unsigned __valueSize, DATETIME_ARRAY value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateTimeSpanArray(unsigned __valueSize, TIMESPAN_ARRAY value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreatePointArray(unsigned __valueSize, POINT_ARRAY value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateSizeArray(unsigned __valueSize, SIZE_ARRAY value, /* out */ _di_IInspectable &propertyValue) = 0 ;
	virtual HRESULT __stdcall CreateRectArray(unsigned __valueSize, RECT_ARRAY value, /* out */ _di_IInspectable &propertyValue) = 0 ;
};

__interface  INTERFACE_UUID("{BAD7D829-3416-4B10-A202-BAC0B075BDAE}") IConnectionCost  : public IInspectable 
{
	virtual HRESULT __stdcall get_NetworkCostType(/* out */ NetworkCostType &value) = 0 ;
	virtual HRESULT __stdcall get_Roaming(/* out */ bool &value) = 0 ;
	virtual HRESULT __stdcall get_OverDataLimit(/* out */ bool &value) = 0 ;
	virtual HRESULT __stdcall get_ApproachingDataLimit(/* out */ bool &value) = 0 ;
};

__interface  INTERFACE_UUID("{B921492D-3B44-47FF-B361-BE59E69ED1B0}") IDataPlanUsage  : public IInspectable 
{
	virtual HRESULT __stdcall get_MegabytesUsed(/* out */ unsigned &value) = 0 ;
	virtual HRESULT __stdcall get_LastSyncTime(/* out */ DateTime &value) = 0 ;
};

__interface  INTERFACE_UUID("{977A8B8C-3885-40F3-8851-42CD2BD568BB}") IDataPlanStatus  : public IInspectable 
{
	virtual HRESULT __stdcall get_DataPlanUsage(/* out */ _di_IDataPlanUsage &value) = 0 ;
	virtual HRESULT __stdcall get_DataLimitInMegabytes(/* out */ _di_IUInt32Reference &value) = 0 ;
	virtual HRESULT __stdcall get_InboundBitsPerSecond(/* out */ _di_IUInt64Reference &value) = 0 ;
	virtual HRESULT __stdcall get_OutboundBitsPerSecond(/* out */ _di_IUInt64Reference &value) = 0 ;
	virtual HRESULT __stdcall get_NextBillingCycle(/* out */ _di_IDateTimeReference &value) = 0 ;
	virtual HRESULT __stdcall get_MaxTransferSizeInMegabytes(/* out */ _di_IUInt32Reference &value) = 0 ;
};

__interface  INTERFACE_UUID("{C1431DD3-B146-4D39-B959-0C69B096C512}") IDataUsage  : public IInspectable 
{
	virtual HRESULT __stdcall get_BytesSent(/* out */ __int64 &value) = 0 ;
	virtual HRESULT __stdcall get_BytesReceived(/* out */ __int64 &value) = 0 ;
};

__interface  INTERFACE_UUID("{7CA07E8D-917B-4B5F-B84D-28F7A5AC5402}") INetworkSecuritySettings  : public IInspectable 
{
	virtual HRESULT __stdcall get_NetworkAuthenticationType(/* out */ NetworkAuthenticationType &value) = 0 ;
	virtual HRESULT __stdcall get_NetworkEncryptionType(/* out */ NetworkEncryptionType &value) = 0 ;
};

__interface  INTERFACE_UUID("{71BA143C-598E-49D0-84EB-8FEBAEDCC195}") IConnectionProfile  : public IInspectable 
{
	virtual HRESULT __stdcall get_ProfileName(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall GetNetworkConnectivityLevel(/* out */ NetworkConnectivityLevel &value) = 0 ;
	virtual HRESULT __stdcall GetNetworkNames(/* out */ _di_IHSTRINGVectorView &value) = 0 ;
	virtual HRESULT __stdcall GetConnectionCost(/* out */ _di_IConnectionCost &value) = 0 ;
	virtual HRESULT __stdcall GetDataPlanStatus(/* out */ _di_IDataPlanStatus &value) = 0 ;
	virtual HRESULT __stdcall get_NetworkAdapter(/* out */ _di_INetworkAdapter &value) = 0 ;
	virtual HRESULT __stdcall GetLocalUsage(const DateTime StartTime, const DateTime EndTime, /* out */ _di_IDataUsage &value) = 0 ;
	virtual HRESULT __stdcall GetLocalUsagePerRoamingStates(const DateTime StartTime, const DateTime EndTime, RoamingStates States, /* out */ _di_IDataUsage &value) = 0 ;
	virtual HRESULT __stdcall get_NetworkSecuritySettings(/* out */ _di_INetworkSecuritySettings &value) = 0 ;
};

__interface  INTERFACE_UUID("{5BF519CA-8ADB-5AB5-ABB8-FF1BBE5D2DE8}") IConnectionProfileAsyncOperation  : public IInspectable 
{
	virtual HRESULT __stdcall put_Completed(_di_IConnectionProfileAsyncOperationCompletedHandler handler) = 0 ;
	virtual HRESULT __stdcall get_Completed(/* out */ _di_IConnectionProfileAsyncOperationCompletedHandler &handler) = 0 ;
	virtual HRESULT __stdcall GetResults(/* out */ _di_IConnectionProfile &results) = 0 ;
};

__interface  INTERFACE_UUID("{E4F0C96A-0571-59F4-A9A9-AFAC3E61CAA0}") IConnectionProfileAsyncOperationCompletedHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IConnectionProfileAsyncOperation asyncInfo, AsyncStatus status) = 0 ;
};

__interface  INTERFACE_UUID("{01BC4D39-F5E0-4567-A28C-42080C831B2B}") INetworkItem  : public IInspectable 
{
	virtual HRESULT __stdcall get_NetworkId(/* out */ GUID &value) = 0 ;
	virtual HRESULT __stdcall GetNetworkTypes(/* out */ NetworkTypes &value) = 0 ;
};

__interface  INTERFACE_UUID("{3B542E03-5388-496C-A8A3-AFFD39AEC2E6}") INetworkAdapter  : public IInspectable 
{
	virtual HRESULT __stdcall get_OutboundMaxBitsPerSecond(/* out */ __int64 &value) = 0 ;
	virtual HRESULT __stdcall get_InboundMaxBitsPerSecond(/* out */ __int64 &value) = 0 ;
	virtual HRESULT __stdcall get_IanaInterfaceType(/* out */ unsigned &value) = 0 ;
	virtual HRESULT __stdcall get_NetworkItem(/* out */ _di_INetworkItem &value) = 0 ;
	virtual HRESULT __stdcall get_NetworkAdapterId(/* out */ GUID &value) = 0 ;
	virtual HRESULT __stdcall GetConnectedProfileAsync(/* out */ _di_IConnectionProfileAsyncOperation &value) = 0 ;
};

__interface  INTERFACE_UUID("{D85145E0-138F-47D7-9B3A-36BB488CEF33}") IIPInformation  : public IInspectable 
{
	virtual HRESULT __stdcall get_NetworkAdapter(/* out */ _di_INetworkAdapter &value) = 0 ;
	virtual HRESULT __stdcall get_PrefixLength(/* out */ _di_IByteReference &value) = 0 ;
};

__interface  INTERFACE_UUID("{BF8ECAAD-ED96-49A7-9084-D416CAE88DCB}") IHostName  : public IInspectable 
{
	virtual HRESULT __stdcall get_IPInformation(/* out */ _di_IIPInformation &value) = 0 ;
	virtual HRESULT __stdcall get_RawName(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall get_DisplayName(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall get_CanonicalName(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall get_Type(/* out */ HostNameType &value) = 0 ;
	virtual HRESULT __stdcall IsEqual(_di_IHostName hostName, /* out */ bool &isEqual) = 0 ;
};

typedef _di_IEndpointPair *PIEndpointPair;

__interface  INTERFACE_UUID("{33A0AA36-F8FA-4B30-B856-76517C3BD06D}") IEndpointPair  : public IInspectable 
{
	virtual HRESULT __stdcall get_LocalHostName(/* out */ _di_IHostName &value) = 0 ;
	virtual HRESULT __stdcall put_LocalHostName(_di_IHostName value) = 0 ;
	virtual HRESULT __stdcall get_LocalServiceName(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall put_LocalServiceName(void * value) = 0 ;
	virtual HRESULT __stdcall get_RemoteHostName(/* out */ _di_IHostName &value) = 0 ;
	virtual HRESULT __stdcall put_RemoteHostName(_di_IHostName value) = 0 ;
	virtual HRESULT __stdcall get_RemoteServiceName(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall put_RemoteServiceName(void * value) = 0 ;
};

__interface  INTERFACE_UUID("{C899FF9F-E6F5-5673-810C-04E2FF98704F}") IEndpointPairIterator  : public IInspectable 
{
	virtual HRESULT __stdcall get_Current(/* out */ _di_IEndpointPair &current) = 0 ;
	virtual HRESULT __stdcall get_HasCurrent(/* out */ bool &hasCurrent) = 0 ;
	virtual HRESULT __stdcall MoveNext(/* out */ bool &hasCurrent) = 0 ;
	virtual HRESULT __stdcall GetMany(unsigned capacity, PIEndpointPair items, /* out */ unsigned &actual) = 0 ;
};

__interface  INTERFACE_UUID("{8780A851-6D48-5006-9288-81F3D7045A96}") IEndpointPairVectorView  : public IInspectable 
{
	virtual HRESULT __stdcall GetAt(unsigned index, /* out */ _di_IEndpointPair &item) = 0 ;
	virtual HRESULT __stdcall get_Size(/* out */ unsigned &size) = 0 ;
	virtual HRESULT __stdcall IndexOf(_di_IEndpointPair item, /* out */ unsigned &index, /* out */ bool &found) = 0 ;
	virtual HRESULT __stdcall GetMany(unsigned startIndex, unsigned capacity, PIEndpointPair items, /* out */ unsigned &actual) = 0 ;
};

__interface  INTERFACE_UUID("{42340A27-5810-459C-AABB-C65E1F813ECF}") IEnclosureLocation  : public IInspectable 
{
	virtual HRESULT __stdcall get_InDock(/* out */ bool &value) = 0 ;
	virtual HRESULT __stdcall get_InLid(/* out */ bool &value) = 0 ;
	virtual HRESULT __stdcall get_Panel(/* out */ Panel &value) = 0 ;
};

__interface  INTERFACE_UUID("{8F315305-D972-44B7-A37E-9E822C78213B}") IDeviceInformationUpdate  : public IInspectable 
{
	virtual HRESULT __stdcall get_Id(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall get_Properties(/* out */ _di_IHSTRINGMapView &value) = 0 ;
};

__interface  INTERFACE_UUID("{86D455B2-D795-554C-9C31-BF6539349C19}") IDeviceThumbnailAsyncOperationCompletedHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IDeviceThumbnailAsyncOperation asyncInfo, AsyncStatus status) = 0 ;
};

__interface  INTERFACE_UUID("{BAC083A3-3A19-5072-9D90-133323A049BA}") IDeviceThumbnailAsyncOperation  : public IInspectable 
{
	virtual HRESULT __stdcall put_Completed(_di_IDeviceThumbnailAsyncOperationCompletedHandler handler) = 0 ;
	virtual HRESULT __stdcall get_Completed(/* out */ _di_IDeviceThumbnailAsyncOperationCompletedHandler &handler) = 0 ;
	virtual HRESULT __stdcall GetResults(/* out */ _di_IRandomAccessStreamWithContentType &results) = 0 ;
};

typedef _di_IDeviceInformation *PIDeviceInformation;

__interface  INTERFACE_UUID("{ABA0FB95-4398-489D-8E44-E6130927011F}") IDeviceInformation  : public IInspectable 
{
	virtual HRESULT __stdcall get_Id(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall get_Name(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall get_IsEnabled(/* out */ bool &value) = 0 ;
	virtual HRESULT __stdcall get_IsDefault(/* out */ bool &value) = 0 ;
	virtual HRESULT __stdcall get_EnclosureLocation(/* out */ _di_IEnclosureLocation &value) = 0 ;
	virtual HRESULT __stdcall get_Properties(/* out */ _di_IHSTRINGMapView &value) = 0 ;
	virtual HRESULT __stdcall Update(_di_IDeviceInformationUpdate updateInfo) = 0 ;
	virtual HRESULT __stdcall GetThumbnailAsync(/* out */ _di_IDeviceThumbnailAsyncOperation &asyncOp) = 0 ;
	virtual HRESULT __stdcall GetGlyphThumbnailAsync(/* out */ _di_IDeviceThumbnailAsyncOperation &asyncOp) = 0 ;
};

__interface  INTERFACE_UUID("{BB483DF2-7BB6-5923-A28D-8342EC30046B}") IDeviceInformationAsyncOperationCompletedHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IDeviceInformationAsyncOperation asyncInfo, AsyncStatus status) = 0 ;
};

__interface  INTERFACE_UUID("{07FAA053-EB2F-5CBA-B25B-D9D57BE6715F}") IDeviceInformationAsyncOperation  : public IInspectable 
{
	virtual HRESULT __stdcall put_Completed(_di_IDeviceInformationAsyncOperationCompletedHandler handler) = 0 ;
	virtual HRESULT __stdcall get_Completed(/* out */ _di_IDeviceInformationAsyncOperationCompletedHandler &handler) = 0 ;
	virtual HRESULT __stdcall GetResults(/* out */ _di_IDeviceInformation &results) = 0 ;
};

__interface  INTERFACE_UUID("{4A458732-527E-5C73-9A68-A73DA370F782}") IDeviceInformationCollectionAsyncOperationCompletedHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IDeviceInformationCollectionAsyncOperation asyncInfo, AsyncStatus status) = 0 ;
};

__interface  INTERFACE_UUID("{E170688F-3495-5BF6-AAB5-9CAC17E0F10F}") IDeviceInformationVectorView  : public IInspectable 
{
	virtual HRESULT __stdcall GetAt(unsigned index, /* out */ _di_IDeviceInformation &item) = 0 ;
	virtual HRESULT __stdcall get_Size(/* out */ unsigned &size) = 0 ;
	virtual HRESULT __stdcall IndexOf(_di_IDeviceInformation item, /* out */ unsigned &index, /* out */ bool &found) = 0 ;
	virtual HRESULT __stdcall GetMany(unsigned startIndex, unsigned capacity, PIDeviceInformation items, /* out */ unsigned &actual) = 0 ;
};

__interface  INTERFACE_UUID("{45180254-082E-5274-B2E7-AC0517F44D07}") IDeviceInformationCollectionAsyncOperation  : public IInspectable 
{
	virtual HRESULT __stdcall put_Completed(_di_IDeviceInformationCollectionAsyncOperationCompletedHandler handler) = 0 ;
	virtual HRESULT __stdcall get_Completed(/* out */ _di_IDeviceInformationCollectionAsyncOperationCompletedHandler &handler) = 0 ;
	virtual HRESULT __stdcall GetResults(/* out */ _di_IDeviceInformationVectorView &results) = 0 ;
};

__interface  INTERFACE_UUID("{03C5A07B-990C-5D09-B0B8-5734EAA38222}") IDeviceInformationEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IDeviceWatcher sender, _di_IDeviceInformation e) = 0 ;
};

__interface  INTERFACE_UUID("{906F1254-79AD-54FC-93C4-CDB99B437899}") IDeviceInformationUpdateEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IDeviceWatcher sender, _di_IDeviceInformationUpdate e) = 0 ;
};

__interface  INTERFACE_UUID("{9234630F-1FF4-54F6-9E3F-AC20369B7725}") IDeviceWatcherEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IDeviceWatcher sender, _di_IInspectable e) = 0 ;
};

__interface  INTERFACE_UUID("{C9EAB97D-8F6B-4F96-A9F4-ABC814E22271}") IDeviceWatcher  : public IInspectable 
{
	virtual HRESULT __stdcall add_Added(_di_IDeviceInformationEventHandler handler, /* out */ EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_Added(const EventRegistrationToken token) = 0 ;
	virtual HRESULT __stdcall add_Updated(_di_IDeviceInformationUpdateEventHandler handler, /* out */ EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_Updated(const EventRegistrationToken token) = 0 ;
	virtual HRESULT __stdcall add_Removed(_di_IDeviceInformationUpdateEventHandler handler, /* out */ EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_Removed(const EventRegistrationToken token) = 0 ;
	virtual HRESULT __stdcall add_EnumerationCompleted(_di_IDeviceWatcherEventHandler handler, /* out */ EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_EnumerationCompleted(const EventRegistrationToken token) = 0 ;
	virtual HRESULT __stdcall add_Stopped(_di_IDeviceWatcherEventHandler handler, /* out */ EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_Stopped(const EventRegistrationToken token) = 0 ;
	virtual HRESULT __stdcall get_Status(/* out */ DeviceWatcherStatus &status) = 0 ;
	virtual HRESULT __stdcall Start(void) = 0 ;
	virtual HRESULT __stdcall Stop(void) = 0 ;
};

__interface  INTERFACE_UUID("{C17F100E-3A46-4A78-8013-769DC9B97390}") IDeviceInformationStatics  : public IInspectable 
{
	virtual HRESULT __stdcall CreateFromIdAsync(void * deviceId, /* out */ _di_IDeviceInformationAsyncOperation &asyncOp) = 0 ;
	virtual HRESULT __stdcall CreateFromIdAsyncAdditionalProperties(void * deviceId, _di_IHSTRINGIterable additionalProperties, /* out */ _di_IDeviceInformationAsyncOperation &asyncOp) = 0 ;
	virtual HRESULT __stdcall FindAllAsync(/* out */ _di_IDeviceInformationCollectionAsyncOperation &asyncOp) = 0 ;
	virtual HRESULT __stdcall FindAllAsyncDeviceClass(DeviceClass deviceClass, /* out */ _di_IDeviceInformationCollectionAsyncOperation &asyncOp) = 0 ;
	virtual HRESULT __stdcall FindAllAsyncAqsFilter(void * aqsFilter, /* out */ _di_IDeviceInformationCollectionAsyncOperation &asyncOp) = 0 ;
	virtual HRESULT __stdcall FindAllAsyncAqsFilterAndAdditionalProperties(void * aqsFilter, _di_IHSTRINGIterable additionalProperties, /* out */ _di_IDeviceInformationCollectionAsyncOperation &asyncOp) = 0 ;
	virtual HRESULT __stdcall CreateWatcher(/* out */ _di_IDeviceWatcher &watcher) = 0 ;
	virtual HRESULT __stdcall CreateWatcherDeviceClass(DeviceClass deviceClass, /* out */ _di_IDeviceWatcher &watcher) = 0 ;
	virtual HRESULT __stdcall CreateWatcherAqsFilter(void * aqsFilter, /* out */ _di_IDeviceWatcher &watcher) = 0 ;
	virtual HRESULT __stdcall CreateWatcherAqsFilterAndAdditionalProperties(void * aqsFilter, _di_IHSTRINGIterable additionalProperties, /* out */ _di_IDeviceWatcher &watcher) = 0 ;
};

__interface  INTERFACE_UUID("{493B4F34-A84F-45FD-9167-15D1CB1BD1F9}") IDeviceInformationStatics2  : public IInspectable 
{
	virtual HRESULT __stdcall GetAqsFilterFromDeviceClass(DeviceClass deviceClass, /* out */ void * &aqsFilter) = 0 ;
	virtual HRESULT __stdcall CreateFromIdAsyncWithKindAndAdditionalProperties(void * deviceId, _di_IHSTRINGIterable additionalProperties, DeviceInformationKind kind, /* out */ _di_IDeviceInformationAsyncOperation &asyncOp) = 0 ;
	virtual HRESULT __stdcall FindAllAsyncWithKindAqsFilterAndAdditionalProperties(void * aqsFilter, _di_IHSTRINGIterable additionalProperties, DeviceInformationKind kind, /* out */ _di_IDeviceInformationCollectionAsyncOperation &asyncOp) = 0 ;
	virtual HRESULT __stdcall CreateWatcherWithKindAqsFilterAndAdditionalProperties(void * aqsFilter, _di_IHSTRINGIterable additionalProperties, DeviceInformationKind kind, /* out */ _di_IDeviceWatcher &watcher) = 0 ;
};

__interface  INTERFACE_UUID("{54EF13A1-BF26-47B5-97DD-DE779B7CAD58}") ICredentialFactory  : public IInspectable 
{
	virtual HRESULT __stdcall CreatePasswordCredential(void * resource, void * userName, void * password, /* out */ _di_IPasswordCredential &credential) = 0 ;
};

__interface  INTERFACE_UUID("{6AB18989-C720-41A7-A6C1-FEADB36329A0}") IPasswordCredential  : public IInspectable 
{
	virtual HRESULT __stdcall get_Resource(/* out */ void * &resource) = 0 ;
	virtual HRESULT __stdcall put_Resource(void * resource) = 0 ;
	virtual HRESULT __stdcall get_UserName(/* out */ void * &userName) = 0 ;
	virtual HRESULT __stdcall put_UserName(void * userName) = 0 ;
	virtual HRESULT __stdcall get_Password(/* out */ void * &password) = 0 ;
	virtual HRESULT __stdcall put_Password(void * password) = 0 ;
	virtual HRESULT __stdcall RetrievePassword(void) = 0 ;
	virtual HRESULT __stdcall get_Properties(/* out */ _di_IPropertySet &props) = 0 ;
};

__interface  INTERFACE_UUID("{D6269732-3B7F-46A7-B40B-4FDCA2A2C693}") IDeferral  : public IInspectable 
{
	virtual HRESULT __stdcall Complete(void) = 0 ;
};

__interface  INTERFACE_UUID("{98B9ACC1-4B56-532E-AC73-03D5291CCA90}") IHSTRINGVector  : public IInspectable 
{
	virtual HRESULT __stdcall GetAt(unsigned index, /* out */ void * &item) = 0 ;
	virtual HRESULT __stdcall get_Size(/* out */ unsigned &size) = 0 ;
	virtual HRESULT __stdcall GetView(/* out */ _di_IHSTRINGVectorView &view) = 0 ;
	virtual HRESULT __stdcall IndexOf(void * item, /* out */ unsigned &index, /* out */ bool &found) = 0 ;
	virtual HRESULT __stdcall SetAt(unsigned index, void * item) = 0 ;
	virtual HRESULT __stdcall InsertAt(unsigned index, void * item) = 0 ;
	virtual HRESULT __stdcall RemoveAt(unsigned index) = 0 ;
	virtual HRESULT __stdcall Append(void * item) = 0 ;
	virtual HRESULT __stdcall RemoveAtEnd(void) = 0 ;
	virtual HRESULT __stdcall Clear(void) = 0 ;
	virtual HRESULT __stdcall GetMany(unsigned startIndex, unsigned capacity, PHSTRING items, /* out */ unsigned &actual) = 0 ;
	virtual HRESULT __stdcall ReplaceAll(unsigned count, PHSTRING value) = 0 ;
};

__interface  INTERFACE_UUID("{5A648006-843A-4DA9-865B-9D26E5DFAD7B}") IAsyncAction  : public IInspectable 
{
	virtual HRESULT __stdcall put_Completed(_di_IAsyncActionCompletedHandler handler) = 0 ;
	virtual HRESULT __stdcall get_Completed(/* out */ _di_IAsyncActionCompletedHandler &handler) = 0 ;
	virtual HRESULT __stdcall GetResults(void) = 0 ;
};

__interface  INTERFACE_UUID("{A4ED5C81-76C9-40BD-8BE6-B1D90FB20AE7}") IAsyncActionCompletedHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IAsyncAction asyncInfo, AsyncStatus asyncStatus) = 0 ;
};

__interface  INTERFACE_UUID("{905A0FEF-BC53-11DF-8C49-001E4FC686DA}") IBufferByteAccess  : public System::IInterface 
{
	virtual HRESULT __stdcall Buffer(/* out */ System::PByte &value) = 0 ;
};

__interface  INTERFACE_UUID("{00000036-0000-0000-C000-000000000046}") IAsyncInfo  : public IInspectable 
{
	virtual HRESULT __stdcall get_Id(/* out */ unsigned &id) = 0 ;
	virtual HRESULT __stdcall get_Status(/* out */ AsyncStatus &status) = 0 ;
	virtual HRESULT __stdcall get_ErrorCode(/* out */ HRESULT &errorCode) = 0 ;
	virtual HRESULT __stdcall Cancel(void) = 0 ;
	virtual HRESULT __stdcall Close(void) = 0 ;
};

__interface  INTERFACE_UUID("{FD944562-11D6-5EAB-BD72-701993B68FAC}") IBufferVectorView  : public IInspectable 
{
	virtual HRESULT __stdcall GetAt(unsigned index, /* out */ _di_IBuffer &item) = 0 ;
	virtual HRESULT __stdcall get_Size(/* out */ unsigned &size) = 0 ;
	virtual HRESULT __stdcall IndexOf(_di_IBuffer item, /* out */ unsigned &index, /* out */ bool &found) = 0 ;
	virtual HRESULT __stdcall GetMany(unsigned startIndex, unsigned capacity, PIBuffer items, /* out */ unsigned &actual) = 0 ;
};

__interface  INTERFACE_UUID("{57DC41E6-8B4D-5910-9703-D7C668436852}") IUInt32BufferMapView  : public IInspectable 
{
	virtual HRESULT __stdcall Lookup(unsigned key, /* out */ _di_IBuffer &value) = 0 ;
	virtual HRESULT __stdcall get_Size(/* out */ unsigned &size) = 0 ;
	virtual HRESULT __stdcall HasKey(unsigned key, /* out */ bool &found) = 0 ;
	virtual HRESULT __stdcall Split(/* out */ _di_IUInt32BufferMapView &firstPartition, /* out */ _di_IUInt32BufferMapView &secondPartition) = 0 ;
};

__interface  INTERFACE_UUID("{65066C36-090B-5466-B8E5-E7565DC34175}") IRadioVectorView  : public IInspectable 
{
	virtual HRESULT __stdcall GetAt(unsigned index, /* out */ _di_IRadio &item) = 0 ;
	virtual HRESULT __stdcall get_Size(/* out */ unsigned &size) = 0 ;
	virtual HRESULT __stdcall IndexOf(_di_IRadio item, /* out */ unsigned &index, /* out */ bool &found) = 0 ;
	virtual HRESULT __stdcall GetMany(unsigned startIndex, unsigned capacity, PIRadio items, /* out */ unsigned &actual) = 0 ;
};

__interface  INTERFACE_UUID("{8A5C7E3A-80E2-585B-8630-7A8E777F0354}") IRadioAsyncOperationCompletedHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IRadioAsyncOperation asyncInfo, AsyncStatus status) = 0 ;
};

__interface  INTERFACE_UUID("{BD248E73-F05F-574C-AE3D-9B95C4BF282A}") IRadioAccessStatusAsyncOperationCompletedHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IRadioAccessStatusAsyncOperation asyncInfo, AsyncStatus status) = 0 ;
};

__interface  INTERFACE_UUID("{FC6AA329-B586-5EBB-9E85-3F6B84EBDF18}") IRadioEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IRadio sender, _di_IInspectable e) = 0 ;
};

__interface  INTERFACE_UUID("{D30691E6-60A0-59C9-8965-5BBE282E8208}") IRadioStaticsAsyncOperationCompletedHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IRadioStaticsAsyncOperation asyncInfo, AsyncStatus status) = 0 ;
};

__interface  INTERFACE_UUID("{EAC62C40-8DBC-5854-8BA0-B7B9940E7389}") IRadioAsyncOperation  : public IInspectable 
{
	virtual HRESULT __stdcall put_Completed(_di_IRadioAsyncOperationCompletedHandler handler) = 0 ;
	virtual HRESULT __stdcall get_Completed(/* out */ _di_IRadioAsyncOperationCompletedHandler &handler) = 0 ;
	virtual HRESULT __stdcall GetResults(/* out */ _di_IRadio &results) = 0 ;
};

__interface  INTERFACE_UUID("{21FB30EF-072F-502C-9898-D0C3B2CD9AC5}") IRadioAccessStatusAsyncOperation  : public IInspectable 
{
	virtual HRESULT __stdcall put_Completed(_di_IRadioAccessStatusAsyncOperationCompletedHandler handler) = 0 ;
	virtual HRESULT __stdcall get_Completed(/* out */ _di_IRadioAccessStatusAsyncOperationCompletedHandler &handler) = 0 ;
	virtual HRESULT __stdcall GetResults(/* out */ RadioAccessStatus &results) = 0 ;
};

__interface  INTERFACE_UUID("{040B54A1-203E-58F5-943F-C1CCA86BD532}") IRadioStaticsAsyncOperation  : public IInspectable 
{
	virtual HRESULT __stdcall put_Completed(_di_IRadioStaticsAsyncOperationCompletedHandler handler) = 0 ;
	virtual HRESULT __stdcall get_Completed(/* out */ _di_IRadioStaticsAsyncOperationCompletedHandler &handler) = 0 ;
	virtual HRESULT __stdcall GetResults(/* out */ _di_IRadioVectorView &results) = 0 ;
};

__interface  INTERFACE_UUID("{252118DF-B33E-416A-875F-1CF38AE2D83E}") IRadio  : public IInspectable 
{
	virtual HRESULT __stdcall SetStateAsync(RadioState value, /* out */ _di_IRadioAccessStatusAsyncOperation &retval) = 0 ;
	virtual HRESULT __stdcall add_StateChanged(_di_IRadioEventHandler handler, /* out */ EventRegistrationToken &eventCookie) = 0 ;
	virtual HRESULT __stdcall remove_StateChanged(const EventRegistrationToken eventCookie) = 0 ;
	virtual HRESULT __stdcall get_State(/* out */ RadioState &value) = 0 ;
	virtual HRESULT __stdcall get_Name(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall get_Kind(/* out */ RadioKind &value) = 0 ;
};

__interface  INTERFACE_UUID("{5FB6A12E-67CB-46AE-AAE9-65919F86EFF4}") IRadioStatics  : public IInspectable 
{
	virtual HRESULT __stdcall GetRadiosAsync(/* out */ _di_IRadioStaticsAsyncOperation &value) = 0 ;
	virtual HRESULT __stdcall GetDeviceSelector(/* out */ void * &deviceSelector) = 0 ;
	virtual HRESULT __stdcall FromIdAsync(void * deviceId, /* out */ _di_IRadioAsyncOperation &value) = 0 ;
	virtual HRESULT __stdcall RequestAccessAsync(/* out */ _di_IRadioAccessStatusAsyncOperation &value) = 0 ;
};

__interface  INTERFACE_UUID("{DEDA0BCC-4F9D-4F58-9DBA-A9BC800408D5}") IDeviceAccessChangedEventArgs  : public IInspectable 
{
	virtual HRESULT __stdcall get_Status(/* out */ DeviceAccessStatus &value) = 0 ;
};

__interface  INTERFACE_UUID("{4C71D028-B793-5BCE-AE59-FA77F45A40D8}") IDeviceAccessInformationEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IDeviceAccessInformation sender, _di_IDeviceAccessChangedEventArgs e) = 0 ;
};

__interface  INTERFACE_UUID("{0BAA9A73-6DE5-4915-8DDD-9A0554A6F545}") IDeviceAccessInformation  : public IInspectable 
{
	virtual HRESULT __stdcall add_AccessChanged(_di_IDeviceAccessInformationEventHandler handler, /* out */ EventRegistrationToken &cookie) = 0 ;
	virtual HRESULT __stdcall remove_AccessChanged(const EventRegistrationToken cookie) = 0 ;
	virtual HRESULT __stdcall get_CurrentStatus(/* out */ DeviceAccessStatus &status) = 0 ;
};

__interface  INTERFACE_UUID("{EE154D83-805B-53E8-8469-90715036D013}") IDeviceAccessStatusAsyncOperationCompletedHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IDeviceAccessStatusAsyncOperation asyncInfo, AsyncStatus status) = 0 ;
};

__interface  INTERFACE_UUID("{C00BC2F2-A7F8-5F3F-80D1-2808EF6BCA10}") IDeviceAccessStatusAsyncOperation  : public IInspectable 
{
	virtual HRESULT __stdcall put_Completed(_di_IDeviceAccessStatusAsyncOperationCompletedHandler handler) = 0 ;
	virtual HRESULT __stdcall get_Completed(/* out */ _di_IDeviceAccessStatusAsyncOperationCompletedHandler &handler) = 0 ;
	virtual HRESULT __stdcall GetResults(/* out */ DeviceAccessStatus &results) = 0 ;
};

__interface  INTERFACE_UUID("{64B89265-D341-4922-B38A-DD4AF8808C4E}") IDataWriter  : public IInspectable 
{
	virtual HRESULT __stdcall get_UnstoredBufferLength(/* out */ unsigned &value) = 0 ;
	virtual HRESULT __stdcall get_UnicodeEncoding(/* out */ UnicodeEncoding &value) = 0 ;
	virtual HRESULT __stdcall put_UnicodeEncoding(UnicodeEncoding value) = 0 ;
	virtual HRESULT __stdcall get_ByteOrder(/* out */ ByteOrder &value) = 0 ;
	virtual HRESULT __stdcall put_ByteOrder(ByteOrder value) = 0 ;
	virtual HRESULT __stdcall WriteByte(System::Byte value) = 0 ;
	virtual HRESULT __stdcall WriteBytes(unsigned __valueSize, System::PByte value) = 0 ;
	virtual HRESULT __stdcall WriteBuffer(_di_IBuffer buffer) = 0 ;
	virtual HRESULT __stdcall WriteBufferRange(_di_IBuffer buffer, unsigned start, unsigned count) = 0 ;
	virtual HRESULT __stdcall WriteBoolean(bool value) = 0 ;
	virtual HRESULT __stdcall WriteGuid(const GUID value) = 0 ;
	virtual HRESULT __stdcall WriteInt16(short value) = 0 ;
	virtual HRESULT __stdcall WriteInt32(int value) = 0 ;
	virtual HRESULT __stdcall WriteInt64(__int64 value) = 0 ;
	virtual HRESULT __stdcall WriteUInt16(System::Word value) = 0 ;
	virtual HRESULT __stdcall WriteUInt32(unsigned value) = 0 ;
	virtual HRESULT __stdcall WriteUInt64(unsigned __int64 value) = 0 ;
	virtual HRESULT __stdcall WriteSingle(float value) = 0 ;
	virtual HRESULT __stdcall WriteDouble(double value) = 0 ;
	virtual HRESULT __stdcall WriteDateTime(const DateTime value) = 0 ;
	virtual HRESULT __stdcall WriteTimeSpan(const TimeSpan value) = 0 ;
	virtual HRESULT __stdcall WriteString(void * value, /* out */ unsigned &codeUnitCount) = 0 ;
	virtual HRESULT __stdcall MeasureString(void * value, /* out */ unsigned &codeUnitCount) = 0 ;
	virtual HRESULT __stdcall StoreAsync(/* out */ System::_di_IInterface &operation) = 0 ;
	virtual HRESULT __stdcall FlushAsync(/* out */ System::_di_IInterface &operation) = 0 ;
	virtual HRESULT __stdcall DetachBuffer(/* out */ _di_IBuffer &buffer) = 0 ;
	virtual HRESULT __stdcall DetachStream(/* out */ System::_di_IInterface &outputStream) = 0 ;
};

__interface  INTERFACE_UUID("{BF666554-7605-5D9A-B14E-18D8C8472AFE}") IBufferAsyncOperationProgressHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IStreamAsyncOperationWithProgress asyncInfo, unsigned progressInfo) = 0 ;
};

__interface  INTERFACE_UUID("{06386A7A-E009-5B0B-AB68-A8E48B516647}") IBufferAsyncOperationWithProgressCompletedHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IStreamAsyncOperationWithProgress asyncInfo, AsyncStatus status) = 0 ;
};

__interface  INTERFACE_UUID("{D26B2819-897F-5C7D-84D6-56D796561431}") IStreamAsyncOperationWithProgress  : public IInspectable 
{
	virtual HRESULT __stdcall put_Progress(_di_IBufferAsyncOperationProgressHandler handler) = 0 ;
	virtual HRESULT __stdcall get_Progress(/* out */ _di_IBufferAsyncOperationProgressHandler &handler) = 0 ;
	virtual HRESULT __stdcall put_Completed(_di_IBufferAsyncOperationWithProgressCompletedHandler handler) = 0 ;
	virtual HRESULT __stdcall get_Completed(/* out */ _di_IBufferAsyncOperationWithProgressCompletedHandler &handler) = 0 ;
	virtual HRESULT __stdcall GetResults(/* out */ _di_IBuffer &results) = 0 ;
};

__interface  INTERFACE_UUID("{905A0FE2-BC53-11DF-8C49-001E4FC686DA}") IInputStream  : public IInspectable 
{
	virtual HRESULT __stdcall ReadAsync(_di_IBuffer buffer, unsigned count, InputStreamOptions options, /* out */ _di_IStreamAsyncOperationWithProgress &operation) = 0 ;
};

__interface  INTERFACE_UUID("{EA0FE405-D432-5AC7-9EF8-5A65E1F97D7E}") IUint32AsyncOperationProgressHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IUint32AsyncOperationWithProgress asyncInfo, unsigned progressInfo) = 0 ;
};

__interface  INTERFACE_UUID("{1E466DC5-840F-54F9-B877-5E3A9F4B6C74}") IUInt32AsyncOperationWithProgressCompletedHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IUint32AsyncOperationWithProgress asyncInfo, AsyncStatus status) = 0 ;
};

__interface  INTERFACE_UUID("{ECCB574A-C684-5572-A679-6B0842CFB57F}") IUint32AsyncOperationWithProgress  : public IInspectable 
{
	virtual HRESULT __stdcall put_Progress(_di_IUint32AsyncOperationProgressHandler handler) = 0 ;
	virtual HRESULT __stdcall get_Progress(/* out */ _di_IUint32AsyncOperationProgressHandler &handler) = 0 ;
	virtual HRESULT __stdcall put_Completed(_di_IUInt32AsyncOperationWithProgressCompletedHandler handler) = 0 ;
	virtual HRESULT __stdcall get_Completed(/* out */ _di_IUInt32AsyncOperationWithProgressCompletedHandler &handler) = 0 ;
	virtual HRESULT __stdcall GetResults(/* out */ unsigned &results) = 0 ;
};

__interface  INTERFACE_UUID("{C50898F6-C536-5F47-8583-8B2C2438A13B}") IInspectableEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IInspectable sender, _di_IInspectable args) = 0 ;
};

__interface  INTERFACE_UUID("{5233899B-BA7E-504F-BB83-CEEBAC62DECF}") IGuidAsyncOperationCompletedHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IGuidAsyncOperationCompletedHandler asyncInfo, AsyncStatus asyncStatus) = 0 ;
};

__interface  INTERFACE_UUID("{6607BC41-294B-5975-9C3F-4B49836D0916}") IGuidAsyncOperation  : public IInspectable 
{
	virtual HRESULT __stdcall put_Completed(_di_IGuidAsyncOperationCompletedHandler handler) = 0 ;
	virtual HRESULT __stdcall get_Completed(/* out */ _di_IGuidAsyncOperationCompletedHandler &result) = 0 ;
	virtual HRESULT __stdcall GetResults(/* out */ GUID &result) = 0 ;
};

__interface  INTERFACE_UUID("{C1D3D1A2-AE17-5A5F-B5A2-BDCC8844889A}") IBooleanAsyncOperationCompletedHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IBooleanAsyncOperation asyncInfo, AsyncStatus status) = 0 ;
};

__interface  INTERFACE_UUID("{CDB5EFB3-5788-509D-9BE1-71CCB8A3362A}") IBooleanAsyncOperation  : public IInspectable 
{
	virtual HRESULT __stdcall put_Completed(_di_IBooleanAsyncOperationCompletedHandler handler) = 0 ;
	virtual HRESULT __stdcall get_Completed(/* out */ _di_IBooleanAsyncOperationCompletedHandler &handler) = 0 ;
	virtual HRESULT __stdcall GetResults(/* out */ bool &results) = 0 ;
};

__interface  INTERFACE_UUID("{905A0FE6-BC53-11DF-8C49-001E4FC686DA}") IOutputStream  : public IInspectable 
{
	virtual HRESULT __stdcall WriteAsync(_di_IBuffer buffer, /* out */ _di_IUint32AsyncOperationWithProgress &operation) = 0 ;
	virtual HRESULT __stdcall FlushAsync(/* out */ _di_IBooleanAsyncOperation &operation) = 0 ;
};

__interface  INTERFACE_UUID("{20D8C576-8D8A-4DBA-9722-A16C4D984980}") IStreamSocketListenerControl  : public IInspectable 
{
	virtual HRESULT __stdcall get_QualityOfService(/* out */ SocketQualityOfService &value) = 0 ;
	virtual HRESULT __stdcall put_QualityOfService(SocketQualityOfService value) = 0 ;
};

__interface  INTERFACE_UUID("{948BB665-2C3E-404B-B8B0-8EB249A2B0A1}") IStreamSocketListenerControl2  : public IInspectable 
{
	virtual HRESULT __stdcall get_NoDelay(/* out */ bool &value) = 0 ;
	virtual HRESULT __stdcall put_NoDelay(bool value) = 0 ;
	virtual HRESULT __stdcall get_KeepAlive(/* out */ bool &value) = 0 ;
	virtual HRESULT __stdcall put_KeepAlive(bool value) = 0 ;
	virtual HRESULT __stdcall get_OutboundBufferSizeInBytes(/* out */ unsigned &value) = 0 ;
	virtual HRESULT __stdcall put_OutboundBufferSizeInBytes(unsigned value) = 0 ;
	virtual HRESULT __stdcall get_OutboundUnicastHopLimit(/* out */ System::Byte &value) = 0 ;
	virtual HRESULT __stdcall put_OutboundUnicastHopLimit(System::Byte value) = 0 ;
};

__interface  INTERFACE_UUID("{E62BA82F-A63A-430B-BF62-29E93E5633B4}") IStreamSocketListenerInformation  : public IInspectable 
{
	virtual HRESULT __stdcall get_LocalPort(/* out */ void * &value) = 0 ;
};

__interface  INTERFACE_UUID("{FE25ADF1-92AB-4AF3-9992-0F4C85E36CC4}") IStreamSocketControl  : public IInspectable 
{
	virtual HRESULT __stdcall get_NoDelay(/* out */ bool &value) = 0 ;
	virtual HRESULT __stdcall put_NoDelay(bool value) = 0 ;
	virtual HRESULT __stdcall get_KeepAlive(/* out */ bool &value) = 0 ;
	virtual HRESULT __stdcall put_KeepAlive(bool value) = 0 ;
	virtual HRESULT __stdcall get_OutboundBufferSizeInBytes(/* out */ unsigned &value) = 0 ;
	virtual HRESULT __stdcall put_OutboundBufferSizeInBytes(unsigned value) = 0 ;
	virtual HRESULT __stdcall get_QualityOfService(/* out */ SocketQualityOfService &value) = 0 ;
	virtual HRESULT __stdcall put_QualityOfService(SocketQualityOfService value) = 0 ;
	virtual HRESULT __stdcall get_OutboundUnicastHopLimit(/* out */ System::Byte &value) = 0 ;
	virtual HRESULT __stdcall put_OutboundUnicastHopLimit(System::Byte value) = 0 ;
};

__interface  INTERFACE_UUID("{3B80AE30-5E68-4205-88F0-DC85D2E25DED}") IStreamSocketInformation  : public IInspectable 
{
	virtual HRESULT __stdcall get_LocalAddress(/* out */ _di_IHostName &value) = 0 ;
	virtual HRESULT __stdcall get_LocalPort(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall get_RemoteHostName(/* out */ _di_IHostName &value) = 0 ;
	virtual HRESULT __stdcall get_RemoteAddress(/* out */ _di_IHostName &value) = 0 ;
	virtual HRESULT __stdcall get_RemoteServiceName(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall get_RemotePort(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall get_RoundTripTimeStatistics(/* out */ RoundTripTimeStatistics &value) = 0 ;
	virtual HRESULT __stdcall get_BandwidthStatistics(/* out */ BandwidthStatistics &value) = 0 ;
	virtual HRESULT __stdcall get_ProtectionLevel(/* out */ SocketProtectionLevel &value) = 0 ;
	virtual HRESULT __stdcall get_SessionKey(/* out */ _di_IBuffer &value) = 0 ;
};

__interface  INTERFACE_UUID("{69A22CF3-FC7B-4857-AF38-F6E7DE6A5B49}") IStreamSocket  : public IInspectable 
{
	virtual HRESULT __stdcall get_Control(/* out */ _di_IStreamSocketControl &value) = 0 ;
	virtual HRESULT __stdcall get_Information(/* out */ _di_IStreamSocketInformation &value) = 0 ;
	virtual HRESULT __stdcall get_InputStream(/* out */ _di_IInputStream &value) = 0 ;
	virtual HRESULT __stdcall get_OutputStream(/* out */ _di_IOutputStream &value) = 0 ;
	virtual HRESULT __stdcall ConnectWithEndpointPairAsync(_di_IEndpointPair endpointPair, /* out */ _di_IAsyncAction &operation) = 0 ;
	virtual HRESULT __stdcall ConnectAsync(_di_IHostName remoteHostName, void * remoteServiceName, /* out */ _di_IAsyncAction &operation) = 0 ;
	virtual HRESULT __stdcall ConnectWithEndpointPairAndProtectionLevelAsync(_di_IEndpointPair endpointPair, SocketProtectionLevel protectionLevel, /* out */ _di_IAsyncAction &operation) = 0 ;
	virtual HRESULT __stdcall ConnectWithProtectionLevelAsync(_di_IHostName remoteHostName, void * remoteServiceName, SocketProtectionLevel protectionLevel, /* out */ _di_IAsyncAction &operation) = 0 ;
	virtual HRESULT __stdcall UpgradeToSslAsync(SocketProtectionLevel protectionLevel, _di_IHostName validationHostName, /* out */ _di_IAsyncAction &operation) = 0 ;
};

__interface  INTERFACE_UUID("{29D0E575-F314-4D09-ADF0-0FBD967FBD9F}") IStreamSocket2  : public IInspectable 
{
	virtual HRESULT __stdcall ConnectWithProtectionLevelAndAdapterAsync(_di_IHostName remoteHostName, void * remoteServiceName, SocketProtectionLevel protectionLevel, _di_INetworkAdapter adapter, /* out */ _di_IAsyncAction &operation) = 0 ;
};

__interface  INTERFACE_UUID("{43B04D64-4C85-4396-A637-1D973F6EBD49}") ISocketActivityContext  : public IInspectable 
{
	virtual HRESULT __stdcall get_Data(/* out */ _di_IBuffer &value) = 0 ;
};

__interface  INTERFACE_UUID("{3F430B00-9D28-4854-BAC3-2301941EC223}") IStreamSocket3  : public IInspectable 
{
	virtual HRESULT __stdcall CancelIOAsync(/* out */ _di_IAsyncAction &operation) = 0 ;
	virtual HRESULT __stdcall EnableTransferOwnership(const GUID taskId) = 0 ;
	virtual HRESULT __stdcall EnableTransferOwnershipWithConnectedStandbyAction(const GUID taskId, SocketActivityConnectedStandbyAction connectedStandbyAction) = 0 ;
	virtual HRESULT __stdcall TransferOwnership(void * socketId) = 0 ;
	virtual HRESULT __stdcall TransferOwnershipWithContext(void * socketId, _di_ISocketActivityContext data) = 0 ;
	virtual HRESULT __stdcall TransferOwnershipWithContextAndKeepAliveTime(void * socketId, _di_ISocketActivityContext data, const TimeSpan keepAliveTime) = 0 ;
};

__interface  INTERFACE_UUID("{0C472EA9-373F-447B-85B1-DDD4548803BA}") IStreamSocketListenerConnectionReceivedEventArgs  : public IInspectable 
{
	virtual HRESULT __stdcall get_Socket(/* out */ _di_IStreamSocket &value) = 0 ;
};

__interface  INTERFACE_UUID("{33D00D41-C94F-5A61-9AB7-280DCEFA0B08}") IStreamSocketListenerConnectionReceivedEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IStreamSocketListener sender, _di_IStreamSocketListenerConnectionReceivedEventArgs e) = 0 ;
};

__interface  INTERFACE_UUID("{FF513437-DF9F-4DF0-BF82-0EC5D7B35AAE}") IStreamSocketListener  : public IInspectable 
{
	virtual HRESULT __stdcall get_Control(/* out */ _di_IStreamSocketListenerControl &value) = 0 ;
	virtual HRESULT __stdcall get_Information(/* out */ _di_IStreamSocketListenerInformation &value) = 0 ;
	virtual HRESULT __stdcall BindServiceNameAsync(void * localServiceName, /* out */ _di_IAsyncAction &operation) = 0 ;
	virtual HRESULT __stdcall BindEndpointAsync(_di_IHostName localHostName, void * localServiceName, /* out */ _di_IAsyncAction &operation) = 0 ;
	virtual HRESULT __stdcall add_ConnectionReceived(_di_IStreamSocketListenerConnectionReceivedEventHandler eventHandler, /* out */ EventRegistrationToken &eventCookie) = 0 ;
	virtual HRESULT __stdcall remove_ConnectionReceived(const EventRegistrationToken eventCookie) = 0 ;
};

__interface  INTERFACE_UUID("{658DC13E-BB3E-4458-B232-ED1088694B98}") IStreamSocketListener2  : public IInspectable 
{
	virtual HRESULT __stdcall BindServiceNameWithProtectionLevelAsync(void * localServiceName, SocketProtectionLevel protectionLevel, /* out */ _di_IAsyncAction &operation) = 0 ;
	virtual HRESULT __stdcall BindServiceNameWithProtectionLevelAndAdapterAsync(void * localServiceName, SocketProtectionLevel protectionLevel, _di_INetworkAdapter adapter, /* out */ _di_IAsyncAction &operation) = 0 ;
};

__interface  INTERFACE_UUID("{4798201C-BDF8-4919-8542-28D450E74507}") IStreamSocketListener3  : public IInspectable 
{
	virtual HRESULT __stdcall CancelIOAsync(/* out */ _di_IAsyncAction &operation) = 0 ;
	virtual HRESULT __stdcall EnableTransferOwnership(const GUID taskId) = 0 ;
	virtual HRESULT __stdcall EnableTransferOwnershipWithConnectedStandbyAction(const GUID taskId, SocketActivityConnectedStandbyAction connectedStandbyAction) = 0 ;
	virtual HRESULT __stdcall TransferOwnership(void * socketId) = 0 ;
	virtual HRESULT __stdcall TransferOwnershipWithContext(void * socketId, _di_ISocketActivityContext data) = 0 ;
};

__interface  INTERFACE_UUID("{2C4769F5-F684-40D5-8469-E8DBAAB70485}") IDeviceInformationPairing  : public IInspectable 
{
	virtual HRESULT __stdcall get_IsPaired(/* out */ bool &value) = 0 ;
	virtual HRESULT __stdcall get_CanPair(/* out */ bool &value) = 0 ;
	virtual HRESULT __stdcall PairAsync(/* out */ _di_IDevicePairingResultAsyncOperation &result) = 0 ;
	virtual HRESULT __stdcall PairWithProtectionLevelAsync(DevicePairingProtectionLevel minProtectionLevel, /* out */ _di_IDevicePairingResultAsyncOperation &result) = 0 ;
};

__interface  INTERFACE_UUID("{F156A638-7997-48D9-A10C-269D46533F48}") IDeviceInformation2  : public IInspectable 
{
	virtual HRESULT __stdcall get_Kind(/* out */ DeviceInformationKind &value) = 0 ;
	virtual HRESULT __stdcall get_Pairing(/* out */ _di_IDeviceInformationPairing &value) = 0 ;
};

__interface  INTERFACE_UUID("{482CB27C-83BB-420E-BE51-6602B222DE54}") IDevicePairingSettings  : public IInspectable 
{
	
};

__interface  INTERFACE_UUID("{85138C02-4EE6-4914-8370-107A39144C0E}") IDeviceInformationCustomPairing  : public IInspectable 
{
	virtual HRESULT __stdcall PairAsync(DevicePairingKinds pairingKindsSupported, /* out */ _di_IDevicePairingResultAsyncOperation &result) = 0 ;
	virtual HRESULT __stdcall PairWithProtectionLevelAsync(DevicePairingKinds pairingKindsSupported, DevicePairingProtectionLevel minProtectionLevel, /* out */ _di_IDevicePairingResultAsyncOperation &result) = 0 ;
	virtual HRESULT __stdcall PairWithProtectionLevelAndSettingsAsync(DevicePairingKinds pairingKindsSupported, DevicePairingProtectionLevel minProtectionLevel, _di_IDevicePairingSettings devicePairingSettings, /* out */ _di_IDevicePairingResultAsyncOperation &result) = 0 ;
	virtual HRESULT __stdcall add_PairingRequested(_di_IDevicePairingRequestedEventHandler handler, /* out */ EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_PairingRequested(const EventRegistrationToken token) = 0 ;
};

__interface  INTERFACE_UUID("{F68612FD-0AEE-4328-85CC-1C742BB1790D}") IDeviceInformationPairing2  : public IInspectable 
{
	virtual HRESULT __stdcall get_ProtectionLevel(/* out */ DevicePairingProtectionLevel &value) = 0 ;
	virtual HRESULT __stdcall get_Custom(/* out */ _di_IDeviceInformationCustomPairing &value) = 0 ;
	virtual HRESULT __stdcall PairWithProtectionLevelAndSettingsAsync(DevicePairingProtectionLevel minProtectionLevel, _di_IDevicePairingSettings devicePairingSettings, /* out */ _di_IDevicePairingResultAsyncOperation &result) = 0 ;
	virtual HRESULT __stdcall UnpairAsync(/* out */ _di_IDeviceUnpairingResultAsyncOperation &result) = 0 ;
};

__interface  INTERFACE_UUID("{9520E64B-15B2-52A6-98ED-3191FA6CF68A}") IGUIDVectorView  : public IInspectable 
{
	virtual HRESULT __stdcall GetAt(unsigned index, /* out */ GUID &item) = 0 ;
	virtual HRESULT __stdcall get_Size(/* out */ unsigned &size) = 0 ;
	virtual HRESULT __stdcall IndexOf(const GUID item, /* out */ unsigned &index, /* out */ bool &found) = 0 ;
	virtual HRESULT __stdcall GetMany(unsigned startIndex, unsigned capacity, System::PGUID items, /* out */ unsigned &actual) = 0 ;
};

__interface  INTERFACE_UUID("{482E676D-B913-5EC1-AFA8-5F96922E94AE}") IGUIDVector  : public IInspectable 
{
	virtual HRESULT __stdcall GetAt(unsigned index, /* out */ GUID &item) = 0 ;
	virtual HRESULT __stdcall get_Size(/* out */ unsigned &size) = 0 ;
	virtual HRESULT __stdcall GetView(/* out */ _di_IGUIDVectorView &view) = 0 ;
	virtual HRESULT __stdcall IndexOf(const GUID item, /* out */ unsigned &index, /* out */ bool &found) = 0 ;
	virtual HRESULT __stdcall SetAt(unsigned index, const GUID item) = 0 ;
	virtual HRESULT __stdcall InsertAt(unsigned index, const GUID item) = 0 ;
	virtual HRESULT __stdcall RemoveAt(unsigned index) = 0 ;
	virtual HRESULT __stdcall Append(const GUID item) = 0 ;
	virtual HRESULT __stdcall RemoveAtEnd(void) = 0 ;
	virtual HRESULT __stdcall Clear(void) = 0 ;
	virtual HRESULT __stdcall GetMany(unsigned startIndex, unsigned capacity, System::PGUID items, /* out */ unsigned &actual) = 0 ;
	virtual HRESULT __stdcall ReplaceAll(unsigned count, System::PGUID value) = 0 ;
};

__interface  INTERFACE_UUID("{7EE0247F-5F57-5CB2-B40E-18B5A211D6C3}") IDevicePairingResultAsyncOperationCompletedHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IDevicePairingResultAsyncOperation asyncInfo, AsyncStatus status) = 0 ;
};

__interface  INTERFACE_UUID("{FA65231F-4178-5DE1-B2CC-03E22D7702B4}") IDevicePairingRequestedEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IDeviceInformationCustomPairing sender, _di_IDevicePairingRequestedEventArgs e) = 0 ;
};

__interface  INTERFACE_UUID("{9BBE6EB9-DB2D-5160-A20C-F0C265F20D8E}") IDeviceUnpairingResultAsyncOperationCompletedHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IDeviceUnpairingResultAsyncOperation asyncInfo, AsyncStatus status) = 0 ;
};

__interface  INTERFACE_UUID("{1002DB74-8948-591E-815D-E40B667599A3}") IDevicePairingResultAsyncOperation  : public IInspectable 
{
	virtual HRESULT __stdcall put_Completed(_di_IDevicePairingResultAsyncOperationCompletedHandler handler) = 0 ;
	virtual HRESULT __stdcall get_Completed(/* out */ _di_IDevicePairingResultAsyncOperationCompletedHandler &handler) = 0 ;
	virtual HRESULT __stdcall GetResults(/* out */ _di_IDevicePairingResult &results) = 0 ;
};

__interface  INTERFACE_UUID("{2BB4DF3D-BD7E-5FE0-9020-56DC0D30B935}") IDeviceUnpairingResultAsyncOperation  : public IInspectable 
{
	virtual HRESULT __stdcall put_Completed(_di_IDeviceUnpairingResultAsyncOperationCompletedHandler handler) = 0 ;
	virtual HRESULT __stdcall get_Completed(/* out */ _di_IDeviceUnpairingResultAsyncOperationCompletedHandler &handler) = 0 ;
	virtual HRESULT __stdcall GetResults(/* out */ _di_IDeviceUnpairingResult &results) = 0 ;
};

__interface  INTERFACE_UUID("{072B02BF-DD95-4025-9B37-DE51ADBA37B7}") IDevicePairingResult  : public IInspectable 
{
	virtual HRESULT __stdcall get_Status(/* out */ DevicePairingResultStatus &status) = 0 ;
	virtual HRESULT __stdcall get_ProtectionLevelUsed(/* out */ DevicePairingProtectionLevel &value) = 0 ;
};

__interface  INTERFACE_UUID("{66F44AD3-79D9-444B-92CF-A92EF72571C7}") IDeviceUnpairingResult  : public IInspectable 
{
	virtual HRESULT __stdcall get_Status(/* out */ DeviceUnpairingResultStatus &status) = 0 ;
};

__interface  INTERFACE_UUID("{F717FC56-DE6B-487F-8376-0180ACA69963}") IDevicePairingRequestedEventArgs  : public IInspectable 
{
	virtual HRESULT __stdcall get_DeviceInformation(/* out */ _di_IDeviceInformation &value) = 0 ;
	virtual HRESULT __stdcall get_PairingKind(/* out */ DevicePairingKinds &value) = 0 ;
	virtual HRESULT __stdcall get_Pin(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall Accept(void) = 0 ;
	virtual HRESULT __stdcall AcceptWithPin(void * pin) = 0 ;
	virtual HRESULT __stdcall GetDeferral(/* out */ _di_IDeferral &result) = 0 ;
};

__interface  INTERFACE_UUID("{30D5A829-7FA4-4026-83BB-D75BAE4EA99E}") IClosable  : public IInspectable 
{
	virtual HRESULT __stdcall Close(void) = 0 ;
};

__interface  INTERFACE_UUID("{9E365E57-48B2-4160-956F-C7385120BBFC}") IUriRuntimeClass  : public IInspectable 
{
	virtual HRESULT __stdcall get_AbsoluteUri(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall get_DisplayUri(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall get_Domain(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall get_Extension(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall get_Fragment(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall get_Host(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall get_Password(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall get_Path(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall get_Query(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall get_QueryParsed(/* out */ _di_IWwwFormUrlDecoderRuntimeClass &ppWwwFormUrlDecoder) = 0 ;
	virtual HRESULT __stdcall get_RawUri(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall get_SchemeName(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall get_UserName(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall get_Port(/* out */ int &value) = 0 ;
	virtual HRESULT __stdcall get_Suspicious(/* out */ bool &value) = 0 ;
	virtual HRESULT __stdcall Equals(_di_IUriRuntimeClass pUri, /* out */ bool &value) = 0 ;
	virtual HRESULT __stdcall CombineUri(void * relativeUri, /* out */ _di_IUriRuntimeClass &instance) = 0 ;
};

__interface  INTERFACE_UUID("{D45A0451-F225-4542-9296-0E1DF5D254DF}") IWwwFormUrlDecoderRuntimeClass  : public IInspectable 
{
	virtual HRESULT __stdcall GetFirstValueByName(void * name, /* out */ void * &phstrValue) = 0 ;
};

__interface  INTERFACE_UUID("{72D0568C-A274-41CD-82A8-989D40B9B05E}") IAdaptiveCard  : public IInspectable 
{
	virtual HRESULT __stdcall ToJson(/* out */ void * &result) = 0 ;
};

__interface  INTERFACE_UUID("{69473EB2-8031-49BE-80BB-96CB46D99ABA}") IWebAccount  : public IInspectable 
{
	virtual HRESULT __stdcall get_WebAccountProvider(/* out */ _di_IWebAccountProvider &value) = 0 ;
	virtual HRESULT __stdcall get_UserName(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall get_State(/* out */ WebAccountState &value) = 0 ;
};

__interface  INTERFACE_UUID("{29DCC8C3-7AB9-4A7C-A336-B942F9DBF7C7}") IWebAccountProvider  : public IInspectable 
{
	virtual HRESULT __stdcall get_Id(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall get_DisplayName(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall get_IconUri(/* out */ _di_IUriRuntimeClass &value) = 0 ;
};

__interface  INTERFACE_UUID("{44A9796F-723E-4FDF-A218-033E75B0C084}") IUriRuntimeClassFactory  : public IInspectable 
{
	virtual HRESULT __stdcall CreateUri(void * uri, /* out */ _di_IUriRuntimeClass &instance) = 0 ;
	virtual HRESULT __stdcall CreateWithRelativeUri(void * baseUri, void * relativeUri, /* out */ _di_IUriRuntimeClass &instance) = 0 ;
};

__interface  INTERFACE_UUID("{F4706AB1-55A3-5270-AFB2-732988FE8227}") IHostNameVectorView  : public IInspectable 
{
	virtual HRESULT __stdcall GetAt(unsigned index, /* out */ _di_IHostName &item) = 0 ;
	virtual HRESULT __stdcall get_Size(/* out */ unsigned &size) = 0 ;
	virtual HRESULT __stdcall IndexOf(_di_IHostName item, /* out */ unsigned &index, /* out */ bool &found) = 0 ;
	virtual HRESULT __stdcall GetMany(unsigned startIndex, unsigned capacity, /* out */ PIHostName &items, /* out */ unsigned &actual) = 0 ;
};

__interface  INTERFACE_UUID("{D45156A6-1E24-5DDD-ABB4-6188ABA4D5BF}") ILimitedAccessFeatureRequestResult  : public IInspectable 
{
	virtual HRESULT __stdcall get_FeatureId(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall get_Status(/* out */ LimitedAccessFeatureStatus &value) = 0 ;
	virtual HRESULT __stdcall get_EstimatedRemovalDate(/* out */ _di_IDateTimeReference &value) = 0 ;
};

__interface  INTERFACE_UUID("{8BE612D4-302B-5FBF-A632-1A99E43E8925}") ILimitedAccessFeaturesStatics  : public IInspectable 
{
	virtual HRESULT __stdcall TryUnlockFeature(void * featureId, void * token, void * attestation, /* out */ _di_ILimitedAccessFeatureRequestResult &result) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclWinRtDeviceWatcherStoppedEventHandler : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	Wclsync::TwclEvent* FEvent;
	
protected:
	HRESULT __stdcall Invoke(_di_IDeviceWatcher sender, _di_IInspectable e);
	
public:
	__fastcall TwclWinRtDeviceWatcherStoppedEventHandler(Wclsync::TwclEvent* const Event);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclWinRtDeviceWatcherStoppedEventHandler(void) { }
	
private:
	void *__IDeviceWatcherEventHandler;	// IDeviceWatcherEventHandler 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {9234630F-1FF4-54F6-9E3F-AC20369B7725}
	operator _di_IDeviceWatcherEventHandler()
	{
		_di_IDeviceWatcherEventHandler intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IDeviceWatcherEventHandler*(void) { return (IDeviceWatcherEventHandler*)&__IDeviceWatcherEventHandler; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclWinRtHStringIterator : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::UnicodeString FString;
	int FNdx;
	
protected:
	HRESULT __stdcall GetIids(/* out */ unsigned &iidCount, /* out */ System::PGUID &iids);
	HRESULT __stdcall GetRuntimeClassName(/* out */ void * &className);
	HRESULT __stdcall GetTrustLevel(/* out */ TrustLevel &trust);
	HRESULT __stdcall get_Current(/* out */ void * &current);
	HRESULT __stdcall get_HasCurrent(/* out */ bool &hasCurrent);
	HRESULT __stdcall MoveNext(/* out */ bool &hasCurrent);
	HRESULT __stdcall GetMany(unsigned capacity, PHSTRING items, /* out */ unsigned &actual);
	
public:
	__fastcall TwclWinRtHStringIterator(const System::UnicodeString Str);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclWinRtHStringIterator(void) { }
	
private:
	void *__IHSTRINGIterator;	// IHSTRINGIterator 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {8C304EBB-6615-50A4-8829-879ECD443236}
	operator _di_IHSTRINGIterator()
	{
		_di_IHSTRINGIterator intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IHSTRINGIterator*(void) { return (IHSTRINGIterator*)&__IHSTRINGIterator; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclWinRtHStringIterable : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::UnicodeString FString;
	
protected:
	HRESULT __stdcall GetIids(/* out */ unsigned &iidCount, /* out */ System::PGUID &iids);
	HRESULT __stdcall GetRuntimeClassName(/* out */ void * &className);
	HRESULT __stdcall GetTrustLevel(/* out */ TrustLevel &trust);
	HRESULT __stdcall First(/* out */ _di_IHSTRINGIterator &first);
	
public:
	__fastcall TwclWinRtHStringIterable(const System::UnicodeString Str);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclWinRtHStringIterable(void) { }
	
private:
	void *__IHSTRINGIterable;	// IHSTRINGIterable 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E2FCC7C1-3BFC-5A0B-B2B0-72E769D1CB7E}
	operator _di_IHSTRINGIterable()
	{
		_di_IHSTRINGIterable intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IHSTRINGIterable*(void) { return (IHSTRINGIterable*)&__IHSTRINGIterable; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclWinRtShortReference : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	short FValue;
	
protected:
	HRESULT __stdcall GetIids(/* out */ unsigned &iidCount, /* out */ System::PGUID &iids);
	HRESULT __stdcall GetRuntimeClassName(/* out */ void * &className);
	HRESULT __stdcall GetTrustLevel(/* out */ TrustLevel &trust);
	HRESULT __stdcall get_Value(/* out */ short &value);
	
public:
	__fastcall TwclWinRtShortReference(const short Value);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclWinRtShortReference(void) { }
	
private:
	void *__IShortReference;	// IShortReference 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {6EC9E41B-6709-5647-9918-A1270110FC4E}
	operator _di_IShortReference()
	{
		_di_IShortReference intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IShortReference*(void) { return (IShortReference*)&__IShortReference; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclWinRtUInt32Reference : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	unsigned FValue;
	
protected:
	HRESULT __stdcall GetIids(/* out */ unsigned &iidCount, /* out */ System::PGUID &iids);
	HRESULT __stdcall GetRuntimeClassName(/* out */ void * &className);
	HRESULT __stdcall GetTrustLevel(/* out */ TrustLevel &trust);
	HRESULT __stdcall get_Value(/* out */ unsigned &value);
	
public:
	__fastcall TwclWinRtUInt32Reference(const unsigned Value);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclWinRtUInt32Reference(void) { }
	
private:
	void *__IUInt32Reference;	// IUInt32Reference 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {513EF3AF-E784-5325-A91E-97C2B8111CF3}
	operator _di_IUInt32Reference()
	{
		_di_IUInt32Reference intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IUInt32Reference*(void) { return (IUInt32Reference*)&__IUInt32Reference; }
	#endif
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE GUID GUID_SERIAL_PORT;
extern DELPHI_PACKAGE GUID GUID_MODEM;
extern DELPHI_PACKAGE GUID GUID_COM0COM;
extern DELPHI_PACKAGE GUID GUID_USB;
extern DELPHI_PACKAGE GUID GUID_DEVINTERFACE_COMPORT;
static const System::Byte MAX_DEVICE_ID_LEN = System::Byte(0xc8);
static const System::Int8 CM_NOTIFY_FILTER_FLAG_ALL_INTERFACE_CLASSES = System::Int8(0x1);
static const System::Int8 CM_NOTIFY_FILTER_FLAG_ALL_DEVICE_INSTANCES = System::Int8(0x2);
static const System::Int8 CR_SUCCESS = System::Int8(0x0);
static const System::Int8 CR_DEFAULT = System::Int8(0x1);
static const System::Int8 CR_OUT_OF_MEMORY = System::Int8(0x2);
static const System::Int8 CR_INVALID_POINTER = System::Int8(0x3);
static const System::Int8 CR_INVALID_FLAG = System::Int8(0x4);
static const System::Int8 CR_INVALID_DEVNODE = System::Int8(0x5);
static const System::Int8 CR_INVALID_DEVINST = System::Int8(0x5);
static const System::Int8 CR_INVALID_RES_DES = System::Int8(0x6);
static const System::Int8 CR_INVALID_LOG_CONF = System::Int8(0x7);
static const System::Int8 CR_INVALID_ARBITRATOR = System::Int8(0x8);
static const System::Int8 CR_INVALID_NODELIST = System::Int8(0x9);
static const System::Int8 CR_DEVNODE_HAS_REQS = System::Int8(0xa);
static const System::Int8 CR_DEVINST_HAS_REQS = System::Int8(0xa);
static const System::Int8 CR_INVALID_RESOURCEID = System::Int8(0xb);
static const System::Int8 CR_DLVXD_NOT_FOUND = System::Int8(0xc);
static const System::Int8 CR_NO_SUCH_DEVNODE = System::Int8(0xd);
static const System::Int8 CR_NO_SUCH_DEVINST = System::Int8(0xd);
static const System::Int8 CR_NO_MORE_LOG_CONF = System::Int8(0xe);
static const System::Int8 CR_NO_MORE_RES_DES = System::Int8(0xf);
static const System::Int8 CR_ALREADY_SUCH_DEVNODE = System::Int8(0x10);
static const System::Int8 CR_ALREADY_SUCH_DEVINST = System::Int8(0x10);
static const System::Int8 CR_INVALID_RANGE_LIST = System::Int8(0x11);
static const System::Int8 CR_INVALID_RANGE = System::Int8(0x12);
static const System::Int8 CR_FAILURE = System::Int8(0x13);
static const System::Int8 CR_NO_SUCH_LOGICAL_DEV = System::Int8(0x14);
static const System::Int8 CR_CREATE_BLOCKED = System::Int8(0x15);
static const System::Int8 CR_NOT_SYSTEM_VM = System::Int8(0x16);
static const System::Int8 CR_REMOVE_VETOED = System::Int8(0x17);
static const System::Int8 CR_APM_VETOED = System::Int8(0x18);
static const System::Int8 CR_INVALID_LOAD_TYPE = System::Int8(0x19);
static const System::Int8 CR_BUFFER_SMALL = System::Int8(0x1a);
static const System::Int8 CR_NO_ARBITRATOR = System::Int8(0x1b);
static const System::Int8 CR_NO_REGISTRY_HANDLE = System::Int8(0x1c);
static const System::Int8 CR_REGISTRY_ERROR = System::Int8(0x1d);
static const System::Int8 CR_INVALID_DEVICE_ID = System::Int8(0x1e);
static const System::Int8 CR_INVALID_DATA = System::Int8(0x1f);
static const System::Int8 CR_INVALID_API = System::Int8(0x20);
static const System::Int8 CR_DEVLOADER_NOT_READY = System::Int8(0x21);
static const System::Int8 CR_NEED_RESTART = System::Int8(0x22);
static const System::Int8 CR_NO_MORE_HW_PROFILES = System::Int8(0x23);
static const System::Int8 CR_DEVICE_NOT_THERE = System::Int8(0x24);
static const System::Int8 CR_NO_SUCH_VALUE = System::Int8(0x25);
static const System::Int8 CR_WRONG_TYPE = System::Int8(0x26);
static const System::Int8 CR_INVALID_PRIORITY = System::Int8(0x27);
static const System::Int8 CR_NOT_DISABLEABLE = System::Int8(0x28);
static const System::Int8 CR_FREE_RESOURCES = System::Int8(0x29);
static const System::Int8 CR_QUERY_VETOED = System::Int8(0x2a);
static const System::Int8 CR_CANT_SHARE_IRQ = System::Int8(0x2b);
static const System::Int8 CR_NO_DEPENDENT = System::Int8(0x2c);
static const System::Int8 CR_SAME_RESOURCES = System::Int8(0x2d);
static const System::Int8 CR_NO_SUCH_REGISTRY_KEY = System::Int8(0x2e);
static const System::Int8 CR_INVALID_MACHINENAME = System::Int8(0x2f);
static const System::Int8 CR_REMOTE_COMM_FAILURE = System::Int8(0x30);
static const System::Int8 CR_MACHINE_UNAVAILABLE = System::Int8(0x31);
static const System::Int8 CR_NO_CM_SERVICES = System::Int8(0x32);
static const System::Int8 CR_ACCESS_DENIED = System::Int8(0x33);
static const System::Int8 CR_CALL_NOT_IMPLEMENTED = System::Int8(0x34);
static const System::Int8 CR_INVALID_PROPERTY = System::Int8(0x35);
static const System::Int8 CR_DEVICE_INTERFACE_ACTIVE = System::Int8(0x36);
static const System::Int8 CR_NO_SUCH_DEVICE_INTERFACE = System::Int8(0x37);
static const System::Int8 CR_INVALID_REFERENCE_STRING = System::Int8(0x38);
static const System::Int8 CR_INVALID_CONFLICT_LIST = System::Int8(0x39);
static const System::Int8 CR_INVALID_INDEX = System::Int8(0x3a);
static const System::Int8 CR_INVALID_STRUCTURE_SIZE = System::Int8(0x3b);
static const System::Int8 NUM_CR_RESULTS = System::Int8(0x3c);
static const System::Int8 CM_LOCATE_DEVNODE_NORMAL = System::Int8(0x0);
static const System::Int8 CM_LOCATE_DEVNODE_PHANTOM = System::Int8(0x1);
static const System::Int8 CM_LOCATE_DEVNODE_CANCELREMOVE = System::Int8(0x2);
static const System::Int8 CM_LOCATE_DEVNODE_NOVALIDATION = System::Int8(0x4);
static const System::Int8 CM_LOCATE_DEVNODE_BITS = System::Int8(0x7);
static const System::Int8 CM_GET_DEVICE_INTERFACE_LIST_PRESENT = System::Int8(0x0);
static const System::Int8 CM_GET_DEVICE_INTERFACE_LIST_ALL_DEVICES = System::Int8(0x1);
static const System::Int8 CM_GET_DEVICE_INTERFACE_LIST_BITS = System::Int8(0x1);
static const System::Int8 CM_PROB_DISABLED = System::Int8(0x16);
static const System::Int8 CM_DISABLE_UI_NOT_OK = System::Int8(0x4);
static const System::Int8 CM_DISABLE_PERSIST = System::Int8(0x8);
static const System::Word DN_HAS_PROBLEM = System::Word(0x400);
static const System::Word DN_PRIVATE_PROBLEM = System::Word(0x8000);
static const System::Int8 DN_STARTED = System::Int8(0x8);
extern DELPHI_PACKAGE DEVPROPKEY DEVPKEY_Device_ClassGuid;
extern DELPHI_PACKAGE DEVPROPKEY DEVPKEY_Device_FriendlyName;
extern DELPHI_PACKAGE DEVPROPKEY DEVPKEY_Device_InstanceId;
extern DELPHI_PACKAGE DEVPROPKEY DEVPKEY_Device_DeviceDesc;
extern DELPHI_PACKAGE DEVPROPKEY DEVPKEY_Device_HardwareIds;
extern DELPHI_PACKAGE DEVPROPKEY DEVPKEY_Device_Manufacturer;
extern DELPHI_PACKAGE DEVPROPKEY PKEY_DeviceInterface_Serial_PortName;
extern DELPHI_PACKAGE DEVPROPKEY PKEY_DeviceInterface_Bluetooth_DeviceAddress;
extern DELPHI_PACKAGE DEVPROPKEY PKEY_DeviceInterface_Bluetooth_ServiceGuid;
static const int IOCTL_SERIAL_SET_BAUD_RATE = int(0x1b0004);
static const int IOCTL_SERIAL_SET_DTR = int(0x1b0024);
static const int IOCTL_SERIAL_SET_LINE_CONTROL = int(0x1b000c);
static const int IOCTL_SERIAL_SET_CHARS = int(0x1b005c);
static const int IOCTL_SERIAL_SET_HANDFLOW = int(0x1b0064);
static const System::Int8 STOP_BIT_1 = System::Int8(0x0);
static const System::Int8 NO_PARITY = System::Int8(0x0);
#define DeviceInformationName L"Windows.Devices.Enumeration.DeviceInformation"
#define RadioName L"Windows.Devices.Radios.Radio"
#define DataWriterName L"Windows.Storage.Streams.DataWriter"
#define StreamSocketListenerName L"Windows.Networking.Sockets.StreamSocketListener"
#define UriRuntimeClassName L"Windows.Foundation.Uri"
#define PasswordCredentialFactoryName L"Windows.Security.Credentials.CredentialFactory"
#define PasswordCredentialName L"Windows.Security.Credentials.PasswordCredential"
#define PropertyValueName L"Windows.Foundation.PropertyValue"
#define LimitedAccessFeaturesName L"Windows.ApplicationModel.LimitedAccessFeatures"
extern DELPHI_PACKAGE unsigned __fastcall CM_Register_Notification(PCM_NOTIFY_FILTER pFilter, void * pContext, PCM_NOTIFY_CALLBACK pCallback, PHCMNOTIFICATION pNotifyContext);
extern DELPHI_PACKAGE unsigned __fastcall CM_Unregister_Notification(NativeUInt NotifyContex);
extern DELPHI_PACKAGE unsigned __fastcall CM_Locate_DevNode(PDEVINST pdnDevInst, System::WideChar * pDeviceID, unsigned ulFlags);
extern DELPHI_PACKAGE unsigned __fastcall CM_Get_DevNode_Property(unsigned dnDevInst, PDEVPROPKEY PropertyKey, PDEVPROPTYPE PropertyType, System::PByte PropertyBuffer, PULONG PropertyBufferSize, unsigned ulFlags);
extern DELPHI_PACKAGE unsigned __fastcall CM_Get_Device_Interface_List_Size(PULONG pulLen, System::PGUID InterfaceClassGuid, System::WideChar * pDeviceID, unsigned ulFlags);
extern DELPHI_PACKAGE unsigned __fastcall CM_Get_Device_Interface_List(System::PGUID InterfaceClassGuid, System::WideChar * pDeviceID, System::WideChar * Buffer, unsigned BufferLen, unsigned ulFlags);
extern DELPHI_PACKAGE unsigned __fastcall CM_Get_Device_Interface_Property(System::WideChar * pszDeviceInterface, PDEVPROPKEY PropertyKey, PDEVPROPTYPE PropertyType, System::PByte PropertyBuffer, PULONG PropertyBufferSize, unsigned ulFlags);
extern DELPHI_PACKAGE unsigned __fastcall CM_Get_DevNode_Status(PULONG pulStatus, PULONG pulProblemNumber, unsigned dnDevInst, unsigned ulFlags);
extern DELPHI_PACKAGE unsigned __fastcall CM_Disable_DevNode(unsigned dnDevInst, unsigned ulFlags);
extern DELPHI_PACKAGE unsigned __fastcall CM_Enable_DevNode(unsigned dnDevInst, unsigned ulFlags);
extern DELPHI_PACKAGE unsigned __fastcall CM_Get_Parent(PDEVINST pdnDevInst, unsigned dnDevInst, unsigned ulFlags);
extern DELPHI_PACKAGE bool __fastcall wclLoadCfgMgr(void);
extern DELPHI_PACKAGE bool __fastcall wclUnloadCfgMgr(void);
extern DELPHI_PACKAGE int __fastcall wclLoadWinRt(void);
extern DELPHI_PACKAGE int __fastcall wclUnloadWinRt(void);
extern DELPHI_PACKAGE int __fastcall wclWinRtStringToHString(const System::UnicodeString Str, /* out */ void * &hStr);
extern DELPHI_PACKAGE System::UnicodeString __fastcall wclWinRtHStringToString(const void * hStr);
extern DELPHI_PACKAGE void __fastcall wclWinRtDeleteHString(const void * hStr);
extern DELPHI_PACKAGE int __fastcall wclWinRtCreateInstance(const System::UnicodeString ClassName, const GUID &ClsId, /* out */ _di_IInspectable &Intf);
extern DELPHI_PACKAGE int __fastcall wclWinRtActivateFactory(const System::UnicodeString ClassName, const GUID &ClsId, /* out */ _di_IInspectable &Intf);
extern DELPHI_PACKAGE int __fastcall wclWinRtWaitAsync(const _di_IAsyncInfo Async, Wclsync::TwclEvent* const Event, const unsigned Timeout)/* overload */;
extern DELPHI_PACKAGE int __fastcall wclWinRtWaitAsync(const _di_IAsyncInfo Async, Wclsync::TwclEvent* const Event)/* overload */;
extern DELPHI_PACKAGE int __fastcall wclWinRtWaitAsync(const _di_IAsyncInfo Async)/* overload */;
extern DELPHI_PACKAGE int __fastcall wclWinRtLafReadPfn(/* out */ System::UnicodeString &Pfn, /* out */ System::UnicodeString &AppName, /* out */ System::UnicodeString &Publisher);
extern DELPHI_PACKAGE int __fastcall wclWinRtLafUnlock(const System::UnicodeString Laf);
extern DELPHI_PACKAGE HWND __fastcall wclCreateWindow(const System::UnicodeString Name);
extern DELPHI_PACKAGE void __fastcall wclDestroyWindow(const HWND hWnd);
extern DELPHI_PACKAGE bool __fastcall wclIsUserAnAdmin(void);
extern DELPHI_PACKAGE HRESULT __fastcall wclCreateMsXmlInstance(/* out */ _di_IXMLDOMDocument &Doc);
}	/* namespace Wclwinapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WCLWINAPI)
using namespace Wclwinapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WclwinapiHPP
