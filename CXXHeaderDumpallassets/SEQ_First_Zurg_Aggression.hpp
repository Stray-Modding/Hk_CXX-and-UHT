#ifndef UE4SS_SDK_SEQ_First_Zurg_Aggression_HPP
#define UE4SS_SDK_SEQ_First_Zurg_Aggression_HPP

class ASEQ_First_Zurg_Aggression_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    class AActor* extra player;                                                       // 0x0240 (size: 0x8)

    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_SEQ_First_Zurg_Aggression(int32 EntryPoint);
}; // Size: 0x248

#endif
