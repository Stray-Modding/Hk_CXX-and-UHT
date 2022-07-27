#ifndef UE4SS_SDK_MagicLeapSharedWorld_HPP
#define UE4SS_SDK_MagicLeapSharedWorld_HPP

struct FMagicLeapSharedWorldSharedData
{
    TArray<FGuid> PinIDs;                                                             // 0x0000 (size: 0x10)

}; // Size: 0x10

class AMagicLeapSharedWorldGameMode : public AGameMode
{
    FMagicLeapSharedWorldSharedData SharedWorldData;                                  // 0x0310 (size: 0x10)
    FMagicLeapSharedWorldGameModeOnNewLocalDataFromClients OnNewLocalDataFromClients; // 0x0320 (size: 0x10)
    void MagicLeapOnNewLocalDataFromClients();
    float PinSelectionConfidenceThreshold;                                            // 0x0330 (size: 0x4)
    class AMagicLeapSharedWorldPlayerController* ChosenOne;                           // 0x03D8 (size: 0x8)

    bool SendSharedWorldDataToClients();
    void SelectChosenOne();
    void MagicLeapOnNewLocalDataFromClients__DelegateSignature();
    void DetermineSharedWorldData(FMagicLeapSharedWorldSharedData& NewSharedWorldData);
}; // Size: 0x3E0

struct FMagicLeapSharedWorldAlignmentTransforms
{
    TArray<FTransform> AlignmentTransforms;                                           // 0x0000 (size: 0x10)

}; // Size: 0x10

class AMagicLeapSharedWorldGameState : public AGameState
{
    FMagicLeapSharedWorldSharedData SharedWorldData;                                  // 0x0298 (size: 0x10)
    FMagicLeapSharedWorldAlignmentTransforms AlignmentTransforms;                     // 0x02A8 (size: 0x10)
    FMagicLeapSharedWorldGameStateOnSharedWorldDataUpdated OnSharedWorldDataUpdated;  // 0x02B8 (size: 0x10)
    void MagicLeapSharedWorldEvent();
    FMagicLeapSharedWorldGameStateOnAlignmentTransformsUpdated OnAlignmentTransformsUpdated; // 0x02C8 (size: 0x10)
    void MagicLeapSharedWorldEvent();

    void OnReplicate_SharedWorldData();
    void OnReplicate_AlignmentTransforms();
    void MagicLeapSharedWorldEvent__DelegateSignature();
    FTransform CalculateXRCameraRootTransform();
}; // Size: 0x2D8

struct FMagicLeapSharedWorldPinData
{
    FGuid PinId;                                                                      // 0x0000 (size: 0x10)
    FMagicLeapARPinState PinState;                                                    // 0x0010 (size: 0x14)

}; // Size: 0x24

struct FMagicLeapSharedWorldLocalData
{
    TArray<FMagicLeapSharedWorldPinData> LocalPins;                                   // 0x0000 (size: 0x10)

}; // Size: 0x10

class AMagicLeapSharedWorldPlayerController : public APlayerController
{

    void ServerSetLocalWorldData(const FMagicLeapSharedWorldLocalData& LocalWorldReplicationData);
    void ServerSetAlignmentTransforms(const FMagicLeapSharedWorldAlignmentTransforms& InAlignmentTransforms);
    bool IsChosenOne();
    void ClientSetChosenOne(bool bChosenOne);
    void ClientMarkReadyForSendingLocalData();
    bool CanSendLocalDataToServer();
}; // Size: 0x590

#endif
