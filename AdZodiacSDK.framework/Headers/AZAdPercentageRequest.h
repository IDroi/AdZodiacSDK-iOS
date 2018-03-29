//
//  AZAdPercentageRequest.h
//  iOS-HelloWorld
//
//  Created by peter.shih on 2018/2/1.
//  Copyright © 2018年 Peter.shih. All rights reserved.
//

#ifndef AdZodiacAdPercentageRequest_h
#define AdZodiacAdPercentageRequest_h

#import "AZAdPercentage.h"
#import "AZServerCommunicator.h"

@class AZServerCommunicator;
@class AZAdPercentageRequest;

//////////////////

typedef void(^AdZodiacAdPercentageRequestHandler)(AZAdPercentageRequest *request,
        AZAdPercentage *response,
        NSError *error);

//////////////////

@interface AZAdPercentageRequest : NSObject<AZServerCommunicatorDelegate>;

@property NSString *adUnitId;
@property (nonatomic, copy) AdZodiacAdPercentageRequestHandler completionHandler;
@property (nonatomic, strong) AZServerCommunicator *communicator;

- (id)initWithAdUnitId:(NSString *)adUnitId;
- (void)loadAdPercentageWithHandler:(AdZodiacAdPercentageRequestHandler)handler;

@end

#endif /* AdZodiacAdPercentageRequest_h */
