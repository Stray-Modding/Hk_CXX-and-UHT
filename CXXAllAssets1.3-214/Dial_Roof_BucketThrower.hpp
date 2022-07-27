#ifndef UE4SS_SDK_Dial_Roof_BucketThrower_HPP
#define UE4SS_SDK_Dial_Roof_BucketThrower_HPP

class ADial_Roof_BucketThrower_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class ASeq_BucketThrower_C* Seq_BucketThrower;                                    // 0x0340 (size: 0x8)

    void OnDialogBegan();
    void ExecuteUbergraph_Dial_Roof_BucketThrower(int32 EntryPoint);
}; // Size: 0x348

#endif
