//
//  AZAdWebViewAgent.h
//  AdZodiac
//
//  Copyright (c) 2013 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AZAdDestinationDisplayAgent.h"
#import "AZWebView.h"

enum {
    MPAdWebViewEventAdDidAppear     = 0,
    MPAdWebViewEventAdDidDisappear  = 1
};
typedef NSUInteger MPAdWebViewEvent;

@protocol MPAdWebViewAgentDelegate;

@class MPAdConfiguration;
@class CLLocation;
@class AZViewabilityTracker;
@class AZAdZodiacAdInstance;

@interface AZAdWebViewAgent : NSObject <MPWebViewDelegate, MPAdDestinationDisplayAgentDelegate>

@property (nonatomic, strong) AZWebView *view;
@property (nonatomic, weak) id<MPAdWebViewAgentDelegate> delegate;

@property (nonatomic, strong, readonly) AZViewabilityTracker *viewabilityTracker;

- (id)initWithAdWebViewFrame:(CGRect)frame delegate:(id<MPAdWebViewAgentDelegate>)delegate;
- (void)loadConfiguration:(AZAdZodiacAdInstance *)configuration;
- (void)rotateToOrientation:(UIInterfaceOrientation)orientation;
- (void)invokeJavaScriptForEvent:(MPAdWebViewEvent)event;
- (void)forceRedraw;

- (void)enableRequestHandling;
- (void)disableRequestHandling;

- (void)startViewabilityTracker;

@end

@protocol MPAdWebViewAgentDelegate <NSObject>

- (NSString *)adUnitId;
- (CLLocation *)location;
- (UIViewController *)viewControllerForPresentingModalView;
- (void)adDidClose:(AZWebView *)ad;
- (void)adDidFinishLoadingAd:(AZWebView *)ad;
- (void)adDidFailToLoadAd:(AZWebView *)ad;
- (void)adActionWillBegin:(AZWebView *)ad;
- (void)adActionWillLeaveApplication:(AZWebView *)ad;
- (void)adActionDidFinish:(AZWebView *)ad;

@end
