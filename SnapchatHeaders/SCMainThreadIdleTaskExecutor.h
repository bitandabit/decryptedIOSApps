//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCAppLifeCycleTaskDelegate-Protocol.h"
#import "SCMainThreadIdleMonitorDelegate-Protocol.h"

@class NSMutableArray, SCMainThreadIdleMonitor, SCQueuePerformer;

@interface SCMainThreadIdleTaskExecutor : NSObject <SCMainThreadIdleMonitorDelegate, SCAppLifeCycleTaskDelegate>
{
    NSMutableArray *_tasks;
    SCMainThreadIdleMonitor *_monitor;
    _Bool _started;
    SCQueuePerformer *_mainPerformer;
}

- (void).cxx_destruct;
- (void)_appLifeCycleTask:(id)arg1 didEnd:(unsigned long long)arg2;
- (void)appLifeCycleTask:(id)arg1 didEnd:(unsigned long long)arg2;
- (void)_wakeUpMainThread;
- (void)mainThreadWillBecomeIdle;
- (void)_startServiceIfNecessary;
- (void)_stop;
- (void)stop;
- (void)_start;
- (void)start;
- (void)_addTaskToExecute:(id)arg1;
- (void)addTaskToExecute:(id)arg1;
- (id)init;

@end

