//
// Created by peter.shih on 2018/2/14.
// Copyright (c) 2018 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AZGlobal.h"


@interface AZAdZodiacAdInstance : NSObject

@property(nonatomic, strong) id content;
@property(nonatomic, strong) id title;
@property(nonatomic, strong) id adId;
@property(nonatomic, strong) id adType;
@property(nonatomic, strong) id packageName;

@property(nonatomic, assign) NSInteger width;
@property(nonatomic, assign) NSInteger height;

@property(nonatomic, assign) AZInterstitialOrientationType orientationType;

- (AZAdZodiacAdInstance *)initWithDict:(NSDictionary *)dict;

@end