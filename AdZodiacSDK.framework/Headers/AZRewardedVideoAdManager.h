//
//  AZRewardedVideoAdManager.h
//  AdZodiacSDK
//
//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class AZRewardedVideoReward;
@class CLLocation;
@protocol MPRewardedVideoAdManagerDelegate;

/**
 * `MPRewardedVideoAdManager` represents a rewarded video for a single ad unit ID. This is the object that
 * `MPRewardedVideo` uses to load and present the ad.
 */
@interface AZRewardedVideoAdManager : NSObject

@property (nonatomic, weak) id<MPRewardedVideoAdManagerDelegate> delegate;
@property (nonatomic, readonly) NSString *adUnitID;
@property (nonatomic, strong) NSArray *mediationSettings;
@property (nonatomic, copy) NSString *customerId;

/**
 * An array of rewards that are available for the rewarded ad that can be selected when presenting the ad.
 */
@property (nonatomic, readonly) NSArray *availableRewards;

/**
 * The currently selected reward that will be awarded to the user upon completion of the ad. By default,
 * this corresponds to the first reward in `availableRewards`.
 */
@property (nonatomic, readonly) AZRewardedVideoReward *selectedReward;

- (instancetype)initWithAdUnitID:(NSString *)adUnitID delegate:(id<MPRewardedVideoAdManagerDelegate>)delegate;

/**
 * Returns the custom event class type.
 */
- (Class)customEventClass;

/**
 * Loads a rewarded video ad with the ad manager's ad unit ID.
 *
 * @param keywords A string representing a set of keywords that should be passed to the MoPub ad server to receive
 * more relevant advertising.
 *
 * @param location Latitude/Longitude that are passed to the MoPub ad server
 * If this method is called when an ad is already available and we haven't already played a video for the last time we loaded an ad,
 * the object will simply notify the delegate that an ad loaded.
 *
 * @param customerId The user's id within the app.
 *
 * However, if an ad has been played for the last time a load was issued and load is called again, the method will request a new ad.
 */
- (void)loadRewardedVideoAdWithKeywords:(NSString *)keywords location:(CLLocation *)location customerId:(NSString *)customerId;

/**
 * Tells the caller whether the underlying ad network currently has an ad available for presentation.
 */
- (BOOL)hasAdAvailable;

/**
 * Plays a rewarded video ad.
 *
 * @param viewController Presents the rewarded video ad from viewController.
 * @param reward A reward chosen from `availableRewards` to award the user upon completion.
 * This value should not be `nil`. If the reward that is passed in did not come from `availableRewards`,
 * this method will not present the rewarded ad and invoke `rewardedVideoDidFailToPlayForAdManager:error:`.
 * @param customData Optional custom data string to include in the server-to-server callback. If a server-to-server callback
 * is not used, or if the ad unit is configured for local rewarding, this value will not be persisted.
 */
- (void)presentRewardedVideoAdFromViewController:(UIViewController *)viewController withReward:(AZRewardedVideoReward *)reward customData:(NSString *)customData;

/**
 * This method is called when another ad unit has played a rewarded video from the same network this ad manager's custom event
 * represents.
 */
- (void)handleAdPlayedForCustomEventNetwork;

@end

@protocol MPRewardedVideoAdManagerDelegate <NSObject>

- (void)rewardedVideoDidLoadForAdManager:(AZRewardedVideoAdManager *)manager;
- (void)rewardedVideoDidFailToLoadForAdManager:(AZRewardedVideoAdManager *)manager error:(NSError *)error;
- (void)rewardedVideoDidExpireForAdManager:(AZRewardedVideoAdManager *)manager;
- (void)rewardedVideoDidFailToPlayForAdManager:(AZRewardedVideoAdManager *)manager error:(NSError *)error;
- (void)rewardedVideoWillAppearForAdManager:(AZRewardedVideoAdManager *)manager;
- (void)rewardedVideoDidAppearForAdManager:(AZRewardedVideoAdManager *)manager;
- (void)rewardedVideoWillDisappearForAdManager:(AZRewardedVideoAdManager *)manager;
- (void)rewardedVideoDidDisappearForAdManager:(AZRewardedVideoAdManager *)manager;
- (void)rewardedVideoDidReceiveTapEventForAdManager:(AZRewardedVideoAdManager *)manager;
- (void)rewardedVideoWillLeaveApplicationForAdManager:(AZRewardedVideoAdManager *)manager;
- (void)rewardedVideoShouldRewardUserForAdManager:(AZRewardedVideoAdManager *)manager reward:(AZRewardedVideoReward *)reward;

@end
