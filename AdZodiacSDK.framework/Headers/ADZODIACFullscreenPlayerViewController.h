//
//  ADZODIACFullscreenPlayerViewController.h
//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ADZODIACPlayerViewController;
@class ADZODIACPlayerView;
@class ADZODIACFullscreenPlayerViewController;

@protocol ADZODIACFullscreenPlayerViewControllerDelegate <NSObject>

- (void)playerDidProgressToTime:(NSTimeInterval)playbackTime;
- (void)ctaTapped:(ADZODIACFullscreenPlayerViewController *)viewController;
- (void)fullscreenPlayerWillLeaveApplication:(ADZODIACFullscreenPlayerViewController *)viewController;

@end

typedef void (^ADZODIACFullScreenPlayerViewControllerDismissBlock)(UIView *originalParentView);

@interface ADZODIACFullscreenPlayerViewController : UIViewController

@property (nonatomic) ADZODIACPlayerView *playerView;

@property (nonatomic, weak) id<ADZODIACFullscreenPlayerViewControllerDelegate> delegate;

- (instancetype)initWithVideoPlayer:(ADZODIACPlayerViewController *)playerController dismissBlock:(ADZODIACFullScreenPlayerViewControllerDismissBlock)dismiss;

@end
