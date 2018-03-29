//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "GCDAsyncSocketDelegate.h"
#import "SPTDataLoaderDelegate.h"

@class GCDAsyncSocket, NSMutableData, NSObject<OS_dispatch_queue>, NSString, SPTDataLoader, SPTVideoCDNSelector, SPTVideoSegmentProxyOperationContext, SPTask;

@interface SPTVideoSegmentProxyOperation : NSOperation <GCDAsyncSocketDelegate, SPTDataLoaderDelegate>
{
    _Bool _finished;
    _Bool _executing;
    id <SPTVideoSegmentProxyOperationDelegate> _delegate;
    GCDAsyncSocket *_socket;
    NSObject<OS_dispatch_queue> *_workQueue;
    SPTDataLoader *_dataLoader;
    id <SPTDataLoaderCancellationToken> _cancellationToken;
    SPTVideoSegmentProxyOperationContext *_context;
    SPTask *_transmuxingTask;
    SPTVideoCDNSelector *_cdnSelector;
    struct __CFHTTPMessage *_requestMessage;
    struct __CFHTTPMessage *_responseMessage;
    NSMutableData *_receivedData;
}

@property(retain, nonatomic) NSMutableData *receivedData; // @synthesize receivedData=_receivedData;
@property(nonatomic) struct __CFHTTPMessage *responseMessage; // @synthesize responseMessage=_responseMessage;
@property(nonatomic) struct __CFHTTPMessage *requestMessage; // @synthesize requestMessage=_requestMessage;
@property(retain, nonatomic) SPTVideoCDNSelector *cdnSelector; // @synthesize cdnSelector=_cdnSelector;
@property(retain, nonatomic) SPTask *transmuxingTask; // @synthesize transmuxingTask=_transmuxingTask;
@property(retain, nonatomic) SPTVideoSegmentProxyOperationContext *context; // @synthesize context=_context;
@property(retain, nonatomic) id <SPTDataLoaderCancellationToken> cancellationToken; // @synthesize cancellationToken=_cancellationToken;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) GCDAsyncSocket *socket; // @synthesize socket=_socket;
@property(nonatomic) __weak id <SPTVideoSegmentProxyOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isExecuting;
- (_Bool)isFinished;
- (void).cxx_destruct;
- (void)setExecuting:(_Bool)arg1;
- (void)setFinished:(_Bool)arg1;
- (void)finishWithErrorMessage:(id)arg1 statusCode:(unsigned long long)arg2;
- (void)finishWithError:(id)arg1 statusCode:(unsigned long long)arg2;
- (_Bool)writeResponseMessageWithStatusCode:(unsigned long long)arg1 tag:(int)arg2 headers:(id)arg3;
- (void)writeFinalChunkToSocket;
- (void)writeChunkToSocket:(id)arg1;
- (void)writeDataToSocket:(id)arg1 tag:(long long)arg2;
- (void)writeResponseHeadersWithDataLoaderResponse:(id)arg1;
- (void)dataLoader:(id)arg1 didCancelRequest:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveDataChunk:(id)arg2 forResponse:(id)arg3;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveInitialResponse:(id)arg2;
- (_Bool)dataLoaderShouldSupportChunks:(id)arg1;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (_Bool)startRequestForce:(_Bool)arg1;
- (void)socket:(id)arg1 didWriteDataWithTag:(long long)arg2;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)cleanup;
- (void)finishAndCleanup;
- (_Bool)isAsynchronous;
- (void)cancel;
- (void)start;
- (void)dealloc;
- (id)init;
- (id)initWithSocket:(id)arg1 dataLoader:(id)arg2 cdnSelector:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

