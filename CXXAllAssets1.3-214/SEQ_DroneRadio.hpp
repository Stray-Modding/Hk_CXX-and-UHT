#ifndef UE4SS_SDK_SEQ_DroneRadio_HPP
#define UE4SS_SDK_SEQ_DroneRadio_HPP

class ASEQ_DroneRadio_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    bool Activate;                                                                    // 0x0270 (size: 0x1)
    class ABP_Dialog_Zone_C* Dialog;                                                  // 0x0278 (size: 0x8)
    class ABP_OrientCameraThirdPersonZone_C* Camera_ShowAntenna;                      // 0x0280 (size: 0x8)

    void ReceiveBeginPlay();
    void LogicTrigger();
    void OnStartSequence();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_SEQ_DroneRadio(int32 EntryPoint);
}; // Size: 0x288

#endif
