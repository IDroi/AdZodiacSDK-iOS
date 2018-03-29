//
//  AZBannerAdManager.h
//  AdZodiac
//
//  Copyright (c) 2013 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AZAdServerCommunicator.h"
#import "AZBaseBannerAdapter.h"

@protocol AZBannerAdManagerDelegate;

@interface AZBannerAdManager : NSObject </*MPAdServerCommunicatorDelegate, */AZBannerAdapterDelegate>

@property (nonatomic, weak) id<AZBannerAdManagerDelegate> delegate;

- (id)initWithDelegate:(id<AZBannerAdManagerDelegate>)delegate;

- (void)loadAd;
- (void)forceRefreshAd;
- (void)stopAutomaticallyRefreshingContents;
- (void)startAutomaticallyRefreshingContents;
- (void)rotateToOrientation:(UIInterfaceOrientation)orientation;

@end
