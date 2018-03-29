//
//  AZLogProvider.h
//  AdZodiac
//
//  Copyright (c) 2014 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AZLogging.h"

@protocol AZLogger;

@interface AZLogProvider : NSObject

+ (AZLogProvider *)sharedLogProvider;
- (void)addLogger:(id<AZLogger>)logger;
- (void)removeLogger:(id<AZLogger>)logger;
- (void)logMessage:(NSString *)message atLogLevel:(AZLogLevel)logLevel;

@end

@protocol AZLogger <NSObject>

- (AZLogLevel)logLevel;
- (void)logMessage:(NSString *)message;

@end
