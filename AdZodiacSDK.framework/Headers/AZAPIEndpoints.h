//
//  AZAPIEndpoints.h
//  AdZodiac
//
//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>

#define ADZODIAC_BASE_HOSTNAME                 @"ads.mopub.com"
#define ADZODIAC_BASE_HOSTNAME_FOR_TESTING     @"testing.ads.mopub.com"

#define ADZODIAC_API_PATH_AD_REQUEST           @"/m/ad"
#define ADZODIAC_API_PATH_CONVERSION           @"/m/open"
#define ADZODIAC_API_PATH_NATIVE_POSITIONING   @"/m/pos"
#define ADZODIAC_API_PATH_SESSION              @"/m/open"

@interface AZAPIEndpoints : NSObject

+ (void)setUsesHTTPS:(BOOL)usesHTTPS;
+ (NSString *)baseURL;
+ (NSString *)baseURLStringWithPath:(NSString *)path testing:(BOOL)testing;

@end
