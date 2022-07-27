#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ExternalToolDefinition.h"
#include "EditorMapPerformanceTestDefinition.h"
#include "BuildPromotionTestSettings.h"
#include "EditorImportExportTestDefinition.h"
#include "MaterialEditorPromotionSettings.h"
#include "ParticleEditorPromotionSettings.h"
#include "BlueprintEditorPromotionSettings.h"
#include "LaunchOnTestSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "AutomationTestSettings.generated.h"

UCLASS(DefaultConfig)
class ENGINE_API UAutomationTestSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TArray<FString> EngineTestModules;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FString> EditorTestModules;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath AutomationTestmap;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FEditorMapPerformanceTestDefinition> EditorPerformanceTestMaps;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FSoftObjectPath> AssetsToOpen;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FString> MapsToPIETest;
    
    UPROPERTY(Config, EditAnywhere)
    FBuildPromotionTestSettings BuildPromotionTest;
    
    UPROPERTY(Config, EditAnywhere)
    FMaterialEditorPromotionSettings MaterialEditorPromotionTest;
    
    UPROPERTY(Config, EditAnywhere)
    FParticleEditorPromotionSettings ParticleEditorPromotionTest;
    
    UPROPERTY(Config, EditAnywhere)
    FBlueprintEditorPromotionSettings BlueprintEditorPromotionTest;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FString> TestLevelFolders;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FExternalToolDefinition> ExternalTools;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FEditorImportExportTestDefinition> ImportExportTestDefinitions;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FLaunchOnTestSettings> LaunchOnSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FIntPoint DefaultScreenshotResolution;
    
    UPROPERTY(Config, EditAnywhere)
    float PIETestDuration;
    
    UAutomationTestSettings();
};

