//
//  AZServerCommunicator.h
//  MoPub
//
//  Copyright (c) 2012 MoPub, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "AZServerResponse.h"

@protocol AZServerCommunicatorDelegate;

////////////////////////////////////////////////////////////////////////////////////////////////////

extern const NSString *kAZServerRequestAction;
extern const NSString *kAZServerRequestApiVersion;
extern const NSString *kAZServerRequestAdUnitId;
extern const NSString *kAZServerRequestAdUuid;
extern const NSString *kAZServerRequestBrandNumber;
extern const NSString *kAZServerRequestBundleId;
extern const NSString *kAZServerRequestChannelNumber;
extern const NSString *kAZServerRequestConnectionType;
extern const NSString *kAZServerRequestCityISO;
extern const NSString *kAZServerRequestCustomerNumber;
extern const NSString *kAZServerRequestDeviceId;
extern const NSString *kAZServerRequestNetworkType;
extern const NSString *kAZServerRequestAdvertiserId;
extern const NSString *kAZServerRequestKeyword;
extern const NSString *kAZServerRequestLocationLatitute;
extern const NSString *kAZServerRequestLocationLongitute;
extern const NSString *kAZServerRequestManufacturer;
extern const NSString *kAZServerRequestMobileCountryCode;
extern const NSString *kAZServerRequestMobileNetworkCode;
extern const NSString *kAZServerRequestMobileModel;
extern const NSString *kAZServerRequestUserAgent;
extern const NSString *kAZServerRequestLogEvents;

extern const NSString *kAZServerRequestLogEventAdUuid;
extern const NSString *kAZServerRequestLogEventAdUnitId;
extern const NSString *kAZServerRequestLogEventNetworkId;
extern const NSString *kAZServerRequestLogEventAdId;
extern const NSString *kAZServerRequestLogEventPackageName;
extern const NSString *kAZServerRequestLogEventTitle;
extern const NSString *kAZServerRequestLogEventIsRequestEvent;
extern const NSString *kAZServerRequestLogEventIsFillEvent;
//extern const NSString *kAZServerRequestLogEventIsEmptyEvent;
extern const NSString *kAZServerRequestLogEventIsImpressionEvent;
extern const NSString *kAZServerRequestLogEventIsClickEvent;
extern const NSString *kAZServerRequestLogEventIsConversionEvent;

extern const NSString *AZServerActionNetworkPercentage;
extern const NSString *AZServerActionAdInstance;
extern const NSString *AZServerActionAdUnitConfiguration;
extern const NSString *AZServerActionLogEvent;

extern const NSString *AZServerApiVersion;

extern const NSString *connectionTypeWifi;
extern const NSString *connectionTypeEthernet;
extern const NSString *connectionTypeMobile;
extern const NSString *connectionTypeUnknown;

extern const NSString *iOSManufacturer;

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface AZServerCommunicator : NSObject

@property (nonatomic, strong) id<AZServerCommunicatorDelegate> delegate;

- (id)initWithDelegate:(id<AZServerCommunicatorDelegate>)delegate;

- (void)performRequest:(NSDictionary *)reqeusetDict;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@protocol AZServerCommunicatorDelegate <NSObject>

@required
- (void)communicatorDidReceiveResults:(NSDictionary *)results;
- (void)communicatorDidFailWithError:(NSError *)error;

@end
