#ifndef UE4SS_SDK_DIAL_B12GoBackToClem_HPP
#define UE4SS_SDK_DIAL_B12GoBackToClem_HPP

class ADIAL_B12GoBackToClem_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)

    void OnDialogBegan();
    void ExecuteUbergraph_DIAL_B12GoBackToClem(int32 EntryPoint);
}; // Size: 0x340

#endif
