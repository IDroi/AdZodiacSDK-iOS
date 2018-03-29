//
//  AZMillennialBannerCustomEvent.h
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
@interface AZMillennialBannerCustomEvent : AZBannerCustomEvent <MMInlineDelegate>

@property (nonatomic, readonly) MMCreativeInfo* creativeInfo;

@end
