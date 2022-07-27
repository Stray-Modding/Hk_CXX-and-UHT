#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "CustomAttributeSetting.h"
#include "ECustomAttributeBlendType.h"
#include "AnimationSettings.generated.h"

UCLASS(DefaultConfig)
class ENGINE_API UAnimationSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, VisibleAnywhere)
    int32 CompressCommandletVersion;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FString> KeyEndEffectorsMatchNameArray;
    
    UPROPERTY(Config, EditAnywhere)
    bool ForceRecompression;
    
    UPROPERTY(Config, EditAnywhere)
    bool bForceBelowThreshold;
    
    UPROPERTY(Config, EditAnywhere)
    bool bFirstRecompressUsingCurrentOrDefault;
    
    UPROPERTY(Config, EditAnywhere)
    bool bRaiseMaxErrorToExisting;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnablePerformanceLog;
    
    UPROPERTY(Config, EditAnywhere)
    bool bStripAnimationDataOnDedicatedServer;
    
    UPROPERTY(Config, EditAnywhere)
    bool bTickAnimationOnSkeletalMeshInit;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FCustomAttributeSetting> BoneCustomAttributesNames;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FString> BoneNamesWithCustomAttributes;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FName, ECustomAttributeBlendType> AttributeBlendModes;
    
    UPROPERTY(Config, EditAnywhere)
    ECustomAttributeBlendType DefaultAttributeBlendMode;
    
    UAnimationSettings();
};

