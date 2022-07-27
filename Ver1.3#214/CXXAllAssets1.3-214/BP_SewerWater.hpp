#ifndef UE4SS_SDK_BP_SewerWater_HPP
#define UE4SS_SDK_BP_SewerWater_HPP

class ABP_SewerWater_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Visuel;                                               // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Coll;                                                 // 0x0238 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    class UZurgNewSettings* ZoneSwarmSettings;                                        // 0x0250 (size: 0x8)
    TArray<class ABP_ZurgPawnSlave_C*> CurrentZurgInZone;                             // 0x0258 (size: 0x10)

    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_SewerWater(int32 EntryPoint);
}; // Size: 0x268

#endif
