#ifndef UE4SS_SDK_SEQ_StairsUp_Afraid_HPP
#define UE4SS_SDK_SEQ_StairsUp_Afraid_HPP

class ASEQ_StairsUp_Afraid_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    TMap<class ABP_Droid_C*, class UAnimSequence*> BP_Droid;                          // 0x0270 (size: 0x50)
    TMap<class ASkeletalMeshActor*, class UAnimSequence*> SkeletalMeshProps;          // 0x02C0 (size: 0x50)
    class AActor* ViewTarget;                                                         // 0x0310 (size: 0x8)
    bool SeqPlayed;                                                                   // 0x0318 (size: 0x1)

    void OnStartSequence();
    void LogicTrigger();
    void SetSceneAfterAlarm();
    void ExecuteUbergraph_SEQ_StairsUp_Afraid(int32 EntryPoint);
}; // Size: 0x319

#endif
