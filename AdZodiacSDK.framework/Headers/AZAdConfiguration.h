//
// Created by peter.shih on 2018/3/13.
// Copyright (c) 2018 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AZAdConfiguration : NSObject <NSCoding>

@property NSString *adType;
@property NSDictionary *customEventClassData;
@property (nonatomic, assign) Class customEventClass;
@property NSString *networkId;
@property NSString *networkType;
@property double percentage;

- (id)initWithDict:dict;
- (NSString *)description;

@end
