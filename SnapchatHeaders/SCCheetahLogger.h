//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCCheetahLoggingSessionManaging-Protocol.h"

@class NSString, SCCheetahRankingEventLogger, SCExperimentManager;
@protocol OS_dispatch_queue;

@interface SCCheetahLogger : NSObject <SCCheetahLoggingSessionManaging>
{
    SCCheetahRankingEventLogger *_rankingEventLogger;
    NSObject<OS_dispatch_queue> *_queue;
    SCExperimentManager *_experimentManager;
}

- (void).cxx_destruct;
- (id)_makeEventCriticalIfNecessary:(id)arg1 data:(id)arg2;
- (void)_flushWithDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)flushWithDate:(id)arg1 completion:(CDUnknownBlockType)arg2 extraData:(id)arg3;
- (void)_logEvent:(id)arg1 data:(id)arg2;
- (void)logEvent:(id)arg1 data:(id)arg2;
- (id)initWithQueue:(id)arg1 experimentManager:(id)arg2 snapTokenManager:(id)arg3 requestManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

