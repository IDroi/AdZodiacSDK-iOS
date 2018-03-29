//
//  AZPrivateBannerCustomEventDelegate.h
//  AdZodiac
//
//  Copyright (c) 2013 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AZBannerCustomEventDelegate.h"

@class MPAdConfiguration;

@protocol AZPrivateBannerCustomEventDelegate <AZBannerCustomEventDelegate>

- (NSString *)adUnitId;
- (MPAdConfiguration *)configuration;
- (id)bannerDelegate;

@end
