//
//  AZNativePositionSource.h
//  AdZodiac
//
//  Copyright (c) 2014 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AZAdPositioning;

typedef enum : NSUInteger {
    MPNativePositionSourceInvalidAdUnitIdentifier,
    MPNativePositionSourceEmptyResponse,
    MPNativePositionSourceDeserializationFailed,
    MPNativePositionSourceConnectionFailed,
} MPNativePositionSourceErrorCode;

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface AZNativePositionSource : NSObject

- (void)loadPositionsWithAdUnitIdentifier:(NSString *)identifier completionHandler:(void (^)(AZAdPositioning *positioning, NSError *error))completionHandler;
//- (void)cancel;

@end
