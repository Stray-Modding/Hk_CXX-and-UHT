#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EMagicLeapARPinType.h"
#include "EMagicLeapAutoPinType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "MagicLeapARPinState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MagicLeapARPinComponent.generated.h"

class UMagicLeapARPinSaveGame;
class USphereComponent;
class AActor;

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAGICLEAPARPIN_API UMagicLeapARPinComponent : public USceneComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPersistentEntityPinned, bool, bRestoredOrSynced);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPersistentEntityPinLost);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMagicLeapARPinDataLoadAttemptCompleted, bool, bDataRestored);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ObjectUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UserIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMagicLeapAutoPinType AutoPinType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldPinActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UMagicLeapARPinSaveGame> PinDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSet<EMagicLeapARPinType> SearchPinTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    USphereComponent* SearchVolume;
    
    UPROPERTY(BlueprintAssignable)
    FPersistentEntityPinned OnPersistentEntityPinned;
    
    UPROPERTY(BlueprintAssignable)
    FPersistentEntityPinLost OnPersistentEntityPinLost;
    
    UPROPERTY(BlueprintAssignable)
    FMagicLeapARPinDataLoadAttemptCompleted OnPinDataLoadAttemptCompleted;
    
private:
    UPROPERTY()
    FGuid PinnedCFUID;
    
    UPROPERTY(Export)
    USceneComponent* PinnedSceneComponent;
    
    UPROPERTY()
    UMagicLeapARPinSaveGame* PinData;
    
public:
    UMagicLeapARPinComponent();
    UFUNCTION(BlueprintCallable)
    void UnPin();
    
    UFUNCTION(BlueprintCallable)
    UMagicLeapARPinSaveGame* TryGetPinData(TSubclassOf<UMagicLeapARPinSaveGame> InPinDataClass, bool& OutPinDataValid);
    
    UFUNCTION(BlueprintCallable)
    bool PinToRestoredOrSyncedID();
    
    UFUNCTION(BlueprintCallable)
    bool PinToID(const FGuid& PinId);
    
    UFUNCTION(BlueprintCallable)
    void PinToBestFit();
    
    UFUNCTION(BlueprintCallable)
    bool PinSceneComponent(USceneComponent* ComponentToPin);
    
    UFUNCTION(BlueprintPure)
    bool PinRestoredOrSynced() const;
    
    UFUNCTION(BlueprintCallable)
    bool PinActor(AActor* ActorToPin);
    
    UFUNCTION(BlueprintPure)
    bool IsPinned() const;
    
    UFUNCTION(BlueprintPure)
    bool GetPinState(FMagicLeapARPinState& State) const;
    
    UFUNCTION(BlueprintPure)
    bool GetPinnedPinID(FGuid& PinId) const;
    
    UFUNCTION(BlueprintCallable)
    UMagicLeapARPinSaveGame* GetPinData(TSubclassOf<UMagicLeapARPinSaveGame> NewPinDataClass);
    
    UFUNCTION(BlueprintCallable)
    void AttemptPinDataRestorationAsync();
    
    UFUNCTION(BlueprintCallable)
    bool AttemptPinDataRestoration();
    
};

