//
//  ADZODIACExperimentProvider.h
//  AdZodiac
//
//  Copyright © 2017 AdZodiac. All rights reserved.
//

#import "AZAdDestinationDisplayAgent.h"

@interface ADZODIACExperimentProvider : NSObject

+ (void)setDisplayAgentType:(ADZODIACDisplayAgentType)displayAgentType;
+ (void)setDisplayAgentFromAdServer:(ADZODIACDisplayAgentType)displayAgentType;
+ (ADZODIACDisplayAgentType)displayAgentType;

@end
