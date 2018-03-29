//
//  AZLogEventRecorder.h
//  AdZodiacSDK
//
//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AZLogEvent;

void AZAddLogEvent(AZLogEvent *event);

@interface AZLogEventRecorder : NSObject

- (void)addEvent:(AZLogEvent *)event;

@end