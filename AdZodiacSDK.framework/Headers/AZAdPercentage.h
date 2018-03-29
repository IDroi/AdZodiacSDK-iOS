//
//  AZAdPercentage.h
//  Copyright (c) 2013 MoPub. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AZAdPercentage;
@class AZAdConfiguration;

@interface AZAdPercentage : NSObject <NSCoding>

@property NSString *adUuid;
@property double refreshTime;
@property NSArray *adConfigurations;
@property (nonatomic, strong) NSDate *expiredDate;

- (id)initWithDict:dict;
- (AZAdConfiguration *)getRandomAdConfiguration;
- (BOOL)isExpired;

- (NSString *)description;

@end
