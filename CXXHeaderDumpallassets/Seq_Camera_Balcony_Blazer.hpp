#ifndef UE4SS_SDK_Seq_Camera_Balcony_Blazer_HPP
#define UE4SS_SDK_Seq_Camera_Balcony_Blazer_HPP

class ASeq_Camera_Balcony_Blazer_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ABP_Droid_C* Barman;                                                        // 0x0270 (size: 0x8)
    class ASeq_Barman_Club_C* Seq_Barman;                                             // 0x0278 (size: 0x8)
    class AActor* Cam_Barman;                                                         // 0x0280 (size: 0x8)
    class AActor* CatPoint_Barman;                                                    // 0x0288 (size: 0x8)
    class AActor* Point_Barman;                                                       // 0x0290 (size: 0x8)
    bool Only_Trigger_Once;                                                           // 0x0298 (size: 0x1)
    bool Seq_Triggered;                                                               // 0x0299 (size: 0x1)
    FTransform barman_Trans;                                                          // 0x02A0 (size: 0x30)

    void OnStartSequence();
    void Focus_Cam_Blazer();
    void Cam_From_Barman();
    void ExecuteUbergraph_Seq_Camera_Balcony_Blazer(int32 EntryPoint);
}; // Size: 0x2D0

#endif
