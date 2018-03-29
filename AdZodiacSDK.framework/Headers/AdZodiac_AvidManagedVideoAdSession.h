//
//  AvidManagedVideoAdSession.h
//  AppVerificationLibrary
//
//  Created by Daria Sukhonosova on 05/04/16.
//  Copyright © 2016 Integral. All rights reserved.
//

#import "AdZodiac_AbstractAvidManagedAdSession.h"
#import "AdZodiac_AvidVideoPlaybackListener.h"

@interface AdZodiac_AvidManagedVideoAdSession : AdZodiac_AbstractAvidManagedAdSession

@property(nonatomic, readonly) id<AdZodiac_AvidVideoPlaybackListener> avidVideoPlaybackListener;

@end
