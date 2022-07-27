#ifndef UE4SS_SDK_OpenXRHandTracking_HPP
#define UE4SS_SDK_OpenXRHandTracking_HPP

#include "OpenXRHandTracking_enums.hpp"

class ULiveLinkOpenXRHandTrackingSourceFactory : public ULiveLinkSourceFactory
{
};

class UOpenXRHandTrackingLiveLinkRemapAsset : public ULiveLinkRetargetAsset
{
    bool bHasMetacarpals;
    bool bRetargetRotationOnly;
    EQuatSwizzleAxisB SwizzleX;
    EQuatSwizzleAxisB SwizzleY;
    EQuatSwizzleAxisB SwizzleZ;
    EQuatSwizzleAxisB SwizzleW;
    TMap<class FName, class FName> HandTrackingBoneNameMap;

};

#endif
