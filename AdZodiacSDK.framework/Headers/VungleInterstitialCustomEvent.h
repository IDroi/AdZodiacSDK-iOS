//
//  VungleInterstitialCustomEvent.h
//  AdZodiacSDK
//
//  Copyright (c) 2013 AdZodiac. All rights reserved.
//

#if __has_include(<MoPub/MoPub.h>)
    #import <AdZodiac/AdZodiac.h>
#else
    #import "AZInterstitialCustomEvent.h"
#endif

/*
 * Certified with Vungle 5.3.0
 *
 * The Vungle SDK does not provide an "application will leave" callback, thus this custom event
 * will not invoke the interstitialCustomEventWillLeaveApplication: delegate method.
 */
@interface VungleInterstitialCustomEvent : AZInterstitialCustomEvent

/**
 * Use the MoPub website to set your app ID in your network settings for Vungle.
 * See the Custom Native Network Setup guide for more information.
 * https://dev.twitter.com/mopub/ad-networks/network-setup-custom-native
 */

@end
