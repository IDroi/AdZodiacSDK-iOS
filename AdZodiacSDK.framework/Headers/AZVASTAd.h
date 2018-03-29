//
//  AZVASTAd.h
//  AdZodiac
//
//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AZVASTModel.h"

@class AZVASTInline;
@class AZVASTWrapper;

@interface AZVASTAd : AZVASTModel

@property (nonatomic, copy, readonly) NSString *identifier;
@property (nonatomic, copy, readonly) NSString *sequence;
@property (nonatomic, readonly) AZVASTInline *inlineAd;
@property (nonatomic, readonly) AZVASTWrapper *wrapper;

@end
