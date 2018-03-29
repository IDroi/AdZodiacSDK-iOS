//
//  AZInstanceProvider.h
//  AdZodiac
//
//  Copyright (c) 2013 AdZodiac. All rights reserved.
//

#import "AZGlobal.h"
#import "AZCoreInstanceProvider.h"

// AZWebView
@class AZWebView;
@protocol MPWebViewDelegate;

// Banners
@class AZBannerAdManager;
@protocol AZBannerAdManagerDelegate;
@class AZBaseBannerAdapter;
@protocol MPBannerAdapterDelegate;
@class AZBannerCustomEvent;
@protocol AZBannerCustomEventDelegate;

// Interstitials
@class AZInterstitialAdManager;
@protocol AZInterstitialAdManagerDelegate;
@class AZBaseInterstitialAdapter;
@protocol MPInterstitialAdapterDelegate;
@class AZInterstitialCustomEvent;
@protocol AZInterstitialCustomEventDelegate;
@class AZHTMLInterstitialViewController;
@class AZMRAIDInterstitialViewController;
@protocol AZInterstitialViewControllerDelegate;

// Rewarded Video
@class AZRewardedVideoAdManager;
@class AZRewardedVideoAdapter;
@class AZRewardedVideoCustomEvent;
@protocol MPRewardedVideoAdapterDelegate;
@protocol MPRewardedVideoCustomEventDelegate;
@protocol MPRewardedVideoAdManagerDelegate;

// HTML Ads
@class AZAdWebViewAgent;
@protocol MPAdWebViewAgentDelegate;

// MRAID
@class MRController;
@protocol MRControllerDelegate;
@class AZClosableView;
@class AZBridge;
@protocol MRBridgeDelegate;
@protocol MPClosableViewDelegate;
@class MRBundleManager;
@class MRVideoPlayerManager;
@protocol MRVideoPlayerManagerDelegate;
@class MPMoviePlayerViewController;
@class MRNativeCommandHandler;
@protocol MRNativeCommandHandlerDelegate;

//Native
@protocol AZNativeCustomEventDelegate;
@class AZNativeCustomEvent;
@class AZNativeAdSource;
@protocol AZNativeAdSourceDelegate;
@class AZNativePositionSource;
@class AZStreamAdPlacementData;
@class AZStreamAdPlacer;
@class AZAdPositioning;
@protocol AZNativeAdRenderer;
@class AZAdConfiguration;
@protocol AZBannerAdapterDelegate;

@interface AZInstanceProvider : NSObject

+(instancetype)sharedProvider;
- (id)singletonForClass:(Class)klass provider:(MPSingletonProviderBlock)provider;
- (id)singletonForClass:(Class)klass provider:(MPSingletonProviderBlock)provider context:(id)context;

#pragma mark - Banners
- (AZBannerAdManager *)buildMPBannerAdManagerWithDelegate:(id<AZBannerAdManagerDelegate>)delegate;
- (AZBaseBannerAdapter *)buildBannerAdapterForConfiguration:(AZAdConfiguration *)configuration
                                                   delegate:(id<AZBannerAdapterDelegate>)delegate;
- (AZBannerCustomEvent *)buildBannerCustomEventFromCustomClass:(Class)customClass
                                                   networkType:(NSString *)networkType
                                                      delegate:(id<AZBannerCustomEventDelegate>)delegate;

#pragma mark - Interstitials
- (AZInterstitialAdManager *)buildMPInterstitialAdManagerWithDelegate:(id<AZInterstitialAdManagerDelegate>)delegate;
- (AZBaseInterstitialAdapter *)buildInterstitialAdapterForConfiguration:(AZAdConfiguration *)configuration
                                                               delegate:(id<MPInterstitialAdapterDelegate>)delegate;
- (AZInterstitialCustomEvent *)buildInterstitialCustomEventFromCustomClass:(Class)customClass
                                                               networkType:(NSString *)networkType
                                                                  delegate:(id<AZInterstitialCustomEventDelegate>)delegate;
- (AZHTMLInterstitialViewController *)buildMPHTMLInterstitialViewControllerWithDelegate:(id<AZInterstitialViewControllerDelegate>)delegate
                                                                        orientationType:(AZInterstitialOrientationType)type;
- (AZMRAIDInterstitialViewController *)buildMPMRAIDInterstitialViewControllerWithDelegate:(id<AZInterstitialViewControllerDelegate>)delegate
                                                                            configuration:(MPAdConfiguration *)configuration;

#pragma mark - Rewarded Video
- (AZRewardedVideoAdManager *)buildRewardedVideoAdManagerWithAdUnitID:(NSString *)adUnitID delegate:(id<MPRewardedVideoAdManagerDelegate>)delegate;
- (AZRewardedVideoAdapter *)buildRewardedVideoAdapterWithDelegate:(id<MPRewardedVideoAdapterDelegate>)delegate;
- (AZRewardedVideoCustomEvent *)buildRewardedVideoCustomEventFromCustomClass:(Class)customClass delegate:(id<MPRewardedVideoCustomEventDelegate>)delegate;


#pragma mark - HTML Ads
- (AZAdWebViewAgent *)buildMPAdWebViewAgentWithAdWebViewFrame:(CGRect)frame
                                                     delegate:(id<MPAdWebViewAgentDelegate>)delegate;

#pragma mark - MRAID
- (AZClosableView *)buildMRAIDMPClosableViewWithFrame:(CGRect)frame webView:(AZWebView *)webView delegate:(id<MPClosableViewDelegate>)delegate;
- (MRBundleManager *)buildMRBundleManager;
- (MRController *)buildBannerMRControllerWithFrame:(CGRect)frame delegate:(id<MRControllerDelegate>)delegate;
- (MRController *)buildInterstitialMRControllerWithFrame:(CGRect)frame delegate:(id<MRControllerDelegate>)delegate;
- (AZBridge *)buildMRBridgeWithWebView:(AZWebView *)webView delegate:(id<MRBridgeDelegate>)delegate;
- (MRVideoPlayerManager *)buildMRVideoPlayerManagerWithDelegate:(id<MRVideoPlayerManagerDelegate>)delegate;
- (MPMoviePlayerViewController *)buildMPMoviePlayerViewControllerWithURL:(NSURL *)URL;
- (MRNativeCommandHandler *)buildMRNativeCommandHandlerWithDelegate:(id<MRNativeCommandHandlerDelegate>)delegate;

#pragma mark - Native

- (AZNativeCustomEvent *)buildNativeCustomEventFromCustomClass:(Class)customClass
                                                      adUnitId:(NSString *)adUnitId
                                                   networkType:(NSString *)networkType
                                                      delegate:(id<AZNativeCustomEventDelegate>)delegate;
- (AZNativeAdSource *)buildNativeAdSourceWithDelegate:(id<AZNativeAdSourceDelegate>)delegate;
- (AZNativePositionSource *)buildNativePositioningSource;
- (AZStreamAdPlacementData *)buildStreamAdPlacementDataWithPositioning:(AZAdPositioning *)positioning;
- (AZStreamAdPlacer *)buildStreamAdPlacerWithViewController:(UIViewController *)controller adPositioning:(AZAdPositioning *)positioning rendererConfigurations:(NSArray *)rendererConfigurations;

@end
