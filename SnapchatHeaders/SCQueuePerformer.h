//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCPerforming-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface SCQueuePerformer : NSObject <SCPerforming>
{
    unsigned int _qid;
    _Bool _reentrant_DEPRECATED_DO_NOT_USE;
    _Bool _isMainThread;
    unsigned int _qualityOfService;
    long long _context;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)_defaultPerformer;
+ (id)_backgroundPerformer;
+ (id)_utilityPerformer;
+ (id)_userInitiatedPerformer;
+ (id)_userInteractivePerformer;
+ (id)globalQueuePerformer:(unsigned int)arg1 ContextState:(id)arg2;
+ (id)mainQueuePerformer;
+ (id)impalaPerformer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (long long)context;
- (unsigned int)qualityOfService;
- (_Bool)isCurrentPerformer;
- (void)performAndWait:(CDUnknownBlockType)arg1;
- (void)perform:(CDUnknownBlockType)arg1 after:(double)arg2;
- (void)performImmediatelyIfCurrentPerformer:(CDUnknownBlockType)arg1;
- (void)performWithQoS:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)perform:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_makeDispatchBlock:(CDUnknownBlockType)arg1 expectedQoS:(unsigned int)arg2;
- (id)initWithLabel:(const char *)arg1 qualityOfService:(unsigned int)arg2 queueType:(id)arg3 context:(long long)arg4 reentrant_IS_DEPRECATED_DO_NOT_USE:(_Bool)arg5;
- (id)initWithLabel:(const char *)arg1 qualityOfService:(unsigned int)arg2 queueType:(id)arg3 context:(long long)arg4;
- (id)initWithGlobalQueue:(unsigned int)arg1;
- (id)initWithMainQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

