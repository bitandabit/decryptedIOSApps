//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, SCSessionRequestManager;

@interface SCImpalaService : NSObject
{
    SCSessionRequestManager *_requestManager;
    NSString *_userId;
}

- (void).cxx_destruct;
- (id)fetchBusinessStoryManifestWithRequest:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)fetchHasPendingRoleInvitesWithRequest:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)updateBusinessProfileWithRequest:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)fetchManagedBusinessProfilesWithRequest:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)updateSubscribeStatusWithRequest:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)searchBrandAccountsWithRequest:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_performRequestWithPath:(id)arg1 serviceType:(long long)arg2 request:(id)arg3 responseClass:(Class)arg4 key:(id)arg5 completionQueue:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (id)initWithSessionRequestManager:(id)arg1 userId:(id)arg2;

@end

