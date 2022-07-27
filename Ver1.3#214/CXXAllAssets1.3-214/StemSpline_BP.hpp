#ifndef UE4SS_SDK_StemSpline_BP_HPP
#define UE4SS_SDK_StemSpline_BP_HPP

class AStemSpline_BP_C : public AActor
{
    class UBillboardComponent* Billboard;                                             // 0x0228 (size: 0x8)
    class UArrowComponent* Arrow3;                                                    // 0x0230 (size: 0x8)
    class UArrowComponent* Arrow2;                                                    // 0x0238 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0240 (size: 0x8)
    float IrregularityLevel;                                                          // 0x0248 (size: 0x4)
    float IrregularityLevel_SubStems;                                                 // 0x024C (size: 0x4)
    float pointHeightAboveSurface;                                                    // 0x0250 (size: 0x4)
    float pointHeightOnEdge;                                                          // 0x0254 (size: 0x4)
    bool addCornerPoints;                                                             // 0x0258 (size: 0x1)
    bool optimizeEdges;                                                               // 0x0259 (size: 0x1)
    float traceSegmentLength;                                                         // 0x025C (size: 0x4)
    float downTraceLength;                                                            // 0x0260 (size: 0x4)
    int32 Seed;                                                                       // 0x0264 (size: 0x4)
    int32 AmountOfSegments;                                                           // 0x0268 (size: 0x4)
    int32 amountOfSegmentsDone;                                                       // 0x026C (size: 0x4)
    int32 edgeDetectionPrecision;                                                     // 0x0270 (size: 0x4)
    float splineMeshAmountFactor;                                                     // 0x0274 (size: 0x4)
    bool matchDirection&SurfaceNormal;                                                // 0x0278 (size: 0x1)
    TArray<FVector> Points;                                                           // 0x0280 (size: 0x10)
    float subStemChance;                                                              // 0x0290 (size: 0x4)
    bool showSplinePoints;                                                            // 0x0294 (size: 0x1)
    FVector currentSubstemDirection;                                                  // 0x0298 (size: 0xC)
    TArray<FVector> currentAddingSubstemPoints;                                       // 0x02A8 (size: 0x10)
    int32 currentAddingSubstemAmountOfSegments;                                       // 0x02B8 (size: 0x4)
    TArray<FSubStemStarter> subStemStarters;                                          // 0x02C0 (size: 0x10)
    int32 currentAddingSubLevel;                                                      // 0x02D0 (size: 0x4)
    int32 maxSubStemLevels;                                                           // 0x02D4 (size: 0x4)
    TArray<class USplineComponent*> subStemSplines;                                   // 0x02D8 (size: 0x10)
    float subStems_minGrowAlongLength;                                                // 0x02E8 (size: 0x4)
    float subStems_maxGrowAlongLength;                                                // 0x02EC (size: 0x4)
    float subStemAngle;                                                               // 0x02F0 (size: 0x4)
    float subStemAngleAdditionalRandom;                                               // 0x02F4 (size: 0x4)
    int32 maxSubstemAmount;                                                           // 0x02F8 (size: 0x4)
    int32 currentSubstemAmount;                                                       // 0x02FC (size: 0x4)
    float perSubLevelLengthMultiplier;                                                // 0x0300 (size: 0x4)
    bool optimizeToLowerPoly;                                                         // 0x0304 (size: 0x1)
    float optimizeMesh_DirectionMargin;                                               // 0x0308 (size: 0x4)
    float optimizeMesh_TangentMargin;                                                 // 0x030C (size: 0x4)
    bool StripStem;                                                                   // 0x0310 (size: 0x1)
    float StripStemStartWidth;                                                        // 0x0314 (size: 0x4)
    float StripStemEndWidth;                                                          // 0x0318 (size: 0x4)
    float StripStemFullWidthTime;                                                     // 0x031C (size: 0x4)
    class UStaticMesh* StripStemMain;                                                 // 0x0320 (size: 0x8)
    class UStaticMesh* StripStemLowPoly;                                              // 0x0328 (size: 0x8)
    class UMaterialInterface* StripStemMaterial;                                      // 0x0330 (size: 0x8)
    float StartMeshScaleExtension;                                                    // 0x0338 (size: 0x4)
    float EndMeshScaleExtension;                                                      // 0x033C (size: 0x4)
    FVector2D mainMeshScale;                                                          // 0x0340 (size: 0x8)
    class UStaticMesh* splineMesh_Middle;                                             // 0x0348 (size: 0x8)
    class UStaticMesh* splineMesh_Start;                                              // 0x0350 (size: 0x8)
    class UStaticMesh* splineMesh_End;                                                // 0x0358 (size: 0x8)
    class UStaticMesh* splineMesh_LowPoly;                                            // 0x0360 (size: 0x8)
    class USplineComponent* mainSpline;                                               // 0x0368 (size: 0x8)
    TArray<int32> occupiedLengths;                                                    // 0x0370 (size: 0x10)
    FVector startPointSeekDirection;                                                  // 0x0380 (size: 0xC)
    float splineEndScale;                                                             // 0x038C (size: 0x4)
    float MainStemCurve;                                                              // 0x0390 (size: 0x4)
    bool MainStemCurve_Bending;                                                       // 0x0394 (size: 0x1)
    bool MainStemCurve_Incremental;                                                   // 0x0395 (size: 0x1)
    float SubStemCurve;                                                               // 0x0398 (size: 0x4)
    bool SubStemCurve_Bending;                                                        // 0x039C (size: 0x1)
    FVector lastTraceDirection;                                                       // 0x03A0 (size: 0xC)
    bool dropOffFromBottomEdges;                                                      // 0x03AC (size: 0x1)
    int32 dropOffFromBottomEdges_maxDrop;                                             // 0x03B0 (size: 0x4)
    int32 currentDropOffs;                                                            // 0x03B4 (size: 0x4)
    bool doingDropOffNow;                                                             // 0x03B8 (size: 0x1)
    float dropOffTolerance;                                                           // 0x03BC (size: 0x4)
    float dropOff_EdgeAdjust;                                                         // 0x03C0 (size: 0x4)
    bool dropOffIfDownDirection;                                                      // 0x03C4 (size: 0x1)
    float dropOffIfDownDirection_reqLength;                                           // 0x03C8 (size: 0x4)
    FVector dropOffPoint;                                                             // 0x03CC (size: 0xC)
    float dropOffDownDirection_EdgeAdjust;                                            // 0x03D8 (size: 0x4)
    bool makeBridges;                                                                 // 0x03DC (size: 0x1)
    bool makeBridgesWithSubStems;                                                     // 0x03DD (size: 0x1)
    float BridgeChance;                                                               // 0x03E0 (size: 0x4)
    float BridgeGravity;                                                              // 0x03E4 (size: 0x4)
    float BridgeGravity_RandomAdd;                                                    // 0x03E8 (size: 0x4)
    class UCurveFloat* BridgeCurve;                                                   // 0x03F0 (size: 0x8)
    bool badTwistWorkaround;                                                          // 0x03F8 (size: 0x1)
    TArray<float> meshStartTimes;                                                     // 0x0400 (size: 0x10)
    TArray<float> meshEndTimes;                                                       // 0x0410 (size: 0x10)
    TArray<FVector> edgePoints_Locations;                                             // 0x0420 (size: 0x10)
    float splineMeshRoll;                                                             // 0x0430 (size: 0x4)
    bool fixTangentUV-Stretching;                                                     // 0x0434 (size: 0x1)
    TArray<float> edgePointsTimes;                                                    // 0x0438 (size: 0x10)
    float SeekDistance;                                                               // 0x0448 (size: 0x4)
    float SeekStartOffset;                                                            // 0x044C (size: 0x4)
    bool PrioritizeHigherObjects;                                                     // 0x0450 (size: 0x1)
    bool showSeekTraces;                                                              // 0x0451 (size: 0x1)
    int32 maxTraceChecks;                                                             // 0x0454 (size: 0x4)
    bool useFixedSeekDirection;                                                       // 0x0458 (size: 0x1)
    FVector FixedSeekDirection;                                                       // 0x045C (size: 0xC)
    bool makeBridgesFromCeilings;                                                     // 0x0468 (size: 0x1)
    float strongTangentsReduction;                                                    // 0x046C (size: 0x4)
    bool 'X'_asUpVector;                                                              // 0x0470 (size: 0x1)
    bool clampedEdges;                                                                // 0x0471 (size: 0x1)
    bool CreateSplineMeshes;                                                          // 0x0472 (size: 0x1)
    bool onlyFromEdges;                                                               // 0x0473 (size: 0x1)
    float requiredEdgeSharpness;                                                      // 0x0474 (size: 0x4)
    int32 maxBridgeAmount;                                                            // 0x0478 (size: 0x4)
    int32 currentBridgeAmount;                                                        // 0x047C (size: 0x4)
    bool SplineMeshShadow;                                                            // 0x0480 (size: 0x1)
    bool SplineMeshCollision;                                                         // 0x0481 (size: 0x1)
    bool SubStemCurve_Incremental;                                                    // 0x0482 (size: 0x1)
    bool hideDirectionArrows;                                                         // 0x0483 (size: 0x1)
    TArray<FMeshToSpawnAlong> meshesToSpawnAlong;                                     // 0x0488 (size: 0x10)
    bool CLICK;                                                                       // 0x0498 (size: 0x1)
    TArray<FSkelMeshToSpawnAlong> SkelMeshesToSpawnAlong;                             // 0x04A0 (size: 0x10)
    bool useTargetPoint;                                                              // 0x04B0 (size: 0x1)
    class ASplineTarget_BP_C* TargetPoint;                                            // 0x04B8 (size: 0x8)
    FVector Direction;                                                                // 0x04C0 (size: 0xC)
    FRandomStream RandomStream;                                                       // 0x04CC (size: 0x8)
    bool ProcessSubStems;                                                             // 0x04D4 (size: 0x1)
    float IrregularityLevelSubStems_Neg;                                              // 0x04D8 (size: 0x4)
    float IrregularityLevel_Neg;                                                      // 0x04DC (size: 0x4)
    float BridgeGravityRandomAdd_Neg;                                                 // 0x04E0 (size: 0x4)
    FLinearColor FullRed;                                                             // 0x04E4 (size: 0x10)
    FLinearColor NoRed;                                                               // 0x04F4 (size: 0x10)

    void SetMainDirectionVector();
    void AddSkelMeshesAlongSpline(class USplineComponent* SplineComp);
    void [SubStem]-DoCheckSegment(FVector StartLocation, FVector relativeNormal, int32 currentSubLevel);
    void SeekForBridge(FVector StartLoc, FVector StartNormal, bool& bridgeBuilt, TArray<FVector>& bridgePoints, FVector& newSurfaceNormal);
    void (Bridge)_TraceTowardsDirection(FVector StartLocation, FVector relativeNormal, FVector Direction, bool& hitSomething, FVector& lastLocation, FVector& HitLocation, FVector& HitNormal, FVector& traceDirection);
    void FindBridgeEdge(int32 maxSegmentChecks, FVector fromWhere, FVector StartNormal, FVector Direction, bool& found, FVector& edgeLocation, FVector& edgeNormal);
    void WorldLocToSplineTimeApprox(FVector worldLoc, int32 Iterations, float distanceTolerance_, class USplineComponent* SplineComponent, float StartTime, float EndTime, float& bestTime);
    void FindClosestVector(TArray<FVector>& inArray, FVector toVector, int32& closestValueIndex_);
    void CheckIfContainsVectorInDistance(TArray<FVector>& Array, float inDistance, FVector Vector, bool& Contains?);
    void FindClosestValue(TArray<float>& inArray, float toValue, int32& closestValueIndex_);
    void CheckIfContainsValueInRange(TArray<float>& Array, float Range: Min, float Range: Max, bool& Contains?);
    void AddMeshesAlongSpline(class USplineComponent* SplineComp);
    void AddSubStem(FVector StartLoc, FVector StartNormal, int32 currentSubLevel);
    void AddSplineMeshes(class USplineComponent* SplineComponent);
    void AddSplinePoints();
    void SearchForEdge(FVector searchStartLocation, FVector searchDirectionNormal, bool forSubstem, bool& FoundAnEdge_, FVector& foundEdgeLocation, FVector& foundEdgeNormal);
    void DoCheckSegment(FVector StartLocation, FVector relativeNormal);
    void TraceDown(FVector StartLocation, FVector relativeNormal, bool forBridgeSeek, FVector& HitLocation, FVector& HitNormal, bool& hitSomething);
    void TraceTowardsDirection(FVector StartLocation, FVector relativeNormal, bool forSubstem, FVector& HitLocation, FVector& HitNormal, FVector& lastLocation, FVector& traceDirection, bool& hitSomething, bool& targetReached);
    void FindStartPoint(FVector& StartLoc, FVector& StartNormal);
    void UserConstructionScript();
}; // Size: 0x504

#endif
