#ifndef UE4SS_SDK_MovingBox_HPP
#define UE4SS_SDK_MovingBox_HPP

class AMovingBox_C : public AStaticMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)
    class UStaticMeshComponent* SM_MERGED_MovingBox_Door1;                            // 0x0240 (size: 0x8)
    class UStaticMeshComponent* SM_MERGED_MovingBox_Door;                             // 0x0248 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper;                                    // 0x0250 (size: 0x8)
    class USceneComponent* Porte2;                                                    // 0x0258 (size: 0x8)
    class USceneComponent* Porte1;                                                    // 0x0260 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0268 (size: 0x8)
    class USpringFloat_C* Rot_Y;                                                      // 0x0270 (size: 0x8)
    class UStaticMeshComponent* Accroch;                                              // 0x0278 (size: 0x8)
    class USceneComponent* Scene1;                                                    // 0x0280 (size: 0x8)
    class UStaticMeshComponent* GridBox;                                              // 0x0288 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0290 (size: 0x8)
    class UStaticMeshComponent* SpawnTrashHeight;                                     // 0x0298 (size: 0x8)
    class UStaticMeshComponent* garbage;                                              // 0x02A0 (size: 0x8)
    float Timer;                                                                      // 0x02A8 (size: 0x4)
    class UMaterialInstanceDynamic* Material;                                         // 0x02B0 (size: 0x8)
    float Alpha Height;                                                               // 0x02B8 (size: 0x4)
    bool IsEmpty;                                                                     // 0x02BC (size: 0x1)
    float InitZ;                                                                      // 0x02C0 (size: 0x4)
    TArray<class TSubclassOf<ABP_Thrashprops_base_C>> TrashToSpawn;                   // 0x02C8 (size: 0x10)
    float SpawnTrashTimer;                                                            // 0x02D8 (size: 0x4)
    bool NeedToUpdate;                                                                // 0x02DC (size: 0x1)
    bool Visible;                                                                     // 0x02DD (size: 0x1)

    void NeedToUpdateBox();
    void SetFill();
    void SetEmpty();
    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BA97F57A96();
    void Tick_6246EF4646E19036986D72BA97F57A96(float Ratio);
    void Complete_6246EF4646E19036986D72BA93F08B7B();
    void Tick_6246EF4646E19036986D72BA93F08B7B(float Ratio);
    void Complete_6246EF4646E19036986D72BA813B0A3C();
    void Tick_6246EF4646E19036986D72BA813B0A3C(float Ratio);
    void ReceiveTick(float DeltaSeconds);
    void Empty();
    void Spawn trash();
    void InstantEmpty();
    void Awake();
    void UpdateAlphaHeight();
    void SetVisible(bool Visible);
    void ExecuteUbergraph_MovingBox(int32 EntryPoint);
}; // Size: 0x2DE

#endif
