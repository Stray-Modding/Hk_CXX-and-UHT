#ifndef UE4SS_SDK_Dial_Antvillage_Mahjong_Player1_HPP
#define UE4SS_SDK_Dial_Antvillage_Mahjong_Player1_HPP

class ADial_Antvillage_Mahjong_Player1_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    class ABP_Droid_C* player1;                                                       // 0x0348 (size: 0x8)
    class ABP_Droid_C* player2;                                                       // 0x0350 (size: 0x8)
    class ADial_Antvillage_Mahjong_Player2_C* Dialog_Win;                             // 0x0358 (size: 0x8)
    class ADial_Antvillage_Mahjong_Player1_C* Dialog_Loose;                           // 0x0360 (size: 0x8)
    int32 Win_Loose;                                                                  // 0x0368 (size: 0x4)

    void OnDialogBegan();
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_Dial_Antvillage_Mahjong_Player1(int32 EntryPoint);
}; // Size: 0x36C

#endif
