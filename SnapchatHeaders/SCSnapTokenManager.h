//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCUserSessionScoped-Protocol.h"

@class NSMutableSet, NSString, SCQueuePerformer, SCSnapTokenNetworkRequests, SCSnapTokenTokenStorage;

@interface SCSnapTokenManager : NSObject <SCUserSessionScoped>
{
    _Bool _invalidated;
    NSMutableSet *_pendingAccessTokenFetchWaiters;
    NSMutableSet *_pendingSnapSessionFetchWaiters;
    SCSnapTokenTokenStorage *_tokenStorage;
    SCSnapTokenNetworkRequests *_networkRequests;
    NSString *_userId;
    SCQueuePerformer *_performer;
}

+ (id)_createNSErrorWithCode:(unsigned long long)arg1 errorReason:(id)arg2 origError:(id)arg3;
@property(readonly, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, nonatomic) SCSnapTokenNetworkRequests *networkRequests; // @synthesize networkRequests=_networkRequests;
@property(readonly, nonatomic) SCSnapTokenTokenStorage *tokenStorage; // @synthesize tokenStorage=_tokenStorage;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, nonatomic) NSMutableSet *pendingSnapSessionFetchWaiters; // @synthesize pendingSnapSessionFetchWaiters=_pendingSnapSessionFetchWaiters;
@property(readonly, nonatomic) NSMutableSet *pendingAccessTokenFetchWaiters; // @synthesize pendingAccessTokenFetchWaiters=_pendingAccessTokenFetchWaiters;
- (void).cxx_destruct;
- (void)_emitRefreshTokenBlizzardEventForError:(unsigned long long)arg1;
- (void)_accessTokenDoneWithErrorForOp:(id)arg1 error:(id)arg2;
- (void)_accessTokenDoneWithSuccessForOp:(id)arg1 accessToken:(id)arg2;
- (void)_logAccessTokenFetchSuccessForOp:(id)arg1;
- (void)_storeNetworkAccessTokenInStorageForAccessType:(unsigned long long)arg1 sojuResponse:(id)arg2;
- (void)_handleAccessTokenNetworkFetchForError:(id)arg1;
- (void)_handleAccessTokenNetworkFetchSuccessForSojuResponse:(id)arg1;
- (void)_networkFetchAccessTokenForOp:(id)arg1 refreshToken:(id)arg2;
- (void)_handleSnapSessionFetchFailureWithError:(id)arg1;
- (void)_handleSnapSessionSuccessWithSojuResponse:(id)arg1;
- (void)_startSnapSessionFetchForOp:(id)arg1;
- (void)_refreshTokenFetchDoneForOp:(id)arg1 token:(id)arg2;
- (void)_getRefreshTokenToExchangeForOp:(id)arg1;
- (void)_fetchAccessTokenFromStorageDoneForOp:(id)arg1 token:(id)arg2;
- (void)_startAccessTokenFetchForOp:(id)arg1;
- (void)_handleInvalidate;
- (void)fetchAccessTokenAsyncWithAccessType:(unsigned long long)arg1 successQueue:(id)arg2 failureQueue:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)cleanOldTokensOnLogin;
- (void)invalidate;
- (id)initWithTokenStorage:(id)arg1 networkRequests:(id)arg2 userId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
