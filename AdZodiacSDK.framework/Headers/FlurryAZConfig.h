//
//  FlurryAZConfig.h
//  AdZodiac Mediates Flurry
//
//  Created by Flurry.
//  Copyright (c) 2015 Yahoo, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Flurry.h"

#define FlurryMediationOrigin @"Flurry_Adzodiac_iOS"
#define FlurryAdapterVersion @"7.6.4"

@interface FlurryAZConfig : NSObject

+ (void)startSessionWithApiKey:(NSString *) apiKey;

@end
