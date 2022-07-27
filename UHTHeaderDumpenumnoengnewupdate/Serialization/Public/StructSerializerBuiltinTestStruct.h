#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "StructSerializerBuiltinTestStruct.generated.h"

USTRUCT(BlueprintType)
struct FStructSerializerBuiltinTestStruct {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid Guid;
    
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    FString String;
    
    UPROPERTY()
    FText Text;
    
    UPROPERTY()
    FVector Vector;
    
    UPROPERTY()
    FVector4 Vector4;
    
    UPROPERTY()
    FRotator Rotator;
    
    UPROPERTY()
    FQuat Quat;
    
    UPROPERTY()
    FColor Color;
    
    SERIALIZATION_API FStructSerializerBuiltinTestStruct();
};

