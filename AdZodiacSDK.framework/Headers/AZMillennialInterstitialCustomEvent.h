//
//  AZMillennialInterstitialCustomEvent.h
//
//  Copyright (c) 2015 Millennial Media, Inc. All rights reserved.
//

#if __has_include(<MoPub/MoPub.h>)
    #import <MoPub/MoPub.h>
#else
    #import "AdZodiac.h"
#endif

#import <MMAdSDK/MMAdSDK.h>

/*
 * Certified with Millennial Media 6.6.0
 */
@interface AZMillennialInterstitialCustomEvent : AZInterstitialCustomEvent <MMInterstitialDelegate>

@property (nonatomic, readonly) MMInterstitialAd *interstitial;
@property (nonatomic, readonly) MMCreativeInfo* creativeInfo;

@end
