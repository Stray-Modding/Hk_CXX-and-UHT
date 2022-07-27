#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlatformGameInstance -FallbackName=PlatformGameInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "ECoordinatesOrigin.h"
#include "JoyGameInstance.generated.h"

class UCurveFloat;
class AManager;
class UObject;

UCLASS(NonTransient)
class JOYLIBRARYRUNTIME_API UJoyGameInstance : public UPlatformGameInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<AManager*> m_managers;
    
public:
    UJoyGameInstance();
    UFUNCTION(BlueprintPure)
    AManager* GetManager(TSubclassOf<AManager> _managerClass, UObject* _worldContextObject) const;
    
    UFUNCTION(BlueprintCallable)
    void DrawDebugCurve(UCurveFloat* _curve, TEnumAsByte<ECoordinatesOrigin> _coordinatesOrigin, FVector2D _position, FVector2D _size, float _curveXMin, float _curveXMax, float _curveValue, const FString& _curveName, FColor _curveColor, FColor _valueColor, int32 _samplesCount);
    
};

