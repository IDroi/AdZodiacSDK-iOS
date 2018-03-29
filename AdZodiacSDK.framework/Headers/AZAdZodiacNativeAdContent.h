//
// Created by peter.shih on 2018/3/2.
// Copyright (c) 2018 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface AZAdZodiacNativeAdContent : NSObject

@property (nonatomic, readonly) NSArray *impressionTrackerURLs;
@property (nonatomic, readonly) NSArray *clickTrackerURLs;
@property (nonatomic, readonly) NSDictionary *properties;

- (AZAdZodiacNativeAdContent *)initWithDict:(NSDictionary *)adInstanceContent;

@end