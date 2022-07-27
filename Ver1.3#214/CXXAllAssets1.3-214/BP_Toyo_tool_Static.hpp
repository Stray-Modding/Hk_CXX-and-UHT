#ifndef UE4SS_SDK_BP_Toyo_tool_Static_HPP
#define UE4SS_SDK_BP_Toyo_tool_Static_HPP

class ABP_Toyo_tool_Static_C : public AActor
{
    class USplineComponent* Spline;                                                   // 0x0228 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0230 (size: 0x8)
    TArray<class UStaticMesh*> Small;                                                 // 0x0238 (size: 0x10)
    TArray<class UStaticMesh*> Medium;                                                // 0x0248 (size: 0x10)
    TArray<class UStaticMesh*> Big;                                                   // 0x0258 (size: 0x10)
    TArray<class UStaticMesh*> joints;                                                // 0x0268 (size: 0x10)
    float small_max_distance;                                                         // 0x0278 (size: 0x4)
    float med_max_distance;                                                           // 0x027C (size: 0x4)
    TArray<int32> random_toyos;                                                       // 0x0280 (size: 0x10)
    TArray<int32> random_joints;                                                      // 0x0290 (size: 0x10)
    bool Random ?;                                                                    // 0x02A0 (size: 0x1)
    int32 max_small;                                                                  // 0x02A4 (size: 0x4)
    TArray<class UStaticMesh*> props;                                                 // 0x02A8 (size: 0x10)
    TArray<float> props_distance;                                                     // 0x02B8 (size: 0x10)
    TArray<FVector> props_rotation;                                                   // 0x02C8 (size: 0x10)
    FText debug_num;                                                                  // 0x02D8 (size: 0x18)
    bool Display_point_num;                                                           // 0x02F0 (size: 0x1)
    class UMaterialInstance* Material_Inst_Toyos;                                     // 0x02F8 (size: 0x8)
    int32 max_joints;                                                                 // 0x0300 (size: 0x4)
    class UMaterialInstance* Material_Inst_Joints;                                    // 0x0308 (size: 0x8)
    TArray<class UMaterialInstance*> Material_Inst_Props;                             // 0x0310 (size: 0x10)
    float Scale;                                                                      // 0x0320 (size: 0x4)
    FRandomStream RandomStream;                                                       // 0x0324 (size: 0x8)
    float Props scale;                                                                // 0x032C (size: 0x4)
    TEnumAsByte<ESplineMeshAxis::Type> Forward axis;                                  // 0x0330 (size: 0x1)
    float Joint pitch ;                                                               // 0x0334 (size: 0x4)
    FCollisionProfileName Collision Profil;                                           // 0x0338 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x340

#endif
