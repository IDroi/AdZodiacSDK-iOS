//
//  ADZODIACPlayerManager.h
//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ADZODIACPlayerViewController;
@class ADZODIACNativeVideoAdConfigValues;
@class AZVideoConfig;
@class MPAdConfigurationLogEventProperties;

@interface ADZODIACPlayerManager : NSObject

+ (ADZODIACPlayerManager *)sharedInstance;
- (void)disposePlayerViewController;

- (ADZODIACPlayerViewController *)playerViewControllerWithVideoConfig:(AZVideoConfig *)videoConfig nativeVideoAdConfig:(ADZODIACNativeVideoAdConfigValues *)nativeVideoAdConfig logEventProperties:(MPAdConfigurationLogEventProperties *)logEventProperties;

@end
