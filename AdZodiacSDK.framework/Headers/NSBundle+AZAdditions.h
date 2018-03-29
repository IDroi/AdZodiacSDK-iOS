//
//  NSBundle+MPAdditions.h
//  AdZodiacSDK
//
//  Copyright © 2016 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSBundle (AZAdditions)

/**
 * Retrieves the bundle that contains the AdZodiacSDK resources.
 * @param aClass MoPub class. Typically will be self.class.
 * @returns The bundle containing the AdZodiacSDK resources.
 */
+ (NSBundle *)resourceBundleForClass:(Class)aClass;

@end
