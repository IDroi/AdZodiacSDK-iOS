//
//  AZRewardedVideoConnection.h
//  AdZodiacSDK
//  Copyright © 2016 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class AZRewardedVideoConnection;

@protocol MPRewardedVideoConnectionDelegate <NSObject>

- (void)rewardedVideoConnectionCompleted:(AZRewardedVideoConnection *)connection url:(NSURL *)url;

@end

@interface AZRewardedVideoConnection : NSObject

- (instancetype)initWithUrl:(NSURL *)url delegate:(id<MPRewardedVideoConnectionDelegate>)delegate;
- (void)sendRewardedVideoCompletionRequest;

@end
