//
//  AZNativeAdRendererConfiguration.h
//  AdZodiacSDK
//
//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol AZNativeAdRendererSettings;

/*
 * All native ads loaded with the AdZodiac SDK take a renderer configuration object. This object links
 * the necessary native ad objects together.
 *
 * The configuration stores the renderer settings that will eventually be used when initializing the
 * render class. Furthermore, the configuration indicates what custom events the renderer class supports
 * through the supportedCustomEvents property.
 */
@interface AZNativeAdRendererConfiguration : NSObject

/*
 * The settings that inform the ad renderer about how it should render the ad.
 */
@property (nonatomic, strong) id<AZNativeAdRendererSettings> rendererSettings;

/*
 * The renderer class used to render supported custom events.
 */
@property (nonatomic, assign) Class rendererClass;

/*
 * An array of custom event class names (as strings) that the renderClass can
 * render.
 */
@property (nonatomic, strong) NSArray *supportedCustomEvents;

@end
