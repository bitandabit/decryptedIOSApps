//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableOrderedSet;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore;

@interface PINOperationQueue : NSObject
{
    struct _opaque_pthread_mutex_t _lock;
    unsigned long long _operationReferenceCount;
    unsigned long long _maxConcurrentOperations;
    NSObject<OS_dispatch_group> *_group;
    NSObject<OS_dispatch_queue> *_serialQueue;
    _Bool _serialQueueBusy;
    NSObject<OS_dispatch_semaphore> *_concurrentSemaphore;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    NSObject<OS_dispatch_queue> *_semaphoreQueue;
    NSMutableOrderedSet *_queuedOperations;
    NSMutableOrderedSet *_lowPriorityOperations;
    NSMutableOrderedSet *_defaultPriorityOperations;
    NSMutableOrderedSet *_highPriorityOperations;
    NSMapTable *_referenceToOperations;
    NSMapTable *_identifierToOperations;
}

+ (id)sharedOperationQueue;
- (void).cxx_destruct;
- (void)unlock;
- (void)lock;
- (void)locked_removeOperation:(id)arg1;
- (void)waitUntilAllOperationsAreFinished;
- (id)locked_nextOperationByQueue;
- (id)locked_nextOperationByPriority;
- (id)operationQueueWithPriority:(unsigned long long)arg1;
- (void)scheduleNextOperations:(_Bool)arg1;
- (void)setOperationPriority:(unsigned long long)arg1 withReference:(id)arg2;
- (_Bool)locked_cancelOperation:(id)arg1;
@property unsigned long long maxConcurrentOperations;
- (_Bool)cancelOperation:(id)arg1;
- (void)cancelAllOperations;
- (void)locked_addOperation:(id)arg1;
- (id)addOperation:(CDUnknownBlockType)arg1 withPriority:(unsigned long long)arg2 identifier:(id)arg3 coalescingData:(id)arg4 dataCoalescingBlock:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (id)addOperation:(CDUnknownBlockType)arg1 withPriority:(unsigned long long)arg2;
- (id)addOperation:(CDUnknownBlockType)arg1;
- (id)nextOperationReference;
- (void)dealloc;
- (id)initWithMaxConcurrentOperations:(unsigned long long)arg1 concurrentQueue:(id)arg2;
- (id)initWithMaxConcurrentOperations:(unsigned long long)arg1;

@end

