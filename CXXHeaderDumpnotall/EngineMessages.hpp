#ifndef UE4SS_SDK_EngineMessages_HPP
#define UE4SS_SDK_EngineMessages_HPP

struct FEngineServiceNotification
{
    FString Text;
    double TimeSeconds;

};

struct FEngineServiceTerminate
{
    FString UserName;

};

struct FEngineServiceExecuteCommand
{
    FString Command;
    FString UserName;

};

struct FEngineServiceAuthGrant
{
    FString UserName;
    FString UserToGrant;

};

struct FEngineServiceAuthDeny
{
    FString UserName;
    FString UserToDeny;

};

struct FEngineServicePong
{
    FString CurrentLevel;
    int32 EngineVersion;
    bool HasBegunPlay;
    FGuid InstanceId;
    FString InstanceType;
    FGuid SessionId;
    float WorldTimeSeconds;

};

struct FEngineServicePing
{
};

#endif
