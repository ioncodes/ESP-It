#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Potato

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Potato.B_Potato_C
// 0x0100 (0x0390 - 0x0290)
class AB_Potato_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NS_PotatoeTrail;                                   // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Mesh;                                              // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       CollisionComponent;                                // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         HitEmitter;                                        // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              HitSound;                                          // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentProjectileHP;                               // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Stamina;                                           // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HideOnSpawnDuration;                               // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TeleportOnCooldown;                                // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E1[0x7];                                      // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 HitActor;                                          // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         Lifetime;                                          // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentLifeTime;                                   // 0x02F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TimeIncrement;                                     // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2FC[0x4];                                      // 0x02FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        LowStaminaThreshlold;                              // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LowStaminaOffset;                                  // 0x0308(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             NewTransform;                                      // 0x0320(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 NewOwner;                                          // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  NewInstigator;                                     // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AddImpulseToHitComponent(class UPrimitiveComponent* HitComponent, const struct FVector& Velocity);
	void AddScoreStats();
	void ApplyPointDamage(class AActor* HitActor_0, const struct FVector& HitFromDirection, const struct FHitResult& HitInfo, class AController* EventInstigator, class AActor* DamageCauser);
	void BeginPlaySetup();
	void DestroyIfHPIsZeroOrWitchHit(double HitAngle);
	void ExecuteUbergraph_B_Potato(int32 EntryPoint);
	void GetRippleEffect(class UNiagaraSystem** RippleEffectNiagara);
	void GetRippleScale(struct FVector* Scale);
	void GetSplashEffect(class UNiagaraSystem** SplashEffectNiagara);
	void GetSplashScale(struct FVector* Scale);
	void GetSplashSound(class USoundCue** Sound);
	void HandleHit(const struct FVector& HitNormal, class AActor* HitActor_0, const struct FHitResult& HitInfo, class UPrimitiveComponent* HitComponent);
	void HighStaminaTearUp();
	void IncrementLifeSpanTimer();
	void InitializeRules();
	void LowStaminaTearUp(double Stamina_0);
	void Play_Destroy_Effects_Multi(const struct FVector& Location);
	void PlayDestroyEffects(const struct FVector& Location);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void RotateMesh();
	void SetNewValuesForTearUp(const struct FTransform& NewTransform_0, class AActor* NewOwner_0, class APawn* NewInstigator_0);
	void TearDown();
	void TearDownMulticast();
	void TearDownPoolObject();
	void TearUp(const struct FTransform& SpawnTransform, class AActor* Owner_0, class APawn* Instigator_0);
	void TearUpByStamina(double Stamina_0);
	void TearUpMulticast(const struct FTransform& SpawnTransform, class AActor* Owner_0, class APawn* Instigator_0, const struct FVector& Velocity);
	void TearUpPoolObject(const struct FTransform& SpawnTransform, class AActor* Owner_0, class APawn* Instigator_0);
	void UnhidePotatoMesh();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Potato_C">();
	}
	static class AB_Potato_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Potato_C>();
	}
};
static_assert(alignof(AB_Potato_C) == 0x000010, "Wrong alignment on AB_Potato_C");
static_assert(sizeof(AB_Potato_C) == 0x000390, "Wrong size on AB_Potato_C");
static_assert(offsetof(AB_Potato_C, UberGraphFrame) == 0x000290, "Member 'AB_Potato_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Potato_C, NS_PotatoeTrail) == 0x000298, "Member 'AB_Potato_C::NS_PotatoeTrail' has a wrong offset!");
static_assert(offsetof(AB_Potato_C, ProjectileMovement) == 0x0002A0, "Member 'AB_Potato_C::ProjectileMovement' has a wrong offset!");
static_assert(offsetof(AB_Potato_C, Mesh) == 0x0002A8, "Member 'AB_Potato_C::Mesh' has a wrong offset!");
static_assert(offsetof(AB_Potato_C, CollisionComponent) == 0x0002B0, "Member 'AB_Potato_C::CollisionComponent' has a wrong offset!");
static_assert(offsetof(AB_Potato_C, HitEmitter) == 0x0002B8, "Member 'AB_Potato_C::HitEmitter' has a wrong offset!");
static_assert(offsetof(AB_Potato_C, HitSound) == 0x0002C0, "Member 'AB_Potato_C::HitSound' has a wrong offset!");
static_assert(offsetof(AB_Potato_C, CurrentProjectileHP) == 0x0002C8, "Member 'AB_Potato_C::CurrentProjectileHP' has a wrong offset!");
static_assert(offsetof(AB_Potato_C, Stamina) == 0x0002D0, "Member 'AB_Potato_C::Stamina' has a wrong offset!");
static_assert(offsetof(AB_Potato_C, HideOnSpawnDuration) == 0x0002D8, "Member 'AB_Potato_C::HideOnSpawnDuration' has a wrong offset!");
static_assert(offsetof(AB_Potato_C, TeleportOnCooldown) == 0x0002E0, "Member 'AB_Potato_C::TeleportOnCooldown' has a wrong offset!");
static_assert(offsetof(AB_Potato_C, HitActor) == 0x0002E8, "Member 'AB_Potato_C::HitActor' has a wrong offset!");
static_assert(offsetof(AB_Potato_C, Lifetime) == 0x0002F0, "Member 'AB_Potato_C::Lifetime' has a wrong offset!");
static_assert(offsetof(AB_Potato_C, CurrentLifeTime) == 0x0002F4, "Member 'AB_Potato_C::CurrentLifeTime' has a wrong offset!");
static_assert(offsetof(AB_Potato_C, TimeIncrement) == 0x0002F8, "Member 'AB_Potato_C::TimeIncrement' has a wrong offset!");
static_assert(offsetof(AB_Potato_C, LowStaminaThreshlold) == 0x000300, "Member 'AB_Potato_C::LowStaminaThreshlold' has a wrong offset!");
static_assert(offsetof(AB_Potato_C, LowStaminaOffset) == 0x000308, "Member 'AB_Potato_C::LowStaminaOffset' has a wrong offset!");
static_assert(offsetof(AB_Potato_C, NewTransform) == 0x000320, "Member 'AB_Potato_C::NewTransform' has a wrong offset!");
static_assert(offsetof(AB_Potato_C, NewOwner) == 0x000380, "Member 'AB_Potato_C::NewOwner' has a wrong offset!");
static_assert(offsetof(AB_Potato_C, NewInstigator) == 0x000388, "Member 'AB_Potato_C::NewInstigator' has a wrong offset!");

}
