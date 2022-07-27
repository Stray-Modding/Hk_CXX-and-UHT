#ifndef UE4SS_SDK_BP_Checkpoint_Manager_HPP
#define UE4SS_SDK_BP_Checkpoint_Manager_HPP

class ABP_Checkpoint_Manager_C : public ABP_CatSequenceBase_Manager_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    bool CheckpointToyo_Done;                                                         // 0x02A8 (size: 0x1)
    bool CheckpointEnd_Done;                                                          // 0x02A9 (size: 0x1)
    class ABP_HKPlayerStart_C* Checkpoint_Toyo;                                       // 0x02B0 (size: 0x8)
    class ABP_HKPlayerStart_C* Checkpoint_End;                                        // 0x02B8 (size: 0x8)
    class AActor* Black_Checkpoint_Toyo;                                              // 0x02C0 (size: 0x8)
    class AActor* Red_Checkpoint_Toyo;                                                // 0x02C8 (size: 0x8)
    class AActor* White_Checkpoint_Toyo;                                              // 0x02D0 (size: 0x8)
    class AActor* Black_Checkpoint_End;                                               // 0x02D8 (size: 0x8)
    class AActor* Red_Checkpoint_End;                                                 // 0x02E0 (size: 0x8)
    class AActor* White_Checkpoint_End;                                               // 0x02E8 (size: 0x8)
    class AActor* Red_NewSpline;                                                      // 0x02F0 (size: 0x8)
    class AActor* White_NewSpline;                                                    // 0x02F8 (size: 0x8)
    class AActor* Black_NewSpline;                                                    // 0x0300 (size: 0x8)

    void CheckpointToyo();
    void CheckpointEnd();
    void CatsCheckpointToyo_Init();
    void CatsCheckpointEnd_Init();
    void BndEvt__BP_Checkpoint_Manager_m_saveComponent_K2Node_ComponentBoundEvent_0_SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    void BndEvt__BP_Checkpoint_Manager_m_streamingComponent_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_BP_Checkpoint_Manager(int32 EntryPoint);
}; // Size: 0x308

#endif
