//
//  AZLogEventRequestOperation.h
//  AdZodiac
//
//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "AZQRunLoopOperation.h"

@class AZLogEventRequest;

extern NSString * const MPRetryingHTTPOperationErrorDomain;

////////////////////////////////////////////////////////////////////////////////////////////////////

// Adapted from QHTTPOperation / RetryingHTTPOperation in Apple's MVCNetworking sample code.

@interface AZLogEventRequestOperation : AZQRunLoopOperation

// Things that are configured via the init method and can't be changed.
@property (copy, readonly) AZLogEventRequest *request;

// Things that are only meaningful after the operation is finished.
@property (copy, readonly) NSHTTPURLResponse *lastResponse;
@property (strong, readonly) NSMutableData *lastReceivedData;

- (instancetype)initWithRequest:(AZLogEventRequest *)request;

@end
