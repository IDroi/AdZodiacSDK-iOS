//
//  MPError.h
//  AdZodiac
//
//  Copyright (c) 2012 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString * const kADZODIACErrorDomain;

typedef enum {
    ADZODIACErrorUnknown = -1,
    ADZODIACErrorNoInventory = 0,
    ADZODIACErrorAdUnitWarmingUp = 1,
    ADZODIACErrorNetworkTimedOut = 4,
    ADZODIACErrorServerError = 8,
    ADZODIACErrorAdapterNotFound = 16,
    ADZODIACErrorAdapterInvalid = 17,
    ADZODIACErrorAdapterHasNoInventory = 18
} ADZODIACErrorCode;

@interface ADZODIACError : NSError

+ (ADZODIACError *)errorWithCode:(ADZODIACErrorCode)code;

@end
