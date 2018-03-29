//
//  AZViewabilityAdapterMoat.h
//  AdZodiacSDK
//
//  Copyright © 2017 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AZViewabilityAdapter.h"

__attribute__((weak_import)) @interface AZViewabilityAdapterMoat : NSObject <AZViewabilityAdapter>
@property (nonatomic, readonly) BOOL isTracking;

- (instancetype)initWithAdView:(AZWebView *)webView isVideo:(BOOL)isVideo startTrackingImmediately:(BOOL)startTracking;
- (void)startTracking;
- (void)stopTracking;
- (void)registerFriendlyObstructionView:(UIView *)view;

@end
