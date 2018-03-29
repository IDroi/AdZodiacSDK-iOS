//
//  AZLogLevel.h
//  AdZodiacSDK
//
//  Copyright © 2017 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * SDK logging level.
 * @remark Lower values equate to more detailed logs.
 */
typedef enum {
    AZLogLevelAll   = 0,
    AZLogLevelTrace = 10,
    AZLogLevelDebug = 20,
    AZLogLevelInfo  = 30,
    AZLogLevelWarn  = 40,
    AZLogLevelError = 50,
    AZLogLevelFatal = 60,
    AZLogLevelOff   = 70
} AZLogLevel;
