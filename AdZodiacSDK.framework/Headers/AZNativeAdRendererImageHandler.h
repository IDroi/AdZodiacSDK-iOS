//
//  AZNativeAdRendererImageHandler.h
//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol MPNativeAdRendererImageHandlerDelegate <NSObject>

- (BOOL)nativeAdViewInViewHierarchy;

@end

@interface AZNativeAdRendererImageHandler : NSObject


@property (nonatomic, weak) id<MPNativeAdRendererImageHandlerDelegate> delegate;

- (void)loadImageForURL:(NSURL *)imageURL intoImageView:(UIImageView *)imageView;

@end
