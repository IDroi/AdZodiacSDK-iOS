//
//  AZAdZodiacRewardedPlayableCustomEvent.h
//  AdZodiacSDK
//
//  Copyright © 2016 AdZodiac. All rights reserved.
//

#import "AZRewardedVideoCustomEvent.h"
#import "AZPrivateRewardedVideoCustomEventDelegate.h"

@interface AZAdZodiacRewardedPlayableCustomEvent : AZRewardedVideoCustomEvent
@property (nonatomic, readonly) NSTimeInterval countdownDuration;

@property (nonatomic, weak) id<AZPrivateRewardedVideoCustomEventDelegate> delegate;
@end
