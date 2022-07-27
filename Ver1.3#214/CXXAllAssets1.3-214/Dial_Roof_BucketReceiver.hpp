#ifndef UE4SS_SDK_Dial_Roof_BucketReceiver_HPP
#define UE4SS_SDK_Dial_Roof_BucketReceiver_HPP

class ADial_Roof_BucketReceiver_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class ASeq_BucketThrower_C* Sequ_thrower;                                         // 0x0340 (size: 0x8)

    void OnDialogBegan();
    void ExecuteUbergraph_Dial_Roof_BucketReceiver(int32 EntryPoint);
}; // Size: 0x348

#endif
