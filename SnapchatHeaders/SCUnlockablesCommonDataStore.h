//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "SCUnlockableCommonCacheDelegate-Protocol.h"

@class NSDictionary, NSString, SCUnlockablesCommonDataStoreListenerAnnouncer, SCUserSession;

@interface SCUnlockablesCommonDataStore : NSObject <NSCoding, SCUnlockableCommonCacheDelegate>
{
    SCUnlockablesCommonDataStoreListenerAnnouncer *_announcer;
    SCUserSession *_userSession;
    NSDictionary *_unlockableCaches;
}

+ (_Bool)isUsingGtqUnlockablesData:(id)arg1;
+ (void)_removeSavedState;
+ (id)path:(_Bool)arg1;
@property(retain, nonatomic) NSDictionary *unlockableCaches; // @synthesize unlockableCaches=_unlockableCaches;
@property(readonly, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (void)unlockableCache:(id)arg1 didUpdate:(id)arg2;
- (void)unlockableCache:(id)arg1 readyForPreFetch:(id)arg2;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)preFetch:(id)arg1 forCacheType:(long long)arg2;
- (void)removeUnlockablesById:(id)arg1;
- (void)clear;
- (void)updateLocation:(id)arg1;
- (void)upsert:(id)arg1 cacheType:(long long)arg2 forLocation:(id)arg3 fromSources:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)upsert:(id)arg1 cacheType:(long long)arg2 forLocation:(id)arg3 fromSources:(id)arg4;
- (void)_setUserSession:(id)arg1;
- (void)dealloc;
- (void)_subscribeForNotifications;
- (void)_saveState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithUnlockables:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

