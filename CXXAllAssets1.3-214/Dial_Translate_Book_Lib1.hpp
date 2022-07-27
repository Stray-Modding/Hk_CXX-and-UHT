#ifndef UE4SS_SDK_Dial_Translate_Book_Lib1_HPP
#define UE4SS_SDK_Dial_Translate_Book_Lib1_HPP

class ADial_Translate_Book_Lib1_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    bool keysgiven;                                                                   // 0x0348 (size: 0x1)
    class ALOOT_Keys_SlumLibrary_C* keysActor;                                        // 0x0350 (size: 0x8)

    void OnDialogBegan();
    void ExecuteUbergraph_Dial_Translate_Book_Lib1(int32 EntryPoint);
}; // Size: 0x358

#endif
