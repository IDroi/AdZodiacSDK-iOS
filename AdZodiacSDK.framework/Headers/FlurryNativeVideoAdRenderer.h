//
//  FlurryNativeVideoAdRenderer.m
//  AdZodiac Mediates Flurry
//
//  Created by Flurry.
//  Copyright (c) 2016 Yahoo, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AZNativeAdRenderer.h"

@class AZNativeAdRendererConfiguration;
@class AZStaticNativeAdRendererSettings;

/*
 * Certified with Flurry 8.2.2
 */
@interface FlurryNativeVideoAdRenderer : NSObject <AZNativeAdRenderer>

@property (nonatomic, readonly) MPNativeViewSizeHandler viewSizeHandler;

+ (AZNativeAdRendererConfiguration *)rendererConfigurationWithRendererSettings:(id<AZNativeAdRendererSettings>)rendererSettings;

@end
