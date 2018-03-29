//
//  AZVASTDurationOffset.h
//  AdZodiac
//
//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AZVASTModel.h"

typedef NS_ENUM(NSUInteger, MPVASTDurationOffsetType) {
    MPVASTDurationOffsetTypeAbsolute,
    MPVASTDurationOffsetTypePercentage,
};

@interface AZVASTDurationOffset : AZVASTModel

@property (nonatomic, readonly) MPVASTDurationOffsetType type;
@property (nonatomic, copy, readonly) NSString *offset;

- (NSTimeInterval)timeIntervalForVideoWithDuration:(NSTimeInterval)duration;

@end
