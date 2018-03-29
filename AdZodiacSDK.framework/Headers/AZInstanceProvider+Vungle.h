//
//  AZInstanceProvider+Vungle.h
//  AdZodiacSDK
//
//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#import "AZInstanceProvider.h"

@class AZVungleRouter;

@interface AZInstanceProvider (Vungle)

- (AZVungleRouter *)sharedMPVungleRouter;

@end
