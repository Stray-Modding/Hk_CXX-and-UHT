#ifndef UE4SS_SDK_BP_Savable_SkeletalMesh_HPP
#define UE4SS_SDK_BP_Savable_SkeletalMesh_HPP

class ABP_Savable_SkeletalMesh_C : public ASkeletalMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USaveComponent* Save;
    class UStreamingComponent* Streaming;
    class UAnimSequence* Animation;
    float Initial Position;

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__Save_K2Node_ComponentBoundEvent_0_SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void PlayAnimation(class UAnimSequence* Animation);
    void BndEvt__Save_K2Node_ComponentBoundEvent_2_SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_3_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_BP_Savable_SkeletalMesh(int32 EntryPoint);
};

#endif
