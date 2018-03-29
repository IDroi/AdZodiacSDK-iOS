//
//  AZAdZodiacNativeAdAdapter.h
//
//  Copyright (c) 2014 AdZodiac. All rights reserved.
//

#import "AZNativeAdAdapter.h"

@class MPAdConfiguration;
@class AZAdZodiacNativeAdContent;

@interface AZAdZodiacNativeAdAdapter : NSObject <AZNativeAdAdapter>

@property (nonatomic, weak) id<MPNativeAdAdapterDelegate> delegate;
@property (nonatomic, readonly) NSArray *impressionTrackerURLs;
@property (nonatomic, readonly) NSArray *clickTrackerURLs;
@property (nonatomic) MPAdConfiguration *adConfiguration;

- (instancetype)initWithAdContent:(AZAdZodiacNativeAdContent *)content;

@end
