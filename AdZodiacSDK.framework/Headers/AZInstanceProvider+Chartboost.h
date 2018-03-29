//
//  AZInstanceProvider+Chartboost.h
//  AdZodiacSDK
//
//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#import "AZInstanceProvider.h"

@class AZChartboostRouter;

@interface AZInstanceProvider (Chartboost)

- (AZChartboostRouter *)sharedMPChartboostRouter;

@end
