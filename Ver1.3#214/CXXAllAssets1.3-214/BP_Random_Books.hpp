#ifndef UE4SS_SDK_BP_Random_Books_HPP
#define UE4SS_SDK_BP_Random_Books_HPP

class ABP_Random_Books_C : public AActor
{
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    TArray<class UStaticMesh*> Books;                                                 // 0x0230 (size: 0x10)
    int32 Number of Books;                                                            // 0x0240 (size: 0x4)
    FRandomStream RandomStream;                                                       // 0x0244 (size: 0x8)
    float LocationX;                                                                  // 0x024C (size: 0x4)
    float Offset Y min;                                                               // 0x0250 (size: 0x4)
    float Offset Y max;                                                               // 0x0254 (size: 0x4)
    float Scale X min;                                                                // 0x0258 (size: 0x4)
    float Scale X max;                                                                // 0x025C (size: 0x4)
    float Scale Y min;                                                                // 0x0260 (size: 0x4)
    float Scale Y max;                                                                // 0x0264 (size: 0x4)
    float Scale Z min;                                                                // 0x0268 (size: 0x4)
    float Scale Z max;                                                                // 0x026C (size: 0x4)
    float Rotation (Pitch);                                                           // 0x0270 (size: 0x4)
    bool Seed;                                                                        // 0x0274 (size: 0x1)

    void UserConstructionScript();
}; // Size: 0x275

#endif
