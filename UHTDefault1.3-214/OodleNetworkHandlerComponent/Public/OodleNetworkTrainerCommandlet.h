#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Commandlet -FallbackName=Commandlet
#include "OodleNetworkTrainerCommandlet.generated.h"

UCLASS(NonTransient, Config=Editor)
class UOodleNetworkTrainerCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    bool bCompressionTest;
    
    UPROPERTY(Config)
    int32 HashTableSize;
    
    UPROPERTY(Config)
    int32 DictionarySize;
    
    UPROPERTY(Config)
    int32 DictionaryTrials;
    
    UPROPERTY(Config)
    int32 TrialRandomness;
    
    UPROPERTY(Config)
    int32 TrialGenerations;
    
    UPROPERTY(Config)
    bool bNoTrials;
    
    UOodleNetworkTrainerCommandlet();
};

