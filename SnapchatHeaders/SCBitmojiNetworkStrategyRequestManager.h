//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCBitmojiNetworkStrategy-Protocol.h"

@class NSString, SCSessionRequestManager;

@interface SCBitmojiNetworkStrategyRequestManager : NSObject <SCBitmojiNetworkStrategy>
{
    unsigned long long _endpoint;
    SCSessionRequestManager *_requestManager;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)issueBatchFetch:(id)arg1 cacheKey:(id)arg2 contexts:(id)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (_Bool)issueImageFetch:(id)arg1 cacheKey:(id)arg2 contexts:(id)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (unsigned long long)fetchType:(_Bool)arg1;
- (id)policyWithBatchOverride:(unsigned long long)arg1 andMaxInflightOverride:(unsigned long long)arg2;
- (id)_prepareBatchImageRequestDirect:(id)arg1 cacheKey:(id)arg2 contexts:(id)arg3;
- (id)_prepareBatchImageRequestToFSN:(id)arg1 cacheKey:(id)arg2 contexts:(id)arg3;
- (id)_prepareImageRequestDirect:(id)arg1 cacheKey:(id)arg2 contexts:(id)arg3;
- (id)_prepareImageRequestToFSN:(id)arg1 cacheKey:(id)arg2 contexts:(id)arg3;
- (id)initWithRequestManager:(id)arg1 endpoint:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
