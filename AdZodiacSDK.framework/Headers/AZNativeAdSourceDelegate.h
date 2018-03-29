//
//  AZNativeAdSourceDelegate.h
//  AdZodiac
//
//  Copyright (c) 2014 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AZNativeAdSource;

@protocol AZNativeAdSourceDelegate <NSObject>

- (void)adSourceDidFinishRequest:(AZNativeAdSource *)source;

@end
