//
//  AZRewardedVideo+Internal.h
//  AdZodiacSDK
//  Copyright © 2016 AdZodiac. All rights reserved.
//

#import "AZRewardedVideo.h"

@interface AZRewardedVideo (Internal)

+ (AZRewardedVideo *)sharedInstance;
- (void)startRewardedVideoConnectionWithUrl:(NSURL *)url;

@end
