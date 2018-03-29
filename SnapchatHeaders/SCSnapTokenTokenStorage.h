//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, SCQueuePerformer;

@interface SCSnapTokenTokenStorage : NSObject
{
    _Bool _invalidated;
    _Bool _keychainFetchNeeded;
    NSString *_refreshToken;
    NSMutableDictionary *_accessTokens;
    SCQueuePerformer *_performer;
}

+ (id)accessTokenKeychainEntryForUserId:(id)arg1 accessType:(unsigned long long)arg2;
+ (id)refreshTokenKeychainEntryForUserId:(id)arg1;
@property(readonly, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
@property(nonatomic) _Bool keychainFetchNeeded; // @synthesize keychainFetchNeeded=_keychainFetchNeeded;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, nonatomic) NSMutableDictionary *accessTokens; // @synthesize accessTokens=_accessTokens;
@property(retain, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
- (void).cxx_destruct;
- (void)_handleInvalidationForUserId:(id)arg1;
- (void)_loadTokensFromKeychainForUserId:(id)arg1;
- (void)_loadAccessTokenFromKeyChainForUserId:(id)arg1 accessType:(unsigned long long)arg2;
- (void)_writeMemAndKeychainAccessToken:(id)arg1 accessType:(unsigned long long)arg2 userId:(id)arg3;
- (void)_writeMemAndKeychainAccessTokens:(struct NSDictionary *)arg1 userId:(id)arg2;
- (void)_writeMemAndKeychainRefreshToken:(id)arg1 userId:(id)arg2;
- (void)_writeMemAndKeychainWithRefreshToken:(id)arg1 accessTokens:(struct NSDictionary *)arg2 userId:(id)arg3;
- (id)_getRefreshTokenForUserId:(id)arg1;
- (_Bool)_isValidAccessToken:(id)arg1 accessType:(unsigned long long)arg2;
- (id)_getAccessTokenForUserId:(id)arg1 accessType:(unsigned long long)arg2;
- (void)handleInvalidationSyncForUserId:(id)arg1;
- (void)setAccessTokensSyncWithUserId:(id)arg1 accessTokens:(struct NSDictionary *)arg2;
- (void)getAccessTokenAsyncForAccessType:(unsigned long long)arg1 userId:(id)arg2 completionPerformer:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setSnapSessionSyncWithRefreshToken:(id)arg1 accessTokens:(struct NSDictionary *)arg2 userId:(id)arg3;
- (void)getRefreshTokenAsyncWithCompletionPerformer:(id)arg1 userId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end
