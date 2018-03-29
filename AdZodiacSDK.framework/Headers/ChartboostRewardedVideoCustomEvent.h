//
//  ChartboostRewardedVideoCustomEvent.h
//  AdZodiacSDK
//
//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#if __has_include(<MoPub/MoPub.h>)
    #import <AdZodiac/AdZodiac.h>
#else
    #import "AZRewardedVideoCustomEvent.h"
#endif

/*
 * Certified with Chartboost 7.0.1
 */
@interface ChartboostRewardedVideoCustomEvent : AZRewardedVideoCustomEvent

/**
 * A string that corresponds to a Chartboost CBLocation used for differentiating ad requests.
 */
@property (nonatomic, copy) NSString *location;

@end
