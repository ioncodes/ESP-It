#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlineSubsystemOculus

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "OnlineSubsystemUtils_classes.hpp"


namespace SDK
{

// Class OnlineSubsystemOculus.OculusCreateSessionCallbackProxy
// 0x0068 (0x0098 - 0x0030)
class UOculusCreateSessionCallbackProxy final : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_             OnSuccess;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnFailure;                                         // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_2798[0x48];                                    // 0x0050(0x0048)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UOculusCreateSessionCallbackProxy* CreateSession(int32 PublicConnections, const class FString& OculusMatchmakingPool);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OculusCreateSessionCallbackProxy">();
	}
	static class UOculusCreateSessionCallbackProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOculusCreateSessionCallbackProxy>();
	}
};
static_assert(alignof(UOculusCreateSessionCallbackProxy) == 0x000008, "Wrong alignment on UOculusCreateSessionCallbackProxy");
static_assert(sizeof(UOculusCreateSessionCallbackProxy) == 0x000098, "Wrong size on UOculusCreateSessionCallbackProxy");
static_assert(offsetof(UOculusCreateSessionCallbackProxy, OnSuccess) == 0x000030, "Member 'UOculusCreateSessionCallbackProxy::OnSuccess' has a wrong offset!");
static_assert(offsetof(UOculusCreateSessionCallbackProxy, OnFailure) == 0x000040, "Member 'UOculusCreateSessionCallbackProxy::OnFailure' has a wrong offset!");

// Class OnlineSubsystemOculus.OculusEntitlementCallbackProxy
// 0x0020 (0x0050 - 0x0030)
class UOculusEntitlementCallbackProxy final : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_             OnSuccess;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnFailure;                                         // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

public:
	static class UOculusEntitlementCallbackProxy* VerifyEntitlement();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OculusEntitlementCallbackProxy">();
	}
	static class UOculusEntitlementCallbackProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOculusEntitlementCallbackProxy>();
	}
};
static_assert(alignof(UOculusEntitlementCallbackProxy) == 0x000008, "Wrong alignment on UOculusEntitlementCallbackProxy");
static_assert(sizeof(UOculusEntitlementCallbackProxy) == 0x000050, "Wrong size on UOculusEntitlementCallbackProxy");
static_assert(offsetof(UOculusEntitlementCallbackProxy, OnSuccess) == 0x000030, "Member 'UOculusEntitlementCallbackProxy::OnSuccess' has a wrong offset!");
static_assert(offsetof(UOculusEntitlementCallbackProxy, OnFailure) == 0x000040, "Member 'UOculusEntitlementCallbackProxy::OnFailure' has a wrong offset!");

// Class OnlineSubsystemOculus.OculusFindSessionsCallbackProxy
// 0x0068 (0x0098 - 0x0030)
class UOculusFindSessionsCallbackProxy final : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_             OnSuccess;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnFailure;                                         // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_279A[0x48];                                    // 0x0050(0x0048)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UOculusFindSessionsCallbackProxy* FindMatchmakingSessions(int32 MaxResults, const class FString& OculusMatchmakingPool);
	static class UOculusFindSessionsCallbackProxy* FindModeratedSessions(int32 MaxResults);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OculusFindSessionsCallbackProxy">();
	}
	static class UOculusFindSessionsCallbackProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOculusFindSessionsCallbackProxy>();
	}
};
static_assert(alignof(UOculusFindSessionsCallbackProxy) == 0x000008, "Wrong alignment on UOculusFindSessionsCallbackProxy");
static_assert(sizeof(UOculusFindSessionsCallbackProxy) == 0x000098, "Wrong size on UOculusFindSessionsCallbackProxy");
static_assert(offsetof(UOculusFindSessionsCallbackProxy, OnSuccess) == 0x000030, "Member 'UOculusFindSessionsCallbackProxy::OnSuccess' has a wrong offset!");
static_assert(offsetof(UOculusFindSessionsCallbackProxy, OnFailure) == 0x000040, "Member 'UOculusFindSessionsCallbackProxy::OnFailure' has a wrong offset!");

// Class OnlineSubsystemOculus.OculusIdentityCallbackProxy
// 0x0030 (0x0060 - 0x0030)
class UOculusIdentityCallbackProxy final : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_             OnSuccess;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnFailure;                                         // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_279D[0x10];                                    // 0x0050(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UOculusIdentityCallbackProxy* GetOculusIdentity(int32 LocalUserNum);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OculusIdentityCallbackProxy">();
	}
	static class UOculusIdentityCallbackProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOculusIdentityCallbackProxy>();
	}
};
static_assert(alignof(UOculusIdentityCallbackProxy) == 0x000008, "Wrong alignment on UOculusIdentityCallbackProxy");
static_assert(sizeof(UOculusIdentityCallbackProxy) == 0x000060, "Wrong size on UOculusIdentityCallbackProxy");
static_assert(offsetof(UOculusIdentityCallbackProxy, OnSuccess) == 0x000030, "Member 'UOculusIdentityCallbackProxy::OnSuccess' has a wrong offset!");
static_assert(offsetof(UOculusIdentityCallbackProxy, OnFailure) == 0x000040, "Member 'UOculusIdentityCallbackProxy::OnFailure' has a wrong offset!");

// Class OnlineSubsystemOculus.OculusNetConnection
// 0x0010 (0x1E98 - 0x1E88)
class UOculusNetConnection final : public UIpConnection
{
public:
	uint8                                         Pad_279F[0x10];                                    // 0x1E88(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OculusNetConnection">();
	}
	static class UOculusNetConnection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOculusNetConnection>();
	}
};
static_assert(alignof(UOculusNetConnection) == 0x000008, "Wrong alignment on UOculusNetConnection");
static_assert(sizeof(UOculusNetConnection) == 0x001E98, "Wrong size on UOculusNetConnection");

// Class OnlineSubsystemOculus.OculusNetDriver
// 0x00B8 (0x0958 - 0x08A0)
class UOculusNetDriver final : public UIpNetDriver
{
public:
	uint8                                         Pad_27A0[0xB8];                                    // 0x08A0(0x00B8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OculusNetDriver">();
	}
	static class UOculusNetDriver* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOculusNetDriver>();
	}
};
static_assert(alignof(UOculusNetDriver) == 0x000008, "Wrong alignment on UOculusNetDriver");
static_assert(sizeof(UOculusNetDriver) == 0x000958, "Wrong size on UOculusNetDriver");

// Class OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy
// 0x0040 (0x0070 - 0x0030)
class UOculusUpdateSessionCallbackProxy final : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_             OnSuccess;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnFailure;                                         // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_27A1[0x20];                                    // 0x0050(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UOculusUpdateSessionCallbackProxy* SetSessionEnqueue(bool bShouldEnqueueInMatchmakingPool);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OculusUpdateSessionCallbackProxy">();
	}
	static class UOculusUpdateSessionCallbackProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOculusUpdateSessionCallbackProxy>();
	}
};
static_assert(alignof(UOculusUpdateSessionCallbackProxy) == 0x000008, "Wrong alignment on UOculusUpdateSessionCallbackProxy");
static_assert(sizeof(UOculusUpdateSessionCallbackProxy) == 0x000070, "Wrong size on UOculusUpdateSessionCallbackProxy");
static_assert(offsetof(UOculusUpdateSessionCallbackProxy, OnSuccess) == 0x000030, "Member 'UOculusUpdateSessionCallbackProxy::OnSuccess' has a wrong offset!");
static_assert(offsetof(UOculusUpdateSessionCallbackProxy, OnFailure) == 0x000040, "Member 'UOculusUpdateSessionCallbackProxy::OnFailure' has a wrong offset!");

}
