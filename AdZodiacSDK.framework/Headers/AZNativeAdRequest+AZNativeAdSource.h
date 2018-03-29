//
//  AZNativeAdRequest+AZNativeAdSource.h
//  AdZodiacSDK
//
//  Copyright (c) 2014 AdZodiac. All rights reserved.
//

#import "AZNativeAdRequest.h"

@interface AZNativeAdRequest (AZNativeAdSource)

- (void)startForAdSequence:(NSInteger)adSequence withCompletionHandler:(MPNativeAdRequestHandler)handler;

@end
