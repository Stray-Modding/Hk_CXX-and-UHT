#ifndef UE4SS_SDK_MagicLeapSharedWorld_HPP
#define UE4SS_SDK_MagicLeapSharedWorld_HPP

struct FMagicLeapSharedWorldSharedData
{
    TArray<FGuid> PinIDs;

};

class AMagicLeapSharedWorldGameMode : public AGameMode
{
    FMagicLeapSharedWorldSharedData SharedWorldData;
    FMagicLeapSharedWorldGameModeOnNewLocalDataFromClients OnNewLocalDataFromClients;
    void MagicLeapOnNewLocalDataFromClients();
    float PinSelectionConfidenceThreshold;
    class AMagicLeapSharedWorldPlayerController* ChosenOne;

    bool SendSharedWorldDataToClients();
    void SelectChosenOne();
    void MagicLeapOnNewLocalDataFromClients__DelegateSignature();
    void DetermineSharedWorldData(FMagicLeapSharedWorldSharedData& NewSharedWorldData);
};

struct FMagicLeapSharedWorldAlignmentTransforms
{
    TArray<FTransform> AlignmentTransforms;

};

class AMagicLeapSharedWorldGameState : public AGameState
{
    FMagicLeapSharedWorldSharedData SharedWorldData;
    FMagicLeapSharedWorldAlignmentTransforms AlignmentTransforms;
    FMagicLeapSharedWorldGameStateOnSharedWorldDataUpdated OnSharedWorldDataUpdated;
    void MagicLeapSharedWorldEvent();
    FMagicLeapSharedWorldGameStateOnAlignmentTransformsUpdated OnAlignmentTransformsUpdated;
    void MagicLeapSharedWorldEvent();

    void OnReplicate_SharedWorldData();
    void OnReplicate_AlignmentTransforms();
    void MagicLeapSharedWorldEvent__DelegateSignature();
    FTransform CalculateXRCameraRootTransform();
};

struct FMagicLeapSharedWorldPinData
{
    FGuid PinId;
    FMagicLeapARPinState PinState;

};

struct FMagicLeapSharedWorldLocalData
{
    TArray<FMagicLeapSharedWorldPinData> LocalPins;

};

class AMagicLeapSharedWorldPlayerController : public APlayerController
{

    void ServerSetLocalWorldData(const FMagicLeapSharedWorldLocalData& LocalWorldReplicationData);
    void ServerSetAlignmentTransforms(const FMagicLeapSharedWorldAlignmentTransforms& InAlignmentTransforms);
    bool IsChosenOne();
    void ClientSetChosenOne(bool bChosenOne);
    void ClientMarkReadyForSendingLocalData();
    bool CanSendLocalDataToServer();
};

#endif
