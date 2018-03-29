//
//  AZVASTResponse.h
//  AdZodiac
//
//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AZVASTModel.h"

#import "AZVASTAd.h"
#import "AZVASTCompanionAd.h"
#import "AZVASTCreative.h"
#import "AZVASTDurationOffset.h"
#import "AZVASTIndustryIcon.h"
#import "AZVASTInline.h"
#import "AZVASTLinearAd.h"
#import "AZVASTMediaFile.h"
#import "AZVASTResource.h"
#import "AZVASTTrackingEvent.h"
#import "AZVASTWrapper.h"

@interface AZVASTResponse : AZVASTModel

@property (nonatomic, readonly) NSArray *ads;
@property (nonatomic, readonly) NSArray *errorURLs;
@property (nonatomic, copy, readonly) NSString *version;

@end
