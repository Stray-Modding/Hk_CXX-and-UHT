#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DropNoteInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
#include "NetDriverDefinition.h"
#include "DirectoryPath.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "StatColorMapping.h"
#include "GameNameRedirect.h"
#include "ClassRedirect.h"
#include "StructRedirect.h"
#include "PluginRedirect.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "ETransitionType.h"
#include "Engine.generated.h"

class AWorldSettings;
class UMaterialInstanceDynamic;
class UAvoidanceManager;
class UFont;
class ULocalPlayer;
class UConsole;
class UGameViewportClient;
class UGameUserSettings;
class UNavigationSystemBase;
class UNavigationSystemConfig;
class UPhysicsCollisionHandler;
class ALevelScriptActor;
class UAssetManager;
class UTexture2D;
class UTexture;
class UMaterial;
class UPhysicalMaterial;
class UEngineCustomTimeStep;
class UTimecodeProvider;

UCLASS(Abstract, DefaultConfig, Transient)
class ENGINE_API UEngine : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UFont* TinyFont;
    
public:
    UPROPERTY(EditAnywhere, GlobalConfig)
    FSoftObjectPath TinyFontName;
    
private:
    UPROPERTY()
    UFont* SmallFont;
    
public:
    UPROPERTY(EditAnywhere, GlobalConfig)
    FSoftObjectPath SmallFontName;
    
private:
    UPROPERTY()
    UFont* MediumFont;
    
public:
    UPROPERTY(EditAnywhere, GlobalConfig)
    FSoftObjectPath MediumFontName;
    
private:
    UPROPERTY()
    UFont* LargeFont;
    
public:
    UPROPERTY(EditAnywhere, GlobalConfig)
    FSoftObjectPath LargeFontName;
    
private:
    UPROPERTY()
    UFont* SubtitleFont;
    
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere, GlobalConfig)
    FSoftObjectPath SubtitleFontName;
    
private:
    UPROPERTY()
    TArray<UFont*> AdditionalFonts;
    
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere, GlobalConfig)
    TArray<FString> AdditionalFontNames;
    
    UPROPERTY()
    TSubclassOf<UConsole> ConsoleClass;
    
    UPROPERTY(EditAnywhere, GlobalConfig, NoClear)
    FSoftClassPath ConsoleClassName;
    
    UPROPERTY()
    TSubclassOf<UGameViewportClient> GameViewportClientClass;
    
    UPROPERTY(EditAnywhere, GlobalConfig, NoClear)
    FSoftClassPath GameViewportClientClassName;
    
    UPROPERTY()
    TSubclassOf<ULocalPlayer> LocalPlayerClass;
    
    UPROPERTY(EditAnywhere, GlobalConfig, NoClear)
    FSoftClassPath LocalPlayerClassName;
    
    UPROPERTY()
    TSubclassOf<AWorldSettings> WorldSettingsClass;
    
    UPROPERTY(EditAnywhere, GlobalConfig, NoClear)
    FSoftClassPath WorldSettingsClassName;
    
    UPROPERTY(GlobalConfig, NoClear)
    FSoftClassPath NavigationSystemClassName;
    
    UPROPERTY()
    TSubclassOf<UNavigationSystemBase> NavigationSystemClass;
    
    UPROPERTY(GlobalConfig, NoClear)
    FSoftClassPath NavigationSystemConfigClassName;
    
    UPROPERTY()
    TSubclassOf<UNavigationSystemConfig> NavigationSystemConfigClass;
    
    UPROPERTY(GlobalConfig, NoClear)
    FSoftClassPath AvoidanceManagerClassName;
    
    UPROPERTY()
    TSubclassOf<UAvoidanceManager> AvoidanceManagerClass;
    
    UPROPERTY(GlobalConfig, NoClear)
    FSoftClassPath AIControllerClassName;
    
    UPROPERTY()
    TSubclassOf<UPhysicsCollisionHandler> PhysicsCollisionHandlerClass;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, GlobalConfig, NoClear)
    FSoftClassPath PhysicsCollisionHandlerClassName;
    
    UPROPERTY(GlobalConfig, NoClear)
    FSoftClassPath GameUserSettingsClassName;
    
    UPROPERTY()
    TSubclassOf<UGameUserSettings> GameUserSettingsClass;
    
    UPROPERTY()
    UGameUserSettings* GameUserSettings;
    
    UPROPERTY()
    TSubclassOf<ALevelScriptActor> LevelScriptActorClass;
    
    UPROPERTY(EditAnywhere, GlobalConfig, NoClear)
    FSoftClassPath LevelScriptActorClassName;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, GlobalConfig, NoClear)
    FSoftClassPath DefaultBlueprintBaseClassName;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, GlobalConfig, NoClear)
    FSoftClassPath GameSingletonClassName;
    
    UPROPERTY()
    UObject* GameSingleton;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, GlobalConfig, NoClear)
    FSoftClassPath AssetManagerClassName;
    
    UPROPERTY()
    UAssetManager* AssetManager;
    
    UPROPERTY()
    UTexture2D* DefaultTexture;
    
    UPROPERTY(GlobalConfig)
    FSoftObjectPath DefaultTextureName;
    
    UPROPERTY()
    UTexture* DefaultDiffuseTexture;
    
    UPROPERTY(GlobalConfig)
    FSoftObjectPath DefaultDiffuseTextureName;
    
    UPROPERTY()
    UTexture2D* DefaultBSPVertexTexture;
    
    UPROPERTY(GlobalConfig)
    FSoftObjectPath DefaultBSPVertexTextureName;
    
    UPROPERTY()
    UTexture2D* HighFrequencyNoiseTexture;
    
    UPROPERTY(GlobalConfig)
    FSoftObjectPath HighFrequencyNoiseTextureName;
    
    UPROPERTY()
    UTexture2D* DefaultBokehTexture;
    
    UPROPERTY(GlobalConfig)
    FSoftObjectPath DefaultBokehTextureName;
    
    UPROPERTY()
    UTexture2D* DefaultBloomKernelTexture;
    
    UPROPERTY(GlobalConfig)
    FSoftObjectPath DefaultBloomKernelTextureName;
    
    UPROPERTY()
    UMaterial* WireframeMaterial;
    
    UPROPERTY(GlobalConfig)
    FString WireframeMaterialName;
    
    UPROPERTY()
    UMaterial* DebugMeshMaterial;
    
    UPROPERTY(GlobalConfig)
    FSoftObjectPath DebugMeshMaterialName;
    
    UPROPERTY()
    UMaterial* EmissiveMeshMaterial;
    
    UPROPERTY(GlobalConfig)
    FSoftObjectPath EmissiveMeshMaterialName;
    
    UPROPERTY()
    UMaterial* LevelColorationLitMaterial;
    
    UPROPERTY(GlobalConfig)
    FString LevelColorationLitMaterialName;
    
    UPROPERTY()
    UMaterial* LevelColorationUnlitMaterial;
    
    UPROPERTY(GlobalConfig)
    FString LevelColorationUnlitMaterialName;
    
    UPROPERTY()
    UMaterial* LightingTexelDensityMaterial;
    
    UPROPERTY(GlobalConfig)
    FString LightingTexelDensityName;
    
    UPROPERTY()
    UMaterial* ShadedLevelColorationLitMaterial;
    
    UPROPERTY(GlobalConfig)
    FString ShadedLevelColorationLitMaterialName;
    
    UPROPERTY()
    UMaterial* ShadedLevelColorationUnlitMaterial;
    
    UPROPERTY(GlobalConfig)
    FString ShadedLevelColorationUnlitMaterialName;
    
    UPROPERTY()
    UMaterial* RemoveSurfaceMaterial;
    
    UPROPERTY(GlobalConfig)
    FSoftObjectPath RemoveSurfaceMaterialName;
    
    UPROPERTY()
    UMaterial* VertexColorMaterial;
    
    UPROPERTY(GlobalConfig)
    FString VertexColorMaterialName;
    
    UPROPERTY()
    UMaterial* VertexColorViewModeMaterial_ColorOnly;
    
    UPROPERTY(GlobalConfig)
    FString VertexColorViewModeMaterialName_ColorOnly;
    
    UPROPERTY()
    UMaterial* VertexColorViewModeMaterial_AlphaAsColor;
    
    UPROPERTY(GlobalConfig)
    FString VertexColorViewModeMaterialName_AlphaAsColor;
    
    UPROPERTY()
    UMaterial* VertexColorViewModeMaterial_RedOnly;
    
    UPROPERTY(GlobalConfig)
    FString VertexColorViewModeMaterialName_RedOnly;
    
    UPROPERTY()
    UMaterial* VertexColorViewModeMaterial_GreenOnly;
    
    UPROPERTY(GlobalConfig)
    FString VertexColorViewModeMaterialName_GreenOnly;
    
    UPROPERTY()
    UMaterial* VertexColorViewModeMaterial_BlueOnly;
    
    UPROPERTY(GlobalConfig)
    FString VertexColorViewModeMaterialName_BlueOnly;
    
    UPROPERTY(GlobalConfig)
    FSoftObjectPath DebugEditorMaterialName;
    
    UPROPERTY()
    UMaterial* ConstraintLimitMaterial;
    
    UPROPERTY()
    UMaterialInstanceDynamic* ConstraintLimitMaterialX;
    
    UPROPERTY()
    UMaterialInstanceDynamic* ConstraintLimitMaterialXAxis;
    
    UPROPERTY()
    UMaterialInstanceDynamic* ConstraintLimitMaterialY;
    
    UPROPERTY()
    UMaterialInstanceDynamic* ConstraintLimitMaterialYAxis;
    
    UPROPERTY()
    UMaterialInstanceDynamic* ConstraintLimitMaterialZ;
    
    UPROPERTY()
    UMaterialInstanceDynamic* ConstraintLimitMaterialZAxis;
    
    UPROPERTY()
    UMaterialInstanceDynamic* ConstraintLimitMaterialPrismatic;
    
    UPROPERTY()
    UMaterial* InvalidLightmapSettingsMaterial;
    
    UPROPERTY(GlobalConfig)
    FSoftObjectPath InvalidLightmapSettingsMaterialName;
    
    UPROPERTY()
    UMaterial* PreviewShadowsIndicatorMaterial;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FSoftObjectPath PreviewShadowsIndicatorMaterialName;
    
    UPROPERTY()
    UMaterial* ArrowMaterial;
    
    UPROPERTY()
    UMaterialInstanceDynamic* ArrowMaterialYellow;
    
    UPROPERTY(GlobalConfig)
    FSoftObjectPath ArrowMaterialName;
    
    UPROPERTY(GlobalConfig)
    FLinearColor LightingOnlyBrightness;
    
    UPROPERTY(GlobalConfig)
    TArray<FLinearColor> ShaderComplexityColors;
    
    UPROPERTY(GlobalConfig)
    TArray<FLinearColor> QuadComplexityColors;
    
    UPROPERTY(GlobalConfig)
    TArray<FLinearColor> LightComplexityColors;
    
    UPROPERTY(GlobalConfig)
    TArray<FLinearColor> StationaryLightOverlapColors;
    
    UPROPERTY(GlobalConfig)
    TArray<FLinearColor> LODColorationColors;
    
    UPROPERTY(GlobalConfig)
    TArray<FLinearColor> HLODColorationColors;
    
    UPROPERTY(GlobalConfig)
    TArray<FLinearColor> StreamingAccuracyColors;
    
    UPROPERTY(GlobalConfig)
    float MaxPixelShaderAdditiveComplexityCount;
    
    UPROPERTY(GlobalConfig)
    float MaxES3PixelShaderAdditiveComplexityCount;
    
    UPROPERTY(GlobalConfig)
    float MinLightMapDensity;
    
    UPROPERTY(GlobalConfig)
    float IdealLightMapDensity;
    
    UPROPERTY(GlobalConfig)
    float MaxLightMapDensity;
    
    UPROPERTY(GlobalConfig)
    uint8 bRenderLightMapDensityGrayscale: 1;
    
    UPROPERTY(GlobalConfig)
    float RenderLightMapDensityGrayscaleScale;
    
    UPROPERTY(GlobalConfig)
    float RenderLightMapDensityColorScale;
    
    UPROPERTY(GlobalConfig)
    FLinearColor LightMapDensityVertexMappedColor;
    
    UPROPERTY(GlobalConfig)
    FLinearColor LightMapDensitySelectedColor;
    
    UPROPERTY(GlobalConfig)
    TArray<FStatColorMapping> StatColorMappings;
    
    UPROPERTY()
    UPhysicalMaterial* DefaultPhysMaterial;
    
    UPROPERTY(GlobalConfig)
    FSoftObjectPath DefaultPhysMaterialName;
    
    UPROPERTY(Config)
    TArray<FGameNameRedirect> ActiveGameNameRedirects;
    
    UPROPERTY(Config)
    TArray<FClassRedirect> ActiveClassRedirects;
    
    UPROPERTY(Config)
    TArray<FPluginRedirect> ActivePluginRedirects;
    
    UPROPERTY(Config)
    TArray<FStructRedirect> ActiveStructRedirects;
    
    UPROPERTY()
    UTexture2D* PreIntegratedSkinBRDFTexture;
    
    UPROPERTY(GlobalConfig)
    FSoftObjectPath PreIntegratedSkinBRDFTextureName;
    
    UPROPERTY()
    UTexture2D* BlueNoiseTexture;
    
    UPROPERTY(GlobalConfig)
    FSoftObjectPath BlueNoiseTextureName;
    
    UPROPERTY()
    UTexture2D* MiniFontTexture;
    
    UPROPERTY(GlobalConfig)
    FSoftObjectPath MiniFontTextureName;
    
    UPROPERTY()
    UTexture* WeightMapPlaceholderTexture;
    
    UPROPERTY(GlobalConfig)
    FSoftObjectPath WeightMapPlaceholderTextureName;
    
    UPROPERTY()
    UTexture2D* LightMapDensityTexture;
    
    UPROPERTY(GlobalConfig)
    FSoftObjectPath LightMapDensityTextureName;
    
    UPROPERTY()
    UGameViewportClient* GameViewport;
    
    UPROPERTY()
    TArray<FString> DeferredCommands;
    
    UPROPERTY(Config, EditAnywhere)
    float NearClipPlane;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bSubtitlesEnabled: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bSubtitlesForcedOff: 1;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MaximumLoopIterationCount;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bCanBlueprintsTickByDefault: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bOptimizeAnimBlueprintMemberVariableAccess: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bAllowMultiThreadedAnimationUpdate: 1;
    
    UPROPERTY(Config)
    uint8 bEnableEditorPSysRealtimeLOD: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bSmoothFrameRate: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bUseFixedFrameRate: 1;
    
    UPROPERTY(Config, EditAnywhere)
    float FixedFrameRate;
    
    UPROPERTY(Config, EditAnywhere)
    FFloatRange SmoothedFrameRateRange;
    
private:
    UPROPERTY(Transient)
    UEngineCustomTimeStep* CustomTimeStep;
    
public:
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FSoftClassPath CustomTimeStepClassName;
    
private:
    UPROPERTY(Transient)
    UTimecodeProvider* TimecodeProvider;
    
public:
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath TimecodeProviderClassName;
    
    UPROPERTY(Config, EditAnywhere)
    bool bGenerateDefaultTimecode;
    
    UPROPERTY(Config, EditAnywhere)
    FFrameRate GenerateDefaultTimecodeFrameRate;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    float GenerateDefaultTimecodeFrameDelay;
    
    UPROPERTY(Config)
    uint8 bCheckForMultiplePawnsSpawnedInAFrame: 1;
    
    UPROPERTY(Config)
    int32 NumPawnsAllowedToBeSpawnedInAFrame;
    
    UPROPERTY(GlobalConfig)
    uint8 bShouldGenerateLowQualityLightmaps: 1;
    
    UPROPERTY()
    FColor C_WorldBox;
    
    UPROPERTY()
    FColor C_BrushWire;
    
    UPROPERTY()
    FColor C_AddWire;
    
    UPROPERTY()
    FColor C_SubtractWire;
    
    UPROPERTY()
    FColor C_SemiSolidWire;
    
    UPROPERTY()
    FColor C_NonSolidWire;
    
    UPROPERTY()
    FColor C_WireBackground;
    
    UPROPERTY()
    FColor C_ScaleBoxHi;
    
    UPROPERTY()
    FColor C_VolumeCollision;
    
    UPROPERTY()
    FColor C_BSPCollision;
    
    UPROPERTY()
    FColor C_OrthoBackground;
    
    UPROPERTY()
    FColor C_Volume;
    
    UPROPERTY()
    FColor C_BrushShape;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float StreamingDistanceFactor;
    
    UPROPERTY(Config, EditAnywhere)
    FDirectoryPath GameScreenshotSaveDirectory;
    
    UPROPERTY()
    ETransitionType TransitionType;
    
    UPROPERTY()
    FString TransitionDescription;
    
    UPROPERTY()
    FString TransitionGameMode;
    
    UPROPERTY(Config)
    uint8 bAllowMatureLanguage: 1;
    
    UPROPERTY(Config)
    float CameraRotationThreshold;
    
    UPROPERTY(Config)
    float CameraTranslationThreshold;
    
    UPROPERTY(Config)
    float PrimitiveProbablyVisibleTime;
    
    UPROPERTY(Config)
    float MaxOcclusionPixelsFraction;
    
    UPROPERTY(Config)
    uint8 bPauseOnLossOfFocus: 1;
    
    UPROPERTY(Config)
    int32 MaxParticleResize;
    
    UPROPERTY(Config)
    int32 MaxParticleResizeWarn;
    
    UPROPERTY(Transient)
    TArray<FDropNoteInfo> PendingDroppedNotes;
    
    UPROPERTY(GlobalConfig)
    float NetClientTicksPerSecond;
    
    UPROPERTY(Config)
    float DisplayGamma;
    
    UPROPERTY(Config, EditAnywhere)
    float MinDesiredFrameRate;
    
private:
    UPROPERTY(GlobalConfig)
    FLinearColor DefaultSelectedMaterialColor;
    
    UPROPERTY(Transient)
    FLinearColor SelectedMaterialColor;
    
    UPROPERTY(Transient)
    FLinearColor SelectionOutlineColor;
    
    UPROPERTY(Transient)
    FLinearColor SubduedSelectionOutlineColor;
    
    UPROPERTY(Transient)
    FLinearColor SelectedMaterialColorOverride;
    
    UPROPERTY(Transient)
    bool bIsOverridingSelectedColor;
    
public:
    UPROPERTY(GlobalConfig)
    uint8 bEnableOnScreenDebugMessages: 1;
    
    UPROPERTY(Transient)
    uint8 bEnableOnScreenDebugMessagesDisplay: 1;
    
    UPROPERTY(GlobalConfig)
    uint8 bSuppressMapWarnings: 1;
    
    UPROPERTY(GlobalConfig)
    uint8 bDisableAILogging: 1;
    
    UPROPERTY(GlobalConfig)
    uint32 bEnableVisualLogRecordingOnStart;
    
private:
    UPROPERTY(Transient)
    int32 ScreenSaverInhibitorSemaphore;
    
public:
    UPROPERTY(Transient)
    uint8 bLockReadOnlyLevels: 1;
    
    UPROPERTY(GlobalConfig)
    FString ParticleEventManagerClassPath;
    
    UPROPERTY(Transient)
    float SelectionHighlightIntensity;
    
    UPROPERTY(Transient)
    float BSPSelectionHighlightIntensity;
    
    UPROPERTY(Transient)
    float SelectionHighlightIntensityBillboards;
    
    UPROPERTY(Config, Transient)
    TArray<FNetDriverDefinition> NetDriverDefinitions;
    
    UPROPERTY(Config)
    TArray<FString> ServerActors;
    
    UPROPERTY()
    TArray<FString> RuntimeServerActors;
    
    UPROPERTY(GlobalConfig)
    float NetErrorLogInterval;
    
    UPROPERTY(Transient)
    uint8 bStartedLoadMapMovie: 1;
    
protected:
    UPROPERTY()
    int32 NextWorldContextHandle;
    
public:
    UEngine();
};

