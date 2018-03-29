//
//  AZNativeAdRenderingImageLoader.h
//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AZNativeAdRendererImageHandler;

@interface AZNativeAdRenderingImageLoader : NSObject

- (instancetype)initWithImageHandler:(AZNativeAdRendererImageHandler *)imageHandler;

- (void)loadImageForURL:(NSURL *)url intoImageView:(UIImageView *)imageView;

@end
