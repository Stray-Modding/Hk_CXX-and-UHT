#ifndef UE4SS_SDK_BP_CatButton_Pushable_Grid_HPP
#define UE4SS_SDK_BP_CatButton_Pushable_Grid_HPP

class ABP_CatButton_Pushable_Grid_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Metal_stuff_05;                                       // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Metal_stuff_04;                                       // 0x0238 (size: 0x8)
    class UArrowComponent* Move to;                                                   // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Metal_Bar;                                            // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Metal_stuff_03;                                       // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Metal_stuff_02;                                       // 0x0258 (size: 0x8)
    class UCOMP_CatMoveToAnim_C* COMP_CatMoveToAnim;                                  // 0x0260 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0268 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0270 (size: 0x8)
    class UStaticMeshComponent* grid;                                                 // 0x0278 (size: 0x8)
    class USceneComponent* Pivot;                                                     // 0x0280 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0288 (size: 0x8)
    float Timeline_0_NewTrack_0_AA5182F64DEB909306F796BC43180923;                     // 0x0290 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_AA5182F64DEB909306F796BC43180923; // 0x0294 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0298 (size: 0x8)
    bool opened;                                                                      // 0x02A0 (size: 0x1)
    class AActor* Collider;                                                           // 0x02A8 (size: 0x8)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Complete_6246EF4646E19036986D72BA3847E504();
    void Tick_6246EF4646E19036986D72BA3847E504(float Ratio);
    void LogicTrigger();
    void BndEvt__CACA_Chatiere_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void BndEvt__BP_CatButton_Pushable_Grid_COMP_CatMoveToAnim_K2Node_ComponentBoundEvent_1_AnimationStarted__DelegateSignature();
    void ExecuteUbergraph_BP_CatButton_Pushable_Grid(int32 EntryPoint);
}; // Size: 0x2B0

#endif
