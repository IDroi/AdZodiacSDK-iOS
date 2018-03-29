//
//  AZNativeAdSource.h
//  AdZodiac
//
//  Copyright (c) 2014 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AZNativeAdSourceDelegate.h"
@class AZNativeAdRequestTargeting;

@interface AZNativeAdSource : NSObject

@property (nonatomic, weak) id <AZNativeAdSourceDelegate> delegate;

+ (instancetype)source;
- (void)loadAdsWithAdUnitIdentifier:(NSString *)identifier rendererConfigurations:(NSArray *)rendererConfigurations andTargeting:(AZNativeAdRequestTargeting *)targeting;
- (void)deleteCacheForAdUnitIdentifier:(NSString *)identifier;
- (id)dequeueAdForAdUnitIdentifier:(NSString *)identifier;


@end
