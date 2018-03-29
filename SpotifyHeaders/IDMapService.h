//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDService.h"

#import "IDEtchSessionMapDelegate.h"

@class NSLock, NSOperationQueue, NSString;

@interface IDMapService : IDService <IDEtchSessionMapDelegate>
{
    NSLock *_mapOperationsQueueAccessLock;
    NSOperationQueue *_mapOperationsQueue;
}

@property(readonly) NSOperationQueue *mapOperationsQueue; // @synthesize mapOperationsQueue=_mapOperationsQueue;
@property(readonly) NSLock *mapOperationsQueueAccessLock; // @synthesize mapOperationsQueueAccessLock=_mapOperationsQueueAccessLock;
- (void).cxx_destruct;
- (void)treadSafeAddOperations:(id)arg1;
- (void)threadSafeAddOperation:(id)arg1;
- (void)session:(id)arg1 mapService:(long long)arg2 handleMapEvent:(unsigned long long)arg3 transferId:(long long)arg4;
- (void)blockQueueUntilReadyEvent;
- (void)clearLocationHighlight;
- (void)highlightLocation:(id)arg1;
- (void)deleteOverlayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)selectMapMode:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)hideOverlay;
- (void)showOverlay;
- (void)importOverlayAfterDeletion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importOverlay:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithEtchSession:(id)arg1 handle:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
