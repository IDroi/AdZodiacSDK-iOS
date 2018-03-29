//
// Created by peter.shih on 2018/3/15.
// Copyright (c) 2018 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AZServerCommunicator.h"

@class AZServerCommunicator;
@class AZLogEvent;

typedef void(^AZLogEventRequestHandler)(NSError *error);

@interface AZLogEventRequest : NSObject <AZServerCommunicatorDelegate>

@property(nonatomic, strong) NSArray<AZLogEvent*> *events;

@property(nonatomic, copy) NSString *adUuid;

- (instancetype)initWithAdUuid:(NSString *)adUuid events:(NSArray *)events;

- (void)sendLogEventsWithHandler:(AZLogEventRequestHandler)handler;

@end