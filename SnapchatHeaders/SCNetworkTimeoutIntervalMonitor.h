//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSURLSessionDelegate-Protocol.h"

@class NSString, NSURL, NSURLSession, SCQueueWithCapacity, SCTimeoutIntervalEstimator;
@protocol OS_dispatch_source, SCPerforming;

@interface SCNetworkTimeoutIntervalMonitor : NSObject <NSURLSessionDelegate>
{
    id <SCPerforming> _pingPerformer;
    NSURL *_pingURL;
    _Bool _isMonitoringStarted;
    double _pingTimeoutInterval;
    NSURLSession *_pingSession;
    double _pingInterval;
    NSObject<OS_dispatch_source> *_pingTimer;
    unsigned long long _numOfPingRequestSent;
    SCTimeoutIntervalEstimator *_timeoutIntervalEstimator;
    SCQueueWithCapacity *_pingResults;
}

+ (id)shared;
- (void).cxx_destruct;
- (id)_getPingResultssWithinStartTime:(double)arg1 endTime:(double)arg2;
- (id)_getRTTStatsWithinStartTime:(double)arg1 endTime:(double)arg2;
- (id)getRTTStatsFromStartTime:(double)arg1 endTime:(double)arg2 minumumSamples:(unsigned long long)arg3;
- (double)networkRTT;
- (double)timeoutInterval;
- (void)updateRTTEstimatorWithPingRequestIndex:(unsigned long long)arg1 latency:(double)arg2 error:(id)arg3;
- (void)ping;
- (void)stopMonitoring;
- (id)createSessionTimerWithInterval:(double)arg1 queue:(id)arg2;
- (id)defaultPingURLString;
- (void)startMonitoring;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createSessionWithTimeoutInterval:(double)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

