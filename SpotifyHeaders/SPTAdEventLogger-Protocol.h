//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol SPTAdEventLogger <NSObject>
- (void)logExpandVideoAd:(NSString *)arg1 atPlaybackPosition:(double)arg2;
- (void)logCollapseVideoAd:(NSString *)arg1 atPlaybackPosition:(double)arg2;
- (void)logAdFeedbackEventForAd:(NSString *)arg1;
- (void)postCosmosAdEvent:(NSString *)arg1 forAd:(NSString *)arg2 playbackPosition:(double)arg3 eventData:(NSDictionary *)arg4;
- (void)postCosmosAdEvent:(NSString *)arg1 forAd:(NSString *)arg2 eventData:(NSDictionary *)arg3;
- (void)postCosmosAdEvent:(NSString *)arg1 forAd:(NSString *)arg2;
- (void)logClientAdErrorMessage:(NSString *)arg1 requestType:(NSString *)arg2 requestUrl:(NSString *)arg3 httpErrorCode:(long long)arg4;
- (void)logClientAdEvent:(NSString *)arg1 subEventType:(NSString *)arg2 lineItemId:(NSString *)arg3 creativeId:(NSString *)arg4 adFormat:(NSString *)arg5 eventData:(NSDictionary *)arg6;
- (void)logClientAdEvent:(NSString *)arg1 subEventType:(NSString *)arg2 lineItemId:(NSString *)arg3 creativeId:(NSString *)arg4 adFormat:(NSString *)arg5 eventData:(NSDictionary *)arg6 slot:(NSString *)arg7;
- (void)logClientAdEvent:(NSString *)arg1 subEventType:(NSString *)arg2 lineItemId:(NSString *)arg3 creativeId:(NSString *)arg4 adFormat:(NSString *)arg5 eventData:(NSDictionary *)arg6 slot:(NSString *)arg7 adPlaybackId:(NSString *)arg8;
@end

