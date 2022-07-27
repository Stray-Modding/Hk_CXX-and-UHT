#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "RuntimeFloatCurve.h"
#include "ERenderFocusRule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "EUIScalingRule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EMouseCursor -FallbackName=EMouseCursor
#include "HardwareCursorReference.h"
#include "UserInterfaceSettings.generated.h"

class UDPICustomScalingRule;
class UObject;

UCLASS(DefaultConfig)
class ENGINE_API UUserInterfaceSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    ERenderFocusRule RenderFocusRule;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<TEnumAsByte<EMouseCursor::Type>, FHardwareCursorReference> HardwareCursors;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<TEnumAsByte<EMouseCursor::Type>, FSoftClassPath> SoftwareCursors;
    
    UPROPERTY(Config)
    FSoftClassPath DefaultCursor;
    
    UPROPERTY(Config)
    FSoftClassPath TextEditBeamCursor;
    
    UPROPERTY(Config)
    FSoftClassPath CrosshairsCursor;
    
    UPROPERTY(Config)
    FSoftClassPath HandCursor;
    
    UPROPERTY(Config)
    FSoftClassPath GrabHandCursor;
    
    UPROPERTY(Config)
    FSoftClassPath GrabHandClosedCursor;
    
    UPROPERTY(Config)
    FSoftClassPath SlashedCircleCursor;
    
    UPROPERTY(Config, EditAnywhere)
    float ApplicationScale;
    
    UPROPERTY(Config, EditAnywhere)
    EUIScalingRule UIScaleRule;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath CustomScalingRuleClass;
    
    UPROPERTY(Config, EditAnywhere)
    FRuntimeFloatCurve UIScaleCurve;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAllowHighDPIInGameMode;
    
    UPROPERTY(Config, EditAnywhere)
    FIntPoint DesignScreenSize;
    
    UPROPERTY(Config, EditAnywhere)
    bool bLoadWidgetsOnDedicatedServer;
    
private:
    UPROPERTY(Transient)
    TArray<UObject*> CursorClasses;
    
    UPROPERTY(Transient)
    UClass* CustomScalingRuleClassInstance;
    
    UPROPERTY(Transient)
    UDPICustomScalingRule* CustomScalingRule;
    
public:
    UUserInterfaceSettings();
};

