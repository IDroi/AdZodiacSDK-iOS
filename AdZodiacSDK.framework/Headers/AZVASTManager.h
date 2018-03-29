//
//  AZVASTManager.h
//  AdZodiac
//
//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AZVASTResponse.h"

typedef enum {
    MPVASTErrorXMLParseFailure,
    MPVASTErrorExceededMaximumWrapperDepth,
    MPVASTErrorNoAdsFound
} MPVASTError;

@interface AZVASTManager : NSObject

+ (void)fetchVASTWithURL:(NSURL *)URL completion:(void (^)(AZVASTResponse *, NSError *))completion;
+ (void)fetchVASTWithData:(NSData *)data completion:(void (^)(AZVASTResponse *, NSError *))completion;

@end
