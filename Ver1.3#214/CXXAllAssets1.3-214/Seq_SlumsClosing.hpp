#ifndef UE4SS_SDK_Seq_SlumsClosing_HPP
#define UE4SS_SDK_Seq_SlumsClosing_HPP

class ASeq_SlumsClosing_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ABP_Droid_C* doordroid;                                                     // 0x0270 (size: 0x8)
    class AActor* col;                                                                // 0x0278 (size: 0x8)
    class AActor* DoorPos;                                                            // 0x0280 (size: 0x8)
    class ABP_VerticalStore_C* Store;                                                 // 0x0288 (size: 0x8)
    TArray<FName> TransitionGroup;                                                    // 0x0290 (size: 0x10)
    TSoftObjectPtr<UWorld> zone;                                                      // 0x02A0 (size: 0x28)
    TArray<TSoftObjectPtr<UWorld>> PreloadedLevels;                                   // 0x02C8 (size: 0x10)
    class ADia_Talkable_Actor_C* talkable_store;                                      // 0x02D8 (size: 0x8)
    class ADecalActor* Decal;                                                         // 0x02E0 (size: 0x8)
    bool SewersOpen;                                                                  // 0x02E8 (size: 0x1)

    void LogicTrigger();
    void BndEvt__m_streamingComponent_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void SetUpSewersOpen();
    void ExecuteUbergraph_Seq_SlumsClosing(int32 EntryPoint);
}; // Size: 0x2E9

#endif
