#ifndef UE4SS_SDK_BP_B12_ClueTalkable_HPP
#define UE4SS_SDK_BP_B12_ClueTalkable_HPP

class ABP_B12_ClueTalkable_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* postit_03;                                            // 0x0230 (size: 0x8)
    class UCOMP_InteractStartB12Dial_C* COMP_InteractStartB12Dial;                    // 0x0238 (size: 0x8)
    class UStaticMeshComponent* postit_02;                                            // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    class ADialog* Dial;                                                              // 0x0250 (size: 0x8)
    bool ShowPostit;                                                                  // 0x0258 (size: 0x1)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_B12_ClueTalkable(int32 EntryPoint);
}; // Size: 0x259

#endif
