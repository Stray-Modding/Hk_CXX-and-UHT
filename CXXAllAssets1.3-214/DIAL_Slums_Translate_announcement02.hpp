#ifndef UE4SS_SDK_DIAL_Slums_Translate_announcement02_HPP
#define UE4SS_SDK_DIAL_Slums_Translate_announcement02_HPP

class ADIAL_Slums_Translate_announcement02_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    class AActor* ShowDirActor;                                                       // 0x0348 (size: 0x8)

    void OnDialogBegan();
    void ExecuteUbergraph_DIAL_Slums_Translate_announcement02(int32 EntryPoint);
}; // Size: 0x350

#endif
