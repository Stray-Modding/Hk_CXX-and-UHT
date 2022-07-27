#ifndef UE4SS_SDK_I_sfx_playable_HPP
#define UE4SS_SDK_I_sfx_playable_HPP

class II_sfx_playable_C : public IInterface
{

    void getAudioComponent(class UAudioComponent*& Component);
    void EmergencyStop(float Duration);
    void StopSound();
    void StartSound();
}; // Size: 0x28

#endif
