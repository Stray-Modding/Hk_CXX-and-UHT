#ifndef UE4SS_SDK_Dial_Momo_BarCommunication_HPP
#define UE4SS_SDK_Dial_Momo_BarCommunication_HPP

class ADial_Momo_BarCommunication_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    bool StartDialogDone;                                                             // 0x0348 (size: 0x1)
    bool ConvStarted;                                                                 // 0x0349 (size: 0x1)
    bool ConvEnded;                                                                   // 0x034A (size: 0x1)
    class ABP_Droid_C* Momo;                                                          // 0x0350 (size: 0x8)
    class ASkeletalMeshActor* Screen;                                                 // 0x0358 (size: 0x8)
    class ASeq_Roberto_BAR_C* Seq_Roberto;                                            // 0x0360 (size: 0x8)
    class AActor* DronePos_TV;                                                        // 0x0368 (size: 0x8)
    class AActor* DronePos_Momo;                                                      // 0x0370 (size: 0x8)
    class AActor* DronePos_Roberto;                                                   // 0x0378 (size: 0x8)
    class ADial_BarComWithSewers_C* Dial_BarScreen;                                   // 0x0380 (size: 0x8)
    class UMaterialInterface* ScreenMat_Talk;                                         // 0x0388 (size: 0x8)
    class UMaterialInterface* ScreenMat_Idle;                                         // 0x0390 (size: 0x8)
    class UMaterialInterface* ScreenMat_glitch;                                       // 0x0398 (size: 0x8)
    FColor Color;                                                                     // 0x03A0 (size: 0x4)
    FText UnknownName;                                                                // 0x03A8 (size: 0x18)
    FText MomoName;                                                                   // 0x03C0 (size: 0x18)
    FText GerardName;                                                                 // 0x03D8 (size: 0x18)
    class ALevelSequenceActor* Bar_Sequence;                                          // 0x03F0 (size: 0x8)
    class AActor* Drone_Pos_Cam_01;                                                   // 0x03F8 (size: 0x8)
    class AActor* Drone_Pos_Cam_03;                                                   // 0x0400 (size: 0x8)
    class ARectLight* Tv_Light;                                                       // 0x0408 (size: 0x8)
    class AActor* CatPos_Cam02;                                                       // 0x0410 (size: 0x8)
    class AActor* CatPos_Cam03;                                                       // 0x0418 (size: 0x8)
    class AActor* Cat_LookAtMomo;                                                     // 0x0420 (size: 0x8)
    class AActor* Cat_LookAtScreen;                                                   // 0x0428 (size: 0x8)
    class AActor* Seamus;                                                             // 0x0430 (size: 0x8)
    FName LookAtId;                                                                   // 0x0438 (size: 0x8)
    FName LookAtId00;                                                                 // 0x0440 (size: 0x8)
    class AActor* Keyboard;                                                           // 0x0448 (size: 0x8)
    class AActor* Drone_Pos_Cam_04;                                                   // 0x0450 (size: 0x8)

    void OnDialogBegan();
    void requestMusicFillerStart();
    void Swap To Gerard Lines(FText _displayedName);
    void Swap to Momo Lines(FText _displayedName, bool ScreenGLitch);
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void OnBeforeDialogEnded();
    void ExecuteUbergraph_Dial_Momo_BarCommunication(int32 EntryPoint);
}; // Size: 0x458

#endif
