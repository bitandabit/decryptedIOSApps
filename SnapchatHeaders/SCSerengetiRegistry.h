//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, SCCache;
@protocol OS_dispatch_group;

@interface SCSerengetiRegistry : NSObject
{
    NSDictionary *_serviceById;
    SCCache *_registryCache;
    NSDate *_cacheFetchDate;
    NSObject<OS_dispatch_group> *_cacheLoadDispatchGroup;
    unsigned long long _lastUpdatedTimeMs;
}

+ (id)sharedRegistry;
@property(readonly, nonatomic) unsigned long long lastUpdatedTimeMs; // @synthesize lastUpdatedTimeMs=_lastUpdatedTimeMs;
- (void).cxx_destruct;
- (id)_resolveServiceForURL:(id)arg1;
- (void)resolveServiceForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_waitUntilCacheLoadWithCompletion:(CDUnknownBlockType)arg1;
- (void)replaceStore:(id)arg1;
- (void)_cacheStore:(id)arg1;
- (void)_populateStoreWithServices:(id)arg1 fetchDate:(id)arg2 lastUpdatedTimeMs:(unsigned long long)arg3;
- (void)clearStore;
- (void)_handleCacheDidLoadWithData:(id)arg1;
- (id)initWithDiskCacheEnabled:(_Bool)arg1;

@end
