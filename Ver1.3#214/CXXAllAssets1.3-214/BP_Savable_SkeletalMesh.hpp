#ifndef UE4SS_SDK_BP_Savable_SkeletalMesh_HPP
#define UE4SS_SDK_BP_Savable_SkeletalMesh_HPP

class ABP_Savable_SkeletalMesh_C : public ASkeletalMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x02B8 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x02C0 (size: 0x8)
    class UAnimSequence* Animation;                                                   // 0x02C8 (size: 0x8)
    float Initial Position;                                                           // 0x02D0 (size: 0x4)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__Save_K2Node_ComponentBoundEvent_0_SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void PlayAnimation(class UAnimSequence* Animation);
    void BndEvt__Save_K2Node_ComponentBoundEvent_2_SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_3_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_BP_Savable_SkeletalMesh(int32 EntryPoint);
}; // Size: 0x2D4

#endif
