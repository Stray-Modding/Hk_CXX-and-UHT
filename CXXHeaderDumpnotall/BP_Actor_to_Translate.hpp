#ifndef UE4SS_SDK_BP_Actor_to_Translate_HPP
#define UE4SS_SDK_BP_Actor_to_Translate_HPP

class ABP_Actor_to_Translate_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDecalComponent* Decal;
    class UBillboardComponent* Billboard;
    class UArrowComponent* Arrow;
    class UTalkableComponent* talkable;
    class UStaticMeshComponent* Arrow_01;
    class USceneComponent* DefaultSceneRoot;
    class ABP_DialogBase_C* Dial;
    int32 Nmb_Vertical;
    float Texture Offset;
    FRandomStream Random_Stream;
    int32 Nmb_Horizontal;
    class UStaticMesh* Mesh;

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Actor_to_Translate(int32 EntryPoint);
};

#endif
