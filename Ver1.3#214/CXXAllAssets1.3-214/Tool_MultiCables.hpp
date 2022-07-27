#ifndef UE4SS_SDK_Tool_MultiCables_HPP
#define UE4SS_SDK_Tool_MultiCables_HPP

class ATool_MultiCables_C : public AActor
{
    class USplineComponent* Spline;                                                   // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    TArray<class UStaticMesh*> StaticMesh;                                            // 0x0238 (size: 0x10)
    class UMaterialInterface* Materials;                                              // 0x0248 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x250

#endif
