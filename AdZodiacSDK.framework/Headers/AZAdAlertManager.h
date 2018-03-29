//
//  AZAdAlertManager.h
//  AdZodiac
//
//  Copyright (c) 2013 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AZGlobal.h"

@class CLLocation;
@protocol MPAdAlertManagerDelegate;

@class MPAdConfiguration;

@interface AZAdAlertManager : NSObject <MPAdAlertManagerProtocol>

@end

@protocol MPAdAlertManagerDelegate <NSObject>

@required
- (UIViewController *)viewControllerForPresentingMailVC;
- (void)adAlertManagerDidTriggerAlert:(AZAdAlertManager *)manager;

@optional
- (void)adAlertManagerDidProcessAlert:(AZAdAlertManager *)manager;

@end