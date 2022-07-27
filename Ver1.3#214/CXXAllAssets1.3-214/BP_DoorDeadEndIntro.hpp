#ifndef UE4SS_SDK_BP_DoorDeadEndIntro_HPP
#define UE4SS_SDK_BP_DoorDeadEndIntro_HPP

class ABP_DoorDeadEndIntro_C : public ABP_DoorWindowBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)
    class UStaticMeshComponent* Wood_Plank_a3;                                        // 0x0380 (size: 0x8)
    class UStaticMeshComponent* Wood_Plank_a2;                                        // 0x0388 (size: 0x8)
    class UStaticMeshComponent* Wood_Plank_a1;                                        // 0x0390 (size: 0x8)
    class UStaticMeshComponent* Wood_Plank_a;                                         // 0x0398 (size: 0x8)
    class ABP_Zurg_Interest_Zone_C* InterestZone;                                     // 0x03A0 (size: 0x8)

    void BndEvt__BP_DoorDeadEndTorchlight_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_BP_DoorDeadEndIntro(int32 EntryPoint);
}; // Size: 0x3A8

#endif
