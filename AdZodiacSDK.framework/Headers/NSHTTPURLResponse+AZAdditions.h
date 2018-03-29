//
//  NSHTTPURLResponse+MPAdditions.h
//  AdZodiacSDK
//
//  Copyright (c) 2014 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString * const kMoPubHTTPHeaderContentType;

@interface NSHTTPURLResponse (AZAdditions)

- (NSStringEncoding)stringEncodingFromContentType:(NSString *)contentType;

@end
