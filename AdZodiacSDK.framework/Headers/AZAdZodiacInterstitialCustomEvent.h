//
// Created by peter.shih on 2018/2/18.
// Copyright (c) 2018 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AZServerCommunicator.h"
#import "AZAdWebViewAgent.h"
#import "AZInterstitialCustomEvent.h"
#import "AZInterstitialViewController.h"

@protocol AZPrivateInterstitialCustomEventDelegate;
@protocol AZInterstitialCustomEventDelegate;

@interface AZAdZodiacInterstitialCustomEvent : AZInterstitialCustomEvent <AZServerCommunicatorDelegate, AZInterstitialViewControllerDelegate>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-property-synthesis"
@property (nonatomic, weak) id<AZInterstitialCustomEventDelegate, AZPrivateInterstitialCustomEventDelegate> delegate;
@property(nonatomic, strong) AZInterstitialCustomEvent *interstitialCustomEvent;
@property(nonatomic, strong) AZAdZodiacAdInstance *adInstance;

- (AZInterstitialCustomEvent *)initWithAdInstance:(AZAdZodiacAdInstance *)adInstance;

#pragma clang diagnostic pop

@end