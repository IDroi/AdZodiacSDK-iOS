//
//  ADZODIACAVPlayer.h
//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#import <AVFoundation/AVFoundation.h>

@class ADZODIACAVPlayer;

@protocol ADZODIACAVPlayerDelegate <NSObject>

- (void)avPlayer:(ADZODIACAVPlayer *)player didError:(NSError *)error withMessage:(NSString *)message;

- (void)avPlayer:(ADZODIACAVPlayer *)player playbackTimeDidProgress:(NSTimeInterval)currentPlaybackTime;

- (void)avPlayerDidFinishPlayback:(ADZODIACAVPlayer *)player;

- (void)avPlayerDidRecoverFromStall:(ADZODIACAVPlayer *)player;

- (void)avPlayerDidStall:(ADZODIACAVPlayer *)player;

@end


@interface ADZODIACAVPlayer : AVPlayer

// Indicates the duration of the player item.
@property (nonatomic, readonly) NSTimeInterval currentItemDuration;

// Returns the current time of the current player item.
@property (nonatomic, readonly) NSTimeInterval currentPlaybackTime;

- (id)initWithDelegate:(id<ADZODIACAVPlayerDelegate>)delegate playerItem:(AVPlayerItem *)playerItem;

- (void)dispose;

@end
