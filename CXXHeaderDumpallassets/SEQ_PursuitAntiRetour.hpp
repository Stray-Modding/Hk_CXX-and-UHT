#ifndef UE4SS_SDK_SEQ_PursuitAntiRetour_HPP
#define UE4SS_SDK_SEQ_PursuitAntiRetour_HPP

class ASEQ_PursuitAntiRetour_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    TArray<class ASEQ_TriggerCameraSpline_C*> Camera spline trigger;                  // 0x0270 (size: 0x10)
    bool Inactif;                                                                     // 0x0280 (size: 0x1)

    void LogicTrigger();
    void ReceiveBeginPlay();
    void OnStartSequence();
    void BndEvt__SEQ_PursuitAntiRetour_m_saveComponent_K2Node_ComponentBoundEvent_0_SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    void ExecuteUbergraph_SEQ_PursuitAntiRetour(int32 EntryPoint);
}; // Size: 0x281

#endif
