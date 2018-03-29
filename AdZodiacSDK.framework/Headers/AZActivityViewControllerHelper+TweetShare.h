//
//  AZActivityViewControllerHelper+TweetShare.h
//  AdZodiacSDK
//
//  Copyright (c) 2015 AdZodiac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AZActivityViewControllerHelper.h"

/**
 * `TweetShare` category added to MPActivityViewController to add functionality
 * for sharing a tweet.
 */

@interface AZActivityViewControllerHelper (TweetShare)

/**
 * Present the UIActivityViewController as specified by the
 * provided URL.
 *
 * @param URL Instance of NSURL to be used for generating
 * the share sheet. Should be of the format:
 * mopubshare://tweet?screen_name=<SCREEN_NAME>&tweet_id=<TWEET_ID>
 *
 * @return a BOOL indicating whether or not the tweet share url was successfully shown
 */

- (BOOL)presentActivityViewControllerWithTweetShareURL:(NSURL *)URL;

@end
