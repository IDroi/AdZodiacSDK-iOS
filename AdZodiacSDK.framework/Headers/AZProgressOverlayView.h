//
//  AZProgressOverlayView.h
//  AdZodiac
//
//  Created by Andrew He on 7/18/12.
//  Copyright 2012 AdZodiac, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol MPProgressOverlayViewDelegate;

@interface AZProgressOverlayView : UIView {
    id<MPProgressOverlayViewDelegate> __weak _delegate;
    UIView *_outerContainer;
    UIView *_innerContainer;
    UIActivityIndicatorView *_activityIndicator;
    UIButton *_closeButton;
    CGPoint _closeButtonPortraitCenter;
}

@property (nonatomic, weak) id<MPProgressOverlayViewDelegate> delegate;
@property (nonatomic, strong) UIButton *closeButton;

- (id)initWithDelegate:(id<MPProgressOverlayViewDelegate>)delegate;
- (void)show;
- (void)hide;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@protocol MPProgressOverlayViewDelegate <NSObject>

@optional
- (void)overlayCancelButtonPressed;
- (void)overlayDidAppear;

@end
