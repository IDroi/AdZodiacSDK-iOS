//
//  AZHTMLInterstitialViewController.h
//  AdZodiac
//
//  Copyright (c) 2012 AdZodiac, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "AZAdWebViewAgent.h"
#import "AZInterstitialViewController.h"

@class MPAdConfiguration;

@interface AZHTMLInterstitialViewController : AZInterstitialViewController <MPAdWebViewAgentDelegate>

@property (nonatomic, strong) AZAdWebViewAgent *backingViewAgent;

- (void)loadConfiguration:(AZAdZodiacAdInstance *)configuration;

@end
