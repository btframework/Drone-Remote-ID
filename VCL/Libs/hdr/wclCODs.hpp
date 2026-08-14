// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wclCODs.pas' rev: 30.00 (Windows)

#ifndef WclcodsHPP
#define WclcodsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>

//-- user supplied -----------------------------------------------------------

namespace Wclcods
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
static const System::Int8 COD_FORMAT_BIT_OFFSET = System::Int8(0x0);
static const System::Int8 COD_MINOR_BIT_OFFSET = System::Int8(0x2);
static const System::Int8 COD_MAJOR_BIT_OFFSET = System::Int8(0x8);
static const System::Int8 COD_SERVICE_BIT_OFFSET = System::Int8(0xd);
static const System::Int8 COD_FORMAT_MASK = System::Int8(0x3);
static const System::Byte COD_MINOR_MASK = System::Byte(0xfc);
static const System::Word COD_MAJOR_MASK = System::Word(0x1f00);
static const int COD_SERVICE_MASK = int(0xffe000);
static const System::Int8 COD_VERSION = System::Int8(0x0);
static const System::Int8 COD_SERVICE_LIMITED = System::Int8(0x1);
static const System::Int8 COD_SERVICE_POSITIONING = System::Int8(0x8);
static const System::Int8 COD_SERVICE_NETWORKING = System::Int8(0x10);
static const System::Int8 COD_SERVICE_RENDERING = System::Int8(0x20);
static const System::Int8 COD_SERVICE_CAPTURING = System::Int8(0x40);
static const System::Byte COD_SERVICE_OBJECT_XFER = System::Byte(0x80);
static const System::Word COD_SERVICE_AUDIO = System::Word(0x100);
static const System::Word COD_SERVICE_TELEPHONY = System::Word(0x200);
static const System::Word COD_SERVICE_INFORMATION = System::Word(0x400);
static const System::Word COD_SERVICE_VALID_MASK = System::Word(0x7f9);
static const System::Int8 COD_SERVICE_MAX_COUNT = System::Int8(0x9);
static const System::Int8 COD_MAJOR_MISCELLANEOUS = System::Int8(0x0);
static const System::Int8 COD_MAJOR_COMPUTER = System::Int8(0x1);
static const System::Int8 COD_MAJOR_PHONE = System::Int8(0x2);
static const System::Int8 COD_MAJOR_LAN_ACCESS = System::Int8(0x3);
static const System::Int8 COD_MAJOR_AUDIO = System::Int8(0x4);
static const System::Int8 COD_MAJOR_PERIPHERAL = System::Int8(0x5);
static const System::Int8 COD_MAJOR_IMAGING = System::Int8(0x6);
static const System::Int8 COD_MAJOR_WEARABLE = System::Int8(0x7);
static const System::Int8 COD_MAJOR_TOY = System::Int8(0x8);
static const System::Int8 COD_MAJOR_HEALTH = System::Int8(0x9);
static const System::Int8 COD_MAJOR_UNCLASSIFIED = System::Int8(0x1f);
static const System::Int8 COD_COMPUTER_MINOR_UNCLASSIFIED = System::Int8(0x0);
static const System::Int8 COD_COMPUTER_MINOR_DESKTOP = System::Int8(0x1);
static const System::Int8 COD_COMPUTER_MINOR_SERVER = System::Int8(0x2);
static const System::Int8 COD_COMPUTER_MINOR_LAPTOP = System::Int8(0x3);
static const System::Int8 COD_COMPUTER_MINOR_HANDHELD = System::Int8(0x4);
static const System::Int8 COD_COMPUTER_MINOR_PALM = System::Int8(0x5);
static const System::Int8 COD_COMPUTER_MINOR_WEARABLE = System::Int8(0x6);
static const System::Int8 COD_PHONE_MINOR_UNCLASSIFIED = System::Int8(0x0);
static const System::Int8 COD_PHONE_MINOR_CELLULAR = System::Int8(0x1);
static const System::Int8 COD_PHONE_MINOR_CORDLESS = System::Int8(0x2);
static const System::Int8 COD_PHONE_MINOR_SMART = System::Int8(0x3);
static const System::Int8 COD_PHONE_MINOR_WIRED_MODEM = System::Int8(0x4);
static const System::Int8 COD_AUDIO_MINOR_UNCLASSIFIED = System::Int8(0x0);
static const System::Int8 COD_AUDIO_MINOR_HEADSET = System::Int8(0x1);
static const System::Int8 COD_AUDIO_MINOR_HANDS_FREE = System::Int8(0x2);
static const System::Int8 COD_AUDIO_MINOR_HEADSET_HANDS_FREE = System::Int8(0x3);
static const System::Int8 COD_AUDIO_MINOR_MICROPHONE = System::Int8(0x4);
static const System::Int8 COD_AUDIO_MINOR_LOUDSPEAKER = System::Int8(0x5);
static const System::Int8 COD_AUDIO_MINOR_HEADPHONES = System::Int8(0x6);
static const System::Int8 COD_AUDIO_MINOR_PORTABLE_AUDIO = System::Int8(0x7);
static const System::Int8 COD_AUDIO_MINOR_CAR_AUDIO = System::Int8(0x8);
static const System::Int8 COD_AUDIO_MINOR_SET_TOP_BOX = System::Int8(0x9);
static const System::Int8 COD_AUDIO_MINOR_HIFI_AUDIO = System::Int8(0xa);
static const System::Int8 COD_AUDIO_MINOR_VCR = System::Int8(0xb);
static const System::Int8 COD_AUDIO_MINOR_VIDEO_CAMERA = System::Int8(0xc);
static const System::Int8 COD_AUDIO_MINOR_CAMCORDER = System::Int8(0xd);
static const System::Int8 COD_AUDIO_MINOR_VIDEO_MONITOR = System::Int8(0xe);
static const System::Int8 COD_AUDIO_MINOR_VIDEO_DISPLAY_LOUDSPEAKER = System::Int8(0xf);
static const System::Int8 COD_AUDIO_MINOR_VIDEO_DISPLAY_CONFERENCING = System::Int8(0x10);
static const System::Int8 COD_AUDIO_MINOR_GAMING_TOY = System::Int8(0x12);
static const System::Int8 COD_PERIPHERAL_MINOR_KEYBOARD_MASK = System::Int8(0x10);
static const System::Int8 COD_PERIPHERAL_MINOR_POINTER_MASK = System::Int8(0x20);
static const System::Int8 COD_PERIPHERAL_MINOR_NO_CATEGORY = System::Int8(0x0);
static const System::Int8 COD_PERIPHERAL_MINOR_JOYSTICK = System::Int8(0x1);
static const System::Int8 COD_PERIPHERAL_MINOR_GAMEPAD = System::Int8(0x2);
static const System::Int8 COD_PERIPHERAL_MINOR_REMOTE_CONTROL = System::Int8(0x3);
static const System::Int8 COD_PERIPHERAL_MINOR_SENSING = System::Int8(0x4);
static const System::Int8 COD_IMAGING_MINOR_DISPLAY_MASK = System::Int8(0x4);
static const System::Int8 COD_IMAGING_MINOR_CAMERA_MASK = System::Int8(0x8);
static const System::Int8 COD_IMAGING_MINOR_SCANNER_MASK = System::Int8(0x10);
static const System::Int8 COD_IMAGING_MINOR_PRINTER_MASK = System::Int8(0x20);
static const System::Int8 COD_WEARABLE_MINOR_WRIST_WATCH = System::Int8(0x1);
static const System::Int8 COD_WEARABLE_MINOR_PAGER = System::Int8(0x2);
static const System::Int8 COD_WEARABLE_MINOR_JACKET = System::Int8(0x3);
static const System::Int8 COD_WEARABLE_MINOR_HELMET = System::Int8(0x4);
static const System::Int8 COD_WEARABLE_MINOR_GLASSES = System::Int8(0x5);
static const System::Int8 COD_TOY_MINOR_ROBOT = System::Int8(0x1);
static const System::Int8 COD_TOY_MINOR_VEHICLE = System::Int8(0x2);
static const System::Int8 COD_TOY_MINOR_DOLL_ACTION_FIGURE = System::Int8(0x3);
static const System::Int8 COD_TOY_MINOR_CONTROLLER = System::Int8(0x4);
static const System::Int8 COD_TOY_MINOR_GAME = System::Int8(0x5);
static const System::Int8 COD_HEALTH_MINOR_BLOOD_PRESSURE_MONITOR = System::Int8(0x1);
static const System::Int8 COD_HEALTH_MINOR_THERMOMETER = System::Int8(0x2);
static const System::Int8 COD_HEALTH_MINOR_WEIGHING_SCALE = System::Int8(0x3);
static const System::Int8 COD_HEALTH_MINOR_GLUCOSE_METER = System::Int8(0x4);
static const System::Int8 COD_HEALTH_MINOR_PULSE_OXIMETER = System::Int8(0x5);
static const System::Int8 COD_HEALTH_MINOR_HEART_PULSE_MONITOR = System::Int8(0x6);
static const System::Int8 COD_HEALTH_MINOR_HEALTH_DATA_DISPLAY = System::Int8(0x7);
static const System::Int8 COD_HEALTH_MINOR_STEP_COUNTER = System::Int8(0x8);
static const System::Int8 COD_LAN_ACCESS_BIT_OFFSET = System::Int8(0x5);
static const System::Int8 COD_LAN_MINOR_MASK = System::Int8(0x1c);
static const System::Byte COD_LAN_ACCESS_MASK = System::Byte(0xe0);
static const System::Int8 COD_LAN_MINOR_UNCLASSIFIED = System::Int8(0x0);
static const System::Int8 COD_LAN_ACCESS_0_USED = System::Int8(0x0);
static const System::Int8 COD_LAN_ACCESS_17_USED = System::Int8(0x1);
static const System::Int8 COD_LAN_ACCESS_33_USED = System::Int8(0x2);
static const System::Int8 COD_LAN_ACCESS_50_USED = System::Int8(0x3);
static const System::Int8 COD_LAN_ACCESS_67_USED = System::Int8(0x4);
static const System::Int8 COD_LAN_ACCESS_83_USED = System::Int8(0x5);
static const System::Int8 COD_LAN_ACCESS_99_USED = System::Int8(0x6);
static const System::Int8 COD_LAN_ACCESS_FULL = System::Int8(0x7);
}	/* namespace Wclcods */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WCLCODS)
using namespace Wclcods;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WclcodsHPP
