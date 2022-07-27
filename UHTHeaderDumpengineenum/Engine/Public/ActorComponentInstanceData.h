#pragma once
#include "CoreMinimal.h"
#include "EComponentCreationMethod.h"
#include "ActorComponentDuplicatedObjectData.h"
#include "ActorComponentInstanceData.generated.h"

class UObject;

USTRUCT()
struct ENGINE_API FActorComponentInstanceData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UObject* SourceComponentTemplate;
    
    UPROPERTY()
    EComponentCreationMethod SourceComponentCreationMethod;
    
    UPROPERTY()
    int32 SourceComponentTypeSerializedIndex;
    
    UPROPERTY()
    TArray<uint8> SavedProperties;
    
    UPROPERTY()
    FActorComponentDuplicatedObjectData UniqueTransientPackage;
    
    UPROPERTY()
    TArray<FActorComponentDuplicatedObjectData> DuplicatedObjects;
    
    UPROPERTY()
    TArray<UObject*> ReferencedObjects;
    
    UPROPERTY()
    TArray<FName> ReferencedNames;
    
public:
    FActorComponentInstanceData();
};

