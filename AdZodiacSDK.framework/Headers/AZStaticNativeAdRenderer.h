//
//  AZStaticNativeAdRenderer.h
//  AdZodiacSDK
//
//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AZNativeAdRenderer.h"

@class AZNativeAdRendererConfiguration;
@class AZStaticNativeAdRendererSettings;

@interface AZStaticNativeAdRenderer : NSObject <AZNativeAdRenderer>

@property (nonatomic, readonly) MPNativeViewSizeHandler viewSizeHandler;

+ (AZNativeAdRendererConfiguration *)rendererConfigurationWithRendererSettings:(id<AZNativeAdRendererSettings>)rendererSettings;

@end
