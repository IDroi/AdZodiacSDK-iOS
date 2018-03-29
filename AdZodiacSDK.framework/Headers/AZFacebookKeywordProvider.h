//
//  MPFacebookAttributionIdProvider.h
//  AdZodiac
//
//  Copyright (c) 2012 AdZodiac, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AZKeywordProvider.h"

/*
 * This class enables the AdZodiac SDK to deliver targeted ads from Facebook via AdZodiac Marketplace
 * (AdZodiac's real-time bidding ad exchange) as part of a test program. This class sends an identifier
 * to Facebook so Facebook can select the ad AdZodiac will serve in your app through AdZodiac Marketplace.
 * If this class is removed from the SDK, your application will not receive targeted ads from
 * Facebook.
 */

@interface AZFacebookKeywordProvider : NSObject <AZKeywordProvider>

@end
