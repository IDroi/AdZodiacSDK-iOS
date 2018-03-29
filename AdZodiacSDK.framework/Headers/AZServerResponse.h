//
//  MPAdConfiguration.h
//  MoPub
//
//  Copyright (c) 2012 MoPub, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AZServerResponse : NSDictionary

@property (nonatomic, copy) NSString *code;
@property (nonatomic, assign) NSDictionary *results;

- (id)initWithData:(NSData *)data;
- (BOOL)isOK;
- (NSString *)description;

@end
