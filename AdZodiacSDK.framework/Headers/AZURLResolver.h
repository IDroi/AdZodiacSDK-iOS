//
//  AZURLResolver.h
//  AdZodiac
//
//  Copyright (c) 2013 AdZodiac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AZGlobal.h"
#import "AZURLActionInfo.h"

typedef void (^MPURLResolverCompletionBlock)(AZURLActionInfo *actionInfo, NSError *error);

@interface AZURLResolver : NSObject <NSURLConnectionDataDelegate>

+ (instancetype)resolverWithURL:(NSURL *)URL completion:(MPURLResolverCompletionBlock)completion;
- (void)start;
- (void)cancel;

@end
