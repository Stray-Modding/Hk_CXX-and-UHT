#ifndef UE4SS_SDK_CACA_BigScreen_B12Flat_HPP
#define UE4SS_SDK_CACA_BigScreen_B12Flat_HPP

class ACACA_BigScreen_B12Flat_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0230 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0238 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0240 (size: 0x8)
    class UStaticMeshComponent* big_screen;                                           // 0x0248 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0250 (size: 0x8)
    bool On;                                                                          // 0x0258 (size: 0x1)
    class ABP_FollowingCamera_C* CameraFollow;                                        // 0x0260 (size: 0x8)
    class ACameraActor* Camindication;                                                // 0x0268 (size: 0x8)
    class ABP_CatButton_Keyboard_C* Keyboard;                                         // 0x0270 (size: 0x8)
    class ABP_PushCameraVolume_C* CamVolumeToDisable;                                 // 0x0278 (size: 0x8)
    class AActor* ActorToOpen;                                                        // 0x0280 (size: 0x8)
    class UMaterialInterface* mat ON;                                                 // 0x0288 (size: 0x8)
    class UMaterialInterface* Mat OFF;                                                // 0x0290 (size: 0x8)
    class UDial_B12Flat_Computer_C* UI_Screen;                                        // 0x0298 (size: 0x8)
    bool DialogEnded;                                                                 // 0x02A0 (size: 0x1)
    FCACA_BigScreen_B12Flat_COnSendResponse OnSendResponse;                           // 0x02A8 (size: 0x10)
    void OnSendResponse();

    void UpdateSendingString(FString CurrentString);
    void SendString(FString FinalString);
    void WaitForResponse();
    void TurnON();
    void Turn OFF();
    void LogicTrigger();
    void BndEvt__CACA_BigScreen_B12Flat_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void End();
    void ExecuteUbergraph_CACA_BigScreen_B12Flat(int32 EntryPoint);
    void OnSendResponse__DelegateSignature();
}; // Size: 0x2B8

#endif
