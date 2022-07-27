#ifndef UE4SS_SDK_OpenXRHandTracking_HPP
#define UE4SS_SDK_OpenXRHandTracking_HPP

#include "OpenXRHandTracking_enums.hpp"

class ULiveLinkOpenXRHandTrackingSourceFactory : public ULiveLinkSourceFactory
{
}; // Size: 0x38

class UOpenXRHandTrackingLiveLinkRemapAsset : public ULiveLinkRetargetAsset
{
    bool bHasMetacarpals;                                                             // 0x0028 (size: 0x1)
    bool bRetargetRotationOnly;                                                       // 0x0029 (size: 0x1)
    EQuatSwizzleAxisB SwizzleX;                                                       // 0x002A (size: 0x1)
    EQuatSwizzleAxisB SwizzleY;                                                       // 0x002B (size: 0x1)
    EQuatSwizzleAxisB SwizzleZ;                                                       // 0x002C (size: 0x1)
    EQuatSwizzleAxisB SwizzleW;                                                       // 0x002D (size: 0x1)
    TMap<class FName, class FName> HandTrackingBoneNameMap;                           // 0x0030 (size: 0x50)

}; // Size: 0x80

#endif
