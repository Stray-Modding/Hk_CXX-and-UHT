#ifndef UE4SS_SDK_Tape_Pile_HPP
#define UE4SS_SDK_Tape_Pile_HPP

class ATape_Pile_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0230 (size: 0x8)
    class UBackpackUsableComponent* BackpackUsable;                                   // 0x0238 (size: 0x8)
    class UStaticMeshComponent* wfdgfdss3;                                            // 0x0240 (size: 0x8)
    class UStaticMeshComponent* wfdgfdss2;                                            // 0x0248 (size: 0x8)
    class UStaticMeshComponent* wfdgfdss1;                                            // 0x0250 (size: 0x8)
    class UStaticMeshComponent* wfdgfdss;                                             // 0x0258 (size: 0x8)
    class UStaticMeshComponent* Tape_01_LD5;                                          // 0x0260 (size: 0x8)
    class UStaticMeshComponent* Tape_01_LD4;                                          // 0x0268 (size: 0x8)
    class UStaticMeshComponent* Tape_01_LD3;                                          // 0x0270 (size: 0x8)
    class UStaticMeshComponent* Tape_01_LD2;                                          // 0x0278 (size: 0x8)
    class UStaticMeshComponent* Tape_01_LD1;                                          // 0x0280 (size: 0x8)
    class UStaticMeshComponent* W;                                                    // 0x0288 (size: 0x8)
    class UStaticMeshComponent* Tape_01_LD;                                           // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    class ABP_Droid_C* DroidToStartDial;                                              // 0x02A0 (size: 0x8)

    void BndEvt__Tape_Pile_BackpackUsable_K2Node_ComponentBoundEvent_0_CatUsableDelegate__DelegateSignature(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void BndEvt__Tape_Pile_BackpackUsable_K2Node_ComponentBoundEvent_1_CatUsableDelegate__DelegateSignature(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void ExecuteUbergraph_Tape_Pile(int32 EntryPoint);
}; // Size: 0x2A8

#endif
