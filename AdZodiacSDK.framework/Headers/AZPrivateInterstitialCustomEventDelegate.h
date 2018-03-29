//
//  MPPrivateInterstitialcustomEventDelegate.h
//  AdZodiac
//
//  Copyright (c) 2013 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AZInterstitialCustomEventDelegate.h"

@class MPAdConfiguration;
@class CLLocation;

@protocol AZPrivateInterstitialCustomEventDelegate <AZInterstitialCustomEventDelegate>

- (NSString *)adUnitId;
//- (MPAdConfiguration *)configuration;
- (id)interstitialDelegate;

@end
