#ifndef UE4SS_SDK_BP_AreaPropsPlacer_HPP
#define UE4SS_SDK_BP_AreaPropsPlacer_HPP

class ABP_AreaPropsPlacer_C : public AActor
{
    class UBoxComponent* Box;                                                         // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    bool Seed;                                                                        // 0x0238 (size: 0x1)
    TArray<class UStaticMesh*> PropsList;                                             // 0x0240 (size: 0x10)
    class AActor* NewVar_0;                                                           // 0x0250 (size: 0x8)
    int32 Props Numbres;                                                              // 0x0258 (size: 0x4)
    FRandomStream random stream;                                                      // 0x025C (size: 0x8)
    TArray<FVector> Location used;                                                    // 0x0268 (size: 0x10)
    FVector Mesh Location;                                                            // 0x0278 (size: 0xC)
    float Scale Min;                                                                  // 0x0284 (size: 0x4)
    float Scale Max;                                                                  // 0x0288 (size: 0x4)

    void UserConstructionScript();
}; // Size: 0x28C

#endif
