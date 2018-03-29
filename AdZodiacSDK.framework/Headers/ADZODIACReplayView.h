//
//  MPBReplayView.h
//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ADZODIACPlayerView.h"

@class ADZODIACReplayView;

typedef void (^MPBReplayActionBlock)(ADZODIACReplayView *replayView);

@interface ADZODIACReplayView : UIView

@property (nonatomic, copy) MPBReplayActionBlock actionBlock;

- (instancetype)initWithFrame:(CGRect)frame displayMode:(ADZODIACPlayerDisplayMode)displayMode;

@end
