//
//  AZLogging.h
//  AdZodiac
//
//  Copyright 2011 AdZodiac, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AZConstants.h"
#import "AZLogLevel.h"

extern NSString * const kMPClearErrorLogFormatWithAdUnitID;
extern NSString * const kMPWarmingUpErrorLogFormatWithAdUnitID;

AZLogLevel AZLogGetLevel(void);
void AZLogSetLevel(AZLogLevel level);
void _AZLogTrace(NSString *format, ...);
void _AZLogDebug(NSString *format, ...);
void _AZLogInfo(NSString *format, ...);
void _AZLogWarn(NSString *format, ...);
void _AZLogError(NSString *format, ...);
void _AZLogFatal(NSString *format, ...);

#if MP_DEBUG_MODE && !SPECS

#define AZLogTrace(...) _AZLogTrace(__VA_ARGS__)
#define AZLogDebug(...) _AZLogDebug(__VA_ARGS__)
#define AZLogInfo(...) _AZLogInfo(__VA_ARGS__)
#define AZLogWarn(...) _AZLogWarn(__VA_ARGS__)
#define AZLogError(...) _AZLogError(__VA_ARGS__)
#define AZLogFatal(...) _AZLogFatal(__VA_ARGS__)

#else

#define AZLogTrace(...) {}
#define AZLogDebug(...) {}
#define AZLogInfo(...) {}
#define AZLogWarn(...) {}
#define AZLogError(...) {}
#define AZLogFatal(...) {}

#endif
