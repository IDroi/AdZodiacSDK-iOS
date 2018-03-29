//
//  AZTimer.h
//  AdZodiac
//
//  Created by Andrew He on 3/8/11.
//  Copyright 2011 AdZodiac, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
 * AZTimer wraps an NSTimer and adds pause/resume functionality.
 */
@interface AZTimer : NSObject

@property (nonatomic, copy) NSString *runLoopMode;

+ (AZTimer *)timerWithTimeInterval:(NSTimeInterval)seconds
                            target:(id)target
                          selector:(SEL)aSelector
                           repeats:(BOOL)repeats;

- (BOOL)isValid;
- (void)invalidate;
- (BOOL)isScheduled;
- (BOOL)scheduleNow;
- (BOOL)pause;
- (BOOL)resume;
- (NSTimeInterval)initialTimeInterval;

@end
