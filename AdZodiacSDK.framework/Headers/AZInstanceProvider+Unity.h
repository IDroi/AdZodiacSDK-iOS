//
//  AZInstanceProvider+Unity.h
//  AdZodiacSDK
//
//  Copyright (c) 2016 AdZodiac. All rights reserved.
//

#import "AZInstanceProvider.h"

@class AZUnityRouter;

@interface AZInstanceProvider (Unity)

- (AZUnityRouter *)sharedMPUnityRouter;

@end
