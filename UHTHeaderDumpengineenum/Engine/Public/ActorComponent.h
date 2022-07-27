#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ActorComponentActivatedSignatureDelegate.h"
#include "Interface_AssetUserData.h"
#include "ActorComponentTickFunction.h"
#include "ActorComponentDeactivateSignatureDelegate.h"
#include "EComponentCreationMethod.h"
#include "SimpleMemberReference.h"
#include "ETickingGroup.h"
#include "EEndPlayReason.h"
#include "ActorComponent.generated.h"

class UAssetUserData;
class UActorComponent;
class AActor;

UCLASS(Abstract, DefaultToInstanced, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UActorComponent : public UObject, public IInterface_AssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FActorComponentTickFunction PrimaryComponentTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> ComponentTags;
    
protected:
    UPROPERTY(AdvancedDisplay, EditAnywhere, Export)
    TArray<UAssetUserData*> AssetUserData;
    
private:
    UPROPERTY()
    int32 UCSSerializationIndex;
    
protected:
    UPROPERTY()
    uint8 bNetAddressable: 1;
    
private:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bReplicates: 1;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bAutoActivate: 1;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsActive)
    uint8 bIsActive: 1;
    
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 bEditableWhenInherited: 1;
    
protected:
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    uint8 bCanEverAffectNavigation: 1;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bIsEditorOnly: 1;
    
    UPROPERTY()
    EComponentCreationMethod CreationMethod;
    
    UPROPERTY(BlueprintAssignable)
    FActorComponentActivatedSignature OnComponentActivated;
    
    UPROPERTY(BlueprintAssignable)
    FActorComponentDeactivateSignature OnComponentDeactivated;
    
private:
    UPROPERTY()
    TArray<FSimpleMemberReference> UCSModifiedProperties;
    
public:
    UActorComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void ToggleActive();
    
    UFUNCTION(BlueprintCallable)
    void SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup);
    
    UFUNCTION(BlueprintCallable)
    void SetTickableWhenPaused(bool bTickableWhenPaused);
    
    UFUNCTION(BlueprintCallable)
    void SetIsReplicated(bool ShouldReplicate);
    
    UFUNCTION(BlueprintCallable)
    void SetComponentTickIntervalAndCooldown(float TickInterval);
    
    UFUNCTION(BlueprintCallable)
    void SetComponentTickInterval(float TickInterval);
    
    UFUNCTION(BlueprintCallable)
    void SetComponentTickEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoActivate(bool bNewAutoActivate);
    
    UFUNCTION(BlueprintCallable)
    void SetActive(bool bNewActive, bool bReset);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTickPrerequisiteComponent(UActorComponent* PrerequisiteComponent);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTickPrerequisiteActor(AActor* PrerequisiteActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveBeginPlay();
    
    UFUNCTION()
    void OnRep_IsActive();
    
    UFUNCTION(BlueprintCallable)
    void K2_DestroyComponent(UObject* Object);
    
    UFUNCTION(BlueprintPure)
    bool IsComponentTickEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBeingDestroyed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetOwner() const;
    
    UFUNCTION(BlueprintPure)
    float GetComponentTickInterval() const;
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintPure)
    bool ComponentHasTag(FName Tag) const;
    
    UFUNCTION(BlueprintCallable)
    void AddTickPrerequisiteComponent(UActorComponent* PrerequisiteComponent);
    
    UFUNCTION(BlueprintCallable)
    void AddTickPrerequisiteActor(AActor* PrerequisiteActor);
    
    UFUNCTION(BlueprintCallable)
    void Activate(bool bReset);
    
    
    // Fix for true pure virtual functions not being implemented
};

