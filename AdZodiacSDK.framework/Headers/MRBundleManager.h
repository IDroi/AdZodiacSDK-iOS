//
//  MRBundleManager.h
//  AdZodiac
//
//  Copyright (c) 2013 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MRBundleManager : NSObject

+ (MRBundleManager *)sharedManager;
- (NSString *)mraidPath;

@end
