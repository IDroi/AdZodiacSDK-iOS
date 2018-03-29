//
//  VungleRewardedVideoCustomEvent.h
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
 * Certified with Vungle 5.3.0
 *
 * The Vungle SDK does not provide an "application will leave" callback, thus this custom event
 * will not invoke the rewardedVideoWillLeaveApplicationForCustomEvent: delegate method.
 */
@interface VungleRewardedVideoCustomEvent : AZRewardedVideoCustomEvent

@end
