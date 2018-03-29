//
//  AZCoreInstanceProvider.h
//  AdZodiac
//
//  Copyright (c) 2014 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AZGlobal.h"
#import "AZURLResolver.h"

extern NSString * const brandNumber;
extern NSString * const channelNumber;
extern NSString * const customerNumber;

@class MPAdConfiguration;

// Fetching Ads
@class AZAdServerCommunicator;
@protocol MPAdServerCommunicatorDelegate;

// URL Handling
@class AZAdDestinationDisplayAgent;
@protocol MPAdDestinationDisplayAgentDelegate;

// Utilities
@class AZAdAlertManager, AZAdAlertGestureRecognizer;
@class AZAnalyticsTracker;
@class AZReachability;
@class AZTimer;
@class AZGeolocationProvider;
@class CLLocationManager;
@class AZLogEventRecorder;
@class AZNetworkManager;

typedef id(^MPSingletonProviderBlock)(void);


typedef NS_OPTIONS(NSUInteger, MPATSSetting) {
    MPATSSettingEnabled = 0,
    MPATSSettingAllowsArbitraryLoads = (1 << 0),
    MPATSSettingAllowsArbitraryLoadsForMedia = (1 << 1),
    MPATSSettingAllowsArbitraryLoadsInWebContent = (1 << 2),
    MPATSSettingRequiresCertificateTransparency = (1 << 3),
    MPATSSettingAllowsLocalNetworking = (1 << 4),
};

@interface AZCoreInstanceProvider : NSObject

+ (instancetype)sharedProvider;
- (id)singletonForClass:(Class)klass provider:(MPSingletonProviderBlock)provider;

- (void)keepObjectAliveForCurrentRunLoopIteration:(id)anObject;

#pragma mark - Fetching Ads
- (NSMutableURLRequest *)buildConfiguredURLRequestWithURL:(NSURL *)URL;
- (AZAdServerCommunicator *)buildMPAdServerCommunicatorWithDelegate:(id<MPAdServerCommunicatorDelegate>)delegate;

#pragma mark - URL Handling
- (AZURLResolver *)buildMPURLResolverWithURL:(NSURL *)URL completion:(MPURLResolverCompletionBlock)completion;
- (AZAdDestinationDisplayAgent *)buildMPAdDestinationDisplayAgentWithDelegate:(id<MPAdDestinationDisplayAgentDelegate>)delegate;

#pragma mark - Utilities
- (UIDevice *)sharedCurrentDevice;
- (AZGeolocationProvider *)sharedMPGeolocationProvider;
- (CLLocationManager *)buildCLLocationManager;
- (id<MPAdAlertManagerProtocol>)buildMPAdAlertManagerWithDelegate:(id)delegate;
- (AZAdAlertGestureRecognizer *)buildMPAdAlertGestureRecognizerWithTarget:(id)target action:(SEL)action;
- (NSOperationQueue *)sharedOperationQueue;
- (AZAnalyticsTracker *)sharedMPAnalyticsTracker;
- (AZReachability *)sharedMPReachability;
- (AZLogEventRecorder *)sharedLogEventRecorder;
- (AZNetworkManager *)sharedNetworkManager;
- (MPATSSetting)appTransportSecuritySettings;

// This call may return nil and may not update if the user hot-swaps the device's sim card.
- (NSDictionary *)sharedCarrierInfo;

- (AZTimer *)buildMPTimerWithTimeInterval:(NSTimeInterval)seconds target:(id)target selector:(SEL)selector repeats:(BOOL)repeats;

@property (nonatomic, copy) NSString *adUuid;

- (NSString *)brandNumber;
- (NSString *)channelNumber;
- (NSString *)customerNumber;

@end
