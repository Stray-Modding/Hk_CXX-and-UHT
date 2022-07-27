#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
#include "VectorSpringState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Plane -FallbackName=Plane
#include "EMatrixColumns.h"
#include "EEasingFunc.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Matrix -FallbackName=Matrix
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RandomStream -FallbackName=RandomStream
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ELerpInterpolationMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "FloatSpringState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EAxis -FallbackName=EAxis
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=QualifiedFrameTime -FallbackName=QualifiedFrameTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box2D -FallbackName=Box2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
#include "KismetMathLibrary.generated.h"

class UObject;

UCLASS(BlueprintType)
class ENGINE_API UKismetMathLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKismetMathLibrary();
    UFUNCTION(BlueprintPure)
    static int32 Xor_IntInt(int32 A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static int64 Xor_Int64Int64(int64 A, int64 B);
    
    UFUNCTION(BlueprintPure)
    static int32 Wrap(int32 Value, int32 NewMin, int32 NewMax);
    
    UFUNCTION(BlueprintPure)
    static FVector WeightedMovingAverage_FVector(FVector CurrentSample, FVector PreviousSample, float Weight);
    
    UFUNCTION(BlueprintPure)
    static FRotator WeightedMovingAverage_FRotator(FRotator CurrentSample, FRotator PreviousSample, float Weight);
    
    UFUNCTION(BlueprintPure)
    static float WeightedMovingAverage_Float(float CurrentSample, float PreviousSample, float Weight);
    
    UFUNCTION(BlueprintPure)
    static float VSizeXYSquared(FVector A);
    
    UFUNCTION(BlueprintPure)
    static float VSizeXY(FVector A);
    
    UFUNCTION(BlueprintPure)
    static float VSizeSquared(FVector A);
    
    UFUNCTION(BlueprintPure)
    static float VSize2DSquared(FVector2D A);
    
    UFUNCTION(BlueprintPure)
    static float VSize2D(FVector2D A);
    
    UFUNCTION(BlueprintPure)
    static float VSize(FVector A);
    
    UFUNCTION(BlueprintPure)
    static FVector VLerp(FVector A, FVector B, float Alpha);
    
    UFUNCTION(BlueprintPure)
    static FVector VInterpTo_Constant(FVector Current, FVector Target, float DeltaTime, float InterpSpeed);
    
    UFUNCTION(BlueprintPure)
    static FVector VInterpTo(FVector Current, FVector Target, float DeltaTime, float InterpSpeed);
    
    UFUNCTION(BlueprintCallable)
    static FVector VectorSpringInterp(FVector Current, FVector Target, UPARAM(Ref) FVectorSpringState& SpringState, float Stiffness, float CriticalDampingFactor, float DeltaTime, float Mass);
    
    UFUNCTION(BlueprintPure)
    static FVector Vector_Zero();
    
    UFUNCTION(BlueprintPure)
    static FVector Vector_Up();
    
    UFUNCTION(BlueprintCallable)
    static void Vector_UnwindEuler(UPARAM(Ref) FVector& A);
    
    UFUNCTION(BlueprintPure)
    static FVector2D Vector_UnitCartesianToSpherical(FVector A);
    
    UFUNCTION(BlueprintPure)
    static FVector Vector_ToRadians(FVector A);
    
    UFUNCTION(BlueprintPure)
    static FVector Vector_ToDegrees(FVector A);
    
    UFUNCTION(BlueprintPure)
    static FVector Vector_SnappedToGrid(FVector InVect, float InGridSize);
    
    UFUNCTION(BlueprintCallable)
    static void Vector_Set(UPARAM(Ref) FVector& A, float X, float Y, float Z);
    
    UFUNCTION(BlueprintPure)
    static FVector Vector_Right();
    
    UFUNCTION(BlueprintPure)
    static FVector Vector_Reciprocal(const FVector& A);
    
    UFUNCTION(BlueprintPure)
    static FVector Vector_ProjectOnToNormal(FVector V, FVector InNormal);
    
    UFUNCTION(BlueprintPure)
    static FVector Vector_One();
    
    UFUNCTION(BlueprintPure)
    static FVector Vector_NormalUnsafe(const FVector& A);
    
    UFUNCTION(BlueprintCallable)
    static void Vector_Normalize(UPARAM(Ref) FVector& A, float Tolerance);
    
    UFUNCTION(BlueprintPure)
    static FVector Vector_Normal2D(FVector A, float Tolerance);
    
    UFUNCTION(BlueprintPure)
    static FVector Vector_MirrorByPlane(FVector A, const FPlane& InPlane);
    
    UFUNCTION(BlueprintPure)
    static FVector Vector_Left();
    
    UFUNCTION(BlueprintPure)
    static bool Vector_IsZero(const FVector& A);
    
    UFUNCTION(BlueprintPure)
    static bool Vector_IsUnit(const FVector& A, float SquaredLenthTolerance);
    
    UFUNCTION(BlueprintPure)
    static bool Vector_IsUniform(const FVector& A, float Tolerance);
    
    UFUNCTION(BlueprintPure)
    static bool Vector_IsNormal(const FVector& A);
    
    UFUNCTION(BlueprintPure)
    static bool Vector_IsNearlyZero(const FVector& A, float Tolerance);
    
    UFUNCTION(BlueprintPure)
    static bool Vector_IsNAN(const FVector& A);
    
    UFUNCTION(BlueprintPure)
    static float Vector_HeadingAngle(FVector A);
    
    UFUNCTION(BlueprintPure)
    static FVector Vector_GetSignVector(FVector A);
    
    UFUNCTION(BlueprintPure)
    static FVector Vector_GetProjection(FVector A);
    
    UFUNCTION(BlueprintPure)
    static float Vector_GetAbsMin(FVector A);
    
    UFUNCTION(BlueprintPure)
    static float Vector_GetAbsMax(FVector A);
    
    UFUNCTION(BlueprintPure)
    static FVector Vector_GetAbs(FVector A);
    
    UFUNCTION(BlueprintPure)
    static FVector Vector_Forward();
    
    UFUNCTION(BlueprintPure)
    static FVector Vector_Down();
    
    UFUNCTION(BlueprintPure)
    static float Vector_DistanceSquared(FVector v1, FVector v2);
    
    UFUNCTION(BlueprintPure)
    static float Vector_Distance2DSquared(FVector v1, FVector v2);
    
    UFUNCTION(BlueprintPure)
    static float Vector_Distance2D(FVector v1, FVector v2);
    
    UFUNCTION(BlueprintPure)
    static float Vector_Distance(FVector v1, FVector v2);
    
    UFUNCTION(BlueprintPure)
    static float Vector_CosineAngle2D(FVector A, FVector B);
    
    UFUNCTION(BlueprintPure)
    static FVector Vector_ComponentMin(FVector A, FVector B);
    
    UFUNCTION(BlueprintPure)
    static FVector Vector_ComponentMax(FVector A, FVector B);
    
    UFUNCTION(BlueprintPure)
    static FVector Vector_ClampSizeMax2D(FVector A, float NewMax);
    
    UFUNCTION(BlueprintPure)
    static FVector Vector_ClampSizeMax(FVector A, float NewMax);
    
    UFUNCTION(BlueprintPure)
    static FVector Vector_ClampSize2D(FVector A, float NewMin, float NewMax);
    
    UFUNCTION(BlueprintPure)
    static FVector Vector_BoundedToCube(FVector InVect, float InRadius);
    
    UFUNCTION(BlueprintPure)
    static FVector Vector_BoundedToBox(FVector InVect, FVector InBoxMin, FVector InBoxMax);
    
    UFUNCTION(BlueprintPure)
    static FVector Vector_Backward();
    
    UFUNCTION(BlueprintCallable)
    static void Vector_Assign(UPARAM(Ref) FVector& A, const FVector& InVector);
    
    UFUNCTION(BlueprintCallable)
    static void Vector_AddBounded(UPARAM(Ref) FVector& A, FVector InAddVect, float InRadius);
    
    UFUNCTION(BlueprintPure)
    static FVector4 Vector4_Zero();
    
    UFUNCTION(BlueprintPure)
    static float Vector4_SizeSquared3(const FVector4& A);
    
    UFUNCTION(BlueprintPure)
    static float Vector4_SizeSquared(const FVector4& A);
    
    UFUNCTION(BlueprintPure)
    static float Vector4_Size3(const FVector4& A);
    
    UFUNCTION(BlueprintPure)
    static float Vector4_Size(const FVector4& A);
    
    UFUNCTION(BlueprintCallable)
    static void Vector4_Set(UPARAM(Ref) FVector4& A, float X, float Y, float Z, float W);
    
    UFUNCTION(BlueprintPure)
    static FVector4 Vector4_NormalUnsafe3(const FVector4& A);
    
    UFUNCTION(BlueprintCallable)
    static void Vector4_Normalize3(UPARAM(Ref) FVector4& A, float Tolerance);
    
    UFUNCTION(BlueprintPure)
    static FVector4 Vector4_Normal3(const FVector4& A, float Tolerance);
    
    UFUNCTION(BlueprintPure)
    static FVector4 Vector4_Negated(const FVector4& A);
    
    UFUNCTION(BlueprintPure)
    static FVector4 Vector4_MirrorByVector3(const FVector4& Direction, const FVector4& SurfaceNormal);
    
    UFUNCTION(BlueprintPure)
    static bool Vector4_IsZero(const FVector4& A);
    
    UFUNCTION(BlueprintPure)
    static bool Vector4_IsUnit3(const FVector4& A, float SquaredLenthTolerance);
    
    UFUNCTION(BlueprintPure)
    static bool Vector4_IsNormal3(const FVector4& A);
    
    UFUNCTION(BlueprintPure)
    static bool Vector4_IsNearlyZero3(const FVector4& A, float Tolerance);
    
    UFUNCTION(BlueprintPure)
    static bool Vector4_IsNAN(const FVector4& A);
    
    UFUNCTION(BlueprintPure)
    static float Vector4_DotProduct3(const FVector4& A, const FVector4& B);
    
    UFUNCTION(BlueprintPure)
    static float Vector4_DotProduct(const FVector4& A, const FVector4& B);
    
    UFUNCTION(BlueprintPure)
    static FVector4 Vector4_CrossProduct3(const FVector4& A, const FVector4& B);
    
    UFUNCTION(BlueprintCallable)
    static void Vector4_Assign(UPARAM(Ref) FVector4& A, const FVector4& InVector);
    
    UFUNCTION(BlueprintPure)
    static FVector2D Vector2DInterpTo_Constant(FVector2D Current, FVector2D Target, float DeltaTime, float InterpSpeed);
    
    UFUNCTION(BlueprintPure)
    static FVector2D Vector2DInterpTo(FVector2D Current, FVector2D Target, float DeltaTime, float InterpSpeed);
    
    UFUNCTION(BlueprintPure)
    static FVector2D Vector2D_Zero();
    
    UFUNCTION(BlueprintPure)
    static FVector2D Vector2D_Unit45Deg();
    
    UFUNCTION(BlueprintPure)
    static FVector2D Vector2D_One();
    
    UFUNCTION(BlueprintPure)
    static FVector VEase(FVector A, FVector B, float Alpha, TEnumAsByte<EEasingFunc::Type> EasingFunc, float BlendExp, int32 Steps);
    
    UFUNCTION(BlueprintPure)
    static FDateTime UtcNow();
    
    UFUNCTION(BlueprintPure)
    static FVector4 TransformVector4(const FMatrix& Matrix, const FVector4& Vec4);
    
    UFUNCTION(BlueprintPure)
    static FRotator TransformRotation(const FTransform& T, FRotator Rotation);
    
    UFUNCTION(BlueprintPure)
    static FVector TransformLocation(const FTransform& T, FVector Location);
    
    UFUNCTION(BlueprintPure)
    static FVector TransformDirection(const FTransform& T, FVector Direction);
    
    UFUNCTION(BlueprintPure)
    static float Transform_Determinant(const FTransform& Transform);
    
    UFUNCTION(BlueprintPure)
    static FVector2D ToSign2D(FVector2D A);
    
    UFUNCTION(BlueprintPure)
    static FVector2D ToRounded2D(FVector2D A);
    
    UFUNCTION(BlueprintPure)
    static void ToDirectionAndLength2D(FVector2D A, FVector2D& OutDir, float& OutLength);
    
    UFUNCTION(BlueprintPure)
    static FDateTime Today();
    
    UFUNCTION(BlueprintPure)
    static FTransform TLerp(const FTransform& A, const FTransform& B, float Alpha, TEnumAsByte<ELerpInterpolationMode::Type> InterpMode);
    
    UFUNCTION(BlueprintPure)
    static FTransform TInterpTo(const FTransform& Current, const FTransform& Target, float DeltaTime, float InterpSpeed);
    
    UFUNCTION(BlueprintPure)
    static FTimespan TimespanZeroValue();
    
    UFUNCTION(BlueprintPure)
    static float TimespanRatio(FTimespan A, FTimespan B);
    
    UFUNCTION(BlueprintPure)
    static FTimespan TimespanMinValue();
    
    UFUNCTION(BlueprintPure)
    static FTimespan TimespanMaxValue();
    
    UFUNCTION(BlueprintPure)
    static bool TimespanFromString(const FString& TimespanString, FTimespan& Result);
    
    UFUNCTION(BlueprintPure)
    static FTransform TEase(const FTransform& A, const FTransform& B, float Alpha, TEnumAsByte<EEasingFunc::Type> EasingFunc, float BlendExp, int32 Steps);
    
    UFUNCTION(BlueprintPure)
    static float Tan(float A);
    
    UFUNCTION(BlueprintPure)
    static FVector Subtract_VectorVector(FVector A, FVector B);
    
    UFUNCTION(BlueprintPure)
    static FVector Subtract_VectorInt(FVector A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static FVector Subtract_VectorFloat(FVector A, float B);
    
    UFUNCTION(BlueprintPure)
    static FVector4 Subtract_Vector4Vector4(const FVector4& A, const FVector4& B);
    
    UFUNCTION(BlueprintPure)
    static FVector2D Subtract_Vector2DVector2D(FVector2D A, FVector2D B);
    
    UFUNCTION(BlueprintPure)
    static FVector2D Subtract_Vector2DFloat(FVector2D A, float B);
    
    UFUNCTION(BlueprintPure)
    static FTimespan Subtract_TimespanTimespan(FTimespan A, FTimespan B);
    
    UFUNCTION(BlueprintPure)
    static FQuat Subtract_QuatQuat(const FQuat& A, const FQuat& B);
    
    UFUNCTION(BlueprintPure)
    static FLinearColor Subtract_LinearColorLinearColor(FLinearColor A, FLinearColor B);
    
    UFUNCTION(BlueprintPure)
    static FIntPoint Subtract_IntPointIntPoint(FIntPoint A, FIntPoint B);
    
    UFUNCTION(BlueprintPure)
    static FIntPoint Subtract_IntPointInt(FIntPoint A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static int32 Subtract_IntInt(int32 A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static int64 Subtract_Int64Int64(int64 A, int64 B);
    
    UFUNCTION(BlueprintPure)
    static float Subtract_FloatFloat(float A, float B);
    
    UFUNCTION(BlueprintPure)
    static FDateTime Subtract_DateTimeTimespan(FDateTime A, FTimespan B);
    
    UFUNCTION(BlueprintPure)
    static FTimespan Subtract_DateTimeDateTime(FDateTime A, FDateTime B);
    
    UFUNCTION(BlueprintPure)
    static uint8 Subtract_ByteByte(uint8 A, uint8 B);
    
    UFUNCTION(BlueprintPure)
    static float Square(float A);
    
    UFUNCTION(BlueprintPure)
    static float Sqrt(float A);
    
    UFUNCTION(BlueprintPure)
    static FVector Spherical2DToUnitCartesian(FVector2D A);
    
    UFUNCTION(BlueprintPure)
    static float Sin(float A);
    
    UFUNCTION(BlueprintPure)
    static int64 SignOfInteger64(int64 A);
    
    UFUNCTION(BlueprintPure)
    static int32 SignOfInteger(int32 A);
    
    UFUNCTION(BlueprintPure)
    static float SignOfFloat(float A);
    
    UFUNCTION(BlueprintCallable)
    static void SetRandomStreamSeed(UPARAM(Ref) FRandomStream& Stream, int32 NewSeed);
    
    UFUNCTION(BlueprintCallable)
    static void Set2D(UPARAM(Ref) FVector2D& A, float X, float Y);
    
    UFUNCTION(BlueprintPure)
    static FVector SelectVector(FVector A, FVector B, bool bPickA);
    
    UFUNCTION(BlueprintPure)
    static FTransform SelectTransform(const FTransform& A, const FTransform& B, bool bPickA);
    
    UFUNCTION(BlueprintPure)
    static FString SelectString(const FString& A, const FString& B, bool bPickA);
    
    UFUNCTION(BlueprintPure)
    static FRotator SelectRotator(FRotator A, FRotator B, bool bPickA);
    
    UFUNCTION(BlueprintPure)
    static UObject* SelectObject(UObject* A, UObject* B, bool bSelectA);
    
    UFUNCTION(BlueprintPure)
    static int32 SelectInt(int32 A, int32 B, bool bPickA);
    
    UFUNCTION(BlueprintPure)
    static float SelectFloat(float A, float B, bool bPickA);
    
    UFUNCTION(BlueprintPure)
    static FLinearColor SelectColor(FLinearColor A, FLinearColor B, bool bPickA);
    
    UFUNCTION(BlueprintPure)
    static UClass* SelectClass(UClass* A, UClass* B, bool bSelectA);
    
    UFUNCTION(BlueprintCallable)
    static void SeedRandomStream(UPARAM(Ref) FRandomStream& Stream);
    
    UFUNCTION(BlueprintPure)
    static float SafeDivide(float A, float B);
    
    UFUNCTION(BlueprintPure)
    static int64 Round64(float A);
    
    UFUNCTION(BlueprintPure)
    static int32 Round(float A);
    
    UFUNCTION(BlueprintPure)
    static FRotator RotatorFromAxisAndAngle(FVector Axis, float Angle);
    
    UFUNCTION(BlueprintPure)
    static FVector RotateAngleAxis(FVector InVect, float AngleDeg, FVector Axis);
    
    UFUNCTION(BlueprintPure)
    static FRotator RLerp(FRotator A, FRotator B, float Alpha, bool bShortestPath);
    
    UFUNCTION(BlueprintPure)
    static FRotator RInterpTo_Constant(FRotator Current, FRotator Target, float DeltaTime, float InterpSpeed);
    
    UFUNCTION(BlueprintPure)
    static FRotator RInterpTo(FRotator Current, FRotator Target, float DeltaTime, float InterpSpeed);
    
    UFUNCTION(BlueprintPure)
    static void RGBToHSV_Vector(FLinearColor RGB, FLinearColor& HSV);
    
    UFUNCTION(BlueprintPure)
    static void RGBToHSV(FLinearColor InColor, float& H, float& S, float& V, float& A);
    
    UFUNCTION(BlueprintPure)
    static FLinearColor RGBLinearToHSV(FLinearColor RGB);
    
    UFUNCTION(BlueprintCallable)
    static void ResetVectorSpringState(UPARAM(Ref) FVectorSpringState& SpringState);
    
    UFUNCTION(BlueprintCallable)
    static void ResetRandomStream(const FRandomStream& Stream);
    
    UFUNCTION(BlueprintCallable)
    static void ResetFloatSpringState(UPARAM(Ref) FFloatSpringState& SpringState);
    
    UFUNCTION(BlueprintPure)
    static FRotator REase(FRotator A, FRotator B, float Alpha, bool bShortestPath, TEnumAsByte<EEasingFunc::Type> EasingFunc, float BlendExp, int32 Steps);
    
    UFUNCTION(BlueprintPure)
    static FVector RandomUnitVectorInEllipticalConeInRadiansFromStream(const FVector& ConeDir, float MaxYawInRadians, float MaxPitchInRadians, const FRandomStream& Stream);
    
    UFUNCTION(BlueprintPure)
    static FVector RandomUnitVectorInEllipticalConeInRadians(FVector ConeDir, float MaxYawInRadians, float MaxPitchInRadians);
    
    UFUNCTION(BlueprintPure)
    static FVector RandomUnitVectorInEllipticalConeInDegreesFromStream(const FVector& ConeDir, float MaxYawInDegrees, float MaxPitchInDegrees, const FRandomStream& Stream);
    
    UFUNCTION(BlueprintPure)
    static FVector RandomUnitVectorInEllipticalConeInDegrees(FVector ConeDir, float MaxYawInDegrees, float MaxPitchInDegrees);
    
    UFUNCTION(BlueprintPure)
    static FVector RandomUnitVectorInConeInRadiansFromStream(const FVector& ConeDir, float ConeHalfAngleInRadians, const FRandomStream& Stream);
    
    UFUNCTION(BlueprintPure)
    static FVector RandomUnitVectorInConeInRadians(FVector ConeDir, float ConeHalfAngleInRadians);
    
    UFUNCTION(BlueprintPure)
    static FVector RandomUnitVectorInConeInDegreesFromStream(const FVector& ConeDir, float ConeHalfAngleInDegrees, const FRandomStream& Stream);
    
    UFUNCTION(BlueprintPure)
    static FVector RandomUnitVectorInConeInDegrees(FVector ConeDir, float ConeHalfAngleInDegrees);
    
    UFUNCTION(BlueprintPure)
    static FVector RandomUnitVectorFromStream(const FRandomStream& Stream);
    
    UFUNCTION(BlueprintPure)
    static FVector RandomUnitVector();
    
    UFUNCTION(BlueprintPure)
    static FRotator RandomRotatorFromStream(bool bRoll, const FRandomStream& Stream);
    
    UFUNCTION(BlueprintPure)
    static FRotator RandomRotator(bool bRoll);
    
    UFUNCTION(BlueprintPure)
    static FVector RandomPointInBoundingBox(FVector Origin, FVector BoxExtent);
    
    UFUNCTION(BlueprintPure)
    static int32 RandomIntegerInRangeFromStream(int32 NewMin, int32 NewMax, const FRandomStream& Stream);
    
    UFUNCTION(BlueprintPure)
    static int32 RandomIntegerInRange(int32 NewMin, int32 NewMax);
    
    UFUNCTION(BlueprintPure)
    static int32 RandomIntegerFromStream(int32 NewMax, const FRandomStream& Stream);
    
    UFUNCTION(BlueprintPure)
    static int64 RandomInteger64InRange(int64 NewMin, int64 NewMax);
    
    UFUNCTION(BlueprintPure)
    static int64 RandomInteger64(int64 NewMax);
    
    UFUNCTION(BlueprintPure)
    static int32 RandomInteger(int32 NewMax);
    
    UFUNCTION(BlueprintPure)
    static float RandomFloatInRangeFromStream(float NewMin, float NewMax, const FRandomStream& Stream);
    
    UFUNCTION(BlueprintPure)
    static float RandomFloatInRange(float NewMin, float NewMax);
    
    UFUNCTION(BlueprintPure)
    static float RandomFloatFromStream(const FRandomStream& Stream);
    
    UFUNCTION(BlueprintPure)
    static float RandomFloat();
    
    UFUNCTION(BlueprintPure)
    static bool RandomBoolWithWeightFromStream(float Weight, const FRandomStream& RandomStream);
    
    UFUNCTION(BlueprintPure)
    static bool RandomBoolWithWeight(float Weight);
    
    UFUNCTION(BlueprintPure)
    static bool RandomBoolFromStream(const FRandomStream& Stream);
    
    UFUNCTION(BlueprintPure)
    static bool RandomBool();
    
    UFUNCTION(BlueprintPure)
    static float RadiansToDegrees(float A);
    
    UFUNCTION(BlueprintPure)
    static FVector Quat_VectorUp(const FQuat& Q);
    
    UFUNCTION(BlueprintPure)
    static FVector Quat_VectorRight(const FQuat& Q);
    
    UFUNCTION(BlueprintPure)
    static FVector Quat_VectorForward(const FQuat& Q);
    
    UFUNCTION(BlueprintPure)
    static FVector Quat_UnrotateVector(const FQuat& Q, const FVector& V);
    
    UFUNCTION(BlueprintPure)
    static float Quat_SizeSquared(const FQuat& Q);
    
    UFUNCTION(BlueprintPure)
    static float Quat_Size(const FQuat& Q);
    
    UFUNCTION(BlueprintCallable)
    static void Quat_SetFromEuler(UPARAM(Ref) FQuat& Q, const FVector& Euler);
    
    UFUNCTION(BlueprintCallable)
    static void Quat_SetComponents(UPARAM(Ref) FQuat& Q, float X, float Y, float Z, float W);
    
    UFUNCTION(BlueprintPure)
    static FRotator Quat_Rotator(const FQuat& Q);
    
    UFUNCTION(BlueprintPure)
    static FVector Quat_RotateVector(const FQuat& Q, const FVector& V);
    
    UFUNCTION(BlueprintPure)
    static FQuat Quat_Normalized(const FQuat& Q, float Tolerance);
    
    UFUNCTION(BlueprintCallable)
    static void Quat_Normalize(UPARAM(Ref) FQuat& Q, float Tolerance);
    
    UFUNCTION(BlueprintPure)
    static FQuat Quat_MakeFromEuler(const FVector& Euler);
    
    UFUNCTION(BlueprintPure)
    static FQuat Quat_Log(const FQuat& Q);
    
    UFUNCTION(BlueprintPure)
    static bool Quat_IsNormalized(const FQuat& Q);
    
    UFUNCTION(BlueprintPure)
    static bool Quat_IsNonFinite(const FQuat& Q);
    
    UFUNCTION(BlueprintPure)
    static bool Quat_IsIdentity(const FQuat& Q, float Tolerance);
    
    UFUNCTION(BlueprintPure)
    static bool Quat_IsFinite(const FQuat& Q);
    
    UFUNCTION(BlueprintPure)
    static FQuat Quat_Inversed(const FQuat& Q);
    
    UFUNCTION(BlueprintPure)
    static FQuat Quat_Identity();
    
    UFUNCTION(BlueprintPure)
    static FVector Quat_GetRotationAxis(const FQuat& Q);
    
    UFUNCTION(BlueprintPure)
    static FVector Quat_GetAxisZ(const FQuat& Q);
    
    UFUNCTION(BlueprintPure)
    static FVector Quat_GetAxisY(const FQuat& Q);
    
    UFUNCTION(BlueprintPure)
    static FVector Quat_GetAxisX(const FQuat& Q);
    
    UFUNCTION(BlueprintPure)
    static float Quat_GetAngle(const FQuat& Q);
    
    UFUNCTION(BlueprintPure)
    static FQuat Quat_Exp(const FQuat& Q);
    
    UFUNCTION(BlueprintPure)
    static FVector Quat_Euler(const FQuat& Q);
    
    UFUNCTION(BlueprintCallable)
    static void Quat_EnforceShortestArcWith(UPARAM(Ref) FQuat& A, const FQuat& B);
    
    UFUNCTION(BlueprintPure)
    static float Quat_AngularDistance(const FQuat& A, const FQuat& B);
    
    UFUNCTION(BlueprintPure)
    static FVector ProjectVectorOnToVector(FVector V, FVector Target);
    
    UFUNCTION(BlueprintPure)
    static FVector ProjectVectorOnToPlane(FVector V, FVector PlaneNormal);
    
    UFUNCTION(BlueprintPure)
    static FVector ProjectPointOnToPlane(FVector Point, FVector PlaneBase, FVector PlaneNormal);
    
    UFUNCTION(BlueprintPure)
    static bool PointsAreCoplanar(const TArray<FVector>& Points, float Tolerance);
    
    UFUNCTION(BlueprintPure)
    static float PerlinNoise1D(const float Value);
    
    UFUNCTION(BlueprintPure)
    static int32 Percent_IntInt(int32 A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static float Percent_FloatFloat(float A, float B);
    
    UFUNCTION(BlueprintPure)
    static uint8 Percent_ByteByte(uint8 A, uint8 B);
    
    UFUNCTION(BlueprintPure)
    static int32 Or_IntInt(int32 A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static int64 Or_Int64Int64(int64 A, int64 B);
    
    UFUNCTION(BlueprintPure)
    static FDateTime Now();
    
    UFUNCTION(BlueprintPure)
    static bool NotEqualExactly_VectorVector(FVector A, FVector B);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqualExactly_Vector4Vector4(const FVector4& A, const FVector4& B);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqualExactly_Vector2DVector2D(FVector2D A, FVector2D B);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_VectorVector(FVector A, FVector B, float ErrorTolerance);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_Vector4Vector4(const FVector4& A, const FVector4& B, float ErrorTolerance);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_Vector2DVector2D(FVector2D A, FVector2D B, float ErrorTolerance);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_TimespanTimespan(FTimespan A, FTimespan B);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_RotatorRotator(FRotator A, FRotator B, float ErrorTolerance);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_QuatQuat(const FQuat& A, const FQuat& B, float ErrorTolerance);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_ObjectObject(UObject* A, UObject* B);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_NameName(FName A, FName B);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_MatrixMatrix(const FMatrix& A, const FMatrix& B, float Tolerance);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_LinearColorLinearColor(FLinearColor A, FLinearColor B);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_IntPointIntPoint(FIntPoint A, FIntPoint B);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_IntInt(int32 A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_Int64Int64(int64 A, int64 B);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_FloatFloat(float A, float B);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_DateTimeDateTime(FDateTime A, FDateTime B);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_ClassClass(UClass* A, UClass* B);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_ByteByte(uint8 A, uint8 B);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_BoolBool(bool A, bool B);
    
    UFUNCTION(BlueprintPure)
    static bool Not_PreBool(bool A);
    
    UFUNCTION(BlueprintPure)
    static int64 Not_Int64(int64 A);
    
    UFUNCTION(BlueprintPure)
    static int32 Not_Int(int32 A);
    
    UFUNCTION(BlueprintPure)
    static FVector2D NormalSafe2D(FVector2D A, float Tolerance);
    
    UFUNCTION(BlueprintPure)
    static float NormalizeToRange(float Value, float RangeMin, float RangeMax);
    
    UFUNCTION(BlueprintPure)
    static FRotator NormalizedDeltaRotator(FRotator A, FRotator B);
    
    UFUNCTION(BlueprintPure)
    static float NormalizeAxis(float Angle);
    
    UFUNCTION(BlueprintCallable)
    static void Normalize2D(UPARAM(Ref) FVector2D& A, float Tolerance);
    
    UFUNCTION(BlueprintPure)
    static FVector2D Normal2D(FVector2D A);
    
    UFUNCTION(BlueprintPure)
    static FVector Normal(FVector A, float Tolerance);
    
    UFUNCTION(BlueprintPure)
    static FVector NegateVector(FVector A);
    
    UFUNCTION(BlueprintPure)
    static FRotator NegateRotator(FRotator A);
    
    UFUNCTION(BlueprintPure)
    static FVector2D Negated2D(const FVector2D& A);
    
    UFUNCTION(BlueprintPure)
    static bool NearlyEqual_TransformTransform(const FTransform& A, const FTransform& B, float LocationTolerance, float RotationTolerance, float Scale3DTolerance);
    
    UFUNCTION(BlueprintPure)
    static bool NearlyEqual_FloatFloat(float A, float B, float ErrorTolerance);
    
    UFUNCTION(BlueprintPure)
    static float MultiplyMultiply_FloatFloat(float Base, float NewExp);
    
    UFUNCTION(BlueprintPure)
    static float MultiplyByPi(float Value);
    
    UFUNCTION(BlueprintPure)
    static FVector Multiply_VectorVector(FVector A, FVector B);
    
    UFUNCTION(BlueprintPure)
    static FVector Multiply_VectorInt(FVector A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static FVector Multiply_VectorFloat(FVector A, float B);
    
    UFUNCTION(BlueprintPure)
    static FVector4 Multiply_Vector4Vector4(const FVector4& A, const FVector4& B);
    
    UFUNCTION(BlueprintPure)
    static FVector2D Multiply_Vector2DVector2D(FVector2D A, FVector2D B);
    
    UFUNCTION(BlueprintPure)
    static FVector2D Multiply_Vector2DFloat(FVector2D A, float B);
    
    UFUNCTION(BlueprintPure)
    static FTimespan Multiply_TimespanFloat(FTimespan A, float Scalar);
    
    UFUNCTION(BlueprintPure)
    static FRotator Multiply_RotatorInt(FRotator A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static FRotator Multiply_RotatorFloat(FRotator A, float B);
    
    UFUNCTION(BlueprintPure)
    static FQuat Multiply_QuatQuat(const FQuat& A, const FQuat& B);
    
    UFUNCTION(BlueprintPure)
    static FMatrix Multiply_MatrixMatrix(const FMatrix& A, const FMatrix& B);
    
    UFUNCTION(BlueprintPure)
    static FMatrix Multiply_MatrixFloat(const FMatrix& A, float B);
    
    UFUNCTION(BlueprintPure)
    static FLinearColor Multiply_LinearColorLinearColor(FLinearColor A, FLinearColor B);
    
    UFUNCTION(BlueprintPure)
    static FLinearColor Multiply_LinearColorFloat(FLinearColor A, float B);
    
    UFUNCTION(BlueprintPure)
    static FIntPoint Multiply_IntPointIntPoint(FIntPoint A, FIntPoint B);
    
    UFUNCTION(BlueprintPure)
    static FIntPoint Multiply_IntPointInt(FIntPoint A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static int32 Multiply_IntInt(int32 A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static float Multiply_IntFloat(int32 A, float B);
    
    UFUNCTION(BlueprintPure)
    static int64 Multiply_Int64Int64(int64 A, int64 B);
    
    UFUNCTION(BlueprintPure)
    static float Multiply_FloatFloat(float A, float B);
    
    UFUNCTION(BlueprintPure)
    static uint8 Multiply_ByteByte(uint8 A, uint8 B);
    
    UFUNCTION(BlueprintPure)
    static FVector MirrorVectorByNormal(FVector InVect, FVector InNormal);
    
    UFUNCTION(BlueprintPure)
    static void MinOfIntArray(const TArray<int32>& IntArray, int32& IndexOfMinValue, int32& MinValue);
    
    UFUNCTION(BlueprintPure)
    static void MinOfFloatArray(const TArray<float>& FloatArray, int32& IndexOfMinValue, float& MinValue);
    
    UFUNCTION(BlueprintPure)
    static void MinOfByteArray(const TArray<uint8>& ByteArray, int32& IndexOfMinValue, uint8& MinValue);
    
    UFUNCTION(BlueprintPure)
    static int64 MinInt64(int64 A, int64 B);
    
    UFUNCTION(BlueprintCallable)
    static void MinimumAreaRectangle(UObject* WorldContextObject, const TArray<FVector>& InVerts, const FVector& SampleSurfaceNormal, FVector& OutRectCenter, FRotator& OutRectRotation, float& OutSideLengthX, float& OutSideLengthY, bool bDebugDraw);
    
    UFUNCTION(BlueprintPure)
    static int32 Min(int32 A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static void MaxOfIntArray(const TArray<int32>& IntArray, int32& IndexOfMaxValue, int32& MaxValue);
    
    UFUNCTION(BlueprintPure)
    static void MaxOfFloatArray(const TArray<float>& FloatArray, int32& IndexOfMaxValue, float& MaxValue);
    
    UFUNCTION(BlueprintPure)
    static void MaxOfByteArray(const TArray<uint8>& ByteArray, int32& IndexOfMaxValue, uint8& MaxValue);
    
    UFUNCTION(BlueprintPure)
    static int64 MaxInt64(int64 A, int64 B);
    
    UFUNCTION(BlueprintPure)
    static int32 Max(int32 A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static FVector4 Matrix_TransformVector4(const FMatrix& M, FVector4 V);
    
    UFUNCTION(BlueprintPure)
    static FVector4 Matrix_TransformVector(const FMatrix& M, FVector V);
    
    UFUNCTION(BlueprintPure)
    static FVector4 Matrix_TransformPosition(const FMatrix& M, FVector V);
    
    UFUNCTION(BlueprintPure)
    static FQuat Matrix_ToQuat(const FMatrix& M);
    
    UFUNCTION(BlueprintCallable)
    static void Matrix_SetOrigin(UPARAM(Ref) FMatrix& M, FVector NewOrigin);
    
    UFUNCTION(BlueprintCallable)
    static void Matrix_SetColumn(UPARAM(Ref) FMatrix& M, TEnumAsByte<EMatrixColumns::Type> Column, FVector Value);
    
    UFUNCTION(BlueprintCallable)
    static void Matrix_SetAxis(UPARAM(Ref) FMatrix& M, TEnumAsByte<EAxis::Type> Axis, FVector AxisVector);
    
    UFUNCTION(BlueprintPure)
    static FMatrix Matrix_ScaleTranslation(const FMatrix& M, FVector Scale3D);
    
    UFUNCTION(BlueprintPure)
    static FMatrix Matrix_RemoveTranslation(const FMatrix& M);
    
    UFUNCTION(BlueprintCallable)
    static void Matrix_RemoveScaling(UPARAM(Ref) FMatrix& M, float Tolerance);
    
    UFUNCTION(BlueprintPure)
    static FMatrix Matrix_Mirror(const FMatrix& M, TEnumAsByte<EAxis::Type> MirrorAxis, TEnumAsByte<EAxis::Type> FlipAxis);
    
    UFUNCTION(BlueprintPure)
    static FVector Matrix_InverseTransformVector(const FMatrix& M, FVector V);
    
    UFUNCTION(BlueprintPure)
    static FVector Matrix_InverseTransformPosition(const FMatrix& M, FVector V);
    
    UFUNCTION(BlueprintPure)
    static FMatrix Matrix_Identity();
    
    UFUNCTION(BlueprintPure)
    static FVector Matrix_GetUnitAxis(const FMatrix& M, TEnumAsByte<EAxis::Type> Axis);
    
    UFUNCTION(BlueprintPure)
    static void Matrix_GetUnitAxes(const FMatrix& M, FVector& X, FVector& Y, FVector& Z);
    
    UFUNCTION(BlueprintPure)
    static FMatrix Matrix_GetTransposed(const FMatrix& M);
    
    UFUNCTION(BlueprintPure)
    static FMatrix Matrix_GetTransposeAdjoint(const FMatrix& M);
    
    UFUNCTION(BlueprintPure)
    static FVector Matrix_GetScaleVector(const FMatrix& M, float Tolerance);
    
    UFUNCTION(BlueprintPure)
    static FVector Matrix_GetScaledAxis(const FMatrix& M, TEnumAsByte<EAxis::Type> Axis);
    
    UFUNCTION(BlueprintPure)
    static void Matrix_GetScaledAxes(const FMatrix& M, FVector& X, FVector& Y, FVector& Z);
    
    UFUNCTION(BlueprintPure)
    static float Matrix_GetRotDeterminant(const FMatrix& M);
    
    UFUNCTION(BlueprintPure)
    static FRotator Matrix_GetRotator(const FMatrix& M);
    
    UFUNCTION(BlueprintPure)
    static FVector Matrix_GetOrigin(const FMatrix& InMatrix);
    
    UFUNCTION(BlueprintPure)
    static float Matrix_GetMaximumAxisScale(const FMatrix& M);
    
    UFUNCTION(BlueprintPure)
    static FMatrix Matrix_GetMatrixWithoutScale(const FMatrix& M, float Tolerance);
    
    UFUNCTION(BlueprintPure)
    static FMatrix Matrix_GetInverse(const FMatrix& M);
    
    UFUNCTION(BlueprintPure)
    static bool Matrix_GetFrustumTopPlane(const FMatrix& M, FPlane& OutPlane);
    
    UFUNCTION(BlueprintPure)
    static bool Matrix_GetFrustumRightPlane(const FMatrix& M, FPlane& OutPlane);
    
    UFUNCTION(BlueprintPure)
    static bool Matrix_GetFrustumNearPlane(const FMatrix& M, FPlane& OutPlane);
    
    UFUNCTION(BlueprintPure)
    static bool Matrix_GetFrustumLeftPlane(const FMatrix& M, FPlane& OutPlane);
    
    UFUNCTION(BlueprintPure)
    static bool Matrix_GetFrustumFarPlane(const FMatrix& M, FPlane& OutPlane);
    
    UFUNCTION(BlueprintPure)
    static bool Matrix_GetFrustumBottomPlane(const FMatrix& M, FPlane& OutPlane);
    
    UFUNCTION(BlueprintPure)
    static float Matrix_GetDeterminant(const FMatrix& M);
    
    UFUNCTION(BlueprintPure)
    static FVector Matrix_GetColumn(const FMatrix& M, TEnumAsByte<EMatrixColumns::Type> Column);
    
    UFUNCTION(BlueprintPure)
    static bool Matrix_ContainsNaN(const FMatrix& M);
    
    UFUNCTION(BlueprintPure)
    static FMatrix Matrix_ConcatenateTranslation(const FMatrix& M, FVector Translation);
    
    UFUNCTION(BlueprintPure)
    static FMatrix Matrix_ApplyScale(const FMatrix& M, float Scale);
    
    UFUNCTION(BlueprintPure)
    static float MapRangeUnclamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);
    
    UFUNCTION(BlueprintPure)
    static float MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);
    
    UFUNCTION(BlueprintPure)
    static FVector4 MakeVector4(float X, float Y, float Z, float W);
    
    UFUNCTION(BlueprintPure)
    static FVector2D MakeVector2D(float X, float Y);
    
    UFUNCTION(BlueprintPure)
    static FVector MakeVector(float X, float Y, float Z);
    
    UFUNCTION(BlueprintPure)
    static FTransform MakeTransform(FVector Location, FRotator Rotation, FVector Scale);
    
    UFUNCTION(BlueprintPure)
    static FTimespan MakeTimespan2(int32 Days, int32 Hours, int32 Minutes, int32 Seconds, int32 FractionNano);
    
    UFUNCTION(BlueprintPure)
    static FTimespan MakeTimespan(int32 Days, int32 Hours, int32 Minutes, int32 Seconds, int32 MilliSeconds);
    
    UFUNCTION(BlueprintPure)
    static FRotator MakeRotFromZY(const FVector& Z, const FVector& Y);
    
    UFUNCTION(BlueprintPure)
    static FRotator MakeRotFromZX(const FVector& Z, const FVector& X);
    
    UFUNCTION(BlueprintPure)
    static FRotator MakeRotFromZ(const FVector& Z);
    
    UFUNCTION(BlueprintPure)
    static FRotator MakeRotFromYZ(const FVector& Y, const FVector& Z);
    
    UFUNCTION(BlueprintPure)
    static FRotator MakeRotFromYX(const FVector& Y, const FVector& X);
    
    UFUNCTION(BlueprintPure)
    static FRotator MakeRotFromY(const FVector& Y);
    
    UFUNCTION(BlueprintPure)
    static FRotator MakeRotFromXZ(const FVector& X, const FVector& Z);
    
    UFUNCTION(BlueprintPure)
    static FRotator MakeRotFromXY(const FVector& X, const FVector& Y);
    
    UFUNCTION(BlueprintPure)
    static FRotator MakeRotFromX(const FVector& X);
    
    UFUNCTION(BlueprintPure)
    static FRotator MakeRotator(float Roll, float Pitch, float Yaw);
    
    UFUNCTION(BlueprintPure)
    static FRotator MakeRotationFromAxes(FVector Forward, FVector Right, FVector Up);
    
    UFUNCTION(BlueprintPure)
    static FTransform MakeRelativeTransform(const FTransform& A, const FTransform& RelativeTo);
    
    UFUNCTION(BlueprintPure)
    static FRandomStream MakeRandomStream(int32 InitialSeed);
    
    UFUNCTION(BlueprintPure)
    static FQualifiedFrameTime MakeQualifiedFrameTime(FFrameNumber Frame, FFrameRate FrameRate, float SubFrame);
    
    UFUNCTION(BlueprintPure)
    static float MakePulsatingValue(float InCurrentTime, float InPulsesPerSecond, float InPhase);
    
    UFUNCTION(BlueprintPure)
    static FPlane MakePlaneFromPointAndNormal(FVector Point, FVector NewNormal);
    
    UFUNCTION(BlueprintPure)
    static FFrameRate MakeFrameRate(int32 Numerator, int32 Denominator);
    
    UFUNCTION(BlueprintPure)
    static FDateTime MakeDateTime(int32 Year, int32 Month, int32 Day, int32 Hour, int32 Minute, int32 Second, int32 Millisecond);
    
    UFUNCTION(BlueprintPure)
    static FLinearColor MakeColor(float R, float G, float B, float A);
    
    UFUNCTION(BlueprintPure)
    static FBox2D MakeBox2D(FVector2D NewMin, FVector2D NewMax);
    
    UFUNCTION(BlueprintPure)
    static FBox MakeBox(FVector NewMin, FVector NewMax);
    
    UFUNCTION(BlueprintPure)
    static float Loge(float A);
    
    UFUNCTION(BlueprintPure)
    static float Log(float A, float Base);
    
    UFUNCTION(BlueprintPure)
    static bool LinePlaneIntersection_OriginNormal(const FVector& LineStart, const FVector& LineEnd, FVector PlaneOrigin, FVector PlaneNormal, float& T, FVector& Intersection);
    
    UFUNCTION(BlueprintPure)
    static bool LinePlaneIntersection(const FVector& LineStart, const FVector& LineEnd, const FPlane& APlane, float& T, FVector& Intersection);
    
    UFUNCTION(BlueprintPure)
    static FLinearColor LinearColorLerpUsingHSV(FLinearColor A, FLinearColor B, float Alpha);
    
    UFUNCTION(BlueprintPure)
    static FLinearColor LinearColorLerp(FLinearColor A, FLinearColor B, float Alpha);
    
    UFUNCTION(BlueprintPure)
    static FLinearColor LinearColor_Yellow();
    
    UFUNCTION(BlueprintPure)
    static FLinearColor LinearColor_White();
    
    UFUNCTION(BlueprintPure)
    static FLinearColor LinearColor_Transparent();
    
    UFUNCTION(BlueprintPure)
    static FColor LinearColor_ToRGBE(FLinearColor InLinearColor);
    
    UFUNCTION(BlueprintPure)
    static FLinearColor LinearColor_ToNewOpacity(FLinearColor InColor, float InOpacity);
    
    UFUNCTION(BlueprintCallable)
    static void LinearColor_SetTemperature(UPARAM(Ref) FLinearColor& InOutColor, float InTemperature);
    
    UFUNCTION(BlueprintCallable)
    static void LinearColor_SetRGBA(UPARAM(Ref) FLinearColor& InOutColor, float R, float G, float B, float A);
    
    UFUNCTION(BlueprintCallable)
    static void LinearColor_SetRandomHue(UPARAM(Ref) FLinearColor& InOutColor);
    
    UFUNCTION(BlueprintCallable)
    static void LinearColor_SetFromSRGB(UPARAM(Ref) FLinearColor& InOutColor, const FColor& InSRGB);
    
    UFUNCTION(BlueprintCallable)
    static void LinearColor_SetFromPow22(UPARAM(Ref) FLinearColor& InOutColor, const FColor& InColor);
    
    UFUNCTION(BlueprintCallable)
    static void LinearColor_SetFromHSV(UPARAM(Ref) FLinearColor& InOutColor, float H, float S, float V, float A);
    
    UFUNCTION(BlueprintCallable)
    static void LinearColor_Set(UPARAM(Ref) FLinearColor& InOutColor, FLinearColor InColor);
    
    UFUNCTION(BlueprintPure)
    static FLinearColor LinearColor_Red();
    
    UFUNCTION(BlueprintPure)
    static FColor LinearColor_QuantizeRound(FLinearColor InColor);
    
    UFUNCTION(BlueprintPure)
    static FColor LinearColor_Quantize(FLinearColor InColor);
    
    UFUNCTION(BlueprintPure)
    static bool LinearColor_IsNearEqual(FLinearColor A, FLinearColor B, float Tolerance);
    
    UFUNCTION(BlueprintPure)
    static FLinearColor LinearColor_Green();
    
    UFUNCTION(BlueprintPure)
    static FLinearColor LinearColor_Gray();
    
    UFUNCTION(BlueprintPure)
    static float LinearColor_GetMin(FLinearColor InColor);
    
    UFUNCTION(BlueprintPure)
    static float LinearColor_GetMax(FLinearColor InColor);
    
    UFUNCTION(BlueprintPure)
    static float LinearColor_GetLuminance(FLinearColor InColor);
    
    UFUNCTION(BlueprintPure)
    static float LinearColor_Distance(FLinearColor C1, FLinearColor C2);
    
    UFUNCTION(BlueprintPure)
    static FLinearColor LinearColor_Desaturated(FLinearColor InColor, float InDesaturation);
    
    UFUNCTION(BlueprintPure)
    static FLinearColor LinearColor_Blue();
    
    UFUNCTION(BlueprintPure)
    static FLinearColor LinearColor_Black();
    
    UFUNCTION(BlueprintPure)
    static FVector LessLess_VectorRotator(FVector A, FRotator B);
    
    UFUNCTION(BlueprintPure)
    static bool LessEqual_TimespanTimespan(FTimespan A, FTimespan B);
    
    UFUNCTION(BlueprintPure)
    static bool LessEqual_IntInt(int32 A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static bool LessEqual_Int64Int64(int64 A, int64 B);
    
    UFUNCTION(BlueprintPure)
    static bool LessEqual_FloatFloat(float A, float B);
    
    UFUNCTION(BlueprintPure)
    static bool LessEqual_DateTimeDateTime(FDateTime A, FDateTime B);
    
    UFUNCTION(BlueprintPure)
    static bool LessEqual_ByteByte(uint8 A, uint8 B);
    
    UFUNCTION(BlueprintPure)
    static bool Less_TimespanTimespan(FTimespan A, FTimespan B);
    
    UFUNCTION(BlueprintPure)
    static bool Less_IntInt(int32 A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static bool Less_Int64Int64(int64 A, int64 B);
    
    UFUNCTION(BlueprintPure)
    static bool Less_FloatFloat(float A, float B);
    
    UFUNCTION(BlueprintPure)
    static bool Less_DateTimeDateTime(FDateTime A, FDateTime B);
    
    UFUNCTION(BlueprintPure)
    static bool Less_ByteByte(uint8 A, uint8 B);
    
    UFUNCTION(BlueprintPure)
    static float Lerp(float A, float B, float Alpha);
    
    UFUNCTION(BlueprintPure)
    static bool IsZero2D(const FVector2D& A);
    
    UFUNCTION(BlueprintPure)
    static bool IsPointInBoxWithTransform(FVector Point, const FTransform& BoxWorldTransform, FVector BoxExtent);
    
    UFUNCTION(BlueprintPure)
    static bool IsPointInBox(FVector Point, FVector BoxOrigin, FVector BoxExtent);
    
    UFUNCTION(BlueprintPure)
    static bool IsNearlyZero2D(const FVector2D& A, float Tolerance);
    
    UFUNCTION(BlueprintPure)
    static bool IsMorning(FDateTime A);
    
    UFUNCTION(BlueprintPure)
    static bool IsLeapYear(int32 Year);
    
    UFUNCTION(BlueprintPure)
    static bool IsAfternoon(FDateTime A);
    
    UFUNCTION(BlueprintPure)
    static FTransform InvertTransform(const FTransform& T);
    
    UFUNCTION(BlueprintPure)
    static FRotator InverseTransformRotation(const FTransform& T, FRotator Rotation);
    
    UFUNCTION(BlueprintPure)
    static FVector InverseTransformLocation(const FTransform& T, FVector Location);
    
    UFUNCTION(BlueprintPure)
    static FVector InverseTransformDirection(const FTransform& T, FVector Direction);
    
    UFUNCTION(BlueprintPure)
    static FIntPoint IntPoint_Zero();
    
    UFUNCTION(BlueprintPure)
    static FIntPoint IntPoint_Up();
    
    UFUNCTION(BlueprintPure)
    static FIntPoint IntPoint_Right();
    
    UFUNCTION(BlueprintPure)
    static FIntPoint IntPoint_One();
    
    UFUNCTION(BlueprintPure)
    static FIntPoint IntPoint_Left();
    
    UFUNCTION(BlueprintPure)
    static FIntPoint IntPoint_Down();
    
    UFUNCTION(BlueprintPure)
    static bool InRange_IntInt(int32 Value, int32 NewMin, int32 NewMax, bool InclusiveMin, bool InclusiveMax);
    
    UFUNCTION(BlueprintPure)
    static bool InRange_Int64Int64(int64 Value, int64 NewMin, int64 NewMax, bool InclusiveMin, bool InclusiveMax);
    
    UFUNCTION(BlueprintPure)
    static bool InRange_FloatFloat(float Value, float NewMin, float NewMax, bool InclusiveMin, bool InclusiveMax);
    
    UFUNCTION(BlueprintPure)
    static float Hypotenuse(float Width, float Height);
    
    UFUNCTION(BlueprintPure)
    static FLinearColor HSVToRGBLinear(FLinearColor HSV);
    
    UFUNCTION(BlueprintPure)
    static void HSVToRGB_Vector(FLinearColor HSV, FLinearColor& RGB);
    
    UFUNCTION(BlueprintPure)
    static FLinearColor HSVToRGB(float H, float S, float V, float A);
    
    UFUNCTION(BlueprintPure)
    static float GridSnap_Float(float Location, float GridSize);
    
    UFUNCTION(BlueprintPure)
    static FVector GreaterGreater_VectorRotator(FVector A, FRotator B);
    
    UFUNCTION(BlueprintPure)
    static bool GreaterEqual_TimespanTimespan(FTimespan A, FTimespan B);
    
    UFUNCTION(BlueprintPure)
    static bool GreaterEqual_IntInt(int32 A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static bool GreaterEqual_Int64Int64(int64 A, int64 B);
    
    UFUNCTION(BlueprintPure)
    static bool GreaterEqual_FloatFloat(float A, float B);
    
    UFUNCTION(BlueprintPure)
    static bool GreaterEqual_DateTimeDateTime(FDateTime A, FDateTime B);
    
    UFUNCTION(BlueprintPure)
    static bool GreaterEqual_ByteByte(uint8 A, uint8 B);
    
    UFUNCTION(BlueprintPure)
    static bool Greater_TimespanTimespan(FTimespan A, FTimespan B);
    
    UFUNCTION(BlueprintPure)
    static bool Greater_IntInt(int32 A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static bool Greater_Int64Int64(int64 A, int64 B);
    
    UFUNCTION(BlueprintPure)
    static bool Greater_FloatFloat(float A, float B);
    
    UFUNCTION(BlueprintPure)
    static bool Greater_DateTimeDateTime(FDateTime A, FDateTime B);
    
    UFUNCTION(BlueprintPure)
    static bool Greater_ByteByte(uint8 A, uint8 B);
    
    UFUNCTION(BlueprintPure)
    static int32 GetYear(FDateTime A);
    
    UFUNCTION(BlueprintPure)
    static void GetYawPitchFromVector(FVector InVec, float& Yaw, float& Pitch);
    
    UFUNCTION(BlueprintPure)
    static FVector GetVectorArrayAverage(const TArray<FVector>& Vectors);
    
    UFUNCTION(BlueprintPure)
    static FVector GetUpVector(FRotator InRot);
    
    UFUNCTION(BlueprintPure)
    static float GetTotalSeconds(FTimespan A);
    
    UFUNCTION(BlueprintPure)
    static float GetTotalMinutes(FTimespan A);
    
    UFUNCTION(BlueprintPure)
    static float GetTotalMilliseconds(FTimespan A);
    
    UFUNCTION(BlueprintPure)
    static float GetTotalHours(FTimespan A);
    
    UFUNCTION(BlueprintPure)
    static float GetTotalDays(FTimespan A);
    
    UFUNCTION(BlueprintPure)
    static FTimespan GetTimeOfDay(FDateTime A);
    
    UFUNCTION(BlueprintPure)
    static float GetTAU();
    
    UFUNCTION(BlueprintPure)
    static void GetSlopeDegreeAngles(const FVector& MyRightYAxis, const FVector& FloorNormal, const FVector& UpVector, float& OutSlopePitchDegreeAngle, float& OutSlopeRollDegreeAngle);
    
    UFUNCTION(BlueprintPure)
    static int32 GetSeconds(FTimespan A);
    
    UFUNCTION(BlueprintPure)
    static int32 GetSecond(FDateTime A);
    
    UFUNCTION(BlueprintPure)
    static FVector2D GetRotated2D(FVector2D A, float AngleDeg);
    
    UFUNCTION(BlueprintPure)
    static FVector GetRightVector(FRotator InRot);
    
    UFUNCTION(BlueprintPure)
    static FVector GetReflectionVector(FVector Direction, FVector SurfaceNormal);
    
    UFUNCTION(BlueprintPure)
    static float GetPointDistanceToSegment(FVector Point, FVector SegmentStart, FVector SegmentEnd);
    
    UFUNCTION(BlueprintPure)
    static float GetPointDistanceToLine(FVector Point, FVector LineOrigin, FVector LineDirection);
    
    UFUNCTION(BlueprintPure)
    static float GetPI();
    
    UFUNCTION(BlueprintPure)
    static int32 GetMonth(FDateTime A);
    
    UFUNCTION(BlueprintPure)
    static int32 GetMinutes(FTimespan A);
    
    UFUNCTION(BlueprintPure)
    static int32 GetMinute(FDateTime A);
    
    UFUNCTION(BlueprintPure)
    static float GetMinElement(FVector A);
    
    UFUNCTION(BlueprintPure)
    static float GetMin2D(FVector2D A);
    
    UFUNCTION(BlueprintPure)
    static int32 GetMilliseconds(FTimespan A);
    
    UFUNCTION(BlueprintPure)
    static int32 GetMillisecond(FDateTime A);
    
    UFUNCTION(BlueprintPure)
    static float GetMaxElement(FVector A);
    
    UFUNCTION(BlueprintPure)
    static float GetMax2D(FVector2D A);
    
    UFUNCTION(BlueprintPure)
    static int32 GetHours(FTimespan A);
    
    UFUNCTION(BlueprintPure)
    static int32 GetHour12(FDateTime A);
    
    UFUNCTION(BlueprintPure)
    static int32 GetHour(FDateTime A);
    
    UFUNCTION(BlueprintPure)
    static FVector GetForwardVector(FRotator InRot);
    
    UFUNCTION(BlueprintPure)
    static FTimespan GetDuration(FTimespan A);
    
    UFUNCTION(BlueprintPure)
    static FVector GetDirectionUnitVector(FVector From, FVector To);
    
    UFUNCTION(BlueprintPure)
    static int32 GetDays(FTimespan A);
    
    UFUNCTION(BlueprintPure)
    static int32 GetDayOfYear(FDateTime A);
    
    UFUNCTION(BlueprintPure)
    static int32 GetDay(FDateTime A);
    
    UFUNCTION(BlueprintPure)
    static FDateTime GetDate(FDateTime A);
    
    UFUNCTION(BlueprintPure)
    static void GetAzimuthAndElevation(FVector InDirection, const FTransform& ReferenceFrame, float& Azimuth, float& Elevation);
    
    UFUNCTION(BlueprintPure)
    static void GetAxes(FRotator A, FVector& X, FVector& Y, FVector& Z);
    
    UFUNCTION(BlueprintPure)
    static float GetAbsMax2D(FVector2D A);
    
    UFUNCTION(BlueprintPure)
    static FVector2D GetAbs2D(FVector2D A);
    
    UFUNCTION(BlueprintPure)
    static float FWrap(float Value, float NewMin, float NewMax);
    
    UFUNCTION(BlueprintPure)
    static FIntVector FTruncVector(const FVector& InVector);
    
    UFUNCTION(BlueprintPure)
    static int64 FTrunc64(float A);
    
    UFUNCTION(BlueprintPure)
    static int32 FTrunc(float A);
    
    UFUNCTION(BlueprintPure)
    static FTimespan FromSeconds(float Seconds);
    
    UFUNCTION(BlueprintPure)
    static FTimespan FromMinutes(float Minutes);
    
    UFUNCTION(BlueprintPure)
    static FTimespan FromMilliseconds(float MilliSeconds);
    
    UFUNCTION(BlueprintPure)
    static FTimespan FromHours(float Hours);
    
    UFUNCTION(BlueprintPure)
    static FTimespan FromDays(float Days);
    
    UFUNCTION(BlueprintPure)
    static float Fraction(float A);
    
    UFUNCTION(BlueprintPure)
    static int32 FMod(float Dividend, float Divisor, float& Remainder);
    
    UFUNCTION(BlueprintPure)
    static float FMin(float A, float B);
    
    UFUNCTION(BlueprintPure)
    static float FMax(float A, float B);
    
    UFUNCTION(BlueprintCallable)
    static float FloatSpringInterp(float Current, float Target, UPARAM(Ref) FFloatSpringState& SpringState, float Stiffness, float CriticalDampingFactor, float DeltaTime, float Mass);
    
    UFUNCTION(BlueprintPure)
    static float FixedTurn(float InCurrent, float InDesired, float InDeltaRate);
    
    UFUNCTION(BlueprintPure)
    static float FInterpTo_Constant(float Current, float Target, float DeltaTime, float InterpSpeed);
    
    UFUNCTION(BlueprintPure)
    static float FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed);
    
    UFUNCTION(BlueprintPure)
    static float FInterpEaseInOut(float A, float B, float Alpha, float Exponent);
    
    UFUNCTION(BlueprintPure)
    static void FindNearestPointsOnLineSegments(FVector Segment1Start, FVector Segment1End, FVector Segment2Start, FVector Segment2End, FVector& Segment1Point, FVector& Segment2Point);
    
    UFUNCTION(BlueprintPure)
    static FRotator FindLookAtRotation(const FVector& Start, const FVector& Target);
    
    UFUNCTION(BlueprintPure)
    static FVector FindClosestPointOnSegment(FVector Point, FVector SegmentStart, FVector SegmentEnd);
    
    UFUNCTION(BlueprintPure)
    static FVector FindClosestPointOnLine(FVector Point, FVector LineOrigin, FVector LineDirection);
    
    UFUNCTION(BlueprintPure)
    static int64 FFloor64(float A);
    
    UFUNCTION(BlueprintPure)
    static int32 FFloor(float A);
    
    UFUNCTION(BlueprintPure)
    static float FClamp(float Value, float NewMin, float NewMax);
    
    UFUNCTION(BlueprintPure)
    static int64 FCeil64(float A);
    
    UFUNCTION(BlueprintPure)
    static int32 FCeil(float A);
    
    UFUNCTION(BlueprintPure)
    static float Exp(float A);
    
    UFUNCTION(BlueprintPure)
    static bool EqualExactly_VectorVector(FVector A, FVector B);
    
    UFUNCTION(BlueprintPure)
    static bool EqualExactly_Vector4Vector4(const FVector4& A, const FVector4& B);
    
    UFUNCTION(BlueprintPure)
    static bool EqualExactly_Vector2DVector2D(FVector2D A, FVector2D B);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_VectorVector(FVector A, FVector B, float ErrorTolerance);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_Vector4Vector4(const FVector4& A, const FVector4& B, float ErrorTolerance);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_Vector2DVector2D(FVector2D A, FVector2D B, float ErrorTolerance);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_TransformTransform(const FTransform& A, const FTransform& B);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_TimespanTimespan(FTimespan A, FTimespan B);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_RotatorRotator(FRotator A, FRotator B, float ErrorTolerance);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_QuatQuat(const FQuat& A, const FQuat& B, float Tolerance);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_ObjectObject(UObject* A, UObject* B);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_NameName(FName A, FName B);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_MatrixMatrix(const FMatrix& A, const FMatrix& B, float Tolerance);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_LinearColorLinearColor(FLinearColor A, FLinearColor B);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_IntInt(int32 A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_Int64Int64(int64 A, int64 B);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_FloatFloat(float A, float B);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_DateTimeDateTime(FDateTime A, FDateTime B);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_ClassClass(UClass* A, UClass* B);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_ByteByte(uint8 A, uint8 B);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_BoolBool(bool A, bool B);
    
    UFUNCTION(BlueprintPure)
    static bool Equal_IntPointIntPoint(FIntPoint A, FIntPoint B);
    
    UFUNCTION(BlueprintPure)
    static float Ease(float A, float B, float Alpha, TEnumAsByte<EEasingFunc::Type> EasingFunc, float BlendExp, int32 Steps);
    
    UFUNCTION(BlueprintPure)
    static FVector DynamicWeightedMovingAverage_FVector(FVector CurrentSample, FVector PreviousSample, float MaxDistance, float MinWeight, float MaxWeight);
    
    UFUNCTION(BlueprintPure)
    static FRotator DynamicWeightedMovingAverage_FRotator(FRotator CurrentSample, FRotator PreviousSample, float MaxDistance, float MinWeight, float MaxWeight);
    
    UFUNCTION(BlueprintPure)
    static float DynamicWeightedMovingAverage_Float(float CurrentSample, float PreviousSample, float MaxDistance, float MinWeight, float MaxWeight);
    
    UFUNCTION(BlueprintPure)
    static float DotProduct2D(FVector2D A, FVector2D B);
    
    UFUNCTION(BlueprintPure)
    static float Dot_VectorVector(FVector A, FVector B);
    
    UFUNCTION(BlueprintPure)
    static FVector Divide_VectorVector(FVector A, FVector B);
    
    UFUNCTION(BlueprintPure)
    static FVector Divide_VectorInt(FVector A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static FVector Divide_VectorFloat(FVector A, float B);
    
    UFUNCTION(BlueprintPure)
    static FVector4 Divide_Vector4Vector4(const FVector4& A, const FVector4& B);
    
    UFUNCTION(BlueprintPure)
    static FVector2D Divide_Vector2DVector2D(FVector2D A, FVector2D B);
    
    UFUNCTION(BlueprintPure)
    static FVector2D Divide_Vector2DFloat(FVector2D A, float B);
    
    UFUNCTION(BlueprintPure)
    static FTimespan Divide_TimespanFloat(FTimespan A, float Scalar);
    
    UFUNCTION(BlueprintPure)
    static FLinearColor Divide_LinearColorLinearColor(FLinearColor A, FLinearColor B);
    
    UFUNCTION(BlueprintPure)
    static FIntPoint Divide_IntPointIntPoint(FIntPoint A, FIntPoint B);
    
    UFUNCTION(BlueprintPure)
    static FIntPoint Divide_IntPointInt(FIntPoint A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static int32 Divide_IntInt(int32 A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static int64 Divide_Int64Int64(int64 A, int64 B);
    
    UFUNCTION(BlueprintPure)
    static float Divide_FloatFloat(float A, float B);
    
    UFUNCTION(BlueprintPure)
    static uint8 Divide_ByteByte(uint8 A, uint8 B);
    
    UFUNCTION(BlueprintPure)
    static float DistanceSquared2D(FVector2D v1, FVector2D v2);
    
    UFUNCTION(BlueprintPure)
    static float Distance2D(FVector2D v1, FVector2D v2);
    
    UFUNCTION(BlueprintPure)
    static float DegTan(float A);
    
    UFUNCTION(BlueprintPure)
    static float DegSin(float A);
    
    UFUNCTION(BlueprintPure)
    static float DegreesToRadians(float A);
    
    UFUNCTION(BlueprintPure)
    static float DegCos(float A);
    
    UFUNCTION(BlueprintPure)
    static float DegAtan2(float Y, float X);
    
    UFUNCTION(BlueprintPure)
    static float DegAtan(float A);
    
    UFUNCTION(BlueprintPure)
    static float DegAsin(float A);
    
    UFUNCTION(BlueprintPure)
    static float DegAcos(float A);
    
    UFUNCTION(BlueprintPure)
    static int32 DaysInYear(int32 Year);
    
    UFUNCTION(BlueprintPure)
    static int32 DaysInMonth(int32 Year, int32 Month);
    
    UFUNCTION(BlueprintPure)
    static FDateTime DateTimeMinValue();
    
    UFUNCTION(BlueprintPure)
    static FDateTime DateTimeMaxValue();
    
    UFUNCTION(BlueprintPure)
    static bool DateTimeFromString(const FString& DateTimeString, FDateTime& Result);
    
    UFUNCTION(BlueprintPure)
    static bool DateTimeFromIsoString(const FString& IsoString, FDateTime& Result);
    
    UFUNCTION(BlueprintPure)
    static float CrossProduct2D(FVector2D A, FVector2D B);
    
    UFUNCTION(BlueprintPure)
    static FVector Cross_VectorVector(FVector A, FVector B);
    
    UFUNCTION(BlueprintPure)
    static FVector CreateVectorFromYawPitch(float Yaw, float Pitch, float Length);
    
    UFUNCTION(BlueprintPure)
    static float Cos(float A);
    
    UFUNCTION(BlueprintPure)
    static FTransform ConvertTransformToRelative(const FTransform& Transform, const FTransform& ParentTransform);
    
    UFUNCTION(BlueprintPure)
    static FVector2D Conv_VectorToVector2D(FVector InVector);
    
    UFUNCTION(BlueprintPure)
    static FTransform Conv_VectorToTransform(FVector InLocation);
    
    UFUNCTION(BlueprintPure)
    static FRotator Conv_VectorToRotator(FVector InVec);
    
    UFUNCTION(BlueprintPure)
    static FQuat Conv_VectorToQuaternion(FVector InVec);
    
    UFUNCTION(BlueprintPure)
    static FLinearColor Conv_VectorToLinearColor(FVector InVec);
    
    UFUNCTION(BlueprintPure)
    static FVector Conv_Vector4ToVector(const FVector4& InVector4);
    
    UFUNCTION(BlueprintPure)
    static FRotator Conv_Vector4ToRotator(const FVector4& InVec);
    
    UFUNCTION(BlueprintPure)
    static FQuat Conv_Vector4ToQuaternion(const FVector4& InVec);
    
    UFUNCTION(BlueprintPure)
    static FVector Conv_Vector2DToVector(FVector2D InVector2D, float Z);
    
    UFUNCTION(BlueprintPure)
    static FIntPoint Conv_Vector2DToIntPoint(FVector2D InVector2D);
    
    UFUNCTION(BlueprintPure)
    static FMatrix Conv_TransformToMatrix(const FTransform& Transform);
    
    UFUNCTION(BlueprintPure)
    static FVector Conv_RotatorToVector(FRotator InRot);
    
    UFUNCTION(BlueprintPure)
    static FTransform Conv_RotatorToTransform(const FRotator& InRotator);
    
    UFUNCTION(BlueprintPure)
    static FTransform Conv_MatrixToTransform(const FMatrix& InMatrix);
    
    UFUNCTION(BlueprintPure)
    static FRotator Conv_MatrixToRotator(const FMatrix& InMatrix);
    
    UFUNCTION(BlueprintPure)
    static FVector Conv_LinearColorToVector(FLinearColor InLinearColor);
    
    UFUNCTION(BlueprintPure)
    static FColor Conv_LinearColorToColor(FLinearColor InLinearColor, bool InUseSRGB);
    
    UFUNCTION(BlueprintPure)
    static FVector Conv_IntVectorToVector(const FIntVector& InIntVector);
    
    UFUNCTION(BlueprintPure)
    static FIntVector Conv_IntToIntVector(int32 inInt);
    
    UFUNCTION(BlueprintPure)
    static int64 Conv_IntToInt64(int32 inInt);
    
    UFUNCTION(BlueprintPure)
    static float Conv_IntToFloat(int32 inInt);
    
    UFUNCTION(BlueprintPure)
    static uint8 Conv_IntToByte(int32 inInt);
    
    UFUNCTION(BlueprintPure)
    static bool Conv_IntToBool(int32 inInt);
    
    UFUNCTION(BlueprintPure)
    static FVector2D Conv_IntPointToVector2D(FIntPoint InIntPoint);
    
    UFUNCTION(BlueprintPure)
    static int32 Conv_Int64ToInt(int64 inInt);
    
    UFUNCTION(BlueprintPure)
    static uint8 Conv_Int64ToByte(int64 inInt);
    
    UFUNCTION(BlueprintPure)
    static FVector Conv_FloatToVector(float InFloat);
    
    UFUNCTION(BlueprintPure)
    static FLinearColor Conv_FloatToLinearColor(float InFloat);
    
    UFUNCTION(BlueprintPure)
    static FLinearColor Conv_ColorToLinearColor(FColor InColor);
    
    UFUNCTION(BlueprintPure)
    static int32 Conv_ByteToInt(uint8 InByte);
    
    UFUNCTION(BlueprintPure)
    static float Conv_ByteToFloat(uint8 InByte);
    
    UFUNCTION(BlueprintPure)
    static int32 Conv_BoolToInt(bool InBool);
    
    UFUNCTION(BlueprintPure)
    static float Conv_BoolToFloat(bool InBool);
    
    UFUNCTION(BlueprintPure)
    static uint8 Conv_BoolToByte(bool InBool);
    
    UFUNCTION(BlueprintPure)
    static FTransform ComposeTransforms(const FTransform& A, const FTransform& B);
    
    UFUNCTION(BlueprintPure)
    static FRotator ComposeRotators(FRotator A, FRotator B);
    
    UFUNCTION(BlueprintPure)
    static bool ClassIsChildOf(UClass* TestClass, UClass* ParentClass);
    
    UFUNCTION(BlueprintPure)
    static FVector ClampVectorSize(FVector A, float NewMin, float NewMax);
    
    UFUNCTION(BlueprintPure)
    static int64 ClampInt64(int64 Value, int64 NewMin, int64 NewMax);
    
    UFUNCTION(BlueprintPure)
    static float ClampAxis(float Angle);
    
    UFUNCTION(BlueprintPure)
    static FVector2D ClampAxes2D(FVector2D A, float MinAxisVal, float MaxAxisVal);
    
    UFUNCTION(BlueprintPure)
    static float ClampAngle(float AngleDegrees, float MinAngleDegrees, float MaxAngleDegrees);
    
    UFUNCTION(BlueprintPure)
    static int32 Clamp(int32 Value, int32 NewMin, int32 NewMax);
    
    UFUNCTION(BlueprintPure)
    static FLinearColor CInterpTo(FLinearColor Current, FLinearColor Target, float DeltaTime, float InterpSpeed);
    
    UFUNCTION(BlueprintPure)
    static void BreakVector4(const FVector4& InVec, float& X, float& Y, float& Z, float& W);
    
    UFUNCTION(BlueprintPure)
    static void BreakVector2D(FVector2D InVec, float& X, float& Y);
    
    UFUNCTION(BlueprintPure)
    static void BreakVector(FVector InVec, float& X, float& Y, float& Z);
    
    UFUNCTION(BlueprintPure)
    static void BreakTransform(const FTransform& InTransform, FVector& Location, FRotator& Rotation, FVector& Scale);
    
    UFUNCTION(BlueprintPure)
    static void BreakTimespan2(FTimespan InTimespan, int32& Days, int32& Hours, int32& Minutes, int32& Seconds, int32& FractionNano);
    
    UFUNCTION(BlueprintPure)
    static void BreakTimespan(FTimespan InTimespan, int32& Days, int32& Hours, int32& Minutes, int32& Seconds, int32& MilliSeconds);
    
    UFUNCTION(BlueprintPure)
    static void BreakRotIntoAxes(const FRotator& InRot, FVector& X, FVector& Y, FVector& Z);
    
    UFUNCTION(BlueprintPure)
    static void BreakRotator(FRotator InRot, float& Roll, float& Pitch, float& Yaw);
    
    UFUNCTION(BlueprintPure)
    static void BreakRandomStream(const FRandomStream& InRandomStream, int32& InitialSeed);
    
    UFUNCTION(BlueprintPure)
    static void BreakQualifiedFrameTime(const FQualifiedFrameTime& InFrameTime, FFrameNumber& Frame, FFrameRate& FrameRate, float& SubFrame);
    
    UFUNCTION(BlueprintPure)
    static void BreakFrameRate(const FFrameRate& InFrameRate, int32& Numerator, int32& Denominator);
    
    UFUNCTION(BlueprintPure)
    static void BreakDateTime(FDateTime InDateTime, int32& Year, int32& Month, int32& Day, int32& Hour, int32& Minute, int32& Second, int32& Millisecond);
    
    UFUNCTION(BlueprintPure)
    static void BreakColor(FLinearColor InColor, float& R, float& G, float& B, float& A);
    
    UFUNCTION(BlueprintPure)
    static bool BooleanXOR(bool A, bool B);
    
    UFUNCTION(BlueprintPure)
    static bool BooleanOR(bool A, bool B);
    
    UFUNCTION(BlueprintPure)
    static bool BooleanNOR(bool A, bool B);
    
    UFUNCTION(BlueprintPure)
    static bool BooleanNAND(bool A, bool B);
    
    UFUNCTION(BlueprintPure)
    static bool BooleanAND(bool A, bool B);
    
    UFUNCTION(BlueprintPure)
    static uint8 BMin(uint8 A, uint8 B);
    
    UFUNCTION(BlueprintPure)
    static uint8 BMax(uint8 A, uint8 B);
    
    UFUNCTION(BlueprintPure)
    static float Atan2(float Y, float X);
    
    UFUNCTION(BlueprintPure)
    static float Atan(float A);
    
    UFUNCTION(BlueprintPure)
    static float Asin(float A);
    
    UFUNCTION(BlueprintPure)
    static int32 And_IntInt(int32 A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static int64 And_Int64Int64(int64 A, int64 B);
    
    UFUNCTION(BlueprintPure)
    static FVector Add_VectorVector(FVector A, FVector B);
    
    UFUNCTION(BlueprintPure)
    static FVector Add_VectorInt(FVector A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static FVector Add_VectorFloat(FVector A, float B);
    
    UFUNCTION(BlueprintPure)
    static FVector4 Add_Vector4Vector4(const FVector4& A, const FVector4& B);
    
    UFUNCTION(BlueprintPure)
    static FVector2D Add_Vector2DVector2D(FVector2D A, FVector2D B);
    
    UFUNCTION(BlueprintPure)
    static FVector2D Add_Vector2DFloat(FVector2D A, float B);
    
    UFUNCTION(BlueprintPure)
    static FTimespan Add_TimespanTimespan(FTimespan A, FTimespan B);
    
    UFUNCTION(BlueprintPure)
    static FQuat Add_QuatQuat(const FQuat& A, const FQuat& B);
    
    UFUNCTION(BlueprintPure)
    static FMatrix Add_MatrixMatrix(const FMatrix& A, const FMatrix& B);
    
    UFUNCTION(BlueprintPure)
    static FLinearColor Add_LinearColorLinearColor(FLinearColor A, FLinearColor B);
    
    UFUNCTION(BlueprintPure)
    static FIntPoint Add_IntPointIntPoint(FIntPoint A, FIntPoint B);
    
    UFUNCTION(BlueprintPure)
    static FIntPoint Add_IntPointInt(FIntPoint A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static int32 Add_IntInt(int32 A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static int64 Add_Int64Int64(int64 A, int64 B);
    
    UFUNCTION(BlueprintPure)
    static float Add_FloatFloat(float A, float B);
    
    UFUNCTION(BlueprintPure)
    static FDateTime Add_DateTimeTimespan(FDateTime A, FTimespan B);
    
    UFUNCTION(BlueprintPure)
    static FDateTime Add_DateTimeDateTime(FDateTime A, FDateTime B);
    
    UFUNCTION(BlueprintPure)
    static uint8 Add_ByteByte(uint8 A, uint8 B);
    
    UFUNCTION(BlueprintPure)
    static float Acos(float A);
    
    UFUNCTION(BlueprintPure)
    static int64 Abs_Int64(int64 A);
    
    UFUNCTION(BlueprintPure)
    static int32 Abs_Int(int32 A);
    
    UFUNCTION(BlueprintPure)
    static float Abs(float A);
    
};

