#ifndef UE4SS_SDK_BP_Piano_HPP
#define UE4SS_SDK_BP_Piano_HPP

class ABP_Piano_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USplineRailComponent* SplineRail;                                           // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Piano_Piano;                                          // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Piano_Piano_MusicRack;                                // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Piano_Piano_FallBoard;                                // 0x0248 (size: 0x8)
    TArray<class UStaticMeshComponent*> Keys;                                         // 0x0250 (size: 0x10)
    float White Keys Offset;                                                          // 0x0260 (size: 0x4)
    float Black Keys Offset;                                                          // 0x0264 (size: 0x4)
    class ABP_CatPawn_C* cat;                                                         // 0x0268 (size: 0x8)
    class USkeletalMeshComponent* Cat Skeletal Mesh;                                  // 0x0270 (size: 0x8)
    TArray<FVector> Keys Location;                                                    // 0x0278 (size: 0x10)
    float Min Distance to Key;                                                        // 0x0288 (size: 0x4)
    TArray<bool> Key ON or OFF;                                                       // 0x0290 (size: 0x10)
    TArray<class UAudioComponent*> Played Sound;                                      // 0x02A0 (size: 0x10)
    bool Broken ?;                                                                    // 0x02B0 (size: 0x1)
    TArray<int32> DoOnceIndexON;                                                      // 0x02B8 (size: 0x10)
    TArray<int32> DoOnceIndexOFF;                                                     // 0x02C8 (size: 0x10)
    TArray<bool> Keys White or Black;                                                 // 0x02D8 (size: 0x10)
    int32 Black Keys Count;                                                           // 0x02E8 (size: 0x4)
    FVector Left_ToeBase;                                                             // 0x02EC (size: 0xC)
    FVector Right_ToeBase;                                                            // 0x02F8 (size: 0xC)
    FVector fingerbase_l;                                                             // 0x0304 (size: 0xC)
    FVector fingerbase_r;                                                             // 0x0310 (size: 0xC)
    TArray<bool> Previous Key ON or OFF;                                              // 0x0320 (size: 0x10)
    float notes gain multiplier;                                                      // 0x0330 (size: 0x4)

    void Set Key ON or OFF(int32 Index, bool ON or OFF);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void Play Note(int32 noteNb, FVector Location);
    void Stop Note(int32 noteNb, FVector Location);
    void ExecuteUbergraph_BP_Piano(int32 EntryPoint);
}; // Size: 0x334

#endif
