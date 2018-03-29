//
//  AZVASTLinearAd.h
//  AdZodiac
//
//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AZVASTModel.h"

@class AZVASTDurationOffset;
@class AZVASTMediaFile;

@interface AZVASTLinearAd : AZVASTModel

@property (nonatomic, copy, readonly) NSURL *clickThroughURL;
@property (nonatomic, readonly) NSArray *clickTrackingURLs;
@property (nonatomic, readonly) NSArray *customClickURLs;
@property (nonatomic, readonly) NSTimeInterval duration;
@property (nonatomic, readonly) NSArray *industryIcons;
@property (nonatomic, readonly) NSArray *mediaFiles;
@property (nonatomic, readonly) AZVASTDurationOffset *skipOffset;
@property (nonatomic, readonly) NSDictionary *trackingEvents;

@end

@interface AZVASTLinearAd (Media)
@property (nonatomic, readonly) AZVASTMediaFile *highestBitrateMediaFile;

@end
