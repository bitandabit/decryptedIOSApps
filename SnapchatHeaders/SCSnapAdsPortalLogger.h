//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary, SCSnapAdsPortalPageViewEvent;

@interface SCSnapAdsPortalLogger : NSObject
{
    NSMutableDictionary *_loggedNetworkEvents;
    long long _initialSourcePageViewEventType;
    long long _sourcePageViewEventType;
    SCSnapAdsPortalPageViewEvent *_currentPageViewEvent;
    long long _rejectedReasonViewCount;
    NSDate *_startTime;
}

+ (id)shared;
- (void).cxx_destruct;
- (id)getPageViewEventTypeString:(long long)arg1;
- (long long)getTimeRangeOfTimeRangeType:(long long)arg1;
- (long long)getSourceTypeOfPageViewEvent:(long long)arg1;
- (long long)getPageTypeOfPageViewEventType:(long long)arg1;
- (void)logDateRangeSelectEventWithAdAccountId:(id)arg1 adId:(id)arg2 timeRange:(long long)arg3;
- (void)logChatSendEventWithAdAccountId:(id)arg1 adId:(id)arg2;
- (void)logPageViewEvent;
- (void)logNetworkEventWithRequestUUID:(id)arg1 andParams:(id)arg2;
- (void)logExitEvent;
- (void)setupLoggingForPageViewEventType:(long long)arg1 params:(id)arg2;
- (void)setInitialSourcePageViewEventType:(long long)arg1;
- (id)setupLoggingForNetworkEventType:(long long)arg1;
- (id)networkEventTypeToString:(long long)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)dealloc;
- (id)init;

@end

