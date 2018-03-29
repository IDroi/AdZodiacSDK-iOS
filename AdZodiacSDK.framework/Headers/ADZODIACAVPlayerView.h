//
//  MPAVPlayerView.h
//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AVPlayer;

@interface ADZODIACAVPlayerView : UIView

@property (nonatomic) AVPlayer *player;
@property (nonatomic) NSString *videoGravity;

@end
