//
//  AZAnalyticsTracker.h
//  AdZodiac
//
//  Copyright (c) 2013 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MPAdConfiguration;
@class AZAdConfiguration;

@interface AZAnalyticsTracker : NSObject

+ (AZAnalyticsTracker *)tracker;

- (void)trackImpressionForAdUnitId:(NSString *)adUnitId configuration:(AZAdConfiguration *)configuration;
- (void)trackClickForAdUnitId:(NSString *)adUnitId configuration:(AZAdConfiguration *)configuration;
- (void)sendTrackingRequestForURLs:(NSArray *)URLs;

@end
