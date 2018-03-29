//
//  AZHTMLInterstitialCustomEvent.h
//  AdZodiac
//
//  Copyright (c) 2013 AdZodiac. All rights reserved.
//

#import "AZInterstitialCustomEvent.h"
#import "AZHTMLInterstitialViewController.h"
#import "AZPrivateInterstitialCustomEventDelegate.h"
#import "AZAdZodiacInterstitialCustomEvent.h"

@interface AZHTMLInterstitialCustomEvent : AZAdZodiacInterstitialCustomEvent <AZInterstitialViewControllerDelegate>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-property-synthesis"
@property (nonatomic, weak) id<AZPrivateInterstitialCustomEventDelegate> delegate;
#pragma clang diagnostic pop

@end
