#ifndef UE4SS_SDK_BP_CatButton_ScratchableWindowBlind_HPP
#define UE4SS_SDK_BP_CatButton_ScratchableWindowBlind_HPP

class ABP_Catbutton_ScratchableWindowBlind_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0230 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0238 (size: 0x8)
    class UArrowComponent* ScratchSpot;                                               // 0x0240 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0248 (size: 0x8)
    class UCOMP_CatScratchableComponent_C* COMP_CatScratchableComponent;              // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Metal_stuff_05;                                       // 0x0258 (size: 0x8)
    class UStaticMeshComponent* Cube4;                                                // 0x0260 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0268 (size: 0x8)
    class USceneComponent* HandleRoot;                                                // 0x0270 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x0278 (size: 0x8)
    class UStaticMeshComponent* Cylinder1;                                            // 0x0280 (size: 0x8)
    class UStaticMeshComponent* Cube3;                                                // 0x0288 (size: 0x8)
    class USceneComponent* CurtainRoot;                                               // 0x0290 (size: 0x8)
    class UStaticMeshComponent* Cube1;                                                // 0x0298 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x02A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A8 (size: 0x8)
    float Initscale;                                                                  // 0x02B0 (size: 0x4)
    float Currentscale;                                                               // 0x02B4 (size: 0x4)
    float ScratchProgress;                                                            // 0x02B8 (size: 0x4)
    float RollUpScale;                                                                // 0x02BC (size: 0x4)
    int32 ScratchesRequired;                                                          // 0x02C0 (size: 0x4)
    int32 ScratchCount;                                                               // 0x02C4 (size: 0x4)
    TArray<class AActor*> ActorToTrigger;                                             // 0x02C8 (size: 0x10)
    bool IsScratching;                                                                // 0x02D8 (size: 0x1)
    bool WrappedUp;                                                                   // 0x02D9 (size: 0x1)

    void UserConstructionScript();
    void Complete_578069E64FB8DCA8E1905FB744D9996F();
    void Tick_578069E64FB8DCA8E1905FB744D9996F(float Ratio);
    void Complete_578069E64FB8DCA8E1905FB7252A963F();
    void Tick_578069E64FB8DCA8E1905FB7252A963F(float Ratio);
    void LogicTrigger();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnWrapUp();
    void Cancel Scratch();
    void BndEvt__BP_Catbutton_ScratchableWindowBlind_COMP_CatScratchableComponent_K2Node_ComponentBoundEvent_0_CatUsableDelegate__DelegateSignature(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void BndEvt__BP_Catbutton_ScratchableWindowBlind_Streaming_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_BP_Catbutton_ScratchableWindowBlind(int32 EntryPoint);
}; // Size: 0x2DA

#endif
