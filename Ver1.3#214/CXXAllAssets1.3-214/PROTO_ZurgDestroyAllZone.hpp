#ifndef UE4SS_SDK_PROTO_ZurgDestroyAllZone_HPP
#define UE4SS_SDK_PROTO_ZurgDestroyAllZone_HPP

class APROTO_ZurgDestroyAllZone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0230 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    int32 ZurgCount;                                                                  // 0x0248 (size: 0x4)
    int32 NbOfZurgsToKeep;                                                            // 0x024C (size: 0x4)

    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_PROTO_ZurgDestroyAllZone(int32 EntryPoint);
}; // Size: 0x250

#endif
