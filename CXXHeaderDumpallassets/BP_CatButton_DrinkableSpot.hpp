#ifndef UE4SS_SDK_BP_CatButton_DrinkableSpot_HPP
#define UE4SS_SDK_BP_CatButton_DrinkableSpot_HPP

class ABP_CatButton_DrinkableSpot_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* DrinkAudio;                                                // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Cat_Drink_Static;                                     // 0x0238 (size: 0x8)
    class UCOMP_CatMoveToLoopAnim_C* COMP_CatMoveToLoopAnim;                          // 0x0240 (size: 0x8)
    class UArrowComponent* CatPosition;                                               // 0x0248 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0250 (size: 0x8)
    TEnumAsByte<ETimelineDirection::Type> Drink_Loop_Timeline__Direction_BA402E9E4A3E3F2F266DDE92D64F6466; // 0x0258 (size: 0x1)
    class UTimelineComponent* Drink Loop Timeline;                                    // 0x0260 (size: 0x8)
    class USoundWave* DrinkVibe;                                                      // 0x0268 (size: 0x8)

    void Drink Loop Timeline__FinishedFunc();
    void Drink Loop Timeline__UpdateFunc();
    void Drink Loop Timeline__Drink Cues__EventFunc();
    void ReceiveBeginPlay();
    void BndEvt__BP_CatButton_DrinkableSpot_COMP_CatMoveToLoopAnim_K2Node_ComponentBoundEvent_0_OnLoopStart__DelegateSignature();
    void BndEvt__BP_CatButton_DrinkableSpot_COMP_CatMoveToLoopAnim_K2Node_ComponentBoundEvent_1_OnLoopEnd__DelegateSignature();
    void ExecuteUbergraph_BP_CatButton_DrinkableSpot(int32 EntryPoint);
}; // Size: 0x270

#endif
