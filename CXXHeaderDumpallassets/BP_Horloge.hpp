#ifndef UE4SS_SDK_BP_Horloge_HPP
#define UE4SS_SDK_BP_Horloge_HPP

class ABP_Horloge_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* horloge_minute;                                       // 0x0230 (size: 0x8)
    class UStaticMeshComponent* horloge_sec;                                          // 0x0238 (size: 0x8)
    class UStaticMeshComponent* horloge_heure;                                        // 0x0240 (size: 0x8)
    class UStaticMeshComponent* horloge;                                              // 0x0248 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0250 (size: 0x8)
    class UMaterialInterface* Material;                                               // 0x0258 (size: 0x8)
    bool On/Off;                                                                      // 0x0260 (size: 0x1)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_Horloge(int32 EntryPoint);
}; // Size: 0x261

#endif
