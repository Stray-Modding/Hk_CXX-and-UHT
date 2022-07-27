#ifndef UE4SS_SDK_Dial_B12Flat_FirstMeet_HPP
#define UE4SS_SDK_Dial_B12Flat_FirstMeet_HPP

class ADial_B12Flat_FirstMeet_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class ASeq_MeetB12_C* SeqB12;                                                     // 0x0340 (size: 0x8)
    class AActor* Firstpos;                                                           // 0x0348 (size: 0x8)
    class AActor* Look_At_Uploader;                                                   // 0x0350 (size: 0x8)
    class AActor* Look away;                                                          // 0x0358 (size: 0x8)

    void OnDialogBegan();
    void ExecuteUbergraph_Dial_B12Flat_FirstMeet(int32 EntryPoint);
}; // Size: 0x360

#endif
