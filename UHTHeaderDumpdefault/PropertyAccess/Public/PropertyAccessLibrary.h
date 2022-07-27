#pragma once
#include "CoreMinimal.h"
#include "PropertyAccessSegment.h"
#include "PropertyAccessPath.h"
#include "PropertyAccessCopyBatch.h"
#include "PropertyAccessIndirectionChain.h"
#include "PropertyAccessIndirection.h"
#include "PropertyAccessLibrary.generated.h"

USTRUCT()
struct FPropertyAccessLibrary {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FPropertyAccessSegment> PathSegments;
    
    UPROPERTY()
    TArray<FPropertyAccessPath> SrcPaths;
    
    UPROPERTY()
    TArray<FPropertyAccessPath> DestPaths;
    
    UPROPERTY()
    FPropertyAccessCopyBatch CopyBatches[4];
    
    UPROPERTY(Transient)
    TArray<FPropertyAccessIndirectionChain> SrcAccesses;
    
    UPROPERTY(Transient)
    TArray<FPropertyAccessIndirectionChain> DestAccesses;
    
    UPROPERTY(Transient)
    TArray<FPropertyAccessIndirection> Indirections;
    
    UPROPERTY()
    TArray<int32> EventAccessIndices;
    
public:
    PROPERTYACCESS_API FPropertyAccessLibrary();
};

