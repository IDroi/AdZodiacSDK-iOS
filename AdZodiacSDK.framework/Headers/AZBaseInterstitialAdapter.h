//
//  AZBaseInterstitialAdapter.h
//  AdZodiac
//
//  Created by Nafis Jamal on 4/27/11.
//  Copyright 2011 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class MPAdConfiguration, CLLocation;

@protocol MPInterstitialAdapterDelegate;
@class AZAdConfiguration;

@interface AZBaseInterstitialAdapter : NSObject

@property (nonatomic, weak) id<MPInterstitialAdapterDelegate> delegate;

/*
 * Creates an adapter with a reference to an AZInterstitialAdManager.
 */
- (id)initWithDelegate:(id<MPInterstitialAdapterDelegate>)delegate;

/*
 * Sets the adapter's delegate to nil.
 */
- (void)unregisterDelegate;

- (void)getAdWithConfiguration:(AZAdConfiguration *)configuration;
- (void)_getAdWithConfiguration:(AZAdConfiguration *)configuration;

- (void)didStopLoading;

/*
 * Presents the interstitial from the specified view controller.
 */
- (void)showInterstitialFromViewController:(UIViewController *)controller;

@end

@interface AZBaseInterstitialAdapter (ProtectedMethods)

- (void)trackImpression;
- (void)trackClick;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@class AZInterstitialAdController;

@protocol MPInterstitialAdapterDelegate

- (AZInterstitialAdController *)interstitialAdController;
- (id)interstitialDelegate;
- (CLLocation *)location;

- (void)adapterDidFinishLoadingAd:(AZBaseInterstitialAdapter *)adapter;
- (void)adapter:(AZBaseInterstitialAdapter *)adapter didFailToLoadAdWithError:(NSError *)error;
- (void)interstitialWillAppearForAdapter:(AZBaseInterstitialAdapter *)adapter;
- (void)interstitialDidAppearForAdapter:(AZBaseInterstitialAdapter *)adapter;
- (void)interstitialWillDisappearForAdapter:(AZBaseInterstitialAdapter *)adapter;
- (void)interstitialDidDisappearForAdapter:(AZBaseInterstitialAdapter *)adapter;
- (void)interstitialDidExpireForAdapter:(AZBaseInterstitialAdapter *)adapter;
- (void)interstitialDidReceiveTapEventForAdapter:(AZBaseInterstitialAdapter *)adapter;
- (void)interstitialWillLeaveApplicationForAdapter:(AZBaseInterstitialAdapter *)adapter;

@end
