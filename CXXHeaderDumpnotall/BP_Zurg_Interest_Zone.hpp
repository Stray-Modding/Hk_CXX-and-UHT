#ifndef UE4SS_SDK_BP_Zurg_Interest_Zone_HPP
#define UE4SS_SDK_BP_Zurg_Interest_Zone_HPP

class ABP_Zurg_Interest_Zone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* ZurgInterestZoneTriggerBox;
    class USphereComponent* ZurgInterestZoneTriggerSphere;
    class USceneComponent* SceneRootComponent;
    class ABP_ZurgZone_C* ZurgZone;
    bool bIsABox;

    void GetAvailablePlaceNumber(int32& FreeSpotCount, int32& SpotCount);
    void GetIsAvailableInterestPoint(bool& FreeSpotAvailable);
    void GetFreeInterestPoint(class UBP_Zurg_InterestPoint_C*& Best Interest Point);
    void UserConstructionScript();
    void BndEvt__ZurgTriggerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__ZurgTriggerSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnZurgEnterInInterestingPoint(class ABP_ZurgPawnSlave_C* Zurg, class UBP_Zurg_InterestPoint_C* Interest Point);
    void OnZurgLeavingInterestingPoint(class ABP_ZurgPawnSlave_C* Zurg, class UBP_Zurg_InterestPoint_C* Interest Point);
    void BndEvt__BP_Zurg_Interest_Zone_ZurgInterestZoneTriggerBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_Zurg_Interest_Zone_ZurgInterestZoneTriggerBox_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Custom_OnActorBeginOverlap(class AActor* Actor);
    void Custom_OnActorEndOverlap(class AActor* Actor);
    void ExecuteUbergraph_BP_Zurg_Interest_Zone(int32 EntryPoint);
};

#endif
