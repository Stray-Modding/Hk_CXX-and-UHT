#ifndef UE4SS_SDK_Dial_Guardian_Final_HPP
#define UE4SS_SDK_Dial_Guardian_Final_HPP

class ADial_Guardian_Final_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class ASeq_SlumsFinalSequence_C* SlumsFinalSequence;                              // 0x0340 (size: 0x8)
    bool Talked;                                                                      // 0x0348 (size: 0x1)
    class ABP_Droid_C* chief;                                                         // 0x0350 (size: 0x8)

    void OnDialogBegan();
    void ExecuteUbergraph_Dial_Guardian_Final(int32 EntryPoint);
}; // Size: 0x358

#endif
