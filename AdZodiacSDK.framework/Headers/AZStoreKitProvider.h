//
//  MPFeatureDetector.h
//  AdZodiac
//
//  Copyright (c) 2013 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AZGlobal.h"
#import <StoreKit/StoreKit.h>

@class SKStoreProductViewController;

@interface AZStoreKitProvider : NSObject

+ (BOOL)deviceHasStoreKit;
+ (SKStoreProductViewController *)buildController;

@end

@protocol MPSKStoreProductViewControllerDelegate <SKStoreProductViewControllerDelegate>
@end
