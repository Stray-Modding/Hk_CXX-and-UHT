#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EChapter.h"
#include "DialogLineSynchronizedActor.h"
#include "EHKPlatform.h"
#include "LookAtData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "HKUtilities.generated.h"

class UObject;
class ACharacterDroid;
class UActivityData;
class AGameStateManager;
class UB12Memories;

UCLASS(BlueprintType)
class HK_PROJECT_API UHKUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHKUtilities();
    UFUNCTION(BlueprintCallable)
    static void SetVolumetricFogGridPixelSize(int32 _size);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsInZurgPursuit(const UObject* _worldContextObject, bool _isInZurgPursuit);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsInSentinelPattern(const UObject* _worldContextObject, bool _isInSentinelPattern);
    
    UFUNCTION(BlueprintCallable)
    static void SetChapter(const UObject* _worldContextObject, EChapter _id);
    
    UFUNCTION(BlueprintCallable)
    static void PrintBlueprintCallstack();
    
    UFUNCTION(BlueprintCallable)
    static void OpenChapter(const UObject* _worldContextObject, EChapter _id);
    
    UFUNCTION(BlueprintCallable)
    static void OnTriggerSynchronizedAnimation(const TArray<FDialogLineSynchronizedActor>& _synchronizedActors, ACharacterDroid* _droid);
    
    UFUNCTION(BlueprintCallable)
    static void OnPlayerCatScratched(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void OnFinishedSynchronizedAnimation(const TArray<FDialogLineSynchronizedActor>& _synchronizedActors, ACharacterDroid* _droid);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> LoadLevelAndGetSubLevelsPath(const FName _levelAssetPath, bool _excludeInvisibleLevels);
    
    UFUNCTION(BlueprintPure)
    static bool IsMemoryRevealed(const UObject* _worldContextObject, const FName& _memoryId);
    
    UFUNCTION(BlueprintPure)
    static bool IsDecemberDemoBuild();
    
    UFUNCTION(BlueprintPure)
    static bool IsAudioLogEnabled();
    
    UFUNCTION(BlueprintPure)
    static int32 GetVolumetricFogGridPixelSize();
    
    UFUNCTION(BlueprintPure)
    static FString GetVersionText();
    
    UFUNCTION(BlueprintPure)
    static TEnumAsByte<EHKPlatform> GetPlatform();
    
    UFUNCTION(BlueprintPure)
    static float GetMusicVolume();
    
    UFUNCTION(BlueprintPure)
    static int32 GetMinorVersion();
    
    UFUNCTION(BlueprintPure)
    static float GetMasterVolume();
    
    UFUNCTION(BlueprintPure)
    static int32 GetMajorVersion();
    
    UFUNCTION(BlueprintCallable)
    static FVector GetLookAtTarget(const FLookAtData& _lookAtData, const FVector& _referenceLocation, const FRotator& _referenceRotation);
    
    UFUNCTION(BlueprintPure)
    static FText GetKeyDisplayName(const FKey& _key, bool _longDisplayName);
    
    UFUNCTION(BlueprintPure)
    static bool GetJumpPromptEnabled();
    
    UFUNCTION(BlueprintPure)
    static bool GetIsInZurgPursuit(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool GetIsInSentinelPattern(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool GetHUDEnabled();
    
    UFUNCTION(BlueprintPure)
    static AGameStateManager* GetGameStateManager(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static float GetEffectsVolume();
    
    UFUNCTION(BlueprintPure)
    static FText GetChapterName(const UObject* _worldContextObject, EChapter _id);
    
    UFUNCTION(BlueprintPure)
    static TSet<FName> GetChapterMemories(const UObject* _worldContextObject, EChapter _id);
    
    UFUNCTION(BlueprintPure)
    static EChapter GetChapter(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static FString GetBuildTimestamp();
    
    UFUNCTION(BlueprintPure)
    static int32 GetBuildRevision();
    
    UFUNCTION(BlueprintPure)
    static int32 GetBuildNumber();
    
    UFUNCTION(BlueprintPure)
    static FString GetBuildDescription();
    
    UFUNCTION(BlueprintPure)
    static FString GetBuildConfiguration();
    
    UFUNCTION(BlueprintPure)
    static FString GetBranchName();
    
    UFUNCTION(BlueprintPure)
    static UB12Memories* GetB12MemoriesData(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool GetAutoCameraEnabled();
    
    UFUNCTION(BlueprintPure)
    static UActivityData* GetActivityData(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FString GenerateRandomSentence(int32 _wordCount, int32 _minWordLength, int32 _maxWordLength, const FString& _suffix);
    
};

