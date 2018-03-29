//
//  AZVASTWrapper.h
//  AdZodiac
//
//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AZVASTModel.h"

@class AZVASTResponse;

@interface AZVASTWrapper : AZVASTModel

@property (nonatomic, readonly) NSArray *creatives;
@property (nonatomic, readonly) NSArray *errorURLs;
@property (nonatomic, readonly) NSArray *extensions;
@property (nonatomic, readonly) NSArray *impressionURLs;
@property (nonatomic, copy, readonly) NSURL *VASTAdTagURI;
@property (nonatomic, readonly) AZVASTResponse *wrappedVASTResponse;

@end
