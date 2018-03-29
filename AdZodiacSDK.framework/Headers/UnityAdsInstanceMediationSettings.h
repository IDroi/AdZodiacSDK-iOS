//
//  UnityAdsInstanceMediationSettings.h
//  AdZodiacSDK
//
//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>

#if __has_include(<MoPub/MoPub.h>)
    #import <AdZodiac/AdZodiac.h>
#else
    #import "AZMediationSettingsProtocol.h"
#endif

/*
 * `UnityInstanceMediationSettings` allows the application to provide per-instance properties
 * to configure aspects of Unity ads. See `AZMediationSettingsProtocol` to see how mediation settings
 * are used.
 */
@interface UnityAdsInstanceMediationSettings : NSObject <AZMediationSettingsProtocol>

/*
 * An NSString that's used as an identifier for a specific user, and is passed along to Unity
 * when the rewarded video ad is played.
 */
@property (nonatomic, copy) NSString *userIdentifier;

@end