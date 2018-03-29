//
//  AZNativeAdSourceQueue.h
//  AdZodiac
//
//  Copyright (c) 2014 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>
@class AZNativeAdRequestTargeting;
@class AZNativeAd;

@protocol MPNativeAdSourceQueueDelegate;

@interface AZNativeAdSourceQueue : NSObject

@property (nonatomic, weak) id <MPNativeAdSourceQueueDelegate> delegate;


- (instancetype)initWithAdUnitIdentifier:(NSString *)identifier rendererConfigurations:(NSArray *)rendererConfigurations andTargeting:(AZNativeAdRequestTargeting *)targeting;
- (AZNativeAd *)dequeueAdWithMaxAge:(NSTimeInterval)age;
- (NSUInteger)count;
- (void)loadAds;
- (void)cancelRequests;

@end

@protocol MPNativeAdSourceQueueDelegate <NSObject>

- (void)adSourceQueueAdIsAvailable:(AZNativeAdSourceQueue *)source;

@end
