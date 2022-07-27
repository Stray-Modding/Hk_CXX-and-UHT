#ifndef UE4SS_SDK_SEQ_title_music_switch_HPP
#define UE4SS_SDK_SEQ_title_music_switch_HPP

class ASEQ_title_music_switch_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)

    void LogicTrigger();
    void ExecuteUbergraph_SEQ_title_music_switch(int32 EntryPoint);
}; // Size: 0x278

#endif
