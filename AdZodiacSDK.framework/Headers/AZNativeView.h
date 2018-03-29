//
//  AZNativeView.h
//  AdZodiacSDK
//
//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol MPNativeViewDelegate;

@interface AZNativeView : UIView

@property (nonatomic, weak) id<MPNativeViewDelegate> delegate;

@end

@protocol MPNativeViewDelegate <NSObject>

@required

- (void)nativeViewWillMoveToSuperview:(UIView *)superview;

@end
