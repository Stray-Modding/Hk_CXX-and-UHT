#ifndef UE4SS_SDK_BP_DoorAnalogRikonium_Base_HPP
#define UE4SS_SDK_BP_DoorAnalogRikonium_Base_HPP

class ABP_DoorAnalogRikonium_Base_C : public ABP_DoorAnalogRikonium_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UStaticMeshComponent* Factory_Battery_Tower_E2;                             // 0x0378 (size: 0x8)
    class UStaticMeshComponent* Factory_Battery_Tower_E1;                             // 0x0380 (size: 0x8)
    class UStaticMeshComponent* Factory_Battery_Tower_E;                              // 0x0388 (size: 0x8)
    class UStaticMeshComponent* Factory_Battery_Tower_D2;                             // 0x0390 (size: 0x8)
    class UStaticMeshComponent* Factory_Battery_Tower_D1;                             // 0x0398 (size: 0x8)
    class UStaticMeshComponent* Factory_Battery_Tower_D;                              // 0x03A0 (size: 0x8)
    TArray<class UStaticMeshComponent*> BatteryTowerD;                                // 0x03A8 (size: 0x10)
    TArray<FVector> BatteryTowerD_Location;                                           // 0x03B8 (size: 0x10)
    TArray<class UStaticMeshComponent*> BatteryTowerE;                                // 0x03C8 (size: 0x10)
    TArray<FRotator> BatteryTowerE_Rotator;                                           // 0x03D8 (size: 0x10)
    float AnimationRatioTarget;                                                       // 0x03E8 (size: 0x4)
    float AnimationRatio;                                                             // 0x03EC (size: 0x4)
    float AnimationSpeed;                                                             // 0x03F0 (size: 0x4)
    class USoundBase* AnimationTrigger;                                               // 0x03F8 (size: 0x8)
    class UMaterialInstanceDynamic* ScreenColor_Material;                             // 0x0400 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void Open();
    void Close();
    void Animation();
    void ExecuteUbergraph_BP_DoorAnalogRikonium_Base(int32 EntryPoint);
}; // Size: 0x408

#endif
