//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "SPTDataLoaderDelegate.h"

@class NSError, NSObject<OS_dispatch_queue>, NSString, SPTDataLoader, SPTPersistentCache, SPTVideoManifest, SPTVideoPreferences, SPTaskCompletionSource;

@interface SPTVideoManifestFetchOperation : NSOperation <SPTDataLoaderDelegate>
{
    _Bool _finished;
    _Bool _executing;
    SPTVideoManifest *_manifest;
    NSError *_error;
    long long _max500ErrorRetryCount;
    NSString *_videoSourceID;
    NSString *_initiatingPlaybackID;
    SPTDataLoader *_dataLoader;
    SPTPersistentCache *_cache;
    SPTVideoPreferences *_videoPreferences;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <SPTDataLoaderCancellationToken> _pending;
    SPTaskCompletionSource *_taskCompletionSource;
    long long _subtaskCount;
    long long _retryCount;
}

@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) long long subtaskCount; // @synthesize subtaskCount=_subtaskCount;
@property(retain, nonatomic) SPTaskCompletionSource *taskCompletionSource; // @synthesize taskCompletionSource=_taskCompletionSource;
@property(retain, nonatomic) id <SPTDataLoaderCancellationToken> pending; // @synthesize pending=_pending;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) SPTVideoPreferences *videoPreferences; // @synthesize videoPreferences=_videoPreferences;
@property(retain, nonatomic) SPTPersistentCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) NSString *initiatingPlaybackID; // @synthesize initiatingPlaybackID=_initiatingPlaybackID;
@property(retain, nonatomic) NSString *videoSourceID; // @synthesize videoSourceID=_videoSourceID;
@property(nonatomic) long long max500ErrorRetryCount; // @synthesize max500ErrorRetryCount=_max500ErrorRetryCount;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) SPTVideoManifest *manifest; // @synthesize manifest=_manifest;
- (_Bool)isExecuting;
- (_Bool)isFinished;
- (void).cxx_destruct;
- (id)reasonFromErrorResponseJSON:(id)arg1;
- (void)setExecuting:(_Bool)arg1;
- (void)setFinished:(_Bool)arg1;
- (unsigned long long)ttlFromResponseHeaders:(id)arg1;
- (void)cacheManifestData:(id)arg1 forVideoSourceID:(id)arg2 withTTL:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)cachedManifestWithVideoSourceID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dataLoader:(id)arg1 didCancelRequest:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)subtaskDidCancel;
- (id)createSubtask;
- (void)failWithError:(id)arg1;
- (void)completeWithManifest:(id)arg1;
- (_Bool)isAsynchronous;
- (void)cancel;
- (void)start;
- (id)init;
- (id)initWithVideoSourceID:(id)arg1 initiatingPlaybackID:(id)arg2 dataLoader:(id)arg3 cache:(id)arg4 videoPreferences:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

