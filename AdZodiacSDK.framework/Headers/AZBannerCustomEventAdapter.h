//
//  AZBannerCustomEventAdapter.h
//  AdZodiac
//
//  Copyright (c) 2012 AdZodiac, Inc. All rights reserved.
//

#import "AZBaseBannerAdapter.h"

#import "AZPrivateBannerCustomEventDelegate.h"

@class AZBannerCustomEvent;

@interface AZBannerCustomEventAdapter : AZBaseBannerAdapter <AZPrivateBannerCustomEventDelegate>

@end
