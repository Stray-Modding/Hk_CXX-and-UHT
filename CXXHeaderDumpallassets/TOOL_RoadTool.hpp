#ifndef UE4SS_SDK_TOOL_RoadTool_HPP
#define UE4SS_SDK_TOOL_RoadTool_HPP

class ATOOL_RoadTool_C : public AActor
{
    class USplineComponent* Spline;                                                   // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    class UStaticMesh* StaticMesh;                                                    // 0x0238 (size: 0x8)
    class UMaterialInterface* Material;                                               // 0x0240 (size: 0x8)
    FName Collision Profile;                                                          // 0x0248 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x250

#endif
