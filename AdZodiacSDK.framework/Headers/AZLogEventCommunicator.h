//
//  AZLogEventCommunicator.h
//  AdZodiacSDK
//
//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AZLogEventCommunicator : NSObject

- (void)sendEvents:(NSArray *)events;
- (BOOL)isOverLimit;

@end
