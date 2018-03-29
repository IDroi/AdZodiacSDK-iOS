//
//  AZViewabilityAdapter.h
//  AdZodiacSDK
//
//  Copyright © 2017 AdZodiac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AZWebView.h"
#import "AZWebView+Viewability.h"

@protocol AZViewabilityAdapter <NSObject>
@property (nonatomic, readonly) BOOL isTracking;

- (instancetype)initWithAdView:(AZWebView *)webView isVideo:(BOOL)isVideo startTrackingImmediately:(BOOL)startTracking;
- (void)startTracking;
- (void)stopTracking;
- (void)registerFriendlyObstructionView:(UIView *)view;

@end
