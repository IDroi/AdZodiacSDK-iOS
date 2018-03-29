//
//  AZMRAIDInterstitialViewController.h
//  AdZodiac
//
//  Copyright (c) 2012 AdZodiac, Inc. All rights reserved.
//

#import "AZInterstitialViewController.h"
#import "AZForceableOrientationProtocol.h"

////////////////////////////////////////////////////////////////////////////////////////////////////

@protocol MPMRAIDInterstitialViewControllerDelegate;
@class MPAdConfiguration;

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface AZMRAIDInterstitialViewController : AZInterstitialViewController <AZForceableOrientationProtocol>

- (id)initWithAdConfiguration:(MPAdConfiguration *)configuration;
- (void)startLoading;

@end

