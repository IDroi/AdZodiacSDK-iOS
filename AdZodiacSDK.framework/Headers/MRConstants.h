//
//  MRConstants.h
//  AdZodiacSDK
//
//  Copyright (c) 2014 AdZodiac. All rights reserved.
//

enum {
    MRAdViewStateHidden,
    MRAdViewStateDefault,
    MRAdViewStateExpanded,
    MRAdViewStateResized
};
typedef NSUInteger MRAdViewState;

enum {
    MRAdViewPlacementTypeInline,
    MRAdViewPlacementTypeInterstitial
};
typedef NSUInteger MRAdViewPlacementType;

extern NSString *const kOrientationPropertyForceOrientationPortraitKey;
extern NSString *const kOrientationPropertyForceOrientationLandscapeKey;
extern NSString *const kOrientationPropertyForceOrientationNoneKey;
