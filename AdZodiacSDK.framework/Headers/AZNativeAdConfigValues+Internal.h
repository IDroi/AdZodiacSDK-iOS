//
//  AZNativeAdConfigValues+Internal.h
//  AdZodiacSDK
//
//  Copyright © 2017 AdZodiac. All rights reserved.
//

#import "AZNativeAdConfigValues.h"

@interface AZNativeAdConfigValues (Internal)

- (BOOL)isValidPercentage:(NSInteger)percentage;
- (BOOL)isValidTimeInterval:(NSTimeInterval)timeInterval;
- (BOOL)isValidNumberOfPixels:(CGFloat)pixels;

@end
