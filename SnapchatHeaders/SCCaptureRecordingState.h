//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCCaptureBaseState.h"

@class SCQueuePerformer;
@protocol SCCaptureStateDelegate;

@interface SCCaptureRecordingState : SCCaptureBaseState
{
    id <SCCaptureStateDelegate> _delegate;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (unsigned long long)stateId;
- (void)cancelRecordingWithResource:(id)arg1 context:(id)arg2;
- (void)stopRecordingWithResource:(id)arg1 context:(id)arg2;
- (void)didBecomeCurrentState:(id)arg1 context:(id)arg2;
- (id)initWithPerformer:(id)arg1 bookKeeper:(id)arg2 delegate:(id)arg3;

@end

