#ifndef UE4SS_SDK_BP_Actor_to_Translate_HPP
#define UE4SS_SDK_BP_Actor_to_Translate_HPP

class ABP_Actor_to_Translate_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0230 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0238 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0240 (size: 0x8)
    class UTalkableComponent* talkable;                                               // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Arrow_01;                                             // 0x0250 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0258 (size: 0x8)
    class ABP_DialogBase_C* Dial;                                                     // 0x0260 (size: 0x8)
    int32 Nmb_Vertical;                                                               // 0x0268 (size: 0x4)
    float Texture Offset;                                                             // 0x026C (size: 0x4)
    FRandomStream Random_Stream;                                                      // 0x0270 (size: 0x8)
    int32 Nmb_Horizontal;                                                             // 0x0278 (size: 0x4)
    class UStaticMesh* Mesh;                                                          // 0x0280 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Actor_to_Translate(int32 EntryPoint);
}; // Size: 0x288

#endif
