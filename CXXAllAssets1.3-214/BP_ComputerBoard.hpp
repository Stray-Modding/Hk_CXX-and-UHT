#ifndef UE4SS_SDK_BP_ComputerBoard_HPP
#define UE4SS_SDK_BP_ComputerBoard_HPP

class ABP_ComputerBoard_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* TechRoom_Table_B;                                     // 0x0230 (size: 0x8)
    class UStaticMeshComponent* slopeCollision;                                       // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Screen4;                                              // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Screen3;                                              // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Screen2;                                              // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Screen1;                                              // 0x0258 (size: 0x8)
    class UStaticMeshComponent* Keyboard;                                             // 0x0260 (size: 0x8)
    class UArrowComponent* SfxSpawn3;                                                 // 0x0268 (size: 0x8)
    class UArrowComponent* SfxSpawn2;                                                 // 0x0270 (size: 0x8)
    class UArrowComponent* SfxSpawn1;                                                 // 0x0278 (size: 0x8)
    class UArrowComponent* SfxSpawn;                                                  // 0x0280 (size: 0x8)
    class UBoxComponent* TriggerBoxSwitchOn/Off;                                      // 0x0288 (size: 0x8)
    class UTextRenderComponent* NumberTop;                                            // 0x0290 (size: 0x8)
    class UStaticMeshComponent* Table;                                                // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    class UMaterialInstance* ScreenOff;                                               // 0x02A8 (size: 0x8)
    class UMaterialInstance* ScreenOn;                                                // 0x02B0 (size: 0x8)
    bool On/Off;                                                                      // 0x02B8 (size: 0x1)
    int32 Row;                                                                        // 0x02BC (size: 0x4)
    int32 Column;                                                                     // 0x02C0 (size: 0x4)
    FText TextRow;                                                                    // 0x02C8 (size: 0x18)
    FBP_ComputerBoard_CComputerOn ComputerOn;                                         // 0x02E0 (size: 0x10)
    void ComputerOn(class ABP_ComputerBoard_C* computer);
    FBP_ComputerBoard_CComputerOff ComputerOff;                                       // 0x02F0 (size: 0x10)
    void ComputerOff(class ABP_ComputerBoard_C* computer);
    TArray<FTransform> FX_Trans;                                                      // 0x0300 (size: 0x10)
    bool PattesOn;                                                                    // 0x0310 (size: 0x1)
    int32 ID;                                                                         // 0x0314 (size: 0x4)

    void CheckCatPaws(bool& PawsOn);
    void SetMatOn/Off(bool On/Off);
    void UserConstructionScript();
    void Switch On/Off();
    void Turn OFF(float Volume);
    void turn on(float Volume);
    void BndEvt__BP_UploadBoard_TriggerKeyboard_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_UploadBoard_TriggerBoxSwitchOn/Off_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Activate();
    void ExecuteUbergraph_BP_ComputerBoard(int32 EntryPoint);
    void ComputerOff__DelegateSignature(class ABP_ComputerBoard_C* computer);
    void ComputerOn__DelegateSignature(class ABP_ComputerBoard_C* computer);
}; // Size: 0x318

#endif
