//
//  FlurryNativeAdAdapter.h
//  AdZodiac Mediates Flurry
//
//  Created by Flurry.
//  Copyright (c) 2015 Yahoo, Inc. All rights reserved.
//

#import "AZNativeAdAdapter.h"
#import "FlurryAdNative.h"

@interface FlurryNativeAdAdapter : NSObject <AZNativeAdAdapter>

@property (nonatomic, weak) id<MPNativeAdAdapterDelegate> delegate;
@property (nonatomic, strong) UIView *videoViewContainer;

- (instancetype)initWithFlurryAdNative:(FlurryAdNative *)adNative;

@end
