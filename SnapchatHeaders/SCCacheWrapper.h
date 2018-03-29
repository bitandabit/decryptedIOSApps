//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCCache-Protocol.h"

@class NSString;
@protocol SCCache;

@interface SCCacheWrapper : NSObject <SCCache>
{
    _Bool _underExperiment;
    NSString *_kindName;
    id <SCCache> _cache;
}

@property(retain, nonatomic) id <SCCache> cache; // @synthesize cache=_cache;
@property(nonatomic) _Bool underExperiment; // @synthesize underExperiment=_underExperiment;
@property(readonly, copy, nonatomic) NSString *kindName; // @synthesize kindName=_kindName;
- (void).cxx_destruct;
- (CDUnknownBlockType)_chainedCacheObjectBlockWithSelf:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_chainedCacheBlockWithSelf:(CDUnknownBlockType)arg1;
- (void)contains:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)contains:(id)arg1;
- (void)increaseExpirationTo:(id)arg1 forKey:(id)arg2;
- (void)decreaseExpirationTo:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)removeObjectsForKeys:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)removeAllObjectsExceptKeys:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)removeAllObjectsFromMemoryWithBlock:(CDUnknownBlockType)arg1;
- (void)removeAllObjectsWithBlock:(CDUnknownBlockType)arg1;
- (void)removeExpiredContentWithBlock:(CDUnknownBlockType)arg1;
- (void)objectForKey:(id)arg1 dataDecoding:(CDUnknownBlockType)arg2 resetExpiration:(id)arg3 whenLessThanDelta:(double)arg4 block:(CDUnknownBlockType)arg5 returnExpired:(_Bool)arg6;
- (void)objectForKey:(id)arg1 dataDecoding:(CDUnknownBlockType)arg2 resetExpiration:(id)arg3 whenLessThanDelta:(double)arg4 block:(CDUnknownBlockType)arg5;
- (void)objectForKey:(id)arg1 dataDecoding:(CDUnknownBlockType)arg2 block:(CDUnknownBlockType)arg3;
- (void)setObject:(id)arg1 dataEncoding:(CDUnknownBlockType)arg2 forKey:(id)arg3 expiration:(id)arg4 block:(CDUnknownBlockType)arg5;
- (void)invalidate;
- (id)initWithSCCache:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

