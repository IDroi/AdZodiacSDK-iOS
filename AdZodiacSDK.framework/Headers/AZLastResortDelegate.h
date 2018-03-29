//
//  AZLastResortDelegate.h
//  AdZodiac
//
//  Copyright (c) 2013 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <StoreKit/StoreKit.h>

@interface AZLastResortDelegate : NSObject <SKStoreProductViewControllerDelegate>

+ (id)sharedDelegate;

@end
