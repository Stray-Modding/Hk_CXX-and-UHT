#ifndef UE4SS_SDK_BP_Zurg_Counter_HPP
#define UE4SS_SDK_BP_Zurg_Counter_HPP

class ABP_Zurg_Counter_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UTextRenderComponent* DebugTextRender;                                      // 0x0230 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0238 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    TArray<class ABP_ZurgPawnSlave_C*> ZurgsInsideBox;                                // 0x0250 (size: 0x10)
    FBP_Zurg_Counter_COnZurgEnterBox OnZurgEnterBox;                                  // 0x0260 (size: 0x10)
    void OnZurgEnterBox(int32 New Count);
    FBP_Zurg_Counter_COnZurgExitBox OnZurgExitBox;                                    // 0x0270 (size: 0x10)
    void OnZurgExitBox(int32 New Count);
    bool Debug;                                                                       // 0x0280 (size: 0x1)

    void GetZurgCount(int32& Count);
    void ReceiveBeginPlay();
    void BndEvt__BP_Zurg_Counter_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_Zurg_Counter_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_Zurg_Counter(int32 EntryPoint);
    void OnZurgExitBox__DelegateSignature(int32 New Count);
    void OnZurgEnterBox__DelegateSignature(int32 New Count);
}; // Size: 0x281

#endif
