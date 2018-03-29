//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, SCCache, SCQueuePerformer, SCStories;

@interface SCStoryMediaCache : NSObject
{
    SCCache *_cache;
    SCStories *_stories;
    NSMutableSet *_keysBeingWrittenToDisk;
    SCQueuePerformer *_performer;
    NSMutableDictionary *_cacheKeyToStory;
}

- (void).cxx_destruct;
- (void)_mapCacheKeyToStoryIfNecessaryWithStory:(id)arg1;
- (void)initCacheKeyToStoryDict;
- (CDUnknownBlockType)_didRemoveObjectFromDiskBlock;
- (void)prepareForLogout;
- (void)clearExpiredCachedMedia;
- (void)clearCachedMediaNotNeeded;
- (void)clearCachedMediaExceptMyStories:(CDUnknownBlockType)arg1;
- (void)_addMediaCacheKeyToKeySet:(id)arg1 keySet:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (_Bool)contains:(id)arg1;
- (void)objectForKey:(id)arg1 withEncryptor:(id)arg2 completionQueue:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)_setObject:(id)arg1 forKey:(id)arg2 withEncryptor:(id)arg3 expiration:(id)arg4 alreadyEncrypted:(_Bool)arg5 useClientEncryption:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)setObject:(id)arg1 forKey:(id)arg2 withEncryptor:(id)arg3 cacheDataSource:(id)arg4 expiration:(id)arg5 alreadyEncrypted:(_Bool)arg6 useClientEncryption:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;
- (id)initWithStories:(id)arg1;

@end
