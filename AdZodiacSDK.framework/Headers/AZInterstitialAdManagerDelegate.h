//
//  AZInterstitialAdManagerDelegate.h
//  AdZodiac
//
//  Copyright (c) 2013 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AZInterstitialAdManager;
@class AZInterstitialAdController;
@class CLLocation;

@protocol AZInterstitialAdManagerDelegate <NSObject>

- (AZInterstitialAdController *)interstitialAdController;
- (NSString *)adUnitId;
- (CLLocation *)location;
- (id)interstitialDelegate;
- (void)managerDidLoadInterstitial:(AZInterstitialAdManager *)manager;
- (void)manager:(AZInterstitialAdManager *)manager
didFailToLoadInterstitialWithError:(NSError *)error;
- (void)managerWillPresentInterstitial:(AZInterstitialAdManager *)manager;
- (void)managerDidPresentInterstitial:(AZInterstitialAdManager *)manager;
- (void)managerWillDismissInterstitial:(AZInterstitialAdManager *)manager;
- (void)managerDidDismissInterstitial:(AZInterstitialAdManager *)manager;
- (void)managerDidExpireInterstitial:(AZInterstitialAdManager *)manager;
- (void)managerDidReceiveTapEventFromInterstitial:(AZInterstitialAdManager *)manager;

@end
