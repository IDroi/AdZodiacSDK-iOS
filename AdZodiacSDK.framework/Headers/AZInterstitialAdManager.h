//
//  AZInterstitialAdManager.h
//  AdZodiac
//
//  Copyright (c) 2012 AdZodiac, Inc. All rights reserved.
//

#import "AZAdServerCommunicator.h"
#import "AZBaseInterstitialAdapter.h"

@class CLLocation;
@protocol AZInterstitialAdManagerDelegate;

@interface AZInterstitialAdManager : NSObject </*MPAdServerCommunicatorDelegate,*/
    MPInterstitialAdapterDelegate>

@property (nonatomic, weak) id<AZInterstitialAdManagerDelegate> delegate;
@property (nonatomic, assign, readonly) BOOL ready;

- (id)initWithDelegate:(id<AZInterstitialAdManagerDelegate>)delegate;

- (void)loadInterstitialWithAdUnitID:(NSString *)ID
                            keywords:(NSString *)keywords
                            location:(CLLocation *)location
                             testing:(BOOL)testing;
- (void)presentInterstitialFromViewController:(UIViewController *)controller;

@end
