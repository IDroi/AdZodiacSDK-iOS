//
//  FacebookNativeAdAdapter.h
//  AdZodiac
//
//  Copyright (c) 2014 AdZodiac. All rights reserved.
//

#if __has_include(<MoPub/MoPub.h>)
    #import <AdZodiac/AdZodiac.h>
#else
    #import "AZNativeAdAdapter.h"
#endif

@class FBNativeAd;

extern NSString *const kFBVideoAdsEnabledKey;

@interface FacebookNativeAdAdapter : NSObject <AZNativeAdAdapter>

@property (nonatomic, weak) id<MPNativeAdAdapterDelegate> delegate;

- (instancetype)initWithFBNativeAd:(FBNativeAd *)fbNativeAd adProperties:(NSDictionary *)adProps;

@end
