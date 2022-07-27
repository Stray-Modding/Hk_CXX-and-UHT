#ifndef UE4SS_SDK_BP_Zurg_Interest_Zone_HPP
#define UE4SS_SDK_BP_Zurg_Interest_Zone_HPP

class ABP_Zurg_Interest_Zone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UBoxComponent* ZurgInterestZoneTriggerBox;                                  // 0x0230 (size: 0x8)
    class USphereComponent* ZurgInterestZoneTriggerSphere;                            // 0x0238 (size: 0x8)
    class USceneComponent* SceneRootComponent;                                        // 0x0240 (size: 0x8)
    class ABP_ZurgZone_C* ZurgZone;                                                   // 0x0248 (size: 0x8)
    bool bIsABox;                                                                     // 0x0250 (size: 0x1)

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
}; // Size: 0x251

#endif
