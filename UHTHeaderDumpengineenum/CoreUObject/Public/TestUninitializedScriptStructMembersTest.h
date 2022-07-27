#pragma once
#include "CoreMinimal.h"
#include "TestUninitializedScriptStructMembersTest.generated.h"

class UObject;

USTRUCT(NoExport)
struct FTestUninitializedScriptStructMembersTest {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UObject* UninitializedObjectReference;
    
    UPROPERTY(Transient)
    UObject* InitializedObjectReference;
    
    UPROPERTY(Transient)
    float UnusedValue;
    
    COREUOBJECT_API FTestUninitializedScriptStructMembersTest();
};

