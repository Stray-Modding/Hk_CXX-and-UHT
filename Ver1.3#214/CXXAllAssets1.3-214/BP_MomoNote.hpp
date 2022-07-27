#ifndef UE4SS_SDK_BP_MomoNote_HPP
#define UE4SS_SDK_BP_MomoNote_HPP

class ABP_MomoNote_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0230 (size: 0x8)
    class UDecalComponent* Decal3;                                                    // 0x0238 (size: 0x8)
    class UDecalComponent* Decal2;                                                    // 0x0240 (size: 0x8)
    class UDecalComponent* Decal1;                                                    // 0x0248 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0250 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0258 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0260 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0268 (size: 0x8)
    class UTalkableComponent* talkable;                                               // 0x0270 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0278 (size: 0x8)
    int32 Nmb_Vertical;                                                               // 0x0280 (size: 0x4)
    float Texture Offset;                                                             // 0x0284 (size: 0x4)
    FRandomStream Random_Stream;                                                      // 0x0288 (size: 0x8)
    int32 Nmb_Horizontal;                                                             // 0x0290 (size: 0x4)
    class UStaticMesh* Mesh;                                                          // 0x0298 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_MomoNote(int32 EntryPoint);
}; // Size: 0x2A0

#endif
