//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDictionary, SCEncryptedCache;
@protocol SCPerforming;

@interface SCFriendProfileCollection : NSObject <NSCoding>
{
    SCEncryptedCache *_cache;
    id <SCPerforming> _performer;
    NSDictionary *_friendProfileDict;
}

+ (id)collection;
+ (id)generateKeyForFriend:(id)arg1 size:(long long)arg2;
+ (void)fetchProfilePictureFromServerForFriend:(id)arg1 withSize:(long long)arg2 contexts:(id)arg3 successQueue:(id)arg4 failureQueue:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
@property(retain) NSDictionary *friendProfileDict; // @synthesize friendProfileDict=_friendProfileDict;
- (void).cxx_destruct;
- (void)_removeExpiredProfileInQueue;
- (void)_removeExpiredProfile;
- (id)getSnapchatterForUsername:(id)arg1;
- (id)_getFriendScoreForFriend:(id)arg1;
- (id)_getProfileForFriend:(id)arg1;
- (void)_updateSnapchatter:(id)arg1 snapchatter:(id)arg2;
- (void)_updateScoreForFriend:(id)arg1 friendScore:(id)arg2;
- (void)_updateProfilePictureMetaDataForFriend:(id)arg1 size:(long long)arg2 lastFetchedTimestamp:(long long)arg3 profilePictureTimestamp:(long long)arg4;
- (id)_getProfilePictureMetaDataForFriend:(id)arg1 size:(long long)arg2;
- (_Bool)_hasProfilePictureForFriend:(id)arg1 size:(long long)arg2;
- (_Bool)_shouldFetchSnapchatter:(id)arg1;
- (_Bool)_shouldFetchScoreForFriend:(id)arg1;
- (_Bool)_shouldFetchProfilePictureForFriend:(id)arg1 size:(long long)arg2;
- (void)putSnapchatter:(id)arg1;
- (void)_performScoreFetchingForFriend:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchScoreForFriend:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchProfilePictureFromServerForFriend:(id)arg1 withSize:(long long)arg2 contexts:(id)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_fetchProfilePictureFromCacheForFriend:(id)arg1 withSize:(long long)arg2 contexts:(id)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)fetchProfilePictureForFriend:(id)arg1 withSize:(long long)arg2 contexts:(id)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_removeObservers;
- (void)_addObservers;
- (void)_initQueue;
- (id)cache;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

