//
//  MPPlayerView.h
//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ADZODIACAVPlayer.h"

@class ADZODIACPlayerView;

typedef NS_ENUM(NSUInteger, ADZODIACPlayerDisplayMode) {
    ADZODIACPlayerDisplayModeInline = 0,
    ADZODIACPlayerDisplayModeFullscreen
};

@protocol ADZODIACPlayerViewDelegate <NSObject>

- (void)playerViewDidTapReplayButton:(ADZODIACPlayerView *)view;
- (void)playerViewWillShowReplayView:(ADZODIACPlayerView *)view;
- (void)playerViewWillEnterFullscreen:(ADZODIACPlayerView *)view;

@end

@interface ADZODIACPlayerView : UIControl

@property (nonatomic) ADZODIACAVPlayer *avPlayer;
@property (nonatomic) ADZODIACPlayerDisplayMode displayMode;
@property (nonatomic, copy) NSString *videoGravity;

- (instancetype)initWithFrame:(CGRect)frame delegate:(id<ADZODIACPlayerViewDelegate>)delegate;

- (void)createPlayerView;
- (void)playbackTimeDidProgress;
- (void)playbackDidFinish;
- (void)setProgressBarVisible:(BOOL)visible;
- (void)handleVideoInitFailure;

@end
