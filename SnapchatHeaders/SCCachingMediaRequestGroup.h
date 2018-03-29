//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCProgressReceiving-Protocol.h"

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue, SCCachingMediaRequest;

@interface SCCachingMediaRequestGroup : NSObject <SCProgressReceiving>
{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _completionHandler;
    NSMutableArray *_requests;
    id <SCCachingMediaRequest> _upstreamRequest;
}

@property(retain, nonatomic) id <SCCachingMediaRequest> upstreamRequest; // @synthesize upstreamRequest=_upstreamRequest;
- (void).cxx_destruct;
- (void)reporterWithIdentifier:(id)arg1 didReportProgress:(CDUnknownBlockType)arg2;
- (void)removeRequest:(id)arg1;
- (void)addRequest:(id)arg1;
- (void)perform:(id)arg1 fromCache:(_Bool)arg2 sourceLevel:(long long)arg3 final:(_Bool)arg4;
- (id)initWithQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
