// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wclBluetooth.pas' rev: 30.00 (Windows)

#ifndef WclbluetoothHPP
#define WclbluetoothHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <wclMessaging.hpp>
#include <wclErrors.hpp>
#include <System.Classes.hpp>
#include <wclConnections.hpp>
#include <wclWinAPI.hpp>
#include <wclSync.hpp>
#include <wclConnectionErrors.hpp>
#include <wclBluetoothErrors.hpp>
#include <wclDriCommon.hpp>
#include <wclDriAsd.hpp>

//-- user supplied -----------------------------------------------------------

namespace Wclbluetooth
{
//-- forward type declarations -----------------------------------------------
struct TwclBluetoothService;
struct TwclVirtualComPort;
struct TwclBluetoothSdpProfile;
struct TwclGattUuid;
struct TwclGattService;
struct TwclGattCharacteristic;
struct TwclGattDescriptor;
struct TwclGattCharacteristicExtendedProperties;
struct TwclGattClientCharacteristicConfiguration;
struct TwclGattServerCharacteristicConfiguration;
struct TwclGattCharacteristicFormat;
struct TwclGattCharactertisticUserDescription;
struct TwclGattCharacteristicAggregateFormat;
struct TwclGattDescriptorValue;
struct TwclGattLocalDescriptor;
struct TwclGattLocalCharacteristicParameters;
struct TwclBluetoothOobData;
struct TwclBluetoothLeAdvertisementFrame;
struct TwclBluetoothLeConnectionParameters;
struct TwclBluetoothLeConnectionParametersValue;
struct TwclBluetoothLeConnectionPhyInfo;
struct TwclBluetoothLeConnectionPhy;
struct TwclBluetoothLeAdvertisementInfo;
struct TwclBluetoothLeAppleAirdropFrameData;
struct TwclBluetoothLeAppleAirplaySourceFrameData;
struct TwclBluetoothLeAppleAirplayTargetFrameData;
struct TwclBluetoothLeAppleAirprintFrameData;
struct TwclBluetoothLeAppleFindMyFrameData;
struct TwclBluetoothLeAppleHandoffFrameData;
struct TwclBluetoothLeAppleHeySiriFrameData;
struct TwclBluetoothLeAppleHomeKitFrameData;
struct TwclBluetoothLeAppleiBeaconFrameData;
struct TwclBluetoothLeAppleMagicSwitchFrameData;
struct TwclBluetoothLeAppleNearbyActionFrameData;
struct TwclBluetoothLeAppleNearbyInfoFrameData;
struct TwclBluetoothLeAppleProximityPairingFrameData;
struct TwclBluetoothLeAppleTetheringSourceFrameData;
struct TwclBluetoothLeAppleTetheringTargetFrameData;
struct TwclBluetoothLeAppleUnknownFrameData;
struct TwclWiiRemoteAccelCalibration;
struct TwclWiiRemoteLeds;
struct TwclWiiRemoteButtons;
struct TwclWiiRemote3D;
struct TwclWiiRemoteAccel;
struct TwclWiiRemote2D;
struct TwclWiiRemoteIrSensor;
struct TwclWiiRemoteIrSensors;
struct TwclWiiRemoteNunchukCalibration;
struct TwclWiiRemoteNunchuk;
struct TwclWiiRemoteClassicControllerButtons;
struct TwclWiiRemoteClassicControllerCalibration;
struct TwclWiiRemoteClassicController;
struct TwclWiiRemoteGuitarButtons;
struct TwclWiiRemoteGuitarFretButtons;
struct TwclWiiRemoteGuitar;
struct TwclWiiRemoteDrums;
struct TwclWiiRemoteBalanceBoardSensors;
struct TwclWiiRemoteBalanceBoardSensorsWeight;
struct TwclWiiRemoteBalanceBoardCalibration;
struct TwclWiiRemoteBalanceBoardGC;
struct TwclWiiRemoteBalanceBoard;
struct TwclBluetoothLePacketHeader;
struct TwclBluetoothLeAdvertisingPduHeader;
struct TwclBleSnifferLlData;
class DELPHICLASS TwclBluetoothRadio;
class DELPHICLASS TwclBluetoothManager;
class DELPHICLASS TwclRfCommClientConnection;
class DELPHICLASS TwclRfCommServerClientConnection;
class DELPHICLASS TwclRfCommServerConnection;
class DELPHICLASS TwclGattClientConnection;
class DELPHICLASS TwclGattLocalAttribute;
class DELPHICLASS TwclGattLocalCharacteristic;
class DELPHICLASS TwclGattLocalService;
class DELPHICLASS TwclGattLocalCharacteristicRequest;
class DELPHICLASS TwclGattLocalCharacteristicReadRequest;
class DELPHICLASS TwclGattLocalCharacteristicWriteRequest;
class DELPHICLASS TwclBluetoothGattServerClientParams;
class DELPHICLASS TwclGattServerClient;
class DELPHICLASS TwclGattServerConnection;
class DELPHICLASS TwclBluetoothLeBeaconWatcherConnection;
class DELPHICLASS TwclBluetoothLeAdvertisement;
class DELPHICLASS TwclBluetoothLeTxRssiAdvertisement;
class DELPHICLASS TwclBluetoothLeIdAdvertisement;
class DELPHICLASS TwclBluetoothLeiBeaconAdvertisement;
class DELPHICLASS TwclBluetoothLeCompanyIdAdvertisement;
class DELPHICLASS TwclBluetoothLeProximityBeaconAdvertisement;
class DELPHICLASS TwclBluetoothLeAltBeaconAdvertisement;
class DELPHICLASS TwclBluetoothLeEddystoneUidBeaconAdvertisement;
class DELPHICLASS TwclBluetoothLeEddystoneUrlBeaconAdvertisement;
class DELPHICLASS TwclBluetoothLe16ServiceAdvertisement;
class DELPHICLASS TwclBluetoothLe32ServiceAdvertisement;
class DELPHICLASS TwclBluetoothLe128ServiceAdvertisement;
class DELPHICLASS TwclBluetoothLe16ServiceDataAdvertisement;
class DELPHICLASS TwclBluetoothLe32ServiceDataAdvertisement;
class DELPHICLASS TwclBluetoothLe128ServiceDataAdvertisement;
class DELPHICLASS TwclBluetoothLeCustomAdvertisement;
class DELPHICLASS TwclBluetoothLeManufacturerAdvertisement;
class DELPHICLASS TwclBluetoothLeRawAdvertisement;
class DELPHICLASS TwclBluetoothLeAdvertiserConnection;
class DELPHICLASS TwclWiiRemoteClientConnection;
class DELPHICLASS TwclWiiRemoteHidClientConnection;
class DELPHICLASS TwclBluetoothComponent;
class DELPHICLASS TwclRfCommClient;
class DELPHICLASS TwclRfCommServer;
class DELPHICLASS TwclGattClient;
class DELPHICLASS TwclGattServer;
class DELPHICLASS TwclBluetoothLeBeaconWatcher;
class DELPHICLASS TwclBluetoothLeAdvertiser;
class DELPHICLASS TwclWiiRemoteClient;
class DELPHICLASS TwclBleSniffer;
//-- type declarations -------------------------------------------------------
typedef System::Int8 SByte;

enum DECLSPEC_DENUM TwclBluetoothApi : unsigned int { baBlueSoleil, baMicrosoft, baToshiba, baBled112 };

typedef System::Set<TwclBluetoothApi, TwclBluetoothApi::baBlueSoleil, TwclBluetoothApi::baBled112> TwclBluetoothApis;

enum DECLSPEC_DENUM TwclBluetoothVersion : unsigned int { bt10, bt11, bt12, bt20, bt21, bt30, bt40, bt41, bt42, bt50, bt51, bt52, bt53, bt54, btOther };

enum DECLSPEC_DENUM TwclBluetoothDeviceType : unsigned int { dtClassic, dtBle, dtMixed, dtUnknown };

struct DECLSPEC_DRECORD TwclBluetoothService
{
public:
	unsigned Handle;
	GUID Uuid;
	System::Byte Channel;
	System::UnicodeString Name;
	System::UnicodeString Comment;
};


typedef System::DynamicArray<TwclBluetoothService> TwclBluetoothServices;

typedef System::DynamicArray<GUID> TwclBluetoothInstalledServices;

typedef System::DynamicArray<__int64> TwclBluetoothAddresses;

struct DECLSPEC_DRECORD TwclVirtualComPort
{
public:
	__int64 Address;
	GUID Service;
	System::Word Number;
	bool Outgoing;
};


typedef System::DynamicArray<TwclVirtualComPort> TwclVirtualComPorts;

enum DECLSPEC_DENUM TwclBluetoothDiscoverKind : unsigned int { dkClassic, dkBle };

typedef System::DynamicArray<System::Word> TwclBluetoothSdpProtocols;

struct DECLSPEC_DRECORD TwclBluetoothSdpProfile
{
public:
	System::Word Uuid;
	System::Word Version;
};


typedef System::DynamicArray<TwclBluetoothSdpProfile> TwclBluetoothSdpProfiles;

typedef System::DynamicArray<System::Byte> TwclBluetoothSdpFormats;

struct DECLSPEC_DRECORD TwclGattUuid
{
public:
	bool IsShortUuid;
	System::Word ShortUuid;
	GUID LongUuid;
};


struct DECLSPEC_DRECORD TwclGattService
{
public:
	TwclGattUuid Uuid;
	System::Word Handle;
};


typedef System::DynamicArray<TwclGattService> TwclGattServices;

struct DECLSPEC_DRECORD TwclGattCharacteristic
{
public:
	System::Word ServiceHandle;
	TwclGattUuid Uuid;
	System::Word Handle;
	System::Word ValueHandle;
	bool IsBroadcastable;
	bool IsReadable;
	bool IsWritable;
	bool IsWritableWithoutResponse;
	bool IsSignedWritable;
	bool IsNotifiable;
	bool IsIndicatable;
	bool HasExtendedProperties;
};


typedef System::DynamicArray<TwclGattCharacteristic> TwclGattCharacteristics;

typedef System::DynamicArray<System::Byte> TwclGattCharacteristicValue;

enum DECLSPEC_DENUM TwclGattDescriptorType : unsigned int { dtCharacteristicExtendedProperties, dtCharacteristicUserDescription, dtClientCharacteristicConfiguration, dtServerCharacteristicConfiguration, dtCharacteristicFormat, dtCharacteristicAggregateFormat, dtCustomDescriptor };

struct DECLSPEC_DRECORD TwclGattDescriptor
{
public:
	System::Word ServiceHandle;
	System::Word CharacteristicHandle;
	TwclGattDescriptorType DescriptorType;
	TwclGattUuid Uuid;
	System::Word Handle;
};


typedef System::DynamicArray<TwclGattDescriptor> TwclGattDescriptors;

struct DECLSPEC_DRECORD TwclGattCharacteristicExtendedProperties
{
public:
	bool IsReliableWriteEnabled;
	bool IsAuxiliariesWritable;
};


struct DECLSPEC_DRECORD TwclGattClientCharacteristicConfiguration
{
public:
	bool IsSubscribeToNotification;
	bool IsSubscribeToIndication;
};


struct DECLSPEC_DRECORD TwclGattServerCharacteristicConfiguration
{
public:
	bool IsBroadcast;
};


enum DECLSPEC_DENUM TwclGattPresentationFormat : unsigned int { fmtRfu, fmtBoolean, fmt2Bit, fmtNibble, fmtUInt8, fmtUInt12, fmtUInt16, fmtUInt24, fmtUInt32, fmtUInt48, fmtUInt64, fmtUInt128, fmtSInt8, fmtSInt12, fmtSInt16, fmtSInt24, fmtSInt32, fmtSInt48, fmtSInt64, fmtSInt128, fmtFloat32, fmtFloat64, fmtSFloat, fmtFloat, fmtDUint16, fmtUtf8S, fmtUtf16S, fmtStruct };

struct DECLSPEC_DRECORD TwclGattCharacteristicFormat
{
public:
	TwclGattPresentationFormat Format;
	System::Byte Exponent;
	System::Word AUnit;
	System::Byte NameSpace;
	System::Word Description;
};


typedef System::DynamicArray<TwclGattCharacteristicFormat> TwclGattCharacteristicFormats;

struct DECLSPEC_DRECORD TwclGattCharactertisticUserDescription
{
public:
	System::UnicodeString Description;
};


struct DECLSPEC_DRECORD TwclGattCharacteristicAggregateFormat
{
	
private:
	typedef System::DynamicArray<System::Word> _TwclGattCharacteristicAggregateFormat__1;
	
	
public:
	_TwclGattCharacteristicAggregateFormat__1 Handles;
};


struct DECLSPEC_DRECORD TwclGattDescriptorValue
{
	
private:
	typedef System::DynamicArray<System::Byte> _TwclGattDescriptorValue__1;
	
	
public:
	TwclGattDescriptorType AType;
	TwclGattUuid Uuid;
	TwclGattCharacteristicExtendedProperties CharacteristicExtendedProperties;
	TwclGattClientCharacteristicConfiguration ClientCharacteristicConfiguration;
	TwclGattServerCharacteristicConfiguration ServerCharacteristicConfiguration;
	TwclGattCharacteristicFormat CharacteristicFormat;
	TwclGattCharacteristicAggregateFormat CharacteristicAggregateFormat;
	TwclGattCharactertisticUserDescription UserDescription;
	_TwclGattDescriptorValue__1 Data;
};


enum DECLSPEC_DENUM TwclGattOperationFlag : unsigned int { goNone, goReadFromDevice, goReadFromCache };

enum DECLSPEC_DENUM TwclGattProtectionLevel : unsigned int { plNone, plAuthentication, plEncryption, plEncryptionAndAuthentication };

enum DECLSPEC_DENUM TwclGattWriteKind : unsigned int { wkWithResponse, wkWithoutResponse, wkAutoSplit, wkAuto };

enum DECLSPEC_DENUM TwclGattSubscribeKind : unsigned int { skNotification, skIndication, skManual };

enum DECLSPEC_DENUM TwclGattLocalCharacteristicProperty : unsigned int { cpAuthenticatedSignedWritable, cpBroadcastable, cpExtendedProperties, cpIndicatable, cpNotifiable, cpReadable, cpReliableWritable, cpWritableAuxiliaries, cpWritable, cpWritableWithoutResponse };

typedef System::Set<TwclGattLocalCharacteristicProperty, TwclGattLocalCharacteristicProperty::cpAuthenticatedSignedWritable, TwclGattLocalCharacteristicProperty::cpWritableWithoutResponse> TwclGattLocalCharacteristicProperties;

struct DECLSPEC_DRECORD TwclGattLocalDescriptor
{
	
private:
	typedef System::DynamicArray<System::Byte> _TwclGattLocalDescriptor__1;
	
	
public:
	System::Word Uuid;
	TwclGattProtectionLevel ReadProtectionLevel;
	TwclGattProtectionLevel WriteProtectionLevel;
	_TwclGattLocalDescriptor__1 Data;
};


typedef System::DynamicArray<TwclGattLocalDescriptor> TwclGattLocalDescriptors;

struct DECLSPEC_DRECORD TwclGattLocalCharacteristicParameters
{
public:
	TwclGattLocalDescriptors Descriptors;
	TwclGattCharacteristicFormats PresentationFormats;
	TwclGattLocalCharacteristicProperties Props;
	TwclGattProtectionLevel ReadProtectionLevel;
	System::UnicodeString UserDescription;
	TwclGattProtectionLevel WriteProtectionLevel;
};


enum DECLSPEC_DENUM TwclBluetoothLeScanningMode : unsigned int { smActive, smPassive };

typedef System::DynamicArray<System::Byte> TwclBluetoothLeAdvertisementFrameRawData;

enum DECLSPEC_DENUM TwclBluetoothLeAdvertisementType : unsigned int { atConnectableUndirected, atConnectableDirected, atScannableUndirected, atNonConnectableUndirected, atScanResponse, atExtended, atUnknown };

enum DECLSPEC_DENUM TwclBluetoothLeAdvertisementFlag : unsigned int { afLimitedDiscoverableMode, afGeneralDiscoverableMode, afClassicNotSupported, afDualModeControllerCapable, afDualModeHostCapable };

typedef System::Set<TwclBluetoothLeAdvertisementFlag, TwclBluetoothLeAdvertisementFlag::afLimitedDiscoverableMode, TwclBluetoothLeAdvertisementFlag::afDualModeHostCapable> TwclBluetoothLeAdvertisementFlags;

enum DECLSPEC_DENUM TwclBluetoothLeExtendedFrameFlag : unsigned int { efAnonymous, efConnectable, efDirected, efScannable, efScanResponse };

typedef System::Set<TwclBluetoothLeExtendedFrameFlag, TwclBluetoothLeExtendedFrameFlag::efAnonymous, TwclBluetoothLeExtendedFrameFlag::efScanResponse> TwclBluetoothLeExtendedFrameFlags;

typedef System::DynamicArray<System::Byte> TwclEddystoneEncodedUrl;

enum DECLSPEC_DENUM TwclBluetoothMitmProtection : unsigned int { mitmProtectionNotRequired, mitmProtectionRequired, mitmProtectionNotRequiredBonding, mitmProtectionRequiredBonding, mitmProtectionNotRequiredGeneralBonding, mitmProtectionRequiredGeneralBonding, mitmProtectionNotDefined };

enum DECLSPEC_DENUM TwclBluetoothLeProtectionLevel : unsigned int { pplDefault, pplNone, pplEncryption, pplEncryptionAndAuthentication };

enum DECLSPEC_DENUM TwclBluetoothIoCapability : unsigned int { iocapDisplayOnly, iocapDisplayYesNo, iocapKeyboardOnly, iocapNoInputNoOutput, iocapDisplayKeyboard, iocapNotDefined };

struct DECLSPEC_DRECORD TwclBluetoothOobData
{
public:
	System::StaticArray<System::Byte, 16> C;
	System::StaticArray<System::Byte, 16> R;
};


enum DECLSPEC_DENUM TwclBluetoothAddressType : unsigned int { atClassic, atPublic, atRandom, atUnspecified };

enum DECLSPEC_DENUM TwclBluetoothPairingMethod : unsigned int { pmAuto, pmClassic, pmLe };

struct DECLSPEC_DRECORD TwclBluetoothLeAdvertisementFrame
{
public:
	System::Word CompanyId;
	System::Byte DataType;
	TwclBluetoothLeAdvertisementFrameRawData Data;
};


typedef System::DynamicArray<TwclBluetoothLeAdvertisementFrame> TwclBluetoothLeAdvertisementFrames;

struct DECLSPEC_DRECORD TwclBluetoothLeConnectionParameters
{
public:
	System::Word Interval;
	System::Word Latency;
	System::Word LinkTimeout;
};


enum DECLSPEC_DENUM TwclBluetoothLeConnectionParametersType : unsigned int { ppBalanced, ppPowerOptimized, ppThroughputOptimized };

struct DECLSPEC_DRECORD TwclBluetoothLeConnectionParametersValue
{
public:
	System::Word MinInterval;
	System::Word MaxInterval;
	System::Word Latency;
	System::Word LinkTimeout;
};


struct DECLSPEC_DRECORD TwclBluetoothLeConnectionPhyInfo
{
public:
	bool IsCoded;
	bool IsUncoded1MPhy;
	bool IsUncoded2MPhy;
};


struct DECLSPEC_DRECORD TwclBluetoothLeConnectionPhy
{
public:
	TwclBluetoothLeConnectionPhyInfo Receive;
	TwclBluetoothLeConnectionPhyInfo Transmit;
};


enum DECLSPEC_DENUM TwclBluetoothLeAdvertisementPhy : unsigned int { phUnspecified, phUncoded1M, phUncoded2M, phCoded };

enum DECLSPEC_DENUM TwclBluetoothLeScanParametersType : unsigned int { ptDefault, ptCoexistenceOptimized, ptLowLatency, ptCustom };

struct DECLSPEC_DRECORD TwclBluetoothLeAdvertisementInfo
{
public:
	__int64 Address;
	__int64 Timestamp;
	SByte Rssi;
};


struct DECLSPEC_DRECORD TwclBluetoothLeAppleAirdropFrameData
{
public:
	System::StaticArray<System::Byte, 8> Prefix;
	System::Byte Version;
	System::Word AppleId;
	System::Word PhoneNumber;
	System::Word Email;
	System::Word Email2;
	System::Byte Suffix;
};


struct DECLSPEC_DRECORD TwclBluetoothLeAppleAirplaySourceFrameData
{
public:
	System::Byte Data;
};


struct DECLSPEC_DRECORD TwclBluetoothLeAppleAirplayTargetFrameData
{
public:
	System::Byte Flags;
	System::Byte Seed;
	unsigned Address;
};


struct DECLSPEC_DRECORD TwclBluetoothLeAppleAirprintFrameData
{
public:
	System::Byte AddressType;
	System::Byte ResourceType;
	System::Byte SecurityType;
	System::Word Port;
	System::StaticArray<System::Byte, 16> Address;
	SByte Power;
};


struct DECLSPEC_DRECORD TwclBluetoothLeAppleFindMyFrameData
{
public:
	System::Byte Status;
	System::StaticArray<System::Byte, 22> Key;
	System::Byte KeyBits;
	System::Byte Hint;
};


struct DECLSPEC_DRECORD TwclBluetoothLeAppleHandoffFrameData
{
public:
	bool Clipboard;
	System::Word Sequence;
	System::Byte AuthTag;
	System::StaticArray<System::Byte, 10> Data;
};


struct DECLSPEC_DRECORD TwclBluetoothLeAppleHeySiriFrameData
{
public:
	System::Word Hash;
	SByte Snr;
	System::Byte Confidence;
	System::Word DeviceClass;
	System::Byte Rand;
};


struct DECLSPEC_DRECORD TwclBluetoothLeAppleHomeKitFrameData
{
public:
	System::Byte Status;
	System::StaticArray<System::Byte, 6> DeviceId;
	System::Word Category;
	System::Word StateNumber;
	System::Byte ConfigNumber;
	System::Byte Version;
};


struct DECLSPEC_DRECORD TwclBluetoothLeAppleiBeaconFrameData
{
public:
	GUID Uuid;
	System::Word Minor;
	System::Word Major;
	SByte TxRssi;
};


struct DECLSPEC_DRECORD TwclBluetoothLeAppleMagicSwitchFrameData
{
public:
	System::Word Data;
	System::Byte Confidence;
};


struct DECLSPEC_DRECORD TwclBluetoothLeAppleNearbyActionFrameData
{
public:
	System::Byte Flags;
	System::Byte Action;
	unsigned Tag;
	System::Byte Device;
	TwclBluetoothLeAdvertisementFrameRawData Params;
};


struct DECLSPEC_DRECORD TwclBluetoothLeAppleNearbyInfoFrameData
{
public:
	System::Byte Status;
	System::Byte Action;
	System::Byte Flags;
	unsigned Tag;
};


struct DECLSPEC_DRECORD TwclBluetoothLeAppleProximityPairingFrameData
{
public:
	System::Byte Prefix;
	System::Word DeviceModel;
	System::Byte Status;
	System::Byte LeftBattery;
	System::Byte RightBattery;
	bool CaseCharging;
	bool RightCharging;
	bool LeftCharging;
	System::Byte CaseBattery;
	System::Byte Counter;
	System::Byte Color;
	System::Byte Suffix;
	System::StaticArray<System::Byte, 16> Data;
};


struct DECLSPEC_DRECORD TwclBluetoothLeAppleTetheringSourceFrameData
{
public:
	System::Byte Version;
	System::Byte Flags;
	System::Byte Battery;
	System::Word CellType;
	System::Byte Bars;
};


struct DECLSPEC_DRECORD TwclBluetoothLeAppleTetheringTargetFrameData
{
public:
	unsigned Id;
};


struct DECLSPEC_DRECORD TwclBluetoothLeAppleUnknownFrameData
{
public:
	System::Byte Id;
	TwclBluetoothLeAdvertisementFrameRawData Payload;
};


enum DECLSPEC_DENUM TwclBluetoothLeCdpBeaconDeviceType : unsigned int { dtXboxOne = 1, dtiPhone = 6, dtiPad, dtAndroid, dtWindowsDesktop, dtWindowsPhone = 11, dtLinux, dtWindowsIoT, dtSurfaceHub, dtWindowsLaptop, dtWindowsTablet };

enum DECLSPEC_DENUM TwclBluetoothLeCdpBeaconScenarioType : unsigned int { stBluetooth = 0x1 };

enum DECLSPEC_DENUM TwclBluetoothLeCdpBeaconExtendedDeviceStatus : unsigned int { edsRemoteSessionsHosted, edsRemoteSessionsNotHosted, edsNearShareAuthPolicySameUser, edsNearShareAuthPolicyPermissive };

typedef System::Set<TwclBluetoothLeCdpBeaconExtendedDeviceStatus, TwclBluetoothLeCdpBeaconExtendedDeviceStatus::edsRemoteSessionsHosted, TwclBluetoothLeCdpBeaconExtendedDeviceStatus::edsNearShareAuthPolicyPermissive> TwclBluetoothLeCdpBeaconExtendedDeviceStatuses;

typedef System::DynamicArray<System::Byte> TwclBluetoothLeCdpBeaconSalt;

typedef System::DynamicArray<System::Byte> TwclBluetoothLeCdpBeaconHash;

struct DECLSPEC_DRECORD TwclWiiRemoteAccelCalibration
{
public:
	System::Word MinX;
	System::Word MinY;
	System::Word MinZ;
	System::Word MaxX;
	System::Word MaxY;
	System::Word MaxZ;
};


struct DECLSPEC_DRECORD TwclWiiRemoteLeds
{
public:
	bool Led1;
	bool Led2;
	bool Led3;
	bool Led4;
};


enum DECLSPEC_DENUM TwclWiiRemoteIrMode : unsigned int { wiiIrOff, wiiIrBasicMode, wiiIrExtendedMode, wiiIrFullMode };

enum DECLSPEC_DENUM TwclWiiRemoteIrSensitivity : unsigned int { wiiIrLevelOff, wiiIrLevel1, wiiIrLevel2, wiiIrLevel3, wiiIrLevel4, wiiIrLevel5, wiiIrLevelMax };

enum DECLSPEC_DENUM TwclWiiRemoteExtension : unsigned int { wiiNoExtension, wiiNunchuk, wiiClassicController, wiiGuitar, wiiDrums, wiiBalanceBoard };

struct DECLSPEC_DRECORD TwclWiiRemoteButtons
{
public:
	bool A;
	bool B;
	bool Plus;
	bool Home;
	bool Minus;
	bool One;
	bool Two;
	bool Up;
	bool Down;
	bool Left;
	bool Right;
};


struct DECLSPEC_DRECORD TwclWiiRemote3D
{
public:
	System::Word X;
	System::Word Y;
	System::Word Z;
};


struct DECLSPEC_DRECORD TwclWiiRemoteAccel
{
public:
	TwclWiiRemoteAccelCalibration Calibration;
	TwclWiiRemote3D Values;
};


struct DECLSPEC_DRECORD TwclWiiRemote2D
{
public:
	System::Word X;
	System::Word Y;
};


struct DECLSPEC_DRECORD TwclWiiRemoteIrSensor
{
public:
	TwclWiiRemote2D Position;
	System::Byte Size;
	bool Found;
};


struct DECLSPEC_DRECORD TwclWiiRemoteIrSensors
{
public:
	TwclWiiRemoteIrMode Mode;
	TwclWiiRemoteIrSensitivity Sensitivity;
	System::StaticArray<TwclWiiRemoteIrSensor, 4> Sensors;
};


struct DECLSPEC_DRECORD TwclWiiRemoteNunchukCalibration
{
public:
	TwclWiiRemoteAccelCalibration Accel;
	System::Byte MinX;
	System::Byte MidX;
	System::Byte MaxX;
	System::Byte MinY;
	System::Byte MidY;
	System::Byte MaxY;
};


struct DECLSPEC_DRECORD TwclWiiRemoteNunchuk
{
public:
	TwclWiiRemoteNunchukCalibration Calibration;
	TwclWiiRemoteAccel Accel;
	TwclWiiRemote2D Joystick;
	bool C;
	bool Z;
};


struct DECLSPEC_DRECORD TwclWiiRemoteClassicControllerButtons
{
public:
	bool A;
	bool B;
	bool Plus;
	bool Home;
	bool Minus;
	bool Up;
	bool Down;
	bool Left;
	bool Right;
	bool X;
	bool Y;
	bool ZL;
	bool ZR;
	bool L;
	bool R;
};


struct DECLSPEC_DRECORD TwclWiiRemoteClassicControllerCalibration
{
public:
	System::Byte LeftMinX;
	System::Byte LeftMidX;
	System::Byte LeftMaxX;
	System::Byte LeftMinY;
	System::Byte LeftMidY;
	System::Byte LeftMaxY;
	System::Byte RightMinX;
	System::Byte RightMidX;
	System::Byte RightMaxX;
	System::Byte RightMinY;
	System::Byte RightMidY;
	System::Byte RightMaxY;
	System::Byte LeftTriggerMin;
	System::Byte LeftTriggerMax;
	System::Byte RightTriggerMin;
	System::Byte RightTriggerMax;
};


struct DECLSPEC_DRECORD TwclWiiRemoteClassicController
{
public:
	TwclWiiRemoteClassicControllerCalibration Calibration;
	TwclWiiRemoteClassicControllerButtons Buttons;
	TwclWiiRemote2D LeftJoystick;
	TwclWiiRemote2D RightJoystick;
	System::Byte LeftTrigger;
	System::Byte RightTrigger;
};


enum DECLSPEC_DENUM TwclWiiRemoteGuitarType : unsigned int { wiiGuitarHero3, wiiGuitarHeroWorldTour };

struct DECLSPEC_DRECORD TwclWiiRemoteGuitarButtons
{
public:
	bool StrumUp;
	bool StrumDown;
	bool Minus;
	bool Plus;
};


struct DECLSPEC_DRECORD TwclWiiRemoteGuitarFretButtons
{
public:
	bool Green;
	bool Red;
	bool Yellow;
	bool Blue;
	bool Orange;
};


struct DECLSPEC_DRECORD TwclWiiRemoteGuitar
{
public:
	TwclWiiRemoteGuitarType GuitarType;
	TwclWiiRemoteGuitarButtons Buttons;
	TwclWiiRemoteGuitarFretButtons FretButtons;
	TwclWiiRemoteGuitarFretButtons Touchbar;
	TwclWiiRemote2D Joystick;
	System::Byte WhammyBar;
};


struct DECLSPEC_DRECORD TwclWiiRemoteDrums
{
public:
	bool Red;
	bool Green;
	bool Blue;
	bool Orange;
	bool Yellow;
	bool Pedal;
	System::Byte RedVelocity;
	System::Byte GreenVelocity;
	System::Byte BlueVelocity;
	System::Byte OrangeVelocity;
	System::Byte YellowVelocity;
	System::Byte PedalVelocity;
	bool Plus;
	bool Minus;
	TwclWiiRemote2D Joystick;
};


struct DECLSPEC_DRECORD TwclWiiRemoteBalanceBoardSensors
{
public:
	System::Word TopRight;
	System::Word TopLeft;
	System::Word BottomRight;
	System::Word BottomLeft;
};


struct DECLSPEC_DRECORD TwclWiiRemoteBalanceBoardSensorsWeight
{
public:
	double TopRight;
	double TopLeft;
	double BottomRight;
	double BottomLeft;
};


struct DECLSPEC_DRECORD TwclWiiRemoteBalanceBoardCalibration
{
public:
	TwclWiiRemoteBalanceBoardSensors Kg0;
	TwclWiiRemoteBalanceBoardSensors Kg17;
	TwclWiiRemoteBalanceBoardSensors Kg34;
};


struct DECLSPEC_DRECORD TwclWiiRemoteBalanceBoardGC
{
public:
	double X;
	double Y;
};


struct DECLSPEC_DRECORD TwclWiiRemoteBalanceBoard
{
public:
	TwclWiiRemoteBalanceBoardCalibration Calibration;
	TwclWiiRemoteBalanceBoardSensors Sensors;
	TwclWiiRemoteBalanceBoardSensorsWeight SensorsKg;
	TwclWiiRemoteBalanceBoardSensorsWeight SensorsLb;
	double WeightKg;
	double WeightLb;
	TwclWiiRemoteBalanceBoardGC CenterOfGravity;
};


struct DECLSPEC_DRECORD TwclBluetoothLePacketHeader
{
public:
	unsigned AccessAddress;
	System::Byte Channel;
	unsigned Crc;
	SByte Rssi;
	unsigned Timestamp;
	bool Valid;
};


enum DECLSPEC_DENUM TwclBluetoothLeAdvertisingPduType : unsigned int { ptAdvInd, ptAdvDirectInd, ptAdvNonConnInd, ptScanReq, ptAuxScanReq, ptScanRsp, ptConnectInd, ptAuxConnectReq, ptAdvScanInd, ptAdvExtInd, ptAuxAdvInd, ptAuxScanRsp, ptAuxSyncInd, ptAuxChainInd, ptAuxConnectRsp };

struct DECLSPEC_DRECORD TwclBluetoothLeAdvertisingPduHeader
{
public:
	TwclBluetoothLePacketHeader Header;
	TwclBluetoothLeAdvertisingPduType PduType;
	bool ChSel;
	bool TxAdd;
	bool RxAdd;
};


struct DECLSPEC_DRECORD TwclBleSnifferLlData
{
public:
	unsigned Aa;
	unsigned CrcInit;
	System::Byte WinSize;
	System::Word WinOffset;
	System::Word Interval;
	System::Word Latency;
	System::Word Timeout;
	__int64 ChM;
	System::Byte Hop;
	System::Byte Sca;
};


typedef void __fastcall (__closure *TwclBluetoothConfirmEvent)(System::TObject* Sender, TwclBluetoothRadio* const Radio, const __int64 Address, /* out */ bool &Confirm);

typedef void __fastcall (__closure *TwclBluetoothDeviceEvent)(System::TObject* Sender, TwclBluetoothRadio* const Radio, const __int64 Address);

typedef void __fastcall (__closure *TwclBluetoothDeviceResultEvent)(System::TObject* Sender, TwclBluetoothRadio* const Radio, const __int64 Address, const int Error);

typedef void __fastcall (__closure *TwclBluetoothEvent)(System::TObject* Sender, TwclBluetoothRadio* const Radio);

typedef void __fastcall (__closure *TwclBluetoothIoCapabilityRequestEvent)(System::TObject* Sender, TwclBluetoothRadio* const Radio, const __int64 Address, /* out */ TwclBluetoothMitmProtection &Mitm, /* out */ TwclBluetoothIoCapability &IoCapability, /* out */ bool &OobPresent);

typedef void __fastcall (__closure *TwclBluetoothNumericComparisonEvent)(System::TObject* Sender, TwclBluetoothRadio* const Radio, const __int64 Address, const unsigned Number, /* out */ bool &Confirm);

typedef void __fastcall (__closure *TwclBluetoothOobDataRequestEvent)(System::TObject* Sender, TwclBluetoothRadio* const Radio, const __int64 Address, /* out */ TwclBluetoothOobData &OobData);

typedef void __fastcall (__closure *TwclBluetoothPasskeyNotificationEvent)(System::TObject* Sender, TwclBluetoothRadio* const Radio, const __int64 Address, const unsigned Passkey);

typedef void __fastcall (__closure *TwclBluetoothPasskeyRequestEvent)(System::TObject* Sender, TwclBluetoothRadio* const Radio, const __int64 Address, /* out */ unsigned &Passkey);

typedef void __fastcall (__closure *TwclBluetoothPinRequestEvent)(System::TObject* Sender, TwclBluetoothRadio* const Radio, const __int64 Address, /* out */ System::UnicodeString &Pin);

typedef void __fastcall (__closure *TwclBluetoothProtectionLevelRequestEvent)(System::TObject* Sender, TwclBluetoothRadio* const Radio, const __int64 Address, /* out */ TwclBluetoothLeProtectionLevel &Protection);

typedef void __fastcall (__closure *TwclBluetoothResultEvent)(System::TObject* Sender, TwclBluetoothRadio* const Radio, const int Error);

typedef void __fastcall (__closure *TwclBluetoothGetSdpAttributesEvent)(System::TObject* Sender, /* out */ TwclBluetoothSdpProtocols &Protocols, /* out */ TwclBluetoothSdpProfiles &Profiles, /* out */ TwclBluetoothSdpFormats &Formats, /* out */ unsigned &Cod);

typedef void __fastcall (__closure *TwclRfCommServerConnectEvent)(System::TObject* Sender, TwclRfCommServerClientConnection* const Client, const int Error);

typedef void __fastcall (__closure *TwclRfCommServerDataEvent)(System::TObject* Sender, TwclRfCommServerClientConnection* const Client, const void * Data, const unsigned Size);

typedef void __fastcall (__closure *TwclRfCommServerDisconnectEvent)(System::TObject* Sender, TwclRfCommServerClientConnection* const Client, const int Reason);

typedef void __fastcall (__closure *TwclGattCharacteristicChangedEvent)(System::TObject* Sender, const System::Word Handle, const TwclGattCharacteristicValue Value);

typedef void __fastcall (__closure *TwclBluetoothLeAdvertisementAppearanceFrameEvent)(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const System::Word Appearance);

typedef void __fastcall (__closure *TwclBluetoothLeAdvertisementFrameInformationEvent)(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const System::UnicodeString Name, const TwclBluetoothLeAdvertisementType PacketType, const TwclBluetoothLeAdvertisementFlags Flags);

typedef void __fastcall (__closure *TwclBluetoothLeAdvertisementExtFrameInformationEvent)(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const TwclBluetoothAddressType AddressType, const SByte TxPower, const TwclBluetoothLeExtendedFrameFlags Flags, const TwclBluetoothLeAdvertisementPhy PrimaryPhy, const TwclBluetoothLeAdvertisementPhy SecondaryPhy);

typedef void __fastcall (__closure *TwclBluetoothLeAdvertisementRawFrameEvent)(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const System::Byte DataType, const TwclBluetoothLeAdvertisementFrameRawData Data);

typedef void __fastcall (__closure *TwclBluetoothLeAdvertisementReceivedEvent)(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const TwclBluetoothLeAdvertisementFrameRawData Data);

typedef void __fastcall (__closure *TwclBluetoothLeAdvertisementService16DataFrameEvent)(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const System::Word Uuid, const TwclBluetoothLeAdvertisementFrameRawData Data);

typedef void __fastcall (__closure *TwclBluetoothLeAdvertisementService32DataFrameEvent)(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const unsigned Uuid, const TwclBluetoothLeAdvertisementFrameRawData Data);

typedef void __fastcall (__closure *TwclBluetoothLeAdvertisementService128DataFrameEvent)(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const GUID &Uuid, const TwclBluetoothLeAdvertisementFrameRawData Data);

typedef void __fastcall (__closure *TwclBluetoothLeAdvertisementServiceSol16FrameEvent)(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const System::Word Uuid);

typedef void __fastcall (__closure *TwclBluetoothLeAdvertisementServiceSol32FrameEvent)(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const unsigned Uuid);

typedef void __fastcall (__closure *TwclBluetoothLeAdvertisementServiceSol128FrameEvent)(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const GUID &Uuid);

typedef void __fastcall (__closure *TwclBluetoothLeAdvertisementTxPowerLevelFrameEvent)(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const SByte TxPower);

typedef void __fastcall (__closure *TwclBluetoothLeAdvertisementUuidFrameEvent)(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const GUID &Uuid);

typedef void __fastcall (__closure *TwclBluetoothLeAltBeaconFrameEvent)(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const System::Word CompanyId, const System::Word Major, const System::Word Minor, const GUID &Uuid, const SByte TxRssi, const System::Byte Reserved, const TwclBluetoothLeAdvertisementFrameRawData Data);

typedef void __fastcall (__closure *TwclBluetoothLeDriAsdMessageEvent)(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const Wcldricommon::TwclDriRawData Raw);

typedef void __fastcall (__closure *TwclBluetoothLeEddystoneTlmFrameEvent)(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const unsigned AdvCnt, const System::Word Batt, const unsigned SecCnt, const double Temp, const TwclBluetoothLeAdvertisementFrameRawData Data);

typedef void __fastcall (__closure *TwclBluetoothLeEddystoneUidFrameEvent)(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const SByte TxRssi, const GUID &Uuid, const TwclBluetoothLeAdvertisementFrameRawData Data);

typedef void __fastcall (__closure *TwclBluetoothLeEddystoneUrlFrameEvent)(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const SByte TxRssi, const System::UnicodeString Url);

typedef void __fastcall (__closure *TwclBluetoothLeManufacturerRawFrameEvent)(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const System::Word CompanyId, const TwclBluetoothLeAdvertisementFrameRawData Data);

typedef void __fastcall (__closure *TwclBluetoothLeAppleAirdropFrameEvent)(System::TObject* Sender, const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleAirdropFrameData &Data);

typedef void __fastcall (__closure *TwclBluetoothLeAppleAirplaySourceFrameEvent)(System::TObject* Sender, const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleAirplaySourceFrameData Data);

typedef void __fastcall (__closure *TwclBluetoothLeAppleAirplayTargetFrameEvent)(System::TObject* Sender, const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleAirplayTargetFrameData &Data);

typedef void __fastcall (__closure *TwclBluetoothLeAppleAirprintFrameEvent)(System::TObject* Sender, const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleAirprintFrameData &Data);

typedef void __fastcall (__closure *TwclBluetoothLeAppleFindMyFrameEvent)(System::TObject* Sender, const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleFindMyFrameData &Data);

typedef void __fastcall (__closure *TwclBluetoothLeAppleHandoffFrameEvent)(System::TObject* Sender, const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleHandoffFrameData &Data);

typedef void __fastcall (__closure *TwclBluetoothLeAppleHeySiriFrameEvent)(System::TObject* Sender, const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleHeySiriFrameData &Data);

typedef void __fastcall (__closure *TwclBluetoothLeAppleHomeKitFrameEvent)(System::TObject* Sender, const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleHomeKitFrameData &Data);

typedef void __fastcall (__closure *TwclBluetoothLeAppleiBeaconFrameEvent)(System::TObject* Sender, const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleiBeaconFrameData &Data);

typedef void __fastcall (__closure *TwclBluetoothLeAppleMagicSwitchFrameEvent)(System::TObject* Sender, const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleMagicSwitchFrameData Data);

typedef void __fastcall (__closure *TwclBluetoothLeAppleNearbyActionFrameEvent)(System::TObject* Sender, const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleNearbyActionFrameData &Data);

typedef void __fastcall (__closure *TwclBluetoothLeAppleNearbyInfoFrameEvent)(System::TObject* Sender, const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleNearbyInfoFrameData &Data);

typedef void __fastcall (__closure *TwclBluetoothLeAppleProximityPairingFrameEvent)(System::TObject* Sender, const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleProximityPairingFrameData &Data);

typedef void __fastcall (__closure *TwclBluetoothLeAppleTetheringSourceFrameEvent)(System::TObject* Sender, const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleTetheringSourceFrameData &Data);

typedef void __fastcall (__closure *TwclBluetoothLeAppleTetheringTargetFrameEvent)(System::TObject* Sender, const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleTetheringTargetFrameData Data);

typedef void __fastcall (__closure *TwclBluetoothLeAppleUnknownFrameEvent)(System::TObject* Sender, const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleUnknownFrameData &Data);

typedef void __fastcall (__closure *TwclBluetoothLeMicrosoftCdpBeaconFrameEvent)(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const TwclBluetoothLeCdpBeaconScenarioType ScenarioType, const System::Byte Version, const TwclBluetoothLeCdpBeaconDeviceType DeviceType, const System::Byte SubVersion, const bool ShareNearBy, const bool AddressAsDeviceId, const TwclBluetoothLeCdpBeaconExtendedDeviceStatuses ExtendedDeviceStatus, const TwclBluetoothLeCdpBeaconSalt Salt, const TwclBluetoothLeCdpBeaconHash Hash);

typedef void __fastcall (__closure *TwclGattServerClientEvent)(System::TObject* Sender, TwclGattServerClient* const Client);

typedef void __fastcall (__closure *TwclGattLocalCharacteristicReadEvent)(System::TObject* Sender, TwclGattServerClient* const Client, TwclGattLocalCharacteristic* const Characteristic, TwclGattLocalCharacteristicReadRequest* const Request);

typedef void __fastcall (__closure *TwclGattLocalCharacteristicWriteEvent)(System::TObject* Sender, TwclGattServerClient* const Client, TwclGattLocalCharacteristic* const Characteristic, TwclGattLocalCharacteristicWriteRequest* const Request);

typedef void __fastcall (__closure *TwclGattLocalCharacteristicSubscribedClientsChangedEvent)(System::TObject* Sender, TwclGattServerClient* const Client, TwclGattLocalCharacteristic* const Characteristic);

typedef void __fastcall (__closure *TwclWiiRemoteAccelChangedEvent)(System::TObject* Sender, const TwclWiiRemoteAccel &Accel);

typedef void __fastcall (__closure *TwclWiiRemoteBalanceBoardChangedEvent)(System::TObject* Sender, const TwclWiiRemoteBalanceBoard &Board);

typedef void __fastcall (__closure *TwclWiiRemoteButtonsChangedEvent)(System::TObject* Sender, const TwclWiiRemoteButtons &Buttons);

typedef void __fastcall (__closure *TwclWiiRemoteClassicControllerChangedEvent)(System::TObject* Sender, const TwclWiiRemoteClassicController &Controller);

typedef void __fastcall (__closure *TwclWiiRemoteDrumsChangedEvent)(System::TObject* Sender, const TwclWiiRemoteDrums &Drums);

typedef void __fastcall (__closure *TwclWiiRemoteGuitarChangedEvent)(System::TObject* Sender, const TwclWiiRemoteGuitar &Guitar);

typedef void __fastcall (__closure *TwclWiiRemoteIrChangedEvent)(System::TObject* Sender, const TwclWiiRemoteIrSensors &Ir);

typedef void __fastcall (__closure *TwclWiiRemoteNunchukChangedEvent)(System::TObject* Sender, const TwclWiiRemoteNunchuk &Nunchuk);

typedef void __fastcall (__closure *TwclWiiRemoteStatusChangedEvent)(System::TObject* Sender, const double Batt, const TwclWiiRemoteLeds Leds);

typedef void __fastcall (__closure *TwclBleSnifferAdvDirectIndReceivedEvent)(System::TObject* Sender, const TwclBluetoothLeAdvertisingPduHeader &PduHeader, const __int64 AdvA, const __int64 TargetA);

typedef void __fastcall (__closure *TwclBleSnifferAdvIndReceivedEvent)(System::TObject* Sender, const TwclBluetoothLeAdvertisingPduHeader &PduHeader, const __int64 AdvA, const void * AdvData, const System::Byte AdvDataLen);

typedef void __fastcall (__closure *TwclBleSnifferAdvNonConnIndReceivedEvent)(System::TObject* Sender, const TwclBluetoothLeAdvertisingPduHeader &PduHeader, const __int64 AdvA, const void * AdvData, const System::Byte AdvDataLen);

typedef void __fastcall (__closure *TwclBleSnifferAdvScanIndReceivedEvent)(System::TObject* Sender, const TwclBluetoothLeAdvertisingPduHeader &PduHeader, const __int64 AdvA, const void * AdvData, const System::Byte AdvDataLen);

typedef void __fastcall (__closure *TwclBleSnifferConnectIndReceivedEvent)(System::TObject* Sender, const TwclBluetoothLeAdvertisingPduHeader &PduHeader, const __int64 InitA, const __int64 AdvA, const TwclBleSnifferLlData &LlData);

typedef void __fastcall (__closure *TwclBleSnifferScanReqReceivedEvent)(System::TObject* Sender, const TwclBluetoothLeAdvertisingPduHeader &PduHeader, const __int64 ScanA, const __int64 AdvA);

typedef void __fastcall (__closure *TwclBleSnifferScanRspReceivedEvent)(System::TObject* Sender, const TwclBluetoothLeAdvertisingPduHeader &PduHeader, const __int64 AdvA, const void * ScanRspData, const System::Byte ScanRspDataLen);

typedef void __fastcall (__closure *TwclBleSnifferRawPacketReceivedEvent)(System::TObject* Sender, const TwclBluetoothLePacketHeader &Header, const void * Payload, const System::Word Size);

enum DECLSPEC_DENUM TwclBluetoothConnectionType : unsigned int { ctRfCommClient, ctRfCommServer, ctGattClient, ctGattServer, ctBeaconWatcher, ctLeAdvertiser, ctWiiRemote };

class PASCALIMPLEMENTATION TwclBluetoothRadio : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool FAvailable;
	Wclsync::TwclCriticalSection* FCS;
	bool FDiscovering;
	bool FDiscoveringStarted;
	Wclsync::TwclMutex* FInstance;
	bool FLeDiscovering;
	bool FLoaded;
	TwclBluetoothManager* FManager;
	__int64 FPairAddress;
	bool FPairing;
	bool FPlugged;
	Wclmessaging::TwclMessageReceiver* FReceiver;
	TwclBluetoothAddresses FFoundDevices;
	bool FIncludePaired;
	System::Classes::TList* FConnections;
	TwclVirtualComPorts FComPorts;
	int __fastcall InitializeGlobalInstanceMutex(void);
	int __fastcall IsBluetoothLeSupported(void);
	bool __fastcall DeviceNotFound(const __int64 Address);
	void __fastcall CloseAllConnections(const int Reason);
	void __fastcall DestroyComPorts(void);
	int __fastcall CreateConnection(const TwclBluetoothConnectionType ConnectionType, /* out */ Wclconnections::TwclCustomConnection* &Connection);
	void __fastcall RegisterConnection(Wclconnections::TwclCustomConnection* const Connection, const int Result);
	void __fastcall RemoveConnection(Wclconnections::TwclCustomConnection* const Connection);
	int __fastcall Close(void);
	int __fastcall Open(void);
	void __fastcall ProcessStatusChangedMessage(void);
	void __fastcall ProcessDiscoveringStartedMessage(void);
	void __fastcall ProcessDiscoveringCompletedMessage(const int Error);
	void __fastcall ProcessDeviceFoundMessage(Wclmessaging::TwclMessage* const Message);
	void __fastcall ProcessIoCapRequestMessage(const __int64 Address);
	void __fastcall ProcessProtectionRequestMessage(const __int64 Address);
	void __fastcall ProcessPinRequestMessage(const __int64 Address);
	void __fastcall ProcessNumericComparisonMessage(const __int64 Address, const unsigned Number);
	void __fastcall ProcessPasskeyRequestMessage(const __int64 Address);
	void __fastcall ProcessPasskeyNotificationMessage(const __int64 Address, const unsigned Passkey);
	void __fastcall ProcessConfirmOnlyMessage(const __int64 Address);
	void __fastcall ProcessOobDataRequestMessage(const __int64 Address);
	void __fastcall ProcessAuthCompletedMessage(const __int64 Address, const int Error);
	bool __fastcall GetAvailable(void);
	bool __fastcall GetClassicSupported(void);
	bool __fastcall GetLeSupported(void);
	Wclmessaging::TwclMessageProcessingMethod __fastcall GetMessageProcessing(void);
	bool __fastcall GetPlugged(void);
	Wclsync::TwclThreadId __fastcall GetThreadId(void);
	
protected:
	virtual void __fastcall MessageReceived(Wclmessaging::TwclMessage* const Message);
	virtual void __fastcall DoAuthenticationCompleted(const __int64 Address, const int Error);
	virtual void __fastcall DoConfirm(const __int64 Address, bool &Confirm);
	virtual void __fastcall DoDeviceFound(const __int64 Address);
	virtual void __fastcall DoDiscoveringCompleted(const int Error);
	virtual void __fastcall DoDiscoveringStarted(void);
	virtual void __fastcall DoIoCapabilityRequest(const __int64 Address, TwclBluetoothMitmProtection &Mitm, TwclBluetoothIoCapability &IoCapability, bool &OobPresent);
	virtual void __fastcall DoNumericComparison(const __int64 Address, const unsigned Number, bool &Confirm);
	virtual void __fastcall DoOobDataRequest(const __int64 Address, TwclBluetoothOobData &OobData);
	virtual void __fastcall DoPasskeyNotification(const __int64 Address, const unsigned Passkey);
	virtual void __fastcall DoPasskeyRequest(const __int64 Address, unsigned &Passkey);
	virtual void __fastcall DoPinRequest(const __int64 Address, System::UnicodeString &Pin);
	virtual void __fastcall DoProtectionLevelRequest(const __int64 Address, TwclBluetoothLeProtectionLevel &Protection);
	virtual void __fastcall DoStatusChanged(void);
	virtual int __fastcall HalGetFunctions(void) = 0 ;
	virtual int __fastcall HalInitialize(void) = 0 ;
	virtual int __fastcall HalLoadApi(void) = 0 ;
	virtual int __fastcall HalRegisterCallbacks(void) = 0 ;
	virtual int __fastcall HalSetGlobalInstance(void) = 0 ;
	virtual void __fastcall HalClearFunctions(void) = 0 ;
	virtual void __fastcall HalClearGlobalInstance(void) = 0 ;
	virtual void __fastcall HalTerminateOperations(void) = 0 ;
	virtual void __fastcall HalUninitialize(void) = 0 ;
	virtual void __fastcall HalUnloadApi(void) = 0 ;
	virtual void __fastcall HalUnregisterCallbacks(void) = 0 ;
	virtual int __fastcall HalGetAddress(/* out */ __int64 &Address) = 0 ;
	virtual int __fastcall HalGetCod(/* out */ unsigned &Cod) = 0 ;
	virtual int __fastcall HalGetConnectable(/* out */ bool &Connectable) = 0 ;
	virtual int __fastcall HalGetDiscoverable(/* out */ bool &Discoverable) = 0 ;
	virtual int __fastcall HalGetHciVersion(/* out */ System::Byte &Version, /* out */ System::Word &Revision) = 0 ;
	virtual int __fastcall HalGetLmpVersion(/* out */ System::Byte &Version, /* out */ System::Word &Subversion) = 0 ;
	virtual int __fastcall HalGetManufacturer(/* out */ System::Word &Manu) = 0 ;
	virtual int __fastcall HalGetName(/* out */ System::UnicodeString &Name) = 0 ;
	virtual int __fastcall HalSetCod(const unsigned Cod) = 0 ;
	virtual int __fastcall HalSetConnectable(const bool Connectable) = 0 ;
	virtual int __fastcall HalSetDiscoverable(const bool Discoverable) = 0 ;
	virtual int __fastcall HalSetName(const System::UnicodeString Name) = 0 ;
	virtual int __fastcall HalTurnOn(void) = 0 ;
	virtual int __fastcall HalTurnOff(void) = 0 ;
	virtual int __fastcall HalDiscoverClassic(const System::Byte Timeout) = 0 ;
	virtual int __fastcall HalDiscoverBle(const System::Byte Timeout) = 0 ;
	virtual int __fastcall HalTerminate(void) = 0 ;
	virtual int __fastcall HalEnumPairedDevices(/* out */ TwclBluetoothAddresses &Devices) = 0 ;
	virtual int __fastcall HalEnumConnectedDevices(/* out */ TwclBluetoothAddresses &Devices) = 0 ;
	virtual int __fastcall HalEnumRemoteServices(const __int64 Address, const System::PGUID Uuid, /* out */ TwclBluetoothServices &Services) = 0 ;
	virtual int __fastcall HalIsRemoteDeviceInRange(const __int64 Address, /* out */ bool &InRange) = 0 ;
	virtual int __fastcall HalRemoteDisconnect(const __int64 Address) = 0 ;
	virtual int __fastcall HalGetRemoteAddressType(const __int64 Address, /* out */ TwclBluetoothAddressType &AddrType) = 0 ;
	virtual int __fastcall HalGetRemoteCod(const __int64 Address, /* out */ unsigned &Cod) = 0 ;
	virtual int __fastcall HalGetRemoteDeviceType(const __int64 Address, /* out */ TwclBluetoothDeviceType &DevType) = 0 ;
	virtual int __fastcall HalGetRemoteName(const __int64 Address, /* out */ System::UnicodeString &Name) = 0 ;
	virtual int __fastcall HalGetRemotePaired(const __int64 Address, /* out */ bool &Paired) = 0 ;
	virtual int __fastcall HalGetRemoteConnectedStatus(const __int64 Address, /* out */ bool &Connected) = 0 ;
	virtual int __fastcall HalGetRemoteRssi(const __int64 Address, /* out */ SByte &Rssi) = 0 ;
	virtual int __fastcall HalConfirmReply(const __int64 Address, const bool Confirm) = 0 ;
	virtual int __fastcall HalIoCapabilityReply(const __int64 Address, const TwclBluetoothMitmProtection Mitm, const TwclBluetoothIoCapability IoCapability, const bool OobPresent) = 0 ;
	virtual int __fastcall HalNumericComparisonReply(const __int64 Address, const unsigned Value, const bool Confirm) = 0 ;
	virtual int __fastcall HalOobDataReply(const __int64 Address, const TwclBluetoothOobData &OobData) = 0 ;
	virtual int __fastcall HalPasskeyReply(const __int64 Address, const unsigned Passkey) = 0 ;
	virtual int __fastcall HalPinReply(const __int64 Address, const System::UnicodeString Pin) = 0 ;
	virtual int __fastcall HalProtectionLevelReply(const __int64 Address, const TwclBluetoothLeProtectionLevel Protection) = 0 ;
	virtual int __fastcall HalRemotePair(const __int64 Address, const TwclBluetoothPairingMethod Method) = 0 ;
	virtual int __fastcall HalRemoteUnpair(const __int64 Address, const TwclBluetoothPairingMethod Method) = 0 ;
	virtual int __fastcall HalGetSimplePairingMode(/* out */ bool &Enabled) = 0 ;
	virtual int __fastcall HalSetSimplePairingMode(const bool Enable) = 0 ;
	virtual int __fastcall HalCreateConnection(const TwclBluetoothConnectionType ConnectionType, /* out */ Wclconnections::TwclCustomConnection* &Connection) = 0 ;
	virtual int __fastcall HalCreateComPort(const __int64 Address, const GUID &Service, /* out */ System::Word &Number) = 0 ;
	virtual int __fastcall HalDestroyComPort(const System::Word Number) = 0 ;
	virtual int __fastcall HalEnumComPorts(/* out */ TwclVirtualComPorts &ComPorts) = 0 ;
	virtual int __fastcall HalEnumInstalledServices(const __int64 Address, /* out */ TwclBluetoothInstalledServices &Services) = 0 ;
	virtual int __fastcall HalInstallDevice(const __int64 Address, const GUID &Service) = 0 ;
	virtual int __fastcall HalUninstallDevice(const __int64 Address, const GUID &Service) = 0 ;
	virtual TwclBluetoothApi __fastcall HalGetApi(void) = 0 ;
	virtual System::UnicodeString __fastcall HalGetApiName(void) = 0 ;
	virtual bool __fastcall HalGetAvailable(void) = 0 ;
	virtual bool __fastcall HalGetPlugged(void) = 0 ;
	int __fastcall CheckAvailable(void);
	__property bool IncludePaired = {read=FIncludePaired, nodefault};
	__property bool LeDiscovering = {read=FLeDiscovering, nodefault};
	__property Wclmessaging::TwclMessageProcessingMethod MessageProcessing = {read=GetMessageProcessing, nodefault};
	__property __int64 PairAddress = {read=FPairAddress};
	__property Wclmessaging::TwclMessageReceiver* Receiver = {read=FReceiver};
	__property Wclsync::TwclThreadId ThreadId = {read=GetThreadId, nodefault};
	
public:
	__fastcall virtual TwclBluetoothRadio(TwclBluetoothManager* const Manager);
	__fastcall virtual ~TwclBluetoothRadio(void);
	int __fastcall GetAddress(/* out */ __int64 &Address);
	int __fastcall GetBluetoothVersion(/* out */ TwclBluetoothVersion &Version);
	int __fastcall GetCod(/* out */ unsigned &Cod);
	int __fastcall GetConnectable(/* out */ bool &Connectable);
	int __fastcall GetDiscoverable(/* out */ bool &Discoverable);
	int __fastcall GetHciVersion(/* out */ System::Byte &Version, /* out */ System::Word &Revision);
	int __fastcall GetLmpVersion(/* out */ System::Byte &Version, /* out */ System::Word &Subversion);
	int __fastcall GetManufacturer(/* out */ System::Word &Manu);
	int __fastcall GetName(/* out */ System::UnicodeString &Name);
	int __fastcall SetCod(const unsigned Cod);
	int __fastcall SetConnectable(const bool Connectable);
	int __fastcall SetDiscoverable(const bool Discoverable);
	int __fastcall SetName(const System::UnicodeString Name);
	int __fastcall TurnOn(void);
	int __fastcall TurnOff(void);
	int __fastcall Discover(const System::Byte Timeout, const TwclBluetoothDiscoverKind Kind, const bool IncludePaired = false);
	int __fastcall Terminate(void);
	int __fastcall EnumPairedDevices(/* out */ TwclBluetoothAddresses &Devices)/* overload */;
	int __fastcall EnumPairedDevices(const TwclBluetoothDiscoverKind Kind, /* out */ TwclBluetoothAddresses &Devices)/* overload */;
	int __fastcall EnumConnectedDevices(/* out */ TwclBluetoothAddresses &Devices);
	int __fastcall EnumRemoteServices(const __int64 Address, System::PGUID Uuid, /* out */ TwclBluetoothServices &Services);
	int __fastcall IsRemoteDeviceInRange(const __int64 Address, /* out */ bool &InRange);
	int __fastcall RemoteDisconnect(const __int64 Address);
	int __fastcall GetRemoteAddressType(const __int64 Address, /* out */ TwclBluetoothAddressType &AddrType);
	int __fastcall GetRemoteCod(const __int64 Address, /* out */ unsigned &Cod);
	int __fastcall GetRemoteDeviceType(const __int64 Address, /* out */ TwclBluetoothDeviceType &DevType);
	int __fastcall GetRemoteName(const __int64 Address, /* out */ System::UnicodeString &Name);
	int __fastcall GetRemotePaired(const __int64 Address, /* out */ bool &Paired);
	int __fastcall GetRemoteConnectedStatus(const __int64 Address, /* out */ bool &Connected);
	int __fastcall GetRemoteRssi(const __int64 Address, /* out */ SByte &Rssi);
	int __fastcall RemotePair(const __int64 Address, const TwclBluetoothPairingMethod Method = (TwclBluetoothPairingMethod)(0x0));
	int __fastcall RemoteUnpair(const __int64 Address, const TwclBluetoothPairingMethod Method = (TwclBluetoothPairingMethod)(0x0), const bool Force = false);
	int __fastcall GetSimplePairingMode(/* out */ bool &Enabled);
	int __fastcall SetSimplePairingMode(const bool Enable);
	int __fastcall CreateComPort(const __int64 Address, const GUID &Service, /* out */ System::Word &Number);
	int __fastcall DestroyComPort(const System::Word Number);
	int __fastcall EnumComPorts(/* out */ TwclVirtualComPorts &ComPorts);
	int __fastcall EnumInstalledServices(const __int64 Address, /* out */ TwclBluetoothInstalledServices &Services);
	int __fastcall InstallDevice(const __int64 Address, const GUID &Service);
	int __fastcall UninstallDevice(const __int64 Address, const GUID &Service);
	__property TwclBluetoothApi Api = {read=HalGetApi, nodefault};
	__property System::UnicodeString ApiName = {read=HalGetApiName};
	__property bool Available = {read=GetAvailable, nodefault};
	__property bool ClassicSupported = {read=GetClassicSupported, nodefault};
	__property TwclVirtualComPorts ComPorts = {read=FComPorts};
	__property bool Discovering = {read=FDiscovering, nodefault};
	__property bool LeSupported = {read=GetLeSupported, nodefault};
	__property TwclBluetoothManager* Manager = {read=FManager};
	__property bool Pairing = {read=FPairing, nodefault};
	__property bool Plugged = {read=GetPlugged, nodefault};
};


class PASCALIMPLEMENTATION TwclBluetoothManager : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
public:
	TwclBluetoothRadio* operator[](const int Index) { return Radios[Index]; }
	
private:
	bool FActive;
	Wclsync::TwclCriticalSection* FCS;
	bool FHandlePairing;
	Wclsync::TwclMutex* FInstance;
	Wclmessaging::TwclMessageProcessingMethod FMessageProcessing;
	System::Classes::TList* FRadios;
	Wclmessaging::TwclMessageReceiver* FReceiver;
	Wclsync::TwclThreadId FThreadId;
	bool FUseBled112;
	System::Classes::TNotifyEvent FAfterOpen;
	System::Classes::TNotifyEvent FBeforeClose;
	TwclBluetoothDeviceResultEvent FOnAuthenticationCompleted;
	System::Classes::TNotifyEvent FOnClosed;
	TwclBluetoothConfirmEvent FOnConfirm;
	TwclBluetoothDeviceEvent FOnDeviceFound;
	TwclBluetoothResultEvent FOnDiscoveringCompleted;
	TwclBluetoothEvent FOnDiscoveringStarted;
	TwclBluetoothIoCapabilityRequestEvent FOnIoCapabilityRequest;
	TwclBluetoothNumericComparisonEvent FOnNumericComparison;
	TwclBluetoothOobDataRequestEvent FOnOobDataRequest;
	TwclBluetoothPasskeyNotificationEvent FOnPasskeyNotification;
	TwclBluetoothPasskeyRequestEvent FOnPasskeyRequest;
	TwclBluetoothPinRequestEvent FOnPinRequest;
	TwclBluetoothProtectionLevelRequestEvent FOnProtectionLevelRequest;
	TwclBluetoothEvent FOnStatusChanged;
	void __fastcall MessageReceived(Wclmessaging::TwclMessage* const Message);
	void __fastcall AddRadio(TwclBluetoothRadio* const Radio);
	bool __fastcall GetDiscovering(void);
	int __fastcall GetCount(void);
	TwclBluetoothRadio* __fastcall GetRadios(const int Index);
	void __fastcall SetMessageProcessing(const Wclmessaging::TwclMessageProcessingMethod Value);
	
protected:
	virtual void __fastcall DoAfterOpen(void);
	virtual void __fastcall DoAuthenticationCompleted(TwclBluetoothRadio* const Radio, const __int64 Address, const int Error);
	virtual void __fastcall DoBeforeClose(void);
	virtual void __fastcall DoClosed(void);
	virtual void __fastcall DoConfirm(TwclBluetoothRadio* const Radio, const __int64 Address, bool &Confirm);
	virtual void __fastcall DoDeviceFound(TwclBluetoothRadio* const Radio, const __int64 Address);
	virtual void __fastcall DoDiscoveringCompleted(TwclBluetoothRadio* const Radio, const int Error);
	virtual void __fastcall DoDiscoveringStarted(TwclBluetoothRadio* const Radio);
	virtual void __fastcall DoIoCapabilityRequest(TwclBluetoothRadio* const Radio, const __int64 Address, TwclBluetoothMitmProtection &Mitm, TwclBluetoothIoCapability &IoCapability, bool &OobPresent);
	virtual void __fastcall DoNumericComparison(TwclBluetoothRadio* const Radio, const __int64 Address, const unsigned Number, bool &Confirm);
	virtual void __fastcall DoOobDataRequest(TwclBluetoothRadio* const Radio, const __int64 Address, TwclBluetoothOobData &OobData);
	virtual void __fastcall DoPasskeyNotification(TwclBluetoothRadio* const Radio, const __int64 Address, const unsigned Passkey);
	virtual void __fastcall DoPasskeyRequest(TwclBluetoothRadio* const Radio, const __int64 Address, unsigned &Passkey);
	virtual void __fastcall DoPinRequest(TwclBluetoothRadio* const Radio, const __int64 Address, System::UnicodeString &Pin);
	virtual void __fastcall DoProtectionLevelRequest(TwclBluetoothRadio* const Radio, const __int64 Address, TwclBluetoothLeProtectionLevel &Protection);
	virtual void __fastcall DoStatusChanged(TwclBluetoothRadio* const Radio);
	
public:
	__fastcall virtual TwclBluetoothManager(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TwclBluetoothManager(void);
	int __fastcall Close(void);
	int __fastcall Open(const TwclBluetoothApis Apis, const bool HandlePairing = true)/* overload */;
	int __fastcall Open(const bool HandlePairing = true)/* overload */;
	int __fastcall GetRadio(/* out */ TwclBluetoothRadio* &Radio)/* overload */;
	int __fastcall GetLeRadio(/* out */ TwclBluetoothRadio* &Radio)/* overload */;
	int __fastcall GetClassicRadio(/* out */ TwclBluetoothRadio* &Radio)/* overload */;
	__property bool Active = {read=FActive, nodefault};
	__property int Count = {read=GetCount, nodefault};
	__property bool Discovering = {read=GetDiscovering, nodefault};
	__property bool HandlePairing = {read=FHandlePairing, nodefault};
	__property TwclBluetoothRadio* Radios[const int Index] = {read=GetRadios/*, default*/};
	
__published:
	__property Wclmessaging::TwclMessageProcessingMethod MessageProcessing = {read=FMessageProcessing, write=SetMessageProcessing, default=1};
	__property System::Classes::TNotifyEvent AfterOpen = {read=FAfterOpen, write=FAfterOpen};
	__property System::Classes::TNotifyEvent BeforeClose = {read=FBeforeClose, write=FBeforeClose};
	__property TwclBluetoothDeviceResultEvent OnAuthenticationCompleted = {read=FOnAuthenticationCompleted, write=FOnAuthenticationCompleted};
	__property System::Classes::TNotifyEvent OnClosed = {read=FOnClosed, write=FOnClosed};
	__property TwclBluetoothConfirmEvent OnConfirm = {read=FOnConfirm, write=FOnConfirm};
	__property TwclBluetoothDeviceEvent OnDeviceFound = {read=FOnDeviceFound, write=FOnDeviceFound};
	__property TwclBluetoothResultEvent OnDiscoveringCompleted = {read=FOnDiscoveringCompleted, write=FOnDiscoveringCompleted};
	__property TwclBluetoothEvent OnDiscoveringStarted = {read=FOnDiscoveringStarted, write=FOnDiscoveringStarted};
	__property TwclBluetoothIoCapabilityRequestEvent OnIoCapabilityRequest = {read=FOnIoCapabilityRequest, write=FOnIoCapabilityRequest};
	__property TwclBluetoothNumericComparisonEvent OnNumericComparison = {read=FOnNumericComparison, write=FOnNumericComparison};
	__property TwclBluetoothOobDataRequestEvent OnOobDataRequest = {read=FOnOobDataRequest, write=FOnOobDataRequest};
	__property TwclBluetoothPasskeyNotificationEvent OnPasskeyNotification = {read=FOnPasskeyNotification, write=FOnPasskeyNotification};
	__property TwclBluetoothPasskeyRequestEvent OnPasskeyRequest = {read=FOnPasskeyRequest, write=FOnPasskeyRequest};
	__property TwclBluetoothPinRequestEvent OnPinRequest = {read=FOnPinRequest, write=FOnPinRequest};
	__property TwclBluetoothProtectionLevelRequestEvent OnProtectionLevelRequest = {read=FOnProtectionLevelRequest, write=FOnProtectionLevelRequest};
	__property TwclBluetoothEvent OnStatusChanged = {read=FOnStatusChanged, write=FOnStatusChanged};
};


class PASCALIMPLEMENTATION TwclRfCommClientConnection : public Wclconnections::TwclClientDataConnection
{
	typedef Wclconnections::TwclClientDataConnection inherited;
	
private:
	TwclBluetoothRadio* FRadio;
	__int64 FAddress;
	bool FAuthentication;
	System::Byte FChannel;
	bool FEncryption;
	GUID FService;
	
protected:
	virtual void __fastcall MessageReceived(Wclmessaging::TwclMessage* const Message);
	
public:
	__fastcall virtual TwclRfCommClientConnection(TwclBluetoothRadio* const Radio);
	HIDESBASE int __fastcall Connect(const __int64 Address, const GUID &Service, const System::Byte Channel, const bool Authentication, const bool Encryption, const unsigned Timeout);
	__property __int64 Address = {read=FAddress};
	__property bool Authentication = {read=FAuthentication, nodefault};
	__property System::Byte Channel = {read=FChannel, nodefault};
	__property bool Encryption = {read=FEncryption, nodefault};
	__property TwclBluetoothRadio* Radio = {read=FRadio};
	__property GUID Service = {read=FService};
public:
	/* TwclClientConnection.Destroy */ inline __fastcall virtual ~TwclRfCommClientConnection(void) { }
	
};


class PASCALIMPLEMENTATION TwclRfCommServerClientConnection : public Wclconnections::TwclServerClientDataConnection
{
	typedef Wclconnections::TwclServerClientDataConnection inherited;
	
private:
	__int64 FAddress;
	
protected:
	void __fastcall SetAddress(const __int64 Address);
	
public:
	__fastcall virtual TwclRfCommServerClientConnection(void);
	__property __int64 Address = {read=FAddress};
public:
	/* TwclServerClientConnection.Destroy */ inline __fastcall virtual ~TwclRfCommServerClientConnection(void) { }
	
};


class PASCALIMPLEMENTATION TwclRfCommServerConnection : public Wclconnections::TwclServerDataConnection
{
	typedef Wclconnections::TwclServerDataConnection inherited;
	
private:
	TwclBluetoothRadio* FRadio;
	bool FAuthentication;
	System::Byte FAssignedChannel;
	System::Byte FChannel;
	bool FEncryption;
	GUID FService;
	System::UnicodeString FServiceName;
	TwclBluetoothGetSdpAttributesEvent FGetSdpAttributes;
	
protected:
	virtual void __fastcall MessageReceived(Wclmessaging::TwclMessage* const Message);
	void __fastcall SetAssignedChannel(const System::Byte Channel);
	virtual void __fastcall DoGetSdpAttributes(/* out */ TwclBluetoothSdpProtocols &Protocols, /* out */ TwclBluetoothSdpProfiles &Profiles, /* out */ TwclBluetoothSdpFormats &Formats, /* out */ unsigned &Cod);
	
public:
	__fastcall virtual TwclRfCommServerConnection(TwclBluetoothRadio* const Radio);
	HIDESBASE int __fastcall Listen(const GUID &Service, const System::UnicodeString ServiceName, const System::Byte Channel, const bool Authentication, const bool Encryption);
	__property bool Authentication = {read=FAuthentication, nodefault};
	__property System::Byte AssignedChannel = {read=FAssignedChannel, nodefault};
	__property System::Byte Channel = {read=FChannel, nodefault};
	__property bool Encryption = {read=FEncryption, nodefault};
	__property TwclBluetoothRadio* Radio = {read=FRadio};
	__property GUID Service = {read=FService};
	__property System::UnicodeString ServiceName = {read=FServiceName};
	__property TwclBluetoothGetSdpAttributesEvent GetSdpAttributes = {read=FGetSdpAttributes, write=FGetSdpAttributes};
public:
	/* TwclServerConnection.Destroy */ inline __fastcall virtual ~TwclRfCommServerConnection(void) { }
	
};


class PASCALIMPLEMENTATION TwclGattClientConnection : public Wclconnections::TwclClientConnection
{
	typedef Wclconnections::TwclClientConnection inherited;
	
private:
	__int64 FAddress;
	bool FConnectOnRead;
	bool FForceNotifications;
	TwclBluetoothRadio* FRadio;
	bool FReliableWriteActive;
	System::Word FReliableWriteHandle;
	bool FRemoteDisconnected;
	System::Classes::TList* FSubscriptions;
	System::Classes::TList* FSubscribedDescriptors;
	TwclGattCharacteristicChangedEvent FOnCharacteristicChanged;
	System::Classes::TNotifyEvent FOnConnectionParamsChanged;
	System::Classes::TNotifyEvent FOnConnectionPhyChanged;
	System::Classes::TNotifyEvent FOnMaxPduSizeChanged;
	void __fastcall ProcessCharacteristicChangeMessage(const System::Word Handle, const void * Value, const unsigned Size);
	
protected:
	virtual int __fastcall PrepareForConnection(void);
	virtual void __fastcall MessageReceived(Wclmessaging::TwclMessage* const Message);
	virtual int __fastcall HalConnect(Wclsync::TwclEvent* const Event);
	virtual int __fastcall HalDisconnect(void);
	virtual void __fastcall DoCharacteristicChanged(const System::Word Handle, const TwclGattCharacteristicValue Value);
	virtual void __fastcall DoConnectionParamsChanged(void);
	virtual void __fastcall DoConnectionPhyChanged(void);
	virtual void __fastcall DoMaxPduSizeChanged(void);
	virtual int __fastcall HalReadCharacteristics(const TwclGattService &Service, const TwclGattOperationFlag Flag, /* out */ TwclGattCharacteristics &Characteristics) = 0 ;
	virtual int __fastcall HalReadCharacteristicValue(const TwclGattCharacteristic &Characteristic, const TwclGattOperationFlag Flag, const TwclGattProtectionLevel Protection, /* out */ TwclGattCharacteristicValue &Value) = 0 ;
	virtual int __fastcall HalReadDescriptors(const TwclGattCharacteristic &Characteristic, const TwclGattOperationFlag Flag, /* out */ TwclGattDescriptors &Descriptors) = 0 ;
	virtual int __fastcall HalReadDescriptorValue(const TwclGattDescriptor &Descriptor, const TwclGattOperationFlag Flag, const TwclGattProtectionLevel Protection, TwclGattDescriptorValue &Value) = 0 ;
	virtual int __fastcall HalReadIncludedServices(const TwclGattService &Service, const TwclGattOperationFlag Flag, /* out */ TwclGattServices &Services) = 0 ;
	virtual int __fastcall HalReadServices(const TwclGattOperationFlag Flag, /* out */ TwclGattServices &Services) = 0 ;
	virtual int __fastcall HalWriteCharacteristicValue(const TwclGattCharacteristic &Characteristic, const TwclGattProtectionLevel Protection, const TwclGattCharacteristicValue Value) = 0 ;
	virtual int __fastcall HalWriteDescriptorValue(const TwclGattDescriptor &Descriptor, const TwclGattProtectionLevel Protection, const TwclGattDescriptorValue &Value) = 0 ;
	virtual int __fastcall HalAbortReliableWrite(void) = 0 ;
	virtual int __fastcall HalBeginReliableWrite(const TwclGattCharacteristic &Characteristic) = 0 ;
	virtual int __fastcall HalEndReliableWrite(void) = 0 ;
	virtual int __fastcall HalSubscribe(const TwclGattCharacteristic &Characteristic, /* out */ NativeUInt &Hdl) = 0 ;
	virtual int __fastcall HalUnsubscribe(const NativeUInt Hdl) = 0 ;
	virtual int __fastcall HalGetConnectionParams(/* out */ TwclBluetoothLeConnectionParameters &Params) = 0 ;
	virtual int __fastcall HalSetConnectionParams(const TwclBluetoothLeConnectionParametersType Params) = 0 /* overload */;
	virtual int __fastcall HalSetConnectionParams(const TwclBluetoothLeConnectionParametersValue &Params) = 0 /* overload */;
	virtual int __fastcall HalGetMaxPduSize(/* out */ System::Word &Size) = 0 ;
	virtual int __fastcall HalGetConnectionPhyInfo(/* out */ TwclBluetoothLeConnectionPhy &Info) = 0 ;
	
public:
	__fastcall virtual TwclGattClientConnection(TwclBluetoothRadio* const Radio);
	int __fastcall ReadCharacteristics(const TwclGattService &Service, const TwclGattOperationFlag Flag, /* out */ TwclGattCharacteristics &Characteristics);
	int __fastcall ReadCharacteristicValue(const TwclGattCharacteristic &Characteristic, const TwclGattOperationFlag Flag, const TwclGattProtectionLevel Protection, /* out */ TwclGattCharacteristicValue &Value);
	int __fastcall ReadDescriptors(const TwclGattCharacteristic &Characteristic, const TwclGattOperationFlag Flag, /* out */ TwclGattDescriptors &Descriptors);
	int __fastcall ReadDescriptorValue(const TwclGattDescriptor &Descriptor, const TwclGattOperationFlag Flag, const TwclGattProtectionLevel Protection, /* out */ TwclGattDescriptorValue &Value);
	int __fastcall ReadIncludedServices(const TwclGattService &Service, const TwclGattOperationFlag Flag, /* out */ TwclGattServices &Services);
	int __fastcall ReadServices(const TwclGattOperationFlag Flag, /* out */ TwclGattServices &Services);
	int __fastcall WriteCharacteristicValue(const TwclGattCharacteristic &Characteristic, const TwclGattProtectionLevel Protection, const TwclGattCharacteristicValue Value, const TwclGattWriteKind WriteKind);
	int __fastcall WriteDescriptorValue(const TwclGattDescriptor &Descriptor, const TwclGattProtectionLevel Protection, const TwclGattDescriptorValue &Value);
	int __fastcall AbortReliableWrite(void);
	int __fastcall BeginReliableWrite(const TwclGattCharacteristic &Characteristic);
	int __fastcall EndReliableWrite(void);
	int __fastcall WriteClientConfiguration(const TwclGattCharacteristic &Characteristic, const bool Subscribe, const TwclGattOperationFlag Flag, const TwclGattProtectionLevel Protection);
	int __fastcall Subscribe(const TwclGattCharacteristic &Characteristic);
	int __fastcall Unsubscribe(const TwclGattCharacteristic &Characteristic);
	HIDESBASE int __fastcall Connect(const __int64 Address, const bool ConnectOnRead, const bool ForceNotifications);
	int __fastcall GetConnectionParams(/* out */ TwclBluetoothLeConnectionParameters &Params);
	int __fastcall SetConnectionParams(const TwclBluetoothLeConnectionParametersType Params)/* overload */;
	int __fastcall SetConnectionParams(const TwclBluetoothLeConnectionParametersValue &Params)/* overload */;
	int __fastcall GetMaxPduSize(/* out */ System::Word &Size);
	int __fastcall GetMaxPayloadSize(/* out */ System::Word &Size);
	int __fastcall GetConnectionPhyInfo(/* out */ TwclBluetoothLeConnectionPhy &Info);
	__property __int64 Address = {read=FAddress};
	__property bool ConnectOnRead = {read=FConnectOnRead, nodefault};
	__property bool ForceNotifications = {read=FForceNotifications, nodefault};
	__property TwclBluetoothRadio* Radio = {read=FRadio};
	__property bool ReliableWriteActive = {read=FReliableWriteActive, nodefault};
	__property TwclGattCharacteristicChangedEvent OnCharacteristicChanged = {read=FOnCharacteristicChanged, write=FOnCharacteristicChanged};
	__property System::Classes::TNotifyEvent OnConnectionParamsChanged = {read=FOnConnectionParamsChanged, write=FOnConnectionParamsChanged};
	__property System::Classes::TNotifyEvent OnConnectionPhyChanged = {read=FOnConnectionPhyChanged, write=FOnConnectionPhyChanged};
	__property System::Classes::TNotifyEvent OnMaxPduSizeChanged = {read=FOnMaxPduSizeChanged, write=FOnMaxPduSizeChanged};
public:
	/* TwclClientConnection.Destroy */ inline __fastcall virtual ~TwclGattClientConnection(void) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclGattLocalAttribute : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Wclsync::TwclCriticalSection* FCS;
	TwclGattUuid FUuid;
	
protected:
	__property Wclsync::TwclCriticalSection* CS = {read=FCS};
	
public:
	__fastcall TwclGattLocalAttribute(const TwclGattUuid &Uuid);
	__fastcall virtual ~TwclGattLocalAttribute(void);
	__property TwclGattUuid Uuid = {read=FUuid};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclGattLocalCharacteristic : public TwclGattLocalAttribute
{
	typedef TwclGattLocalAttribute inherited;
	
public:
	TwclGattServerClient* operator[](const int Index) { return Clients[Index]; }
	
private:
	bool FAdded;
	System::Classes::TList* FClients;
	int FError;
	TwclGattLocalCharacteristicParameters FParams;
	TwclGattLocalService* FService;
	TwclGattServerClient* __fastcall GetClients(const int Index);
	int __fastcall GetCount(void);
	bool __fastcall IsNotifiable(void);
	void __fastcall AddClient(TwclGattServerClient* const Client);
	void __fastcall RemoveClient(TwclGattServerClient* const Client);
	int __fastcall Add(void);
	int __fastcall Remove(void);
	
protected:
	virtual int __fastcall HalAdd(void) = 0 ;
	virtual int __fastcall HalRemove(void) = 0 ;
	virtual int __fastcall HalNotify(const __int64 Address, const void * Data, const unsigned Size) = 0 ;
	
public:
	__fastcall TwclGattLocalCharacteristic(TwclGattLocalService* const Service, const TwclGattUuid &Uuid, const TwclGattLocalCharacteristicParameters &Params);
	__fastcall virtual ~TwclGattLocalCharacteristic(void);
	int __fastcall Notify(const void * Data, const unsigned Size)/* overload */;
	int __fastcall Notify(const __int64 Address, const void * Data, const unsigned Size)/* overload */;
	__property bool Added = {read=FAdded, nodefault};
	__property TwclGattServerClient* Clients[const int Index] = {read=GetClients/*, default*/};
	__property int Count = {read=GetCount, nodefault};
	__property int Error = {read=FError, nodefault};
	__property TwclGattLocalCharacteristicParameters Params = {read=FParams};
	__property TwclGattLocalService* Service = {read=FService};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclGattLocalService : public TwclGattLocalAttribute
{
	typedef TwclGattLocalAttribute inherited;
	
public:
	TwclGattLocalCharacteristic* operator[](const int Index) { return Characteristics[Index]; }
	
private:
	bool FAdded;
	int FError;
	System::Classes::TList* FCharacteristics;
	TwclGattServerConnection* FServer;
	bool FConnectable;
	bool FDiscoverable;
	int __fastcall AddAllCharacteristics(void);
	void __fastcall ClearAllCharacteristics(void);
	void __fastcall DeleteSelectedCharacteristic(const int Index);
	void __fastcall RemoveAddedCharacteristics(void);
	void __fastcall RemoveAllCharacteristics(void);
	void __fastcall SetConnectable(const bool Value);
	void __fastcall SetDiscoverable(const bool Value);
	int __fastcall Add(void);
	int __fastcall Remove(void);
	TwclGattLocalCharacteristic* __fastcall GetCharacteristics(const int Index);
	int __fastcall GetCharacteristicsCount(void);
	
protected:
	virtual int __fastcall HalAdd(void) = 0 ;
	virtual int __fastcall HalCreate(void) = 0 ;
	virtual int __fastcall HalDestroy(void) = 0 ;
	virtual int __fastcall HalRemove(void) = 0 ;
	virtual int __fastcall HalCreateCharacteristic(const TwclGattUuid &Uuid, const TwclGattLocalCharacteristicParameters &Params, /* out */ TwclGattLocalCharacteristic* &Characteristic) = 0 ;
	
public:
	__fastcall TwclGattLocalService(TwclGattServerConnection* const Server, const TwclGattUuid &Uuid);
	__fastcall virtual ~TwclGattLocalService(void);
	int __fastcall AddCharacteristic(const TwclGattUuid &Uuid, const TwclGattLocalCharacteristicParameters &Params, /* out */ TwclGattLocalCharacteristic* &Characteristic);
	int __fastcall ClearCharacteristics(void);
	int __fastcall DeleteCharacteristic(const int Index);
	__property bool Connectable = {read=FConnectable, write=SetConnectable, nodefault};
	__property bool Discoverable = {read=FDiscoverable, write=SetDiscoverable, nodefault};
	__property bool Added = {read=FAdded, nodefault};
	__property TwclGattLocalCharacteristic* Characteristics[const int Index] = {read=GetCharacteristics/*, default*/};
	__property int CharacteristicsCount = {read=GetCharacteristicsCount, nodefault};
	__property int Error = {read=FError, nodefault};
	__property TwclGattServerConnection* Server = {read=FServer};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TwclGattLocalCharacteristicRequest : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	unsigned FOffset;
	bool FProcessed;
	__int64 FTimestamp;
	
protected:
	void __fastcall SetProcessed(const int Error);
	int __fastcall CheckProcessed(void);
	virtual int __fastcall HalRespondWithError(const int Error) = 0 ;
	
public:
	__fastcall virtual TwclGattLocalCharacteristicRequest(const __int64 Timestamp, const unsigned Offset);
	__fastcall virtual ~TwclGattLocalCharacteristicRequest(void);
	virtual int __fastcall RespondWithError(const int Error);
	__property unsigned Offset = {read=FOffset, nodefault};
	__property __int64 Timestamp = {read=FTimestamp};
};


class PASCALIMPLEMENTATION TwclGattLocalCharacteristicReadRequest : public TwclGattLocalCharacteristicRequest
{
	typedef TwclGattLocalCharacteristicRequest inherited;
	
private:
	unsigned FSize;
	
protected:
	virtual int __fastcall HalRespond(const void * Data, const unsigned Size) = 0 ;
	
public:
	__fastcall virtual TwclGattLocalCharacteristicReadRequest(const __int64 Timestamp, const unsigned Offset, const unsigned Size);
	int __fastcall Respond(const void * Data, const unsigned Size);
	__property unsigned Size = {read=FSize, nodefault};
public:
	/* TwclGattLocalCharacteristicRequest.Destroy */ inline __fastcall virtual ~TwclGattLocalCharacteristicReadRequest(void) { }
	
};


class PASCALIMPLEMENTATION TwclGattLocalCharacteristicWriteRequest : public TwclGattLocalCharacteristicRequest
{
	typedef TwclGattLocalCharacteristicRequest inherited;
	
private:
	void *FData;
	unsigned FSize;
	bool FWithResponse;
	
protected:
	virtual int __fastcall HalRespond(void) = 0 ;
	
public:
	__fastcall virtual TwclGattLocalCharacteristicWriteRequest(const __int64 Timestamp, const unsigned Offset, const void * Data, const unsigned Size, const bool WithResponse);
	__fastcall virtual ~TwclGattLocalCharacteristicWriteRequest(void);
	int __fastcall Respond(void);
	virtual int __fastcall RespondWithError(const int Error);
	__property void * Data = {read=FData};
	__property unsigned Size = {read=FSize, nodefault};
	__property bool WithResponse = {read=FWithResponse, nodefault};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothGattServerClientParams : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall TwclBluetoothGattServerClientParams(void);
	__fastcall virtual ~TwclBluetoothGattServerClientParams(void);
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TwclGattServerClient : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TwclGattLocalCharacteristic* operator[](const int Index) { return Characteristics[Index]; }
	
private:
	__int64 FAddress;
	System::Classes::TList* FCharacteristics;
	TwclGattServerConnection* FConnection;
	TwclGattLocalCharacteristic* __fastcall GetCharacteristics(const int Index);
	int __fastcall GetCount(void);
	bool __fastcall GetSubscribed(void);
	void __fastcall AddCharacteristic(TwclGattLocalCharacteristic* const Characteristic);
	void __fastcall RemoveCharacteristic(TwclGattLocalCharacteristic* const Characteristic);
	
protected:
	virtual void __fastcall AfterConnect(TwclBluetoothGattServerClientParams* const Params);
	virtual void __fastcall AfterDisconnect(void);
	virtual void __fastcall AfterSubscribed(TwclGattLocalCharacteristic* const Characteristic);
	virtual void __fastcall AfterUnsubscribed(TwclGattLocalCharacteristic* const Characteristic);
	virtual int __fastcall HalDisconnect(void) = 0 ;
	virtual int __fastcall HalGetConnectionParams(/* out */ TwclBluetoothLeConnectionParameters &Params) = 0 ;
	virtual int __fastcall HalSetConnectionParams(const TwclBluetoothLeConnectionParametersType Params) = 0 /* overload */;
	virtual int __fastcall HalSetConnectionParams(const TwclBluetoothLeConnectionParametersValue &Params) = 0 /* overload */;
	virtual int __fastcall HalGetMaxNotificationSize(/* out */ System::Word &Size) = 0 ;
	virtual int __fastcall HalGetMaxPduSize(/* out */ System::Word &Size) = 0 ;
	virtual int __fastcall HalGetConnectionPhyInfo(/* out */ TwclBluetoothLeConnectionPhy &Info) = 0 ;
	
public:
	__fastcall virtual TwclGattServerClient(const __int64 Address, TwclGattServerConnection* const Connection);
	__fastcall virtual ~TwclGattServerClient(void);
	int __fastcall Disconnect(void);
	int __fastcall GetConnectionParams(/* out */ TwclBluetoothLeConnectionParameters &Params);
	int __fastcall SetConnectionParams(const TwclBluetoothLeConnectionParametersType Params)/* overload */;
	int __fastcall SetConnectionParams(const TwclBluetoothLeConnectionParametersValue &Params)/* overload */;
	int __fastcall GetMaxNotificationSize(/* out */ System::Word &Size);
	int __fastcall GetMaxPduSize(/* out */ System::Word &Size);
	int __fastcall GetMaxPayloadSize(/* out */ System::Word &Size);
	int __fastcall GetConnectionPhyInfo(/* out */ TwclBluetoothLeConnectionPhy &Info);
	__property __int64 Address = {read=FAddress};
	__property TwclGattLocalCharacteristic* Characteristics[const int Index] = {read=GetCharacteristics/*, default*/};
	__property TwclGattServerConnection* Connection = {read=FConnection};
	__property int Count = {read=GetCount, nodefault};
	__property bool Subscribed = {read=GetSubscribed, nodefault};
};


class PASCALIMPLEMENTATION TwclGattServerConnection : public Wclconnections::TwclCustomConnection
{
	typedef Wclconnections::TwclCustomConnection inherited;
	
private:
	System::Classes::TList* FClients;
	Wclsync::TwclMutex* FMutex;
	TwclBluetoothRadio* FRadio;
	System::Classes::TList* FServices;
	Wclsync::TwclThread* FThread;
	int FInitResult;
	Wclsync::TwclManualResetEvent* FInitEvent;
	Wclsync::TwclManualResetEvent* FTermEvent;
	TwclGattServerClientEvent FOnClientConnected;
	TwclGattServerClientEvent FOnClientDisconnected;
	TwclGattServerClientEvent FOnConnectionParamsChanged;
	TwclGattServerClientEvent FOnConnectionPhyChanged;
	TwclGattServerClientEvent FOnMaxPduSizeChanged;
	TwclGattServerClientEvent FOnNotificationSizeChanged;
	TwclGattLocalCharacteristicReadEvent FOnRead;
	System::Classes::TNotifyEvent FOnStarted;
	System::Classes::TNotifyEvent FOnStopped;
	TwclGattLocalCharacteristicSubscribedClientsChangedEvent FOnSubscribed;
	TwclGattLocalCharacteristicSubscribedClientsChangedEvent FOnUnsubscribed;
	TwclGattLocalCharacteristicWriteEvent FOnWrite;
	void __fastcall ThreadProc(void);
	void __fastcall NotifyDisconnected(void);
	void __fastcall NotifyUnsubscribed(void);
	bool __fastcall AddClient(const __int64 Address, /* out */ TwclGattServerClient* &Client);
	TwclGattServerClient* __fastcall FindClient(const __int64 Address);
	TwclGattServerClient* __fastcall RemoveClient(const __int64 Address);
	TwclGattServerClient* __fastcall ClientConnected(const __int64 Address, TwclBluetoothGattServerClientParams* const Params);
	void __fastcall ClientDisconnected(const __int64 Address);
	bool __fastcall GetActive(void);
	TwclGattServerClient* __fastcall GetClients(const int Index);
	int __fastcall GetClientsCount(void);
	TwclGattLocalService* __fastcall GetServices(const int Index);
	int __fastcall GetServicesCount(void);
	
protected:
	virtual void __fastcall MessageReceived(Wclmessaging::TwclMessage* const Message);
	virtual void __fastcall DoClientConnected(TwclGattServerClient* const Client);
	virtual void __fastcall DoClientDisconnected(TwclGattServerClient* const Client);
	virtual void __fastcall DoConnectionParamsChanged(TwclGattServerClient* const Client);
	virtual void __fastcall DoConnectionPhyChanged(TwclGattServerClient* const Client);
	virtual void __fastcall DoMaxPduSizeChanged(TwclGattServerClient* const Client);
	virtual void __fastcall DoNotificationSizeChanged(TwclGattServerClient* const Client);
	virtual void __fastcall DoRead(TwclGattServerClient* const Client, TwclGattLocalCharacteristic* const Characteristic, TwclGattLocalCharacteristicReadRequest* const Request);
	virtual void __fastcall DoStarted(void);
	virtual void __fastcall DoStopped(void);
	virtual void __fastcall DoSubscribed(TwclGattServerClient* const Client, TwclGattLocalCharacteristic* const Characteristic);
	virtual void __fastcall DoUnsubscribed(TwclGattServerClient* const Client, TwclGattLocalCharacteristic* const Characteristic);
	virtual void __fastcall DoWrite(TwclGattServerClient* const Client, TwclGattLocalCharacteristic* const Characteristic, TwclGattLocalCharacteristicWriteRequest* const Request);
	virtual int __fastcall HalInitialize(void) = 0 ;
	virtual int __fastcall HalUninitialize(void) = 0 ;
	virtual int __fastcall HalCreateService(const TwclGattUuid &Uuid, /* out */ TwclGattLocalService* &Service) = 0 ;
	virtual TwclGattServerClient* __fastcall HalCreateClient(const __int64 Address) = 0 ;
	
public:
	__fastcall virtual TwclGattServerConnection(TwclBluetoothRadio* const Radio);
	__fastcall virtual ~TwclGattServerConnection(void);
	int __fastcall Start(void);
	int __fastcall Stop(void);
	int __fastcall AddService(const TwclGattUuid &Uuid, /* out */ TwclGattLocalService* &Service);
	int __fastcall ClearServices(void);
	int __fastcall DeleteService(const int Index);
	__property bool Active = {read=GetActive, nodefault};
	__property TwclGattServerClient* Clients[const int Index] = {read=GetClients};
	__property int ClientsCount = {read=GetClientsCount, nodefault};
	__property TwclBluetoothRadio* Radio = {read=FRadio};
	__property TwclGattLocalService* Services[const int Index] = {read=GetServices};
	__property int ServicesCount = {read=GetServicesCount, nodefault};
	__property TwclGattServerClientEvent OnClientConnected = {read=FOnClientConnected, write=FOnClientConnected};
	__property TwclGattServerClientEvent OnClientDisconnected = {read=FOnClientDisconnected, write=FOnClientDisconnected};
	__property TwclGattServerClientEvent OnConnectionParamsChanged = {read=FOnConnectionParamsChanged, write=FOnConnectionParamsChanged};
	__property TwclGattServerClientEvent OnConnectionPhyChanged = {read=FOnConnectionPhyChanged, write=FOnConnectionPhyChanged};
	__property TwclGattServerClientEvent OnMaxPduSizeChanged = {read=FOnMaxPduSizeChanged, write=FOnMaxPduSizeChanged};
	__property TwclGattServerClientEvent OnNotificationSizeChanged = {read=FOnNotificationSizeChanged, write=FOnNotificationSizeChanged};
	__property TwclGattLocalCharacteristicReadEvent OnRead = {read=FOnRead, write=FOnRead};
	__property System::Classes::TNotifyEvent OnStarted = {read=FOnStarted, write=FOnStarted};
	__property System::Classes::TNotifyEvent OnStopped = {read=FOnStopped, write=FOnStopped};
	__property TwclGattLocalCharacteristicSubscribedClientsChangedEvent OnSubscribed = {read=FOnSubscribed, write=FOnSubscribed};
	__property TwclGattLocalCharacteristicSubscribedClientsChangedEvent OnUnsubscribed = {read=FOnUnsubscribed, write=FOnUnsubscribed};
	__property TwclGattLocalCharacteristicWriteEvent OnWrite = {read=FOnWrite, write=FOnWrite};
};


class PASCALIMPLEMENTATION TwclBluetoothLeBeaconWatcherConnection : public Wclconnections::TwclCustomConnection
{
	typedef Wclconnections::TwclCustomConnection inherited;
	
private:
	bool FMonitoring;
	TwclBluetoothRadio* FRadio;
	bool FAllowExtendedAdvertisements;
	TwclBluetoothLeScanningMode FScanningMode;
	TwclBluetoothLeScanParametersType FScanParametersType;
	System::Word FScanInterval;
	System::Word FScanWindow;
	TwclBluetoothLeAdvertisementAppearanceFrameEvent FOnAdvertisementAppearanceFrame;
	TwclBluetoothLeAdvertisementFrameInformationEvent FOnAdvertisementFrameInformation;
	TwclBluetoothLeAdvertisementExtFrameInformationEvent FOnAdvertisementExtFrameInformation;
	TwclBluetoothLeAdvertisementRawFrameEvent FOnAdvertisementRawFrame;
	TwclBluetoothLeAdvertisementReceivedEvent FOnAdvertisementReceived;
	TwclBluetoothLeAdvertisementService16DataFrameEvent FOnAdvertisementService16DataFrame;
	TwclBluetoothLeAdvertisementService32DataFrameEvent FOnAdvertisementService32DataFrame;
	TwclBluetoothLeAdvertisementService128DataFrameEvent FOnAdvertisementService128DataFrame;
	TwclBluetoothLeAdvertisementServiceSol16FrameEvent FOnAdvertisementServiceSol16Frame;
	TwclBluetoothLeAdvertisementServiceSol32FrameEvent FOnAdvertisementServiceSol32Frame;
	TwclBluetoothLeAdvertisementServiceSol128FrameEvent FOnAdvertisementServiceSol128Frame;
	TwclBluetoothLeAdvertisementTxPowerLevelFrameEvent FOnAdvertisementTxPowerLevelFrame;
	TwclBluetoothLeAdvertisementUuidFrameEvent FOnAdvertisementUuidFrame;
	TwclBluetoothLeAltBeaconFrameEvent FOnAltBeaconFrame;
	TwclBluetoothLeAppleAirdropFrameEvent FOnAppleAirdropFrame;
	TwclBluetoothLeAppleAirplaySourceFrameEvent FOnAppleAirplaySourceFrame;
	TwclBluetoothLeAppleAirplayTargetFrameEvent FOnAppleAirplayTargetFrame;
	TwclBluetoothLeAppleAirprintFrameEvent FOnAppleAirprintFrame;
	TwclBluetoothLeAppleFindMyFrameEvent FOnAppleFindMyFrame;
	TwclBluetoothLeAppleHandoffFrameEvent FOnAppleHandoffFrame;
	TwclBluetoothLeAppleHeySiriFrameEvent FOnAppleHeySiriFrame;
	TwclBluetoothLeAppleHomeKitFrameEvent FOnAppleHomeKitFrame;
	TwclBluetoothLeAppleiBeaconFrameEvent FOnAppleiBeaconFrame;
	TwclBluetoothLeAppleMagicSwitchFrameEvent FOnAppleMagicSwitchFrame;
	TwclBluetoothLeAppleNearbyActionFrameEvent FOnAppleNearbyActionFrame;
	TwclBluetoothLeAppleNearbyInfoFrameEvent FOnAppleNearbyInfoFrame;
	TwclBluetoothLeAppleProximityPairingFrameEvent FOnAppleProximityPairingFrame;
	TwclBluetoothLeAppleTetheringSourceFrameEvent FOnAppleTetheringSourceFrame;
	TwclBluetoothLeAppleTetheringTargetFrameEvent FOnAppleTetheringTargetFrame;
	TwclBluetoothLeAppleUnknownFrameEvent FOnAppleUnknownFrame;
	TwclBluetoothLeDriAsdMessageEvent FOnDriAsdMessage;
	TwclBluetoothLeEddystoneTlmFrameEvent FOnEddystoneTlmFrame;
	TwclBluetoothLeEddystoneUidFrameEvent FOnEddystoneUidFrame;
	TwclBluetoothLeEddystoneUrlFrameEvent FOnEddystoneUrlFrame;
	TwclBluetoothLeManufacturerRawFrameEvent FOnManufacturerRawFrame;
	TwclBluetoothLeMicrosoftCdpBeaconFrameEvent FOnMicrosoftCdpBeaconFrame;
	System::Classes::TNotifyEvent FOnStarted;
	System::Classes::TNotifyEvent FOnStopped;
	void __fastcall ResetScanParameters(void);
	void __fastcall ParseAppleAirdrop(const TwclBluetoothLeAdvertisementInfo &Info, const int Ndx, const TwclBluetoothLeAdvertisementFrameRawData Data);
	void __fastcall ParseAppleAirplaySource(const TwclBluetoothLeAdvertisementInfo &Info, const int Ndx, const TwclBluetoothLeAdvertisementFrameRawData Data);
	void __fastcall ParseAppleAirplayTarget(const TwclBluetoothLeAdvertisementInfo &Info, const int Ndx, const TwclBluetoothLeAdvertisementFrameRawData Data);
	void __fastcall ParseAppleAirprint(const TwclBluetoothLeAdvertisementInfo &Info, const int Ndx, const TwclBluetoothLeAdvertisementFrameRawData Data);
	void __fastcall ParseAppleFindMy(const TwclBluetoothLeAdvertisementInfo &Info, const int Ndx, const TwclBluetoothLeAdvertisementFrameRawData Data);
	void __fastcall ParseAppleHandoff(const TwclBluetoothLeAdvertisementInfo &Info, const int Ndx, const TwclBluetoothLeAdvertisementFrameRawData Data);
	void __fastcall ParseAppleHeySiri(const TwclBluetoothLeAdvertisementInfo &Info, const int Ndx, const TwclBluetoothLeAdvertisementFrameRawData Data);
	void __fastcall ParseAppleHomeKit(const TwclBluetoothLeAdvertisementInfo &Info, const int Ndx, const TwclBluetoothLeAdvertisementFrameRawData Data);
	void __fastcall ParseAppleiBeacon(const TwclBluetoothLeAdvertisementInfo &Info, const int Ndx, const TwclBluetoothLeAdvertisementFrameRawData Data);
	void __fastcall ParseAppleMagicSwitch(const TwclBluetoothLeAdvertisementInfo &Info, const int Ndx, const TwclBluetoothLeAdvertisementFrameRawData Data);
	void __fastcall ParseAppleNearbyAction(const TwclBluetoothLeAdvertisementInfo &Info, const int Ndx, const TwclBluetoothLeAdvertisementFrameRawData Data);
	void __fastcall ParseAppleNearbyInfo(const TwclBluetoothLeAdvertisementInfo &Info, const int Ndx, const TwclBluetoothLeAdvertisementFrameRawData Data);
	void __fastcall ParseAppleProximityPairing(const TwclBluetoothLeAdvertisementInfo &Info, const int Ndx, const TwclBluetoothLeAdvertisementFrameRawData Data);
	void __fastcall ParseAppleTetheringSource(const TwclBluetoothLeAdvertisementInfo &Info, const int Ndx, const TwclBluetoothLeAdvertisementFrameRawData Data);
	void __fastcall ParseAppleTetheringTarget(const TwclBluetoothLeAdvertisementInfo &Info, const int Ndx, const TwclBluetoothLeAdvertisementFrameRawData Data);
	void __fastcall ParseAppleUnknownFrame(const TwclBluetoothLeAdvertisementInfo &Info, const int Ndx, const TwclBluetoothLeAdvertisementFrameRawData Data);
	void __fastcall ParseAppleAdvertisement(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const TwclBluetoothLeAdvertisementFrameRawData Data);
	void __fastcall ParseMsCdpBeacon(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const TwclBluetoothLeAdvertisementFrameRawData Data);
	void __fastcall ParseAltBeacon(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const System::Word CompanyId, const TwclBluetoothLeAdvertisementFrameRawData Data);
	void __fastcall ParseManufacturerRawFrame(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const System::Word CompanyId, const TwclBluetoothLeAdvertisementFrameRawData Data);
	void __fastcall ParseDriAsdMessage(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const System::Word Uuid, const TwclBluetoothLeAdvertisementFrameRawData Data);
	void __fastcall ParseEddystoneBeacons(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const System::Word Uuid, const TwclBluetoothLeAdvertisementFrameRawData Data);
	void __fastcall ProcessAdvertisementMessage(Wclmessaging::TwclMessage* const Message);
	
protected:
	void __fastcall GetScanParamValues(/* out */ System::Word &Interval, /* out */ System::Word &Window);
	virtual void __fastcall MessageReceived(Wclmessaging::TwclMessage* const Message);
	virtual void __fastcall DoAdvertisementAppearanceFrame(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const System::Word Appearance);
	virtual void __fastcall DoAdvertisementFrameInformation(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const System::UnicodeString Name, const TwclBluetoothLeAdvertisementType PacketType, const TwclBluetoothLeAdvertisementFlags Flags);
	virtual void __fastcall DoAdvertisementExtFrameInformation(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const TwclBluetoothAddressType AddressType, const SByte TxPower, const TwclBluetoothLeExtendedFrameFlags Flags, const TwclBluetoothLeAdvertisementPhy PrimaryPhy, const TwclBluetoothLeAdvertisementPhy SecondaryPhy);
	virtual void __fastcall DoAdvertisementRawFrame(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const System::Byte DataType, const TwclBluetoothLeAdvertisementFrameRawData Data);
	virtual void __fastcall DoAdvertisementReceived(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const TwclBluetoothLeAdvertisementFrameRawData Data);
	virtual void __fastcall DoAdvertisementService16DataFrame(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const System::Word Uuid, const TwclBluetoothLeAdvertisementFrameRawData Data);
	virtual void __fastcall DoAdvertisementService32DataFrame(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const unsigned Uuid, const TwclBluetoothLeAdvertisementFrameRawData Data);
	virtual void __fastcall DoAdvertisementService128DataFrame(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const GUID &Uuid, const TwclBluetoothLeAdvertisementFrameRawData Data);
	virtual void __fastcall DoAdvertisementServiceSol16Frame(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const System::Word Uuid);
	virtual void __fastcall DoAdvertisementServiceSol32Frame(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const unsigned Uuid);
	virtual void __fastcall DoAdvertisementServiceSol128Frame(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const GUID &Uuid);
	virtual void __fastcall DoAdvertisementTxPowerLevelFrame(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const SByte TxPower);
	virtual void __fastcall DoAdvertisementUuidFrame(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const GUID &Uuid);
	virtual void __fastcall DoAltBeaconFrame(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const System::Word CompanyId, const System::Word Major, const System::Word Minor, const GUID &Uuid, const SByte TxRssi, const System::Byte Reserved, const TwclBluetoothLeAdvertisementFrameRawData Data);
	virtual void __fastcall DoAppleAirdropFrame(const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleAirdropFrameData &Data);
	virtual void __fastcall DoAppleAirplaySourceFrame(const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleAirplaySourceFrameData Data);
	virtual void __fastcall DoAppleAirplayTargetFrame(const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleAirplayTargetFrameData &Data);
	virtual void __fastcall DoAppleAirprintFrame(const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleAirprintFrameData &Data);
	virtual void __fastcall DoAppleFindMyFrame(const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleFindMyFrameData &Data);
	virtual void __fastcall DoAppleHandoffFrame(const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleHandoffFrameData &Data);
	virtual void __fastcall DoAppleHeySiriFrame(const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleHeySiriFrameData &Data);
	virtual void __fastcall DoAppleHomeKitFrame(const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleHomeKitFrameData &Data);
	virtual void __fastcall DoAppleiBeaconFrame(const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleiBeaconFrameData &Data);
	virtual void __fastcall DoAppleMagicSwitchFrame(const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleMagicSwitchFrameData Data);
	virtual void __fastcall DoAppleNearbyActionFrame(const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleNearbyActionFrameData &Data);
	virtual void __fastcall DoAppleNearbyInfoFrame(const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleNearbyInfoFrameData &Data);
	virtual void __fastcall DoAppleProximityPairingFrame(const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleProximityPairingFrameData &Data);
	virtual void __fastcall DoAppleTetheringSourceFrame(const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleTetheringSourceFrameData &Data);
	virtual void __fastcall DoAppleTetheringTargetFrame(const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleTetheringTargetFrameData Data);
	virtual void __fastcall DoAppleUnknownFrame(const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleUnknownFrameData &Data);
	virtual void __fastcall DoDriAsdMessage(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const Wcldricommon::TwclDriRawData Raw);
	virtual void __fastcall DoEddystoneTlmFrame(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const unsigned AdvCnt, const System::Word Batt, const unsigned SecCnt, const double Temp, const TwclBluetoothLeAdvertisementFrameRawData Data);
	virtual void __fastcall DoEddystoneUidFrame(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const SByte TxRssi, const GUID &Uuid, const TwclBluetoothLeAdvertisementFrameRawData Data);
	virtual void __fastcall DoEddystoneUrlFrame(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const SByte TxRssi, const System::UnicodeString Url);
	virtual void __fastcall DoManufacturerRawFrame(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const System::Word CompanyId, const TwclBluetoothLeAdvertisementFrameRawData Data);
	virtual void __fastcall DoMicrosoftCdpBeaconFrame(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const TwclBluetoothLeCdpBeaconScenarioType ScenarioType, const System::Byte Version, const TwclBluetoothLeCdpBeaconDeviceType DeviceType, const System::Byte SubVersion, const bool ShareNearBy, const bool AddressAsDeviceId, const TwclBluetoothLeCdpBeaconExtendedDeviceStatuses ExtendedDeviceStatus, const TwclBluetoothLeCdpBeaconSalt Salt, const TwclBluetoothLeCdpBeaconHash Hash);
	virtual void __fastcall DoStarted(void);
	virtual void __fastcall DoStopped(void);
	virtual int __fastcall HalStart(void) = 0 ;
	virtual int __fastcall HalStop(void) = 0 ;
	
public:
	__fastcall virtual TwclBluetoothLeBeaconWatcherConnection(TwclBluetoothRadio* const Radio);
	__fastcall virtual ~TwclBluetoothLeBeaconWatcherConnection(void);
	int __fastcall Start(const bool AllowExtendedAdvertisements, const TwclBluetoothLeScanningMode ScanningMode, const TwclBluetoothLeScanParametersType ScanParametersType, const System::Word ScanInterval, const System::Word ScanWindow);
	int __fastcall Stop(void);
	__property bool Monitoring = {read=FMonitoring, nodefault};
	__property TwclBluetoothRadio* Radio = {read=FRadio};
	__property bool AllowExtendedAdvertisements = {read=FAllowExtendedAdvertisements, nodefault};
	__property TwclBluetoothLeScanningMode ScanningMode = {read=FScanningMode, nodefault};
	__property TwclBluetoothLeScanParametersType ScanParametersType = {read=FScanParametersType, nodefault};
	__property System::Word ScanInterval = {read=FScanInterval, nodefault};
	__property System::Word ScanWindow = {read=FScanWindow, nodefault};
	__property TwclBluetoothLeAdvertisementAppearanceFrameEvent OnAdvertisementAppearanceFrame = {read=FOnAdvertisementAppearanceFrame, write=FOnAdvertisementAppearanceFrame};
	__property TwclBluetoothLeAdvertisementFrameInformationEvent OnAdvertisementFrameInformation = {read=FOnAdvertisementFrameInformation, write=FOnAdvertisementFrameInformation};
	__property TwclBluetoothLeAdvertisementExtFrameInformationEvent OnAdvertisementExtFrameInformation = {read=FOnAdvertisementExtFrameInformation, write=FOnAdvertisementExtFrameInformation};
	__property TwclBluetoothLeAdvertisementRawFrameEvent OnAdvertisementRawFrame = {read=FOnAdvertisementRawFrame, write=FOnAdvertisementRawFrame};
	__property TwclBluetoothLeAdvertisementReceivedEvent OnAdvertisementReceived = {read=FOnAdvertisementReceived, write=FOnAdvertisementReceived};
	__property TwclBluetoothLeAdvertisementService16DataFrameEvent OnAdvertisementService16DataFrame = {read=FOnAdvertisementService16DataFrame, write=FOnAdvertisementService16DataFrame};
	__property TwclBluetoothLeAdvertisementService32DataFrameEvent OnAdvertisementService32DataFrame = {read=FOnAdvertisementService32DataFrame, write=FOnAdvertisementService32DataFrame};
	__property TwclBluetoothLeAdvertisementService128DataFrameEvent OnAdvertisementService128DataFrame = {read=FOnAdvertisementService128DataFrame, write=FOnAdvertisementService128DataFrame};
	__property TwclBluetoothLeAdvertisementServiceSol16FrameEvent OnAdvertisementServiceSol16Frame = {read=FOnAdvertisementServiceSol16Frame, write=FOnAdvertisementServiceSol16Frame};
	__property TwclBluetoothLeAdvertisementServiceSol32FrameEvent OnAdvertisementServiceSol32Frame = {read=FOnAdvertisementServiceSol32Frame, write=FOnAdvertisementServiceSol32Frame};
	__property TwclBluetoothLeAdvertisementServiceSol128FrameEvent OnAdvertisementServiceSol128Frame = {read=FOnAdvertisementServiceSol128Frame, write=FOnAdvertisementServiceSol128Frame};
	__property TwclBluetoothLeAdvertisementTxPowerLevelFrameEvent OnAdvertisementTxPowerLevelFrame = {read=FOnAdvertisementTxPowerLevelFrame, write=FOnAdvertisementTxPowerLevelFrame};
	__property TwclBluetoothLeAdvertisementUuidFrameEvent OnAdvertisementUuidFrame = {read=FOnAdvertisementUuidFrame, write=FOnAdvertisementUuidFrame};
	__property TwclBluetoothLeAltBeaconFrameEvent OnAltBeaconFrame = {read=FOnAltBeaconFrame, write=FOnAltBeaconFrame};
	__property TwclBluetoothLeAppleAirdropFrameEvent OnAppleAirdropFrame = {read=FOnAppleAirdropFrame, write=FOnAppleAirdropFrame};
	__property TwclBluetoothLeAppleAirplaySourceFrameEvent OnAppleAirplaySourceFrame = {read=FOnAppleAirplaySourceFrame, write=FOnAppleAirplaySourceFrame};
	__property TwclBluetoothLeAppleAirplayTargetFrameEvent OnAppleAirplayTargetFrame = {read=FOnAppleAirplayTargetFrame, write=FOnAppleAirplayTargetFrame};
	__property TwclBluetoothLeAppleAirprintFrameEvent OnAppleAirprintFrame = {read=FOnAppleAirprintFrame, write=FOnAppleAirprintFrame};
	__property TwclBluetoothLeAppleFindMyFrameEvent OnAppleFindMyFrame = {read=FOnAppleFindMyFrame, write=FOnAppleFindMyFrame};
	__property TwclBluetoothLeAppleHandoffFrameEvent OnAppleHandoffFrame = {read=FOnAppleHandoffFrame, write=FOnAppleHandoffFrame};
	__property TwclBluetoothLeAppleHeySiriFrameEvent OnAppleHeySiriFrame = {read=FOnAppleHeySiriFrame, write=FOnAppleHeySiriFrame};
	__property TwclBluetoothLeAppleHomeKitFrameEvent OnAppleHomeKitFrame = {read=FOnAppleHomeKitFrame, write=FOnAppleHomeKitFrame};
	__property TwclBluetoothLeAppleiBeaconFrameEvent OnAppleiBeaconFrame = {read=FOnAppleiBeaconFrame, write=FOnAppleiBeaconFrame};
	__property TwclBluetoothLeAppleMagicSwitchFrameEvent OnAppleMagicSwitchFrame = {read=FOnAppleMagicSwitchFrame, write=FOnAppleMagicSwitchFrame};
	__property TwclBluetoothLeAppleNearbyActionFrameEvent OnAppleNearbyActionFrame = {read=FOnAppleNearbyActionFrame, write=FOnAppleNearbyActionFrame};
	__property TwclBluetoothLeAppleNearbyInfoFrameEvent OnAppleNearbyInfoFrame = {read=FOnAppleNearbyInfoFrame, write=FOnAppleNearbyInfoFrame};
	__property TwclBluetoothLeAppleProximityPairingFrameEvent OnAppleProximityPairingFrame = {read=FOnAppleProximityPairingFrame, write=FOnAppleProximityPairingFrame};
	__property TwclBluetoothLeAppleTetheringSourceFrameEvent OnAppleTetheringSourceFrame = {read=FOnAppleTetheringSourceFrame, write=FOnAppleTetheringSourceFrame};
	__property TwclBluetoothLeAppleTetheringTargetFrameEvent OnAppleTetheringTargetFrame = {read=FOnAppleTetheringTargetFrame, write=FOnAppleTetheringTargetFrame};
	__property TwclBluetoothLeAppleUnknownFrameEvent OnAppleUnknownFrame = {read=FOnAppleUnknownFrame, write=FOnAppleUnknownFrame};
	__property TwclBluetoothLeDriAsdMessageEvent OnDriAsdMessage = {read=FOnDriAsdMessage, write=FOnDriAsdMessage};
	__property TwclBluetoothLeEddystoneTlmFrameEvent OnEddystoneTlmFrame = {read=FOnEddystoneTlmFrame, write=FOnEddystoneTlmFrame};
	__property TwclBluetoothLeEddystoneUidFrameEvent OnEddystoneUidFrame = {read=FOnEddystoneUidFrame, write=FOnEddystoneUidFrame};
	__property TwclBluetoothLeEddystoneUrlFrameEvent OnEddystoneUrlFrame = {read=FOnEddystoneUrlFrame, write=FOnEddystoneUrlFrame};
	__property TwclBluetoothLeManufacturerRawFrameEvent OnManufacturerRawFrame = {read=FOnManufacturerRawFrame, write=FOnManufacturerRawFrame};
	__property TwclBluetoothLeMicrosoftCdpBeaconFrameEvent OnMicrosoftCdpBeaconFrame = {read=FOnMicrosoftCdpBeaconFrame, write=FOnMicrosoftCdpBeaconFrame};
	__property System::Classes::TNotifyEvent OnStarted = {read=FOnStarted, write=FOnStarted};
	__property System::Classes::TNotifyEvent OnStopped = {read=FOnStopped, write=FOnStopped};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLeAdvertisement : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Wclsync::TwclCriticalSection* FCS;
	
protected:
	__property Wclsync::TwclCriticalSection* CS = {read=FCS};
	
public:
	__fastcall TwclBluetoothLeAdvertisement(void);
	__fastcall virtual ~TwclBluetoothLeAdvertisement(void);
	virtual void __fastcall GetFrames(/* out */ TwclBluetoothLeAdvertisementFrames &Frames) = 0 ;
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLeTxRssiAdvertisement : public TwclBluetoothLeAdvertisement
{
	typedef TwclBluetoothLeAdvertisement inherited;
	
private:
	SByte FTxRssi;
	
public:
	__fastcall TwclBluetoothLeTxRssiAdvertisement(const SByte TxRssi);
	__property SByte TxRssi = {read=FTxRssi, nodefault};
public:
	/* TwclBluetoothLeAdvertisement.Destroy */ inline __fastcall virtual ~TwclBluetoothLeTxRssiAdvertisement(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLeIdAdvertisement : public TwclBluetoothLeTxRssiAdvertisement
{
	typedef TwclBluetoothLeTxRssiAdvertisement inherited;
	
private:
	System::Word FMajor;
	System::Word FMinor;
	GUID FUuid;
	
public:
	__fastcall TwclBluetoothLeIdAdvertisement(const SByte TxRssi, const System::Word Major, const System::Word Minor, const GUID &Uuid);
	__property System::Word Major = {read=FMajor, nodefault};
	__property System::Word Minor = {read=FMinor, nodefault};
	__property GUID Uuid = {read=FUuid};
public:
	/* TwclBluetoothLeAdvertisement.Destroy */ inline __fastcall virtual ~TwclBluetoothLeIdAdvertisement(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLeiBeaconAdvertisement : public TwclBluetoothLeIdAdvertisement
{
	typedef TwclBluetoothLeIdAdvertisement inherited;
	
public:
	__fastcall TwclBluetoothLeiBeaconAdvertisement(const SByte TxRssi, const System::Word Major, const System::Word Minor, const GUID &Uuid);
	virtual void __fastcall GetFrames(/* out */ TwclBluetoothLeAdvertisementFrames &Frames);
public:
	/* TwclBluetoothLeAdvertisement.Destroy */ inline __fastcall virtual ~TwclBluetoothLeiBeaconAdvertisement(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLeCompanyIdAdvertisement : public TwclBluetoothLeIdAdvertisement
{
	typedef TwclBluetoothLeIdAdvertisement inherited;
	
private:
	System::Word FCompanyId;
	
public:
	__fastcall TwclBluetoothLeCompanyIdAdvertisement(const SByte TxRssi, const System::Word Major, const System::Word Minor, const GUID &Uuid, const System::Word CompanyId);
	__property System::Word CompanyId = {read=FCompanyId, nodefault};
public:
	/* TwclBluetoothLeAdvertisement.Destroy */ inline __fastcall virtual ~TwclBluetoothLeCompanyIdAdvertisement(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLeProximityBeaconAdvertisement : public TwclBluetoothLeCompanyIdAdvertisement
{
	typedef TwclBluetoothLeCompanyIdAdvertisement inherited;
	
public:
	__fastcall TwclBluetoothLeProximityBeaconAdvertisement(const SByte TxRssi, const System::Word Major, const System::Word Minor, const GUID &Uuid, const System::Word CompanyId);
	virtual void __fastcall GetFrames(/* out */ TwclBluetoothLeAdvertisementFrames &Frames);
public:
	/* TwclBluetoothLeAdvertisement.Destroy */ inline __fastcall virtual ~TwclBluetoothLeProximityBeaconAdvertisement(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLeAltBeaconAdvertisement : public TwclBluetoothLeCompanyIdAdvertisement
{
	typedef TwclBluetoothLeCompanyIdAdvertisement inherited;
	
private:
	System::Byte FReserved;
	
public:
	__fastcall TwclBluetoothLeAltBeaconAdvertisement(const SByte TxRssi, const System::Word Major, const System::Word Minor, const GUID &Uuid, const System::Word CompanyId, const System::Byte Reserved);
	virtual void __fastcall GetFrames(/* out */ TwclBluetoothLeAdvertisementFrames &Frames);
	__property System::Byte Reserved = {read=FReserved, nodefault};
public:
	/* TwclBluetoothLeAdvertisement.Destroy */ inline __fastcall virtual ~TwclBluetoothLeAltBeaconAdvertisement(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLeEddystoneUidBeaconAdvertisement : public TwclBluetoothLeTxRssiAdvertisement
{
	typedef TwclBluetoothLeTxRssiAdvertisement inherited;
	
private:
	GUID FUuid;
	
public:
	__fastcall TwclBluetoothLeEddystoneUidBeaconAdvertisement(const SByte TxRssi, const GUID &Uuid);
	virtual void __fastcall GetFrames(/* out */ TwclBluetoothLeAdvertisementFrames &Frames);
	__property GUID Uuid = {read=FUuid};
public:
	/* TwclBluetoothLeAdvertisement.Destroy */ inline __fastcall virtual ~TwclBluetoothLeEddystoneUidBeaconAdvertisement(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLeEddystoneUrlBeaconAdvertisement : public TwclBluetoothLeTxRssiAdvertisement
{
	typedef TwclBluetoothLeTxRssiAdvertisement inherited;
	
private:
	System::UnicodeString FUrl;
	TwclEddystoneEncodedUrl FUrlEncoded;
	System::Byte FUrlScheme;
	int __fastcall ParseUrl(const System::UnicodeString Value);
	
public:
	__fastcall TwclBluetoothLeEddystoneUrlBeaconAdvertisement(const SByte TxRssi, const System::UnicodeString Url);
	virtual void __fastcall GetFrames(/* out */ TwclBluetoothLeAdvertisementFrames &Frames);
	__property System::UnicodeString Url = {read=FUrl};
public:
	/* TwclBluetoothLeAdvertisement.Destroy */ inline __fastcall virtual ~TwclBluetoothLeEddystoneUrlBeaconAdvertisement(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLe16ServiceAdvertisement : public TwclBluetoothLeAdvertisement
{
	typedef TwclBluetoothLeAdvertisement inherited;
	
private:
	System::Word FUuid;
	
public:
	__fastcall TwclBluetoothLe16ServiceAdvertisement(const System::Word Uuid);
	virtual void __fastcall GetFrames(/* out */ TwclBluetoothLeAdvertisementFrames &Frames);
	__property System::Word Uuid = {read=FUuid, nodefault};
public:
	/* TwclBluetoothLeAdvertisement.Destroy */ inline __fastcall virtual ~TwclBluetoothLe16ServiceAdvertisement(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLe32ServiceAdvertisement : public TwclBluetoothLeAdvertisement
{
	typedef TwclBluetoothLeAdvertisement inherited;
	
private:
	unsigned FUuid;
	
public:
	__fastcall TwclBluetoothLe32ServiceAdvertisement(const unsigned Uuid);
	virtual void __fastcall GetFrames(/* out */ TwclBluetoothLeAdvertisementFrames &Frames);
	__property unsigned Uuid = {read=FUuid, nodefault};
public:
	/* TwclBluetoothLeAdvertisement.Destroy */ inline __fastcall virtual ~TwclBluetoothLe32ServiceAdvertisement(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLe128ServiceAdvertisement : public TwclBluetoothLeAdvertisement
{
	typedef TwclBluetoothLeAdvertisement inherited;
	
private:
	GUID FUuid;
	
public:
	__fastcall TwclBluetoothLe128ServiceAdvertisement(const GUID &Uuid);
	virtual void __fastcall GetFrames(/* out */ TwclBluetoothLeAdvertisementFrames &Frames);
	__property GUID Uuid = {read=FUuid};
public:
	/* TwclBluetoothLeAdvertisement.Destroy */ inline __fastcall virtual ~TwclBluetoothLe128ServiceAdvertisement(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLe16ServiceDataAdvertisement : public TwclBluetoothLe16ServiceAdvertisement
{
	typedef TwclBluetoothLe16ServiceAdvertisement inherited;
	
private:
	TwclBluetoothLeAdvertisementFrameRawData FData;
	
public:
	__fastcall TwclBluetoothLe16ServiceDataAdvertisement(const System::Word Uuid, const TwclBluetoothLeAdvertisementFrameRawData Data);
	virtual void __fastcall GetFrames(/* out */ TwclBluetoothLeAdvertisementFrames &Frames);
	__property TwclBluetoothLeAdvertisementFrameRawData Data = {read=FData};
public:
	/* TwclBluetoothLeAdvertisement.Destroy */ inline __fastcall virtual ~TwclBluetoothLe16ServiceDataAdvertisement(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLe32ServiceDataAdvertisement : public TwclBluetoothLe32ServiceAdvertisement
{
	typedef TwclBluetoothLe32ServiceAdvertisement inherited;
	
private:
	TwclBluetoothLeAdvertisementFrameRawData FData;
	
public:
	__fastcall TwclBluetoothLe32ServiceDataAdvertisement(const unsigned Uuid, const TwclBluetoothLeAdvertisementFrameRawData Data);
	virtual void __fastcall GetFrames(/* out */ TwclBluetoothLeAdvertisementFrames &Frames);
	__property TwclBluetoothLeAdvertisementFrameRawData Data = {read=FData};
public:
	/* TwclBluetoothLeAdvertisement.Destroy */ inline __fastcall virtual ~TwclBluetoothLe32ServiceDataAdvertisement(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLe128ServiceDataAdvertisement : public TwclBluetoothLe128ServiceAdvertisement
{
	typedef TwclBluetoothLe128ServiceAdvertisement inherited;
	
private:
	TwclBluetoothLeAdvertisementFrameRawData FData;
	
public:
	__fastcall TwclBluetoothLe128ServiceDataAdvertisement(const GUID &Uuid, const TwclBluetoothLeAdvertisementFrameRawData Data);
	virtual void __fastcall GetFrames(/* out */ TwclBluetoothLeAdvertisementFrames &Frames);
	__property TwclBluetoothLeAdvertisementFrameRawData Data = {read=FData};
public:
	/* TwclBluetoothLeAdvertisement.Destroy */ inline __fastcall virtual ~TwclBluetoothLe128ServiceDataAdvertisement(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLeCustomAdvertisement : public TwclBluetoothLeAdvertisement
{
	typedef TwclBluetoothLeAdvertisement inherited;
	
private:
	TwclBluetoothLeAdvertisementFrameRawData FData;
	System::Byte FDataType;
	
public:
	__fastcall TwclBluetoothLeCustomAdvertisement(const System::Byte DataType, const TwclBluetoothLeAdvertisementFrameRawData Data);
	virtual void __fastcall GetFrames(/* out */ TwclBluetoothLeAdvertisementFrames &Frames);
	__property TwclBluetoothLeAdvertisementFrameRawData Data = {read=FData};
	__property System::Byte DataType = {read=FDataType, nodefault};
public:
	/* TwclBluetoothLeAdvertisement.Destroy */ inline __fastcall virtual ~TwclBluetoothLeCustomAdvertisement(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLeManufacturerAdvertisement : public TwclBluetoothLeAdvertisement
{
	typedef TwclBluetoothLeAdvertisement inherited;
	
private:
	System::Word FCompanyId;
	TwclBluetoothLeAdvertisementFrameRawData FData;
	
public:
	__fastcall TwclBluetoothLeManufacturerAdvertisement(const System::Word CompanyId, const TwclBluetoothLeAdvertisementFrameRawData Data);
	virtual void __fastcall GetFrames(/* out */ TwclBluetoothLeAdvertisementFrames &Frames);
	__property System::Word CompanyId = {read=FCompanyId, nodefault};
	__property TwclBluetoothLeAdvertisementFrameRawData Data = {read=FData};
public:
	/* TwclBluetoothLeAdvertisement.Destroy */ inline __fastcall virtual ~TwclBluetoothLeManufacturerAdvertisement(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLeRawAdvertisement : public TwclBluetoothLeAdvertisement
{
	typedef TwclBluetoothLeAdvertisement inherited;
	
private:
	TwclBluetoothLeAdvertisementFrameRawData FData;
	System::Byte __fastcall GetFramesCount(const TwclBluetoothLeAdvertisementFrameRawData Data);
	
public:
	__fastcall TwclBluetoothLeRawAdvertisement(const TwclBluetoothLeAdvertisementFrameRawData Data);
	virtual void __fastcall GetFrames(/* out */ TwclBluetoothLeAdvertisementFrames &Frames);
	__property TwclBluetoothLeAdvertisementFrameRawData Data = {read=FData};
public:
	/* TwclBluetoothLeAdvertisement.Destroy */ inline __fastcall virtual ~TwclBluetoothLeRawAdvertisement(void) { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TwclBluetoothLeAdvertiserConnection : public Wclconnections::TwclCustomConnection
{
	typedef Wclconnections::TwclCustomConnection inherited;
	
private:
	System::Classes::TList* FAdvertisements;
	bool FAdvertising;
	System::Word FInterval;
	TwclBluetoothRadio* FRadio;
	bool FAnonymous;
	bool FIncludeTxRssi;
	SByte FPreferredTxRssi;
	TwclBluetoothLeAdvertisementPhy FPrimaryPhy;
	TwclBluetoothLeAdvertisementPhy FSecondaryPhy;
	bool FUseExtendedAdvertisement;
	System::Classes::TNotifyEvent FOnStarted;
	System::Classes::TNotifyEvent FOnStopped;
	int __fastcall CheckAdvertisements(System::Classes::TList* const Advertisements);
	
protected:
	virtual void __fastcall MessageReceived(Wclmessaging::TwclMessage* const Message);
	virtual void __fastcall DoStarted(void);
	virtual void __fastcall DoStopped(void);
	virtual int __fastcall HalStart(void) = 0 ;
	virtual int __fastcall HalStop(void) = 0 ;
	
public:
	__fastcall virtual TwclBluetoothLeAdvertiserConnection(TwclBluetoothRadio* const Radio);
	__fastcall virtual ~TwclBluetoothLeAdvertiserConnection(void);
	int __fastcall Start(System::Classes::TList* const Advertisements, const System::Word Interval, const bool UseExtendedAdvertisement, const bool Anonymous, const bool IncludeTxRssi, const SByte PreferredTxRssi, const TwclBluetoothLeAdvertisementPhy PrimaryPhy, const TwclBluetoothLeAdvertisementPhy SecondaryPhy);
	int __fastcall Stop(void);
	__property System::Classes::TList* Advertisements = {read=FAdvertisements};
	__property bool Advertising = {read=FAdvertising, nodefault};
	__property TwclBluetoothRadio* Radio = {read=FRadio};
	__property System::Word Interval = {read=FInterval, nodefault};
	__property bool Anonymous = {read=FAnonymous, nodefault};
	__property bool IncludeTxRssi = {read=FIncludeTxRssi, nodefault};
	__property SByte PreferredTxRssi = {read=FPreferredTxRssi, nodefault};
	__property TwclBluetoothLeAdvertisementPhy PrimaryPhy = {read=FPrimaryPhy, nodefault};
	__property TwclBluetoothLeAdvertisementPhy SecondaryPhy = {read=FSecondaryPhy, nodefault};
	__property bool UseExtendedAdvertisement = {read=FUseExtendedAdvertisement, nodefault};
	__property System::Classes::TNotifyEvent OnStarted = {read=FOnStarted, write=FOnStarted};
	__property System::Classes::TNotifyEvent OnStopped = {read=FOnStopped, write=FOnStopped};
};


class PASCALIMPLEMENTATION TwclWiiRemoteClientConnection : public Wclconnections::TwclClientConnection
{
	typedef Wclconnections::TwclClientConnection inherited;
	
private:
	__int64 FAddress;
	bool FInitialized;
	TwclBluetoothRadio* FRadio;
	Wclsync::TwclEvent* FDisconnectEvent;
	Wclsync::TwclManualResetEvent* FReadMemoryEvent;
	Wclsync::TwclManualResetEvent* FWriteMemoryEvent;
	char *FReadBuffer;
	System::Word FReadOffset;
	System::Word FReadSize;
	TwclWiiRemoteAccelCalibration FAccelCalibration;
	TwclWiiRemoteBalanceBoardCalibration FBalanceBoardCalibration;
	TwclWiiRemoteClassicControllerCalibration FClassicControllerCalibration;
	TwclWiiRemoteNunchukCalibration FNunchukCalibration;
	bool FAccelEnabled;
	TwclWiiRemoteExtension FExtension;
	TwclWiiRemoteIrMode FIrMode;
	TwclWiiRemoteIrSensitivity FIrSensitivity;
	TwclWiiRemoteLeds FLeds;
	bool FRumble;
	TwclWiiRemoteAccelChangedEvent FOnAccelChanged;
	TwclWiiRemoteBalanceBoardChangedEvent FOnBalanceBoardChanged;
	TwclWiiRemoteButtonsChangedEvent FOnButtonsChanged;
	TwclWiiRemoteClassicControllerChangedEvent FOnClassicControllerChanged;
	TwclWiiRemoteDrumsChangedEvent FOnDrumsChanged;
	System::Classes::TNotifyEvent FOnExtensionAttached;
	System::Classes::TNotifyEvent FOnExtensionDetached;
	TwclWiiRemoteGuitarChangedEvent FOnGuitarChanged;
	TwclWiiRemoteIrChangedEvent FOnIrChanged;
	TwclWiiRemoteNunchukChangedEvent FOnNunchukChanged;
	TwclWiiRemoteStatusChangedEvent FOnStatusChanged;
	int __fastcall CheckInitialized(void);
	TwclWiiRemoteExtension __fastcall DecodeExtensionType(const char * Report);
	double __fastcall GetBalanceBoardSensorValue(const System::Word Sensor, const System::Word Min, const System::Word Mid, const System::Word Max);
	System::Byte __fastcall GetReportId(const bool Accel, const bool Ir, const bool Ext);
	System::Byte __fastcall GetRumbleBit(void);
	int __fastcall Wait(Wclsync::TwclEvent* const Event);
	int __fastcall ReadCalibration(void);
	int __fastcall ReadMemory(unsigned Address, System::Word Size, /* out */ char * &Data);
	int __fastcall WriteMemory(unsigned Address, System::Byte Size, System::PByte Data)/* overload */;
	int __fastcall WriteMemory(unsigned Address, System::Byte Data)/* overload */;
	int __fastcall WriteReport(const System::PByte Report, const System::Byte Size);
	int __fastcall DisableIr(void);
	int __fastcall EnableIr(void)/* overload */;
	int __fastcall EnableIr(const TwclWiiRemoteIrMode Mode, const TwclWiiRemoteIrSensitivity Sensitivity)/* overload */;
	int __fastcall SetIrLevel1(void);
	int __fastcall SetIrLevel2(void);
	int __fastcall SetIrLevel3(void);
	int __fastcall SetIrLevel4(void);
	int __fastcall SetIrLevel5(void);
	int __fastcall SetIrLevelMax(void);
	int __fastcall SetReportType(const System::Byte ReportType, const bool Continuous)/* overload */;
	int __fastcall SetReportType(System::Byte ReportType, const TwclWiiRemoteIrSensitivity Sensitivity, const bool Continuous)/* overload */;
	int __fastcall InitializeBalanceBoard(void);
	int __fastcall InitializeClassicController(void);
	int __fastcall InitializeMusicExtensions(void);
	int __fastcall InitializeNunchuk(void);
	int __fastcall InitializeExtension(void);
	void __fastcall ParseBalanceBoardExtension(const char * Report, const System::Byte Offset);
	void __fastcall ParseClassicControllerExtension(const char * Report, const System::Byte Offset);
	void __fastcall ParseDrumsExtension(const char * Report, const System::Byte Offset);
	void __fastcall ParseGuitarExtension(const char * Report, const System::Byte Offset);
	void __fastcall ParseNunchukExtension(const char * Report, const System::Byte Offset);
	void __fastcall ParseExtensions(const char * Report, const System::Byte Offset);
	void __fastcall ParseAccel(const char * Report);
	void __fastcall ParseButtons(const char * Report);
	void __fastcall ParseIr(const char * Report);
	void __fastcall ParseReadMemory(const char * Report);
	void __fastcall ParseStatus(const char * Report);
	void __fastcall ParseInputReport(const char * Report);
	void __fastcall ResetCalibrations(void);
	void __fastcall ResetExtensionCalibration(void);
	void __fastcall ResetStates(void);
	
protected:
	void __fastcall ProcessReport(const System::PByte Report);
	virtual void __fastcall MessageReceived(Wclmessaging::TwclMessage* const Message);
	virtual int __fastcall HalConnect(Wclsync::TwclEvent* const Event);
	virtual int __fastcall HalDisconnect(void);
	virtual int __fastcall HalWrite(const System::PByte Report, const System::Byte Size) = 0 ;
	virtual void __fastcall DoAccelChanged(const TwclWiiRemoteAccel &Accel);
	virtual void __fastcall DoBalanceBoardChanged(const TwclWiiRemoteBalanceBoard &Board);
	virtual void __fastcall DoButtonsChanged(const TwclWiiRemoteButtons &Buttons);
	virtual void __fastcall DoClassicControllerChanged(const TwclWiiRemoteClassicController &Controller);
	virtual void __fastcall DoConnect(const int Error);
	virtual void __fastcall DoDisconnect(const int Reason);
	virtual void __fastcall DoDrumsChanged(const TwclWiiRemoteDrums &Drums);
	virtual void __fastcall DoExtensionAttached(void);
	virtual void __fastcall DoExtensionDetached(void);
	virtual void __fastcall DoGuitarChanged(const TwclWiiRemoteGuitar &Guitar);
	virtual void __fastcall DoIrChanged(const TwclWiiRemoteIrSensors &Ir);
	virtual void __fastcall DoNunchukChanged(const TwclWiiRemoteNunchuk &Nunchuk);
	virtual void __fastcall DoStatusChanged(const double Batt, const TwclWiiRemoteLeds Leds);
	__property Wclsync::TwclEvent* DisconnectEvent = {read=FDisconnectEvent};
	
public:
	__fastcall virtual TwclWiiRemoteClientConnection(TwclBluetoothRadio* const Radio);
	HIDESBASE int __fastcall Connect(const __int64 Address, const unsigned Timeout);
	int __fastcall GetStatus(void);
	int __fastcall SetLeds(const TwclWiiRemoteLeds Leds)/* overload */;
	int __fastcall SetLeds(const bool Led1, const bool Led2, const bool Led3, const bool Led4)/* overload */;
	int __fastcall SetRumble(const bool TurnOn);
	int __fastcall EnableAccel(void);
	int __fastcall DisableAccel(void);
	int __fastcall SetIrSensitivity(const TwclWiiRemoteIrSensitivity Sensitivity);
	__property __int64 Address = {read=FAddress};
	__property bool AccelEnabled = {read=FAccelEnabled, nodefault};
	__property TwclWiiRemoteExtension Extension = {read=FExtension, nodefault};
	__property TwclWiiRemoteIrMode IrMode = {read=FIrMode, nodefault};
	__property TwclWiiRemoteIrSensitivity IrSensitivity = {read=FIrSensitivity, nodefault};
	__property TwclWiiRemoteLeds Leds = {read=FLeds};
	__property TwclBluetoothRadio* Radio = {read=FRadio};
	__property bool Rumble = {read=FRumble, nodefault};
	__property TwclWiiRemoteAccelChangedEvent OnAccelChanged = {read=FOnAccelChanged, write=FOnAccelChanged};
	__property TwclWiiRemoteBalanceBoardChangedEvent OnBalanceBoardChanged = {read=FOnBalanceBoardChanged, write=FOnBalanceBoardChanged};
	__property TwclWiiRemoteButtonsChangedEvent OnButtonsChanged = {read=FOnButtonsChanged, write=FOnButtonsChanged};
	__property TwclWiiRemoteClassicControllerChangedEvent OnClassicControllerChanged = {read=FOnClassicControllerChanged, write=FOnClassicControllerChanged};
	__property TwclWiiRemoteDrumsChangedEvent OnDrumsChanged = {read=FOnDrumsChanged, write=FOnDrumsChanged};
	__property System::Classes::TNotifyEvent OnExtensionAttached = {read=FOnExtensionAttached, write=FOnExtensionAttached};
	__property System::Classes::TNotifyEvent OnExtensionDetached = {read=FOnExtensionDetached, write=FOnExtensionDetached};
	__property TwclWiiRemoteGuitarChangedEvent OnGuitarChanged = {read=FOnGuitarChanged, write=FOnGuitarChanged};
	__property TwclWiiRemoteIrChangedEvent OnIrChanged = {read=FOnIrChanged, write=FOnIrChanged};
	__property TwclWiiRemoteNunchukChangedEvent OnNunchukChanged = {read=FOnNunchukChanged, write=FOnNunchukChanged};
	__property TwclWiiRemoteStatusChangedEvent OnStatusChanged = {read=FOnStatusChanged, write=FOnStatusChanged};
public:
	/* TwclClientConnection.Destroy */ inline __fastcall virtual ~TwclWiiRemoteClientConnection(void) { }
	
};


class PASCALIMPLEMENTATION TwclWiiRemoteHidClientConnection : public TwclWiiRemoteClientConnection
{
	typedef TwclWiiRemoteClientConnection inherited;
	
private:
	NativeUInt FHandle;
	Wclsync::TwclManualResetEvent* FReadEvent;
	Wclsync::TwclManualResetEvent* FWriteEvent;
	bool FWasInstalled;
	int __fastcall EnumWiis(System::Classes::TStringList* const Wiis);
	int __fastcall GetPath(/* out */ System::UnicodeString &Path);
	int __fastcall InstallDevice(Wclsync::TwclEvent* const Event, /* out */ System::UnicodeString &Path);
	int __fastcall UninstallDevice(void);
	int __fastcall CheckTimeout(Wclsync::TwclEvent* const Event, const unsigned Ticks);
	void __fastcall TerminateIo(const _OVERLAPPED &Over);
	void __fastcall ClearHid(void);
	int __fastcall LoadHid(void);
	int __fastcall UnloadHid(void);
	
protected:
	virtual int __fastcall HalConnect(Wclsync::TwclEvent* const Event);
	virtual int __fastcall HalCommunicate(Wclsync::TwclEvent* const Event);
	virtual int __fastcall HalDisconnect(void);
	virtual int __fastcall HalWrite(const System::PByte Report, const System::Byte Size);
	
public:
	__fastcall virtual TwclWiiRemoteHidClientConnection(TwclBluetoothRadio* const Radio);
public:
	/* TwclClientConnection.Destroy */ inline __fastcall virtual ~TwclWiiRemoteHidClientConnection(void) { }
	
};


class PASCALIMPLEMENTATION TwclBluetoothComponent : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	Wclconnections::TwclCustomConnection* FCopy;
	Wclsync::TwclCriticalSection* FCS;
	void __fastcall DeleteCopy(void);
	
protected:
	void __fastcall SetCopy(Wclconnections::TwclCustomConnection* const NewConnection);
	__property Wclsync::TwclCriticalSection* CS = {read=FCS};
	
public:
	__fastcall virtual TwclBluetoothComponent(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TwclBluetoothComponent(void);
};


class PASCALIMPLEMENTATION TwclRfCommClient : public TwclBluetoothComponent
{
	typedef TwclBluetoothComponent inherited;
	
private:
	__int64 FAddress;
	bool FAuthentication;
	System::Byte FChannel;
	bool FEncryption;
	GUID FService;
	unsigned FTimeout;
	bool FActive;
	TwclRfCommClientConnection* FClient;
	Wclconnections::TwclClientConnectionConnectEvent FOnConnect;
	Wclconnections::TwclClientConnectionProcessorEvent FOnCreateProcessor;
	Wclconnections::TwclConnectionDataEvent FOnData;
	Wclconnections::TwclClientConnectionProcessorEvent FOnDestroyProcessor;
	Wclconnections::TwclClientConnectionDisconnectEvent FOnDisconnect;
	Wclconnections::TwclCustomClientDataProcessor* __fastcall GetProcessor(void);
	TwclBluetoothRadio* __fastcall GetRadio(void);
	Wclconnections::TwclClientState __fastcall GetState(void);
	void __fastcall SetAddress(const __int64 Value);
	void __fastcall SetAuthentication(const bool Value);
	void __fastcall SetChannel(const System::Byte Value);
	void __fastcall SetEncryption(const bool Value);
	void __fastcall SetService(const GUID &Value);
	void __fastcall SetTimeout(const unsigned Value);
	void __fastcall ClientConnect(System::TObject* Sender, const int Error);
	void __fastcall ClientData(System::TObject* Sender, const void * Data, const unsigned Size);
	void __fastcall ClientDisconnect(System::TObject* Sender, const int Reason);
	
protected:
	virtual void __fastcall DoConnect(const int Error);
	virtual void __fastcall DoCreateProcessor(Wclconnections::TwclClientDataConnection* const Connection);
	virtual void __fastcall DoData(const void * Data, const unsigned Size);
	virtual void __fastcall DoDestroyProcessor(Wclconnections::TwclClientDataConnection* const Connection);
	virtual void __fastcall DoDisconnect(const int Reason);
	
public:
	__fastcall virtual TwclRfCommClient(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TwclRfCommClient(void);
	int __fastcall Connect(TwclBluetoothRadio* const Radio);
	int __fastcall Disconnect(void);
	int __fastcall GetReadBufferSize(/* out */ unsigned &Size);
	int __fastcall GetWriteBufferSize(/* out */ unsigned &Size);
	int __fastcall SetReadBufferSize(const unsigned Size);
	int __fastcall SetWriteBufferSize(const unsigned Size);
	int __fastcall Write(const void * Data, const unsigned Size, /* out */ unsigned &Written);
	__property Wclconnections::TwclCustomClientDataProcessor* Processor = {read=GetProcessor};
	__property TwclBluetoothRadio* Radio = {read=GetRadio};
	__property GUID Service = {read=FService, write=SetService};
	__property Wclconnections::TwclClientState State = {read=GetState, nodefault};
	
__published:
	__property __int64 Address = {read=FAddress, write=SetAddress, default=0};
	__property bool Authentication = {read=FAuthentication, write=SetAuthentication, default=1};
	__property System::Byte Channel = {read=FChannel, write=SetChannel, default=0};
	__property bool Encryption = {read=FEncryption, write=SetEncryption, default=0};
	__property unsigned Timeout = {read=FTimeout, write=SetTimeout, default=10000};
	__property Wclconnections::TwclClientConnectionConnectEvent OnConnect = {read=FOnConnect, write=FOnConnect};
	__property Wclconnections::TwclClientConnectionProcessorEvent OnCreateProcessor = {read=FOnCreateProcessor, write=FOnCreateProcessor};
	__property Wclconnections::TwclConnectionDataEvent OnData = {read=FOnData, write=FOnData};
	__property Wclconnections::TwclClientConnectionProcessorEvent OnDestroyProcessor = {read=FOnDestroyProcessor, write=FOnDestroyProcessor};
	__property Wclconnections::TwclClientConnectionDisconnectEvent OnDisconnect = {read=FOnDisconnect, write=FOnDisconnect};
};


class PASCALIMPLEMENTATION TwclRfCommServer : public TwclBluetoothComponent
{
	typedef TwclBluetoothComponent inherited;
	
public:
	TwclRfCommServerClientConnection* operator[](const int Index) { return Clients[Index]; }
	
private:
	bool FAuthentication;
	System::Byte FChannel;
	bool FEncryption;
	GUID FService;
	System::UnicodeString FServiceName;
	bool FActive;
	TwclRfCommServerConnection* FServer;
	TwclBluetoothGetSdpAttributesEvent FGetSdpAttributes;
	Wclconnections::TwclClientConnectionDisconnectEvent FOnClosed;
	Wclconnections::TwclServerConnectionProcessorEvent FOnCreateProcessor;
	TwclRfCommServerConnectEvent FOnConnect;
	TwclRfCommServerDataEvent FOnData;
	Wclconnections::TwclServerConnectionProcessorEvent FOnDestroyProcessor;
	TwclRfCommServerDisconnectEvent FOnDisconnect;
	System::Classes::TNotifyEvent FOnListen;
	System::Byte __fastcall GetAssignedChannel(void);
	int __fastcall GetCount(void);
	TwclRfCommServerClientConnection* __fastcall GetClients(const int Index);
	TwclBluetoothRadio* __fastcall GetRadio(void);
	Wclconnections::TwclServerState __fastcall GetState(void);
	void __fastcall SetAuthentication(const bool Value);
	void __fastcall SetChannel(const System::Byte Value);
	void __fastcall SetEncryption(const bool Value);
	void __fastcall SetService(const GUID &Value);
	void __fastcall SetServiceName(const System::UnicodeString Value);
	void __fastcall ServerClosed(System::TObject* Sender, const int Reason);
	void __fastcall ServerConnect(System::TObject* Sender, Wclconnections::TwclServerClientConnection* const Client, const int Error);
	void __fastcall ServerData(System::TObject* Sender, Wclconnections::TwclServerClientDataConnection* const Client, const void * Data, const unsigned Size);
	void __fastcall ServerDisconnect(System::TObject* Sender, Wclconnections::TwclServerClientConnection* const Client, const int Reason);
	void __fastcall ServerListen(System::TObject* Sender);
	void __fastcall ServerGetSdpAttributes(System::TObject* Sender, /* out */ TwclBluetoothSdpProtocols &Protocols, /* out */ TwclBluetoothSdpProfiles &Profiles, /* out */ TwclBluetoothSdpFormats &Formats, /* out */ unsigned &Cod);
	
protected:
	virtual void __fastcall DoClosed(const int Reason);
	virtual void __fastcall DoConnect(TwclRfCommServerClientConnection* const Client, const int Error);
	virtual void __fastcall DoCreateProcessor(Wclconnections::TwclServerClientDataConnection* const Connection);
	virtual void __fastcall DoData(TwclRfCommServerClientConnection* const Client, const void * Data, const unsigned Size);
	virtual void __fastcall DoDestroyProcessor(Wclconnections::TwclServerClientDataConnection* const Connection);
	virtual void __fastcall DoDisconnect(TwclRfCommServerClientConnection* const Client, const int Reason);
	virtual void __fastcall DoListen(void);
	virtual void __fastcall DoGetSdpAttributes(/* out */ TwclBluetoothSdpProtocols &Protocols, /* out */ TwclBluetoothSdpProfiles &Profiles, /* out */ TwclBluetoothSdpFormats &Formats, /* out */ unsigned &Cod);
	
public:
	__fastcall virtual TwclRfCommServer(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TwclRfCommServer(void);
	int __fastcall Close(void);
	int __fastcall Listen(TwclBluetoothRadio* const Radio);
	__property System::Byte AssignedChannel = {read=GetAssignedChannel, nodefault};
	__property int Count = {read=GetCount, nodefault};
	__property TwclRfCommServerClientConnection* Clients[const int Index] = {read=GetClients/*, default*/};
	__property TwclBluetoothRadio* Radio = {read=GetRadio};
	__property GUID Service = {read=FService, write=SetService};
	__property Wclconnections::TwclServerState State = {read=GetState, nodefault};
	
__published:
	__property bool Authentication = {read=FAuthentication, write=SetAuthentication, default=1};
	__property System::Byte Channel = {read=FChannel, write=SetChannel, default=0};
	__property bool Encryption = {read=FEncryption, write=SetEncryption, default=0};
	__property System::UnicodeString ServiceName = {read=FServiceName, write=SetServiceName};
	__property TwclBluetoothGetSdpAttributesEvent GetSdpAttributes = {read=FGetSdpAttributes, write=FGetSdpAttributes};
	__property Wclconnections::TwclClientConnectionDisconnectEvent OnClosed = {read=FOnClosed, write=FOnClosed};
	__property TwclRfCommServerConnectEvent OnConnect = {read=FOnConnect, write=FOnConnect};
	__property Wclconnections::TwclServerConnectionProcessorEvent OnCreateProcessor = {read=FOnCreateProcessor, write=FOnCreateProcessor};
	__property TwclRfCommServerDataEvent OnData = {read=FOnData, write=FOnData};
	__property Wclconnections::TwclServerConnectionProcessorEvent OnDestroyProcessor = {read=FOnDestroyProcessor, write=FOnDestroyProcessor};
	__property TwclRfCommServerDisconnectEvent OnDisconnect = {read=FOnDisconnect, write=FOnDisconnect};
	__property System::Classes::TNotifyEvent OnListen = {read=FOnListen, write=FOnListen};
};


class PASCALIMPLEMENTATION TwclGattClient : public TwclBluetoothComponent
{
	typedef TwclBluetoothComponent inherited;
	
private:
	__int64 FAddress;
	bool FConnectOnRead;
	bool FForceNotifications;
	bool FActive;
	TwclGattClientConnection* FClient;
	TwclGattCharacteristicChangedEvent FOnCharacteristicChanged;
	Wclconnections::TwclClientConnectionConnectEvent FOnConnect;
	System::Classes::TNotifyEvent FOnConnectionParamsChanged;
	System::Classes::TNotifyEvent FOnConnectionPhyChanged;
	Wclconnections::TwclClientConnectionDisconnectEvent FOnDisconnect;
	System::Classes::TNotifyEvent FOnMaxPduSizeChanged;
	int __fastcall CheckSubscriptionMethod(const TwclGattSubscribeKind SubscribeKind, TwclGattCharacteristic &Characteristic);
	TwclBluetoothRadio* __fastcall GetRadio(void);
	bool __fastcall GetReliableWriteActive(void);
	Wclconnections::TwclClientState __fastcall GetState(void);
	void __fastcall SetAddress(const __int64 Value);
	void __fastcall SetConnectOnRead(const bool Value);
	void __fastcall SetForceNotifications(const bool Value);
	void __fastcall ClientCharacteristicChanged(System::TObject* Sender, const System::Word Handle, const TwclGattCharacteristicValue Value);
	void __fastcall ClientConnect(System::TObject* Sender, const int Error);
	void __fastcall ClientConnectionParamsChanged(System::TObject* Sender);
	void __fastcall ClientConnectionPhyChanged(System::TObject* Sender);
	void __fastcall ClientDisconnect(System::TObject* Sender, const int Reason);
	void __fastcall ClientMaxPduSizeChanged(System::TObject* Sender);
	
protected:
	virtual void __fastcall DoCharacteristicChanged(const System::Word Handle, const TwclGattCharacteristicValue Value);
	virtual void __fastcall DoConnectionParamsChanged(void);
	virtual void __fastcall DoConnectionPhyChanged(void);
	virtual void __fastcall DoMaxPduSizeChanged(void);
	virtual void __fastcall DoConnect(const int Error);
	virtual void __fastcall DoDisconnect(const int Reason);
	
public:
	__fastcall virtual TwclGattClient(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TwclGattClient(void);
	int __fastcall Connect(TwclBluetoothRadio* const Radio);
	int __fastcall Disconnect(void);
	int __fastcall FindCharacteristic(const TwclGattService &Service, const TwclGattUuid &Uuid, /* out */ TwclGattCharacteristic &Characteristic, const TwclGattOperationFlag Flag = (TwclGattOperationFlag)(0x0))/* overload */;
	int __fastcall FindService(const TwclGattUuid &Uuid, /* out */ TwclGattService &Service, const TwclGattOperationFlag Flag = (TwclGattOperationFlag)(0x0));
	int __fastcall ReadCharacteristics(const TwclGattService &Service, const TwclGattOperationFlag Flag, /* out */ TwclGattCharacteristics &Characteristics);
	int __fastcall ReadCharacteristicValue(const TwclGattCharacteristic &Characteristic, const TwclGattOperationFlag Flag, /* out */ TwclGattCharacteristicValue &Value, const TwclGattProtectionLevel Protection = (TwclGattProtectionLevel)(0x0));
	int __fastcall ReadDescriptors(const TwclGattCharacteristic &Characteristic, const TwclGattOperationFlag Flag, /* out */ TwclGattDescriptors &Descriptors);
	int __fastcall ReadDescriptorValue(const TwclGattDescriptor &Descriptor, const TwclGattOperationFlag Flag, /* out */ TwclGattDescriptorValue &Value, const TwclGattProtectionLevel Protection = (TwclGattProtectionLevel)(0x0));
	int __fastcall ReadIncludedServices(const TwclGattService &Service, const TwclGattOperationFlag Flag, /* out */ TwclGattServices &Services);
	int __fastcall ReadServices(const TwclGattOperationFlag Flag, /* out */ TwclGattServices &Services);
	int __fastcall WriteCharacteristicValue(const TwclGattCharacteristic &Characteristic, const TwclGattCharacteristicValue Value, const TwclGattProtectionLevel Protection = (TwclGattProtectionLevel)(0x0), const TwclGattWriteKind WriteKind = (TwclGattWriteKind)(0x3));
	int __fastcall WriteDescriptorValue(const TwclGattDescriptor &Descriptor, const TwclGattDescriptorValue &Value, const TwclGattProtectionLevel Protection = (TwclGattProtectionLevel)(0x0));
	int __fastcall AbortReliableWrite(void);
	int __fastcall BeginReliableWrite(const TwclGattCharacteristic &Characteristic);
	int __fastcall EndReliableWrite(void);
	int __fastcall WriteClientConfiguration(const TwclGattCharacteristic &Characteristic, const bool Subscribe, const TwclGattOperationFlag Flag, const TwclGattProtectionLevel Protection = (TwclGattProtectionLevel)(0x0), const TwclGattSubscribeKind SubscribeKind = (TwclGattSubscribeKind)(0x2));
	int __fastcall Subscribe(const TwclGattCharacteristic &Characteristic, const TwclGattSubscribeKind SubscribeKind = (TwclGattSubscribeKind)(0x2));
	int __fastcall Unsubscribe(const TwclGattCharacteristic &Characteristic, const TwclGattSubscribeKind SubscribeKind = (TwclGattSubscribeKind)(0x2));
	int __fastcall SubscribeForNotifications(const TwclGattCharacteristic &Characteristic, const TwclGattOperationFlag Flag = (TwclGattOperationFlag)(0x0), const TwclGattProtectionLevel Protection = (TwclGattProtectionLevel)(0x0), const TwclGattSubscribeKind SubscribeKind = (TwclGattSubscribeKind)(0x2));
	int __fastcall UnsubscribeFromNotifications(const TwclGattCharacteristic &Characteristic, const TwclGattOperationFlag Flag = (TwclGattOperationFlag)(0x0), const TwclGattProtectionLevel Protection = (TwclGattProtectionLevel)(0x0), const TwclGattSubscribeKind SubscribeKind = (TwclGattSubscribeKind)(0x2));
	int __fastcall GetConnectionParams(/* out */ TwclBluetoothLeConnectionParameters &Params);
	int __fastcall SetConnectionParams(const TwclBluetoothLeConnectionParametersType Params)/* overload */;
	int __fastcall SetConnectionParams(const TwclBluetoothLeConnectionParametersValue &Params)/* overload */;
	int __fastcall GetMaxPduSize(/* out */ System::Word &Size);
	int __fastcall GetMaxPayloadSize(/* out */ System::Word &Size);
	int __fastcall GetConnectionPhyInfo(/* out */ TwclBluetoothLeConnectionPhy &Info);
	__property TwclBluetoothRadio* Radio = {read=GetRadio};
	__property bool ReliableWriteActive = {read=GetReliableWriteActive, nodefault};
	__property Wclconnections::TwclClientState State = {read=GetState, nodefault};
	
__published:
	__property __int64 Address = {read=FAddress, write=SetAddress, default=0};
	__property bool ConnectOnRead = {read=FConnectOnRead, write=SetConnectOnRead, default=0};
	__property bool ForceNotifications = {read=FForceNotifications, write=SetForceNotifications, default=0};
	__property TwclGattCharacteristicChangedEvent OnCharacteristicChanged = {read=FOnCharacteristicChanged, write=FOnCharacteristicChanged};
	__property Wclconnections::TwclClientConnectionConnectEvent OnConnect = {read=FOnConnect, write=FOnConnect};
	__property System::Classes::TNotifyEvent OnConnectionParamsChanged = {read=FOnConnectionParamsChanged, write=FOnConnectionParamsChanged};
	__property System::Classes::TNotifyEvent OnConnectionPhyChanged = {read=FOnConnectionPhyChanged, write=FOnConnectionPhyChanged};
	__property Wclconnections::TwclClientConnectionDisconnectEvent OnDisconnect = {read=FOnDisconnect, write=FOnDisconnect};
	__property System::Classes::TNotifyEvent OnMaxPduSizeChanged = {read=FOnMaxPduSizeChanged, write=FOnMaxPduSizeChanged};
};


class PASCALIMPLEMENTATION TwclGattServer : public TwclBluetoothComponent
{
	typedef TwclBluetoothComponent inherited;
	
public:
	TwclGattServerClient* operator[](const int Index) { return Clients[Index]; }
	
private:
	TwclGattServerConnection* FServer;
	TwclGattServerClientEvent FOnClientConnected;
	TwclGattServerClientEvent FOnClientDisconnected;
	TwclGattServerClientEvent FOnConnectionParamsChanged;
	TwclGattServerClientEvent FOnConnectionPhyChanged;
	TwclGattServerClientEvent FOnMaxPduSizeChanged;
	TwclGattServerClientEvent FOnNotificationSizeChanged;
	TwclGattLocalCharacteristicReadEvent FOnRead;
	System::Classes::TNotifyEvent FOnStarted;
	System::Classes::TNotifyEvent FOnStopped;
	TwclGattLocalCharacteristicSubscribedClientsChangedEvent FOnSubscribed;
	TwclGattLocalCharacteristicSubscribedClientsChangedEvent FOnUnsubscribed;
	TwclGattLocalCharacteristicWriteEvent FOnWrite;
	TwclGattServerClient* __fastcall GetClients(const int Index);
	int __fastcall GetClientsCount(void);
	bool __fastcall GetInitialized(void);
	TwclBluetoothRadio* __fastcall GetRadio(void);
	TwclGattLocalService* __fastcall GetServices(const int Index);
	int __fastcall GetServicesCount(void);
	bool __fastcall GetStarted(void);
	void __fastcall CharacteristicRead(System::TObject* Sender, TwclGattServerClient* const Client, TwclGattLocalCharacteristic* const Characteristic, TwclGattLocalCharacteristicReadRequest* const Request);
	void __fastcall CharacteristicWrite(System::TObject* Sender, TwclGattServerClient* const Client, TwclGattLocalCharacteristic* const Characteristic, TwclGattLocalCharacteristicWriteRequest* const Request);
	void __fastcall ClientConnected(System::TObject* Sender, TwclGattServerClient* const Client);
	void __fastcall ClientDisconnected(System::TObject* Sender, TwclGattServerClient* const Client);
	void __fastcall ClientSubscribed(System::TObject* Sender, TwclGattServerClient* const Client, TwclGattLocalCharacteristic* const Characteristic);
	void __fastcall ClientUnsubscribed(System::TObject* Sender, TwclGattServerClient* const Client, TwclGattLocalCharacteristic* const Characteristic);
	void __fastcall ConnectionParamsChanged(System::TObject* Sender, TwclGattServerClient* const Client);
	void __fastcall ConnectionPhyChanged(System::TObject* Sender, TwclGattServerClient* const Client);
	void __fastcall MaxPduSizeChanged(System::TObject* Sender, TwclGattServerClient* const Client);
	void __fastcall NotificationSizeChanged(System::TObject* Sender, TwclGattServerClient* const Client);
	void __fastcall ServerStarted(System::TObject* Sender);
	void __fastcall ServerStopped(System::TObject* Sender);
	
protected:
	virtual void __fastcall DoClientConnected(TwclGattServerClient* const Client);
	virtual void __fastcall DoClientDisconnected(TwclGattServerClient* const Client);
	virtual void __fastcall DoConnectionParamsChanged(TwclGattServerClient* const Client);
	virtual void __fastcall DoConnectionPhyChanged(TwclGattServerClient* const Client);
	virtual void __fastcall DoMaxPduSizeChanged(TwclGattServerClient* const Client);
	virtual void __fastcall DoNotificationSizeChanged(TwclGattServerClient* const Client);
	virtual void __fastcall DoRead(TwclGattServerClient* const Client, TwclGattLocalCharacteristic* const Characteristic, TwclGattLocalCharacteristicReadRequest* const Request);
	virtual void __fastcall DoStarted(void);
	virtual void __fastcall DoStopped(void);
	virtual void __fastcall DoSubscribed(TwclGattServerClient* const Client, TwclGattLocalCharacteristic* const Characteristic);
	virtual void __fastcall DoUnsubscribed(TwclGattServerClient* const Client, TwclGattLocalCharacteristic* const Characteristic);
	virtual void __fastcall DoWrite(TwclGattServerClient* const Client, TwclGattLocalCharacteristic* const Characteristic, TwclGattLocalCharacteristicWriteRequest* const Request);
	
public:
	__fastcall virtual TwclGattServer(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TwclGattServer(void);
	int __fastcall Initialize(TwclBluetoothRadio* const Radio);
	int __fastcall Uninitialize(void);
	int __fastcall Start(void);
	int __fastcall Stop(void);
	int __fastcall AddService(const TwclGattUuid &Uuid, /* out */ TwclGattLocalService* &Service);
	int __fastcall ClearServices(void);
	int __fastcall DeleteService(const int Index);
	__property bool Initialized = {read=GetInitialized, nodefault};
	__property TwclBluetoothRadio* Radio = {read=GetRadio};
	__property bool Started = {read=GetStarted, nodefault};
	__property TwclGattLocalService* Services[const int Index] = {read=GetServices};
	__property int ServicesCount = {read=GetServicesCount, nodefault};
	__property TwclGattServerClient* Clients[const int Index] = {read=GetClients/*, default*/};
	__property int ClientsCount = {read=GetClientsCount, nodefault};
	
__published:
	__property TwclGattServerClientEvent OnClientConnected = {read=FOnClientConnected, write=FOnClientConnected};
	__property TwclGattServerClientEvent OnClientDisconnected = {read=FOnClientDisconnected, write=FOnClientDisconnected};
	__property TwclGattServerClientEvent OnConnectionParamsChanged = {read=FOnConnectionParamsChanged, write=FOnConnectionParamsChanged};
	__property TwclGattServerClientEvent OnConnectionPhyChanged = {read=FOnConnectionPhyChanged, write=FOnConnectionPhyChanged};
	__property TwclGattServerClientEvent OnMaxPduSizeChanged = {read=FOnMaxPduSizeChanged, write=FOnMaxPduSizeChanged};
	__property TwclGattServerClientEvent OnNotificationSizeChanged = {read=FOnNotificationSizeChanged, write=FOnNotificationSizeChanged};
	__property TwclGattLocalCharacteristicReadEvent OnRead = {read=FOnRead, write=FOnRead};
	__property System::Classes::TNotifyEvent OnStarted = {read=FOnStarted, write=FOnStarted};
	__property System::Classes::TNotifyEvent OnStopped = {read=FOnStopped, write=FOnStopped};
	__property TwclGattLocalCharacteristicSubscribedClientsChangedEvent OnSubscribed = {read=FOnSubscribed, write=FOnSubscribed};
	__property TwclGattLocalCharacteristicSubscribedClientsChangedEvent OnUnsubscribed = {read=FOnUnsubscribed, write=FOnUnsubscribed};
	__property TwclGattLocalCharacteristicWriteEvent OnWrite = {read=FOnWrite, write=FOnWrite};
};


class PASCALIMPLEMENTATION TwclBluetoothLeBeaconWatcher : public TwclBluetoothComponent
{
	typedef TwclBluetoothComponent inherited;
	
private:
	bool FActive;
	TwclBluetoothLeBeaconWatcherConnection* FWatcher;
	bool FAllowExtendedAdvertisements;
	TwclBluetoothLeScanningMode FScanningMode;
	TwclBluetoothLeScanParametersType FScanParametersType;
	System::Word FScanInterval;
	System::Word FScanWindow;
	TwclBluetoothLeAdvertisementAppearanceFrameEvent FOnAdvertisementAppearanceFrame;
	TwclBluetoothLeAdvertisementFrameInformationEvent FOnAdvertisementFrameInformation;
	TwclBluetoothLeAdvertisementExtFrameInformationEvent FOnAdvertisementExtFrameInformation;
	TwclBluetoothLeAdvertisementRawFrameEvent FOnAdvertisementRawFrame;
	TwclBluetoothLeAdvertisementReceivedEvent FOnAdvertisementReceived;
	TwclBluetoothLeAdvertisementService16DataFrameEvent FOnAdvertisementService16DataFrame;
	TwclBluetoothLeAdvertisementService32DataFrameEvent FOnAdvertisementService32DataFrame;
	TwclBluetoothLeAdvertisementService128DataFrameEvent FOnAdvertisementService128DataFrame;
	TwclBluetoothLeAdvertisementServiceSol16FrameEvent FOnAdvertisementServiceSol16Frame;
	TwclBluetoothLeAdvertisementServiceSol32FrameEvent FOnAdvertisementServiceSol32Frame;
	TwclBluetoothLeAdvertisementServiceSol128FrameEvent FOnAdvertisementServiceSol128Frame;
	TwclBluetoothLeAdvertisementTxPowerLevelFrameEvent FOnAdvertisementTxPowerLevelFrame;
	TwclBluetoothLeAdvertisementUuidFrameEvent FOnAdvertisementUuidFrame;
	TwclBluetoothLeAltBeaconFrameEvent FOnAltBeaconFrame;
	TwclBluetoothLeAppleAirdropFrameEvent FOnAppleAirdropFrame;
	TwclBluetoothLeAppleAirplaySourceFrameEvent FOnAppleAirplaySourceFrame;
	TwclBluetoothLeAppleAirplayTargetFrameEvent FOnAppleAirplayTargetFrame;
	TwclBluetoothLeAppleAirprintFrameEvent FOnAppleAirprintFrame;
	TwclBluetoothLeAppleFindMyFrameEvent FOnAppleFindMyFrame;
	TwclBluetoothLeAppleHandoffFrameEvent FOnAppleHandoffFrame;
	TwclBluetoothLeAppleHeySiriFrameEvent FOnAppleHeySiriFrame;
	TwclBluetoothLeAppleHomeKitFrameEvent FOnAppleHomeKitFrame;
	TwclBluetoothLeAppleiBeaconFrameEvent FOnAppleiBeaconFrame;
	TwclBluetoothLeAppleMagicSwitchFrameEvent FOnAppleMagicSwitchFrame;
	TwclBluetoothLeAppleNearbyActionFrameEvent FOnAppleNearbyActionFrame;
	TwclBluetoothLeAppleNearbyInfoFrameEvent FOnAppleNearbyInfoFrame;
	TwclBluetoothLeAppleProximityPairingFrameEvent FOnAppleProximityPairingFrame;
	TwclBluetoothLeAppleTetheringSourceFrameEvent FOnAppleTetheringSourceFrame;
	TwclBluetoothLeAppleTetheringTargetFrameEvent FOnAppleTetheringTargetFrame;
	TwclBluetoothLeAppleUnknownFrameEvent FOnAppleUnknownFrame;
	TwclBluetoothLeDriAsdMessageEvent FOnDriAsdMessage;
	TwclBluetoothLeEddystoneTlmFrameEvent FOnEddystoneTlmFrame;
	TwclBluetoothLeEddystoneUidFrameEvent FOnEddystoneUidFrame;
	TwclBluetoothLeEddystoneUrlFrameEvent FOnEddystoneUrlFrame;
	TwclBluetoothLeManufacturerRawFrameEvent FOnManufacturerRawFrame;
	TwclBluetoothLeMicrosoftCdpBeaconFrameEvent FOnMicrosoftCdpBeaconFrame;
	System::Classes::TNotifyEvent FOnStarted;
	System::Classes::TNotifyEvent FOnStopped;
	bool __fastcall GetMonitoring(void);
	TwclBluetoothRadio* __fastcall GetRadio(void);
	void __fastcall SetAllowExtendedAdvertisements(const bool Value);
	void __fastcall SetScanningMode(const TwclBluetoothLeScanningMode Value);
	void __fastcall SetScanParametersType(const TwclBluetoothLeScanParametersType Value);
	void __fastcall SetScanInterval(const System::Word Value);
	void __fastcall SetScanWindow(const System::Word Value);
	void __fastcall WatcherAdvertisementAppearanceFrame(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const System::Word Appearance);
	void __fastcall WatcherAdvertisementFrameInformation(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const System::UnicodeString Name, const TwclBluetoothLeAdvertisementType PacketType, const TwclBluetoothLeAdvertisementFlags Flags);
	void __fastcall WatcherAdvertisementExtFrameInformation(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const TwclBluetoothAddressType AddressType, const SByte TxPower, const TwclBluetoothLeExtendedFrameFlags Flags, const TwclBluetoothLeAdvertisementPhy PrimaryPhy, const TwclBluetoothLeAdvertisementPhy SecondaryPhy);
	void __fastcall WatcherAdvertisementRawFrame(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const System::Byte DataType, const TwclBluetoothLeAdvertisementFrameRawData Data);
	void __fastcall WatcherAdvertisementReceived(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const TwclBluetoothLeAdvertisementFrameRawData Data);
	void __fastcall WatcherAdvertisementService16DataFrame(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const System::Word Uuid, const TwclBluetoothLeAdvertisementFrameRawData Data);
	void __fastcall WatcherAdvertisementService32DataFrame(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const unsigned Uuid, const TwclBluetoothLeAdvertisementFrameRawData Data);
	void __fastcall WatcherAdvertisementService128DataFrame(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const GUID &Uuid, const TwclBluetoothLeAdvertisementFrameRawData Data);
	void __fastcall WatcherAdvertisementServiceSol16Frame(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const System::Word Uuid);
	void __fastcall WatcherAdvertisementServiceSol32Frame(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const unsigned Uuid);
	void __fastcall WatcherAdvertisementServiceSol128Frame(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const GUID &Uuid);
	void __fastcall WatcherAdvertisementTxPowerLevelFrame(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const SByte TxPower);
	void __fastcall WatcherAdvertisementUuidFrame(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const GUID &Uuid);
	void __fastcall WatcherAltBeaconFrame(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const System::Word CompanyId, const System::Word Major, const System::Word Minor, const GUID &Uuid, const SByte TxRssi, const System::Byte Reserved, const TwclBluetoothLeAdvertisementFrameRawData Data);
	void __fastcall WatcherAppleAirdropFrame(System::TObject* Sender, const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleAirdropFrameData &Data);
	void __fastcall WatcherAppleAirplaySourceFrame(System::TObject* Sender, const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleAirplaySourceFrameData Data);
	void __fastcall WatcherAppleAirplayTargetFrame(System::TObject* Sender, const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleAirplayTargetFrameData &Data);
	void __fastcall WatcherAppleAirprintFrame(System::TObject* Sender, const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleAirprintFrameData &Data);
	void __fastcall WatcherAppleFindMyFrame(System::TObject* Sender, const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleFindMyFrameData &Data);
	void __fastcall WatcherAppleHandoffFrame(System::TObject* Sender, const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleHandoffFrameData &Data);
	void __fastcall WatcherAppleHeySiriFrame(System::TObject* Sender, const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleHeySiriFrameData &Data);
	void __fastcall WatcherAppleHomeKitFrame(System::TObject* Sender, const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleHomeKitFrameData &Data);
	void __fastcall WatcherAppleiBeaconFrame(System::TObject* Sender, const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleiBeaconFrameData &Data);
	void __fastcall WatcherAppleMagicSwitchFrame(System::TObject* Sender, const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleMagicSwitchFrameData Data);
	void __fastcall WatcherAppleNearbyActionFrame(System::TObject* Sender, const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleNearbyActionFrameData &Data);
	void __fastcall WatcherAppleNearbyInfoFrame(System::TObject* Sender, const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleNearbyInfoFrameData &Data);
	void __fastcall WatcherAppleProximityPairingFrame(System::TObject* Sender, const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleProximityPairingFrameData &Data);
	void __fastcall WatcherAppleTetheringSourceFrame(System::TObject* Sender, const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleTetheringSourceFrameData &Data);
	void __fastcall WatcherAppleTetheringTargetFrame(System::TObject* Sender, const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleTetheringTargetFrameData Data);
	void __fastcall WatcherAppleUnknownFrame(System::TObject* Sender, const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleUnknownFrameData &Data);
	void __fastcall WatcherDriAsdMessage(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const Wcldricommon::TwclDriRawData Raw);
	void __fastcall WatcherEddystoneTlmFrame(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const unsigned AdvCnt, const System::Word Batt, const unsigned SecCnt, const double Temp, const TwclBluetoothLeAdvertisementFrameRawData Data);
	void __fastcall WatcherEddystoneUidFrame(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const SByte TxRssi, const GUID &Uuid, const TwclBluetoothLeAdvertisementFrameRawData Data);
	void __fastcall WatcherEddystoneUrlFrame(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const SByte TxRssi, const System::UnicodeString Url);
	void __fastcall WatcherManufacturerRawFrame(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const System::Word CompanyId, const TwclBluetoothLeAdvertisementFrameRawData Data);
	void __fastcall WatcherMicrosoftCdpBeaconFrame(System::TObject* Sender, const __int64 Address, const __int64 Timestamp, const SByte Rssi, const TwclBluetoothLeCdpBeaconScenarioType ScenarioType, const System::Byte Version, const TwclBluetoothLeCdpBeaconDeviceType DeviceType, const System::Byte SubVersion, const bool ShareNearBy, const bool AddressAsDeviceId, const TwclBluetoothLeCdpBeaconExtendedDeviceStatuses ExtendedDeviceStatus, const TwclBluetoothLeCdpBeaconSalt Salt, const TwclBluetoothLeCdpBeaconHash Hash);
	void __fastcall WatcherStarted(System::TObject* Sender);
	void __fastcall WatcherStopped(System::TObject* Sender);
	
protected:
	virtual void __fastcall DoAdvertisementAppearanceFrame(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const System::Word Appearance);
	virtual void __fastcall DoAdvertisementFrameInformation(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const System::UnicodeString Name, const TwclBluetoothLeAdvertisementType PacketType, const TwclBluetoothLeAdvertisementFlags Flags);
	virtual void __fastcall DoAdvertisementExtFrameInformation(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const TwclBluetoothAddressType AddressType, const SByte TxPower, const TwclBluetoothLeExtendedFrameFlags Flags, const TwclBluetoothLeAdvertisementPhy PrimaryPhy, const TwclBluetoothLeAdvertisementPhy SecondaryPhy);
	virtual void __fastcall DoAdvertisementRawFrame(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const System::Byte DataType, const TwclBluetoothLeAdvertisementFrameRawData Data);
	virtual void __fastcall DoAdvertisementReceived(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const TwclBluetoothLeAdvertisementFrameRawData Data);
	virtual void __fastcall DoAdvertisementService16DataFrame(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const System::Word Uuid, const TwclBluetoothLeAdvertisementFrameRawData Data);
	virtual void __fastcall DoAdvertisementService32DataFrame(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const unsigned Uuid, const TwclBluetoothLeAdvertisementFrameRawData Data);
	virtual void __fastcall DoAdvertisementService128DataFrame(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const GUID &Uuid, const TwclBluetoothLeAdvertisementFrameRawData Data);
	virtual void __fastcall DoAdvertisementServiceSol16Frame(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const System::Word Uuid);
	virtual void __fastcall DoAdvertisementServiceSol32Frame(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const unsigned Uuid);
	virtual void __fastcall DoAdvertisementServiceSol128Frame(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const GUID &Uuid);
	virtual void __fastcall DoAdvertisementTxPowerLevelFrame(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const SByte TxPower);
	virtual void __fastcall DoAdvertisementUuidFrame(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const GUID &Uuid);
	virtual void __fastcall DoAltBeaconFrame(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const System::Word CompanyId, const System::Word Major, const System::Word Minor, const GUID &Uuid, const SByte TxRssi, const System::Byte Reserved, const TwclBluetoothLeAdvertisementFrameRawData Data);
	virtual void __fastcall DoAppleAirdropFrame(const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleAirdropFrameData &Data);
	virtual void __fastcall DoAppleAirplaySourceFrame(const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleAirplaySourceFrameData Data);
	virtual void __fastcall DoAppleAirplayTargetFrame(const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleAirplayTargetFrameData &Data);
	virtual void __fastcall DoAppleAirprintFrame(const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleAirprintFrameData &Data);
	virtual void __fastcall DoAppleFindMyFrame(const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleFindMyFrameData &Data);
	virtual void __fastcall DoAppleHandoffFrame(const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleHandoffFrameData &Data);
	virtual void __fastcall DoAppleHeySiriFrame(const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleHeySiriFrameData &Data);
	virtual void __fastcall DoAppleHomeKitFrame(const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleHomeKitFrameData &Data);
	virtual void __fastcall DoAppleiBeaconFrame(const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleiBeaconFrameData &Data);
	virtual void __fastcall DoAppleMagicSwitchFrame(const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleMagicSwitchFrameData Data);
	virtual void __fastcall DoAppleNearbyActionFrame(const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleNearbyActionFrameData &Data);
	virtual void __fastcall DoAppleNearbyInfoFrame(const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleNearbyInfoFrameData &Data);
	virtual void __fastcall DoAppleProximityPairingFrame(const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleProximityPairingFrameData &Data);
	virtual void __fastcall DoAppleTetheringSourceFrame(const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleTetheringSourceFrameData &Data);
	virtual void __fastcall DoAppleTetheringTargetFrame(const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleTetheringTargetFrameData Data);
	virtual void __fastcall DoAppleUnknownFrame(const TwclBluetoothLeAdvertisementInfo &Info, const TwclBluetoothLeAppleUnknownFrameData &Data);
	virtual void __fastcall DoDriAsdMessage(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const Wcldricommon::TwclDriRawData Raw);
	virtual void __fastcall DoEddystoneTlmFrame(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const unsigned AdvCnt, const System::Word Batt, const unsigned SecCnt, const double Temp, const TwclBluetoothLeAdvertisementFrameRawData Data);
	virtual void __fastcall DoEddystoneUidFrame(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const SByte TxRssi, const GUID &Uuid, const TwclBluetoothLeAdvertisementFrameRawData Data);
	virtual void __fastcall DoEddystoneUrlFrame(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const SByte TxRssi, const System::UnicodeString Url);
	virtual void __fastcall DoManufacturerRawFrame(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const System::Word CompanyId, const TwclBluetoothLeAdvertisementFrameRawData Data);
	virtual void __fastcall DoMicrosoftCdpBeaconFrame(const __int64 Address, const __int64 Timestamp, const SByte Rssi, const TwclBluetoothLeCdpBeaconScenarioType ScenarioType, const System::Byte Version, const TwclBluetoothLeCdpBeaconDeviceType DeviceType, const System::Byte SubVersion, const bool ShareNearBy, const bool AddressAsDeviceId, const TwclBluetoothLeCdpBeaconExtendedDeviceStatuses ExtendedDeviceStatus, const TwclBluetoothLeCdpBeaconSalt Salt, const TwclBluetoothLeCdpBeaconHash Hash);
	virtual void __fastcall DoStarted(void);
	virtual void __fastcall DoStopped(void);
	
public:
	__fastcall virtual TwclBluetoothLeBeaconWatcher(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TwclBluetoothLeBeaconWatcher(void);
	int __fastcall Start(TwclBluetoothRadio* const Radio);
	int __fastcall Stop(void);
	int __fastcall RestoreDefaults(void);
	__property bool Monitoring = {read=GetMonitoring, nodefault};
	__property TwclBluetoothRadio* Radio = {read=GetRadio};
	
__published:
	__property bool AllowExtendedAdvertisements = {read=FAllowExtendedAdvertisements, write=SetAllowExtendedAdvertisements, default=0};
	__property TwclBluetoothLeScanningMode ScanningMode = {read=FScanningMode, write=SetScanningMode, default=0};
	__property TwclBluetoothLeScanParametersType ScanParametersType = {read=FScanParametersType, write=SetScanParametersType, default=0};
	__property System::Word ScanInterval = {read=FScanInterval, write=SetScanInterval, default=200};
	__property System::Word ScanWindow = {read=FScanWindow, write=SetScanWindow, default=50};
	__property TwclBluetoothLeAdvertisementAppearanceFrameEvent OnAdvertisementAppearanceFrame = {read=FOnAdvertisementAppearanceFrame, write=FOnAdvertisementAppearanceFrame};
	__property TwclBluetoothLeAdvertisementFrameInformationEvent OnAdvertisementFrameInformation = {read=FOnAdvertisementFrameInformation, write=FOnAdvertisementFrameInformation};
	__property TwclBluetoothLeAdvertisementExtFrameInformationEvent OnAdvertisementExtFrameInformation = {read=FOnAdvertisementExtFrameInformation, write=FOnAdvertisementExtFrameInformation};
	__property TwclBluetoothLeAdvertisementRawFrameEvent OnAdvertisementRawFrame = {read=FOnAdvertisementRawFrame, write=FOnAdvertisementRawFrame};
	__property TwclBluetoothLeAdvertisementReceivedEvent OnAdvertisementReceived = {read=FOnAdvertisementReceived, write=FOnAdvertisementReceived};
	__property TwclBluetoothLeAdvertisementService16DataFrameEvent OnAdvertisementService16DataFrame = {read=FOnAdvertisementService16DataFrame, write=FOnAdvertisementService16DataFrame};
	__property TwclBluetoothLeAdvertisementService32DataFrameEvent OnAdvertisementService32DataFrame = {read=FOnAdvertisementService32DataFrame, write=FOnAdvertisementService32DataFrame};
	__property TwclBluetoothLeAdvertisementService128DataFrameEvent OnAdvertisementService128DataFrame = {read=FOnAdvertisementService128DataFrame, write=FOnAdvertisementService128DataFrame};
	__property TwclBluetoothLeAdvertisementServiceSol16FrameEvent OnAdvertisementServiceSol16Frame = {read=FOnAdvertisementServiceSol16Frame, write=FOnAdvertisementServiceSol16Frame};
	__property TwclBluetoothLeAdvertisementServiceSol32FrameEvent OnAdvertisementServiceSol32Frame = {read=FOnAdvertisementServiceSol32Frame, write=FOnAdvertisementServiceSol32Frame};
	__property TwclBluetoothLeAdvertisementServiceSol128FrameEvent OnAdvertisementServiceSol128Frame = {read=FOnAdvertisementServiceSol128Frame, write=FOnAdvertisementServiceSol128Frame};
	__property TwclBluetoothLeAdvertisementTxPowerLevelFrameEvent OnAdvertisementTxPowerLevelFrame = {read=FOnAdvertisementTxPowerLevelFrame, write=FOnAdvertisementTxPowerLevelFrame};
	__property TwclBluetoothLeAdvertisementUuidFrameEvent OnAdvertisementUuidFrame = {read=FOnAdvertisementUuidFrame, write=FOnAdvertisementUuidFrame};
	__property TwclBluetoothLeAltBeaconFrameEvent OnAltBeaconFrame = {read=FOnAltBeaconFrame, write=FOnAltBeaconFrame};
	__property TwclBluetoothLeAppleAirdropFrameEvent OnAppleAirdropFrame = {read=FOnAppleAirdropFrame, write=FOnAppleAirdropFrame};
	__property TwclBluetoothLeAppleAirplaySourceFrameEvent OnAppleAirplaySourceFrame = {read=FOnAppleAirplaySourceFrame, write=FOnAppleAirplaySourceFrame};
	__property TwclBluetoothLeAppleAirplayTargetFrameEvent OnAppleAirplayTargetFrame = {read=FOnAppleAirplayTargetFrame, write=FOnAppleAirplayTargetFrame};
	__property TwclBluetoothLeAppleAirprintFrameEvent OnAppleAirprintFrame = {read=FOnAppleAirprintFrame, write=FOnAppleAirprintFrame};
	__property TwclBluetoothLeAppleFindMyFrameEvent OnAppleFindMyFrame = {read=FOnAppleFindMyFrame, write=FOnAppleFindMyFrame};
	__property TwclBluetoothLeAppleHandoffFrameEvent OnAppleHandoffFrame = {read=FOnAppleHandoffFrame, write=FOnAppleHandoffFrame};
	__property TwclBluetoothLeAppleHeySiriFrameEvent OnAppleHeySiriFrame = {read=FOnAppleHeySiriFrame, write=FOnAppleHeySiriFrame};
	__property TwclBluetoothLeAppleHomeKitFrameEvent OnAppleHomeKitFrame = {read=FOnAppleHomeKitFrame, write=FOnAppleHomeKitFrame};
	__property TwclBluetoothLeAppleiBeaconFrameEvent OnAppleiBeaconFrame = {read=FOnAppleiBeaconFrame, write=FOnAppleiBeaconFrame};
	__property TwclBluetoothLeAppleMagicSwitchFrameEvent OnAppleMagicSwitchFrame = {read=FOnAppleMagicSwitchFrame, write=FOnAppleMagicSwitchFrame};
	__property TwclBluetoothLeAppleNearbyActionFrameEvent OnAppleNearbyActionFrame = {read=FOnAppleNearbyActionFrame, write=FOnAppleNearbyActionFrame};
	__property TwclBluetoothLeAppleNearbyInfoFrameEvent OnAppleNearbyInfoFrame = {read=FOnAppleNearbyInfoFrame, write=FOnAppleNearbyInfoFrame};
	__property TwclBluetoothLeAppleProximityPairingFrameEvent OnAppleProximityPairingFrame = {read=FOnAppleProximityPairingFrame, write=FOnAppleProximityPairingFrame};
	__property TwclBluetoothLeAppleTetheringSourceFrameEvent OnAppleTetheringSourceFrame = {read=FOnAppleTetheringSourceFrame, write=FOnAppleTetheringSourceFrame};
	__property TwclBluetoothLeAppleTetheringTargetFrameEvent OnAppleTetheringTargetFrame = {read=FOnAppleTetheringTargetFrame, write=FOnAppleTetheringTargetFrame};
	__property TwclBluetoothLeAppleUnknownFrameEvent OnAppleUnknownFrame = {read=FOnAppleUnknownFrame, write=FOnAppleUnknownFrame};
	__property TwclBluetoothLeDriAsdMessageEvent OnDriAsdMessage = {read=FOnDriAsdMessage, write=FOnDriAsdMessage};
	__property TwclBluetoothLeEddystoneTlmFrameEvent OnEddystoneTlmFrame = {read=FOnEddystoneTlmFrame, write=FOnEddystoneTlmFrame};
	__property TwclBluetoothLeEddystoneUidFrameEvent OnEddystoneUidFrame = {read=FOnEddystoneUidFrame, write=FOnEddystoneUidFrame};
	__property TwclBluetoothLeEddystoneUrlFrameEvent OnEddystoneUrlFrame = {read=FOnEddystoneUrlFrame, write=FOnEddystoneUrlFrame};
	__property TwclBluetoothLeManufacturerRawFrameEvent OnManufacturerRawFrame = {read=FOnManufacturerRawFrame, write=FOnManufacturerRawFrame};
	__property TwclBluetoothLeMicrosoftCdpBeaconFrameEvent OnMicrosoftCdpBeaconFrame = {read=FOnMicrosoftCdpBeaconFrame, write=FOnMicrosoftCdpBeaconFrame};
	__property System::Classes::TNotifyEvent OnStarted = {read=FOnStarted, write=FOnStarted};
	__property System::Classes::TNotifyEvent OnStopped = {read=FOnStopped, write=FOnStopped};
};


class PASCALIMPLEMENTATION TwclBluetoothLeAdvertiser : public TwclBluetoothComponent
{
	typedef TwclBluetoothComponent inherited;
	
public:
	TwclBluetoothLeAdvertisement* operator[](const int Index) { return Advertisements[Index]; }
	
private:
	bool FActive;
	System::Classes::TList* FAdvertisements;
	TwclBluetoothLeAdvertiserConnection* FAdvertiser;
	System::Word FInterval;
	bool FAnonymous;
	bool FIncludeTxRssi;
	SByte FPreferredTxRssi;
	TwclBluetoothLeAdvertisementPhy FPrimaryPhy;
	TwclBluetoothLeAdvertisementPhy FSecondaryPhy;
	bool FUseExtendedAdvertisement;
	System::Classes::TNotifyEvent FOnStarted;
	System::Classes::TNotifyEvent FOnStopped;
	int __fastcall CheckAdvertisement(TwclBluetoothLeAdvertisement* const Advertisement);
	TwclBluetoothLeAdvertisement* __fastcall GetAdvertisements(const int Index);
	bool __fastcall GetAdvertising(void);
	int __fastcall GetCount(void);
	TwclBluetoothRadio* __fastcall GetRadio(void);
	void __fastcall SetAnonymous(const bool Value);
	void __fastcall SetIncludeTxRssi(const bool Value);
	void __fastcall SetInterval(const System::Word Value);
	void __fastcall SetPreferredTxRssi(const SByte Value);
	void __fastcall SetPrimaryPhy(const TwclBluetoothLeAdvertisementPhy Value);
	void __fastcall SetSecondaryPhy(const TwclBluetoothLeAdvertisementPhy Value);
	void __fastcall SetUseExtendedAdvertisement(const bool Value);
	void __fastcall AdvertiserStarted(System::TObject* Sender);
	void __fastcall AdvertiserStopped(System::TObject* Sender);
	
protected:
	virtual void __fastcall DoStarted(void);
	virtual void __fastcall DoStopped(void);
	
public:
	__fastcall virtual TwclBluetoothLeAdvertiser(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TwclBluetoothLeAdvertiser(void);
	int __fastcall Add(TwclBluetoothLeAdvertisement* const Advertisement);
	int __fastcall Clear(void);
	int __fastcall Delete(const int Index);
	int __fastcall Start(TwclBluetoothRadio* const Radio);
	int __fastcall Stop(void);
	int __fastcall RestoreDefaults(void);
	__property TwclBluetoothLeAdvertisement* Advertisements[const int Index] = {read=GetAdvertisements/*, default*/};
	__property bool Advertising = {read=GetAdvertising, nodefault};
	__property int Count = {read=GetCount, nodefault};
	__property TwclBluetoothRadio* Radio = {read=GetRadio};
	
__published:
	__property bool Anonymous = {read=FAnonymous, write=SetAnonymous, default=0};
	__property bool IncludeTxRssi = {read=FIncludeTxRssi, write=SetIncludeTxRssi, default=0};
	__property System::Word Interval = {read=FInterval, write=SetInterval, nodefault};
	__property SByte PreferredTxRssi = {read=FPreferredTxRssi, write=SetPreferredTxRssi, default=-127};
	__property TwclBluetoothLeAdvertisementPhy PrimaryPhy = {read=FPrimaryPhy, write=SetPrimaryPhy, default=0};
	__property TwclBluetoothLeAdvertisementPhy SecondaryPhy = {read=FSecondaryPhy, write=SetSecondaryPhy, default=0};
	__property bool UseExtendedAdvertisement = {read=FUseExtendedAdvertisement, write=SetUseExtendedAdvertisement, default=0};
	__property System::Classes::TNotifyEvent OnStarted = {read=FOnStarted, write=FOnStarted};
	__property System::Classes::TNotifyEvent OnStopped = {read=FOnStopped, write=FOnStopped};
};


class PASCALIMPLEMENTATION TwclWiiRemoteClient : public TwclBluetoothComponent
{
	typedef TwclBluetoothComponent inherited;
	
private:
	bool FActive;
	__int64 FAddress;
	unsigned FTimeout;
	TwclWiiRemoteClientConnection* FClient;
	TwclWiiRemoteAccelChangedEvent FOnAccelChanged;
	TwclWiiRemoteBalanceBoardChangedEvent FOnBalanceBoardChanged;
	TwclWiiRemoteButtonsChangedEvent FOnButtonsChanged;
	TwclWiiRemoteClassicControllerChangedEvent FOnClassicControllerChanged;
	Wclconnections::TwclClientConnectionConnectEvent FOnConnect;
	Wclconnections::TwclClientConnectionDisconnectEvent FOnDisconnect;
	TwclWiiRemoteDrumsChangedEvent FOnDrumsChanged;
	System::Classes::TNotifyEvent FOnExtensionAttached;
	System::Classes::TNotifyEvent FOnExtensionDetached;
	TwclWiiRemoteGuitarChangedEvent FOnGuitarChanged;
	TwclWiiRemoteIrChangedEvent FOnIrChanged;
	TwclWiiRemoteNunchukChangedEvent FOnNunchukChanged;
	TwclWiiRemoteStatusChangedEvent FOnStatusChanged;
	void __fastcall ClientAccelChanged(System::TObject* Sender, const TwclWiiRemoteAccel &Accel);
	void __fastcall ClientBalanceBoardChanged(System::TObject* Sender, const TwclWiiRemoteBalanceBoard &Board);
	void __fastcall ClientButtonsChanged(System::TObject* Sender, const TwclWiiRemoteButtons &Buttons);
	void __fastcall ClientClassicControllerChanged(System::TObject* Sender, const TwclWiiRemoteClassicController &Controller);
	void __fastcall ClientConnect(System::TObject* Sender, const int Error);
	void __fastcall ClientDisconnect(System::TObject* Sender, const int Reason);
	void __fastcall ClientDrumsChanged(System::TObject* Sender, const TwclWiiRemoteDrums &Drums);
	void __fastcall ClientExtensionAttached(System::TObject* Sender);
	void __fastcall ClientExtensionDetached(System::TObject* Sender);
	void __fastcall ClientGuitarChanged(System::TObject* Sender, const TwclWiiRemoteGuitar &Guitar);
	void __fastcall ClientIrChanged(System::TObject* Sender, const TwclWiiRemoteIrSensors &Ir);
	void __fastcall ClientNunchukChanged(System::TObject* Sender, const TwclWiiRemoteNunchuk &Nunchuk);
	void __fastcall ClientStatusChanged(System::TObject* Sender, const double Batt, const TwclWiiRemoteLeds Leds);
	bool __fastcall GetAccelEnabled(void);
	TwclWiiRemoteExtension __fastcall GetExtension(void);
	TwclWiiRemoteIrMode __fastcall GetIrMode(void);
	TwclWiiRemoteIrSensitivity __fastcall GetIrSensitivity(void);
	TwclWiiRemoteLeds __fastcall GetLeds(void);
	TwclBluetoothRadio* __fastcall GetRadio(void);
	bool __fastcall GetRumble(void);
	Wclconnections::TwclClientState __fastcall GetState(void);
	void __fastcall SetAddress(const __int64 Value);
	void __fastcall SetTimeout(const unsigned Value);
	
protected:
	virtual void __fastcall DoAccelChanged(const TwclWiiRemoteAccel &Accel);
	virtual void __fastcall DoBalanceBoardChanged(const TwclWiiRemoteBalanceBoard &Board);
	virtual void __fastcall DoButtonsChanged(const TwclWiiRemoteButtons &Buttons);
	virtual void __fastcall DoClassicControllerChanged(const TwclWiiRemoteClassicController &Controller);
	virtual void __fastcall DoConnect(const int Error);
	virtual void __fastcall DoDisconnect(const int Reason);
	virtual void __fastcall DoDrumsChanged(const TwclWiiRemoteDrums &Drums);
	virtual void __fastcall DoExtensionAttached(void);
	virtual void __fastcall DoExtensionDetached(void);
	virtual void __fastcall DoGuitarChanged(const TwclWiiRemoteGuitar &Guitar);
	virtual void __fastcall DoIrChanged(const TwclWiiRemoteIrSensors &Ir);
	virtual void __fastcall DoNunchukChanged(const TwclWiiRemoteNunchuk &Nunchuk);
	virtual void __fastcall DoStatusChanged(const double Batt, const TwclWiiRemoteLeds Leds);
	
public:
	__fastcall virtual TwclWiiRemoteClient(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TwclWiiRemoteClient(void);
	int __fastcall Connect(TwclBluetoothRadio* const Radio);
	int __fastcall Disconnect(void);
	int __fastcall GetStatus(void);
	int __fastcall SetLeds(const TwclWiiRemoteLeds Leds)/* overload */;
	int __fastcall SetLeds(const bool Led1, const bool Led2, const bool Led3, const bool Led4)/* overload */;
	int __fastcall SetRumble(const bool TurnOn);
	int __fastcall EnableAccel(void);
	int __fastcall DisableAccel(void);
	int __fastcall SetIrSensitivity(const TwclWiiRemoteIrSensitivity Sensitivity);
	__property bool AccelEnabled = {read=GetAccelEnabled, nodefault};
	__property TwclWiiRemoteExtension Extension = {read=GetExtension, nodefault};
	__property TwclWiiRemoteIrMode IrMode = {read=GetIrMode, nodefault};
	__property TwclWiiRemoteIrSensitivity IrSensitivity = {read=GetIrSensitivity, nodefault};
	__property TwclWiiRemoteLeds Leds = {read=GetLeds};
	__property TwclBluetoothRadio* Radio = {read=GetRadio};
	__property bool Rumble = {read=GetRumble, nodefault};
	__property Wclconnections::TwclClientState State = {read=GetState, nodefault};
	
__published:
	__property __int64 Address = {read=FAddress, write=SetAddress, default=0};
	__property unsigned Timeout = {read=FTimeout, write=SetTimeout, default=10000};
	__property TwclWiiRemoteAccelChangedEvent OnAccelChanged = {read=FOnAccelChanged, write=FOnAccelChanged};
	__property TwclWiiRemoteBalanceBoardChangedEvent OnBalanceBoardChanged = {read=FOnBalanceBoardChanged, write=FOnBalanceBoardChanged};
	__property TwclWiiRemoteButtonsChangedEvent OnButtonsChanged = {read=FOnButtonsChanged, write=FOnButtonsChanged};
	__property TwclWiiRemoteClassicControllerChangedEvent OnClassicControllerChanged = {read=FOnClassicControllerChanged, write=FOnClassicControllerChanged};
	__property Wclconnections::TwclClientConnectionConnectEvent OnConnect = {read=FOnConnect, write=FOnConnect};
	__property Wclconnections::TwclClientConnectionDisconnectEvent OnDisconnect = {read=FOnDisconnect, write=FOnDisconnect};
	__property TwclWiiRemoteDrumsChangedEvent OnDrumsChanged = {read=FOnDrumsChanged, write=FOnDrumsChanged};
	__property System::Classes::TNotifyEvent OnExtensionAttached = {read=FOnExtensionAttached, write=FOnExtensionAttached};
	__property System::Classes::TNotifyEvent OnExtensionDetached = {read=FOnExtensionDetached, write=FOnExtensionDetached};
	__property TwclWiiRemoteGuitarChangedEvent OnGuitarChanged = {read=FOnGuitarChanged, write=FOnGuitarChanged};
	__property TwclWiiRemoteIrChangedEvent OnIrChanged = {read=FOnIrChanged, write=FOnIrChanged};
	__property TwclWiiRemoteNunchukChangedEvent OnNunchukChanged = {read=FOnNunchukChanged, write=FOnNunchukChanged};
	__property TwclWiiRemoteStatusChangedEvent OnStatusChanged = {read=FOnStatusChanged, write=FOnStatusChanged};
};


class PASCALIMPLEMENTATION TwclBleSniffer : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	System::Byte FChannel;
	System::UnicodeString FDevicePath;
	Wclsync::TwclManualResetEvent* FInitEvent;
	int FInitResult;
	Wclmessaging::TwclMessageProcessingMethod FMessageProcessing;
	Wclmessaging::TwclMessageReceiver* FReceiver;
	Wclsync::TwclManualResetEvent* FTermEvent;
	Wclsync::TwclThread* FThread;
	TwclBleSnifferAdvDirectIndReceivedEvent FOnAdvDirectIndReceived;
	TwclBleSnifferAdvIndReceivedEvent FOnAdvIndReceived;
	TwclBleSnifferAdvNonConnIndReceivedEvent FOnAdvNonConnIndReceived;
	TwclBleSnifferAdvScanIndReceivedEvent FOnAdvScanIndReceived;
	TwclBleSnifferConnectIndReceivedEvent FOnConnectIndReceived;
	TwclBleSnifferScanReqReceivedEvent FOnScanReqReceived;
	TwclBleSnifferScanRspReceivedEvent FOnScanRspReceived;
	TwclBleSnifferRawPacketReceivedEvent FOnRawPacketReceived;
	System::Classes::TNotifyEvent FOnStarted;
	System::Classes::TNotifyEvent FOnStopped;
	bool __fastcall GetActive(void);
	void __fastcall SetMessageProcessing(const Wclmessaging::TwclMessageProcessingMethod Value);
	System::UnicodeString __fastcall FindDevice(void);
	__int64 __fastcall DecodeAddress(const void * Pdu, const System::Byte Ndx, const System::Byte Len);
	bool __fastcall ParseConnectIndPdu(const TwclBluetoothLeAdvertisingPduHeader &PduHeader, const void * Pdu, const System::Byte PduLen);
	bool __fastcall ParseSingleAddrAdvertisingPdu(const System::Byte Id, const TwclBluetoothLeAdvertisingPduHeader &PduHeader, const void * Pdu, const System::Byte PduLen);
	bool __fastcall ParseTwoAddrAdvertisingPdu(const System::Byte Id, const TwclBluetoothLeAdvertisingPduHeader &PduHeader, const void * Pdu, const System::Byte PduLen);
	bool __fastcall ParseAdvertisingPacket(const TwclBluetoothLePacketHeader &Header, const void * Payload, const System::Word Len);
	bool __fastcall ParseDataPacket(const TwclBluetoothLePacketHeader &Header, const void * Payload, const System::Word Len);
	void __fastcall ParsePacket(const void * Packet, const System::Word Size);
	void __fastcall SnifferThread(void);
	
protected:
	virtual void __fastcall MessageReceived(Wclmessaging::TwclMessage* const Message);
	virtual void __fastcall DoAdvDirectIndReceived(const TwclBluetoothLeAdvertisingPduHeader &PduHeader, const __int64 AdvA, const __int64 TargetA);
	virtual void __fastcall DoAdvIndReceived(const TwclBluetoothLeAdvertisingPduHeader &PduHeader, const __int64 AdvA, const void * AdvData, const System::Byte AdvDataLen);
	virtual void __fastcall DoAdvNonConnIndReceived(const TwclBluetoothLeAdvertisingPduHeader &PduHeader, const __int64 AdvA, const void * AdvData, const System::Byte AdvDataLen);
	virtual void __fastcall DoAdvScanIndReceived(const TwclBluetoothLeAdvertisingPduHeader &PduHeader, const __int64 AdvA, const void * AdvData, const System::Byte AdvDataLen);
	virtual void __fastcall DoConnectIndReceived(const TwclBluetoothLeAdvertisingPduHeader &PduHeader, const __int64 InitA, const __int64 AdvA, const TwclBleSnifferLlData &LlData);
	virtual void __fastcall DoScanReqReceived(const TwclBluetoothLeAdvertisingPduHeader &PduHeader, const __int64 ScanA, const __int64 AdvA);
	virtual void __fastcall DoScanRspReceived(const TwclBluetoothLeAdvertisingPduHeader &PduHeader, const __int64 AdvA, const void * ScanRspData, const System::Byte ScanRspDataLen);
	virtual void __fastcall DoRawPacketReceived(const TwclBluetoothLePacketHeader &Header, const void * Payload, const System::Word Size);
	virtual void __fastcall DoStarted(void);
	virtual void __fastcall DoStopped(void);
	
public:
	__fastcall virtual TwclBleSniffer(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TwclBleSniffer(void);
	int __fastcall Start(const System::UnicodeString DevicePath, const System::Byte Channel)/* overload */;
	int __fastcall Start(const System::Byte Channel)/* overload */;
	int __fastcall Stop(void);
	__property bool Active = {read=GetActive, nodefault};
	__property System::Byte Channel = {read=FChannel, nodefault};
	__property System::UnicodeString DevicePath = {read=FDevicePath};
	
__published:
	__property Wclmessaging::TwclMessageProcessingMethod MessageProcessing = {read=FMessageProcessing, write=SetMessageProcessing, default=1};
	__property TwclBleSnifferAdvDirectIndReceivedEvent OnAdvDirectIndReceived = {read=FOnAdvDirectIndReceived, write=FOnAdvDirectIndReceived};
	__property TwclBleSnifferAdvIndReceivedEvent OnAdvIndReceived = {read=FOnAdvIndReceived, write=FOnAdvIndReceived};
	__property TwclBleSnifferAdvNonConnIndReceivedEvent OnAdvNonConnIndReceived = {read=FOnAdvNonConnIndReceived, write=FOnAdvNonConnIndReceived};
	__property TwclBleSnifferAdvScanIndReceivedEvent OnAdvScanIndReceived = {read=FOnAdvScanIndReceived, write=FOnAdvScanIndReceived};
	__property TwclBleSnifferConnectIndReceivedEvent OnConnectIndReceived = {read=FOnConnectIndReceived, write=FOnConnectIndReceived};
	__property TwclBleSnifferScanReqReceivedEvent OnScanReqReceived = {read=FOnScanReqReceived, write=FOnScanReqReceived};
	__property TwclBleSnifferScanRspReceivedEvent OnScanRspReceived = {read=FOnScanRspReceived, write=FOnScanRspReceived};
	__property TwclBleSnifferRawPacketReceivedEvent OnRawPacketReceived = {read=FOnRawPacketReceived, write=FOnRawPacketReceived};
	__property System::Classes::TNotifyEvent OnStarted = {read=FOnStarted, write=FOnStarted};
	__property System::Classes::TNotifyEvent OnStopped = {read=FOnStopped, write=FOnStopped};
};


//-- var, const, procedure ---------------------------------------------------
static const System::Byte WCL_BLUETOOTH_LE_DEFAULT_SCAN_INTERVAL = System::Byte(0xc8);
static const System::Int8 WCL_BLUETOOTH_LE_DEFAULT_SCAN_WINDOW = System::Int8(0x32);
static const System::Word WCL_BLUETOOTH_LE_COEX_SCAN_INTERVAL = System::Word(0x24c);
static const System::Int8 WCL_BLUETOOTH_LE_COEX_SCAN_WINDOW = System::Int8(0x3c);
static const System::Byte WCL_BLUETOOTH_LE_LOW_SCAN_INTERVAL = System::Byte(0xbd);
static const System::Int8 WCL_BLUETOOTH_LE_LOW_SCAN_WINDOW = System::Int8(0x1d);
extern DELPHI_PACKAGE bool __fastcall wclGattCompareUuid(const TwclGattUuid &u1, const TwclGattUuid &u2)/* overload */;
extern DELPHI_PACKAGE TwclGattUuid __fastcall wclGattMakeUuid(const System::Word Uuid)/* overload */;
extern DELPHI_PACKAGE TwclGattUuid __fastcall wclGattMakeUuid(const GUID &Uuid)/* overload */;
}	/* namespace Wclbluetooth */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WCLBLUETOOTH)
using namespace Wclbluetooth;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WclbluetoothHPP
