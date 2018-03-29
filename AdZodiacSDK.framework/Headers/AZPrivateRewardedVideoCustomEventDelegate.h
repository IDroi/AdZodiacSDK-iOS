//
//  AZPrivateRewardedVideoCustomEventDelegate.h
//  AdZodiac
//
//  Copyright © 2016 AdZodiac. All rights reserved.
//

#import "AZRewardedVideoCustomEvent.h"

@class MPAdConfiguration;
@class CLLocation;

@protocol AZPrivateRewardedVideoCustomEventDelegate <MPRewardedVideoCustomEventDelegate>

- (NSString *)adUnitId;
- (MPAdConfiguration *)configuration;

@end
