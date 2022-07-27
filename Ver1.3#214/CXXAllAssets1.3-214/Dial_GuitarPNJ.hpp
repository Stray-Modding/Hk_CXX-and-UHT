#ifndef UE4SS_SDK_Dial_GuitarPNJ_HPP
#define UE4SS_SDK_Dial_GuitarPNJ_HPP

class ADial_GuitarPNJ_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    int32 Nb_Of_Music_Shown;                                                          // 0x0348 (size: 0x4)
    float PlayDuration;                                                               // 0x034C (size: 0x4)
    class UAnimSequence* IdleGuitar_Loop;                                             // 0x0350 (size: 0x8)
    class UAnimSequence* PlayGuitar_Loop;                                             // 0x0358 (size: 0x8)
    class ABP_Droid_C* Droid;                                                         // 0x0360 (size: 0x8)
    class UCOMP_ingame_player_C* Music_Player;                                        // 0x0368 (size: 0x8)
    class AActor* Guitar;                                                             // 0x0370 (size: 0x8)
    class UMaterialInstance* Screen_Note;                                             // 0x0378 (size: 0x8)
    class ABP_CatButton_SleepSpot_WithCamera_C* Sleepable;                            // 0x0380 (size: 0x8)
    class AActor* Player_Pos_Checkpoint;                                              // 0x0388 (size: 0x8)
    bool BadgeReceived;                                                               // 0x0390 (size: 0x1)
    bool CheckDone;                                                                   // 0x0391 (size: 0x1)
    class AStaticMeshActor* Music_Sheet_Mesh_1;                                       // 0x0398 (size: 0x8)
    class USoundBase* Sound_1;                                                        // 0x03A0 (size: 0x8)
    bool Music_Unlocked_1;                                                            // 0x03A8 (size: 0x1)
    class AStaticMeshActor* Music_Sheet_Mesh_2;                                       // 0x03B0 (size: 0x8)
    class USoundBase* Sound_2;                                                        // 0x03B8 (size: 0x8)
    bool Music_Unlocked_2;                                                            // 0x03C0 (size: 0x1)
    class AStaticMeshActor* Music_Sheet_Mesh_3;                                       // 0x03C8 (size: 0x8)
    class USoundBase* Sound_3;                                                        // 0x03D0 (size: 0x8)
    bool Music_Unlocked_3;                                                            // 0x03D8 (size: 0x1)
    class AStaticMeshActor* Music_Sheet_Mesh_4;                                       // 0x03E0 (size: 0x8)
    class USoundBase* Sound_4;                                                        // 0x03E8 (size: 0x8)
    bool Music_Unlocked_4;                                                            // 0x03F0 (size: 0x1)
    class AStaticMeshActor* Music_Sheet_Mesh_5;                                       // 0x03F8 (size: 0x8)
    class USoundBase* Sound_5;                                                        // 0x0400 (size: 0x8)
    bool Music_Unlocked_5;                                                            // 0x0408 (size: 0x1)
    class AStaticMeshActor* Music_Sheet_Mesh_6;                                       // 0x0410 (size: 0x8)
    class USoundBase* Sound_6;                                                        // 0x0418 (size: 0x8)
    bool Music_Unlocked_6;                                                            // 0x0420 (size: 0x1)
    class AStaticMeshActor* Music_Sheet_Mesh_7;                                       // 0x0428 (size: 0x8)
    class USoundBase* Sound_7;                                                        // 0x0430 (size: 0x8)
    bool Music_Unlocked_7;                                                            // 0x0438 (size: 0x1)
    class AStaticMeshActor* Music_Sheet_Mesh_8;                                       // 0x0440 (size: 0x8)
    class USoundBase* Sound_8;                                                        // 0x0448 (size: 0x8)
    bool Music_Unlocked_8;                                                            // 0x0450 (size: 0x1)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void Droid play music();
    void CheckIfAllMusicDone();
    void SelectSong(int32 SongNumber);
    void BndEvt__Dial_GuitarPNJ_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void BndEvt__Dial_GuitarPNJ_m_save_K2Node_ComponentBoundEvent_1_SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    void ExecuteUbergraph_Dial_GuitarPNJ(int32 EntryPoint);
}; // Size: 0x451

#endif
