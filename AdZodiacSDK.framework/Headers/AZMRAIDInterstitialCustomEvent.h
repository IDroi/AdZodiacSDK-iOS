//
//  AZMRAIDInterstitialCustomEvent.h
//  AdZodiac
//
//  Copyright (c) 2013 AdZodiac. All rights reserved.
//

#import "AZInterstitialCustomEvent.h"
#import "AZMRAIDInterstitialViewController.h"
#import "AZPrivateInterstitialCustomEventDelegate.h"

@interface AZMRAIDInterstitialCustomEvent : AZInterstitialCustomEvent <AZInterstitialViewControllerDelegate>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-property-synthesis"
@property (nonatomic, weak) id<AZPrivateInterstitialCustomEventDelegate> delegate;
#pragma clang diagnostic pop

@end
