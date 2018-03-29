//
// Created by peter.shih on 2018/2/13.
// Copyright (c) 2018 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AZAdPercentage;

@interface AZAdPercentageSource : NSObject

+ (void)loadAdPercentageWithAdUnitId:(NSString *)adUnitId handler:(void (^)(AZAdPercentage *adPercentage, NSError *error))handler;

@end
