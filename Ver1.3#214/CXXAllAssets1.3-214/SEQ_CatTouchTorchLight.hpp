#ifndef UE4SS_SDK_SEQ_CatTouchTorchLight_HPP
#define UE4SS_SDK_SEQ_CatTouchTorchLight_HPP

class ASEQ_CatTouchTorchLight_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x0230 (size: 0x8)
    class UCOMP_CatMoveToPushable_C* COMP_CatMoveToPushable;                          // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Defluxor;                                             // 0x0240 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0248 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0250 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0258 (size: 0x8)
    class USceneComponent* CatPos;                                                    // 0x0260 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0268 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0270 (size: 0x8)
    bool IsPushedByTheCat;                                                            // 0x0278 (size: 0x1)
    TArray<class AActor*> Collision;                                                  // 0x0280 (size: 0x10)
    float Relative Rotation Z (Yaw);                                                  // 0x0290 (size: 0x4)

    void Complete_578069E64FB8DCA8E1905FB7DE2CCF88();
    void Tick_578069E64FB8DCA8E1905FB7DE2CCF88(float Ratio);
    void BndEvt__SEQ_CatTouchTorchLight_Save_K2Node_ComponentBoundEvent_1_SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    void BndEvt__SEQ_CatTouchTorchLight_Streaming_K2Node_ComponentBoundEvent_2_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void BndEvt__SEQ_CatTouchTorchLight_COMP_CatMoveToPushable_K2Node_ComponentBoundEvent_3_OnPawPushed__DelegateSignature(class UCOMP_CatMoveToPushable_C* MoveToPushableComponent);
    void MoveTorchlight();
    void ExecuteUbergraph_SEQ_CatTouchTorchLight(int32 EntryPoint);
}; // Size: 0x294

#endif
