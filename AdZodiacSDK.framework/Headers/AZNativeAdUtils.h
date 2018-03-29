//
//  AZNativeAdUtils.h
//  AdZodiacSDK
//
//  Copyright (c) 2014 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSTimeInterval const kUpdateVisibleCellsInterval;

@interface AZNativeAdUtils : NSObject

+ (BOOL)addURLString:(NSString *)urlString toURLArray:(NSMutableArray *)urlArray;

@end
