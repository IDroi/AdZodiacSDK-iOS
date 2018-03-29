//
//  AZVASTCreative.h
//  AdZodiac
//
//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AZVASTModel.h"

@class AZVASTLinearAd;

@interface AZVASTCreative : AZVASTModel

@property (nonatomic, copy, readonly) NSString *identifier;
@property (nonatomic, copy, readonly) NSString *sequence;
@property (nonatomic, copy, readonly) NSString *adID;
@property (nonatomic, readonly) AZVASTLinearAd *linearAd;
@property (nonatomic, readonly) NSArray *companionAds;

@end
