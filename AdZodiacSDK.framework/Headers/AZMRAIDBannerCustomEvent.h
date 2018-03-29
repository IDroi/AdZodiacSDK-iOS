//
//  AZMRAIDBannerCustomEvent.h
//  AdZodiac
//
//  Copyright (c) 2013 AdZodiac. All rights reserved.
//

#import "AZBannerCustomEvent.h"
#import "AZPrivateBannerCustomEventDelegate.h"

@interface AZMRAIDBannerCustomEvent : AZBannerCustomEvent

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-property-synthesis"
@property (nonatomic, weak) id<AZPrivateBannerCustomEventDelegate> delegate;
#pragma clang diagnostic pop

@end
