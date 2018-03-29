//
//  AZAdZodiacRewardedVideoCustomEvent.h
//  AdZodiacSDK

//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#import "AZRewardedVideoCustomEvent.h"
#import "AZPrivateRewardedVideoCustomEventDelegate.h"

@interface AZAdZodiacRewardedVideoCustomEvent : AZRewardedVideoCustomEvent

@property (nonatomic, weak) id<AZPrivateRewardedVideoCustomEventDelegate> delegate;

@end
