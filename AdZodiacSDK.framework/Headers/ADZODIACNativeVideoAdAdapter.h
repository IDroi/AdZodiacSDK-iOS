//
//  ADZODIACNativeVideoAdAdapter.h
//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#import "AZNativeAdAdapter.h"

@class MPAdConfiguration;

@interface ADZODIACNativeVideoAdAdapter : NSObject <AZNativeAdAdapter>

@property (nonatomic, weak) id<MPNativeAdAdapterDelegate> delegate;
@property (nonatomic, readonly) NSArray *impressionTrackerURLs;
@property (nonatomic, readonly) NSArray *clickTrackerURLs;
@property (nonatomic) MPAdConfiguration *adConfiguration;

- (instancetype)initWithAdProperties:(NSMutableDictionary *)properties;

- (void)handleVideoViewImpression;
- (void)handleVideoViewClick;
- (void)handleVideoHasProgressedToTime:(NSTimeInterval)playbackTime;

@end
