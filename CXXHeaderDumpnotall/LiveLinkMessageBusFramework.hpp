#ifndef UE4SS_SDK_LiveLinkMessageBusFramework_HPP
#define UE4SS_SDK_LiveLinkMessageBusFramework_HPP

struct FLiveLinkSubjectFrameMessage
{
    FName SubjectName;
    TArray<FTransform> Transforms;
    TArray<FLiveLinkCurveElement> Curves;
    FLiveLinkMetaData MetaData;
    double Time;

};

struct FLiveLinkSubjectDataMessage
{
    FLiveLinkRefSkeleton RefSkeleton;
    FName SubjectName;

};

struct FLiveLinkClearSubject
{
    FName SubjectName;

};

struct FLiveLinkHeartbeatMessage
{
};

struct FLiveLinkConnectMessage
{
    int32 LiveLinkVersion;

};

struct FLiveLinkPongMessage
{
    FString ProviderName;
    FString MachineName;
    FGuid PollRequest;
    int32 LiveLinkVersion;
    double CreationPlatformTime;

};

struct FLiveLinkPingMessage
{
    FGuid PollRequest;
    int32 LiveLinkVersion;

};

#endif
