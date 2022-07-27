#ifndef UE4SS_SDK_DIAL_ClubBarman_HPP
#define UE4SS_SDK_DIAL_ClubBarman_HPP

class ADIAL_ClubBarman_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    class ABP_Droid_C* droid_Barman;                                                  // 0x0348 (size: 0x8)
    class ASeq_Camera_Balcony_Blazer_C* Seq_Cam_Blazer;                               // 0x0350 (size: 0x8)
    bool first time talked;                                                           // 0x0358 (size: 0x1)
    class ASeq_Arrest_ToJAIL_C* Seq_Arrest_club;                                      // 0x0360 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_DIAL_ClubBarman(int32 EntryPoint);
}; // Size: 0x368

#endif
