#ifndef UE4SS_SDK_Dial_Translate_Letter_Clue_Lib_HPP
#define UE4SS_SDK_Dial_Translate_Letter_Clue_Lib_HPP

class ADial_Translate_Letter_Clue_Lib_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    bool keysgiven;                                                                   // 0x0348 (size: 0x1)
    class ALOOT_Keys_SlumLibrary_C* keysActor;                                        // 0x0350 (size: 0x8)

    void OnDialogBegan();
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_Dial_Translate_Letter_Clue_Lib(int32 EntryPoint);
}; // Size: 0x358

#endif
