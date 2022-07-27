#ifndef UE4SS_SDK_CACA_Electric_Plug_Female_HPP
#define UE4SS_SDK_CACA_Electric_Plug_Female_HPP

class ACACA_Electric_Plug_Female_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UCOMP_GrabbableDrop_C* COMP_GrabbableDrop;                                  // 0x0230 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0238 (size: 0x8)
    class UArrowComponent* SnapPoint;                                                 // 0x0240 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Glow;                                                 // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Plug_Mesh;                                            // 0x0258 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0260 (size: 0x8)
    class ABP_CatPawn_C* cat;                                                         // 0x0268 (size: 0x8)
    bool Debug;                                                                       // 0x0270 (size: 0x1)
    FLinearColor Text Color;                                                          // 0x0274 (size: 0x10)
    class UMaterialInterface* Color_ON;                                               // 0x0288 (size: 0x8)
    class UMaterialInterface* Color_OFF;                                              // 0x0290 (size: 0x8)
    class ABP_Catbutton_Grabbable_EnergyPlug_C* ItemPluggedOnStart;                   // 0x0298 (size: 0x8)
    class AActor* ElementCurrentlyPlugged;                                            // 0x02A0 (size: 0x8)
    FCACA_Electric_Plug_Female_COnPlugFemaleEvent OnPlugFemaleEvent;                  // 0x02A8 (size: 0x10)
    void OnPlugFemaleEvent(class AActor* ItemConnected, class ACACA_Electric_Plug_Female_C* FemalePlug);
    FCACA_Electric_Plug_Female_COnUnplugFemalEvent OnUnplugFemalEvent;                // 0x02B8 (size: 0x10)
    void OnUnplugFemalEvent(class AActor* ItemDisconnected, class ACACA_Electric_Plug_Female_C* FemalePlug);
    bool isCatInPlugZone;                                                             // 0x02C8 (size: 0x1)
    bool Override_AutoPlug;                                                           // 0x02C9 (size: 0x1)

    void UserConstructionScript();
    void SetColorPlug(bool On/Off);
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void BndEvt__CACA_Electric_Plug_Female_COMP_GrabbableDrop_K2Node_ComponentBoundEvent_2_ReleaseGrabbable_InZone__DelegateSignature(class ABP_CatPawn_C* cat, class UCOMP_Grabbable_C* Grabbable);
    void BndEvt__CACA_Electric_Plug_Female_COMP_GrabbableDrop_K2Node_ComponentBoundEvent_3_GrabGrabbable_InZone__DelegateSignature(class ABP_CatPawn_C* cat, class UCOMP_Grabbable_C* Grabbable);
    void ReceiveTick(float DeltaSeconds);
    void Unplug_Female();
    void LockPlug();
    void Plug_Female(class AActor* element plug);
    void ExecuteUbergraph_CACA_Electric_Plug_Female(int32 EntryPoint);
    void OnUnplugFemalEvent__DelegateSignature(class AActor* ItemDisconnected, class ACACA_Electric_Plug_Female_C* FemalePlug);
    void OnPlugFemaleEvent__DelegateSignature(class AActor* ItemConnected, class ACACA_Electric_Plug_Female_C* FemalePlug);
}; // Size: 0x2CA

#endif
