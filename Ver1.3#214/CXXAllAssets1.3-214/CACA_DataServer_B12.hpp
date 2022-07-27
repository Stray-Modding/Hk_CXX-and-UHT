#ifndef UE4SS_SDK_CACA_DataServer_B12_HPP
#define UE4SS_SDK_CACA_DataServer_B12_HPP

class ACACA_DataServer_B12_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* TechRoom_Box_J;                                       // 0x0230 (size: 0x8)
    class UStaticMeshComponent* TechRoom_Box_H;                                       // 0x0238 (size: 0x8)
    class UStaticMeshComponent* TechRoom_Box_J1;                                      // 0x0240 (size: 0x8)
    class UStaticMeshComponent* TechRoom_Box_E;                                       // 0x0248 (size: 0x8)
    class UStaticMeshComponent* TechRoom_Box_A2;                                      // 0x0250 (size: 0x8)
    class USceneComponent* Pivot_Machine;                                             // 0x0258 (size: 0x8)
    class USceneComponent* RailPoint;                                                 // 0x0260 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0268 (size: 0x8)
    class USceneComponent* ScreenPivot;                                               // 0x0270 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0278 (size: 0x8)
    class USceneComponent* FemalPivot;                                                // 0x0280 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper;                                    // 0x0288 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0290 (size: 0x8)
    class USceneComponent* EmitterSpawn;                                              // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    bool On;                                                                          // 0x02A8 (size: 0x1)
    class ACACA_Launchpad_Screen_C* Screen;                                           // 0x02B0 (size: 0x8)
    class ACACA_Electric_Plug_Female_C* FemalePlug;                                   // 0x02B8 (size: 0x8)
    FVector PlugMaleStartPos;                                                         // 0x02C0 (size: 0xC)
    float TimerText;                                                                  // 0x02CC (size: 0x4)
    bool IsBroken;                                                                    // 0x02D0 (size: 0x1)
    bool IsMoving;                                                                    // 0x02D1 (size: 0x1)
    class ABP_MovingSplineRail_C* MovingRail;                                         // 0x02D8 (size: 0x8)
    TArray<class AActor*> Actors_to_ignore;                                           // 0x02E0 (size: 0x10)

    void UserConstructionScript();
    void TurnON();
    void TurnOFF();
    void ChangeColor(class UMaterialInterface* Material);
    void CheckForCol();
    void Break();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void OnPlugFemaleEvent_Event_0(class AActor* ItemConnected, class ACACA_Electric_Plug_Female_C* FemalePlug);
    void OnUnplugFemalEvent_Event_0(class AActor* ItemDisconnected, class ACACA_Electric_Plug_Female_C* FemalePlug);
    void ExecuteUbergraph_CACA_DataServer_B12(int32 EntryPoint);
}; // Size: 0x2F0

#endif
