#ifndef UE4SS_SDK_BP_TV_Stand_B_HPP
#define UE4SS_SDK_BP_TV_Stand_B_HPP

class ABP_TV_Stand_B_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* TV_Stand_B_Drawer_D;                                  // 0x0230 (size: 0x8)
    class UStaticMeshComponent* TV_Stand_B_Drawer_C;                                  // 0x0238 (size: 0x8)
    class UStaticMeshComponent* TV_Stand_B_Drawer_B;                                  // 0x0240 (size: 0x8)
    class UStaticMeshComponent* TV_Stand_B_Drawer_A;                                  // 0x0248 (size: 0x8)
    class UStaticMeshComponent* TV_Stand_B_Door;                                      // 0x0250 (size: 0x8)
    class UStaticMeshComponent* TV_Stand_B;                                           // 0x0258 (size: 0x8)
    class USplineRailComponent* SplineRail;                                           // 0x0260 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0268 (size: 0x8)
    bool Jumpable;                                                                    // 0x0270 (size: 0x1)
    bool Door_A_visibility;                                                           // 0x0271 (size: 0x1)
    float Door_A_Offset;                                                              // 0x0274 (size: 0x4)
    bool Drawer_A_Visibility;                                                         // 0x0278 (size: 0x1)
    float Drawer_A_Offset;                                                            // 0x027C (size: 0x4)
    bool Drawer_B_Visibility;                                                         // 0x0280 (size: 0x1)
    float Drawer_B_Offset;                                                            // 0x0284 (size: 0x4)
    bool Drawer_C_Visibility;                                                         // 0x0288 (size: 0x1)
    float Drawer_C_Offset;                                                            // 0x028C (size: 0x4)
    bool Drawer_D_Visibility;                                                         // 0x0290 (size: 0x1)
    float Drawer_D_Offset;                                                            // 0x0294 (size: 0x4)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_TV_Stand_B(int32 EntryPoint);
}; // Size: 0x298

#endif
