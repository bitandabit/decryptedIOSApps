//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCQueuePerformer.h"

#import "SCConcurrentPerforming-Protocol.h"

@class NSString;

@interface SCConcurrentQueuePerformer : SCQueuePerformer <SCConcurrentPerforming>
{
}

- (void)leaveGroup:(id)arg1;
- (void)enterGroup:(id)arg1;
- (void)performOnGroupNotification:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)performWithBarrierAndWait:(CDUnknownBlockType)arg1;
- (void)performWithBarrier:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

