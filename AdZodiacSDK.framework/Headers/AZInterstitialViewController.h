//
//  AZInterstitialViewController.h
//  AdZodiac
//
//  Copyright (c) 2012 AdZodiac, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AZGlobal.h"

@class CLLocation;

@protocol AZInterstitialViewControllerDelegate;

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface AZInterstitialViewController : UIViewController

@property (nonatomic, assign) MPInterstitialCloseButtonStyle closeButtonStyle;
@property (nonatomic, assign) AZInterstitialOrientationType orientationType;
@property (nonatomic, strong) UIButton *closeButton;
@property (nonatomic, weak) id<AZInterstitialViewControllerDelegate> delegate;

- (void)presentInterstitialFromViewController:(UIViewController *)controller;
- (void)dismissInterstitialAnimated:(BOOL)animated;
- (BOOL)shouldDisplayCloseButton;
- (void)willPresentInterstitial;
- (void)didPresentInterstitial;
- (void)willDismissInterstitial;
- (void)didDismissInterstitial;
- (void)layoutCloseButton;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@protocol AZInterstitialViewControllerDelegate <NSObject>

- (NSString *)adUnitId;
- (void)interstitialDidLoadAd:(AZInterstitialViewController *)interstitial;
- (void)interstitialDidFailToLoadAd:(AZInterstitialViewController *)interstitial;
- (void)interstitialWillAppear:(AZInterstitialViewController *)interstitial;
- (void)interstitialDidAppear:(AZInterstitialViewController *)interstitial;
- (void)interstitialWillDisappear:(AZInterstitialViewController *)interstitial;
- (void)interstitialDidDisappear:(AZInterstitialViewController *)interstitial;
- (void)interstitialDidReceiveTapEvent:(AZInterstitialViewController *)interstitial;
- (void)interstitialWillLeaveApplication:(AZInterstitialViewController *)interstitial;

@optional
- (CLLocation *)location;
- (void)interstitialRewardedVideoEnded;

@end
