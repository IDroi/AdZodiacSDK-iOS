//
//  AZWebView+Viewability.h
//  AdZodiacSDK
//
//  Copyright © 2016 AdZodiac. All rights reserved.
//

#import "AZWebView.h"

@interface AZWebView (Viewability)

// Returns the UIWebView or WKWebView instance attached to this AZWebView. If using WKWebView, this property will return
// the WKWebView instance regardless of if it's currently in the view hierarchy of this AZWebView. Exposed for the
// purpose of having a reliable way to attach viewability SDKs to a web view.
//
// Note: Please do not alter the hierarchy of this view (i.e., don't ever call it with `addSubview` or
// `removeFromSuperview`). Call those methods on the AZWebView instance instead.
@property (nonatomic, readonly) UIView *containedWebView;

@end
