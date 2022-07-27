enum class EHoudiniStaticMeshMethod {
    RawMesh = 0,
    FMeshDescription = 1,
    UHoudiniStaticMesh = 2,
    EHoudiniStaticMeshMethod_MAX = 3,
};

enum class EHoudiniAssetStateResult {
    None = 0,
    Working = 1,
    Success = 2,
    FinishedWithError = 3,
    FinishedWithFatalError = 4,
    Aborted = 5,
    EHoudiniAssetStateResult_MAX = 6,
};

enum class EHoudiniAssetState {
    NeedInstantiation = 0,
    NewHDA = 1,
    PreInstantiation = 2,
    Instantiating = 3,
    PreCook = 4,
    Cooking = 5,
    PostCook = 6,
    PreProcess = 7,
    Processing = 8,
    None = 9,
    NeedRebuild = 10,
    NeedDelete = 11,
    Deleting = 12,
    ProcessTemplate = 13,
    EHoudiniAssetState_MAX = 14,
};

enum class EHoudiniProxyRefineRequestResult {
    Invalid = 0,
    None = 1,
    PendingCooks = 2,
    Refined = 3,
    EHoudiniProxyRefineRequestResult_MAX = 4,
};

enum class EHoudiniProxyRefineResult {
    Invalid = 0,
    Failed = 1,
    Success = 2,
    Skipped = 3,
    EHoudiniProxyRefineResult_MAX = 4,
};

enum class EHoudiniLandscapeExportType {
    Heightfield = 0,
    Mesh = 1,
    Points = 2,
    EHoudiniLandscapeExportType_MAX = 3,
};

enum class EHoudiniCurveBreakpointParameterization {
    Invalid = -1,
    Uniform = 0,
    Chord = 1,
    Centripetal = 2,
    EHoudiniCurveBreakpointParameterization_MAX = 3,
};

enum class EHoudiniCurveMethod {
    Invalid = -1,
    CVs = 0,
    Breakpoints = 1,
    Freehand = 2,
    EHoudiniCurveMethod_MAX = 3,
};

enum class EHoudiniCurveType {
    Invalid = -1,
    Polygon = 0,
    Nurbs = 1,
    Bezier = 2,
    Points = 3,
    EHoudiniCurveType_MAX = 4,
};

enum class EHoudiniOutputType {
    Invalid = 0,
    Mesh = 1,
    Instancer = 2,
    Landscape = 3,
    Curve = 4,
    Skeletal = 5,
    GeometryCollection = 6,
    EHoudiniOutputType_MAX = 7,
};

enum class EHoudiniInputType {
    Invalid = 0,
    Geometry = 1,
    Curve = 2,
    Asset = 3,
    Landscape = 4,
    World = 5,
    Skeletal = 6,
    GeometryCollection = 7,
    EHoudiniInputType_MAX = 8,
};

enum class EHoudiniLandscapeOutputBakeType {
    Detachment = 0,
    BakeToImage = 1,
    BakeToWorld = 2,
    InValid = 3,
    EHoudiniLandscapeOutputBakeType_MAX = 4,
};

enum class EHoudiniRampInterpolationType {
    InValid = -1,
    CONSTANT = 0,
    LINEAR = 1,
    CATMULL_ROM = 2,
    MONOTONE_CUBIC = 3,
    BEZIER = 4,
    BSPLINE = 5,
    HERMITE = 6,
    EHoudiniRampInterpolationType_MAX = 7,
};

enum class EAttribOwner {
    Invalid = -1,
    Vertex = 0,
    Point = 1,
    Prim = 2,
    Detail = 3,
    EAttribOwner_MAX = 4,
};

enum class EAttribStorageType {
    Invalid = -1,
    INT = 0,
    INT64 = 1,
    FLOAT = 2,
    FLOAT64 = 3,
    STRING = 4,
    EAttribStorageType_MAX = 5,
};

enum class EHoudiniInstancerType {
    Invalid = 0,
    ObjectInstancer = 1,
    PackedPrimitive = 2,
    AttributeInstancer = 3,
    OldSchoolAttributeInstancer = 4,
    GeometryCollection = 5,
    EHoudiniInstancerType_MAX = 6,
};

enum class EHoudiniPartType {
    Invalid = 0,
    Mesh = 1,
    Instancer = 2,
    Curve = 3,
    Volume = 4,
    EHoudiniPartType_MAX = 5,
};

enum class EHoudiniGeoType {
    Invalid = 0,
    Default = 1,
    Intermediate = 2,
    Input = 3,
    Curve = 4,
    EHoudiniGeoType_MAX = 5,
};

enum class EHoudiniHandleType {
    Xform = 0,
    Bounder = 1,
    Unsupported = 2,
    EHoudiniHandleType_MAX = 3,
};

enum class EXformParameter {
    TX = 0,
    TY = 1,
    TZ = 2,
    RX = 3,
    RY = 4,
    RZ = 5,
    SX = 6,
    SY = 7,
    SZ = 8,
    COUNT = 9,
    EXformParameter_MAX = 10,
};

enum class EHoudiniInputObjectType {
    Invalid = 0,
    Object = 1,
    StaticMesh = 2,
    SkeletalMesh = 3,
    SceneComponent = 4,
    StaticMeshComponent = 5,
    InstancedStaticMeshComponent = 6,
    SplineComponent = 7,
    HoudiniSplineComponent = 8,
    HoudiniAssetComponent = 9,
    Actor = 10,
    Landscape = 11,
    Brush = 12,
    CameraComponent = 13,
    DataTable = 14,
    HoudiniAssetActor = 15,
    FoliageType_InstancedStaticMesh = 16,
    GeometryCollection = 17,
    GeometryCollectionComponent = 18,
    GeometryCollectionActor = 19,
    EHoudiniInputObjectType_MAX = 20,
};

enum class EHoudiniXformType {
    None = 0,
    IntoThisObject = 1,
    Auto = 2,
    EHoudiniXformType_MAX = 3,
};

enum class EHoudiniCurveOutputType {
    UnrealSpline = 0,
    HoudiniSpline = 1,
    EHoudiniCurveOutputType_MAX = 2,
};

enum class EHoudiniParameterType {
    Invalid = 0,
    Button = 1,
    ButtonStrip = 2,
    Color = 3,
    ColorRamp = 4,
    File = 5,
    FileDir = 6,
    FileGeo = 7,
    FileImage = 8,
    Float = 9,
    FloatRamp = 10,
    Folder = 11,
    FolderList = 12,
    Input = 13,
    Int = 14,
    IntChoice = 15,
    Label = 16,
    MultiParm = 17,
    Separator = 18,
    String = 19,
    StringChoice = 20,
    StringAssetRef = 21,
    Toggle = 22,
    EHoudiniParameterType_MAX = 23,
};

enum class EHoudiniFolderParameterType {
    Invalid = 0,
    Collapsible = 1,
    Simple = 2,
    Tabs = 3,
    Radio = 4,
    Other = 5,
    EHoudiniFolderParameterType_MAX = 6,
};

enum class EHoudiniMultiParmModificationType {
    None = 0,
    Inserted = 1,
    Removed = 2,
    Modified = 3,
    EHoudiniMultiParmModificationType_MAX = 4,
};

enum class EHoudiniRampPointConstructStatus {
    None = 0,
    INITIALIZED = 1,
    POSITION_INSERTED = 2,
    VALUE_INSERTED = 3,
    INTERPTYPE_INSERTED = 4,
    EHoudiniRampPointConstructStatus_MAX = 5,
};

enum class EPDGWorkResultState {
    None = 0,
    ToLoad = 1,
    Loading = 2,
    Loaded = 3,
    ToDelete = 4,
    Deleting = 5,
    Deleted = 6,
    NotLoaded = 7,
    EPDGWorkResultState_MAX = 8,
};

enum class EPDGNodeState {
    None = 0,
    Dirtied = 1,
    Dirtying = 2,
    Cooking = 3,
    Cook_Complete = 4,
    Cook_Failed = 5,
    EPDGNodeState_MAX = 6,
};

enum class EPDGLinkState {
    Inactive = 0,
    Linking = 1,
    Linked = 2,
    Error_Not_Linked = 3,
    EPDGLinkState_MAX = 4,
};

enum EHoudiniExecutableType {
    HRSHE_Houdini = 0,
    HRSHE_HoudiniFX = 1,
    HRSHE_HoudiniCore = 2,
    HRSHE_HoudiniIndie = 3,
    HRSHE_MAX = 4,
};

enum EHoudiniRuntimeSettingsRecomputeFlag {
    HRSRF_Always = 0,
    HRSRF_OnlyIfMissing = 1,
    HRSRF_Never = 2,
    HRSRF_MAX = 3,
};

enum EHoudiniRuntimeSettingsSessionType {
    HRSST_InProcess = 0,
    HRSST_Socket = 1,
    HRSST_NamedPipe = 2,
    HRSST_None = 3,
    HRSST_MAX = 4,
};

