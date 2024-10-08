#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UnrealSyslog

#include "Basic.hpp"


namespace SDK
{

// Enum UnrealSyslog.ESyslogFormat
// NumValues: 0x0003
enum class ESyslogFormat : uint8
{
	RFC5424                                  = 0,
	RFC3164                                  = 1,
	ESyslogFormat_MAX                        = 2,
};

// ScriptStruct UnrealSyslog.SyslogServer
// 0x0060 (0x0060 - 0x0000)
struct FSyslogServer final
{
public:
	class FString                                 Address;                                           // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Port;                                              // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Facility;                                          // 0x0014(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESyslogFormat                                 Format;                                            // 0x0018(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUTF8;                                             // 0x0019(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAddBOM;                                           // 0x001A(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUTC;                                              // 0x001B(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Tag;                                               // 0x0020(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                           CategoriesWhiteList;                               // 0x0030(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                           CategoriesBlackList;                               // 0x0040(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_50[0x10];                                      // 0x0050(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSyslogServer) == 0x000008, "Wrong alignment on FSyslogServer");
static_assert(sizeof(FSyslogServer) == 0x000060, "Wrong size on FSyslogServer");
static_assert(offsetof(FSyslogServer, Address) == 0x000000, "Member 'FSyslogServer::Address' has a wrong offset!");
static_assert(offsetof(FSyslogServer, Port) == 0x000010, "Member 'FSyslogServer::Port' has a wrong offset!");
static_assert(offsetof(FSyslogServer, Facility) == 0x000014, "Member 'FSyslogServer::Facility' has a wrong offset!");
static_assert(offsetof(FSyslogServer, Format) == 0x000018, "Member 'FSyslogServer::Format' has a wrong offset!");
static_assert(offsetof(FSyslogServer, bUTF8) == 0x000019, "Member 'FSyslogServer::bUTF8' has a wrong offset!");
static_assert(offsetof(FSyslogServer, bAddBOM) == 0x00001A, "Member 'FSyslogServer::bAddBOM' has a wrong offset!");
static_assert(offsetof(FSyslogServer, bUTC) == 0x00001B, "Member 'FSyslogServer::bUTC' has a wrong offset!");
static_assert(offsetof(FSyslogServer, Tag) == 0x000020, "Member 'FSyslogServer::Tag' has a wrong offset!");
static_assert(offsetof(FSyslogServer, CategoriesWhiteList) == 0x000030, "Member 'FSyslogServer::CategoriesWhiteList' has a wrong offset!");
static_assert(offsetof(FSyslogServer, CategoriesBlackList) == 0x000040, "Member 'FSyslogServer::CategoriesBlackList' has a wrong offset!");

}

