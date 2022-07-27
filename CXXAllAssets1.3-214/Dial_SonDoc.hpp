#ifndef UE4SS_SDK_Dial_SonDoc_HPP
#define UE4SS_SDK_Dial_SonDoc_HPP

class ADial_SonDoc_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    class ACameraActor* CamRoom;                                                      // 0x0348 (size: 0x8)
    class ABP_Droid_C* Droid;                                                         // 0x0350 (size: 0x8)
    class AActor* tablepos;                                                           // 0x0358 (size: 0x8)
    class ACameraActor* CamTable;                                                     // 0x0360 (size: 0x8)
    class ACameraActor* CamContrechamp;                                               // 0x0368 (size: 0x8)
    bool CineDone;                                                                    // 0x0370 (size: 0x1)
    bool JournalDone;                                                                 // 0x0371 (size: 0x1)
    class ACameraActor* CamJournal1;                                                  // 0x0378 (size: 0x8)
    class ACameraActor* CamCloseup;                                                   // 0x0380 (size: 0x8)
    class AActor* DroidReadPos;                                                       // 0x0388 (size: 0x8)
    class AActor* JournalPos;                                                         // 0x0390 (size: 0x8)
    class AActor* Journal;                                                            // 0x0398 (size: 0x8)
    class AActor* FinalCatSpot;                                                       // 0x03A0 (size: 0x8)
    class AActor* labcoat;                                                            // 0x03A8 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ReceiveBeginPlay();
    void CoatLooted(class ULootableComponent* _lootable);
    void requestMusicFillerStart();
    void ExecuteUbergraph_Dial_SonDoc(int32 EntryPoint);
}; // Size: 0x3B0

#endif
