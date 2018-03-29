//
//  AZLogEvent+NativeVideo.h
//  AdZodiacSDK
//
//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "AZLogEvent.h"

typedef NS_ENUM(NSInteger, MPNativeVideoEventType) {
    MPNativeVideoEventTypeDownloadStart,
    MPNativeVideoEventTypeVideoReady,
    MPNativeVideoEventTypeBuffering,
    MPNativeVideoEventTypeDownloadFinished,
    MPNativeVideoEventTypeErrorFailedToPlay,
    MPNativeVideoEventTypeErrorDuringPlayback,
};

@interface AZLogEvent (NativeVideo)

- (instancetype)initWithLogEventProperties:(MPAdConfigurationLogEventProperties *)logEventProperties nativeVideoEventType:(MPNativeVideoEventType)nativeVideoEventType;

@end
