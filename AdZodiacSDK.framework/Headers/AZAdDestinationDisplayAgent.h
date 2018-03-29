//
//  AZAdDestinationDisplayAgent.h
//  AdZodiac
//
//  Copyright (c) 2013 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AZActivityViewControllerHelper+TweetShare.h"
#import "AZURLResolver.h"
#import "AZProgressOverlayView.h"
#import "AZAdBrowserController.h"
#import "AZStoreKitProvider.h"

typedef NS_ENUM(NSInteger, ADZODIACDisplayAgentType) {
    ADZODIACDisplayAgentTypeInApp = 0,
    ADZODIACDisplayAgentTypeNativeSafari,
    ADZODIACDisplayAgentTypeSafariViewController
};

@protocol MPAdDestinationDisplayAgentDelegate;

@interface AZAdDestinationDisplayAgent : NSObject <MPProgressOverlayViewDelegate,
                                                   MPAdBrowserControllerDelegate,
                                                   MPSKStoreProductViewControllerDelegate,
                                                   MPActivityViewControllerHelperDelegate>

@property (nonatomic, weak) id<MPAdDestinationDisplayAgentDelegate> delegate;

+ (AZAdDestinationDisplayAgent *)agentWithDelegate:(id<MPAdDestinationDisplayAgentDelegate>)delegate;
+ (BOOL)shouldUseSafariViewController;
- (void)displayDestinationForURL:(NSURL *)URL;
- (void)cancel;

@end

@protocol MPAdDestinationDisplayAgentDelegate <NSObject>

- (UIViewController *)viewControllerForPresentingModalView;
- (void)displayAgentWillPresentModal;
- (void)displayAgentWillLeaveApplication;
- (void)displayAgentDidDismissModal;

@optional

- (MPAdConfiguration *)adConfiguration;

@end
