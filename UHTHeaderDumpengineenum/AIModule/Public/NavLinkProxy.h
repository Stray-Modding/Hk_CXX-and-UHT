#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavigationSegmentLink -FallbackName=NavigationSegmentLink
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavLinkHostInterface -FallbackName=NavLinkHostInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavRelevantInterface -FallbackName=NavRelevantInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavigationLink -FallbackName=NavigationLink
#include "SmartLinkReachedSignatureDelegate.h"
#include "NavLinkProxy.generated.h"

class UNavLinkCustomComponent;

UCLASS()
class AIMODULE_API ANavLinkProxy : public AActor, public INavLinkHostInterface, public INavRelevantInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FNavigationLink> PointLinks;
    
    UPROPERTY()
    TArray<FNavigationSegmentLink> SegmentLinks;
    
private:
    UPROPERTY(Export, VisibleAnywhere)
    UNavLinkCustomComponent* SmartLinkComp;
    
public:
    UPROPERTY(EditAnywhere)
    bool bSmartLinkIsRelevant;
    
protected:
    UPROPERTY(BlueprintAssignable)
    FSmartLinkReachedSignature OnSmartLinkReached;
    
public:
    ANavLinkProxy();
    UFUNCTION(BlueprintCallable)
    void SetSmartLinkEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void ResumePathFollowing(AActor* Agent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveSmartLinkReached(AActor* Agent, const FVector& Destination);
    
    UFUNCTION(BlueprintPure)
    bool IsSmartLinkEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool HasMovingAgents() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

