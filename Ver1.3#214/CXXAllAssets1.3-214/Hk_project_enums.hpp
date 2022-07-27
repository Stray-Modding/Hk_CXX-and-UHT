enum EWorldInitializationMode {
    WorldInitializationMode_None = 0,
    WorldInitializationMode_StartPlayEditor = 1,
    WorldInitializationMode_StartPlay = 2,
    WorldInitializationMode_SaveGameLoading = 3,
    WorldInitializationMode_OpenZone = 4,
    WorldInitializationMode_ZoneLoad = 5,
    WorldInitializationMode_LoadChapter = 6,
    WorldInitializationMode_MAX = 7,
};

enum EDialogOrientationMode {
    DialogOrientationMode_None = 0,
    DialogOrientationMode_Cat = 1,
    DialogOrientationMode_Actor = 2,
    DialogOrientationMode_MAX = 3,
};

enum EDialogMovementMode {
    DialogMovementMode_None = 0,
    DialogMovementMode_Constrained = 1,
    DialogMovementMode_Free = 2,
    DialogMovementMode_MAX = 3,
};

enum EBackpackGUIMode {
    BackpackGUIMode_Dialogue = 0,
    BackpackGUIMode_Photo = 1,
    BackpackGUIMode_Inventory = 2,
    BackpackGUIMode_MAX = 3,
};

enum EUsableInteractionButton {
    UsableInteractionButton_JumpUp = 0,
    UsableInteractionButton_JumpDown = 1,
    UsableInteractionButton_Backpack = 2,
    UsableInteractionButton_Cat = 3,
    UsableInteractionButton_COUNT = 4,
    UsableInteractionButton_MAX = 5,
};

enum class EInputTransitionMode {
    InputTransitionMode_None = 0,
    InputTransitionMode_KeepPreviousInput = 1,
    InputTransitionMode_Blend = 2,
    InputTransitionMode_BlendIfDirectionChanges = 3,
    InputTransitionMode_MAX = 4,
};

enum ECatAttitude {
    CatAttitude_Normal = 0,
    CatAttitude_Stealthy = 1,
    CatAttitude_Hurt = 2,
    CatAttitude_BackpackFirstTime = 3,
    CatAttitude_MAX = 4,
};

enum EHangingTestResult {
    RailHangingTestResult_Rail = 0,
    RailHangingTestResult_Hang = 1,
    RailHangingTestResult_MAX = 2,
};

enum ELookAtType {
    LookAtType_None = 0,
    LookAtType_RelativeTarget = 1,
    LookAtType_Target = 2,
    LookAtType_Actor = 3,
    LookAtType_Component = 4,
    LookAtType_MAX = 5,
};

enum class EChapter {
    Chapter_Unknown = 0,
    Chapter_InsideTheWall = 1,
    Chapter_DeadCity = 2,
    Chapter_B12Flat = 3,
    Chapter_SlumsPart1 = 4,
    Chapter_Rooftops = 5,
    Chapter_SlumsPart2 = 6,
    Chapter_DeadEnd = 7,
    Chapter_Sewers = 8,
    Chapter_AntVillage = 9,
    Chapter_Midtown = 10,
    Chapter_Jail = 11,
    Chapter_ControlRoom = 12,
    Chapter_Count = 13,
    Chapter_MAX = 14,
};

enum class EDroidInputMode {
    DroidInputMode_Spline = 0,
    DroidInputMode_Manual = 1,
    DroidInputMode_None = 2,
    DroidInputMode_MAX = 3,
};

enum class EDroidPosture {
    Posture_None = 0,
    Posture_StandingUp = 1,
    Posture_Stumbling = 2,
    Posture_Falling = 3,
    Posture_Ragdoll = 4,
    Posture_RisingUp = 5,
    Posture_MAX = 6,
};

enum class EDroidBehaviorState {
    DroidBehavior_None = 0,
    DroidBehavior_Disturbed = 1,
    DroidBehavior_PlayingAnimation = 2,
    DroidBehavior_ThrowObject = 3,
    DroidBehavior_Dazzled = 4,
    DroidBehavior_MAX = 5,
};

enum class EDroidLocomotionBehavior {
    Locomotion_Behavior_None = 0,
    Locomotion_Behavior_PlayAnimation = 1,
    Locomotion_Behavior_MAX = 2,
};

enum class EDroidMovementState {
    DroidMovement_Waiting = 0,
    DroidMovement_Starting = 1,
    DroidMovement_Walking = 2,
    DroidMovement_Stopping = 3,
    DroidMovement_Turning = 4,
    DroidMovement_Stepping = 5,
    DroidMovement_None = 6,
    DroidMovement_MAX = 7,
};

enum class EDroidLookAtType {
    DroidLookAt_HeadOnly = 0,
    DroidLookAt_SpineHeadOnly = 1,
    DroidLookAt_SpineHeadAndHandIK = 2,
    DroidLookAt_MAX = 3,
};

enum class EDroidOnMeowedBehavior {
    OnMeowedReaction_None = 0,
    OnMeowedReaction_Disturbed = 1,
    OnMeowedReaction_PlayingAnimation = 2,
    OnMeowedReaction_ThrowObject = 3,
    OnMeowedReaction_MAX = 4,
};

enum class EDroidMovementSplineMode {
    DroidMovementSplineMode_NavMesh = 0,
    DroidMovementSplineMode_Manual = 1,
    DroidMovementSplineMode_None = 2,
    DroidMovementSplineMode_MAX = 3,
};

enum EDroneGUIAllowInputMode {
    DroneGUIAllowInputMode_NoInput = 0,
    DroneGUIAllowInputMode_Buttons = 1,
    DroneGUIAllowInputMode_ButtonsExceptJump = 2,
    DroneGUIAllowInputMode_AllInput = 3,
    DroneGUIAllowInputMode_MAX = 4,
};

enum EGameSuspendedReason {
    GameSuspendedReason_Invalid = 0,
    GameSuspendedReason_Internal = 1,
    GameSuspendedReason_PlayerRequested = 2,
    GameSuspendedReason_Cinematic = 3,
    GameSuspendedReason_MAX = 4,
};

enum EScreenFadeType {
    ScreenFadeType_Default = 0,
    ScreenFadeType_Game = 1,
    ScreenFadeType_COUNT = 2,
    ScreenFadeType_MAX = 3,
};

enum class ECameraInputMode {
    CameraInputMode_GamePad = 0,
    CameraInputMode_Mouse = 1,
    CameraInputMode_GamePadAndMouse = 2,
    CameraInputMode_MAX = 3,
};

enum class EPS5TriggersSide {
    PS5TriggersSide_Left = 0,
    PS5TriggersSide_Right = 1,
    PS5TriggersSide_MAX = 2,
};

enum class EPS5TriggersState {
    PS5TriggersState_None = 0,
    PS5TriggersState_Scratchable = 1,
    PS5TriggersState_MAX = 2,
};

enum class EPS5TriggerEffectMode {
    PS5TriggerEffectMode_None = 0,
    PS5TriggerEffectMode_Weapon = 1,
    PS5TriggerEffectMode_Vibration = 2,
    PS5TriggerEffectMode_Feedback = 3,
    PS5TriggerEffectMode_MAX = 4,
};

enum class EGameControllerType {
    GameControllerType_Unknown = 0,
    GameControllerType_XBOX = 1,
    GameControllerType_PS4 = 2,
    GameControllerType_PS5 = 3,
    GameControllerType_SwitchPro = 4,
    GameControllerType_KeyboardMouse = 5,
    GameControllerType_MAX = 6,
};

enum class ESentinelProjectileState {
    Projectile_None = 0,
    Projectile_Shooted = 1,
    Projectile_InAir = 2,
    Projectile_Snapped = 3,
    Projectile_WaitingDestroy = 4,
    Projectile_MAX = 5,
};

enum class ESentinelInputMode {
    SentinelInputMode_NavMesh = 0,
    SentinelInputMode_Manual = 1,
    SentinelInputMode_None = 2,
    SentinelInputMode_MAX = 3,
};

enum class ESentinelTazerMode {
    SentinelTazerMode_Idle = 0,
    SentinelTazerMode_Loading = 1,
    SentinelTazerMode_UnLoading = 2,
    SentinelTazerMode_ReadyToShoot = 3,
    SentinelTazerMode_Shooting = 4,
    SentinelTazerMode_Reloading = 5,
    SentinelTazerMode_None = 6,
    SentinelTazerMode_MAX = 7,
};

enum EStreamingState {
    StreamingState_Removed = 0,
    StreamingState_Unloaded = 1,
    StreamingState_LoadingLevel = 2,
    StreamingState_LoadingSaveGame = 3,
    StreamingState_WaitDependencies = 4,
    StreamingState_Loaded = 5,
    StreamingState_MAX = 6,
};

enum class EZurgBehavior {
    ZurgBehavior_None = 0,
    ZurgBehavior_Escaping = 1,
    ZurgBehavior_MAX = 2,
};

enum class EZurgState {
    ZurgState_Idle = 0,
    ZurgState_Sleeping = 1,
    ZurgState_UnderLight = 2,
    ZurgState_Alerted = 3,
    ZurgState_Routine = 4,
    ZurgState_Chasing = 5,
    ZurgState_Angry = 6,
    ZurgState_Interested = 7,
    ZurgState_OnInterestPoint = 8,
    ZurgState_Attacking = 9,
    ZurgState_Grabbing = 10,
    ZurgState_LockedOnTarget = 11,
    ZurgState_Ejected = 12,
    ZurgState_Falling = 13,
    ZurgState_None = 14,
    ZurgState_MAX = 15,
};

enum class EZurgLOD {
    Zurg_LOD0 = 0,
    Zurg_LOD1 = 1,
    Zurg_LOD2 = 2,
    Zurg_LOD_None = 3,
    Zurg_MAX = 4,
};

enum class EAchievement {
    Achievement_ACH_001 = 0,
    Achievement_ACH_002 = 1,
    Achievement_ACH_003 = 2,
    Achievement_ACH_004 = 3,
    Achievement_ACH_005 = 4,
    Achievement_ACH_006 = 5,
    Achievement_ACH_007 = 6,
    Achievement_ACH_008 = 7,
    Achievement_ACH_009 = 8,
    Achievement_ACH_010 = 9,
    Achievement_ACH_011 = 10,
    Achievement_ACH_012 = 11,
    Achievement_ACH_013 = 12,
    Achievement_ACH_014 = 13,
    Achievement_ACH_015 = 14,
    Achievement_ACH_016 = 15,
    Achievement_ACH_017 = 16,
    Achievement_ACH_018 = 17,
    Achievement_ACH_019 = 18,
    Achievement_ACH_020 = 19,
    Achievement_ACH_021 = 20,
    Achievement_ACH_022 = 21,
    Achievement_ACH_023 = 22,
    Achievement_ACH_024 = 23,
    Achievement_Count = 24,
    Achievement_MAX = 25,
};

enum class EActivityServer {
    Idle = 0,
    SendingReset = 1,
    SendingAvailability = 2,
    SendingStart = 3,
    SendingEnd = 4,
    EActivityServer_MAX = 5,
};

enum class EObjectiveStatus {
    Hidden = 0,
    Revealed = 1,
    InProgress = 2,
    Failed = 3,
    Completed = 4,
    EObjectiveStatus_MAX = 5,
};

enum class EActivityStatus {
    Hidden = 0,
    Revealed = 1,
    InProgress = 2,
    Failed = 3,
    Completed = 4,
    EActivityStatus_MAX = 5,
};

enum class EObjective {
    None = 0,
    OBJ_InsideTheWall_00 = 1,
    OBJ_InsideTheWall_01 = 2,
    OBJ_InsideTheWall_02 = 3,
    OBJ_DeadCity_00 = 4,
    OBJ_DeadCity_01 = 5,
    OBJ_DeadCity_02 = 6,
    OBJ_DeadCity_03 = 7,
    OBJ_B12Flat_00 = 8,
    OBJ_B12Flat_01 = 9,
    OBJ_B12Flat_02 = 10,
    OBJ_B12Flat_03 = 11,
    OBJ_SlumsP1_00 = 12,
    OBJ_SlumsP1_01 = 13,
    OBJ_SlumsP1_02 = 14,
    OBJ_SlumsP1_03 = 15,
    OBJ_SlumsP1_04 = 16,
    OBJ_SlumsP1_05 = 17,
    OBJ_Rooftops_00 = 18,
    OBJ_Rooftops_01 = 19,
    OBJ_Rooftops_02 = 20,
    OBJ_Rooftops_03 = 21,
    OBJ_Rooftops_04 = 22,
    OBJ_SlumsP2_00 = 23,
    OBJ_SlumsP2_01 = 24,
    OBJ_SlumsP2_02 = 25,
    OBJ_SlumsP2_03 = 26,
    OBJ_SlumsP2_04 = 27,
    OBJ_SlumsP2_05 = 28,
    OBJ_SlumsP2_06 = 29,
    OBJ_SlumsP2_07 = 30,
    OBJ_SlumsP2_08 = 31,
    OBJ_DeadEnd_00 = 32,
    OBJ_DeadEnd_01 = 33,
    OBJ_DeadEnd_02 = 34,
    OBJ_DeadEnd_03 = 35,
    OBJ_DeadEnd_04 = 36,
    OBJ_DeadEnd_05 = 37,
    OBJ_DeadEnd_06 = 38,
    OBJ_Sewers_00 = 39,
    OBJ_Sewers_01 = 40,
    OBJ_Sewers_02 = 41,
    OBJ_Sewers_03 = 42,
    OBJ_AntVillage_00 = 43,
    OBJ_AntVillage_01 = 44,
    OBJ_Midtown_00 = 45,
    OBJ_Midtown_01 = 46,
    OBJ_Midtown_02 = 47,
    OBJ_Midtown_03 = 48,
    OBJ_Midtown_04 = 49,
    OBJ_Midtown_05 = 50,
    OBJ_Midtown_06 = 51,
    OBJ_Midtown_07 = 52,
    OBJ_Midtown_08 = 53,
    OBJ_Midtown_09 = 54,
    OBJ_Midtown_10 = 55,
    OBJ_Midtown_11 = 56,
    OBJ_Midtown_12 = 57,
    OBJ_Midtown_13 = 58,
    OBJ_Jail_00 = 59,
    OBJ_Jail_01 = 60,
    OBJ_Jail_02 = 61,
    OBJ_Jail_03 = 62,
    OBJ_Jail_04 = 63,
    OBJ_Jail_05 = 64,
    OBJ_Jail_06 = 65,
    OBJ_Jail_07 = 66,
    OBJ_ControlRoom_00 = 67,
    OBJ_ControlRoom_01 = 68,
    OBJ_ControlRoom_02 = 69,
    OBJ_ControlRoom_03 = 70,
    OBJ_ControlRoom_04 = 71,
    Objective_Count = 72,
    EObjective_MAX = 73,
};

enum class EActivity {
    None = 0,
    ACT_InsideTheWall = 1,
    ACT_DeadCity = 2,
    ACT_B12Flat = 3,
    ACT_SlumsP1 = 4,
    ACT_Rooftops = 5,
    ACT_SlumsP2 = 6,
    ACT_DeadEnd = 7,
    ACT_Sewers = 8,
    ACT_AntVillage = 9,
    ACT_Midtown = 10,
    ACT_Jail = 11,
    ACT_ControlRoom = 12,
    Activity_Count = 13,
    EActivity_MAX = 14,
};

enum ECatBendInputMode {
    CatBendInputMode_Input = 0,
    CatBendInputMode_Rotation = 1,
    CatBendInputMode_MAX = 2,
};

enum ECatDirectionMode {
    CatDirectionMode_StickDirection = 0,
    CatDirectionMode_InputRotation = 1,
    CatDirectionMode_MAX = 2,
};

enum ECatMovementMode {
    CatMovementMode_Normal = 0,
    CatMovementMode_SplineRail = 1,
    CatMovementMode_InputDriven = 2,
    CatMovementMode_MAX = 3,
};

enum ECatMoveToUsableState {
    CatMoveToUsableState_None = 0,
    CatMoveToUsableState_MovingTo = 1,
    CatMoveToUsableState_Using = 2,
    CatMoveToUsableState_MAX = 3,
};

enum EValidPositionProbeDebugFlags {
    ValidPositionProbeDebug_DisplayLegsCasts = 1,
    ValidPositionProbeDebug_MAX = 2,
};

enum ELastJumpDebugFlags {
    LastJumpDebug_DisplayMotion = 1,
    LastJumpDebug_DisplayMotionRatios = 2,
    LastJumpDebug_MAX = 3,
};

enum EJumpDebugFlags {
    JumpDebug_DisplayTargets = 1,
    JumpDebug_DisplayTrajectories = 2,
    JumpDebug_DisplayEnclosingPlanes = 4,
    JumpDebug_DisplayClampCapsule = 8,
    JumpDebug_DisplayProbes = 16,
    JumpDebug_MAX = 17,
};

enum EDiskOperationType {
    DiskOperationType_Read = 0,
    DiskOperationType_Write = 1,
    DiskOperationType_Delete = 2,
    DiskOperationType_Check = 3,
    DiskOperationType_MAX = 4,
};

enum EDroneMovementType {
    DroneMovementType_None = 0,
    DroneMovementType_Spring = 1,
    DroneMovementType_MoveTo = 2,
    DroneMovementType_MAX = 3,
};

enum EDroneMenuCategory {
    DroneMenuCategory_None = 0,
    DroneMenuCategory_Inventory = 1,
    DroneMenuCategory_PhotoGallery = 2,
    DroneMenuCategory_Memories = 3,
    DroneMenuCategory_MAX = 4,
};

enum EGroundProbeDebugFlags {
    GroundProbeDebug_DisplayEnclosingPlanes = 1,
    GroundProbeDebug_DisplayRail = 2,
    GroundProbeDebug_DisplayNormals = 4,
    GroundProbeDebug_DisplayCasts = 8,
    GroundProbeDebug_MAX = 9,
};

enum EProbeLimitType {
    ProbeLimitType_Open = 0,
    ProbeLimitType_Wall = 1,
    ProbeLimitType_Gap = 2,
    ProbeLimitType_MAX = 3,
};

enum ESaveApplicationFlags {
    SaveApplicationFlag_PersistentData = 1,
    SaveApplicationFlag_SessionData = 2,
    SaveApplicationFlag_All = -1,
    SaveApplicationFlag_MAX = 3,
};

enum ESaveLocation {
    SaveLocation_FixedSlot = 0,
    SaveLocation_NamedSlot = 1,
    SaveLocation_MAX = 2,
};

enum EHKPlatform {
    HKPlatform_Windows = 0,
    HKPlatform_PS4 = 1,
    HKPlatform_PS5 = 2,
    HKPlatform_Unknown = 3,
    HKPlatform_MAX = 4,
};

enum EInteractionFeedbackState {
    InteractionFeedbackState_Ignored = 0,
    InteractionFeedbackState_Visible = 1,
    InteractionFeedbackState_Interactable = 2,
    InteractionFeedbackState_Disabled = 3,
    InteractionFeedbackState_MAX = 4,
};

enum class EKeyboardLayout {
    KeyboardLayout_QWERTY = 0,
    KeyboardLayout_AZERTY = 1,
    KeyboardLayout_QWERTZ = 2,
    KeyboardLayout_MAX = 3,
};

enum EProximityProbeDirection {
    ProximityProbeDirection_Right = 0,
    ProximityProbeDirection_Left = 1,
    ProximityProbeDirection_Up = 2,
    ProximityProbeDirection_Down = 3,
    ProximityProbeDirection_Front = 4,
    ProximityProbeDirection_Back = 5,
    ProximityProbeDirection_COUNT = 6,
    ProximityProbeDirection_NONE = 7,
    ProximityProbeDirection_MAX = 8,
};

enum class ESaveIconState {
    SaveIconState_Idle = 0,
    SaveIconState_Flashing = 1,
    SaveIconState_MAX = 2,
};

enum class EStatEvent {
    StatEvent_OnMeowed = 0,
    StatEvent_OnJumped = 1,
    StatEvent_OnSleepTick = 2,
    StatEvent_OnDunkedBasketball = 3,
    StatEvent_OnZurgPursuitTouched = 4,
    StatEvent_OnZurgPursuitCompleted = 5,
    StatEvent_OnZurgPursuitCompletedWithoutTouch = 6,
    StatEvent_OnSentinelPatternDetected = 7,
    StatEvent_OnSentinelPatternCompletedWithoutDetection = 8,
    StatEvent_OnDied = 9,
    StatEvent_OnSewersZurgSpotlightKilled = 10,
    StatEvent_OnSewersCompleted = 11,
    StatEvent_OnSewersCompletedWithoutKill = 12,
    StatEvent_OnInGameTick = 13,
    StatEvent_OnFallenInsideCity = 14,
    StatEvent_OnB12JoinedCat = 15,
    StatEvent_OnB12TranslatedRobot = 16,
    StatEvent_OnReachedMidTown = 17,
    StatEvent_OnPutInJail = 18,
    StatEvent_OnGameCompleted = 19,
    StatEvent_OnGivenMusicToAAKing = 20,
    StatEvent_OnPaperBagWorn = 21,
    StatEvent_OnRubbedAgainstRobot = 22,
    StatEvent_OnMemoryUnlocked = 23,
    StatEvent_OnTVChannelFirstWatched = 24,
    StatEvent_OnClubVinylScratched = 25,
    StatEvent_OnBadgeCollected = 26,
    StatEvent_OnChapterScratched = 27,
    StatEvent_OnTriedToPlayMahjong = 28,
    StatEvent_Count = 29,
    StatEvent_MAX = 30,
};

enum EStreamingGroupType {
    EStreamingGroupType_Base = 0,
    EStreamingGroupType_Persistent = 1,
    EStreamingGroupType_Dynamic = 2,
    EStreamingGroupType_MAX = 3,
};

enum EZoneLoadingType {
    ZoneLoadingType_Auto = 0,
    ZoneLoadingType_MapChange = 1,
    ZoneLoadingType_OpenZone = 2,
    ZoneLoadingType_MAX = 3,
};

