//
//  ADZODIACNativeVideoAdRenderer.h
//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AZNativeAdRenderer.h"

@class AZNativeAdRendererConfiguration;
@class AZStaticNativeAdRendererSettings;

@interface ADZODIACNativeVideoAdRenderer : NSObject

@property (nonatomic, readonly) MPNativeViewSizeHandler viewSizeHandler;

+ (AZNativeAdRendererConfiguration *)rendererConfigurationWithRendererSettings:(id<AZNativeAdRendererSettings>)rendererSettings;

@end
