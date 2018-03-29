//
//  AZVASTTracking.h
//  AdZodiacSDK
//
//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AZVideoConfig;

typedef NS_ENUM(NSUInteger, MPVideoEventType) {
    MPVideoEventTypeTimeUpdate = 0,
    MPVideoEventTypeMuted,
    MPVideoEventTypeUnmuted,
    MPVideoEventTypePause,
    MPVideoEventTypeResume,
    MPVideoEventTypeFullScreen,
    MPVideoEventTypeExitFullScreen,
    MPVideoEventTypeExpand,
    MPVideoEventTypeCollapse,
    MPVideoEventTypeCompleted,
    MPVideoEventTypeImpression,
    MPVideoEventTypeClick,
    MPVideoEventTypeError
};

@interface AZVASTTracking : NSObject

@property (nonatomic, readonly) AZVideoConfig *videoConfig;
@property (nonatomic) NSTimeInterval videoDuration;

- (instancetype)initWithMPVideoConfig:(AZVideoConfig *)videoConfig videoView:(UIView *)videoView;
- (void)handleVideoEvent:(MPVideoEventType)videoEventType videoTimeOffset:(NSTimeInterval)timeOffset;
- (void)handleNewVideoView:(UIView *)videoView;

@end
