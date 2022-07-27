#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EARSessionType.h"
#include "EARWorldAlignment.h"
#include "EARLightEstimationMode.h"
#include "EARPlaneDetectionMode.h"
#include "EAREnvironmentCaptureProbeType.h"
#include "EARFaceTrackingUpdate.h"
#include "EARFrameSyncMode.h"
#include "ARVideoFormat.h"
#include "EARFaceTrackingDirection.h"
#include "EARSessionTrackingFeature.h"
#include "EARSceneReconstruction.h"
#include "ARSessionConfig.generated.h"

class UARQRCodeComponent;
class UARCandidateImage;
class UARCandidateObject;
class UARPlaneComponent;
class UARPointComponent;
class UARFaceComponent;
class UARImageComponent;
class UMaterialInterface;
class UARPoseComponent;
class UAREnvironmentProbeComponent;
class UARObjectComponent;
class UARMeshComponent;
class UARGeoAnchorComponent;

UCLASS(BlueprintType)
class AUGMENTEDREALITY_API UARSessionConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bGenerateMeshDataFromTrackedGeometry;
    
    UPROPERTY(EditAnywhere)
    bool bGenerateCollisionForMeshData;
    
    UPROPERTY(EditAnywhere)
    bool bGenerateNavMeshForMeshData;
    
    UPROPERTY(EditAnywhere)
    bool bUseMeshDataForOcclusion;
    
    UPROPERTY(EditAnywhere)
    bool bRenderMeshDataInWireframe;
    
    UPROPERTY(EditAnywhere)
    bool bTrackSceneObjects;
    
    UPROPERTY(EditAnywhere)
    bool bUsePersonSegmentationForOcclusion;
    
    UPROPERTY(EditAnywhere)
    bool bUseSceneDepthForOcclusion;
    
    UPROPERTY(EditAnywhere)
    bool bUseAutomaticImageScaleEstimation;
    
    UPROPERTY(EditAnywhere)
    bool bUseStandardOnboardingUX;
    
protected:
    UPROPERTY(EditAnywhere)
    EARWorldAlignment WorldAlignment;
    
    UPROPERTY(EditAnywhere)
    EARSessionType SessionType;
    
    UPROPERTY()
    EARPlaneDetectionMode PlaneDetectionMode;
    
    UPROPERTY(EditAnywhere)
    bool bHorizontalPlaneDetection;
    
    UPROPERTY(EditAnywhere)
    bool bVerticalPlaneDetection;
    
    UPROPERTY(EditAnywhere)
    bool bEnableAutoFocus;
    
    UPROPERTY(EditAnywhere)
    EARLightEstimationMode LightEstimationMode;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    EARFrameSyncMode FrameSyncMode;
    
    UPROPERTY(EditAnywhere)
    bool bEnableAutomaticCameraOverlay;
    
    UPROPERTY(EditAnywhere)
    bool bEnableAutomaticCameraTracking;
    
    UPROPERTY(EditAnywhere)
    bool bResetCameraTracking;
    
    UPROPERTY(EditAnywhere)
    bool bResetTrackedObjects;
    
    UPROPERTY(EditAnywhere)
    TArray<UARCandidateImage*> CandidateImages;
    
    UPROPERTY(EditAnywhere)
    int32 MaxNumSimultaneousImagesTracked;
    
    UPROPERTY(EditAnywhere)
    EAREnvironmentCaptureProbeType EnvironmentCaptureProbeType;
    
    UPROPERTY(VisibleAnywhere)
    TArray<uint8> WorldMapData;
    
    UPROPERTY(EditAnywhere)
    TArray<UARCandidateObject*> CandidateObjects;
    
    UPROPERTY(EditAnywhere)
    FARVideoFormat DesiredVideoFormat;
    
    UPROPERTY(EditAnywhere)
    bool bUseOptimalVideoFormat;
    
    UPROPERTY(EditAnywhere)
    EARFaceTrackingDirection FaceTrackingDirection;
    
    UPROPERTY(EditAnywhere)
    EARFaceTrackingUpdate FaceTrackingUpdate;
    
    UPROPERTY(EditAnywhere)
    int32 MaxNumberOfTrackedFaces;
    
    UPROPERTY()
    TArray<uint8> SerializedARCandidateImageDatabase;
    
    UPROPERTY(EditAnywhere)
    EARSessionTrackingFeature EnabledSessionTrackingFeature;
    
    UPROPERTY(EditAnywhere)
    EARSceneReconstruction SceneReconstructionMethod;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UARPlaneComponent> PlaneComponentClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UARPointComponent> PointComponentClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UARFaceComponent> FaceComponentClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UARImageComponent> ImageComponentClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UARQRCodeComponent> QRCodeComponentClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UARPoseComponent> PoseComponentClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAREnvironmentProbeComponent> EnvironmentProbeComponentClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UARObjectComponent> ObjectComponentClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UARMeshComponent> MeshComponentClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UARGeoAnchorComponent> GeoAnchorComponentClass;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* DefaultMeshMaterial;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* DefaultWireframeMeshMaterial;
    
public:
    UARSessionConfig();
    UFUNCTION(BlueprintPure)
    bool ShouldResetTrackedObjects() const;
    
    UFUNCTION(BlueprintPure)
    bool ShouldResetCameraTracking() const;
    
    UFUNCTION(BlueprintPure)
    bool ShouldRenderCameraOverlay() const;
    
    UFUNCTION(BlueprintPure)
    bool ShouldEnableCameraTracking() const;
    
    UFUNCTION(BlueprintPure)
    bool ShouldEnableAutoFocus() const;
    
    UFUNCTION(BlueprintCallable)
    void SetWorldMapData(TArray<uint8> NewWorldMapData);
    
    UFUNCTION(BlueprintCallable)
    void SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature InSessionTrackingFeature);
    
    UFUNCTION(BlueprintCallable)
    void SetSceneReconstructionMethod(EARSceneReconstruction InSceneReconstructionMethod);
    
    UFUNCTION(BlueprintCallable)
    void SetResetTrackedObjects(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetResetCameraTracking(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetFaceTrackingUpdate(EARFaceTrackingUpdate InUpdate);
    
    UFUNCTION(BlueprintCallable)
    void SetFaceTrackingDirection(EARFaceTrackingDirection InDirection);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableAutoFocus(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredVideoFormat(FARVideoFormat NewFormat);
    
    UFUNCTION(BlueprintCallable)
    void SetCandidateObjectList(const TArray<UARCandidateObject*>& InCandidateObjects);
    
    UFUNCTION(BlueprintPure)
    TArray<uint8> GetWorldMapData() const;
    
    UFUNCTION(BlueprintPure)
    EARWorldAlignment GetWorldAlignment() const;
    
    UFUNCTION(BlueprintPure)
    EARSessionType GetSessionType() const;
    
    UFUNCTION(BlueprintPure)
    EARSceneReconstruction GetSceneReconstructionMethod() const;
    
    UFUNCTION(BlueprintPure)
    EARPlaneDetectionMode GetPlaneDetectionMode() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxNumSimultaneousImagesTracked() const;
    
    UFUNCTION(BlueprintPure)
    EARLightEstimationMode GetLightEstimationMode() const;
    
    UFUNCTION(BlueprintPure)
    EARFrameSyncMode GetFrameSyncMode() const;
    
    UFUNCTION(BlueprintPure)
    EARFaceTrackingUpdate GetFaceTrackingUpdate() const;
    
    UFUNCTION(BlueprintPure)
    EARFaceTrackingDirection GetFaceTrackingDirection() const;
    
    UFUNCTION(BlueprintPure)
    EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType() const;
    
    UFUNCTION(BlueprintPure)
    EARSessionTrackingFeature GetEnabledSessionTrackingFeature() const;
    
    UFUNCTION(BlueprintPure)
    FARVideoFormat GetDesiredVideoFormat() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UARCandidateObject*> GetCandidateObjectList() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UARCandidateImage*> GetCandidateImageList() const;
    
    UFUNCTION(BlueprintCallable)
    void AddCandidateObject(UARCandidateObject* CandidateObject);
    
    UFUNCTION(BlueprintCallable)
    void AddCandidateImage(UARCandidateImage* NewCandidateImage);
    
};

