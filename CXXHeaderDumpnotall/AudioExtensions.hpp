#ifndef UE4SS_SDK_AudioExtensions_HPP
#define UE4SS_SDK_AudioExtensions_HPP

class USoundfieldEncodingSettingsBase : public UObject
{
};

class UAudioEndpointSettingsBase : public UObject
{
};

class UDummyEndpointSettings : public UAudioEndpointSettingsBase
{
};

class USpatializationPluginSourceSettingsBase : public UObject
{
};

class UOcclusionPluginSourceSettingsBase : public UObject
{
};

class UReverbPluginSourceSettingsBase : public UObject
{
};

class USoundModulatorBase : public UObject
{
};

class USoundfieldEndpointSettingsBase : public UObject
{
};

class USoundfieldEffectSettingsBase : public UObject
{
};

class USoundfieldEffectBase : public UObject
{
    class USoundfieldEffectSettingsBase* Settings;

};

#endif
