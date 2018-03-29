//
//  AZBaseBannerAdapter.h
//  AdZodiac
//
//  Created by Nafis Jamal on 1/19/11.
//  Copyright 2011 AdZodiac, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AZAdView.h"

@protocol AZBannerAdapterDelegate;
@class MPAdConfiguration;
@class AZAdConfiguration;

@interface AZBaseBannerAdapter : NSObject
{
    id<AZBannerAdapterDelegate> __weak _delegate;
}

@property (nonatomic, weak) id<AZBannerAdapterDelegate> delegate;
@property (nonatomic, copy) NSURL *impressionTrackingURL;
@property (nonatomic, copy) NSURL *clickTrackingURL;

- (id)initWithDelegate:(id<AZBannerAdapterDelegate>)delegate;

/*
 * Sets the adapter's delegate to nil.
 */
- (void)unregisterDelegate;

/*
 * -_getAdWithConfiguration creates a strong reference to self before calling
 * -getAdWithConfiguration to prevent the adapter from being prematurely deallocated.
 */
- (void)getAdWithConfiguration:(AZAdConfiguration *)configuration containerSize:(CGSize)size;
- (void)_getAdWithConfiguration:(AZAdConfiguration *)configuration containerSize:(CGSize)size;

- (void)didStopLoading;
- (void)didDisplayAd;

/*
 * Your subclass should implement this method if your native ads vary depending on orientation.
 */
- (void)rotateToOrientation:(UIInterfaceOrientation)newOrientation;

- (void)trackImpression;

- (void)trackClick;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@protocol AZBannerAdapterDelegate

@required

- (AZAdView *)banner;
- (id<MPAdViewDelegate>)bannerDelegate;
- (UIViewController *)viewControllerForPresentingModalView;
- (MPNativeAdOrientation)allowedNativeAdsOrientation;
- (CLLocation *)location;

/*
 * These callbacks notify you that the adapter (un)successfully loaded an ad.
 */
- (void)adapter:(AZBaseBannerAdapter *)adapter didFailToLoadAdWithError:(NSError *)error;
- (void)adapter:(AZBaseBannerAdapter *)adapter didFinishLoadingAd:(UIView *)ad;

/*
 * These callbacks notify you that the user interacted (or stopped interacting) with the native ad.
 */
- (void)userActionWillBeginForAdapter:(AZBaseBannerAdapter *)adapter;
- (void)userActionDidFinishForAdapter:(AZBaseBannerAdapter *)adapter;

/*
 * This callback notifies you that user has tapped on an ad which will cause them to leave the
 * current application (e.g. the ad action opens the iTunes store, Mobile Safari, etc).
 */
- (void)userWillLeaveApplicationFromAdapter:(AZBaseBannerAdapter *)adapter;

@end
