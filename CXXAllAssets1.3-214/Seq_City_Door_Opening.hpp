#ifndef UE4SS_SDK_Seq_City_Door_Opening_HPP
#define UE4SS_SDK_Seq_City_Door_Opening_HPP

class ASeq_City_Door_Opening_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ABP_City_Door_C* BP_City_Door01_1;                                          // 0x0270 (size: 0x8)
    class ABP_City_Door_C* BP_City_Door01_2;                                          // 0x0278 (size: 0x8)
    class ABP_City_Door_C* BP_City_Door01_3;                                          // 0x0280 (size: 0x8)
    class ABP_City_Door_C* BP_City_Door01_4;                                          // 0x0288 (size: 0x8)
    class ABP_City_Door_C* BP_City_Door01_5;                                          // 0x0290 (size: 0x8)
    class ABP_City_Door_C* BP_City_Door01_6;                                          // 0x0298 (size: 0x8)
    class ABP_City_Door_Center_C* BP_City_Door_Center;                                // 0x02A0 (size: 0x8)
    TArray<class ABP_Door_WALL_C*> BP_Door_WALL_Array;                                // 0x02A8 (size: 0x10)
    TArray<class ABP_Counter_C*> BP_Screen_Counter;                                   // 0x02B8 (size: 0x10)
    class ASeq_Ending_AfterRoofOpen_C* Seq_Ending_AfterRoofOpen;                      // 0x02C8 (size: 0x8)
    bool after_VideoCine;                                                             // 0x02D0 (size: 0x1)

    void LogicTrigger();
    void Open Roof(bool WithCenterDoor);
    void StartCineMp4();
    void ReceiveBeginPlay();
    void Sound_Roof_AfterCine();
    void BndEvt__Seq_City_Door_Opening_m_streamingComponent_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_Seq_City_Door_Opening(int32 EntryPoint);
}; // Size: 0x2D1

#endif
