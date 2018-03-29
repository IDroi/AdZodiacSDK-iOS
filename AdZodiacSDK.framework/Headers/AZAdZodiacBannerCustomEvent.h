//
// Created by peter.shih on 2018/2/18.
// Copyright (c) 2018 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AZBannerCustomEvent.h"
#import "AZServerCommunicator.h"
#import "AZAdWebViewAgent.h"

@protocol AZPrivateBannerCustomEventDelegate;

@interface AZAdZodiacBannerCustomEvent : AZBannerCustomEvent <AZServerCommunicatorDelegate, MPAdWebViewAgentDelegate>

@property(nonatomic) CGSize size;

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-property-synthesis"
@property (nonatomic, weak) id<AZBannerCustomEventDelegate, AZPrivateBannerCustomEventDelegate> delegate;
@property(nonatomic, strong) AZBannerCustomEvent *bannerCustomEvent;
@property(nonatomic, strong) AZAdZodiacAdInstance *adInstance;

- (AZBannerCustomEvent *)initWithAdInstance:(AZAdZodiacAdInstance *)adInstance;

#pragma clang diagnostic pop

@end