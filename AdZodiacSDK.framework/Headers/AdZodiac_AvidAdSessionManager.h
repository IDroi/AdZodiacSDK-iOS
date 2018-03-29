//
//  AvidAdSessionManager.h
//  AppVerificationLibrary
//
//  Created by Daria Sukhonosova on 05/04/16.
//  Copyright © 2016 Integral. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdZodiac_AvidDisplayAdSession.h"
#import "AdZodiac_AvidManagedDisplayAdSession.h"
#import "AdZodiac_AvidVideoAdSession.h"
#import "AdZodiac_AvidManagedVideoAdSession.h"
#import "AdZodiac_ExternalAvidAdSessionContext.h"

@interface AdZodiac_AvidAdSessionManager : NSObject

+ (NSString *)version;
+ (NSString *)releaseDate;

+ (AdZodiac_AvidVideoAdSession *)startAvidVideoAdSessionWithContext:(AdZodiac_ExternalAvidAdSessionContext *)avidAdSessionContext;
+ (AdZodiac_AvidDisplayAdSession *)startAvidDisplayAdSessionWithContext:(AdZodiac_ExternalAvidAdSessionContext *)avidAdSessionContext;
+ (AdZodiac_AvidManagedVideoAdSession *)startAvidManagedVideoAdSessionWithContext:(AdZodiac_ExternalAvidAdSessionContext *)avidAdSessionContext;
+ (AdZodiac_AvidManagedDisplayAdSession *)startAvidManagedDisplayAdSessionWithContext:(AdZodiac_ExternalAvidAdSessionContext *)avidAdSessionContext;

@end
