#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSourcePreset -FallbackName=LiveLinkSourcePreset
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSubjectPreset -FallbackName=LiveLinkSubjectPreset
#include "LiveLinkPreset.generated.h"

UCLASS(BlueprintType)
class LIVELINK_API ULiveLinkPreset : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    TArray<FLiveLinkSourcePreset> Sources;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FLiveLinkSubjectPreset> Subjects;
    
public:
    ULiveLinkPreset();
    UFUNCTION(BlueprintCallable)
    void BuildFromClient();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool ApplyToClient() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool AddToClient(const bool bRecreatePresets) const;
    
};

