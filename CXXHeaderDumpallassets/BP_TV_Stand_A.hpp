#ifndef UE4SS_SDK_BP_TV_Stand_A_HPP
#define UE4SS_SDK_BP_TV_Stand_A_HPP

class ABP_TV_Stand_A_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* TV_Stand_A_Door_C;                                    // 0x0230 (size: 0x8)
    class UStaticMeshComponent* TV_Stand_A_Door_B;                                    // 0x0238 (size: 0x8)
    class UStaticMeshComponent* TV_Stand_A;                                           // 0x0240 (size: 0x8)
    class UStaticMeshComponent* TV_Stand_A_Door_A;                                    // 0x0248 (size: 0x8)
    class USplineRailComponent* SplineRail;                                           // 0x0250 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0258 (size: 0x8)
    bool Jumpable;                                                                    // 0x0260 (size: 0x1)
    bool Door_A_visibility;                                                           // 0x0261 (size: 0x1)
    float Door_A_Offset;                                                              // 0x0264 (size: 0x4)
    bool Door_B_visibility;                                                           // 0x0268 (size: 0x1)
    float Door_B_Offset;                                                              // 0x026C (size: 0x4)
    bool Door_C_visibility;                                                           // 0x0270 (size: 0x1)
    float Door_C_Offset;                                                              // 0x0274 (size: 0x4)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_TV_Stand_A(int32 EntryPoint);
}; // Size: 0x278

#endif
