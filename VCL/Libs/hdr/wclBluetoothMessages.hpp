// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wclBluetoothMessages.pas' rev: 30.00 (Windows)

#ifndef WclbluetoothmessagesHPP
#define WclbluetoothmessagesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <wclMessaging.hpp>
#include <wclBluetooth.hpp>
#include <Winapi.Windows.hpp>
#include <wclWinAPI.hpp>
#include <wclSync.hpp>
#include <System.Classes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Wclbluetoothmessages
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TwclBluetoothMessage;
class DELPHICLASS TwclBluetoothStatusChangedMessage;
class DELPHICLASS TwclBluetoothRadioUnavailableMessage;
class DELPHICLASS TwclBluetoothDiscoveringStartedMessage;
class DELPHICLASS TwclBluetoothResultMessage;
class DELPHICLASS TwclBluetoothDiscoveringCompletedMessage;
class DELPHICLASS TwclBluetoothRemoteDeviceMessage;
class DELPHICLASS TwclBluetoothDeviceFoundMessage;
class DELPHICLASS TwclBluetoothIoCapRequestMessage;
class DELPHICLASS TwclBluetoothProtectionRequestMessage;
class DELPHICLASS TwclBluetoothPinRequestMessage;
class DELPHICLASS TwclBluetoothNumericComparisonMessage;
class DELPHICLASS TwclBluetoothPasskeyRequestMessage;
class DELPHICLASS TwclBluetoothPasskeyNotificationMessage;
class DELPHICLASS TwclBluetoothConfirmOnlyMessage;
class DELPHICLASS TwclBluetoothOobDataRequestMessage;
class DELPHICLASS TwclBluetoothRemoteResultMessage;
class DELPHICLASS TwclBluetoothAuthenticationCompletedMessage;
class DELPHICLASS TwclBluetoothLeCharacteristicChangedMessage;
class DELPHICLASS TwclBluetoothLeConnectionParamsChangedMessage;
class DELPHICLASS TwclBluetoothLeMaxPduSizeChangedMessage;
class DELPHICLASS TwclBluetoothLeConnectionPhyChangedMessage;
class DELPHICLASS TwclBluetoothLeDeviceDisconnectedMessage;
class DELPHICLASS TwclBluetoothLeAdvFrame;
class DELPHICLASS TwclBluetoothLeAdvDataFrame;
class DELPHICLASS TwclBluetoothLeAdvManufacturerRawDataFrame;
class DELPHICLASS TwclBluetoothLeAdvRawDataFrame;
class DELPHICLASS TwclBluetoothLeAdvInformationFrame;
class DELPHICLASS TwclBluetoothLeAdvUuidFrame;
class DELPHICLASS TwclBluetoothLeAdvExtInformationFrame;
class DELPHICLASS TwclBluetoothLeAdvService16DataFrame;
class DELPHICLASS TwclBluetoothLeAdvService32DataFrame;
class DELPHICLASS TwclBluetoothLeAdvService128DataFrame;
class DELPHICLASS TwclBluetoothLeAdvServiceSol16Frame;
class DELPHICLASS TwclBluetoothLeAdvServiceSol32Frame;
class DELPHICLASS TwclBluetoothLeAdvServiceSol128Frame;
class DELPHICLASS TwclBluetoothLeAdvRawFrame;
class DELPHICLASS TwclBluetoothLeAdvTxPowerFrame;
class DELPHICLASS TwclBluetoothLeAdvAppearanceFrame;
class DELPHICLASS TwclBluetoothLeAdvertisementMessage;
class DELPHICLASS TwclBluetoothGattServerMessage;
class DELPHICLASS TwclBluetoothGattServerParamsMessage;
class DELPHICLASS TwclBluetoothGattServerCharMessage;
class DELPHICLASS TwclBluetoothGattServerCharSyncMessage;
class DELPHICLASS TwclBluetoothLeGattServerWriteMessage;
class DELPHICLASS TwclBluetoothLeGattServerReadMessage;
class DELPHICLASS TwclBluetoothLeGattServerClientSubscribedMessage;
class DELPHICLASS TwclBluetoothLeGattServerClientUnsubscribedMessage;
class DELPHICLASS TwclBluetoothLeGattServerClientConnectedMessage;
class DELPHICLASS TwclBluetoothLeGattServerClientDisconnectedMessage;
class DELPHICLASS TwclBluetoothLeGattServerMaxNotifySizeChangedMessage;
class DELPHICLASS TwclBluetoothMsBlePairParams;
class DELPHICLASS TwclBluetoothMsBlePinRequestParams;
class DELPHICLASS TwclBluetoothMsBleConfirmParams;
class DELPHICLASS TwclBluetoothMsBlePasskeyRequestParams;
class DELPHICLASS TwclBluetoothMsBleProtectionRequestParams;
class DELPHICLASS TwclBluetoothMsIoCapRequestParams;
class DELPHICLASS TwclBluetoothMsOobDataRequestParams;
class DELPHICLASS TwclBluetoothMsBlePairMessage;
class DELPHICLASS TwclBluetoothMsBlePinRequestMessage;
class DELPHICLASS TwclBluetoothMsBleNumericComparisonMessage;
class DELPHICLASS TwclBluetoothMsBlePasskeyRequestMessage;
class DELPHICLASS TwclBluetoothMsBleConfirmOnlyMessage;
class DELPHICLASS TwclBluetoothMsBleProtectionRequestMessage;
class DELPHICLASS TwclBluetoothMsIoCapRequestMessage;
class DELPHICLASS TwclBluetoothMsOobDataRequestMessage;
class DELPHICLASS TwclBluetoothBled112Message;
class DELPHICLASS TwclBluetoothBled112DisconnectMessage;
class DELPHICLASS TwclWiiRemoteMessage;
class DELPHICLASS TwclWiiRemoteButtonsChangedMessage;
class DELPHICLASS TwclWiiRemoteAccelChangedMessage;
class DELPHICLASS TwclWiiRemoteIrChangedMessage;
class DELPHICLASS TwclWiiRemoteNunchukChangedMessage;
class DELPHICLASS TwclWiiRemoteClassicControllerChangedMessage;
class DELPHICLASS TwclWiiRemoteGuitarChangedMessage;
class DELPHICLASS TwclWiiRemoteDrumsChangedMessage;
class DELPHICLASS TwclWiiRemoteBalanceBoardChangedMessage;
class DELPHICLASS TwclWiiRemoteStatusChangedMessage;
class DELPHICLASS TwclWiiRemoteExtensionStateChangedMessage;
class DELPHICLASS TwclBluetoothLeSnifferMessage;
class DELPHICLASS TwclBluetoothLeSnifferDeviceDisconnectedMessage;
class DELPHICLASS TwclBluetoothLeSnifferRawPacketReceivedMessage;
class DELPHICLASS TwclBluetoothLeSnifferAdvertisingPacketReceivedMessage;
class DELPHICLASS TwclBluetoothLeSnifferAdvertisingAddressMessage;
class DELPHICLASS TwclBluetoothLeSnifferAdvertisingTwoAddressMessage;
class DELPHICLASS TwclBluetoothLeSnifferAdvertisingDataMessage;
class DELPHICLASS TwclBluetoothLeSnifferAdvertisingConnectIndReceivedMessage;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothMessage : public Wclmessaging::TwclBluetoothCategoryMessage
{
	typedef Wclmessaging::TwclBluetoothCategoryMessage inherited;
	
private:
	Wclbluetooth::TwclBluetoothApi FApi;
	
public:
	__fastcall TwclBluetoothMessage(const System::Byte Id, const Wclbluetooth::TwclBluetoothApi Api);
	__property Wclbluetooth::TwclBluetoothApi Api = {read=FApi, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothMessage(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothStatusChangedMessage : public TwclBluetoothMessage
{
	typedef TwclBluetoothMessage inherited;
	
public:
	__fastcall TwclBluetoothStatusChangedMessage(const Wclbluetooth::TwclBluetoothApi Api);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothStatusChangedMessage(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothRadioUnavailableMessage : public TwclBluetoothMessage
{
	typedef TwclBluetoothMessage inherited;
	
private:
	int FReason;
	
public:
	__fastcall TwclBluetoothRadioUnavailableMessage(const Wclbluetooth::TwclBluetoothApi Api, const int Reason);
	__property int Reason = {read=FReason, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothRadioUnavailableMessage(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothDiscoveringStartedMessage : public TwclBluetoothMessage
{
	typedef TwclBluetoothMessage inherited;
	
public:
	__fastcall TwclBluetoothDiscoveringStartedMessage(const Wclbluetooth::TwclBluetoothApi Api);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothDiscoveringStartedMessage(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothResultMessage : public TwclBluetoothMessage
{
	typedef TwclBluetoothMessage inherited;
	
private:
	int FError;
	
public:
	__fastcall TwclBluetoothResultMessage(const System::Byte Id, const Wclbluetooth::TwclBluetoothApi Api, const int Error);
	__property int Error = {read=FError, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothResultMessage(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothDiscoveringCompletedMessage : public TwclBluetoothResultMessage
{
	typedef TwclBluetoothResultMessage inherited;
	
public:
	__fastcall TwclBluetoothDiscoveringCompletedMessage(const Wclbluetooth::TwclBluetoothApi Api, const int Error);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothDiscoveringCompletedMessage(void) { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TwclBluetoothRemoteDeviceMessage : public TwclBluetoothMessage
{
	typedef TwclBluetoothMessage inherited;
	
private:
	__int64 FAddress;
	__int64 __fastcall GetAddress(void);
	
protected:
	virtual __int64 __fastcall UpdateAddress(void);
	
public:
	__fastcall TwclBluetoothRemoteDeviceMessage(const System::Byte Id, const Wclbluetooth::TwclBluetoothApi Api, const __int64 Address);
	__property __int64 Address = {read=GetAddress};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothRemoteDeviceMessage(void) { }
	
};


class PASCALIMPLEMENTATION TwclBluetoothDeviceFoundMessage : public TwclBluetoothRemoteDeviceMessage
{
	typedef TwclBluetoothRemoteDeviceMessage inherited;
	
public:
	__fastcall TwclBluetoothDeviceFoundMessage(const Wclbluetooth::TwclBluetoothApi Api, const __int64 Address);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothDeviceFoundMessage(void) { }
	
};


class PASCALIMPLEMENTATION TwclBluetoothIoCapRequestMessage : public TwclBluetoothRemoteDeviceMessage
{
	typedef TwclBluetoothRemoteDeviceMessage inherited;
	
public:
	__fastcall TwclBluetoothIoCapRequestMessage(const Wclbluetooth::TwclBluetoothApi Api, const __int64 Address);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothIoCapRequestMessage(void) { }
	
};


class PASCALIMPLEMENTATION TwclBluetoothProtectionRequestMessage : public TwclBluetoothRemoteDeviceMessage
{
	typedef TwclBluetoothRemoteDeviceMessage inherited;
	
public:
	__fastcall TwclBluetoothProtectionRequestMessage(const Wclbluetooth::TwclBluetoothApi Api, const __int64 Address);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothProtectionRequestMessage(void) { }
	
};


class PASCALIMPLEMENTATION TwclBluetoothPinRequestMessage : public TwclBluetoothRemoteDeviceMessage
{
	typedef TwclBluetoothRemoteDeviceMessage inherited;
	
public:
	__fastcall TwclBluetoothPinRequestMessage(const Wclbluetooth::TwclBluetoothApi Api, const __int64 Address);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothPinRequestMessage(void) { }
	
};


class PASCALIMPLEMENTATION TwclBluetoothNumericComparisonMessage : public TwclBluetoothRemoteDeviceMessage
{
	typedef TwclBluetoothRemoteDeviceMessage inherited;
	
private:
	unsigned FNumber;
	
public:
	__fastcall TwclBluetoothNumericComparisonMessage(const Wclbluetooth::TwclBluetoothApi Api, const __int64 Address, const unsigned Number);
	__property unsigned Number = {read=FNumber, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothNumericComparisonMessage(void) { }
	
};


class PASCALIMPLEMENTATION TwclBluetoothPasskeyRequestMessage : public TwclBluetoothRemoteDeviceMessage
{
	typedef TwclBluetoothRemoteDeviceMessage inherited;
	
public:
	__fastcall TwclBluetoothPasskeyRequestMessage(const Wclbluetooth::TwclBluetoothApi Api, const __int64 Address);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothPasskeyRequestMessage(void) { }
	
};


class PASCALIMPLEMENTATION TwclBluetoothPasskeyNotificationMessage : public TwclBluetoothRemoteDeviceMessage
{
	typedef TwclBluetoothRemoteDeviceMessage inherited;
	
private:
	unsigned FPasskey;
	
public:
	__fastcall TwclBluetoothPasskeyNotificationMessage(const Wclbluetooth::TwclBluetoothApi Api, const __int64 Address, const unsigned Passkey);
	__property unsigned Passkey = {read=FPasskey, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothPasskeyNotificationMessage(void) { }
	
};


class PASCALIMPLEMENTATION TwclBluetoothConfirmOnlyMessage : public TwclBluetoothRemoteDeviceMessage
{
	typedef TwclBluetoothRemoteDeviceMessage inherited;
	
public:
	__fastcall TwclBluetoothConfirmOnlyMessage(const Wclbluetooth::TwclBluetoothApi Api, const __int64 Address);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothConfirmOnlyMessage(void) { }
	
};


class PASCALIMPLEMENTATION TwclBluetoothOobDataRequestMessage : public TwclBluetoothRemoteDeviceMessage
{
	typedef TwclBluetoothRemoteDeviceMessage inherited;
	
public:
	__fastcall TwclBluetoothOobDataRequestMessage(const Wclbluetooth::TwclBluetoothApi Api, const __int64 Address);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothOobDataRequestMessage(void) { }
	
};


class PASCALIMPLEMENTATION TwclBluetoothRemoteResultMessage : public TwclBluetoothRemoteDeviceMessage
{
	typedef TwclBluetoothRemoteDeviceMessage inherited;
	
private:
	int FError;
	
public:
	__fastcall TwclBluetoothRemoteResultMessage(const System::Byte Id, const Wclbluetooth::TwclBluetoothApi Api, const __int64 Address, const int Error);
	__property int Error = {read=FError, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothRemoteResultMessage(void) { }
	
};


class PASCALIMPLEMENTATION TwclBluetoothAuthenticationCompletedMessage : public TwclBluetoothRemoteResultMessage
{
	typedef TwclBluetoothRemoteResultMessage inherited;
	
public:
	__fastcall TwclBluetoothAuthenticationCompletedMessage(const Wclbluetooth::TwclBluetoothApi Api, const __int64 Address, const int Error);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothAuthenticationCompletedMessage(void) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLeCharacteristicChangedMessage : public TwclBluetoothMessage
{
	typedef TwclBluetoothMessage inherited;
	
private:
	System::Word FHandle;
	unsigned FSize;
	void *FValue;
	
public:
	__fastcall TwclBluetoothLeCharacteristicChangedMessage(const Wclbluetooth::TwclBluetoothApi Api, const System::Word Handle, const void * Value, const unsigned Size);
	__fastcall virtual ~TwclBluetoothLeCharacteristicChangedMessage(void);
	__property System::Word Handle = {read=FHandle, nodefault};
	__property unsigned Size = {read=FSize, nodefault};
	__property void * Value = {read=FValue};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TwclBluetoothLeConnectionParamsChangedMessage : public TwclBluetoothRemoteDeviceMessage
{
	typedef TwclBluetoothRemoteDeviceMessage inherited;
	
public:
	__fastcall TwclBluetoothLeConnectionParamsChangedMessage(const Wclbluetooth::TwclBluetoothApi Api, const __int64 Address);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothLeConnectionParamsChangedMessage(void) { }
	
};


class PASCALIMPLEMENTATION TwclBluetoothLeMaxPduSizeChangedMessage : public TwclBluetoothRemoteDeviceMessage
{
	typedef TwclBluetoothRemoteDeviceMessage inherited;
	
public:
	__fastcall TwclBluetoothLeMaxPduSizeChangedMessage(const Wclbluetooth::TwclBluetoothApi Api, const __int64 Address);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothLeMaxPduSizeChangedMessage(void) { }
	
};


class PASCALIMPLEMENTATION TwclBluetoothLeConnectionPhyChangedMessage : public TwclBluetoothRemoteDeviceMessage
{
	typedef TwclBluetoothRemoteDeviceMessage inherited;
	
public:
	__fastcall TwclBluetoothLeConnectionPhyChangedMessage(const Wclbluetooth::TwclBluetoothApi Api, const __int64 Address);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothLeConnectionPhyChangedMessage(void) { }
	
};


class PASCALIMPLEMENTATION TwclBluetoothLeDeviceDisconnectedMessage : public TwclBluetoothRemoteDeviceMessage
{
	typedef TwclBluetoothRemoteDeviceMessage inherited;
	
public:
	__fastcall TwclBluetoothLeDeviceDisconnectedMessage(const Wclbluetooth::TwclBluetoothApi Api, const __int64 Address);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothLeDeviceDisconnectedMessage(void) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLeAdvFrame : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Byte FId;
	
public:
	__fastcall TwclBluetoothLeAdvFrame(const System::Byte Id);
	__property System::Byte Id = {read=FId, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothLeAdvFrame(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLeAdvDataFrame : public TwclBluetoothLeAdvFrame
{
	typedef TwclBluetoothLeAdvFrame inherited;
	
private:
	Wclbluetooth::TwclBluetoothLeAdvertisementFrameRawData FData;
	
public:
	__fastcall TwclBluetoothLeAdvDataFrame(const System::Byte Id, const Wclbluetooth::TwclBluetoothLeAdvertisementFrameRawData Data);
	__property Wclbluetooth::TwclBluetoothLeAdvertisementFrameRawData Data = {read=FData};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothLeAdvDataFrame(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLeAdvManufacturerRawDataFrame : public TwclBluetoothLeAdvDataFrame
{
	typedef TwclBluetoothLeAdvDataFrame inherited;
	
private:
	System::Word FCompanyId;
	
public:
	__fastcall TwclBluetoothLeAdvManufacturerRawDataFrame(const System::Word CompanyId, const Wclbluetooth::TwclBluetoothLeAdvertisementFrameRawData Data);
	__property System::Word CompanyId = {read=FCompanyId, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothLeAdvManufacturerRawDataFrame(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLeAdvRawDataFrame : public TwclBluetoothLeAdvDataFrame
{
	typedef TwclBluetoothLeAdvDataFrame inherited;
	
private:
	System::Byte FDataType;
	
public:
	__fastcall TwclBluetoothLeAdvRawDataFrame(const System::Byte DataType, const Wclbluetooth::TwclBluetoothLeAdvertisementFrameRawData Data);
	__property System::Byte DataType = {read=FDataType, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothLeAdvRawDataFrame(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLeAdvInformationFrame : public TwclBluetoothLeAdvFrame
{
	typedef TwclBluetoothLeAdvFrame inherited;
	
private:
	System::UnicodeString FName;
	Wclbluetooth::TwclBluetoothLeAdvertisementType FPacketType;
	Wclbluetooth::TwclBluetoothLeAdvertisementFlags FFlags;
	
public:
	__fastcall TwclBluetoothLeAdvInformationFrame(const System::UnicodeString Name, const Wclbluetooth::TwclBluetoothLeAdvertisementType PacketType, const Wclbluetooth::TwclBluetoothLeAdvertisementFlags Flags);
	__property System::UnicodeString Name = {read=FName};
	__property Wclbluetooth::TwclBluetoothLeAdvertisementType PacketType = {read=FPacketType, nodefault};
	__property Wclbluetooth::TwclBluetoothLeAdvertisementFlags Flags = {read=FFlags, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothLeAdvInformationFrame(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLeAdvUuidFrame : public TwclBluetoothLeAdvFrame
{
	typedef TwclBluetoothLeAdvFrame inherited;
	
private:
	GUID FUuid;
	
public:
	__fastcall TwclBluetoothLeAdvUuidFrame(const GUID &Uuid);
	__property GUID Uuid = {read=FUuid};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothLeAdvUuidFrame(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLeAdvExtInformationFrame : public TwclBluetoothLeAdvFrame
{
	typedef TwclBluetoothLeAdvFrame inherited;
	
private:
	Wclbluetooth::TwclBluetoothAddressType FAddressType;
	Wclbluetooth::SByte FTxPower;
	Wclbluetooth::TwclBluetoothLeExtendedFrameFlags FFlags;
	Wclbluetooth::TwclBluetoothLeAdvertisementPhy FPrimaryPhy;
	Wclbluetooth::TwclBluetoothLeAdvertisementPhy FSecondaryPhy;
	
public:
	__fastcall TwclBluetoothLeAdvExtInformationFrame(const Wclbluetooth::TwclBluetoothAddressType AddressType, const Wclbluetooth::SByte TxPower, const Wclbluetooth::TwclBluetoothLeExtendedFrameFlags Flags, const Wclbluetooth::TwclBluetoothLeAdvertisementPhy PrimaryPhy, const Wclbluetooth::TwclBluetoothLeAdvertisementPhy SecondaryPhy);
	__property Wclbluetooth::TwclBluetoothAddressType AddressType = {read=FAddressType, nodefault};
	__property Wclbluetooth::SByte TxPower = {read=FTxPower, nodefault};
	__property Wclbluetooth::TwclBluetoothLeExtendedFrameFlags Flags = {read=FFlags, nodefault};
	__property Wclbluetooth::TwclBluetoothLeAdvertisementPhy PrimaryPhy = {read=FPrimaryPhy, nodefault};
	__property Wclbluetooth::TwclBluetoothLeAdvertisementPhy SecondaryPhy = {read=FSecondaryPhy, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothLeAdvExtInformationFrame(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLeAdvService16DataFrame : public TwclBluetoothLeAdvDataFrame
{
	typedef TwclBluetoothLeAdvDataFrame inherited;
	
private:
	System::Word FUuid;
	
public:
	__fastcall TwclBluetoothLeAdvService16DataFrame(const System::Word Uuid, const Wclbluetooth::TwclBluetoothLeAdvertisementFrameRawData Data);
	__property System::Word Uuid = {read=FUuid, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothLeAdvService16DataFrame(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLeAdvService32DataFrame : public TwclBluetoothLeAdvDataFrame
{
	typedef TwclBluetoothLeAdvDataFrame inherited;
	
private:
	unsigned FUuid;
	
public:
	__fastcall TwclBluetoothLeAdvService32DataFrame(const unsigned Uuid, const Wclbluetooth::TwclBluetoothLeAdvertisementFrameRawData Data);
	__property unsigned Uuid = {read=FUuid, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothLeAdvService32DataFrame(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLeAdvService128DataFrame : public TwclBluetoothLeAdvDataFrame
{
	typedef TwclBluetoothLeAdvDataFrame inherited;
	
private:
	GUID FUuid;
	
public:
	__fastcall TwclBluetoothLeAdvService128DataFrame(const GUID &Uuid, const Wclbluetooth::TwclBluetoothLeAdvertisementFrameRawData Data);
	__property GUID Uuid = {read=FUuid};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothLeAdvService128DataFrame(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLeAdvServiceSol16Frame : public TwclBluetoothLeAdvFrame
{
	typedef TwclBluetoothLeAdvFrame inherited;
	
private:
	System::Word FUuid;
	
public:
	__fastcall TwclBluetoothLeAdvServiceSol16Frame(const System::Word Uuid);
	__property System::Word Uuid = {read=FUuid, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothLeAdvServiceSol16Frame(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLeAdvServiceSol32Frame : public TwclBluetoothLeAdvFrame
{
	typedef TwclBluetoothLeAdvFrame inherited;
	
private:
	unsigned FUuid;
	
public:
	__fastcall TwclBluetoothLeAdvServiceSol32Frame(const unsigned Uuid);
	__property unsigned Uuid = {read=FUuid, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothLeAdvServiceSol32Frame(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLeAdvServiceSol128Frame : public TwclBluetoothLeAdvFrame
{
	typedef TwclBluetoothLeAdvFrame inherited;
	
private:
	GUID FUuid;
	
public:
	__fastcall TwclBluetoothLeAdvServiceSol128Frame(const GUID &Uuid);
	__property GUID Uuid = {read=FUuid};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothLeAdvServiceSol128Frame(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLeAdvRawFrame : public TwclBluetoothLeAdvDataFrame
{
	typedef TwclBluetoothLeAdvDataFrame inherited;
	
public:
	__fastcall TwclBluetoothLeAdvRawFrame(const Wclbluetooth::TwclBluetoothLeAdvertisementFrameRawData Data);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothLeAdvRawFrame(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLeAdvTxPowerFrame : public TwclBluetoothLeAdvFrame
{
	typedef TwclBluetoothLeAdvFrame inherited;
	
private:
	Wclbluetooth::SByte FTxPower;
	
public:
	__fastcall TwclBluetoothLeAdvTxPowerFrame(const Wclbluetooth::SByte TxPower);
	__property Wclbluetooth::SByte TxPower = {read=FTxPower, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothLeAdvTxPowerFrame(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLeAdvAppearanceFrame : public TwclBluetoothLeAdvFrame
{
	typedef TwclBluetoothLeAdvFrame inherited;
	
private:
	System::Word FAppearance;
	
public:
	__fastcall TwclBluetoothLeAdvAppearanceFrame(const System::Word Appearance);
	__property System::Word Appearance = {read=FAppearance, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothLeAdvAppearanceFrame(void) { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TwclBluetoothLeAdvertisementMessage : public TwclBluetoothRemoteDeviceMessage
{
	typedef TwclBluetoothRemoteDeviceMessage inherited;
	
private:
	System::Classes::TList* FFrames;
	__int64 FTimestamp;
	Wclbluetooth::SByte FRssi;
	
public:
	__fastcall TwclBluetoothLeAdvertisementMessage(const Wclbluetooth::TwclBluetoothApi Api, const __int64 Address, const __int64 Timestamp, const Wclbluetooth::SByte Rssi);
	__fastcall virtual ~TwclBluetoothLeAdvertisementMessage(void);
	void __fastcall AddFrame(TwclBluetoothLeAdvFrame* const Frame);
	__property System::Classes::TList* Frames = {read=FFrames};
	__property __int64 Timestamp = {read=FTimestamp};
	__property Wclbluetooth::SByte Rssi = {read=FRssi, nodefault};
};


class PASCALIMPLEMENTATION TwclBluetoothGattServerMessage : public TwclBluetoothRemoteDeviceMessage
{
	typedef TwclBluetoothRemoteDeviceMessage inherited;
	
public:
	__fastcall TwclBluetoothGattServerMessage(const System::Byte Id, const Wclbluetooth::TwclBluetoothApi Api, const __int64 Address);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothGattServerMessage(void) { }
	
};


class PASCALIMPLEMENTATION TwclBluetoothGattServerParamsMessage : public TwclBluetoothGattServerMessage
{
	typedef TwclBluetoothGattServerMessage inherited;
	
private:
	Wclbluetooth::TwclBluetoothGattServerClientParams* FParams;
	
public:
	__fastcall TwclBluetoothGattServerParamsMessage(const System::Byte Id, const Wclbluetooth::TwclBluetoothApi Api, const __int64 Address, Wclbluetooth::TwclBluetoothGattServerClientParams* const Params);
	__fastcall virtual ~TwclBluetoothGattServerParamsMessage(void);
	__property Wclbluetooth::TwclBluetoothGattServerClientParams* Params = {read=FParams, write=FParams};
};


class PASCALIMPLEMENTATION TwclBluetoothGattServerCharMessage : public TwclBluetoothGattServerParamsMessage
{
	typedef TwclBluetoothGattServerParamsMessage inherited;
	
private:
	Wclbluetooth::TwclGattLocalCharacteristic* FCharacteristic;
	
public:
	__fastcall TwclBluetoothGattServerCharMessage(const System::Byte Id, const Wclbluetooth::TwclBluetoothApi Api, const __int64 Address, Wclbluetooth::TwclBluetoothGattServerClientParams* const Params, Wclbluetooth::TwclGattLocalCharacteristic* const Characteristic);
	__property Wclbluetooth::TwclGattLocalCharacteristic* Characteristic = {read=FCharacteristic};
public:
	/* TwclBluetoothGattServerParamsMessage.Destroy */ inline __fastcall virtual ~TwclBluetoothGattServerCharMessage(void) { }
	
};


class PASCALIMPLEMENTATION TwclBluetoothGattServerCharSyncMessage : public TwclBluetoothGattServerCharMessage
{
	typedef TwclBluetoothGattServerCharMessage inherited;
	
private:
	Wclsync::TwclEvent* FEvent;
	
public:
	__fastcall TwclBluetoothGattServerCharSyncMessage(const System::Byte Id, const Wclbluetooth::TwclBluetoothApi Api, const __int64 Address, Wclbluetooth::TwclBluetoothGattServerClientParams* const Params, Wclbluetooth::TwclGattLocalCharacteristic* const Characteristic, Wclsync::TwclEvent* const Event);
	__fastcall virtual ~TwclBluetoothGattServerCharSyncMessage(void);
};


class PASCALIMPLEMENTATION TwclBluetoothLeGattServerWriteMessage : public TwclBluetoothGattServerCharSyncMessage
{
	typedef TwclBluetoothGattServerCharSyncMessage inherited;
	
private:
	Wclbluetooth::TwclGattLocalCharacteristicWriteRequest* FRequest;
	
public:
	__fastcall TwclBluetoothLeGattServerWriteMessage(const Wclbluetooth::TwclBluetoothApi Api, const __int64 Address, Wclbluetooth::TwclBluetoothGattServerClientParams* const Params, Wclbluetooth::TwclGattLocalCharacteristic* const Characteristic, Wclsync::TwclEvent* const Event, Wclbluetooth::TwclGattLocalCharacteristicWriteRequest* const Request);
	__fastcall virtual ~TwclBluetoothLeGattServerWriteMessage(void);
	__property Wclbluetooth::TwclGattLocalCharacteristicWriteRequest* Request = {read=FRequest};
};


class PASCALIMPLEMENTATION TwclBluetoothLeGattServerReadMessage : public TwclBluetoothGattServerCharSyncMessage
{
	typedef TwclBluetoothGattServerCharSyncMessage inherited;
	
private:
	Wclbluetooth::TwclGattLocalCharacteristicReadRequest* FRequest;
	
public:
	__fastcall TwclBluetoothLeGattServerReadMessage(const Wclbluetooth::TwclBluetoothApi Api, const __int64 Address, Wclbluetooth::TwclBluetoothGattServerClientParams* const Params, Wclbluetooth::TwclGattLocalCharacteristic* const Characteristic, Wclsync::TwclEvent* const Event, Wclbluetooth::TwclGattLocalCharacteristicReadRequest* const Request);
	__fastcall virtual ~TwclBluetoothLeGattServerReadMessage(void);
	__property Wclbluetooth::TwclGattLocalCharacteristicReadRequest* Request = {read=FRequest};
};


class PASCALIMPLEMENTATION TwclBluetoothLeGattServerClientSubscribedMessage : public TwclBluetoothGattServerCharMessage
{
	typedef TwclBluetoothGattServerCharMessage inherited;
	
public:
	__fastcall TwclBluetoothLeGattServerClientSubscribedMessage(const Wclbluetooth::TwclBluetoothApi Api, const __int64 Address, Wclbluetooth::TwclBluetoothGattServerClientParams* const Params, Wclbluetooth::TwclGattLocalCharacteristic* const Characteristic);
public:
	/* TwclBluetoothGattServerParamsMessage.Destroy */ inline __fastcall virtual ~TwclBluetoothLeGattServerClientSubscribedMessage(void) { }
	
};


class PASCALIMPLEMENTATION TwclBluetoothLeGattServerClientUnsubscribedMessage : public TwclBluetoothGattServerCharMessage
{
	typedef TwclBluetoothGattServerCharMessage inherited;
	
public:
	__fastcall TwclBluetoothLeGattServerClientUnsubscribedMessage(const Wclbluetooth::TwclBluetoothApi Api, const __int64 Address, Wclbluetooth::TwclGattLocalCharacteristic* const Characteristic);
public:
	/* TwclBluetoothGattServerParamsMessage.Destroy */ inline __fastcall virtual ~TwclBluetoothLeGattServerClientUnsubscribedMessage(void) { }
	
};


class PASCALIMPLEMENTATION TwclBluetoothLeGattServerClientConnectedMessage : public TwclBluetoothGattServerParamsMessage
{
	typedef TwclBluetoothGattServerParamsMessage inherited;
	
public:
	__fastcall TwclBluetoothLeGattServerClientConnectedMessage(const Wclbluetooth::TwclBluetoothApi Api, const __int64 Address, Wclbluetooth::TwclBluetoothGattServerClientParams* const Params);
public:
	/* TwclBluetoothGattServerParamsMessage.Destroy */ inline __fastcall virtual ~TwclBluetoothLeGattServerClientConnectedMessage(void) { }
	
};


class PASCALIMPLEMENTATION TwclBluetoothLeGattServerClientDisconnectedMessage : public TwclBluetoothGattServerMessage
{
	typedef TwclBluetoothGattServerMessage inherited;
	
public:
	__fastcall TwclBluetoothLeGattServerClientDisconnectedMessage(const Wclbluetooth::TwclBluetoothApi Api, const __int64 Address);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothLeGattServerClientDisconnectedMessage(void) { }
	
};


class PASCALIMPLEMENTATION TwclBluetoothLeGattServerMaxNotifySizeChangedMessage : public TwclBluetoothGattServerMessage
{
	typedef TwclBluetoothGattServerMessage inherited;
	
public:
	__fastcall TwclBluetoothLeGattServerMaxNotifySizeChangedMessage(const Wclbluetooth::TwclBluetoothApi Api, const __int64 Address);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothLeGattServerMaxNotifySizeChangedMessage(void) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothMsBlePairParams : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Wclsync::TwclEvent* FEvent;
	int FRefCount;
	bool FProcessed;
	
public:
	__fastcall virtual TwclBluetoothMsBlePairParams(Wclsync::TwclEvent* const Event);
	__fastcall virtual ~TwclBluetoothMsBlePairParams(void);
	void __fastcall AddRef(void);
	void __fastcall Release(void);
	void __fastcall Signal(void);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothMsBlePinRequestParams : public TwclBluetoothMsBlePairParams
{
	typedef TwclBluetoothMsBlePairParams inherited;
	
private:
	System::UnicodeString FPin;
	
public:
	__fastcall virtual TwclBluetoothMsBlePinRequestParams(Wclsync::TwclEvent* const Event);
	__property System::UnicodeString Pin = {read=FPin, write=FPin};
public:
	/* TwclBluetoothMsBlePairParams.Destroy */ inline __fastcall virtual ~TwclBluetoothMsBlePinRequestParams(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothMsBleConfirmParams : public TwclBluetoothMsBlePairParams
{
	typedef TwclBluetoothMsBlePairParams inherited;
	
private:
	bool FConfirm;
	
public:
	__fastcall virtual TwclBluetoothMsBleConfirmParams(Wclsync::TwclEvent* const Event);
	__property bool Confirm = {read=FConfirm, write=FConfirm, nodefault};
public:
	/* TwclBluetoothMsBlePairParams.Destroy */ inline __fastcall virtual ~TwclBluetoothMsBleConfirmParams(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothMsBlePasskeyRequestParams : public TwclBluetoothMsBlePairParams
{
	typedef TwclBluetoothMsBlePairParams inherited;
	
private:
	unsigned FPasskey;
	
public:
	__fastcall virtual TwclBluetoothMsBlePasskeyRequestParams(Wclsync::TwclEvent* const Event);
	__property unsigned Passkey = {read=FPasskey, write=FPasskey, nodefault};
public:
	/* TwclBluetoothMsBlePairParams.Destroy */ inline __fastcall virtual ~TwclBluetoothMsBlePasskeyRequestParams(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothMsBleProtectionRequestParams : public TwclBluetoothMsBlePairParams
{
	typedef TwclBluetoothMsBlePairParams inherited;
	
private:
	Wclbluetooth::TwclBluetoothLeProtectionLevel FProtection;
	
public:
	__fastcall virtual TwclBluetoothMsBleProtectionRequestParams(Wclsync::TwclEvent* const Event);
	__property Wclbluetooth::TwclBluetoothLeProtectionLevel Protection = {read=FProtection, write=FProtection, nodefault};
public:
	/* TwclBluetoothMsBlePairParams.Destroy */ inline __fastcall virtual ~TwclBluetoothMsBleProtectionRequestParams(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothMsIoCapRequestParams : public TwclBluetoothMsBlePairParams
{
	typedef TwclBluetoothMsBlePairParams inherited;
	
private:
	Wclbluetooth::TwclBluetoothMitmProtection FMitm;
	Wclbluetooth::TwclBluetoothIoCapability FIoCap;
	bool FOobPresent;
	
public:
	__fastcall virtual TwclBluetoothMsIoCapRequestParams(Wclsync::TwclEvent* const Event);
	__property Wclbluetooth::TwclBluetoothMitmProtection Mitm = {read=FMitm, write=FMitm, nodefault};
	__property Wclbluetooth::TwclBluetoothIoCapability IoCap = {read=FIoCap, write=FIoCap, nodefault};
	__property bool OobPresent = {read=FOobPresent, write=FOobPresent, nodefault};
public:
	/* TwclBluetoothMsBlePairParams.Destroy */ inline __fastcall virtual ~TwclBluetoothMsIoCapRequestParams(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothMsOobDataRequestParams : public TwclBluetoothMsBlePairParams
{
	typedef TwclBluetoothMsBlePairParams inherited;
	
private:
	Wclbluetooth::TwclBluetoothOobData FOobData;
	
public:
	__fastcall virtual TwclBluetoothMsOobDataRequestParams(Wclsync::TwclEvent* const Event);
	__property Wclbluetooth::TwclBluetoothOobData OobData = {read=FOobData, write=FOobData};
public:
	/* TwclBluetoothMsBlePairParams.Destroy */ inline __fastcall virtual ~TwclBluetoothMsOobDataRequestParams(void) { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TwclBluetoothMsBlePairMessage : public TwclBluetoothRemoteDeviceMessage
{
	typedef TwclBluetoothRemoteDeviceMessage inherited;
	
private:
	TwclBluetoothMsBlePairParams* FParams;
	
protected:
	__property TwclBluetoothMsBlePairParams* Params = {read=FParams};
	
public:
	__fastcall TwclBluetoothMsBlePairMessage(const System::Byte Id, const __int64 Address, TwclBluetoothMsBlePairParams* const Params);
	__fastcall virtual ~TwclBluetoothMsBlePairMessage(void);
};


class PASCALIMPLEMENTATION TwclBluetoothMsBlePinRequestMessage : public TwclBluetoothMsBlePairMessage
{
	typedef TwclBluetoothMsBlePairMessage inherited;
	
public:
	__fastcall TwclBluetoothMsBlePinRequestMessage(const __int64 Address, TwclBluetoothMsBlePinRequestParams* const Params);
	void __fastcall SetPin(const System::UnicodeString Pin);
public:
	/* TwclBluetoothMsBlePairMessage.Destroy */ inline __fastcall virtual ~TwclBluetoothMsBlePinRequestMessage(void) { }
	
};


class PASCALIMPLEMENTATION TwclBluetoothMsBleNumericComparisonMessage : public TwclBluetoothMsBlePairMessage
{
	typedef TwclBluetoothMsBlePairMessage inherited;
	
private:
	unsigned FNumber;
	
public:
	__fastcall TwclBluetoothMsBleNumericComparisonMessage(const __int64 Address, const unsigned Number, TwclBluetoothMsBleConfirmParams* const Params);
	void __fastcall SetConfirm(const bool Value);
	__property unsigned Number = {read=FNumber, nodefault};
public:
	/* TwclBluetoothMsBlePairMessage.Destroy */ inline __fastcall virtual ~TwclBluetoothMsBleNumericComparisonMessage(void) { }
	
};


class PASCALIMPLEMENTATION TwclBluetoothMsBlePasskeyRequestMessage : public TwclBluetoothMsBlePairMessage
{
	typedef TwclBluetoothMsBlePairMessage inherited;
	
public:
	__fastcall TwclBluetoothMsBlePasskeyRequestMessage(const __int64 Address, TwclBluetoothMsBlePasskeyRequestParams* const Params);
	void __fastcall SetPasskey(const unsigned Passkey);
public:
	/* TwclBluetoothMsBlePairMessage.Destroy */ inline __fastcall virtual ~TwclBluetoothMsBlePasskeyRequestMessage(void) { }
	
};


class PASCALIMPLEMENTATION TwclBluetoothMsBleConfirmOnlyMessage : public TwclBluetoothMsBlePairMessage
{
	typedef TwclBluetoothMsBlePairMessage inherited;
	
public:
	__fastcall TwclBluetoothMsBleConfirmOnlyMessage(const __int64 Address, TwclBluetoothMsBleConfirmParams* const Params);
	void __fastcall SetConfirm(const bool Value);
public:
	/* TwclBluetoothMsBlePairMessage.Destroy */ inline __fastcall virtual ~TwclBluetoothMsBleConfirmOnlyMessage(void) { }
	
};


class PASCALIMPLEMENTATION TwclBluetoothMsBleProtectionRequestMessage : public TwclBluetoothMsBlePairMessage
{
	typedef TwclBluetoothMsBlePairMessage inherited;
	
public:
	__fastcall TwclBluetoothMsBleProtectionRequestMessage(const __int64 Address, TwclBluetoothMsBleProtectionRequestParams* const Params);
	void __fastcall SetProtection(const Wclbluetooth::TwclBluetoothLeProtectionLevel Value);
public:
	/* TwclBluetoothMsBlePairMessage.Destroy */ inline __fastcall virtual ~TwclBluetoothMsBleProtectionRequestMessage(void) { }
	
};


class PASCALIMPLEMENTATION TwclBluetoothMsIoCapRequestMessage : public TwclBluetoothMsBlePairMessage
{
	typedef TwclBluetoothMsBlePairMessage inherited;
	
public:
	__fastcall TwclBluetoothMsIoCapRequestMessage(const __int64 Address, TwclBluetoothMsIoCapRequestParams* const Params);
	void __fastcall SetIoCaps(const Wclbluetooth::TwclBluetoothMitmProtection Mitm, const Wclbluetooth::TwclBluetoothIoCapability Cap, const bool Oob);
public:
	/* TwclBluetoothMsBlePairMessage.Destroy */ inline __fastcall virtual ~TwclBluetoothMsIoCapRequestMessage(void) { }
	
};


class PASCALIMPLEMENTATION TwclBluetoothMsOobDataRequestMessage : public TwclBluetoothMsBlePairMessage
{
	typedef TwclBluetoothMsBlePairMessage inherited;
	
public:
	__fastcall TwclBluetoothMsOobDataRequestMessage(const __int64 Address, TwclBluetoothMsOobDataRequestParams* const Params);
	void __fastcall SetOobData(const Wclbluetooth::TwclBluetoothOobData &Value);
public:
	/* TwclBluetoothMsBlePairMessage.Destroy */ inline __fastcall virtual ~TwclBluetoothMsOobDataRequestMessage(void) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothBled112Message : public TwclBluetoothMessage
{
	typedef TwclBluetoothMessage inherited;
	
private:
	System::UnicodeString FPort;
	
public:
	__fastcall TwclBluetoothBled112Message(const System::Byte Id, const System::UnicodeString Port);
	__property System::UnicodeString Port = {read=FPort};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothBled112Message(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothBled112DisconnectMessage : public TwclBluetoothBled112Message
{
	typedef TwclBluetoothBled112Message inherited;
	
private:
	int FReason;
	
public:
	__fastcall TwclBluetoothBled112DisconnectMessage(const System::UnicodeString Port, const int Reason);
	__property int Reason = {read=FReason, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothBled112DisconnectMessage(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclWiiRemoteMessage : public Wclmessaging::TwclWiiRemoteCategoryMessage
{
	typedef Wclmessaging::TwclWiiRemoteCategoryMessage inherited;
	
public:
	__fastcall TwclWiiRemoteMessage(const System::Byte Id);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclWiiRemoteMessage(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclWiiRemoteButtonsChangedMessage : public TwclWiiRemoteMessage
{
	typedef TwclWiiRemoteMessage inherited;
	
private:
	Wclbluetooth::TwclWiiRemoteButtons FButtons;
	
public:
	__fastcall TwclWiiRemoteButtonsChangedMessage(const Wclbluetooth::TwclWiiRemoteButtons &Buttons);
	__property Wclbluetooth::TwclWiiRemoteButtons Buttons = {read=FButtons};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclWiiRemoteButtonsChangedMessage(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclWiiRemoteAccelChangedMessage : public TwclWiiRemoteMessage
{
	typedef TwclWiiRemoteMessage inherited;
	
private:
	Wclbluetooth::TwclWiiRemoteAccel FAccel;
	
public:
	__fastcall TwclWiiRemoteAccelChangedMessage(const Wclbluetooth::TwclWiiRemoteAccel &Accel);
	__property Wclbluetooth::TwclWiiRemoteAccel Accel = {read=FAccel};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclWiiRemoteAccelChangedMessage(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclWiiRemoteIrChangedMessage : public TwclWiiRemoteMessage
{
	typedef TwclWiiRemoteMessage inherited;
	
private:
	Wclbluetooth::TwclWiiRemoteIrSensors FIr;
	
public:
	__fastcall TwclWiiRemoteIrChangedMessage(const Wclbluetooth::TwclWiiRemoteIrSensors &Ir);
	__property Wclbluetooth::TwclWiiRemoteIrSensors Ir = {read=FIr};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclWiiRemoteIrChangedMessage(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclWiiRemoteNunchukChangedMessage : public TwclWiiRemoteMessage
{
	typedef TwclWiiRemoteMessage inherited;
	
private:
	Wclbluetooth::TwclWiiRemoteNunchuk FNunchuk;
	
public:
	__fastcall TwclWiiRemoteNunchukChangedMessage(const Wclbluetooth::TwclWiiRemoteNunchuk &Nunchuk);
	__property Wclbluetooth::TwclWiiRemoteNunchuk Nunchuk = {read=FNunchuk};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclWiiRemoteNunchukChangedMessage(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclWiiRemoteClassicControllerChangedMessage : public TwclWiiRemoteMessage
{
	typedef TwclWiiRemoteMessage inherited;
	
private:
	Wclbluetooth::TwclWiiRemoteClassicController FController;
	
public:
	__fastcall TwclWiiRemoteClassicControllerChangedMessage(const Wclbluetooth::TwclWiiRemoteClassicController &Controller);
	__property Wclbluetooth::TwclWiiRemoteClassicController Controller = {read=FController};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclWiiRemoteClassicControllerChangedMessage(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclWiiRemoteGuitarChangedMessage : public TwclWiiRemoteMessage
{
	typedef TwclWiiRemoteMessage inherited;
	
private:
	Wclbluetooth::TwclWiiRemoteGuitar FGuitar;
	
public:
	__fastcall TwclWiiRemoteGuitarChangedMessage(const Wclbluetooth::TwclWiiRemoteGuitar &Guitar);
	__property Wclbluetooth::TwclWiiRemoteGuitar Guitar = {read=FGuitar};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclWiiRemoteGuitarChangedMessage(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclWiiRemoteDrumsChangedMessage : public TwclWiiRemoteMessage
{
	typedef TwclWiiRemoteMessage inherited;
	
private:
	Wclbluetooth::TwclWiiRemoteDrums FDrums;
	
public:
	__fastcall TwclWiiRemoteDrumsChangedMessage(const Wclbluetooth::TwclWiiRemoteDrums &Drums);
	__property Wclbluetooth::TwclWiiRemoteDrums Drums = {read=FDrums};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclWiiRemoteDrumsChangedMessage(void) { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TwclWiiRemoteBalanceBoardChangedMessage : public TwclWiiRemoteMessage
{
	typedef TwclWiiRemoteMessage inherited;
	
private:
	Wclbluetooth::TwclWiiRemoteBalanceBoard FBoard;
	
public:
	__fastcall TwclWiiRemoteBalanceBoardChangedMessage(const Wclbluetooth::TwclWiiRemoteBalanceBoard &Board);
	__property Wclbluetooth::TwclWiiRemoteBalanceBoard Board = {read=FBoard};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclWiiRemoteBalanceBoardChangedMessage(void) { }
	
};


class PASCALIMPLEMENTATION TwclWiiRemoteStatusChangedMessage : public TwclWiiRemoteMessage
{
	typedef TwclWiiRemoteMessage inherited;
	
private:
	double FBatt;
	Wclbluetooth::TwclWiiRemoteLeds FLeds;
	
public:
	__fastcall TwclWiiRemoteStatusChangedMessage(const double Batt, const Wclbluetooth::TwclWiiRemoteLeds Leds);
	__property double Batt = {read=FBatt};
	__property Wclbluetooth::TwclWiiRemoteLeds Leds = {read=FLeds};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclWiiRemoteStatusChangedMessage(void) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclWiiRemoteExtensionStateChangedMessage : public TwclWiiRemoteMessage
{
	typedef TwclWiiRemoteMessage inherited;
	
private:
	bool FAttached;
	
public:
	__fastcall TwclWiiRemoteExtensionStateChangedMessage(const bool Attached);
	__property bool Attached = {read=FAttached, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclWiiRemoteExtensionStateChangedMessage(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLeSnifferMessage : public Wclmessaging::TwclBluetoothCategoryMessage
{
	typedef Wclmessaging::TwclBluetoothCategoryMessage inherited;
	
public:
	__fastcall TwclBluetoothLeSnifferMessage(const System::Byte Id);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothLeSnifferMessage(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLeSnifferDeviceDisconnectedMessage : public TwclBluetoothLeSnifferMessage
{
	typedef TwclBluetoothLeSnifferMessage inherited;
	
public:
	__fastcall TwclBluetoothLeSnifferDeviceDisconnectedMessage(void);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothLeSnifferDeviceDisconnectedMessage(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLeSnifferRawPacketReceivedMessage : public TwclBluetoothLeSnifferMessage
{
	typedef TwclBluetoothLeSnifferMessage inherited;
	
private:
	Wclbluetooth::TwclBluetoothLePacketHeader FHeader;
	void *FPayload;
	System::Word FSize;
	
public:
	__fastcall TwclBluetoothLeSnifferRawPacketReceivedMessage(const Wclbluetooth::TwclBluetoothLePacketHeader &Header, const void * Payload, const System::Word Size);
	__fastcall virtual ~TwclBluetoothLeSnifferRawPacketReceivedMessage(void);
	__property Wclbluetooth::TwclBluetoothLePacketHeader Header = {read=FHeader};
	__property void * Payload = {read=FPayload};
	__property System::Word Size = {read=FSize, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothLeSnifferAdvertisingPacketReceivedMessage : public TwclBluetoothLeSnifferMessage
{
	typedef TwclBluetoothLeSnifferMessage inherited;
	
private:
	Wclbluetooth::TwclBluetoothLeAdvertisingPduHeader FPduHeader;
	
public:
	__fastcall TwclBluetoothLeSnifferAdvertisingPacketReceivedMessage(const System::Byte Id, const Wclbluetooth::TwclBluetoothLeAdvertisingPduHeader &PduHeader);
	__property Wclbluetooth::TwclBluetoothLeAdvertisingPduHeader PduHeader = {read=FPduHeader};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothLeSnifferAdvertisingPacketReceivedMessage(void) { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TwclBluetoothLeSnifferAdvertisingAddressMessage : public TwclBluetoothLeSnifferAdvertisingPacketReceivedMessage
{
	typedef TwclBluetoothLeSnifferAdvertisingPacketReceivedMessage inherited;
	
private:
	__int64 FAddress;
	
public:
	__fastcall TwclBluetoothLeSnifferAdvertisingAddressMessage(const System::Byte Id, const Wclbluetooth::TwclBluetoothLeAdvertisingPduHeader &PduHeader, const __int64 Address);
	__property __int64 Address = {read=FAddress};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothLeSnifferAdvertisingAddressMessage(void) { }
	
};


class PASCALIMPLEMENTATION TwclBluetoothLeSnifferAdvertisingTwoAddressMessage : public TwclBluetoothLeSnifferAdvertisingAddressMessage
{
	typedef TwclBluetoothLeSnifferAdvertisingAddressMessage inherited;
	
private:
	__int64 FTargetAddress;
	
public:
	__fastcall TwclBluetoothLeSnifferAdvertisingTwoAddressMessage(const System::Byte Id, const Wclbluetooth::TwclBluetoothLeAdvertisingPduHeader &PduHeader, const __int64 Address, const __int64 TargetAddress);
	__property __int64 TargetAddress = {read=FTargetAddress};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothLeSnifferAdvertisingTwoAddressMessage(void) { }
	
};


class PASCALIMPLEMENTATION TwclBluetoothLeSnifferAdvertisingDataMessage : public TwclBluetoothLeSnifferAdvertisingAddressMessage
{
	typedef TwclBluetoothLeSnifferAdvertisingAddressMessage inherited;
	
private:
	void *FData;
	System::Byte FLen;
	
public:
	__fastcall TwclBluetoothLeSnifferAdvertisingDataMessage(const System::Byte Id, const Wclbluetooth::TwclBluetoothLeAdvertisingPduHeader &PduHeader, const __int64 Address, const void * Data, const System::Byte Len);
	__fastcall virtual ~TwclBluetoothLeSnifferAdvertisingDataMessage(void);
	__property void * Data = {read=FData};
	__property System::Byte Len = {read=FLen, nodefault};
};


class PASCALIMPLEMENTATION TwclBluetoothLeSnifferAdvertisingConnectIndReceivedMessage : public TwclBluetoothLeSnifferAdvertisingTwoAddressMessage
{
	typedef TwclBluetoothLeSnifferAdvertisingTwoAddressMessage inherited;
	
private:
	Wclbluetooth::TwclBleSnifferLlData FLlData;
	
public:
	__fastcall TwclBluetoothLeSnifferAdvertisingConnectIndReceivedMessage(const Wclbluetooth::TwclBluetoothLeAdvertisingPduHeader &PduHeader, const __int64 Address, const __int64 TargetAddress, const Wclbluetooth::TwclBleSnifferLlData &LlData);
	__property Wclbluetooth::TwclBleSnifferLlData LlData = {read=FLlData};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothLeSnifferAdvertisingConnectIndReceivedMessage(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 WCL_MSG_ID_BLUETOOTH_BASE = System::Int8(0x0);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_STATUS_CHANGED = System::Int8(0x1);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_RADIO_UNAVAILABLE = System::Int8(0x2);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_DISCOVERING_BASE = System::Int8(0xa);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_DISCOVERING_STARTED = System::Int8(0xa);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_DISCOVERING_COMPLETED = System::Int8(0xb);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_DEVICE_FOUND = System::Int8(0xc);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_AUTH_BASE = System::Int8(0x14);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_AUTH_IO_CAP_REQUEST = System::Int8(0x14);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_AUTH_PROTECTION_REQUEST = System::Int8(0x15);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_AUTH_PIN_REQUEST = System::Int8(0x16);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_AUTH_NUMERIC_COMPARISON = System::Int8(0x17);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_AUTH_PASSKEY_REQUEST = System::Int8(0x18);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_AUTH_PASSKEY_NOTIFICATION = System::Int8(0x19);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_AUTH_CONFIRM_ONLY = System::Int8(0x1a);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_AUTH_OOB_DATA_REQUEST = System::Int8(0x1b);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_AUTH_COMPLETED = System::Int8(0x1c);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_LE_GATT_CLIENT_BASE = System::Int8(0x1e);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_LE_CHARACTERISTIC_CHANGE = System::Int8(0x1e);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_LE_DEVICE_DISCONNECTED = System::Int8(0x1f);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_LE_CONNECTION_PARAMS_CHANGED = System::Int8(0x20);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_LE_MAX_PDU_SIZE_CHANGED = System::Int8(0x21);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_LE_CONNECTION_PHY_CHANGED = System::Int8(0x22);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_LE_ADVERTISER_BASE = System::Int8(0x28);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_LE_WATCHER_BASE = System::Int8(0x32);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_LE_WATCHER_ADVERTISEMENT = System::Int8(0x32);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_LE_GATT_SERVER_BASE = System::Int8(0x3c);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_LE_GATT_SERVER_WRITE = System::Int8(0x3c);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_LE_GATT_SERVER_READ = System::Int8(0x3d);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_LE_GATT_SERVER_CLIENT_SUBSCRIBED = System::Int8(0x3e);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_LE_GATT_SERVER_CLIENT_UNSUBSCRIBED = System::Int8(0x3f);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_LE_GATT_SERVER_CLIENT_CONNECTED = System::Int8(0x40);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_LE_GATT_SERVER_CLIENT_DISCONNECTED = System::Int8(0x41);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_LE_GATT_SERVER_NOTIFY_SIZE_CHANGED = System::Int8(0x42);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_MS_BASE = System::Int8(0x46);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_MS_BLE_AUTH_PIN_REQUEST = System::Int8(0x46);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_MS_BLE_AUTH_NUMERIC_COMPARISON = System::Int8(0x47);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_MS_BLE_AUTH_PASSKEY_REQUEST = System::Int8(0x48);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_MS_BLE_AUTH_CONFIRM_ONLY = System::Int8(0x49);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_MS_AUTH_PROTECTION_REQUEST = System::Int8(0x4a);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_MS_AUTH_IO_CAP_REQUEST = System::Int8(0x4b);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_MS_AUTH_OOB_DATA = System::Int8(0x4c);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_BLED112_BASE = System::Int8(0x50);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_BLED112_DISCONNECT = System::Int8(0x50);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_LE_SNIFFER_BASE = System::Int8(0x5a);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_LE_SNIFFER_DEVICE_DISCONNECTED = System::Int8(0x5a);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_LE_SNIFFER_RAW_PACKET_RECEIVED = System::Int8(0x5b);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_LE_SNIFFER_ADV_IND_RECEIVED = System::Int8(0x5c);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_LE_SNIFFER_ADV_DIRECT_IND_RECEIVED = System::Int8(0x5d);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_LE_SNIFFER_ADV_NON_CONN_IND_RECEIVED = System::Int8(0x5e);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_LE_SNIFFER_ADV_SCAN_IND_RECEIVED = System::Int8(0x5f);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_LE_SNIFFER_SCAN_REQ_RECEIVED = System::Int8(0x60);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_LE_SNIFFER_SCAN_RSP_RECEIVED = System::Int8(0x61);
static const System::Int8 WCL_MSG_ID_BLUETOOTH_LE_SNIFFER_CONNECT_IND_RECEIVED = System::Int8(0x62);
static const System::Int8 WCL_BLUETOOTH_LE_ADV_MANUFACTURER_RAW_FRAME = System::Int8(0x0);
static const System::Int8 WCL_BLUETOOTH_LE_ADV_RAW_DATA_FRAME = System::Int8(0x1);
static const System::Int8 WCL_BLUETOOTH_LE_ADV_INFORMATION_FRAME = System::Int8(0x2);
static const System::Int8 WCL_BLUETOOTH_LE_ADV_UUID_FRAME = System::Int8(0x3);
static const System::Int8 WCL_BLUETOOTH_LE_ADV_EXT_INFORMATION_FRAME = System::Int8(0x4);
static const System::Int8 WCL_BLUETOOTH_LE_ADV_SERVICE_16_DATA_FRAME = System::Int8(0x5);
static const System::Int8 WCL_BLUETOOTH_LE_ADV_SERVICE_32_DATA_FRAME = System::Int8(0x6);
static const System::Int8 WCL_BLUETOOTH_LE_ADV_SERVICE_128_DATA_FRAME = System::Int8(0x7);
static const System::Int8 WCL_BLUETOOTH_LE_ADV_SERVICE_SOL_16_FRAME = System::Int8(0x8);
static const System::Int8 WCL_BLUETOOTH_LE_ADV_SERVICE_SOL_32_FRAME = System::Int8(0x9);
static const System::Int8 WCL_BLUETOOTH_LE_ADV_SERVICE_SOL_128_FRAME = System::Int8(0xa);
static const System::Int8 WCL_BLUETOOTH_LE_ADV_RAW_FRAME = System::Int8(0xb);
static const System::Int8 WCL_BLUETOOTH_LE_ADV_TX_POWER_FRAME = System::Int8(0xc);
static const System::Int8 WCL_BLUETOOTH_LE_ADV_APPEARANCE_FRAME = System::Int8(0xd);
static const System::Int8 WCL_MSG_ID_WII_BASE = System::Int8(0x0);
static const System::Int8 WCL_MSG_ID_WII_BUTTONS_CHANGED = System::Int8(0x1);
static const System::Int8 WCL_MSG_ID_WII_ACCEL_CHANGED = System::Int8(0x2);
static const System::Int8 WCL_MSG_ID_WII_IR_CHANGED = System::Int8(0x3);
static const System::Int8 WCL_MSG_ID_WII_NUNCHUK_CHANGED = System::Int8(0x4);
static const System::Int8 WCL_MSG_ID_WII_CLASSIC_CONTROLLER_CHANGED = System::Int8(0x5);
static const System::Int8 WCL_MSG_ID_WII_GUITAR_CHANGED = System::Int8(0x6);
static const System::Int8 WCL_MSG_ID_WII_DRUMS_CHANGED = System::Int8(0x7);
static const System::Int8 WCL_MSG_ID_WII_BALANCE_BOARD_CHANGED = System::Int8(0x8);
static const System::Int8 WCL_MSG_ID_WII_STATUS_CHANGED = System::Int8(0x9);
static const System::Int8 WCL_MSG_ID_WII_EXTENSION_STATE_CHANGED = System::Int8(0xa);
}	/* namespace Wclbluetoothmessages */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WCLBLUETOOTHMESSAGES)
using namespace Wclbluetoothmessages;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WclbluetoothmessagesHPP
