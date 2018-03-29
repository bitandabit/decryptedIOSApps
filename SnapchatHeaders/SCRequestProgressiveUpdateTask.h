//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCRequestTask.h"

@class NSArray, NSObject;
@protocol OS_dispatch_queue, SCNetworkInterceptor;

@interface SCRequestProgressiveUpdateTask : SCRequestTask
{
    NSObject<OS_dispatch_queue> *_progressiveUpdateQueue;
    CDUnknownBlockType _progressiveUpdateBlock;
    NSArray<SCNetworkInterceptor> *_networkInterceptors;
}

- (void).cxx_destruct;
- (CDUnknownBlockType)completeTask;
- (_Bool)shouldRetryRequestWithError:(id)arg1 response:(id)arg2;
- (void)progressiveUpdate;
- (void)updateTaskWithTask:(id)arg1;
- (id)initWithRequest:(id)arg1 authenticator:(id)arg2 endpointMigrationInfo:(id)arg3 traceFile:(struct SCNetworkTraceFileStruct *)arg4 networkInterceptors:(id)arg5 progressiveUpdateQueue:(id)arg6 progressiveUpdateBlock:(CDUnknownBlockType)arg7;

@end
