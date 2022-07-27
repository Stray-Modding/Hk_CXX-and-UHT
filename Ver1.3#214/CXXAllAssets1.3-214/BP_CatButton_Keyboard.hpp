#ifndef UE4SS_SDK_BP_CatButton_Keyboard_HPP
#define UE4SS_SDK_BP_CatButton_Keyboard_HPP

class ABP_CatButton_Keyboard_C : public ABP_props_base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class UStaticMeshComponent* Led;                                                  // 0x0278 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0280 (size: 0x8)
    class ABP_CatPawn_C* cat;                                                         // 0x0288 (size: 0x8)
    float WriteSpeed;                                                                 // 0x0290 (size: 0x4)
    FString txt;                                                                      // 0x0298 (size: 0x10)
    bool isCatIn;                                                                     // 0x02A8 (size: 0x1)
    bool CoolDownLetterOK;                                                            // 0x02A9 (size: 0x1)
    bool StopRecordingkeyboardString;                                                 // 0x02AA (size: 0x1)
    int32 RandomStringSize;                                                           // 0x02AC (size: 0x4)
    FBP_CatButton_Keyboard_CSendStringFinal SendStringFinal;                          // 0x02B0 (size: 0x10)
    void SendStringFinal(FString FinalString);
    FBP_CatButton_Keyboard_CUpdateString UpdateString;                                // 0x02C0 (size: 0x10)
    void UpdateString(FString CurrentString);
    float TimeLight;                                                                  // 0x02D0 (size: 0x4)
    FString Previous_Char;                                                            // 0x02D8 (size: 0x10)
    float Char_Selection_Weight;                                                      // 0x02E8 (size: 0x4)

    void SelectRandomChar(FString& Char);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CatButton_Keyboard(int32 EntryPoint);
    void UpdateString__DelegateSignature(FString CurrentString);
    void SendStringFinal__DelegateSignature(FString FinalString);
}; // Size: 0x2EC

#endif
