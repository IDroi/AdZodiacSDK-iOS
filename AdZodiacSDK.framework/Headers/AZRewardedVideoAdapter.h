//
//  AZRewardedVideoAdapter.h
//  AdZodiacSDK
//
//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AZPrivateRewardedVideoCustomEventDelegate.h"

@class MPAdConfiguration;
@class AZRewardedVideoReward;

@protocol MPRewardedVideoAdapterDelegate;
@protocol AZMediationSettingsProtocol;

/**
 * `MPRewardedVideoAdapter` directly communicates with the appropriate custom event to
 * load and show a rewarded video. It is also the class that handles impression
 * and click tracking. Finally, the class will report a failure to load an ad if the ad
 * takes too long to load.
 */
@interface AZRewardedVideoAdapter : NSObject <AZPrivateRewardedVideoCustomEventDelegate>

@property (nonatomic, weak) id<MPRewardedVideoAdapterDelegate> delegate;

- (instancetype)initWithDelegate:(id<MPRewardedVideoAdapterDelegate>)delegate;

/**
 * Called to retrieve an ad once we get a response from the server.
 *
 * @param configuration Contains the details about the ad we are loading.
 */
- (void)getAdWithConfiguration:(MPAdConfiguration *)configuration;

/**
 * Tells the caller whether the underlying ad network currently has an ad available for presentation.
 */
- (BOOL)hasAdAvailable;

/**
 * Plays a rewarded video ad.
 *
 * @param viewController Presents the rewarded video ad from viewController.
 * @param customData Optional custom data string to include in the server-to-server callback. If a server-to-server callback
 * is not used, or if the ad unit is configured for local rewarding, this value will not be persisted.
 */
- (void)presentRewardedVideoFromViewController:(UIViewController *)viewController customData:(NSString *)customData;

/**
 * This method is called when another ad unit has played a rewarded video from the same network this adapter's custom event
 * represents.
 */
- (void)handleAdPlayedForCustomEventNetwork;

@end

@protocol MPRewardedVideoAdapterDelegate <NSObject>

- (id<AZMediationSettingsProtocol>)instanceMediationSettingsForClass:(Class)aClass;

- (void)rewardedVideoDidLoadForAdapter:(AZRewardedVideoAdapter *)adapter;
- (void)rewardedVideoDidFailToLoadForAdapter:(AZRewardedVideoAdapter *)adapter error:(NSError *)error;
- (void)rewardedVideoDidExpireForAdapter:(AZRewardedVideoAdapter *)adapter;
- (void)rewardedVideoDidFailToPlayForAdapter:(AZRewardedVideoAdapter *)adapter error:(NSError *)error;
- (void)rewardedVideoWillAppearForAdapter:(AZRewardedVideoAdapter *)adapter;
- (void)rewardedVideoDidAppearForAdapter:(AZRewardedVideoAdapter *)adapter;
- (void)rewardedVideoWillDisappearForAdapter:(AZRewardedVideoAdapter *)adapter;
- (void)rewardedVideoDidDisappearForAdapter:(AZRewardedVideoAdapter *)adapter;
- (void)rewardedVideoDidReceiveTapEventForAdapter:(AZRewardedVideoAdapter *)adapter;
- (void)rewardedVideoWillLeaveApplicationForAdapter:(AZRewardedVideoAdapter *)adapter;
- (void)rewardedVideoShouldRewardUserForAdapter:(AZRewardedVideoAdapter *)adapter reward:(AZRewardedVideoReward *)reward;

@optional
- (NSString *)rewardedVideoAdUnitId;
- (NSString *)rewardedVideoCustomerId;
- (MPAdConfiguration *)configuration;

@end
