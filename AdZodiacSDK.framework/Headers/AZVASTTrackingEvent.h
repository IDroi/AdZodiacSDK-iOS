//
//  AZVASTTrackingEvent.h
//  AdZodiac
//
//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AZVASTModel.h"

@class AZVASTDurationOffset;

extern NSString * const MPVASTTrackingEventTypeCreativeView;
extern NSString * const MPVASTTrackingEventTypeStart;
extern NSString * const MPVASTTrackingEventTypeFirstQuartile;
extern NSString * const MPVASTTrackingEventTypeMidpoint;
extern NSString * const MPVASTTrackingEventTypeThirdQuartile;
extern NSString * const MPVASTTrackingEventTypeComplete;
extern NSString * const MPVASTTrackingEventTypeMute;
extern NSString * const MPVASTTrackingEventTypeUnmute;
extern NSString * const MPVASTTrackingEventTypePause;
extern NSString * const MPVASTTrackingEventTypeRewind;
extern NSString * const MPVASTTrackingEventTypeResume;
extern NSString * const MPVASTTrackingEventTypeFullscreen;
extern NSString * const MPVASTTrackingEventTypeExitFullscreen;
extern NSString * const MPVASTTrackingEventTypeExpand;
extern NSString * const MPVASTTrackingEventTypeCollapse;
extern NSString * const MPVASTTrackingEventTypeAcceptInvitationLinear;
extern NSString * const MPVASTTrackingEventTypeCloseLinear;
extern NSString * const MPVASTTrackingEventTypeSkip;
extern NSString * const MPVASTTrackingEventTypeProgress;

@interface AZVASTTrackingEvent : AZVASTModel

@property (nonatomic, copy, readonly) NSString *eventType;
@property (nonatomic, copy, readonly) NSURL *URL;
@property (nonatomic, readonly) AZVASTDurationOffset *progressOffset;

@end
