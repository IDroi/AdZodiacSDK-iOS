//
//  AdZodiac.h
//  AdZodiac
//
//  Copyright (c) 2014 AdZodiac. All rights reserved.
//

#import "AZConstants.h"

#import "AZAdConversionTracker.h"
#import "AZAdDestinationDisplayAgent.h"
#import "AZAdView.h"
#import "AZBannerCustomEvent.h"
#import "AZBannerCustomEventDelegate.h"
#import "AZInterstitialAdController.h"
#import "AZInterstitialCustomEvent.h"
#import "AZInterstitialCustomEventDelegate.h"
#import "AZLogLevel.h"
#import "AZMediationSettingsProtocol.h"
#import "AZRewardedVideo.h"
#import "AZRewardedVideoNetwork.h"
#import "AZRewardedVideoReward.h"
#import "AZRewardedVideoCustomEvent.h"
#import "AZRewardedVideoError.h"
#import "AZViewabilityTracker.h"

#if MP_HAS_NATIVE_PACKAGE
#import "AZNativeAd.h"
#import "AZNativeAdAdapter.h"
#import "AZNativeAdConstants.h"
#import "AZNativeCustomEvent.h"
#import "AZNativeCustomEventDelegate.h"
#import "AZNativeAdError.h"
#import "AZNativeAdRendering.h"
#import "AZNativeAdRequest.h"
#import "AZNativeAdRequestTargeting.h"
#import "AZCollectionViewAdPlacer.h"
#import "AZTableViewAdPlacer.h"
#import "AZClientAdPositioning.h"
#import "AZServerAdPositioning.h"
#import "AZNativeAdDelegate.h"
#import "AZStaticNativeAdRendererSettings.h"
#import "AZNativeAdRendererConfiguration.h"
#import "AZNativeAdRendererSettings.h"
#import "AZNativeAdRenderer.h"
#import "AZStaticNativeAdRenderer.h"
#import "ADZODIACNativeVideoAdRendererSettings.h"
#import "ADZODIACNativeVideoAdRenderer.h"
#import "AZNativeAdRenderingImageLoader.h"
#endif

// Import these frameworks for module support.
#import <AdSupport/AdSupport.h>
#import <CoreGraphics/CoreGraphics.h>
#import <CoreLocation/CoreLocation.h>
#import <CoreMedia/CoreMedia.h>
#import <CoreTelephony/CTTelephonyNetworkInfo.h>
#import <Foundation/Foundation.h>
#import <MediaPlayer/MediaPlayer.h>
#import <MessageUI/MessageUI.h>
#import <QuartzCore/QuartzCore.h>
#import <StoreKit/StoreKit.h>
#import <SystemConfiguration/SystemConfiguration.h>
#import <UIKit/UIKit.h>

#define MoPubKit [MoPub sharedInstance]

@interface AdZodiac : NSObject

/**
 * Returns the MoPub singleton object.
 *
 * @return The MoPub singleton object.
 */
+ (AdZodiac *)sharedInstance;

/**
 * A Boolean value indicating whether the MoPub SDK should use Core Location APIs to automatically
 * derive targeting information for location-based ads.
 *
 * When set to NO, the SDK will not attempt to determine device location. When set to YES, the
 * SDK will periodically try to listen for location updates in order to request location-based ads.
 * This only occurs if location services are enabled and the user has already authorized the use
 * of location services for the application. The default value is YES.
 *
 * @return A Boolean value indicating whether the SDK should listen for location updates.
 */
@property (nonatomic, assign) BOOL locationUpdatesEnabled;


/**
 * A Boolean value indicating whether the MoPub SDK should create a MoPub ID that can be used
 * for frequency capping when Limit ad tracking is on & the IDFA we get is
 * 00000000-0000-0000-0000-000000000000.
 *
 * When set to NO, the SDK will not create a MoPub ID in the above case. When set to YES, the
 * SDK will generate a MoPub ID. The default value is YES.
 *
 */
@property (nonatomic) BOOL frequencyCappingIdUsageEnabled;

/**
 * Forces the usage of WKWebView (if able).
 */
@property (nonatomic, assign) BOOL forceWKWebView;

/**
 * SDK log level. The default value is `AZLogLevelInfo`.
 */
@property (nonatomic, assign) AZLogLevel logLevel;

/** @name Rewarded Video */
/**
 * Initializes the rewarded video system and preinitializes all cached rewarded video network SDKs.
 *
 * This method should only be called once. It should also be called prior to requesting any rewarded video ads.
 * Once the global mediation settings and delegate are set, they cannot be changed for the rest of the app session.
 *
 * @param globalMediationSettings Global configurations for all rewarded video ad networks your app supports.
 * @param delegate The delegate that will receive all events related to rewarded video.
 */
- (void)initializeRewardedVideoWithGlobalMediationSettings:(NSArray *)globalMediationSettings
                                                  delegate:(id<MPRewardedVideoDelegate>)delegate;

/** @name Rewarded Video */
/**
 * Initializes the rewarded video system and preinitializes all specified rewarded video network SDKs.
 *
 * This method should only be called once at app launch, prior to requesting any rewarded video ads.
 * Once the global mediation settings and delegate are set, they cannot be changed the rest of the app session.
 *
 * @param globalMediationSettings Global configurations for all rewarded video ad networks your app supports.
 * @param delegate The delegate that will receive all events related to rewarded video.
 * @param order An array of rewarded video custom event networks to preinitialize. For convenience, use
 * the constants from `MPRewardedVideoNetwork`. If `nil` is passed in, no network SDKs will be preinitialized.
 */
- (void)initializeRewardedVideoWithGlobalMediationSettings:(NSArray *)globalMediationSettings
                                                  delegate:(id<MPRewardedVideoDelegate>)delegate
                                networkInitializationOrder:(NSArray<NSString *> *)order;

/**
 * Retrieves the global mediation settings for a given class type.
 *
 * @param aClass The type of mediation settings object you want to receive from the collection.
 */
- (id<AZMediationSettingsProtocol>)globalMediationSettingsForClass:(Class)aClass;

- (void)start;
- (NSString *)version;
- (NSString *)bundleIdentifier;

/**
 * Default is ADZODIACDisplayAgentTypeInApp = 0.
 *
 * If displayType is set to ADZODIACDisplayAgentTypeNativeSafari = 1, http/https clickthrough URLs are opened in native
 * safari browser.
 * If displayType is set to ADZODIACDisplayAgentTypeSafariViewController = 2, http/https clickthrough URLs are opened in
 * SafariViewController.
 *
 */
- (void)setClickthroughDisplayAgentType:(ADZODIACDisplayAgentType)displayAgentType;

/**
 * Disables viewability measurement via the specified vendor(s) for the rest of the app session. A given vendor cannot
 * be re-enabled after being disabled.
 *
 * @param vendors The viewability vendor(s) to be disabled. This is a bitmask value; ORing vendors together is okay.
 */
- (void)disableViewability:(MPViewabilityOption)vendors;

@end
