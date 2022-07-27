#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ECollisionChannel.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "CheatManager.generated.h"

class APawn;
class AActor;
class ADebugCameraController;
class UCheatManagerExtension;

UCLASS(Blueprintable, Within=PlayerController)
class ENGINE_API UCheatManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    ADebugCameraController* DebugCameraControllerRef;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ADebugCameraController> DebugCameraControllerClass;
    
protected:
    UPROPERTY(Transient)
    TArray<UCheatManagerExtension*> CheatManagerExtensions;
    
public:
    UCheatManager();
    UFUNCTION(BlueprintCallable, Exec)
    void Walk();
    
    UFUNCTION(Exec)
    void ViewSelf();
    
    UFUNCTION(Exec)
    void ViewPlayer(const FString& S);
    
    UFUNCTION(Exec)
    void ViewClass(TSubclassOf<AActor> DesiredClass);
    
    UFUNCTION(Exec)
    void ViewActor(FName ActorName);
    
    UFUNCTION(Exec)
    void UpdateSafeArea();
    
    UFUNCTION(Exec)
    void ToggleServerStatReplicatorUpdateStatNet();
    
    UFUNCTION(Exec)
    void ToggleServerStatReplicatorClientOverwrite();
    
    UFUNCTION(Exec)
    void ToggleDebugCamera();
    
    UFUNCTION(Exec)
    void ToggleAILogging();
    
    UFUNCTION(Exec)
    void TestCollisionDistance();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Teleport();
    
    UFUNCTION(Exec)
    void Summon(const FString& ClassName);
    
    UFUNCTION(Exec)
    void StreamLevelOut(FName PackageName);
    
    UFUNCTION(Exec)
    void StreamLevelIn(FName PackageName);
    
    UFUNCTION(Exec)
    void SpawnServerStatReplicator();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Slomo(float NewTimeDilation);
    
    UFUNCTION(Exec)
    void SetWorldOrigin();
    
    UFUNCTION(Exec)
    void SetMouseSensitivityToDefault();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerToggleAILogging();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveInitCheatManager();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveEndPlay();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayersOnly();
    
    UFUNCTION(Exec)
    void OnlyLoadLevel(FName PackageName);
    
    UFUNCTION(Exec)
    void LogLoc();
    
    UFUNCTION(Exec)
    void InvertMouse();
    
    UFUNCTION(BlueprintCallable, Exec)
    void God();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Ghost();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FreezeFrame(float Delay);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Fly();
    
    UFUNCTION(Exec)
    void FlushLog();
    
protected:
    UFUNCTION(BlueprintCallable)
    void EnableDebugCamera();
    
public:
    UFUNCTION(Exec)
    void DumpVoiceMutingState();
    
    UFUNCTION(Exec)
    void DumpPartyState();
    
    UFUNCTION(Exec)
    void DumpOnlineSessionState();
    
    UFUNCTION(Exec)
    void DumpChatState();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DisableDebugCamera();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyTarget();
    
    UFUNCTION(Exec)
    void DestroyServerStatReplicator();
    
    UFUNCTION(Exec)
    void DestroyPawns(TSubclassOf<APawn> aClass);
    
    UFUNCTION(Exec)
    void DestroyAllPawnsExceptTarget();
    
    UFUNCTION(Exec)
    void DestroyAll(TSubclassOf<AActor> aClass);
    
    UFUNCTION(Exec)
    void DebugCapsuleSweepSize(float HalfHeight, float Radius);
    
    UFUNCTION(Exec)
    void DebugCapsuleSweepPawn();
    
    UFUNCTION(Exec)
    void DebugCapsuleSweepComplex(bool bTraceComplex);
    
    UFUNCTION(Exec)
    void DebugCapsuleSweepClear();
    
    UFUNCTION(Exec)
    void DebugCapsuleSweepChannel(TEnumAsByte<ECollisionChannel> Channel);
    
    UFUNCTION(Exec)
    void DebugCapsuleSweepCapture();
    
    UFUNCTION(Exec)
    void DebugCapsuleSweep();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DamageTarget(float DamageAmount);
    
    UFUNCTION(Exec)
    void CheatScript(const FString& ScriptName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeSize(float F);
    
    UFUNCTION(Exec)
    void BugItStringCreator(FVector ViewLocation, FRotator ViewRotation, FString& GoString, FString& LocString);
    
    UFUNCTION(Exec)
    void BugItGo(float X, float Y, float Z, float Pitch, float Yaw, float Roll);
    
    UFUNCTION(Exec)
    void BugIt(const FString& ScreenShotDescription);
    
};

