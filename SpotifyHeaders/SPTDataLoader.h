//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDataLoaderCancellationTokenDelegate.h"

@class NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface SPTDataLoader : NSObject <SPTDataLoaderCancellationTokenDelegate>
{
    id <SPTDataLoaderRequestResponseHandlerDelegate> _requestResponseHandlerDelegate;
    id <SPTDataLoaderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableArray *_cancellationTokens;
    NSMutableArray *_requests;
    id <SPTDataLoaderCancellationTokenFactory> _cancellationTokenFactory;
}

+ (id)dataLoaderWithRequestResponseHandlerDelegate:(id)arg1 cancellationTokenFactory:(id)arg2;
@property(readonly, nonatomic) id <SPTDataLoaderCancellationTokenFactory> cancellationTokenFactory; // @synthesize cancellationTokenFactory=_cancellationTokenFactory;
@property(readonly, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;
@property(readonly, nonatomic) NSMutableArray *cancellationTokens; // @synthesize cancellationTokens=_cancellationTokens;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <SPTDataLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)requestResponseHandlerDelegate;
- (void).cxx_destruct;
- (void)cancellationTokenDidCancel:(id)arg1;
- (void)needsNewBodyStream:(CDUnknownBlockType)arg1 forRequest:(id)arg2;
- (void)receivedInitialResponse:(id)arg1;
- (void)receivedDataChunk:(id)arg1 forResponse:(id)arg2;
- (void)cancelledRequest:(id)arg1;
- (void)failedResponse:(id)arg1;
- (void)successfulResponse:(id)arg1;
- (void)dealloc;
@property(readonly, copy, nonatomic) NSArray *currentRequests;
- (_Bool)isRequestExpected:(id)arg1;
- (void)cancelAllLoads;
- (id)performRequest:(id)arg1;
- (void)executeDelegateBlock:(CDUnknownBlockType)arg1;
- (id)initWithRequestResponseHandlerDelegate:(id)arg1 cancellationTokenFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

