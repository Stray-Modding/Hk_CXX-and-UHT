#ifndef UE4SS_SDK_BP_CashRegister_HPP
#define UE4SS_SDK_BP_CashRegister_HPP

class ABP_CashRegister_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Cash_Register_B;                                      // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Cash_Register_A;                                      // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    bool hasCoins;                                                                    // 0x0248 (size: 0x1)

    void OpenDrawer();
    void CloseDrawer();
    void PressButton();
    void Print();
    void ExecuteUbergraph_BP_CashRegister(int32 EntryPoint);
}; // Size: 0x249

#endif
