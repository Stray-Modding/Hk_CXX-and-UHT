#ifndef UE4SS_SDK_Seq_DEMO_SLUM_INTRO_HPP
#define UE4SS_SDK_Seq_DEMO_SLUM_INTRO_HPP

class ASeq_DEMO_SLUM_INTRO_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    TSubclassOf<class UUserWidget> UMG_INTRO_DEMO;                                    // 0x0270 (size: 0x8)
    class ACineCameraActor* Camera;                                                   // 0x0278 (size: 0x8)
    class UAnimSequence* Animation before_play;                                       // 0x0280 (size: 0x8)
    class UDEMO_SLUM_INTRO_C* UMG Intro Demo;                                         // 0x0288 (size: 0x8)
    bool Demo Intro ?;                                                                // 0x0290 (size: 0x1)
    bool SeqDone;                                                                     // 0x0291 (size: 0x1)

    void LogicTrigger();
    void OnStartSequence();
    void ExecuteUbergraph_Seq_DEMO_SLUM_INTRO(int32 EntryPoint);
}; // Size: 0x292

#endif
