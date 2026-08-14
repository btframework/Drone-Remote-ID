// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wclWlan.pas' rev: 30.00 (Windows)

#ifndef WclwlanHPP
#define WclwlanHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <wclWinAPI.hpp>

//-- user supplied -----------------------------------------------------------

namespace Wclwlan
{
//-- forward type declarations -----------------------------------------------
struct DOT11_SSID;
struct DOT11_AUTH_CIPHER_PAIR;
struct DOT11_OI;
struct DOT11_ACCESSNETWORKOPTIONS;
struct DOT11_VENUEINFO;
struct WLAN_PROFILE_INFO;
struct DOT11_NETWORK;
struct WLAN_RAW_DATA;
struct TDataListRec;
struct WLAN_RAW_DATA_LIST;
struct WCL_WLAN_RAW_DATA_LIST;
struct WLAN_RATE_SET;
struct WLAN_AVAILABLE_NETWORK;
struct WLAN_AVAILABLE_NETWORK_V2;
struct WLAN_BSS_ENTRY;
struct WLAN_BSS_LIST;
struct WLAN_INTERFACE_INFO;
struct WLAN_ASSOCIATION_ATTRIBUTES;
struct WLAN_SECURITY_ATTRIBUTES;
struct WLAN_CONNECTION_ATTRIBUTES;
struct WLAN_PHY_RADIO_STATE;
struct WLAN_RADIO_STATE;
struct WLAN_INTERFACE_CAPABILITY;
struct WLAN_AUTH_CIPHER_PAIR_LIST;
struct WLAN_COUNTRY_OR_REGION_STRING_LIST;
struct WLAN_PROFILE_INFO_LIST;
struct WLAN_AVAILABLE_NETWORK_LIST;
struct WLAN_AVAILABLE_NETWORK_LIST_V2;
struct WLAN_INTERFACE_INFO_LIST;
struct DOT11_NETWORK_LIST;
struct NDIS_OBJECT_HEADER;
struct DOT11_BSSID_LIST;
struct WLAN_CONNECTION_PARAMETERS;
struct WLAN_CONNECTION_PARAMETERS_V2;
struct WLAN_MSM_NOTIFICATION_DATA;
struct WLAN_CONNECTION_NOTIFICATION_DATA;
struct L2_NOTIFICATION_DATA;
struct ONEX_STATUS;
struct ONEX_VARIABLE_BLOB;
struct ONEX_RESULT_UPDATE_DATA;
struct ONEX_CONNECTION_PROFILE;
struct ONEX_AUTH_PARAMS;
struct EAP_TYPE;
struct EAP_METHOD_TYPE;
struct ONEX_EAP_ERROR;
struct WLAN_PHY_FRAME_STATISTICS;
struct WLAN_MAC_FRAME_STATISTICS;
struct WLAN_STATISTICS;
struct WFD_GROUP_ID;
struct WLAN_HOSTED_NETWORK_PEER_STATE;
struct WLAN_HOSTED_NETWORK_RADIO_STATE;
struct WLAN_HOSTED_NETWORK_STATE_CHANGE_REC;
struct WLAN_HOSTED_NETWORK_DATA_PEER_STATE_CHANGE_REC;
struct WLAN_HOSTED_NETWORK_CONNECTION_SETTINGS;
struct WLAN_HOSTED_NETWORK_SECURITY_SETTINGS;
struct WLAN_HOSTED_NETWORK_STATUS;
__interface IWiFiAccessStatusAsyncOperation;
typedef System::DelphiInterface<IWiFiAccessStatusAsyncOperation> _di_IWiFiAccessStatusAsyncOperation;
__interface IWiFiAdapterStatics;
typedef System::DelphiInterface<IWiFiAdapterStatics> _di_IWiFiAdapterStatics;
__interface IWiFiDirectInformationElementIterator;
typedef System::DelphiInterface<IWiFiDirectInformationElementIterator> _di_IWiFiDirectInformationElementIterator;
__interface IWiFiDirectInformationElementIterable;
typedef System::DelphiInterface<IWiFiDirectInformationElementIterable> _di_IWiFiDirectInformationElementIterable;
__interface IWiFiDirectInformationElementVectorView;
typedef System::DelphiInterface<IWiFiDirectInformationElementVectorView> _di_IWiFiDirectInformationElementVectorView;
__interface IWiFiDirectInformationElementVector;
typedef System::DelphiInterface<IWiFiDirectInformationElementVector> _di_IWiFiDirectInformationElementVector;
__interface IWiFiDirectDeviceAsyncOperationCompletedHandler;
typedef System::DelphiInterface<IWiFiDirectDeviceAsyncOperationCompletedHandler> _di_IWiFiDirectDeviceAsyncOperationCompletedHandler;
__interface IWiFiDirectDeviceAsyncOperation;
typedef System::DelphiInterface<IWiFiDirectDeviceAsyncOperation> _di_IWiFiDirectDeviceAsyncOperation;
__interface IWiFiDirectAdvertisementPublisherStatusChangedEventHandler;
typedef System::DelphiInterface<IWiFiDirectAdvertisementPublisherStatusChangedEventHandler> _di_IWiFiDirectAdvertisementPublisherStatusChangedEventHandler;
__interface IWiFiDirectConnectionRequestedEventHandler;
typedef System::DelphiInterface<IWiFiDirectConnectionRequestedEventHandler> _di_IWiFiDirectConnectionRequestedEventHandler;
__interface IWiFiDirectDeviceEventHandler;
typedef System::DelphiInterface<IWiFiDirectDeviceEventHandler> _di_IWiFiDirectDeviceEventHandler;
__interface IWiFiDirectDeviceStatics;
typedef System::DelphiInterface<IWiFiDirectDeviceStatics> _di_IWiFiDirectDeviceStatics;
__interface IWiFiDirectDeviceStatics2;
typedef System::DelphiInterface<IWiFiDirectDeviceStatics2> _di_IWiFiDirectDeviceStatics2;
__interface IWiFiDirectInformationElementStatics;
typedef System::DelphiInterface<IWiFiDirectInformationElementStatics> _di_IWiFiDirectInformationElementStatics;
__interface IWiFiDirectInformationElement;
typedef System::DelphiInterface<IWiFiDirectInformationElement> _di_IWiFiDirectInformationElement;
__interface IWiFiDirectLegacySettings;
typedef System::DelphiInterface<IWiFiDirectLegacySettings> _di_IWiFiDirectLegacySettings;
__interface IWiFiDirectAdvertisement;
typedef System::DelphiInterface<IWiFiDirectAdvertisement> _di_IWiFiDirectAdvertisement;
__interface IWiFiDirectAdvertisementPublisherStatusChangedEventArgs;
typedef System::DelphiInterface<IWiFiDirectAdvertisementPublisherStatusChangedEventArgs> _di_IWiFiDirectAdvertisementPublisherStatusChangedEventArgs;
__interface IWiFiDirectAdvertisementPublisher;
typedef System::DelphiInterface<IWiFiDirectAdvertisementPublisher> _di_IWiFiDirectAdvertisementPublisher;
__interface IWiFiDirectConnectionParameters;
typedef System::DelphiInterface<IWiFiDirectConnectionParameters> _di_IWiFiDirectConnectionParameters;
__interface IWiFiDirectConnectionRequestedEventArgs;
typedef System::DelphiInterface<IWiFiDirectConnectionRequestedEventArgs> _di_IWiFiDirectConnectionRequestedEventArgs;
__interface IWiFiDirectConnectionListener;
typedef System::DelphiInterface<IWiFiDirectConnectionListener> _di_IWiFiDirectConnectionListener;
__interface IWiFiDirectDevice;
typedef System::DelphiInterface<IWiFiDirectDevice> _di_IWiFiDirectDevice;
__interface IWiFiDirectConnectionRequest;
typedef System::DelphiInterface<IWiFiDirectConnectionRequest> _di_IWiFiDirectConnectionRequest;
__interface IWiFiDirectConfigurationMethodIterator;
typedef System::DelphiInterface<IWiFiDirectConfigurationMethodIterator> _di_IWiFiDirectConfigurationMethodIterator;
__interface IWiFiDirectConfigurationMethodIterable;
typedef System::DelphiInterface<IWiFiDirectConfigurationMethodIterable> _di_IWiFiDirectConfigurationMethodIterable;
__interface IWiFiDirectConfigurationMethodVectorView;
typedef System::DelphiInterface<IWiFiDirectConfigurationMethodVectorView> _di_IWiFiDirectConfigurationMethodVectorView;
__interface IWiFiDirectConfigurationMethodVector;
typedef System::DelphiInterface<IWiFiDirectConfigurationMethodVector> _di_IWiFiDirectConfigurationMethodVector;
__interface IWiFiDirectAdvertisement2;
typedef System::DelphiInterface<IWiFiDirectAdvertisement2> _di_IWiFiDirectAdvertisement2;
__interface IWiFiDirectConnectionParameters2;
typedef System::DelphiInterface<IWiFiDirectConnectionParameters2> _di_IWiFiDirectConnectionParameters2;
__interface IWiFiDirectConnectionParametersStatics;
typedef System::DelphiInterface<IWiFiDirectConnectionParametersStatics> _di_IWiFiDirectConnectionParametersStatics;
__interface IWiFiDirectServiceConfigurationMethodIterator;
typedef System::DelphiInterface<IWiFiDirectServiceConfigurationMethodIterator> _di_IWiFiDirectServiceConfigurationMethodIterator;
__interface IWiFiDirectServiceConfigurationMethodIterable;
typedef System::DelphiInterface<IWiFiDirectServiceConfigurationMethodIterable> _di_IWiFiDirectServiceConfigurationMethodIterable;
__interface IWiFiDirectServiceConfigurationMethodVectorView;
typedef System::DelphiInterface<IWiFiDirectServiceConfigurationMethodVectorView> _di_IWiFiDirectServiceConfigurationMethodVectorView;
__interface IWiFiDirectServiceConfigurationMethodVector;
typedef System::DelphiInterface<IWiFiDirectServiceConfigurationMethodVector> _di_IWiFiDirectServiceConfigurationMethodVector;
__interface IWiFiDirectServiceAsyncOperationCompletedHandler;
typedef System::DelphiInterface<IWiFiDirectServiceAsyncOperationCompletedHandler> _di_IWiFiDirectServiceAsyncOperationCompletedHandler;
__interface IWiFiDirectServiceAsyncOperation;
typedef System::DelphiInterface<IWiFiDirectServiceAsyncOperation> _di_IWiFiDirectServiceAsyncOperation;
__interface IWiFiDirectServiceProvisioningInfoAsyncOperationCompletedHandler;
typedef System::DelphiInterface<IWiFiDirectServiceProvisioningInfoAsyncOperationCompletedHandler> _di_IWiFiDirectServiceProvisioningInfoAsyncOperationCompletedHandler;
__interface IWiFiDirectServiceProvisioningInfoAsyncOperation;
typedef System::DelphiInterface<IWiFiDirectServiceProvisioningInfoAsyncOperation> _di_IWiFiDirectServiceProvisioningInfoAsyncOperation;
__interface IWiFiDirectServiceSessionAsyncOperationCompletedHandler;
typedef System::DelphiInterface<IWiFiDirectServiceSessionAsyncOperationCompletedHandler> _di_IWiFiDirectServiceSessionAsyncOperationCompletedHandler;
__interface IWiFiDirectServiceSessionAsyncOperation;
typedef System::DelphiInterface<IWiFiDirectServiceSessionAsyncOperation> _di_IWiFiDirectServiceSessionAsyncOperation;
__interface IWiFiDirectServiceSessionDeferredEventHandler;
typedef System::DelphiInterface<IWiFiDirectServiceSessionDeferredEventHandler> _di_IWiFiDirectServiceSessionDeferredEventHandler;
__interface IWiFiDirectServiceAdvertiserEventHandler;
typedef System::DelphiInterface<IWiFiDirectServiceAdvertiserEventHandler> _di_IWiFiDirectServiceAdvertiserEventHandler;
__interface IWiFiDirectServiceAutoAcceptSessionConnectedEventHandler;
typedef System::DelphiInterface<IWiFiDirectServiceAutoAcceptSessionConnectedEventHandler> _di_IWiFiDirectServiceAutoAcceptSessionConnectedEventHandler;
__interface IWiFiDirectServiceSessionRequestedEventHandler;
typedef System::DelphiInterface<IWiFiDirectServiceSessionRequestedEventHandler> _di_IWiFiDirectServiceSessionRequestedEventHandler;
__interface IWiFiDirectServiceSessionEventHandler;
typedef System::DelphiInterface<IWiFiDirectServiceSessionEventHandler> _di_IWiFiDirectServiceSessionEventHandler;
__interface IWiFiDirectServiceRemotePortAddedEventHandler;
typedef System::DelphiInterface<IWiFiDirectServiceRemotePortAddedEventHandler> _di_IWiFiDirectServiceRemotePortAddedEventHandler;
__interface IWiFiDirectService;
typedef System::DelphiInterface<IWiFiDirectService> _di_IWiFiDirectService;
__interface IWiFiDirectServiceAdvertiser;
typedef System::DelphiInterface<IWiFiDirectServiceAdvertiser> _di_IWiFiDirectServiceAdvertiser;
__interface IWiFiDirectServiceAdvertiserFactory;
typedef System::DelphiInterface<IWiFiDirectServiceAdvertiserFactory> _di_IWiFiDirectServiceAdvertiserFactory;
__interface IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs;
typedef System::DelphiInterface<IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs> _di_IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs;
__interface IWiFiDirectServiceProvisioningInfo;
typedef System::DelphiInterface<IWiFiDirectServiceProvisioningInfo> _di_IWiFiDirectServiceProvisioningInfo;
__interface IWiFiDirectServiceRemotePortAddedEventArgs;
typedef System::DelphiInterface<IWiFiDirectServiceRemotePortAddedEventArgs> _di_IWiFiDirectServiceRemotePortAddedEventArgs;
__interface IWiFiDirectServiceSession;
typedef System::DelphiInterface<IWiFiDirectServiceSession> _di_IWiFiDirectServiceSession;
__interface IWiFiDirectServiceSessionDeferredEventArgs;
typedef System::DelphiInterface<IWiFiDirectServiceSessionDeferredEventArgs> _di_IWiFiDirectServiceSessionDeferredEventArgs;
__interface IWiFiDirectServiceSessionRequest;
typedef System::DelphiInterface<IWiFiDirectServiceSessionRequest> _di_IWiFiDirectServiceSessionRequest;
__interface IWiFiDirectServiceSessionRequestedEventArgs;
typedef System::DelphiInterface<IWiFiDirectServiceSessionRequestedEventArgs> _di_IWiFiDirectServiceSessionRequestedEventArgs;
__interface IWiFiDirectServiceStatics;
typedef System::DelphiInterface<IWiFiDirectServiceStatics> _di_IWiFiDirectServiceStatics;
__interface INetworkOperatorTetheringManager;
typedef System::DelphiInterface<INetworkOperatorTetheringManager> _di_INetworkOperatorTetheringManager;
__interface INetworkOperatorTetheringAccessPointConfiguration;
typedef System::DelphiInterface<INetworkOperatorTetheringAccessPointConfiguration> _di_INetworkOperatorTetheringAccessPointConfiguration;
__interface INetworkOperatorTetheringOperationResultAsyncOperation;
typedef System::DelphiInterface<INetworkOperatorTetheringOperationResultAsyncOperation> _di_INetworkOperatorTetheringOperationResultAsyncOperation;
__interface INetworkOperatorTetheringOperationResultAsyncOperationCompletedHandler;
typedef System::DelphiInterface<INetworkOperatorTetheringOperationResultAsyncOperationCompletedHandler> _di_INetworkOperatorTetheringOperationResultAsyncOperationCompletedHandler;
__interface INetworkOperatorTetheringOperationResult;
typedef System::DelphiInterface<INetworkOperatorTetheringOperationResult> _di_INetworkOperatorTetheringOperationResult;
__interface INetworkOperatorTetheringManagerStatics;
typedef System::DelphiInterface<INetworkOperatorTetheringManagerStatics> _di_INetworkOperatorTetheringManagerStatics;
__interface INetworkOperatorTetheringManagerStatics2;
typedef System::DelphiInterface<INetworkOperatorTetheringManagerStatics2> _di_INetworkOperatorTetheringManagerStatics2;
__interface INetworkOperatorTetheringManagerStatics3;
typedef System::DelphiInterface<INetworkOperatorTetheringManagerStatics3> _di_INetworkOperatorTetheringManagerStatics3;
__interface INetworkOperatorTetheringManagerStatics4;
typedef System::DelphiInterface<INetworkOperatorTetheringManagerStatics4> _di_INetworkOperatorTetheringManagerStatics4;
__interface INetworkInformationStatics;
typedef System::DelphiInterface<INetworkInformationStatics> _di_INetworkInformationStatics;
__interface INetworkOperatorTetheringClientManager;
typedef System::DelphiInterface<INetworkOperatorTetheringClientManager> _di_INetworkOperatorTetheringClientManager;
__interface INetworkOperatorTetheringClientVectorView;
typedef System::DelphiInterface<INetworkOperatorTetheringClientVectorView> _di_INetworkOperatorTetheringClientVectorView;
__interface INetworkOperatorTetheringClient;
typedef System::DelphiInterface<INetworkOperatorTetheringClient> _di_INetworkOperatorTetheringClient;
__interface INetworkOperatorTetheringAccessPointConfiguration2;
typedef System::DelphiInterface<INetworkOperatorTetheringAccessPointConfiguration2> _di_INetworkOperatorTetheringAccessPointConfiguration2;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM DOT11_BSS_TYPE : unsigned int { dot11_BSS_type_infrastructure = 1, dot11_BSS_type_independent, dot11_BSS_type_any };

typedef DOT11_BSS_TYPE *PDOT11_BSS_TYPE;

typedef DOT11_SSID *PDOT11_SSID;

struct DECLSPEC_DRECORD DOT11_SSID
{
public:
	unsigned uSSIDLength;
	System::StaticArray<System::Byte, 32> ucSSID;
};


typedef unsigned *PDOT11_AUTH_ALGORITHM;

typedef unsigned DOT11_AUTH_ALGORITHM;

typedef unsigned *PDOT11_CIPHER_ALGORITHM;

typedef unsigned DOT11_CIPHER_ALGORITHM;

typedef DOT11_AUTH_CIPHER_PAIR *PDOT11_AUTH_CIPHER_PAIR;

struct DECLSPEC_DRECORD DOT11_AUTH_CIPHER_PAIR
{
public:
	unsigned AuthAlgoId;
	unsigned CipherAlgoId;
};


typedef DOT11_OI *PDOT11_OI;

struct DECLSPEC_DRECORD DOT11_OI
{
public:
	System::Word OILength;
	System::StaticArray<System::Byte, 5> OI;
};


typedef DOT11_ACCESSNETWORKOPTIONS *PDOT11_ACCESSNETWORKOPTIONS;

struct DECLSPEC_DRECORD DOT11_ACCESSNETWORKOPTIONS
{
public:
	System::Byte AccessNetworkType;
	System::Byte Internet;
	System::Byte ASRA;
	System::Byte ESR;
	System::Byte UESA;
};


typedef DOT11_VENUEINFO *PDOT11_VENUEINFO;

struct DECLSPEC_DRECORD DOT11_VENUEINFO
{
public:
	System::Byte VenueGroup;
	System::Byte VenueType;
};


typedef WLAN_PROFILE_INFO *PWLAN_PROFILE_INFO;

struct DECLSPEC_DRECORD WLAN_PROFILE_INFO
{
public:
	System::StaticArray<System::WideChar, 256> strProfileName;
	unsigned dwFlags;
};


typedef DOT11_NETWORK *PDOT11_NETWORK;

struct DECLSPEC_DRECORD DOT11_NETWORK
{
public:
	DOT11_SSID dot11Ssid;
	DOT11_BSS_TYPE dot11BssType;
};


typedef WLAN_RAW_DATA *PWLAN_RAW_DATA;

struct DECLSPEC_DRECORD WLAN_RAW_DATA
{
public:
	unsigned dwDataSize;
	System::StaticArray<System::Byte, 240> DataBlob;
};


struct DECLSPEC_DRECORD TDataListRec
{
public:
	unsigned dwDataOffset;
	unsigned dwDataSize;
};


typedef WLAN_RAW_DATA_LIST *PWLAN_RAW_DATA_LIST;

struct DECLSPEC_DRECORD WLAN_RAW_DATA_LIST
{
public:
	unsigned dwTotalSize;
	unsigned dwNumberOfItems;
	System::StaticArray<TDataListRec, 1> DataList;
};


typedef WCL_WLAN_RAW_DATA_LIST *PWCL_WLAN_RAW_DATA_LIST;

struct DECLSPEC_DRECORD WCL_WLAN_RAW_DATA_LIST
{
public:
	unsigned dwTotalSize;
	unsigned dwNumberOfItems;
	unsigned dwDataOffset;
	unsigned dwDataSize;
	System::StaticArray<System::Byte, 240> Data;
};


enum DECLSPEC_DENUM WLAN_CONNECTION_MODE : unsigned int { wlan_connection_mode_profile, wlan_connection_mode_temporary_profile, wlan_connection_mode_discovery_secure, wlan_connection_mode_discovery_unsecure, wlan_connection_mode_auto, wlan_connection_mode_invalid };

typedef WLAN_CONNECTION_MODE *PWLAN_CONNECTION_MODE;

typedef unsigned *PWLAN_REASON_CODE;

typedef unsigned WLAN_REASON_CODE;

typedef unsigned ONEX_REASON_CODE;

typedef unsigned *PONEX_REASON_CODE;

typedef unsigned *PWLAN_SIGNAL_QUALITY;

typedef unsigned WLAN_SIGNAL_QUALITY;

typedef WLAN_RATE_SET *PWLAN_RATE_SET;

struct DECLSPEC_DRECORD WLAN_RATE_SET
{
public:
	unsigned uRateSetLength;
	System::StaticArray<System::Word, 126> usRateSet;
};


typedef unsigned *PDOT11_PHY_TYPE;

typedef unsigned DOT11_PHY_TYPE;

typedef WLAN_AVAILABLE_NETWORK *PWLAN_AVAILABLE_NETWORK;

struct DECLSPEC_DRECORD WLAN_AVAILABLE_NETWORK
{
public:
	System::StaticArray<System::WideChar, 256> strProfileName;
	DOT11_SSID dot11Ssid;
	DOT11_BSS_TYPE dot11BssType;
	unsigned uNumberOfBssids;
	System::LongBool bNetworkConnectable;
	unsigned wlanNotConnectableReason;
	unsigned uNumberOfPhyTypes;
	System::StaticArray<unsigned, 8> dot11PhyTypes;
	System::LongBool bMorePhyTypes;
	unsigned wlanSignalQuality;
	System::LongBool bSecurityEnabled;
	unsigned dot11DefaultAuthAlgorithm;
	unsigned dot11DefaultCipherAlgorithm;
	unsigned dwFlags;
	unsigned dwReserved;
};


typedef System::StaticArray<System::Byte, 6> DOT11_HESSID;

typedef DOT11_HESSID *PDOT11_HESSID;

typedef WLAN_AVAILABLE_NETWORK_V2 *PWLAN_AVAILABLE_NETWORK_V2;

struct DECLSPEC_DRECORD WLAN_AVAILABLE_NETWORK_V2
{
public:
	System::StaticArray<System::WideChar, 256> strProfileName;
	DOT11_SSID dot11Ssid;
	DOT11_BSS_TYPE dot11BssType;
	unsigned uNumberOfBssids;
	System::LongBool bNetworkConnectable;
	unsigned wlanNotConnectableReason;
	unsigned uNumberOfPhyTypes;
	System::StaticArray<unsigned, 8> dot11PhyTypes;
	System::LongBool bMorePhyTypes;
	unsigned wlanSignalQuality;
	System::LongBool bSecurityEnabled;
	unsigned dot11DefaultAuthAlgorithm;
	unsigned dot11DefaultCipherAlgorithm;
	unsigned dwFlags;
	DOT11_ACCESSNETWORKOPTIONS AccessNetworkOptions;
	DOT11_HESSID dot11HESSID;
	DOT11_VENUEINFO VenueInfo;
	unsigned dwReserved;
};


typedef System::StaticArray<System::Byte, 6> DOT11_MAC_ADDRESS;

typedef DOT11_MAC_ADDRESS *PDOT11_MAC_ADDRESS;

typedef WLAN_BSS_ENTRY *PWLAN_BSS_ENTRY;

struct DECLSPEC_DRECORD WLAN_BSS_ENTRY
{
public:
	DOT11_SSID dot11Ssid;
	unsigned uPhyId;
	DOT11_MAC_ADDRESS dot11Bssid;
	DOT11_BSS_TYPE dot11BssType;
	unsigned dot11BssPhyType;
	int lRssi;
	unsigned uLinkQuality;
	bool bInRegDomain;
	System::Word usBeaconPeriod;
	unsigned __int64 ullTimestamp;
	unsigned __int64 ullHostTimestamp;
	System::Word usCapabilityInformation;
	unsigned ulChCenterFrequency;
	WLAN_RATE_SET wlanRateSet;
	unsigned ulIeOffset;
	unsigned ulIeSize;
};


typedef WLAN_BSS_LIST *PWLAN_BSS_LIST;

struct DECLSPEC_DRECORD WLAN_BSS_LIST
{
public:
	unsigned dwTotalSize;
	unsigned dwNumberOfItems;
	System::StaticArray<WLAN_BSS_ENTRY, 1> wlanBssEntries;
};


enum DECLSPEC_DENUM WLAN_INTERFACE_STATE : unsigned int { wlan_interface_state_not_ready, wlan_interface_state_connected, wlan_interface_state_ad_hoc_network_formed, wlan_interface_state_disconnecting, wlan_interface_state_disconnected, wlan_interface_state_associating, wlan_interface_state_discovering, wlan_interface_state_authenticating };

typedef WLAN_INTERFACE_STATE *PWLAN_INTERFACE_STATE;

enum DECLSPEC_DENUM WLAN_ADHOC_NETWORK_STATE : unsigned int { wlan_adhoc_network_state_formed, wlan_adhoc_network_state_connected };

typedef WLAN_ADHOC_NETWORK_STATE *PWLAN_ADHOC_NETWORK_STATE;

typedef WLAN_INTERFACE_INFO *PWLAN_INTERFACE_INFO;

struct DECLSPEC_DRECORD WLAN_INTERFACE_INFO
{
public:
	GUID InterfaceGuid;
	System::StaticArray<System::WideChar, 256> strInterfaceDescription;
	WLAN_INTERFACE_STATE isState;
};


typedef WLAN_ASSOCIATION_ATTRIBUTES *PWLAN_ASSOCIATION_ATTRIBUTES;

struct DECLSPEC_DRECORD WLAN_ASSOCIATION_ATTRIBUTES
{
public:
	DOT11_SSID dot11Ssid;
	DOT11_BSS_TYPE dot11BssType;
	DOT11_MAC_ADDRESS dot11Bssid;
	unsigned dot11PhyType;
	unsigned uDot11PhyIndex;
	unsigned wlanSignalQuality;
	unsigned ulRxRate;
	unsigned ulTxRate;
};


typedef WLAN_SECURITY_ATTRIBUTES *PWLAN_SECURITY_ATTRIBUTES;

struct DECLSPEC_DRECORD WLAN_SECURITY_ATTRIBUTES
{
public:
	System::LongBool bSecurityEnabled;
	System::LongBool bOneXEnabled;
	unsigned dot11AuthAlgorithm;
	unsigned dot11CipherAlgorithm;
};


typedef WLAN_CONNECTION_ATTRIBUTES *PWLAN_CONNECTION_ATTRIBUTES;

struct DECLSPEC_DRECORD WLAN_CONNECTION_ATTRIBUTES
{
public:
	WLAN_INTERFACE_STATE isState;
	WLAN_CONNECTION_MODE wlanConnectionMode;
	System::StaticArray<System::WideChar, 256> strProfileName;
	WLAN_ASSOCIATION_ATTRIBUTES wlanAssociationAttributes;
	WLAN_SECURITY_ATTRIBUTES wlanSecurityAttributes;
};


enum DECLSPEC_DENUM DOT11_RADIO_STATE : unsigned int { dot11_radio_state_unknown, dot11_radio_state_on, dot11_radio_state_off };

typedef DOT11_RADIO_STATE *PDOT11_RADIO_STATE;

typedef WLAN_PHY_RADIO_STATE *PWLAN_PHY_RADIO_STATE;

struct DECLSPEC_DRECORD WLAN_PHY_RADIO_STATE
{
public:
	unsigned dwPhyIndex;
	DOT11_RADIO_STATE dot11SoftwareRadioState;
	DOT11_RADIO_STATE dot11HardwareRadioState;
};


typedef WLAN_RADIO_STATE *PWLAN_RADIO_STATE;

struct DECLSPEC_DRECORD WLAN_RADIO_STATE
{
public:
	unsigned dwNumberOfPhys;
	System::StaticArray<WLAN_PHY_RADIO_STATE, 64> PhyRadioState;
};


enum DECLSPEC_DENUM WLAN_OPERATIONAL_STATE : unsigned int { wlan_operational_state_unknown, wlan_operational_state_off, wlan_operational_state_on, wlan_operational_state_going_off, wlan_operational_state_going_on };

typedef WLAN_OPERATIONAL_STATE *PWLAN_OPERATIONAL_STATE;

enum DECLSPEC_DENUM WLAN_INTERFACE_TYPE : unsigned int { wlan_interface_type_emulated_802_11, wlan_interface_type_native_802_11, wlan_interface_type_invalid };

typedef WLAN_INTERFACE_TYPE *PWLAN_INTERFACE_TYPE;

typedef WLAN_INTERFACE_CAPABILITY *PWLAN_INTERFACE_CAPABILITY;

struct DECLSPEC_DRECORD WLAN_INTERFACE_CAPABILITY
{
public:
	WLAN_INTERFACE_TYPE interfaceType;
	System::LongBool bDot11DSupported;
	unsigned dwMaxDesiredSsidListSize;
	unsigned dwMaxDesiredBssidListSize;
	unsigned dwNumberOfSupportedPhys;
	System::StaticArray<unsigned, 64> dot11PhyTypes;
};


typedef WLAN_AUTH_CIPHER_PAIR_LIST *PWLAN_AUTH_CIPHER_PAIR_LIST;

struct DECLSPEC_DRECORD WLAN_AUTH_CIPHER_PAIR_LIST
{
public:
	unsigned dwNumberOfItems;
	System::StaticArray<DOT11_AUTH_CIPHER_PAIR, 1> pAuthCipherPairList;
};


typedef System::StaticArray<System::Byte, 3> DOT11_COUNTRY_OR_REGION_STRING;

typedef DOT11_COUNTRY_OR_REGION_STRING *PDOT11_COUNTRY_OR_REGION_STRING;

typedef WLAN_COUNTRY_OR_REGION_STRING_LIST *PWLAN_COUNTRY_OR_REGION_STRING_LIST;

struct DECLSPEC_DRECORD WLAN_COUNTRY_OR_REGION_STRING_LIST
{
public:
	unsigned dwNumberOfItems;
	System::StaticArray<System::StaticArray<System::Byte, 3>, 1> pCountryOrRegionStringList;
};


typedef WLAN_PROFILE_INFO_LIST *PWLAN_PROFILE_INFO_LIST;

struct DECLSPEC_DRECORD WLAN_PROFILE_INFO_LIST
{
public:
	unsigned dwNumberOfItems;
	unsigned dwIndex;
	System::StaticArray<WLAN_PROFILE_INFO, 1> ProfileInfo;
};


typedef WLAN_AVAILABLE_NETWORK_LIST *PWLAN_AVAILABLE_NETWORK_LIST;

struct DECLSPEC_DRECORD WLAN_AVAILABLE_NETWORK_LIST
{
public:
	unsigned dwNumberOfItems;
	unsigned dwIndex;
	System::StaticArray<WLAN_AVAILABLE_NETWORK, 1> Network;
};


typedef WLAN_AVAILABLE_NETWORK_LIST_V2 *PWLAN_AVAILABLE_NETWORK_LIST_V2;

struct DECLSPEC_DRECORD WLAN_AVAILABLE_NETWORK_LIST_V2
{
public:
	unsigned dwNumberOfItems;
	unsigned dwIndex;
	System::StaticArray<WLAN_AVAILABLE_NETWORK_V2, 1> Network;
};


typedef WLAN_INTERFACE_INFO_LIST *PWLAN_INTERFACE_INFO_LIST;

struct DECLSPEC_DRECORD WLAN_INTERFACE_INFO_LIST
{
public:
	unsigned dwNumberOfItems;
	unsigned dwIndex;
	System::StaticArray<WLAN_INTERFACE_INFO, 1> InterfaceInfo;
};


typedef DOT11_NETWORK_LIST *PDOT11_NETWORK_LIST;

struct DECLSPEC_DRECORD DOT11_NETWORK_LIST
{
public:
	unsigned dwNumberOfItems;
	unsigned dwIndex;
	System::StaticArray<DOT11_NETWORK, 1> Network;
};


enum DECLSPEC_DENUM WLAN_POWER_SETTING : unsigned int { wlan_power_setting_no_saving, wlan_power_setting_low_saving, wlan_power_setting_medium_saving, wlan_power_setting_maximum_saving, wlan_power_setting_invalid };

typedef WLAN_POWER_SETTING *PWLAN_POWER_SETTING;

typedef NDIS_OBJECT_HEADER *PNDIS_OBJECT_HEADER;

struct DECLSPEC_DRECORD NDIS_OBJECT_HEADER
{
public:
	System::Byte Type_;
	System::Byte Revision;
	System::Word Size;
};


typedef DOT11_BSSID_LIST *PDOT11_BSSID_LIST;

struct DECLSPEC_DRECORD DOT11_BSSID_LIST
{
public:
	NDIS_OBJECT_HEADER Header;
	unsigned uNumOfEntries;
	unsigned uTotalNumOfEntries;
	System::StaticArray<System::StaticArray<System::Byte, 6>, 1> BSSIDs;
};


typedef WLAN_CONNECTION_PARAMETERS *PWLAN_CONNECTION_PARAMETERS;

struct DECLSPEC_DRECORD WLAN_CONNECTION_PARAMETERS
{
public:
	WLAN_CONNECTION_MODE wlanConnectionMode;
	System::WideChar *strProfile;
	DOT11_SSID *pDot11Ssid;
	DOT11_BSSID_LIST *pDesiredBssidList;
	DOT11_BSS_TYPE dot11BssType;
	unsigned dwFlags;
};


typedef WLAN_CONNECTION_PARAMETERS_V2 *PWLAN_CONNECTION_PARAMETERS_V2;

struct DECLSPEC_DRECORD WLAN_CONNECTION_PARAMETERS_V2
{
public:
	WLAN_CONNECTION_MODE wlanConnectionMode;
	System::WideChar *strProfile;
	DOT11_SSID *pDot11Ssid;
	DOT11_HESSID *pDot11Hessid;
	DOT11_BSSID_LIST *pDesiredBssidList;
	DOT11_BSS_TYPE dot11BssType;
	unsigned dwFlags;
	DOT11_ACCESSNETWORKOPTIONS *pDot11AccessNetworkOptions;
};


typedef WLAN_MSM_NOTIFICATION_DATA *PWLAN_MSM_NOTIFICATION_DATA;

struct DECLSPEC_DRECORD WLAN_MSM_NOTIFICATION_DATA
{
public:
	WLAN_CONNECTION_MODE wlanConnectionMode;
	System::StaticArray<System::WideChar, 256> strProfileName;
	DOT11_SSID dot11Ssid;
	DOT11_BSS_TYPE dot11BssType;
	DOT11_MAC_ADDRESS dot11MacAddr;
	System::LongBool bSecurityEnabled;
	System::LongBool bFirstPeer;
	System::LongBool bLastPeer;
	unsigned wlanReasonCode;
};


typedef WLAN_CONNECTION_NOTIFICATION_DATA *PWLAN_CONNECTION_NOTIFICATION_DATA;

struct DECLSPEC_DRECORD WLAN_CONNECTION_NOTIFICATION_DATA
{
public:
	WLAN_CONNECTION_MODE wlanConnectionMode;
	System::StaticArray<System::WideChar, 256> strProfileName;
	DOT11_SSID dot11Ssid;
	DOT11_BSS_TYPE dot11BssType;
	System::LongBool bSecurityEnabled;
	unsigned wlanReasonCode;
	unsigned dwFlags;
	System::StaticArray<System::WideChar, 1> strProfileXml;
};


enum DECLSPEC_DENUM WLAN_NOTIFICATION_ACM : unsigned int { wlan_notification_acm_start, wlan_notification_acm_autoconf_enabled, wlan_notification_acm_autoconf_disabled, wlan_notification_acm_background_scan_enabled, wlan_notification_acm_background_scan_disabled, wlan_notification_acm_bss_type_change, wlan_notification_acm_power_setting_change, wlan_notification_acm_scan_complete, wlan_notification_acm_scan_fail, wlan_notification_acm_connection_start, wlan_notification_acm_connection_complete, wlan_notification_acm_connection_attempt_fail, wlan_notification_acm_filter_list_change, wlan_notification_acm_interface_arrival, wlan_notification_acm_interface_removal, wlan_notification_acm_profile_change, wlan_notification_acm_profile_name_change, 
	wlan_notification_acm_profiles_exhausted, wlan_notification_acm_network_not_available, wlan_notification_acm_network_available, wlan_notification_acm_disconnecting, wlan_notification_acm_disconnected, wlan_notification_acm_adhoc_network_state_change, wlan_notification_acm_profile_unblocked, wlan_notification_acm_screen_power_change, wlan_notification_acm_profile_blocked, wlan_notification_acm_scan_list_refresh, wlan_notification_acm_operational_state_change, wlan_notification_acm_end };

typedef WLAN_NOTIFICATION_ACM *PWLAN_NOTIFICATION_ACM;

enum DECLSPEC_DENUM WLAN_NOTIFICATION_MSM : unsigned int { wlan_notification_msm_start, wlan_notification_msm_associating, wlan_notification_msm_associated, wlan_notification_msm_authenticating, wlan_notification_msm_connected, wlan_notification_msm_roaming_start, wlan_notification_msm_roaming_end, wlan_notification_msm_radio_state_change, wlan_notification_msm_signal_quality_change, wlan_notification_msm_disassociating, wlan_notification_msm_disconnected, wlan_notification_msm_peer_join, wlan_notification_msm_peer_leave, wlan_notification_msm_adapter_removal, wlan_notification_msm_adapter_operation_mode_change, wlan_notification_msm_link_degraded, wlan_notification_msm_link_improved, wlan_notification_msm_end };

typedef WLAN_NOTIFICATION_MSM *PWLAN_NOTIFICATION_MSM;

enum DECLSPEC_DENUM WLAN_NOTIFICATION_SECURITY : unsigned int { wlan_notification_security_start, wlan_notification_security_end };

typedef WLAN_NOTIFICATION_SECURITY *PWLAN_NOTIFICATION_SECURITY;

enum DECLSPEC_DENUM ONEX_NOTIFICATION_TYPE : unsigned int { OneXPublicNotificationBase, OneXNotificationTypeResultUpdate, OneXNotificationTypeAuthRestarted, OneXNotificationTypeEventInvalid, OneXNumNotifications = 3 };

typedef ONEX_NOTIFICATION_TYPE *PONEX_NOTIFICATION_TYPE;

enum DECLSPEC_DENUM ONEX_AUTH_RESTART_REASON : unsigned int { OneXRestartReasonPeerInitiated, OneXRestartReasonMsmInitiated, OneXRestartReasonOneXHeldStateTimeout, OneXRestartReasonOneXAuthTimeout, OneXRestartReasonOneXConfigurationChanged, OneXRestartReasonOneXUserChanged, OneXRestartReasonQuarantineStateChanged, OneXRestartReasonAltCredsTrial, OneXRestartReasonInvalid };

typedef ONEX_AUTH_RESTART_REASON *PONEX_AUTH_RESTART_REASON;

typedef L2_NOTIFICATION_DATA *PL2_NOTIFICATION_DATA;

struct DECLSPEC_DRECORD L2_NOTIFICATION_DATA
{
public:
	unsigned NotificationSource;
	unsigned NotificationCode;
	GUID InterfaceGuid;
	unsigned dwDataSize;
	void *pData;
};


typedef L2_NOTIFICATION_DATA *PWLAN_NOTIFICATION_DATA;

typedef L2_NOTIFICATION_DATA WLAN_NOTIFICATION_DATA;

typedef void __stdcall (*WLAN_NOTIFICATION_CALLBACK)(PWLAN_NOTIFICATION_DATA data, void * context);

enum DECLSPEC_DENUM WLAN_OPCODE_VALUE_TYPE : unsigned int { wlan_opcode_value_type_query_only, wlan_opcode_value_type_set_by_group_policy, wlan_opcode_value_type_set_by_user, wlan_opcode_value_type_invalid };

typedef WLAN_OPCODE_VALUE_TYPE *PWLAN_OPCODE_VALUE_TYPE;

typedef unsigned *PWLAN_INTF_OPCODE;

typedef unsigned WLAN_INTF_OPCODE;

enum DECLSPEC_DENUM ONEX_AUTH_STATUS : unsigned int { OneXAuthNotStarted, OneXAuthInProgress, OneXAuthNoAuthenticatorFound, OneXAuthSuccess, OneXAuthFailure, OneXAuthInvalid };

struct DECLSPEC_DRECORD ONEX_STATUS
{
public:
	ONEX_AUTH_STATUS authStatus;
	unsigned dwReason;
	unsigned dwError;
};


enum DECLSPEC_DENUM ONEX_EAP_METHOD_BACKEND_SUPPORT : unsigned int { OneXEapMethodBackendSupportUnknown, OneXEapMethodBackendSupported, OneXEapMethodBackendUnsupported };

struct DECLSPEC_DRECORD ONEX_VARIABLE_BLOB
{
public:
	unsigned dwSize;
	unsigned dwOffset;
};


typedef ONEX_RESULT_UPDATE_DATA *PONEX_RESULT_UPDATE_DATA;

struct DECLSPEC_DRECORD ONEX_RESULT_UPDATE_DATA
{
public:
	ONEX_STATUS oneXStatus;
	ONEX_EAP_METHOD_BACKEND_SUPPORT BackendSupport;
	System::LongBool fBackendEngaged;
	unsigned dwFlags;
	ONEX_VARIABLE_BLOB authParams;
	ONEX_VARIABLE_BLOB eapError;
};


enum DECLSPEC_DENUM ONEX_SUPPLICANT_MODE : unsigned int { OneXSupplicantModeInhibitTransmission, OneXSupplicantModeLearn, OneXSupplicantModeCompliant };

enum DECLSPEC_DENUM ONEX_AUTH_MODE : unsigned int { OneXAuthModeMachineOrUser, OneXAuthModeMachineOnly, OneXAuthModeUserOnly, OneXAuthModeGuest, OneXAuthModeUnspecified };

typedef ONEX_CONNECTION_PROFILE *PONEX_CONNECTION_PROFILE;

struct DECLSPEC_DRECORD ONEX_CONNECTION_PROFILE
{
public:
	unsigned dwVersion;
	unsigned dwTotalLen;
	unsigned dwFlags;
	unsigned dwOneXSupplicantFlags;
	ONEX_SUPPLICANT_MODE supplicantMode;
	ONEX_AUTH_MODE authMode;
	unsigned dwHeldPeriod;
	unsigned dwAuthPeriod;
	unsigned dwStartPeriod;
	unsigned dwMaxStart;
	unsigned dwMaxAuthFailures;
	unsigned dwNetworkAuthTimeout;
	unsigned dwNetworkAuthWithUITimeout;
	System::LongBool bAllowLogonDialogs;
	System::LongBool bUserBasedVLan;
};


enum DECLSPEC_DENUM ONEX_AUTH_IDENTITY : unsigned int { OneXAuthIdentityNone, OneXAuthIdentityMachine, OneXAuthIdentityUser, OneXAuthIdentityExplicitUser, OneXAuthIdentityGuest, OneXAuthIdentityInvalid };

enum DECLSPEC_DENUM ISOLATION_STATE : unsigned int { ISOLATION_STATE_UNKNOWN, ISOLATION_STATE_NOT_RESTRICTED, ISOLATION_STATE_IN_PROBATION, ISOLATION_STATE_RESTRICTED_ACCESS };

typedef ONEX_AUTH_PARAMS *PONEX_AUTH_PARAMS;

struct DECLSPEC_DRECORD ONEX_AUTH_PARAMS
{
public:
	System::LongBool fUpdatePending;
	ONEX_VARIABLE_BLOB oneXConnProfile;
	ONEX_AUTH_IDENTITY authIdentity;
	ISOLATION_STATE dwQuarantineState;
	unsigned dwFlags;
	unsigned dwSessionId;
	NativeUInt hUserToken;
	ONEX_VARIABLE_BLOB OneXUserProfile;
	ONEX_VARIABLE_BLOB Identity;
	ONEX_VARIABLE_BLOB UserName;
	ONEX_VARIABLE_BLOB Domain;
};


struct DECLSPEC_DRECORD EAP_TYPE
{
public:
	System::Byte type_;
	unsigned dwVendorId;
	unsigned dwVendorType;
};


struct DECLSPEC_DRECORD EAP_METHOD_TYPE
{
public:
	EAP_TYPE eapType;
	unsigned dwAuthorId;
};


typedef ONEX_EAP_ERROR *PONEX_EAP_ERROR;

struct DECLSPEC_DRECORD ONEX_EAP_ERROR
{
public:
	unsigned dwWinError;
	EAP_METHOD_TYPE _type;
	unsigned dwReasonCode;
	GUID rootCauseGuid;
	GUID repairGuid;
	GUID helpLinkGuid;
	unsigned dwFlags;
	ONEX_VARIABLE_BLOB RootCauseString;
	ONEX_VARIABLE_BLOB RepairString;
};


enum DECLSPEC_DENUM WLAN_AUTOCONF_OPCODE : unsigned int { wlan_autoconf_opcode_start, wlan_autoconf_opcode_show_denied_networks, wlan_autoconf_opcode_power_setting, wlan_autoconf_opcode_only_use_gp_profiles_for_allowed_networks, wlan_autoconf_opcode_allow_explicit_creds, wlan_autoconf_opcode_block_period, wlan_autoconf_opcode_allow_virtual_station_extensibility, wlan_autoconf_opcode_end };

typedef WLAN_AUTOCONF_OPCODE *PWLAN_AUTOCONF_OPCODE;

enum DECLSPEC_DENUM WLAN_IHV_CONTROL_TYPE : unsigned int { wlan_ihv_control_type_service, wlan_ihv_control_type_driver };

typedef WLAN_IHV_CONTROL_TYPE *PWLAN_IHV_CONTROL_TYPE;

enum DECLSPEC_DENUM WLAN_FILTER_LIST_TYPE : unsigned int { wlan_filter_list_type_gp_permit, wlan_filter_list_type_gp_deny, wlan_filter_list_type_user_permit, wlan_filter_list_type_user_deny };

typedef WLAN_FILTER_LIST_TYPE *PWLAN_FILTER_LIST_TYPE;

typedef WLAN_PHY_FRAME_STATISTICS *PWLAN_PHY_FRAME_STATISTICS;

struct DECLSPEC_DRECORD WLAN_PHY_FRAME_STATISTICS
{
public:
	unsigned __int64 ullTransmittedFrameCount;
	unsigned __int64 ullMulticastTransmittedFrameCount;
	unsigned __int64 ullFailedCount;
	unsigned __int64 ullRetryCount;
	unsigned __int64 ullMultipleRetryCount;
	unsigned __int64 ullMaxTXLifetimeExceededCount;
	unsigned __int64 ullTransmittedFragmentCount;
	unsigned __int64 ullRTSSuccessCount;
	unsigned __int64 ullRTSFailureCount;
	unsigned __int64 ullACKFailureCount;
	unsigned __int64 ullReceivedFrameCount;
	unsigned __int64 ullMulticastReceivedFrameCount;
	unsigned __int64 ullPromiscuousReceivedFrameCount;
	unsigned __int64 ullMaxRXLifetimeExceededCount;
	unsigned __int64 ullFrameDuplicateCount;
	unsigned __int64 ullReceivedFragmentCount;
	unsigned __int64 ullPromiscuousReceivedFragmentCount;
	unsigned __int64 ullFCSErrorCount;
};


typedef WLAN_MAC_FRAME_STATISTICS *PWLAN_MAC_FRAME_STATISTICS;

struct DECLSPEC_DRECORD WLAN_MAC_FRAME_STATISTICS
{
public:
	unsigned __int64 ullTransmittedFrameCount;
	unsigned __int64 ullReceivedFrameCount;
	unsigned __int64 ullWEPExcludedCount;
	unsigned __int64 ullTKIPLocalMICFailures;
	unsigned __int64 ullTKIPReplays;
	unsigned __int64 ullTKIPICVErrorCount;
	unsigned __int64 ullCCMPReplays;
	unsigned __int64 ullCCMPDecryptErrors;
	unsigned __int64 ullWEPUndecryptableCount;
	unsigned __int64 ullWEPICVErrorCount;
	unsigned __int64 ullDecryptSuccessCount;
	unsigned __int64 ullDecryptFailureCount;
};


typedef WLAN_STATISTICS *PWLAN_STATISTICS;

struct DECLSPEC_DRECORD WLAN_STATISTICS
{
public:
	unsigned __int64 ullFourWayHandshakeFailures;
	unsigned __int64 ullTKIPCounterMeasuresInvoked;
	unsigned __int64 ullReserved;
	WLAN_MAC_FRAME_STATISTICS MacUcastCounters;
	WLAN_MAC_FRAME_STATISTICS MacMcastCounters;
	unsigned dwNumberOfPhys;
	System::StaticArray<WLAN_PHY_FRAME_STATISTICS, 1> PhyCounters;
};


enum DECLSPEC_DENUM WLAN_SECURABLE_OBJECT : unsigned int { wlan_secure_permit_list, wlan_secure_deny_list, wlan_secure_ac_enabled, wlan_secure_bc_scan_enabled, wlan_secure_bss_type, wlan_secure_show_denied, wlan_secure_interface_properties, wlan_secure_ihv_control, wlan_secure_all_user_profiles_order, wlan_secure_add_new_all_user_profiles, wlan_secure_add_new_per_user_profiles, wlan_secure_media_streaming_mode_enabled, wlan_secure_current_operation_mode, wlan_secure_get_plaintext_key, wlan_secure_hosted_network_elevated_access, wlan_secure_virtual_station_extensibility, wlan_secure_wfd_elevated_access, WLAN_SECURABLE_OBJECT_COUNT };

typedef WLAN_SECURABLE_OBJECT *PWLAN_SECURABLE_OBJECT;

enum DECLSPEC_DENUM WFD_ROLE_TYPE : unsigned int { WFD_ROLE_TYPE_NONE, WFD_ROLE_TYPE_DEVICE, WFD_ROLE_TYPE_GROUP_OWNER, WFD_ROLE_TYPE_CLIENT = 4, WFD_ROLE_TYPE_MAX };

typedef WFD_ROLE_TYPE *PWFD_ROLE_TYPE;

typedef WFD_GROUP_ID *PWFD_GROUP_ID;

struct DECLSPEC_DRECORD WFD_GROUP_ID
{
public:
	DOT11_MAC_ADDRESS DeviceAddress;
	DOT11_SSID GroupSSID;
};


enum DECLSPEC_DENUM WL_DISPLAY_PAGES : unsigned int { WLConnectionPage, WLSecurityPage, WLAdvPage };

typedef WL_DISPLAY_PAGES *PWL_DISPLAY_PAGES;

enum DECLSPEC_DENUM WLAN_HOSTED_NETWORK_STATE : unsigned int { wlan_hosted_network_unavailable, wlan_hosted_network_idle, wlan_hosted_network_active };

typedef WLAN_HOSTED_NETWORK_STATE *PWLAN_HOSTED_NETWORK_STATE;

enum DECLSPEC_DENUM WLAN_HOSTED_NETWORK_REASON : unsigned int { wlan_hosted_network_reason_success, wlan_hosted_network_reason_unspecified, wlan_hosted_network_reason_bad_parameters, wlan_hosted_network_reason_service_shutting_down, wlan_hosted_network_reason_insufficient_resources, wlan_hosted_network_reason_elevation_required, wlan_hosted_network_reason_read_only, wlan_hosted_network_reason_persistence_failed, wlan_hosted_network_reason_crypt_error, wlan_hosted_network_reason_impersonation, wlan_hosted_network_reason_stop_before_start, wlan_hosted_network_reason_interface_available, wlan_hosted_network_reason_interface_unavailable, wlan_hosted_network_reason_miniport_stopped, wlan_hosted_network_reason_miniport_started, 
	wlan_hosted_network_reason_incompatible_connection_started, wlan_hosted_network_reason_incompatible_connection_stopped, wlan_hosted_network_reason_user_action, wlan_hosted_network_reason_client_abort, wlan_hosted_network_reason_ap_start_failed, wlan_hosted_network_reason_peer_arrived, wlan_hosted_network_reason_peer_departed, wlan_hosted_network_reason_peer_timeout, wlan_hosted_network_reason_gp_denied, wlan_hosted_network_reason_service_unavailable, wlan_hosted_network_reason_device_change, wlan_hosted_network_reason_properties_change, wlan_hosted_network_reason_virtual_station_blocking_use, wlan_hosted_network_reason_service_available_on_virtual_station };

typedef WLAN_HOSTED_NETWORK_REASON *PWLAN_HOSTED_NETWORK_REASON;

enum DECLSPEC_DENUM WLAN_HOSTED_NETWORK_PEER_AUTH_STATE : unsigned int { wlan_hosted_network_peer_state_invalid, wlan_hosted_network_peer_state_authenticated };

typedef WLAN_HOSTED_NETWORK_PEER_AUTH_STATE *PWLAN_HOSTED_NETWORK_PEER_AUTH_STATE;

typedef WLAN_HOSTED_NETWORK_PEER_STATE *PWLAN_HOSTED_NETWORK_PEER_STATE;

struct DECLSPEC_DRECORD WLAN_HOSTED_NETWORK_PEER_STATE
{
public:
	DOT11_MAC_ADDRESS PeerMacAddress;
	WLAN_HOSTED_NETWORK_PEER_AUTH_STATE PeerAuthState;
};


typedef WLAN_HOSTED_NETWORK_RADIO_STATE *PWLAN_HOSTED_NETWORK_RADIO_STATE;

struct DECLSPEC_DRECORD WLAN_HOSTED_NETWORK_RADIO_STATE
{
public:
	DOT11_RADIO_STATE dot11SoftwareRadioState;
	DOT11_RADIO_STATE dot11HardwareRadioState;
};


typedef unsigned *PWLAN_HOSTED_NETWORK_NOTIFICATION_CODE;

typedef unsigned WLAN_HOSTED_NETWORK_NOTIFICATION_CODE;

typedef WLAN_HOSTED_NETWORK_STATE_CHANGE_REC *PWLAN_HOSTED_NETWORK_STATE_CHANGE_REC;

struct DECLSPEC_DRECORD WLAN_HOSTED_NETWORK_STATE_CHANGE_REC
{
public:
	WLAN_HOSTED_NETWORK_STATE OldState;
	WLAN_HOSTED_NETWORK_STATE NewState;
	WLAN_HOSTED_NETWORK_REASON StateChangeReason;
};


typedef WLAN_HOSTED_NETWORK_DATA_PEER_STATE_CHANGE_REC *PWLAN_HOSTED_NETWORK_DATA_PEER_STATE_CHANGE_REC;

struct DECLSPEC_DRECORD WLAN_HOSTED_NETWORK_DATA_PEER_STATE_CHANGE_REC
{
public:
	WLAN_HOSTED_NETWORK_PEER_STATE OldState;
	WLAN_HOSTED_NETWORK_PEER_STATE NewState;
	WLAN_HOSTED_NETWORK_REASON PeerStateChangeReason;
};


enum DECLSPEC_DENUM WLAN_HOSTED_NETWORK_OPCODE : unsigned int { wlan_hosted_network_opcode_connection_settings, wlan_hosted_network_opcode_security_settings, wlan_hosted_network_opcode_station_profile, wlan_hosted_network_opcode_enable };

typedef WLAN_HOSTED_NETWORK_OPCODE *PWLAN_HOSTED_NETWORK_OPCODE;

typedef WLAN_HOSTED_NETWORK_CONNECTION_SETTINGS *PWLAN_HOSTED_NETWORK_CONNECTION_SETTINGS;

struct DECLSPEC_DRECORD WLAN_HOSTED_NETWORK_CONNECTION_SETTINGS
{
public:
	DOT11_SSID hostedNetworkSSID;
	unsigned dwMaxNumberOfPeers;
};


typedef WLAN_HOSTED_NETWORK_SECURITY_SETTINGS *PWLAN_HOSTED_NETWORK_SECURITY_SETTINGS;

struct DECLSPEC_DRECORD WLAN_HOSTED_NETWORK_SECURITY_SETTINGS
{
public:
	unsigned dot11AuthAlgo;
	unsigned dot11CipherAlgo;
};


typedef WLAN_HOSTED_NETWORK_STATUS *PWLAN_HOSTED_NETWORK_STATUS;

struct DECLSPEC_DRECORD WLAN_HOSTED_NETWORK_STATUS
{
public:
	WLAN_HOSTED_NETWORK_STATE HostedNetworkState;
	GUID IPDeviceID;
	DOT11_MAC_ADDRESS wlanHostedNetworkBSSID;
	unsigned dot11PhyType;
	unsigned ulChannelFrequency;
	unsigned dwNumberOfPeers;
	System::StaticArray<WLAN_HOSTED_NETWORK_PEER_STATE, 1> PeerList;
};


typedef void __stdcall (*WFD_OPEN_SESSION_COMPLETE_CALLBACK)(NativeUInt hSessionHandle, void * pvContext, const GUID guidSessionInterface, unsigned dwError, unsigned dwReasonCode);

enum DECLSPEC_DENUM WiFiDirectConnectionStatus : unsigned int { WiFiDirectConnectionStatus_Disconnected, WiFiDirectConnectionStatus_Connected };

enum DECLSPEC_DENUM WiFiDirectError : unsigned int { WiFiDirectError_Success, WiFiDirectError_RadioNotAvailable, WiFiDirectError_ResourceInUse };

enum DECLSPEC_DENUM WiFiDirectDeviceSelectorType : unsigned int { WiFiDirectDeviceSelectorType_DeviceInterface, WiFiDirectDeviceSelectorType_AssociationEndpoint };

enum DECLSPEC_DENUM WiFiDirectAdvertisementListenStateDiscoverability : unsigned int { WiFiDirectAdvertisementListenStateDiscoverability_None, WiFiDirectAdvertisementListenStateDiscoverability_Normal, WiFiDirectAdvertisementListenStateDiscoverability_Intensive };

enum DECLSPEC_DENUM WiFiDirectAdvertisementPublisherStatus : unsigned int { WiFiDirectAdvertisementPublisherStatus_Created, WiFiDirectAdvertisementPublisherStatus_Started, WiFiDirectAdvertisementPublisherStatus_Stopped, WiFiDirectAdvertisementPublisherStatus_Aborted };

enum DECLSPEC_DENUM WiFiDirectConfigurationMethod : unsigned int { WiFiDirectConfigurationMethod_ProvidePin, WiFiDirectConfigurationMethod_DisplayPin, WiFiDirectConfigurationMethod_PushButton };

typedef WiFiDirectConfigurationMethod *PWiFiDirectConfigurationMethod;

enum DECLSPEC_DENUM WiFiDirectPairingProcedure : unsigned int { WiFiDirectPairingProcedure_GroupOwnerNegotiation, WiFiDirectPairingProcedure_Invitation };

enum DECLSPEC_DENUM WiFiDirectServiceAdvertisementStatus : unsigned int { WiFiDirectServiceAdvertisementStatus_Created, WiFiDirectServiceAdvertisementStatus_Started, WiFiDirectServiceAdvertisementStatus_Stopped, WiFiDirectServiceAdvertisementStatus_Aborted };

enum DECLSPEC_DENUM WiFiDirectServiceConfigurationMethod : unsigned int { WiFiDirectServiceConfigurationMethod_Default, WiFiDirectServiceConfigurationMethod_PinDisplay, WiFiDirectServiceConfigurationMethod_PinEntry };

typedef WiFiDirectServiceConfigurationMethod *PWiFiDirectServiceConfigurationMethod;

enum DECLSPEC_DENUM WiFiDirectServiceError : unsigned int { WiFiDirectServiceError_Success, WiFiDirectServiceError_RadioNotAvailable, WiFiDirectServiceError_ResourceInUse, WiFiDirectServiceError_UnsupportedHardware, WiFiDirectServiceError_NoHardware };

enum DECLSPEC_DENUM WiFiDirectServiceIPProtocol : unsigned int { WiFiDirectServiceIPProtocol_Tcp = 6, WiFiDirectServiceIPProtocol_Udp = 17 };

enum DECLSPEC_DENUM WiFiDirectServiceSessionErrorStatus : unsigned int { WiFiDirectServiceSessionErrorStatus_Ok, WiFiDirectServiceSessionErrorStatus_Disassociated, WiFiDirectServiceSessionErrorStatus_LocalClose, WiFiDirectServiceSessionErrorStatus_RemoteClose, WiFiDirectServiceSessionErrorStatus_SystemFailure, WiFiDirectServiceSessionErrorStatus_NoResponseFromRemote };

enum DECLSPEC_DENUM WiFiDirectServiceSessionStatus : unsigned int { WiFiDirectServiceSessionStatus_Closed, WiFiDirectServiceSessionStatus_Initiated, WiFiDirectServiceSessionStatus_Requested, WiFiDirectServiceSessionStatus_Open };

enum DECLSPEC_DENUM WiFiDirectServiceStatus : unsigned int { WiFiDirectServiceStatus_Available, WiFiDirectServiceStatus_Busy, WiFiDirectServiceStatus_Custom };

enum DECLSPEC_DENUM TetheringOperationalState : unsigned int { TetheringOperationalState_Unknown, TetheringOperationalState_On, TetheringOperationalState_Off, TetheringOperationalState_InTransition };

enum DECLSPEC_DENUM TetheringOperationStatus : unsigned int { TetheringOperationStatus_Success, TetheringOperationStatus_Unknown, TetheringOperationStatus_MobileBroadbandDeviceOff, TetheringOperationStatus_WiFiDeviceOff, TetheringOperationStatus_EntitlementCheckTimeout, TetheringOperationStatus_EntitlementCheckFailure, TetheringOperationStatus_OperationInProgress, TetheringOperationStatus_BluetoothDeviceOff, TetheringOperationStatus_NetworkLimitedConnectivity };

enum DECLSPEC_DENUM TetheringCapability : unsigned int { TetheringCapability_Enabled, TetheringCapability_DisabledByGroupPolicy, TetheringCapability_DisabledByHardwareLimitation, TetheringCapability_DisabledByOperator, TetheringCapability_DisabledBySku, TetheringCapability_DisabledByRequiredAppNotInstalled, TetheringCapability_DisabledDueToUnknownCause, TetheringCapability_DisabledBySystemCapability };

enum DECLSPEC_DENUM TetheringWiFiBand : unsigned int { TetheringWiFiBand_Auto, TetheringWiFiBand_TwoPointFourGigahertz, TetheringWiFiBand_FiveGigahertz };

enum DECLSPEC_DENUM WiFiAccessStatus : unsigned int { WiFiAccessStatus_Unspecified, WiFiAccessStatus_Allowed, WiFiAccessStatus_DeniedByUser, WiFiAccessStatus_DeniedBySystem };

typedef _di_IWiFiDirectInformationElement *PIWiFiDirectInformationElement;

typedef _di_INetworkOperatorTetheringClient *PINetworkOperatorTetheringClient;

__interface  INTERFACE_UUID("{F8C75A3A-739A-57AA-986D-1F7604D7E386}") IWiFiAccessStatusAsyncOperation  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall put_Completed(void * handler) = 0 ;
	virtual HRESULT __stdcall get_Completed(/* out */ void * &result) = 0 ;
	virtual HRESULT __stdcall GetResults(/* out */ WiFiAccessStatus &result) = 0 ;
};

__interface  INTERFACE_UUID("{DA25FDDD-D24C-43E3-AABD-C4659F730F99}") IWiFiAdapterStatics  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall FindAllAdaptersAsync(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall GetDeviceSelector(/* out */ void * &deviceSelector) = 0 ;
	virtual HRESULT __stdcall FromIdAsync(void * deviceId, /* out */ void * &asyncOp) = 0 ;
	virtual HRESULT __stdcall RequestAccessAsync(/* out */ _di_IWiFiAccessStatusAsyncOperation &value) = 0 ;
};

__interface  INTERFACE_UUID("{CF806026-C915-553E-AF3C-8DA43871B693}") IWiFiDirectInformationElementIterator  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall get_Current(/* out */ _di_IWiFiDirectInformationElement &current) = 0 ;
	virtual HRESULT __stdcall get_HasCurrent(/* out */ bool &hasCurrent) = 0 ;
	virtual HRESULT __stdcall MoveNext(/* out */ bool &hasCurrent) = 0 ;
	virtual HRESULT __stdcall GetMany(unsigned capacity, /* out */ PIWiFiDirectInformationElement &items, /* out */ unsigned &actual) = 0 ;
};

__interface  INTERFACE_UUID("{19C1CA4E-9561-5253-96D9-DBAF28D47D89}") IWiFiDirectInformationElementIterable  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall First(/* out */ _di_IWiFiDirectInformationElementIterator &first) = 0 ;
};

__interface  INTERFACE_UUID("{6DCFFADB-04C5-535E-ADD4-1389B3BE6ECA}") IWiFiDirectInformationElementVectorView  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall GetAt(unsigned index, /* out */ _di_IWiFiDirectInformationElement &item) = 0 ;
	virtual HRESULT __stdcall get_Size(/* out */ unsigned &size) = 0 ;
	virtual HRESULT __stdcall IndexOf(_di_IWiFiDirectInformationElement item, /* out */ unsigned &index, /* out */ bool &found) = 0 ;
	virtual HRESULT __stdcall GetMany(unsigned startIndex, unsigned capacity, /* out */ PIWiFiDirectInformationElement &items, /* out */ unsigned &actual) = 0 ;
};

__interface  INTERFACE_UUID("{B8C55492-E4DE-5BA7-8476-D3BAB557CDD6}") IWiFiDirectInformationElementVector  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall GetAt(unsigned index, /* out */ _di_IWiFiDirectInformationElement &item) = 0 ;
	virtual HRESULT __stdcall get_Size(/* out */ unsigned &size) = 0 ;
	virtual HRESULT __stdcall GetView(/* out */ _di_IWiFiDirectInformationElementVectorView &view) = 0 ;
	virtual HRESULT __stdcall IndexOf(_di_IWiFiDirectInformationElement item, /* out */ unsigned &index, /* out */ bool &found) = 0 ;
	virtual HRESULT __stdcall SetAt(unsigned index, _di_IWiFiDirectInformationElement item) = 0 ;
	virtual HRESULT __stdcall InsertAt(unsigned index, _di_IWiFiDirectInformationElement item) = 0 ;
	virtual HRESULT __stdcall RemoveAt(unsigned index) = 0 ;
	virtual HRESULT __stdcall Append(_di_IWiFiDirectInformationElement item) = 0 ;
	virtual HRESULT __stdcall RemoveAtEnd(void) = 0 ;
	virtual HRESULT __stdcall Clear(void) = 0 ;
	virtual HRESULT __stdcall GetMany(unsigned startIndex, unsigned capacity, /* out */ PIWiFiDirectInformationElement &items, /* out */ unsigned &actual) = 0 ;
	virtual HRESULT __stdcall ReplaceAll(unsigned count, PIWiFiDirectInformationElement value) = 0 ;
};

__interface  INTERFACE_UUID("{D34ABE17-FB19-57BE-BC41-0EB83DEA151C}") IWiFiDirectDeviceAsyncOperationCompletedHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IWiFiDirectDeviceAsyncOperation asyncInfo, Wclwinapi::AsyncStatus status) = 0 ;
};

__interface  INTERFACE_UUID("{DAD01B61-A82D-566C-BA82-224C11500669}") IWiFiDirectDeviceAsyncOperation  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall put_Completed(_di_IWiFiDirectDeviceAsyncOperationCompletedHandler handler) = 0 ;
	virtual HRESULT __stdcall get_Completed(/* out */ _di_IWiFiDirectDeviceAsyncOperationCompletedHandler &handler) = 0 ;
	virtual HRESULT __stdcall GetResults(/* out */ _di_IWiFiDirectDevice &results) = 0 ;
};

__interface  INTERFACE_UUID("{DE73CBA7-370D-550C-B23A-53DD0B4E480D}") IWiFiDirectAdvertisementPublisherStatusChangedEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IWiFiDirectAdvertisementPublisher sender, _di_IWiFiDirectAdvertisementPublisherStatusChangedEventArgs e) = 0 ;
};

__interface  INTERFACE_UUID("{D04B0403-1FE2-532F-8E47-4823A14E624F}") IWiFiDirectConnectionRequestedEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IWiFiDirectConnectionListener sender, _di_IWiFiDirectConnectionRequestedEventArgs e) = 0 ;
};

__interface  INTERFACE_UUID("{9208929A-2A3C-50AD-AA08-A0A986EDBABE}") IWiFiDirectDeviceEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IWiFiDirectDevice sender, Wclwinapi::_di_IInspectable e) = 0 ;
};

__interface  INTERFACE_UUID("{E86CB57C-3AAC-4851-A792-482AAF931B04}") IWiFiDirectDeviceStatics  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall GetDeviceSelector(/* out */ void * &deviceSelector) = 0 ;
	virtual HRESULT __stdcall FromIdAsync(void * deviceId, /* out */ _di_IWiFiDirectDeviceAsyncOperation &asyncOp) = 0 ;
};

__interface  INTERFACE_UUID("{1A953E49-B103-437E-9226-AB67971342F9}") IWiFiDirectDeviceStatics2  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall GetDeviceSelector(WiFiDirectDeviceSelectorType type_, /* out */ void * &result) = 0 ;
	virtual HRESULT __stdcall FromIdAsync(void * deviceId, _di_IWiFiDirectConnectionParameters connectionParameters, /* out */ _di_IWiFiDirectDeviceAsyncOperation &result) = 0 ;
};

__interface  INTERFACE_UUID("{DBD02F16-11A5-4E60-8CAA-34772148378A}") IWiFiDirectInformationElementStatics  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall CreateFromBuffer(Wclwinapi::_di_IBuffer buffer, /* out */ _di_IWiFiDirectInformationElementVector &result) = 0 ;
	virtual HRESULT __stdcall CreateFromDeviceInformation(Wclwinapi::_di_IDeviceInformation deviceInformation, /* out */ _di_IWiFiDirectInformationElementVector &result) = 0 ;
};

__interface  INTERFACE_UUID("{AFFB72D6-76BB-497E-AC8B-DC72838BC309}") IWiFiDirectInformationElement  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall get_Oui(/* out */ Wclwinapi::_di_IBuffer &value) = 0 ;
	virtual HRESULT __stdcall put_Oui(Wclwinapi::_di_IBuffer value) = 0 ;
	virtual HRESULT __stdcall get_OuiType(/* out */ System::Byte &value) = 0 ;
	virtual HRESULT __stdcall put_OuiType(System::Byte value) = 0 ;
	virtual HRESULT __stdcall get_Value(/* out */ Wclwinapi::_di_IBuffer &value) = 0 ;
	virtual HRESULT __stdcall put_Value(Wclwinapi::_di_IBuffer value) = 0 ;
};

__interface  INTERFACE_UUID("{A64FDBBA-F2FD-4567-A91B-F5C2F5321057}") IWiFiDirectLegacySettings  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall get_IsEnabled(/* out */ bool &value) = 0 ;
	virtual HRESULT __stdcall put_IsEnabled(bool value) = 0 ;
	virtual HRESULT __stdcall get_Ssid(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall put_Ssid(void * value) = 0 ;
	virtual HRESULT __stdcall get_Passphrase(/* out */ Wclwinapi::_di_IPasswordCredential &value) = 0 ;
	virtual HRESULT __stdcall put_Passphrase(Wclwinapi::_di_IPasswordCredential value) = 0 ;
};

__interface  INTERFACE_UUID("{AB511A2D-2A06-49A1-A584-61435C7905A6}") IWiFiDirectAdvertisement  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall get_InformationElements(/* out */ _di_IWiFiDirectInformationElementVector &value) = 0 ;
	virtual HRESULT __stdcall put_InformationElements(_di_IWiFiDirectInformationElementVector value) = 0 ;
	virtual HRESULT __stdcall get_ListenStateDiscoverability(/* out */ WiFiDirectAdvertisementListenStateDiscoverability &value) = 0 ;
	virtual HRESULT __stdcall put_ListenStateDiscoverability(WiFiDirectAdvertisementListenStateDiscoverability value) = 0 ;
	virtual HRESULT __stdcall get_IsAutonomousGroupOwnerEnabled(/* out */ bool &value) = 0 ;
	virtual HRESULT __stdcall put_IsAutonomousGroupOwnerEnabled(bool value) = 0 ;
	virtual HRESULT __stdcall get_LegacySettings(/* out */ _di_IWiFiDirectLegacySettings &value) = 0 ;
};

__interface  INTERFACE_UUID("{AAFDE53C-5481-46E6-90DD-32116518F192}") IWiFiDirectAdvertisementPublisherStatusChangedEventArgs  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall get_Status(/* out */ WiFiDirectAdvertisementPublisherStatus &value) = 0 ;
	virtual HRESULT __stdcall get_Error(/* out */ WiFiDirectError &value) = 0 ;
};

__interface  INTERFACE_UUID("{B35A2D1A-9B1F-45D9-925A-694D66DF68EF}") IWiFiDirectAdvertisementPublisher  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall get_Advertisement(/* out */ _di_IWiFiDirectAdvertisement &value) = 0 ;
	virtual HRESULT __stdcall get_Status(/* out */ WiFiDirectAdvertisementPublisherStatus &value) = 0 ;
	virtual HRESULT __stdcall add_StatusChanged(_di_IWiFiDirectAdvertisementPublisherStatusChangedEventHandler handler, /* out */ Wclwinapi::EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_StatusChanged(const Wclwinapi::EventRegistrationToken token) = 0 ;
	virtual HRESULT __stdcall Start(void) = 0 ;
	virtual HRESULT __stdcall Stop(void) = 0 ;
};

__interface  INTERFACE_UUID("{B2E55405-5702-4B16-A02C-BBCD21EF6098}") IWiFiDirectConnectionParameters  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall get_GroupOwnerIntent(/* out */ short &value) = 0 ;
	virtual HRESULT __stdcall put_GroupOwnerIntent(short value) = 0 ;
};

__interface  INTERFACE_UUID("{F99D20BE-D38D-484F-8215-E7B65ABF244C}") IWiFiDirectConnectionRequestedEventArgs  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall GetConnectionRequest(/* out */ _di_IWiFiDirectConnectionRequest &result) = 0 ;
};

__interface  INTERFACE_UUID("{699C1B0D-8D13-4EE9-B9EC-9C72F8251F7D}") IWiFiDirectConnectionListener  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall add_ConnectionRequested(_di_IWiFiDirectConnectionRequestedEventHandler handler, /* out */ Wclwinapi::EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_ConnectionRequested(const Wclwinapi::EventRegistrationToken token) = 0 ;
};

__interface  INTERFACE_UUID("{72DEAAA8-72EB-4DAE-8A28-8513355D2777}") IWiFiDirectDevice  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall get_ConnectionStatus(/* out */ WiFiDirectConnectionStatus &value) = 0 ;
	virtual HRESULT __stdcall get_DeviceId(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall add_ConnectionStatusChanged(_di_IWiFiDirectDeviceEventHandler handler, /* out */ Wclwinapi::EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_ConnectionStatusChanged(const Wclwinapi::EventRegistrationToken token) = 0 ;
	virtual HRESULT __stdcall GetConnectionEndpointPairs(/* out */ Wclwinapi::_di_IEndpointPairVectorView &value) = 0 ;
};

__interface  INTERFACE_UUID("{8EB99605-914F-49C3-A614-D18DC5B19B43}") IWiFiDirectConnectionRequest  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall get_DeviceInformation(/* out */ Wclwinapi::_di_IDeviceInformation &value) = 0 ;
};

__interface  INTERFACE_UUID("{201940F9-A368-57F4-9EF2-3F64E243E0A4}") IWiFiDirectConfigurationMethodIterator  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall get_Current(/* out */ WiFiDirectConfigurationMethod &current) = 0 ;
	virtual HRESULT __stdcall get_HasCurrent(/* out */ bool &hasCurrent) = 0 ;
	virtual HRESULT __stdcall MoveNext(/* out */ bool &hasCurrent) = 0 ;
	virtual HRESULT __stdcall GetMany(unsigned capacity, /* out */ PWiFiDirectConfigurationMethod &items, /* out */ unsigned &actual) = 0 ;
};

__interface  INTERFACE_UUID("{794F12DA-2DC6-5277-82DC-B0781610537B}") IWiFiDirectConfigurationMethodIterable  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall First(/* out */ _di_IWiFiDirectConfigurationMethodIterator &first) = 0 ;
};

__interface  INTERFACE_UUID("{61A32670-04D3-551D-AD66-BD04E9EF5C78}") IWiFiDirectConfigurationMethodVectorView  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall GetAt(unsigned index, /* out */ WiFiDirectConfigurationMethod &item) = 0 ;
	virtual HRESULT __stdcall get_Size(/* out */ unsigned &size) = 0 ;
	virtual HRESULT __stdcall IndexOf(WiFiDirectConfigurationMethod item, /* out */ unsigned &index, /* out */ bool &found) = 0 ;
	virtual HRESULT __stdcall GetMany(unsigned startIndex, unsigned capacity, /* out */ PWiFiDirectConfigurationMethod &items, /* out */ unsigned &actual) = 0 ;
};

__interface  INTERFACE_UUID("{9B498BC0-B474-5587-B65C-E600965F8FD0}") IWiFiDirectConfigurationMethodVector  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall GetAt(unsigned index, /* out */ WiFiDirectConfigurationMethod &item) = 0 ;
	virtual HRESULT __stdcall get_Size(/* out */ unsigned &size) = 0 ;
	virtual HRESULT __stdcall GetView(/* out */ _di_IWiFiDirectConfigurationMethodVectorView &view) = 0 ;
	virtual HRESULT __stdcall IndexOf(WiFiDirectConfigurationMethod item, /* out */ unsigned &index, /* out */ bool &found) = 0 ;
	virtual HRESULT __stdcall SetAt(unsigned index, WiFiDirectConfigurationMethod item) = 0 ;
	virtual HRESULT __stdcall InsertAt(unsigned index, WiFiDirectConfigurationMethod item) = 0 ;
	virtual HRESULT __stdcall RemoveAt(unsigned index) = 0 ;
	virtual HRESULT __stdcall Append(WiFiDirectConfigurationMethod item) = 0 ;
	virtual HRESULT __stdcall RemoveAtEnd(void) = 0 ;
	virtual HRESULT __stdcall Clear(void) = 0 ;
	virtual HRESULT __stdcall GetMany(unsigned startIndex, unsigned capacity, /* out */ PWiFiDirectConfigurationMethod &items, /* out */ unsigned &actual) = 0 ;
	virtual HRESULT __stdcall ReplaceAll(unsigned count, PWiFiDirectConfigurationMethod value) = 0 ;
};

__interface  INTERFACE_UUID("{B759AA46-D816-491B-917A-B40D7DC403A2}") IWiFiDirectAdvertisement2  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall get_SupportedConfigurationMethods(/* out */ _di_IWiFiDirectConfigurationMethodVector &value) = 0 ;
};

__interface  INTERFACE_UUID("{AB3B0FBE-AA82-44B4-88C8-E3056B89801D}") IWiFiDirectConnectionParameters2  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall get_PreferenceOrderedConfigurationMethods(/* out */ _di_IWiFiDirectConfigurationMethodVector &value) = 0 ;
	virtual HRESULT __stdcall get_PreferredPairingProcedure(/* out */ WiFiDirectPairingProcedure &value) = 0 ;
	virtual HRESULT __stdcall put_PreferredPairingProcedure(WiFiDirectPairingProcedure value) = 0 ;
};

__interface  INTERFACE_UUID("{598AF493-7642-456F-B9D8-E8A9EB1F401A}") IWiFiDirectConnectionParametersStatics  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall GetDevicePairingKinds(WiFiDirectConfigurationMethod configurationMethod, /* out */ Wclwinapi::DevicePairingKinds &result) = 0 ;
};

__interface  INTERFACE_UUID("{19889F5E-49AE-5E31-B059-083F9F1532C3}") IWiFiDirectServiceConfigurationMethodIterator  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall get_Current(/* out */ WiFiDirectServiceConfigurationMethod &current) = 0 ;
	virtual HRESULT __stdcall get_HasCurrent(/* out */ bool &hasCurrent) = 0 ;
	virtual HRESULT __stdcall MoveNext(/* out */ bool &hasCurrent) = 0 ;
	virtual HRESULT __stdcall GetMany(unsigned capacity, /* out */ PWiFiDirectServiceConfigurationMethod &items, /* out */ unsigned &actual) = 0 ;
};

__interface  INTERFACE_UUID("{D9773B1A-A148-58BF-9C4B-AFEAC9BE3AB4}") IWiFiDirectServiceConfigurationMethodIterable  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall First(/* out */ _di_IWiFiDirectServiceConfigurationMethodIterator &first) = 0 ;
};

__interface  INTERFACE_UUID("{DC710FE1-7F04-515B-8AC1-1C5D3C0D2B28}") IWiFiDirectServiceConfigurationMethodVectorView  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall GetAt(unsigned index, /* out */ WiFiDirectServiceConfigurationMethod &item) = 0 ;
	virtual HRESULT __stdcall get_Size(/* out */ unsigned &size) = 0 ;
	virtual HRESULT __stdcall IndexOf(WiFiDirectServiceConfigurationMethod item, /* out */ unsigned &index, /* out */ bool &found) = 0 ;
	virtual HRESULT __stdcall GetMany(unsigned startIndex, unsigned capacity, /* out */ PWiFiDirectServiceConfigurationMethod &items, /* out */ unsigned &actual) = 0 ;
};

__interface  INTERFACE_UUID("{F6A6F91C-0579-565D-BE07-4538A55690BE}") IWiFiDirectServiceConfigurationMethodVector  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall GetAt(unsigned index, /* out */ WiFiDirectServiceConfigurationMethod &item) = 0 ;
	virtual HRESULT __stdcall get_Size(/* out */ unsigned &size) = 0 ;
	virtual HRESULT __stdcall GetView(/* out */ _di_IWiFiDirectServiceConfigurationMethodVectorView &view) = 0 ;
	virtual HRESULT __stdcall IndexOf(WiFiDirectServiceConfigurationMethod item, /* out */ unsigned &index, /* out */ bool &found) = 0 ;
	virtual HRESULT __stdcall SetAt(unsigned index, WiFiDirectServiceConfigurationMethod item) = 0 ;
	virtual HRESULT __stdcall InsertAt(unsigned index, WiFiDirectServiceConfigurationMethod item) = 0 ;
	virtual HRESULT __stdcall RemoveAt(unsigned index) = 0 ;
	virtual HRESULT __stdcall Append(WiFiDirectServiceConfigurationMethod item) = 0 ;
	virtual HRESULT __stdcall RemoveAtEnd(void) = 0 ;
	virtual HRESULT __stdcall Clear(void) = 0 ;
	virtual HRESULT __stdcall GetMany(unsigned startIndex, unsigned capacity, /* out */ PWiFiDirectServiceConfigurationMethod &items, /* out */ unsigned &actual) = 0 ;
	virtual HRESULT __stdcall ReplaceAll(unsigned count, PWiFiDirectServiceConfigurationMethod value) = 0 ;
};

__interface  INTERFACE_UUID("{F505A3C8-4837-5E0E-8A4D-1E2AF5477E5C}") IWiFiDirectServiceAsyncOperationCompletedHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IWiFiDirectServiceAsyncOperation asyncInfo, Wclwinapi::AsyncStatus status) = 0 ;
};

__interface  INTERFACE_UUID("{C4FA2AE8-4FF7-5AA0-AF97-ED85EA66F9AE}") IWiFiDirectServiceAsyncOperation  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall put_Completed(_di_IWiFiDirectServiceAsyncOperationCompletedHandler handler) = 0 ;
	virtual HRESULT __stdcall get_Completed(/* out */ _di_IWiFiDirectServiceAsyncOperationCompletedHandler &handler) = 0 ;
	virtual HRESULT __stdcall GetResults(/* out */ _di_IWiFiDirectService &results) = 0 ;
};

__interface  INTERFACE_UUID("{94CB9568-040A-5186-A3C9-52680EE17984}") IWiFiDirectServiceProvisioningInfoAsyncOperationCompletedHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IWiFiDirectServiceProvisioningInfoAsyncOperation asyncInfo, Wclwinapi::AsyncStatus status) = 0 ;
};

__interface  INTERFACE_UUID("{D7FA4DC4-4730-506E-BFF0-801EB4A831A8}") IWiFiDirectServiceProvisioningInfoAsyncOperation  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall put_Completed(_di_IWiFiDirectServiceProvisioningInfoAsyncOperationCompletedHandler handler) = 0 ;
	virtual HRESULT __stdcall get_Completed(/* out */ _di_IWiFiDirectServiceProvisioningInfoAsyncOperationCompletedHandler &handler) = 0 ;
	virtual HRESULT __stdcall GetResults(/* out */ _di_IWiFiDirectServiceProvisioningInfo &results) = 0 ;
};

__interface  INTERFACE_UUID("{B29DE711-60B8-59DA-8F4D-FC79D8CCD422}") IWiFiDirectServiceSessionAsyncOperationCompletedHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IWiFiDirectServiceSessionAsyncOperation asyncInfo, Wclwinapi::AsyncStatus status) = 0 ;
};

__interface  INTERFACE_UUID("{C2DA4E97-728B-5401-A9D9-3A0185450AF2}") IWiFiDirectServiceSessionAsyncOperation  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall put_Completed(_di_IWiFiDirectServiceSessionAsyncOperationCompletedHandler handler) = 0 ;
	virtual HRESULT __stdcall get_Completed(/* out */ _di_IWiFiDirectServiceSessionAsyncOperationCompletedHandler &handler) = 0 ;
	virtual HRESULT __stdcall GetResults(/* out */ _di_IWiFiDirectServiceSession &results) = 0 ;
};

__interface  INTERFACE_UUID("{FC3DFC2C-9CFA-5822-BA3F-FF3AFB65777E}") IWiFiDirectServiceSessionDeferredEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IWiFiDirectService sender, _di_IWiFiDirectServiceSessionDeferredEventArgs e) = 0 ;
};

__interface  INTERFACE_UUID("{67FC3121-C1A0-5C23-AF58-ECB7F2A7D773}") IWiFiDirectServiceAdvertiserEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IWiFiDirectServiceAdvertiser sender, Wclwinapi::_di_IInspectable e) = 0 ;
};

__interface  INTERFACE_UUID("{3BE2D508-A856-5C09-9998-522597B44B07}") IWiFiDirectServiceAutoAcceptSessionConnectedEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IWiFiDirectServiceAdvertiser sender, _di_IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs e) = 0 ;
};

__interface  INTERFACE_UUID("{CB98FD74-871D-5730-91FE-81EF947FE78F}") IWiFiDirectServiceSessionRequestedEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IWiFiDirectServiceAdvertiser sender, _di_IWiFiDirectServiceSessionRequestedEventArgs e) = 0 ;
};

__interface  INTERFACE_UUID("{10C33301-E31C-5CCE-B2A0-C1DC2D8D0E13}") IWiFiDirectServiceSessionEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IWiFiDirectServiceSession sender, Wclwinapi::_di_IInspectable e) = 0 ;
};

__interface  INTERFACE_UUID("{8326A337-3C19-57A7-80EC-CCA2EA62EF12}") IWiFiDirectServiceRemotePortAddedEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IWiFiDirectServiceSession sender, _di_IWiFiDirectServiceRemotePortAddedEventArgs e) = 0 ;
};

__interface  INTERFACE_UUID("{50AABBB8-5F71-45EC-84F1-A1E4FC7879A3}") IWiFiDirectService  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall get_RemoteServiceInfo(/* out */ Wclwinapi::_di_IBuffer &value) = 0 ;
	virtual HRESULT __stdcall get_SupportedConfigurationMethods(/* out */ _di_IWiFiDirectServiceConfigurationMethodVectorView &value) = 0 ;
	virtual HRESULT __stdcall get_PreferGroupOwnerMode(/* out */ bool &value) = 0 ;
	virtual HRESULT __stdcall put_PreferGroupOwnerMode(bool value) = 0 ;
	virtual HRESULT __stdcall get_SessionInfo(/* out */ Wclwinapi::_di_IBuffer &value) = 0 ;
	virtual HRESULT __stdcall put_SessionInfo(Wclwinapi::_di_IBuffer value) = 0 ;
	virtual HRESULT __stdcall get_ServiceError(/* out */ WiFiDirectServiceError &value) = 0 ;
	virtual HRESULT __stdcall add_SessionDeferred(_di_IWiFiDirectServiceSessionDeferredEventHandler handler, /* out */ Wclwinapi::EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_SessionDeferred(const Wclwinapi::EventRegistrationToken token) = 0 ;
	virtual HRESULT __stdcall GetProvisioningInfoAsync(WiFiDirectServiceConfigurationMethod selectedConfigurationMethod, /* out */ _di_IWiFiDirectServiceProvisioningInfoAsyncOperation &result) = 0 ;
	virtual HRESULT __stdcall ConnectAsync(/* out */ _di_IWiFiDirectServiceSessionAsyncOperation &result) = 0 ;
	virtual HRESULT __stdcall ConnectAsyncWithPin(void * pin, /* out */ _di_IWiFiDirectServiceSessionAsyncOperation &result) = 0 ;
};

__interface  INTERFACE_UUID("{A4AA1EE1-9D8F-4F4F-93EE-7DDEA2E37F46}") IWiFiDirectServiceAdvertiser  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall get_ServiceName(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall get_ServiceNamePrefixes(/* out */ Wclwinapi::_di_IHSTRINGVector &value) = 0 ;
	virtual HRESULT __stdcall get_ServiceInfo(/* out */ Wclwinapi::_di_IBuffer &value) = 0 ;
	virtual HRESULT __stdcall put_ServiceInfo(Wclwinapi::_di_IBuffer value) = 0 ;
	virtual HRESULT __stdcall get_AutoAcceptSession(/* out */ bool &value) = 0 ;
	virtual HRESULT __stdcall put_AutoAcceptSession(bool value) = 0 ;
	virtual HRESULT __stdcall get_PreferGroupOwnerMode(/* out */ bool &value) = 0 ;
	virtual HRESULT __stdcall put_PreferGroupOwnerMode(bool value) = 0 ;
	virtual HRESULT __stdcall get_PreferredConfigurationMethods(/* out */ _di_IWiFiDirectServiceConfigurationMethodVector &value) = 0 ;
	virtual HRESULT __stdcall get_ServiceStatus(/* out */ WiFiDirectServiceStatus &value) = 0 ;
	virtual HRESULT __stdcall put_ServiceStatus(WiFiDirectServiceStatus value) = 0 ;
	virtual HRESULT __stdcall get_CustomServiceStatusCode(/* out */ unsigned &value) = 0 ;
	virtual HRESULT __stdcall put_CustomServiceStatusCode(unsigned value) = 0 ;
	virtual HRESULT __stdcall get_DeferredSessionInfo(/* out */ Wclwinapi::_di_IBuffer &value) = 0 ;
	virtual HRESULT __stdcall put_DeferredSessionInfo(Wclwinapi::_di_IBuffer value) = 0 ;
	virtual HRESULT __stdcall get_AdvertisementStatus(/* out */ WiFiDirectServiceAdvertisementStatus &value) = 0 ;
	virtual HRESULT __stdcall get_ServiceError(/* out */ WiFiDirectServiceError &value) = 0 ;
	virtual HRESULT __stdcall add_SessionRequested(_di_IWiFiDirectServiceSessionRequestedEventHandler handler, /* out */ Wclwinapi::EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_SessionRequested(const Wclwinapi::EventRegistrationToken token) = 0 ;
	virtual HRESULT __stdcall add_AutoAcceptSessionConnected(_di_IWiFiDirectServiceAutoAcceptSessionConnectedEventHandler handler, /* out */ Wclwinapi::EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_AutoAcceptSessionConnected(const Wclwinapi::EventRegistrationToken token) = 0 ;
	virtual HRESULT __stdcall add_AdvertisementStatusChanged(_di_IWiFiDirectServiceAdvertiserEventHandler handler, /* out */ Wclwinapi::EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_AdvertisementStatusChanged(const Wclwinapi::EventRegistrationToken token) = 0 ;
	virtual HRESULT __stdcall ConnectAsync(Wclwinapi::_di_IDeviceInformation deviceInfo, /* out */ _di_IWiFiDirectServiceSessionAsyncOperation &result) = 0 ;
	virtual HRESULT __stdcall ConnectAsyncWithPin(Wclwinapi::_di_IDeviceInformation deviceInfo, void * pin, /* out */ _di_IWiFiDirectServiceSessionAsyncOperation &result) = 0 ;
	virtual HRESULT __stdcall Start(void) = 0 ;
	virtual HRESULT __stdcall Stop(void) = 0 ;
};

__interface  INTERFACE_UUID("{3106AC0D-B446-4F13-9F9A-8AE925FEBA2B}") IWiFiDirectServiceAdvertiserFactory  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall CreateWiFiDirectServiceAdvertiser(void * serviceName, /* out */ _di_IWiFiDirectServiceAdvertiser &result) = 0 ;
};

__interface  INTERFACE_UUID("{DCD9E01E-83DF-43E5-8F43-CBE8479E84EB}") IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall get_Session(/* out */ _di_IWiFiDirectServiceSession &value) = 0 ;
	virtual HRESULT __stdcall get_SessionInfo(/* out */ Wclwinapi::_di_IBuffer &value) = 0 ;
};

__interface  INTERFACE_UUID("{8BDB7CFE-97D9-45A2-8E99-DB50910FB6A6}") IWiFiDirectServiceProvisioningInfo  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall get_SelectedConfigurationMethod(/* out */ WiFiDirectServiceConfigurationMethod &value) = 0 ;
	virtual HRESULT __stdcall get_IsGroupFormationNeeded(/* out */ bool &value) = 0 ;
};

__interface  INTERFACE_UUID("{D4CEBAC1-3FD3-4F0E-B7BD-782906F44411}") IWiFiDirectServiceRemotePortAddedEventArgs  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall get_EndpointPairs(/* out */ Wclwinapi::_di_IEndpointPairVectorView &value) = 0 ;
	virtual HRESULT __stdcall get_Protocol(/* out */ WiFiDirectServiceIPProtocol &value) = 0 ;
};

__interface  INTERFACE_UUID("{81142163-E426-47CB-8640-E1B3588BF26F}") IWiFiDirectServiceSession  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall get_ServiceName(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall get_Status(/* out */ WiFiDirectServiceSessionStatus &value) = 0 ;
	virtual HRESULT __stdcall get_ErrorStatus(/* out */ WiFiDirectServiceSessionErrorStatus &value) = 0 ;
	virtual HRESULT __stdcall get_SessionId(/* out */ unsigned &value) = 0 ;
	virtual HRESULT __stdcall get_AdvertisementId(/* out */ unsigned &value) = 0 ;
	virtual HRESULT __stdcall get_ServiceAddress(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall get_SessionAddress(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall GetConnectionEndpointPairs(/* out */ Wclwinapi::_di_IEndpointPairVectorView &value) = 0 ;
	virtual HRESULT __stdcall add_SessionStatusChanged(_di_IWiFiDirectServiceSessionEventHandler handler, /* out */ Wclwinapi::EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_SessionStatusChanged(const Wclwinapi::EventRegistrationToken token) = 0 ;
	virtual HRESULT __stdcall AddStreamSocketListenerAsync(Wclwinapi::_di_IStreamSocketListener value, /* out */ Wclwinapi::_di_IAsyncAction &result) = 0 ;
	virtual HRESULT __stdcall AddDatagramSocketAsync(Wclwinapi::_di_IInspectable value, /* out */ Wclwinapi::_di_IAsyncAction &result) = 0 ;
	virtual HRESULT __stdcall add_RemotePortAdded(_di_IWiFiDirectServiceRemotePortAddedEventHandler handler, /* out */ Wclwinapi::EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_RemotePortAdded(const Wclwinapi::EventRegistrationToken token) = 0 ;
};

__interface  INTERFACE_UUID("{8DFC197F-1201-4F1F-B6F4-5DF1B7B9FB2E}") IWiFiDirectServiceSessionDeferredEventArgs  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall get_DeferredSessionInfo(/* out */ Wclwinapi::_di_IBuffer &value) = 0 ;
};

__interface  INTERFACE_UUID("{A0E27C8B-50CB-4A58-9BCF-E472B99FBA04}") IWiFiDirectServiceSessionRequest  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall get_DeviceInformation(/* out */ Wclwinapi::_di_IDeviceInformation &value) = 0 ;
	virtual HRESULT __stdcall get_ProvisioningInfo(/* out */ _di_IWiFiDirectServiceProvisioningInfo &value) = 0 ;
	virtual HRESULT __stdcall get_SessionInfo(/* out */ Wclwinapi::_di_IBuffer &value) = 0 ;
};

__interface  INTERFACE_UUID("{74BDCC11-53D6-4999-B4F8-6C8ECC1771E7}") IWiFiDirectServiceSessionRequestedEventArgs  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall GetSessionRequest(/* out */ _di_IWiFiDirectServiceSessionRequest &value) = 0 ;
};

__interface  INTERFACE_UUID("{7DB40045-FD74-4688-B725-5DCE86ACF233}") IWiFiDirectServiceStatics  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall GetSelector(void * serviceName, /* out */ void * &serviceSelector) = 0 ;
	virtual HRESULT __stdcall GetSelectorWithFilter(void * serviceName, Wclwinapi::_di_IBuffer serviceInfoFilter, /* out */ void * &serviceSelector) = 0 ;
	virtual HRESULT __stdcall FromIdAsync(void * deviceId, /* out */ _di_IWiFiDirectServiceAsyncOperation &asyncOp) = 0 ;
};

__interface  INTERFACE_UUID("{D45A8DA0-0E86-4D98-8BA4-DD70D4B764D3}") INetworkOperatorTetheringManager  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall get_MaxClientCount(/* out */ unsigned &value) = 0 ;
	virtual HRESULT __stdcall get_ClientCount(/* out */ unsigned &value) = 0 ;
	virtual HRESULT __stdcall get_TetheringOperationalState(/* out */ TetheringOperationalState &value) = 0 ;
	virtual HRESULT __stdcall GetCurrentAccessPointConfiguration(/* out */ _di_INetworkOperatorTetheringAccessPointConfiguration &configuration) = 0 ;
	virtual HRESULT __stdcall ConfigureAccessPointAsync(_di_INetworkOperatorTetheringAccessPointConfiguration configuration, /* out */ Wclwinapi::_di_IAsyncAction &asyncInfo) = 0 ;
	virtual HRESULT __stdcall StartTetheringAsync(/* out */ _di_INetworkOperatorTetheringOperationResultAsyncOperation &asyncInfo) = 0 ;
	virtual HRESULT __stdcall StopTetheringAsync(/* out */ _di_INetworkOperatorTetheringOperationResultAsyncOperation &asyncInfo) = 0 ;
};

__interface  INTERFACE_UUID("{0BCC0284-412E-403D-ACC6-B757E34774A4}") INetworkOperatorTetheringAccessPointConfiguration  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall get_Ssid(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall put_Ssid(void * value) = 0 ;
	virtual HRESULT __stdcall get_Passphrase(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall put_Passphrase(void * value) = 0 ;
};

__interface  INTERFACE_UUID("{601B30ED-9B7F-54B6-B61B-24A09BC56304}") INetworkOperatorTetheringOperationResultAsyncOperation  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall put_Completed(_di_INetworkOperatorTetheringOperationResultAsyncOperationCompletedHandler handler) = 0 ;
	virtual HRESULT __stdcall get_Completed(/* out */ _di_INetworkOperatorTetheringOperationResultAsyncOperationCompletedHandler &handler) = 0 ;
	virtual HRESULT __stdcall GetResults(/* out */ _di_INetworkOperatorTetheringOperationResult &results) = 0 ;
};

__interface  INTERFACE_UUID("{A936B927-7537-59C6-89DE-33F36A9725AB}") INetworkOperatorTetheringOperationResultAsyncOperationCompletedHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_INetworkOperatorTetheringOperationResultAsyncOperation asyncInfo, Wclwinapi::AsyncStatus status) = 0 ;
};

__interface  INTERFACE_UUID("{EBD203A1-01BA-476D-B4B3-BF3D12C8F80C}") INetworkOperatorTetheringOperationResult  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall get_Status(/* out */ TetheringOperationStatus &value) = 0 ;
	virtual HRESULT __stdcall get_AdditionalErrorMessage(/* out */ void * &value) = 0 ;
};

__interface  INTERFACE_UUID("{3EBCBACC-F8C3-405C-9964-70A1EEABE194}") INetworkOperatorTetheringManagerStatics  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall GetTetheringCapability(void * networkAccountId, /* out */ TetheringCapability &value) = 0 ;
	virtual HRESULT __stdcall CreateFromNetworkAccountId(void * networkAccountId, /* out */ _di_INetworkOperatorTetheringManager &ppManager) = 0 ;
};

__interface  INTERFACE_UUID("{5B235412-35F0-49E7-9B08-16D278FBAA42}") INetworkOperatorTetheringManagerStatics2  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall GetTetheringCapabilityFromConnectionProfile(Wclwinapi::_di_IConnectionProfile profile, /* out */ TetheringCapability &result) = 0 ;
	virtual HRESULT __stdcall CreateFromConnectionProfile(Wclwinapi::_di_IConnectionProfile profile, /* out */ _di_INetworkOperatorTetheringManager &ppManager) = 0 ;
};

__interface  INTERFACE_UUID("{8FDAADB6-4AF9-4F21-9B58-D53E9F24231E}") INetworkOperatorTetheringManagerStatics3  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall CreateFromConnectionProfileWithTargetAdapter(Wclwinapi::_di_IConnectionProfile profile, Wclwinapi::_di_INetworkAdapter adapter, /* out */ _di_INetworkOperatorTetheringManager &ppManager) = 0 ;
};

__interface  INTERFACE_UUID("{B3B9F9D0-EBFF-46A4-A847-D663D8B0977E}") INetworkOperatorTetheringManagerStatics4  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall IsNoConnectionsTimeoutEnabled(/* out */ bool &result) = 0 ;
	virtual HRESULT __stdcall EnableNoConnectionsTimeout(void) = 0 ;
	virtual HRESULT __stdcall EnableNoConnectionsTimeoutAsync(/* out */ Wclwinapi::_di_IAsyncAction &operation) = 0 ;
	virtual HRESULT __stdcall DisableNoConnectionsTimeout(void) = 0 ;
	virtual HRESULT __stdcall DisableNoConnectionsTimeoutAsync(/* out */ Wclwinapi::_di_IAsyncAction &operation) = 0 ;
};

__interface  INTERFACE_UUID("{5074F851-950D-4165-9C15-365619481EEA}") INetworkInformationStatics  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall GetConnectionProfiles(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall GetInternetConnectionProfile(/* out */ Wclwinapi::_di_IConnectionProfile &value) = 0 ;
	virtual HRESULT __stdcall GetLanIdentifiers(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall GetHostNames(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall GetProxyConfigurationAsync(void * uri, /* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall GetSortedEndpointPairs(void * destinationList, unsigned sortOptions, /* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall add_NetworkStatusChanged(void * networkStatusHandler, /* out */ Wclwinapi::EventRegistrationToken &eventCookie) = 0 ;
	virtual HRESULT __stdcall remove_NetworkStatusChanged(const Wclwinapi::EventRegistrationToken eventCookie) = 0 ;
};

__interface  INTERFACE_UUID("{91B14016-8DCA-4225-BBED-EEF8B8D718D7}") INetworkOperatorTetheringClientManager  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall GetTetheringClients(/* out */ _di_INetworkOperatorTetheringClientVectorView &value) = 0 ;
};

__interface  INTERFACE_UUID("{E21D6797-4EF6-553F-B7F9-5ED74BCEBD7E}") INetworkOperatorTetheringClientVectorView  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall GetAt(unsigned index, /* out */ _di_INetworkOperatorTetheringClient &item) = 0 ;
	virtual HRESULT __stdcall get_Size(/* out */ unsigned &size) = 0 ;
	virtual HRESULT __stdcall IndexOf(_di_INetworkOperatorTetheringClient item, /* out */ unsigned &index, /* out */ bool &found) = 0 ;
	virtual HRESULT __stdcall GetMany(unsigned startIndex, unsigned capacity, /* out */ PINetworkOperatorTetheringClient &titems, /* out */ unsigned &actual) = 0 ;
};

__interface  INTERFACE_UUID("{709D254C-595F-4847-BB30-646935542918}") INetworkOperatorTetheringClient  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall get_MacAddress(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall get_HostNames(/* out */ Wclwinapi::_di_IHostNameVectorView &value) = 0 ;
};

__interface  INTERFACE_UUID("{B1809142-7238-59A0-928B-74AB46FD64B6}") INetworkOperatorTetheringAccessPointConfiguration2  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall IsBandSupported(TetheringWiFiBand band, /* out */ bool &result) = 0 ;
	virtual HRESULT __stdcall IsBandSupportedAsync(TetheringWiFiBand band, /* out */ Wclwinapi::_di_IBooleanAsyncOperation &operation) = 0 ;
	virtual HRESULT __stdcall get_Band(/* out */ TetheringWiFiBand &value) = 0 ;
	virtual HRESULT __stdcall put_Band(TetheringWiFiBand value) = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 DOT11_SSID_MAX_LENGTH = System::Int8(0x20);
static const System::Int8 DOT11_AUTH_ALGO_80211_OPEN = System::Int8(0x1);
static const System::Int8 DOT11_AUTH_ALGO_80211_SHARED_KEY = System::Int8(0x2);
static const System::Int8 DOT11_AUTH_ALGO_WPA = System::Int8(0x3);
static const System::Int8 DOT11_AUTH_ALGO_WPA_PSK = System::Int8(0x4);
static const System::Int8 DOT11_AUTH_ALGO_WPA_NONE = System::Int8(0x5);
static const System::Int8 DOT11_AUTH_ALGO_RSNA = System::Int8(0x6);
static const System::Int8 DOT11_AUTH_ALGO_RSNA_PSK = System::Int8(0x7);
static const System::Int8 DOT11_AUTH_ALGO_WPA3 = System::Int8(0x8);
static const System::Int8 DOT11_AUTH_ALGO_WPA3_ENT_192 = System::Int8(0x8);
static const System::Int8 DOT11_AUTH_ALGO_WPA3_SAE = System::Int8(0x9);
static const System::Int8 DOT11_AUTH_ALGO_OWE = System::Int8(0xa);
static const System::Int8 DOT11_AUTH_ALGO_WPA3_ENT = System::Int8(0xb);
static const unsigned DOT11_AUTH_ALGO_IHV_START = unsigned(0x80000000);
static const unsigned DOT11_AUTH_ALGO_IHV_END = unsigned(0xffffffff);
static const System::Int8 DOT11_AUTH_ALGORITHM_OPEN_SYSTEM = System::Int8(0x1);
static const System::Int8 DOT11_AUTH_ALGORITHM_SHARED_KEY = System::Int8(0x2);
static const System::Int8 DOT11_AUTH_ALGORITHM_WPA = System::Int8(0x3);
static const System::Int8 DOT11_AUTH_ALGORITHM_WPA_PSK = System::Int8(0x4);
static const System::Int8 DOT11_AUTH_ALGORITHM_WPA_NONE = System::Int8(0x5);
static const System::Int8 DOT11_AUTH_ALGORITHM_RSNA = System::Int8(0x6);
static const System::Int8 DOT11_AUTH_ALGORITHM_RSNA_PSK = System::Int8(0x7);
static const System::Int8 DOT11_AUTH_ALGORITHM_WPA3 = System::Int8(0x8);
static const System::Int8 DOT11_AUTH_ALGORITHM_WPA3_ENT_192 = System::Int8(0x8);
static const System::Int8 DOT11_AUTH_ALGORITHM_WPA3_SAE = System::Int8(0x9);
static const System::Int8 DOT11_AUTH_ALGORITHM_OWE = System::Int8(0xa);
static const System::Int8 DOT11_AUTH_ALGORITHM_WPA3_ENT = System::Int8(0xb);
static const System::Int8 DOT11_CIPHER_ALGO_NONE = System::Int8(0x0);
static const System::Int8 DOT11_CIPHER_ALGO_WEP40 = System::Int8(0x1);
static const System::Int8 DOT11_CIPHER_ALGO_TKIP = System::Int8(0x2);
static const System::Int8 DOT11_CIPHER_ALGO_CCMP = System::Int8(0x4);
static const System::Int8 DOT11_CIPHER_ALGO_WEP104 = System::Int8(0x5);
static const System::Int8 DOT11_CIPHER_ALGO_BIP = System::Int8(0x6);
static const System::Int8 DOT11_CIPHER_ALGO_GCMP = System::Int8(0x8);
static const System::Int8 DOT11_CIPHER_ALGO_GCMP_256 = System::Int8(0x9);
static const System::Int8 DOT11_CIPHER_ALGO_CCMP_256 = System::Int8(0xa);
static const System::Int8 DOT11_CIPHER_ALGO_BIP_GMAC_128 = System::Int8(0xb);
static const System::Int8 DOT11_CIPHER_ALGO_BIP_GMAC_256 = System::Int8(0xc);
static const System::Int8 DOT11_CIPHER_ALGO_BIP_CMAC_256 = System::Int8(0xd);
static const System::Word DOT11_CIPHER_ALGO_WPA_USE_GROUP = System::Word(0x100);
static const System::Word DOT11_CIPHER_ALGO_RSN_USE_GROUP = System::Word(0x100);
static const System::Word DOT11_CIPHER_ALGO_WEP = System::Word(0x101);
static const unsigned DOT11_CIPHER_ALGO_IHV_START = unsigned(0x80000000);
static const unsigned DOT11_CIPHER_ALGO_IHV_END = unsigned(0xffffffff);
static const System::Int8 DOT11_OI_MAX_LENGTH = System::Int8(0x5);
static const System::Int8 DOT11_OI_MIN_LENGTH = System::Int8(0x3);
static const System::Int8 WLAN_API_VERSION_1_0 = System::Int8(0x1);
static const System::Int8 WLAN_API_VERSION_2_0 = System::Int8(0x2);
static const System::Int8 WLAN_API_VERSION = System::Int8(0x2);
static const System::Word WLAN_MAX_NAME_LENGTH = System::Word(0x100);
static const System::Int8 WLAN_PROFILE_GROUP_POLICY = System::Int8(0x1);
static const System::Int8 WLAN_PROFILE_USER = System::Int8(0x2);
static const System::Int8 WLAN_PROFILE_GET_PLAINTEXT_KEY = System::Int8(0x4);
static const int WLAN_PROFILE_CONNECTION_MODE_SET_BY_CLIENT = int(0x10000);
static const int WLAN_PROFILE_CONNECTION_MODE_AUTO = int(0x20000);
static const System::Int8 WLAN_SET_EAPHOST_DATA_ALL_USERS = System::Int8(0x1);
static const System::Byte DOT11_PSD_IE_MAX_DATA_SIZE = System::Byte(0xf0);
static const System::Int8 DOT11_PSD_IE_MAX_ENTRY_NUMBER = System::Int8(0x5);
static const int L2_REASON_CODE_GROUP_SIZE = int(0x10000);
static const int L2_REASON_CODE_GEN_BASE = int(0x10000);
static const int L2_REASON_CODE_DOT11_AC_BASE = int(0x20000);
static const int L2_REASON_CODE_DOT11_MSM_BASE = int(0x30000);
static const int L2_REASON_CODE_DOT11_SECURITY_BASE = int(0x40000);
static const int L2_REASON_CODE_ONEX_BASE = int(0x50000);
static const int L2_REASON_CODE_DOT3_AC_BASE = int(0x60000);
static const int L2_REASON_CODE_DOT3_MSM_BASE = int(0x70000);
static const int L2_REASON_CODE_PROFILE_BASE = int(0x80000);
static const int L2_REASON_CODE_IHV_BASE = int(0x90000);
static const int L2_REASON_CODE_WIMAX_BASE = int(0xa0000);
static const int L2_REASON_CODE_RESERVED_BASE = int(0xb0000);
static const System::Int8 L2_REASON_CODE_SUCCESS = System::Int8(0x0);
static const int L2_REASON_CODE_UNKNOWN = int(0x10001);
static const System::Int8 L2_REASON_CODE_PROFILE_MISSING = System::Int8(0x1);
static const System::Int8 WLAN_REASON_CODE_SUCCESS = System::Int8(0x0);
static const int WLAN_REASON_CODE_UNKNOWN = int(0x10001);
static const int WLAN_REASON_CODE_RANGE_SIZE = int(0x10000);
static const int WLAN_REASON_CODE_BASE = int(0x20000);
static const int WLAN_REASON_CODE_AC_BASE = int(0x20000);
static const __int64 WLAN_REASON_CODE_AC_CONNECT_BASE = 0x0000000000028000LL;
static const int WLAN_REASON_CODE_AC_END = int(0x2ffff);
static const int WLAN_REASON_CODE_PROFILE_BASE = int(0x80000);
static const System::Extended WLAN_REASON_CODE_PROFILE_CONNECT_BASE = 5.570560E+05;
static const int WLAN_REASON_CODE_PROFILE_END = int(0x8ffff);
static const int WLAN_REASON_CODE_MSM_BASE = int(0x30000);
static const __int64 WLAN_REASON_CODE_MSM_CONNECT_BASE = 0x0000000000038000LL;
static const int WLAN_REASON_CODE_MSM_END = int(0x3ffff);
static const int WLAN_REASON_CODE_MSMSEC_BASE = int(0x40000);
static const __int64 WLAN_REASON_CODE_MSMSEC_CONNECT_BASE = 0x0000000000048000LL;
static const int WLAN_REASON_CODE_MSMSEC_END = int(0x4ffff);
static const int WLAN_REASON_CODE_RESERVED_BASE = int(0xb0000);
static const int WLAN_REASON_CODE_RESERVED_END = int(0xbffff);
static const int WLAN_REASON_CODE_NETWORK_NOT_COMPATIBLE = int(0x20001);
static const int WLAN_REASON_CODE_PROFILE_NOT_COMPATIBLE = int(0x20002);
static const __int64 WLAN_REASON_CODE_NO_AUTO_CONNECTION = 0x0000000000028001LL;
static const __int64 WLAN_REASON_CODE_NOT_VISIBLE = 0x0000000000028002LL;
static const __int64 WLAN_REASON_CODE_GP_DENIED = 0x0000000000028003LL;
static const __int64 WLAN_REASON_CODE_USER_DENIED = 0x0000000000028004LL;
static const __int64 WLAN_REASON_CODE_BSS_TYPE_NOT_ALLOWED = 0x0000000000028005LL;
static const __int64 WLAN_REASON_CODE_IN_FAILED_LIST = 0x0000000000028006LL;
static const __int64 WLAN_REASON_CODE_IN_BLOCKED_LIST = 0x0000000000028007LL;
static const __int64 WLAN_REASON_CODE_SSID_LIST_TOO_LONG = 0x0000000000028008LL;
static const __int64 WLAN_REASON_CODE_CONNECT_CALL_FAIL = 0x0000000000028009LL;
static const __int64 WLAN_REASON_CODE_SCAN_CALL_FAIL = 0x000000000002800aLL;
static const __int64 WLAN_REASON_CODE_NETWORK_NOT_AVAILABLE = 0x000000000002800bLL;
static const __int64 WLAN_REASON_CODE_PROFILE_CHANGED_OR_DELETED = 0x000000000002800cLL;
static const __int64 WLAN_REASON_CODE_KEY_MISMATCH = 0x000000000002800dLL;
static const __int64 WLAN_REASON_CODE_USER_NOT_RESPOND = 0x000000000002800eLL;
static const __int64 WLAN_REASON_CODE_AP_PROFILE_NOT_ALLOWED_FOR_CLIENT = 0x000000000002800fLL;
static const __int64 WLAN_REASON_CODE_AP_PROFILE_NOT_ALLOWED = 0x0000000000028010LL;
static const __int64 WLAN_REASON_CODE_HOTSPOT2_PROFILE_DENIED = 0x0000000000028011LL;
static const int WLAN_REASON_CODE_INVALID_PROFILE_SCHEMA = int(0x80001);
static const int WLAN_REASON_CODE_PROFILE_MISSING = int(0x80002);
static const int WLAN_REASON_CODE_INVALID_PROFILE_NAME = int(0x80003);
static const int WLAN_REASON_CODE_INVALID_PROFILE_TYPE = int(0x80004);
static const int WLAN_REASON_CODE_INVALID_PHY_TYPE = int(0x80005);
static const int WLAN_REASON_CODE_MSM_SECURITY_MISSING = int(0x80006);
static const int WLAN_REASON_CODE_IHV_SECURITY_NOT_SUPPORTED = int(0x80007);
static const int WLAN_REASON_CODE_IHV_OUI_MISMATCH = int(0x80008);
static const int WLAN_REASON_CODE_IHV_OUI_MISSING = int(0x80009);
static const int WLAN_REASON_CODE_IHV_SETTINGS_MISSING = int(0x8000a);
static const int WLAN_REASON_CODE_CONFLICT_SECURITY = int(0x8000b);
static const int WLAN_REASON_CODE_SECURITY_MISSING = int(0x8000c);
static const int WLAN_REASON_CODE_INVALID_BSS_TYPE = int(0x8000d);
static const int WLAN_REASON_CODE_INVALID_ADHOC_CONNECTION_MODE = int(0x8000e);
static const int WLAN_REASON_CODE_NON_BROADCAST_SET_FOR_ADHOC = int(0x8000f);
static const int WLAN_REASON_CODE_AUTO_SWITCH_SET_FOR_ADHOC = int(0x80010);
static const int WLAN_REASON_CODE_AUTO_SWITCH_SET_FOR_MANUAL_CONNECTION = int(0x80011);
static const int WLAN_REASON_CODE_IHV_SECURITY_ONEX_MISSING = int(0x80012);
static const int WLAN_REASON_CODE_PROFILE_SSID_INVALID = int(0x80013);
static const int WLAN_REASON_CODE_TOO_MANY_SSID = int(0x80014);
static const int WLAN_REASON_CODE_IHV_CONNECTIVITY_NOT_SUPPORTED = int(0x80015);
static const int WLAN_REASON_CODE_BAD_MAX_NUMBER_OF_CLIENTS_FOR_AP = int(0x80016);
static const int WLAN_REASON_CODE_INVALID_CHANNEL = int(0x80017);
static const int WLAN_REASON_CODE_OPERATION_MODE_NOT_SUPPORTED = int(0x80018);
static const int WLAN_REASON_CODE_AUTO_AP_PROFILE_NOT_ALLOWED = int(0x80019);
static const int WLAN_REASON_CODE_AUTO_CONNECTION_NOT_ALLOWED = int(0x8001a);
static const int WLAN_REASON_CODE_HOTSPOT2_PROFILE_NOT_ALLOWED = int(0x8001b);
static const int WLAN_REASON_CODE_UNSUPPORTED_SECURITY_SET_BY_OS = int(0x30001);
static const int WLAN_REASON_CODE_UNSUPPORTED_SECURITY_SET = int(0x30002);
static const int WLAN_REASON_CODE_BSS_TYPE_UNMATCH = int(0x30003);
static const int WLAN_REASON_CODE_PHY_TYPE_UNMATCH = int(0x30004);
static const int WLAN_REASON_CODE_DATARATE_UNMATCH = int(0x30005);
static const __int64 WLAN_REASON_CODE_USER_CANCELLED = 0x0000000000038001LL;
static const __int64 WLAN_REASON_CODE_ASSOCIATION_FAILURE = 0x0000000000038002LL;
static const __int64 WLAN_REASON_CODE_ASSOCIATION_TIMEOUT = 0x0000000000038003LL;
static const __int64 WLAN_REASON_CODE_PRE_SECURITY_FAILURE = 0x0000000000038004LL;
static const __int64 WLAN_REASON_CODE_START_SECURITY_FAILURE = 0x0000000000038005LL;
static const __int64 WLAN_REASON_CODE_SECURITY_FAILURE = 0x0000000000038006LL;
static const __int64 WLAN_REASON_CODE_SECURITY_TIMEOUT = 0x0000000000038007LL;
static const __int64 WLAN_REASON_CODE_ROAMING_FAILURE = 0x0000000000038008LL;
static const __int64 WLAN_REASON_CODE_ROAMING_SECURITY_FAILURE = 0x0000000000038009LL;
static const __int64 WLAN_REASON_CODE_ADHOC_SECURITY_FAILURE = 0x000000000003800aLL;
static const __int64 WLAN_REASON_CODE_DRIVER_DISCONNECTED = 0x000000000003800bLL;
static const __int64 WLAN_REASON_CODE_DRIVER_OPERATION_FAILURE = 0x000000000003800cLL;
static const __int64 WLAN_REASON_CODE_IHV_NOT_AVAILABLE = 0x000000000003800dLL;
static const __int64 WLAN_REASON_CODE_IHV_NOT_RESPONDING = 0x000000000003800eLL;
static const __int64 WLAN_REASON_CODE_DISCONNECT_TIMEOUT = 0x000000000003800fLL;
static const __int64 WLAN_REASON_CODE_INTERNAL_FAILURE = 0x0000000000038010LL;
static const __int64 WLAN_REASON_CODE_UI_REQUEST_TIMEOUT = 0x0000000000038011LL;
static const __int64 WLAN_REASON_CODE_TOO_MANY_SECURITY_ATTEMPTS = 0x0000000000038012LL;
static const __int64 WLAN_REASON_CODE_AP_STARTING_FAILURE = 0x0000000000038013LL;
static const __int64 WLAN_REASON_CODE_NO_VISIBLE_AP = 0x0000000000038014LL;
static const int WLAN_REASON_CODE_MSMSEC_MIN = int(0x40000);
static const int WLAN_REASON_CODE_MSMSEC_PROFILE_INVALID_KEY_INDEX = int(0x40001);
static const int WLAN_REASON_CODE_MSMSEC_PROFILE_PSK_PRESENT = int(0x40002);
static const int WLAN_REASON_CODE_MSMSEC_PROFILE_KEY_LENGTH = int(0x40003);
static const int WLAN_REASON_CODE_MSMSEC_PROFILE_PSK_LENGTH = int(0x40004);
static const int WLAN_REASON_CODE_MSMSEC_PROFILE_NO_AUTH_CIPHER_SPECIFIED = int(0x40005);
static const int WLAN_REASON_CODE_MSMSEC_PROFILE_TOO_MANY_AUTH_CIPHER_SPECIFIED = int(0x40006);
static const int WLAN_REASON_CODE_MSMSEC_PROFILE_DUPLICATE_AUTH_CIPHER = int(0x40007);
static const int WLAN_REASON_CODE_MSMSEC_PROFILE_RAWDATA_INVALID = int(0x40008);
static const int WLAN_REASON_CODE_MSMSEC_PROFILE_INVALID_AUTH_CIPHER = int(0x40009);
static const int WLAN_REASON_CODE_MSMSEC_PROFILE_ONEX_DISABLED = int(0x4000a);
static const int WLAN_REASON_CODE_MSMSEC_PROFILE_ONEX_ENABLED = int(0x4000b);
static const int WLAN_REASON_CODE_MSMSEC_PROFILE_INVALID_PMKCACHE_MODE = int(0x4000c);
static const int WLAN_REASON_CODE_MSMSEC_PROFILE_INVALID_PMKCACHE_SIZE = int(0x4000d);
static const int WLAN_REASON_CODE_MSMSEC_PROFILE_INVALID_PMKCACHE_TTL = int(0x4000e);
static const int WLAN_REASON_CODE_MSMSEC_PROFILE_INVALID_PREAUTH_MODE = int(0x4000f);
static const int WLAN_REASON_CODE_MSMSEC_PROFILE_INVALID_PREAUTH_THROTTLE = int(0x40010);
static const int WLAN_REASON_CODE_MSMSEC_PROFILE_PREAUTH_ONLY_ENABLED = int(0x40011);
static const int WLAN_REASON_CODE_MSMSEC_CAPABILITY_NETWORK = int(0x40012);
static const int WLAN_REASON_CODE_MSMSEC_CAPABILITY_NIC = int(0x40013);
static const int WLAN_REASON_CODE_MSMSEC_CAPABILITY_PROFILE = int(0x40014);
static const int WLAN_REASON_CODE_MSMSEC_CAPABILITY_DISCOVERY = int(0x40015);
static const int WLAN_REASON_CODE_MSMSEC_PROFILE_PASSPHRASE_CHAR = int(0x40016);
static const int WLAN_REASON_CODE_MSMSEC_PROFILE_KEYMATERIAL_CHAR = int(0x40017);
static const int WLAN_REASON_CODE_MSMSEC_PROFILE_WRONG_KEYTYPE = int(0x40018);
static const int WLAN_REASON_CODE_MSMSEC_MIXED_CELL = int(0x40019);
static const int WLAN_REASON_CODE_MSMSEC_PROFILE_AUTH_TIMERS_INVALID = int(0x4001a);
static const int WLAN_REASON_CODE_MSMSEC_PROFILE_INVALID_GKEY_INTV = int(0x4001b);
static const int WLAN_REASON_CODE_MSMSEC_TRANSITION_NETWORK = int(0x4001c);
static const int WLAN_REASON_CODE_MSMSEC_PROFILE_KEY_UNMAPPED_CHAR = int(0x4001d);
static const int WLAN_REASON_CODE_MSMSEC_CAPABILITY_PROFILE_AUTH = int(0x4001e);
static const int WLAN_REASON_CODE_MSMSEC_CAPABILITY_PROFILE_CIPHER = int(0x4001f);
static const int WLAN_REASON_CODE_MSMSEC_PROFILE_SAFE_MODE = int(0x40020);
static const int WLAN_REASON_CODE_MSMSEC_CAPABILITY_PROFILE_SAFE_MODE_NIC = int(0x40021);
static const int WLAN_REASON_CODE_MSMSEC_CAPABILITY_PROFILE_SAFE_MODE_NW = int(0x40022);
static const int WLAN_REASON_CODE_MSMSEC_PROFILE_UNSUPPORTED_AUTH = int(0x40023);
static const int WLAN_REASON_CODE_MSMSEC_PROFILE_UNSUPPORTED_CIPHER = int(0x40024);
static const int WLAN_REASON_CODE_MSMSEC_CAPABILITY_MFP_NW_NIC = int(0x40025);
static const __int64 WLAN_REASON_CODE_MSMSEC_UI_REQUEST_FAILURE = 0x0000000000048001LL;
static const __int64 WLAN_REASON_CODE_MSMSEC_AUTH_START_TIMEOUT = 0x0000000000048002LL;
static const __int64 WLAN_REASON_CODE_MSMSEC_AUTH_SUCCESS_TIMEOUT = 0x0000000000048003LL;
static const __int64 WLAN_REASON_CODE_MSMSEC_KEY_START_TIMEOUT = 0x0000000000048004LL;
static const __int64 WLAN_REASON_CODE_MSMSEC_KEY_SUCCESS_TIMEOUT = 0x0000000000048005LL;
static const __int64 WLAN_REASON_CODE_MSMSEC_M3_MISSING_KEY_DATA = 0x0000000000048006LL;
static const __int64 WLAN_REASON_CODE_MSMSEC_M3_MISSING_IE = 0x0000000000048007LL;
static const __int64 WLAN_REASON_CODE_MSMSEC_M3_MISSING_GRP_KEY = 0x0000000000048008LL;
static const __int64 WLAN_REASON_CODE_MSMSEC_PR_IE_MATCHING = 0x0000000000048009LL;
static const __int64 WLAN_REASON_CODE_MSMSEC_SEC_IE_MATCHING = 0x000000000004800aLL;
static const __int64 WLAN_REASON_CODE_MSMSEC_NO_PAIRWISE_KEY = 0x000000000004800bLL;
static const __int64 WLAN_REASON_CODE_MSMSEC_G1_MISSING_KEY_DATA = 0x000000000004800cLL;
static const __int64 WLAN_REASON_CODE_MSMSEC_G1_MISSING_GRP_KEY = 0x000000000004800dLL;
static const __int64 WLAN_REASON_CODE_MSMSEC_PEER_INDICATED_INSECURE = 0x000000000004800eLL;
static const __int64 WLAN_REASON_CODE_MSMSEC_NO_AUTHENTICATOR = 0x000000000004800fLL;
static const __int64 WLAN_REASON_CODE_MSMSEC_NIC_FAILURE = 0x0000000000048010LL;
static const __int64 WLAN_REASON_CODE_MSMSEC_CANCELLED = 0x0000000000048011LL;
static const __int64 WLAN_REASON_CODE_MSMSEC_KEY_FORMAT = 0x0000000000048012LL;
static const __int64 WLAN_REASON_CODE_MSMSEC_DOWNGRADE_DETECTED = 0x0000000000048013LL;
static const __int64 WLAN_REASON_CODE_MSMSEC_PSK_MISMATCH_SUSPECTED = 0x0000000000048014LL;
static const __int64 WLAN_REASON_CODE_MSMSEC_FORCED_FAILURE = 0x0000000000048015LL;
static const __int64 WLAN_REASON_CODE_MSMSEC_M3_TOO_MANY_RSNIE = 0x0000000000048016LL;
static const __int64 WLAN_REASON_CODE_MSMSEC_M2_MISSING_KEY_DATA = 0x0000000000048017LL;
static const __int64 WLAN_REASON_CODE_MSMSEC_M2_MISSING_IE = 0x0000000000048018LL;
static const __int64 WLAN_REASON_CODE_MSMSEC_AUTH_WCN_COMPLETED = 0x0000000000048019LL;
static const __int64 WLAN_REASON_CODE_MSMSEC_M3_MISSING_MGMT_GRP_KEY = 0x000000000004801aLL;
static const __int64 WLAN_REASON_CODE_MSMSEC_G1_MISSING_MGMT_GRP_KEY = 0x000000000004801bLL;
static const int WLAN_REASON_CODE_MSMSEC_MAX = int(0x4ffff);
static const System::Int8 ONEX_REASON_CODE_SUCCESS = System::Int8(0x0);
static const int ONEX_REASON_START = int(0x50000);
static const int ONEX_UNABLE_TO_IDENTIFY_USER = int(0x50001);
static const int ONEX_IDENTITY_NOT_FOUND = int(0x50002);
static const int ONEX_UI_DISABLED = int(0x50003);
static const int ONEX_UI_FAILURE = int(0x50004);
static const int ONEX_EAP_FAILURE_RECEIVED = int(0x50005);
static const int ONEX_AUTHENTICATOR_NO_LONGER_PRESENT = int(0x50006);
static const int ONEX_NO_RESPONSE_TO_IDENTITY = int(0x50007);
static const int ONEX_PROFILE_VERSION_NOT_SUPPORTED = int(0x50008);
static const int ONEX_PROFILE_INVALID_LENGTH = int(0x50009);
static const int ONEX_PROFILE_DISALLOWED_EAP_TYPE = int(0x5000a);
static const int ONEX_PROFILE_INVALID_EAP_TYPE_OR_FLAG = int(0x5000b);
static const int ONEX_PROFILE_INVALID_ONEX_FLAGS = int(0x5000c);
static const int ONEX_PROFILE_INVALID_TIMER_VALUE = int(0x5000d);
static const int ONEX_PROFILE_INVALID_SUPPLICANT_MODE = int(0x5000e);
static const int ONEX_PROFILE_INVALID_AUTH_MODE = int(0x5000f);
static const int ONEX_PROFILE_INVALID_EAP_CONNECTION_PROPERTIES = int(0x50010);
static const int ONEX_UI_CANCELLED = int(0x50011);
static const int ONEX_PROFILE_INVALID_EXPLICIT_CREDENTIALS = int(0x50012);
static const int ONEX_PROFILE_EXPIRED_EXPLICIT_CREDENTIALS = int(0x50013);
static const int ONEX_UI_NOT_PERMITTED = int(0x50014);
static const System::Int8 WLAN_AVAILABLE_NETWORK_CONNECTED = System::Int8(0x1);
static const System::Int8 WLAN_AVAILABLE_NETWORK_HAS_PROFILE = System::Int8(0x2);
static const System::Int8 WLAN_AVAILABLE_NETWORK_CONSOLE_USER_PROFILE = System::Int8(0x4);
static const System::Int8 WLAN_AVAILABLE_NETWORK_INTERWORKING_SUPPORTED = System::Int8(0x8);
static const System::Int8 WLAN_AVAILABLE_NETWORK_HOTSPOT2_ENABLED = System::Int8(0x10);
static const System::Int8 WLAN_AVAILABLE_NETWORK_ANQP_SUPPORTED = System::Int8(0x20);
static const System::Int8 WLAN_AVAILABLE_NETWORK_HOTSPOT2_DOMAIN = System::Int8(0x40);
static const System::Byte WLAN_AVAILABLE_NETWORK_HOTSPOT2_ROAMING = System::Byte(0x80);
static const System::Word WLAN_AVAILABLE_NETWORK_AUTO_CONNECT_FAILED = System::Word(0x100);
static const System::Int8 WLAN_AVAILABLE_NETWORK_INCLUDE_ALL_ADHOC_PROFILES = System::Int8(0x1);
static const System::Int8 WLAN_AVAILABLE_NETWORK_INCLUDE_ALL_MANUAL_HIDDEN_PROFILES = System::Int8(0x2);
static const System::Int8 DOT11_RATE_SET_MAX_LENGTH = System::Int8(0x7e);
static const System::Int8 WLAN_MAX_PHY_TYPE_NUMBER = System::Int8(0x8);
static const System::Int8 dot11_phy_type_unknown = System::Int8(0x0);
static const System::Int8 dot11_phy_type_any = System::Int8(0x0);
static const System::Int8 dot11_phy_type_fhss = System::Int8(0x1);
static const System::Int8 dot11_phy_type_dsss = System::Int8(0x2);
static const System::Int8 dot11_phy_type_irbaseband = System::Int8(0x3);
static const System::Int8 dot11_phy_type_ofdm = System::Int8(0x4);
static const System::Int8 dot11_phy_type_hrdsss = System::Int8(0x5);
static const System::Int8 dot11_phy_type_erp = System::Int8(0x6);
static const System::Int8 dot11_phy_type_ht = System::Int8(0x7);
static const System::Int8 dot11_phy_type_vht = System::Int8(0x8);
static const unsigned dot11_phy_type_IHV_start = unsigned(0x80000000);
static const unsigned dot11_phy_type_IHV_end = unsigned(0xffffffff);
static const System::Int8 DOT11_HESSID_LENGTH = System::Int8(0x6);
static const System::Int8 WLAN_MAX_PHY_INDEX = System::Int8(0x40);
static const System::Int8 WLAN_CONNECTION_HIDDEN_NETWORK = System::Int8(0x1);
static const System::Int8 WLAN_CONNECTION_ADHOC_JOIN_ONLY = System::Int8(0x2);
static const System::Int8 WLAN_CONNECTION_IGNORE_PRIVACY_BIT = System::Int8(0x4);
static const System::Int8 WLAN_CONNECTION_EAPOL_PASSTHROUGH = System::Int8(0x8);
static const System::Int8 WLAN_CONNECTION_PERSIST_DISCOVERY_PROFILE = System::Int8(0x10);
static const System::Int8 WLAN_CONNECTION_PERSIST_DISCOVERY_PROFILE_CONNECTION_MODE_AUTO = System::Int8(0x20);
static const System::Int8 WLAN_CONNECTION_PERSIST_DISCOVERY_PROFILE_OVERWRITE_EXISTING = System::Int8(0x40);
static const System::Byte NDIS_OBJECT_TYPE_DEFAULT = System::Byte(0x80);
static const System::Int8 NDIS_OBJECT_REVISION_1 = System::Int8(0x1);
static const System::Int8 DOT11_BSSID_LIST_REVISION_1 = System::Int8(0x1);
static const System::Int8 WLAN_CONNECTION_NOTIFICATION_ADHOC_NETWORK_FORMED = System::Int8(0x1);
static const System::Int8 WLAN_CONNECTION_NOTIFICATION_CONSOLE_USER_PROFILE = System::Int8(0x4);
static const System::Int8 L2_NOTIFICATION_SOURCE_NONE = System::Int8(0x0);
static const System::Word L2_NOTIFICATION_SOURCE_ALL = System::Word(0xffff);
static const System::Int8 L2_NOTIFICATION_SOURCE_WLAN_ACM = System::Int8(0x8);
static const System::Int8 L2_NOTIFICATION_SOURCE_WLAN_MSM = System::Int8(0x10);
static const System::Int8 L2_NOTIFICATION_SOURCE_WLAN_SECURITY = System::Int8(0x20);
static const System::Int8 L2_NOTIFICATION_SOURCE_WLAN_IHV = System::Int8(0x40);
static const System::Byte L2_NOTIFICATION_SOURCE_WLAN_HNWK = System::Byte(0x80);
static const System::Int8 L2_NOTIFICATION_SOURCE_ONEX = System::Int8(0x4);
static const System::Int8 WLAN_NOTIFICATION_SOURCE_NONE = System::Int8(0x0);
static const System::Word WLAN_NOTIFICATION_SOURCE_ALL = System::Word(0xffff);
static const System::Int8 WLAN_NOTIFICATION_SOURCE_ACM = System::Int8(0x8);
static const System::Int8 WLAN_NOTIFICATION_SOURCE_MSM = System::Int8(0x10);
static const System::Int8 WLAN_NOTIFICATION_SOURCE_SECURITY = System::Int8(0x20);
static const System::Int8 WLAN_NOTIFICATION_SOURCE_IHV = System::Int8(0x40);
static const System::Byte WLAN_NOTIFICATION_SOURCE_HNWK = System::Byte(0x80);
static const System::Int8 WLAN_NOTIFICATION_SOURCE_ONEX = System::Int8(0x4);
static const System::Int8 L2_NOTIFICATION_CODE_PUBLIC_BEGIN = System::Int8(0x0);
static const System::Int8 wlan_intf_opcode_autoconf_start = System::Int8(0x0);
static const System::Int8 wlan_intf_opcode_autoconf_enabled = System::Int8(0x1);
static const System::Int8 wlan_intf_opcode_background_scan_enabled = System::Int8(0x2);
static const System::Int8 wlan_intf_opcode_media_streaming_mode = System::Int8(0x3);
static const System::Int8 wlan_intf_opcode_radio_state = System::Int8(0x4);
static const System::Int8 wlan_intf_opcode_bss_type = System::Int8(0x5);
static const System::Int8 wlan_intf_opcode_interface_state = System::Int8(0x6);
static const System::Int8 wlan_intf_opcode_current_connection = System::Int8(0x7);
static const System::Int8 wlan_intf_opcode_channel_number = System::Int8(0x8);
static const System::Int8 wlan_intf_opcode_supported_infrastructure_auth_cipher_pairs = System::Int8(0x9);
static const System::Int8 wlan_intf_opcode_supported_adhoc_auth_cipher_pairs = System::Int8(0xa);
static const System::Int8 wlan_intf_opcode_supported_country_or_region_string_list = System::Int8(0xb);
static const System::Int8 wlan_intf_opcode_current_operation_mode = System::Int8(0xc);
static const System::Int8 wlan_intf_opcode_supported_safe_mode = System::Int8(0xd);
static const System::Int8 wlan_intf_opcode_certified_safe_mode = System::Int8(0xe);
static const System::Int8 wlan_intf_opcode_hosted_network_capable = System::Int8(0xf);
static const System::Int8 wlan_intf_opcode_management_frame_protection_capable = System::Int8(0x10);
static const System::Int8 wlan_intf_opcode_secondary_sta_interfaces = System::Int8(0x11);
static const System::Int8 wlan_intf_opcode_secondary_sta_synchronized_connections = System::Int8(0x12);
static const int wlan_intf_opcode_autoconf_end = int(0xfffffff);
static const int wlan_intf_opcode_msm_start = int(0x10000100);
static const int wlan_intf_opcode_statistics = int(0x10000101);
static const int wlan_intf_opcode_rssi = int(0x10000102);
static const int wlan_intf_opcode_msm_end = int(0x1fffffff);
static const int wlan_intf_opcode_security_start = int(0x20010000);
static const int wlan_intf_opcode_security_end = int(0x2fffffff);
static const int wlan_intf_opcode_ihv_start = int(0x30000000);
static const int wlan_intf_opcode_ihv_end = int(0x3fffffff);
static const int WLAN_READ_ACCESS = int(0x20001);
static const int WLAN_EXECUTE_ACCESS = int(0x20021);
static const int WLAN_WRITE_ACCESS = int(0x70023);
static const System::Int8 WFD_API_VERSION_1_0 = System::Int8(0x1);
static const System::Int8 WFD_API_VERSION = System::Int8(0x1);
static const System::Int8 DOT11_OPERATION_MODE_UNKNOWN = System::Int8(0x0);
static const System::Int8 DOT11_OPERATION_MODE_STATION = System::Int8(0x1);
static const System::Int8 DOT11_OPERATION_MODE_AP = System::Int8(0x2);
static const System::Int8 DOT11_OPERATION_MODE_EXTENSIBLE_STATION = System::Int8(0x4);
static const System::Int8 DOT11_OPERATION_MODE_EXTENSIBLE_AP = System::Int8(0x8);
static const System::Int8 DOT11_OPERATION_MODE_WFD_DEVICE = System::Int8(0x10);
static const System::Int8 DOT11_OPERATION_MODE_WFD_GROUP_OWNER = System::Int8(0x20);
static const System::Int8 DOT11_OPERATION_MODE_WFD_CLIENT = System::Int8(0x40);
static const int DOT11_OPERATION_MODE_MANUFACTURING = int(0x40000000);
static const unsigned DOT11_OPERATION_MODE_NETWORK_MONITOR = unsigned(0x80000000);
static const int EAP_I_USER_ACCOUNT_OTHER_ERROR = int(0x40420110);
static const unsigned EAP_E_CERT_STORE_INACCESSIBLE = unsigned(0x80420010);
static const unsigned EAP_E_EAPHOST_METHOD_NOT_INSTALLED = unsigned(0x80420011);
static const unsigned EAP_E_EAPHOST_EAPQEC_INACCESSIBLE = unsigned(0x80420013);
static const unsigned EAP_E_EAPHOST_IDENTITY_UNKNOWN = unsigned(0x80420014);
static const unsigned EAP_E_AUTHENTICATION_FAILED = unsigned(0x80420015);
static const unsigned EAP_I_EAPHOST_EAP_NEGOTIATION_FAILED = unsigned(0x80420016);
static const unsigned EAP_E_EAPHOST_METHOD_INVALID_PACKET = unsigned(0x80420017);
static const unsigned EAP_E_EAPHOST_REMOTE_INVALID_PACKET = unsigned(0x80420018);
static const unsigned EAP_E_EAPHOST_XML_MALFORMED = unsigned(0x80420019);
static const unsigned EAP_E_METHOD_CONFIG_DOES_NOT_SUPPORT_SSO = unsigned(0x8042001a);
static const unsigned EAP_E_EAPHOST_METHOD_OPERATION_NOT_SUPPORTED = unsigned(0x80420020);
static const unsigned EAP_E_USER_CERT_NOT_FOUND = unsigned(0x80420100);
static const unsigned EAP_E_USER_CERT_INVALID = unsigned(0x80420101);
static const unsigned EAP_E_USER_CERT_EXPIRED = unsigned(0x80420102);
static const unsigned EAP_E_USER_CERT_REVOKED = unsigned(0x80420103);
static const unsigned EAP_E_USER_CERT_OTHER_ERROR = unsigned(0x80420104);
static const unsigned EAP_E_USER_CERT_REJECTED = unsigned(0x80420105);
static const unsigned EAP_E_USER_CREDENTIALS_REJECTED = unsigned(0x80420111);
static const unsigned EAP_E_USER_NAME_PASSWORD_REJECTED = unsigned(0x80420112);
static const unsigned EAP_E_NO_SMART_CARD_READER = unsigned(0x80420113);
static const unsigned EAP_E_SERVER_CERT_INVALID = unsigned(0x80420201);
static const unsigned EAP_E_SERVER_CERT_EXPIRED = unsigned(0x80420202);
static const unsigned EAP_E_SERVER_CERT_REVOKED = unsigned(0x80420203);
static const unsigned EAP_E_SERVER_CERT_OTHER_ERROR = unsigned(0x80420204);
static const unsigned EAP_E_USER_ROOT_CERT_NOT_FOUND = unsigned(0x80420300);
static const unsigned EAP_E_USER_ROOT_CERT_INVALID = unsigned(0x80420301);
static const unsigned EAP_E_USER_ROOT_CERT_EXPIRED = unsigned(0x80420302);
static const unsigned EAP_E_SERVER_ROOT_CERT_NOT_FOUND = unsigned(0x80420400);
static const System::Int8 WLAN_UI_API_VERSION = System::Int8(0x1);
static const System::Int8 WLAN_UI_API_INITIAL_VERSION = System::Int8(0x1);
static const System::Word L2_NOTIFICATION_CODE_GROUP_SIZE = System::Word(0x1000);
static const System::Word L2_NOTIFICATION_CODE_V2_BEGIN = System::Word(0x1000);
static const System::Word wlan_hosted_network_state_change = System::Word(0x1000);
static const System::Word wlan_hosted_network_peer_state_change = System::Word(0x1001);
static const System::Word wlan_hosted_network_radio_state_change = System::Word(0x1002);
#define WiFiDirectAdvertisementPublisherName L"Windows.Devices.WiFiDirect.WiFiDirectAdvertisementPublishe"\
	L"r"
#define WiFiDirectConnectionListenerName L"Windows.Devices.WiFiDirect.WiFiDirectConnectionListener"
#define WiFiDirectDeviceName L"Windows.Devices.WiFiDirect.WiFiDirectDevice"
#define WiFiDirectInformationElementName L"Windows.Devices.WiFiDirect.WiFiDirectInformationElement"
#define WiFiDirectConnectionParametersName L"Windows.Devices.WiFiDirect.WiFiDirectConnectionParameters"
#define NetworkOperatorTetheringManagerName L"Windows.Networking.NetworkOperators.NetworkOperatorTetheri"\
	L"ngManager"
#define NetworkInformationName L"Windows.Networking.Connectivity.NetworkInformation"
#define WiFiAdapterName L"Windows.Devices.WiFi.WiFiAdapter"
extern DELPHI_PACKAGE unsigned __fastcall WlanOpenHandle(unsigned dwClientVersion, void * pReserved, unsigned* pdwNegotiatedVersion, Winapi::Windows::PHandle phClientHandle);
extern DELPHI_PACKAGE unsigned __fastcall WlanCloseHandle(NativeUInt hClientHandle, void * pReserved);
extern DELPHI_PACKAGE unsigned __fastcall WlanEnumInterfaces(NativeUInt hClientHandle, void * pReserved, PWLAN_INTERFACE_INFO_LIST &ppInterfaceList);
extern DELPHI_PACKAGE unsigned __fastcall WlanSetAutoConfigParameter(NativeUInt hClientHandle, WLAN_AUTOCONF_OPCODE OpCode, unsigned dwDataSize, void * pData, void * pReserved);
extern DELPHI_PACKAGE unsigned __fastcall WlanQueryAutoConfigParameter(NativeUInt hClientHandle, WLAN_AUTOCONF_OPCODE OpCode, void * pReserved, unsigned* pdwDataSize, void * &ppData, PWLAN_OPCODE_VALUE_TYPE pWlanOpcodeValueType);
extern DELPHI_PACKAGE unsigned __fastcall WlanGetInterfaceCapability(NativeUInt hClientHandle, System::PGUID pInterfaceGuid, void * pReserved, PWLAN_INTERFACE_CAPABILITY &ppCapability);
extern DELPHI_PACKAGE unsigned __fastcall WlanSetInterface(NativeUInt hClientHandle, System::PGUID pInterfaceGuid, unsigned OpCode, unsigned dwDataSize, void * pData, void * pReserved);
extern DELPHI_PACKAGE unsigned __fastcall WlanQueryInterface(NativeUInt hClientHandle, System::PGUID pInterfaceGuid, unsigned OpCode, void * pReserved, unsigned* pdwDataSize, void * &ppData, PWLAN_OPCODE_VALUE_TYPE pWlanOpcodeValueType);
extern DELPHI_PACKAGE unsigned __fastcall WlanIhvControl(NativeUInt hClientHandle, System::PGUID pInterfaceGuid, WLAN_IHV_CONTROL_TYPE Type_, unsigned dwInBufferSize, void * pInBuffer, unsigned dwOutBufferSize, void * pOutBuffer, unsigned* pdwBytesReturned);
extern DELPHI_PACKAGE unsigned __fastcall WlanScan(NativeUInt hClientHandle, System::PGUID pInterfaceGuid, PDOT11_SSID pDot11Ssid, PWLAN_RAW_DATA pIeData, void * pReserved);
extern DELPHI_PACKAGE unsigned __fastcall WlanGetAvailableNetworkList(NativeUInt hClientHandle, System::PGUID pInterfaceGuid, unsigned dwFlags, void * pReserved, PWLAN_AVAILABLE_NETWORK_LIST &ppAvailableNetworkList);
extern DELPHI_PACKAGE unsigned __fastcall WlanGetAvailableNetworkList2(NativeUInt hClientHandle, System::PGUID pInterfaceGuid, unsigned dwFlags, void * pReserved, PWLAN_AVAILABLE_NETWORK_LIST_V2 &ppAvailableNetworkList);
extern DELPHI_PACKAGE unsigned __fastcall WlanGetNetworkBssList(NativeUInt hClientHandle, System::PGUID pInterfaceGuid, PDOT11_SSID pDot11Ssid, DOT11_BSS_TYPE dot11BssType, System::LongBool bSecurityEnabled, void * pReserved, PWLAN_BSS_LIST &ppWlanBssList);
extern DELPHI_PACKAGE unsigned __fastcall WlanConnect(NativeUInt hClientHandle, System::PGUID pInterfaceGuid, PWLAN_CONNECTION_PARAMETERS pConnectionParameters, void * pReserved);
extern DELPHI_PACKAGE unsigned __fastcall WlanConnect2(NativeUInt hClientHandle, System::PGUID pInterfaceGuid, PWLAN_CONNECTION_PARAMETERS_V2 pConnectionParameters, void * pReserved);
extern DELPHI_PACKAGE unsigned __fastcall WlanDisconnect(NativeUInt hClientHandle, System::PGUID pInterfaceGuid, void * pReserved);
extern DELPHI_PACKAGE unsigned __fastcall WlanRegisterNotification(NativeUInt hClientHandle, unsigned dwNotifSource, System::LongBool bIgnoreDuplicate, WLAN_NOTIFICATION_CALLBACK funcCallback, void * pCallbackContext, void * pReserved, unsigned* pdwPrevNotifSource);
extern DELPHI_PACKAGE unsigned __fastcall WlanGetProfile(NativeUInt hClientHandle, System::PGUID pInterfaceGuid, System::WideChar * strProfileName, void * pReserved, Wclwinapi::PLPWSTR pstrProfileXml, unsigned* pdwFlags, unsigned* pdwGrantedAccess);
extern DELPHI_PACKAGE unsigned __fastcall WlanSetProfileEapUserData(NativeUInt hClientHandle, System::PGUID pInterfaceGuid, System::WideChar * strProfileName, const EAP_METHOD_TYPE &eapType, unsigned dwFlags, unsigned dwEapUserDataSize, System::PByte pbEapUserData, void * pReserved);
extern DELPHI_PACKAGE unsigned __fastcall WlanSetProfileEapXmlUserData(NativeUInt hClientHandle, System::PGUID pInterfaceGuid, System::WideChar * strProfileName, unsigned dwFlags, System::WideChar * strEapXmlUserData, void * pReserved);
extern DELPHI_PACKAGE unsigned __fastcall WlanSetProfile(NativeUInt hClientHandle, System::PGUID pInterfaceGuid, unsigned dwFlags, System::WideChar * strProfileXml, System::WideChar * strAllUserProfileSecurity, System::LongBool bOverwrite, void * pReserved, unsigned* pdwReasonCode);
extern DELPHI_PACKAGE unsigned __fastcall WlanDeleteProfile(NativeUInt hClientHandle, System::PGUID pInterfaceGuid, System::WideChar * strProfileName, void * pReserved);
extern DELPHI_PACKAGE unsigned __fastcall WlanRenameProfile(NativeUInt hClientHandle, System::PGUID pInterfaceGuid, System::WideChar * strOldProfileName, System::WideChar * strNewProfileName, void * pReserved);
extern DELPHI_PACKAGE unsigned __fastcall WlanGetProfileList(NativeUInt hClientHandle, System::PGUID pInterfaceGuid, void * pReserved, PWLAN_PROFILE_INFO_LIST &ppProfileList);
extern DELPHI_PACKAGE unsigned __fastcall WlanSetProfileList(NativeUInt hClientHandle, System::PGUID pInterfaceGuid, unsigned dwItems, Wclwinapi::PLPCWSTR strProfileNames, void * pReserved);
extern DELPHI_PACKAGE unsigned __fastcall WlanSetProfilePosition(NativeUInt hClientHandle, System::PGUID pInterfaceGuid, System::WideChar * strProfileName, unsigned dwPosition, void * pReserved);
extern DELPHI_PACKAGE unsigned __fastcall WlanSetProfileCustomUserData(NativeUInt hClientHandle, System::PGUID pInterfaceGuid, System::WideChar * strProfileName, unsigned dwDataSize, System::PByte pData, void * pReserved);
extern DELPHI_PACKAGE unsigned __fastcall WlanGetProfileCustomUserData(NativeUInt hClientHandle, System::PGUID pInterfaceGuid, System::WideChar * strProfileName, void * pReserved, unsigned* pdwDataSize, System::PByte &ppData);
extern DELPHI_PACKAGE unsigned __fastcall WlanSetFilterList(NativeUInt hClientHandle, WLAN_FILTER_LIST_TYPE wlanFilterListType, PDOT11_NETWORK_LIST pNetworkList, void * pReserved);
extern DELPHI_PACKAGE unsigned __fastcall WlanGetFilterList(NativeUInt hClientHandle, WLAN_FILTER_LIST_TYPE wlanFilterListType, void * pReserved, PDOT11_NETWORK_LIST &ppNetworkList);
extern DELPHI_PACKAGE unsigned __fastcall WlanSetPsdIEDataList(NativeUInt hClientHandle, System::WideChar * strFormat, PWLAN_RAW_DATA_LIST pPsdIEDataList, void * pReserved);
extern DELPHI_PACKAGE unsigned __fastcall WlanSaveTemporaryProfile(NativeUInt hClientHandle, System::PGUID pInterfaceGuid, System::WideChar * strProfileName, System::WideChar * strAllUserProfileSecurity, unsigned dwFlags, System::LongBool bOverWrite, void * pReserved);
extern DELPHI_PACKAGE unsigned __fastcall WlanExtractPsdIEDataList(NativeUInt hClientHandle, unsigned dwIeDataSize, System::PByte pRawIeData, System::WideChar * strFormat, void * pReserved, PWLAN_RAW_DATA_LIST &ppPsdIEDataList);
extern DELPHI_PACKAGE unsigned __fastcall WlanReasonCodeToString(unsigned dwReasonCode, unsigned dwBufferSize, System::WideChar * pStringBuffer, void * pReserved);
extern DELPHI_PACKAGE void * __fastcall WlanAllocateMemory(unsigned dwMemorySize);
extern DELPHI_PACKAGE void __fastcall WlanFreeMemory(void * pMemory);
extern DELPHI_PACKAGE unsigned __fastcall WlanSetSecuritySettings(NativeUInt hClientHandle, WLAN_SECURABLE_OBJECT SecurableObject, System::WideChar * strModifiedSDDL);
extern DELPHI_PACKAGE unsigned __fastcall WlanGetSecuritySettings(NativeUInt hClientHandle, WLAN_SECURABLE_OBJECT SecurableObject, PWLAN_OPCODE_VALUE_TYPE pValueType, Wclwinapi::PLPWSTR pstrCurrentSDDL, unsigned* pdwGrantedAccess);
extern DELPHI_PACKAGE unsigned __fastcall WlanUIEditProfile(unsigned dwClientVersion, System::WideChar * wstrProfileName, System::PGUID pInterfaceGuid, HWND hWnd, WL_DISPLAY_PAGES wlStartPage, void * pReserved, PWLAN_REASON_CODE pWlanReasonCode);
extern DELPHI_PACKAGE unsigned __fastcall WlanHostedNetworkStartUsing(NativeUInt hClientHandle, PWLAN_HOSTED_NETWORK_REASON pFailReason, void * pvReserved);
extern DELPHI_PACKAGE unsigned __fastcall WlanHostedNetworkStopUsing(NativeUInt hClientHandle, PWLAN_HOSTED_NETWORK_REASON pFailReason, void * pvReserved);
extern DELPHI_PACKAGE unsigned __fastcall WlanHostedNetworkForceStart(NativeUInt hClientHandle, PWLAN_HOSTED_NETWORK_REASON pFailReason, void * pvReserved);
extern DELPHI_PACKAGE unsigned __fastcall WlanHostedNetworkForceStop(NativeUInt hClientHandle, PWLAN_HOSTED_NETWORK_REASON pFailReason, void * pvReserved);
extern DELPHI_PACKAGE unsigned __fastcall WlanHostedNetworkQueryProperty(NativeUInt hClientHandle, WLAN_HOSTED_NETWORK_OPCODE OpCode, unsigned* pdwDataSize, void * &ppvData, PWLAN_OPCODE_VALUE_TYPE pWlanOpcodeValueType, void * pvReserved);
extern DELPHI_PACKAGE unsigned __fastcall WlanHostedNetworkSetProperty(NativeUInt hClientHandle, WLAN_HOSTED_NETWORK_OPCODE OpCode, unsigned dwDataSize, void * pvData, PWLAN_HOSTED_NETWORK_REASON pFailReason, void * pvReserved);
extern DELPHI_PACKAGE unsigned __fastcall WlanHostedNetworkInitSettings(NativeUInt hClientHandle, PWLAN_HOSTED_NETWORK_REASON pFailReason, void * pvReserved);
extern DELPHI_PACKAGE unsigned __fastcall WlanHostedNetworkRefreshSecuritySettings(NativeUInt hClientHandle, PWLAN_HOSTED_NETWORK_REASON pFailReason, void * pvReserved);
extern DELPHI_PACKAGE unsigned __fastcall WlanHostedNetworkQueryStatus(NativeUInt hClientHandle, PWLAN_HOSTED_NETWORK_STATUS &ppWlanHostedNetworkStatus, void * pvReserved);
extern DELPHI_PACKAGE unsigned __fastcall WlanHostedNetworkSetSecondaryKey(NativeUInt hClientHandle, unsigned dwKeyLength, PUCHAR pucKeyData, System::LongBool bIsPassPhrase, System::LongBool bPersistent, PWLAN_HOSTED_NETWORK_REASON pFailReason, void * pvReserved);
extern DELPHI_PACKAGE unsigned __fastcall WlanHostedNetworkQuerySecondaryKey(NativeUInt hClientHandle, unsigned* pdwKeyLength, PUCHAR &ppucKeyData, PBOOL pbIsPassPhrase, PBOOL pbPersistent, PWLAN_HOSTED_NETWORK_REASON pFailReason, void * pvReserved);
extern DELPHI_PACKAGE unsigned __fastcall WlanRegisterVirtualStationNotification(NativeUInt hClientHandle, System::LongBool bRegister, void * pReserved);
extern DELPHI_PACKAGE unsigned __fastcall WFDOpenHandle(unsigned dwClientVersion, unsigned* pdwNegotiatedVersion, Winapi::Windows::PHandle phClientHandle);
extern DELPHI_PACKAGE unsigned __fastcall WFDCloseHandle(NativeUInt hClientHandle);
extern DELPHI_PACKAGE unsigned __fastcall WFDStartOpenSession(NativeUInt hClientHandle, PDOT11_MAC_ADDRESS pDeviceAddress, void * pvContext, WFD_OPEN_SESSION_COMPLETE_CALLBACK pfnCallback, Winapi::Windows::PHandle phSessionHandle);
extern DELPHI_PACKAGE unsigned __fastcall WFDCancelOpenSession(NativeUInt hSessionHandle);
extern DELPHI_PACKAGE unsigned __fastcall WFDOpenLegacySession(NativeUInt hClientHandle, PDOT11_MAC_ADDRESS pLegacyMacAddress, Winapi::Windows::PHandle phSessionHandle, System::PGUID pGuidSessionInterface);
extern DELPHI_PACKAGE unsigned __fastcall WFDCloseSession(NativeUInt hSessionHandle);
extern DELPHI_PACKAGE unsigned __fastcall WFDUpdateDeviceVisibility(PDOT11_MAC_ADDRESS pDeviceAddress);
extern DELPHI_PACKAGE int __fastcall wclLoadWlan(void);
extern DELPHI_PACKAGE int __fastcall wclUnloadWlan(void);
}	/* namespace Wclwlan */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WCLWLAN)
using namespace Wclwlan;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WclwlanHPP
