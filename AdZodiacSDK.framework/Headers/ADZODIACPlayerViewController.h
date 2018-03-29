//
//  ADZODIACPlayerViewController.h
//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ADZODIACPlayerView.h"

@class AVPlayerItem;
@class ADZODIACAVPlayer;
@class ADZODIACPlayerViewController;
@class ADZODIACNativeVideoAdConfigValues;
@class MPAdConfigurationLogEventProperties;
@class AZVASTTracking;
@class AZVideoConfig;

@protocol ADZODIACPlayerViewControllerDelegate <NSObject>

@optional

- (void)willEnterFullscreen:(ADZODIACPlayerViewController *)viewController;
- (void)playerPlaybackWillStart:(ADZODIACPlayerViewController *)player;
- (void)playerPlaybackDidStart:(ADZODIACPlayerViewController *)player;
- (void)playerDidProgressToTime:(NSTimeInterval)playbackTime;
- (void)playerViewController:(ADZODIACPlayerViewController *)playerViewController didTapReplayButton:(ADZODIACPlayerView *)view;
- (void)playerViewController:(ADZODIACPlayerViewController *)playerViewController willShowReplayView:(ADZODIACPlayerView *)view;
- (void)playerViewController:(ADZODIACPlayerViewController *)playerViewController didStall:(ADZODIACAVPlayer *)player;
- (void)playerViewController:(ADZODIACPlayerViewController *)playerViewController didRecoverFromStall:(ADZODIACAVPlayer *)player;

- (UIViewController *)viewControllerForPresentingModalView;

@end

@interface ADZODIACPlayerViewController : UIViewController

@property (nonatomic, readonly) NSURL *mediaURL;

@property (nonatomic, readonly) ADZODIACPlayerView *playerView;
@property (nonatomic, readonly) AVPlayerItem *playerItem;
@property (nonatomic, readonly) ADZODIACAVPlayer *avPlayer;
@property (nonatomic) AZVASTTracking *vastTracking;
@property (nonatomic, readonly) CGFloat videoAspectRatio;
@property (nonatomic, readonly) ADZODIACNativeVideoAdConfigValues *nativeVideoAdConfig;

#pragma mark - Configurations/States
@property (nonatomic) ADZODIACPlayerDisplayMode displayMode;
@property (nonatomic) BOOL muted;
@property (nonatomic) BOOL startedLoading;
@property (nonatomic) BOOL playing;
@property (nonatomic) BOOL paused;
@property (nonatomic) BOOL isReadyToPlay;
@property (nonatomic) BOOL disposed;

#pragma - Call to action click tracking url
@property (nonatomic) NSURL *defaultActionURL;

@property (nonatomic, weak) id<ADZODIACPlayerViewControllerDelegate> delegate;

#pragma mark - Initializer
- (instancetype)initWithVideoConfig:(AZVideoConfig *)videoConfig nativeVideoAdConfig:(ADZODIACNativeVideoAdConfigValues *)nativeVideoAdConfig logEventProperties:(MPAdConfigurationLogEventProperties *)logEventProperties;
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

- (void)loadAndPlayVideo;
- (void)seekToTime:(NSTimeInterval)time;
- (void)pause;
- (void)resume;
- (void)dispose;

- (BOOL)shouldStartNewPlayer;
- (BOOL)shouldResumePlayer;
- (BOOL)shouldPausePlayer;

- (void)willEnterFullscreen;
- (void)willExitFullscreen;

@end
