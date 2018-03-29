//
//  AZAdZodiacNativeCustomEvent.h
//  AdZodiacSDK
//
//  Copyright (c) 2014 AdZodiac. All rights reserved.
//

#import "AZNativeCustomEvent.h"
#import "AZServerCommunicator.h"

@interface AZAdZodiacNativeCustomEvent : AZNativeCustomEvent <AZServerCommunicatorDelegate>

@property(nonatomic, strong) AZServerCommunicator *communicator;
@end
