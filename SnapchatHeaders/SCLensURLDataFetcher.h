//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, SCCache, SCLensRequestManager;
@protocol SCPerforming;

@interface SCLensURLDataFetcher : NSObject
{
    id <SCPerforming> _performer;
    SCLensRequestManager *_requestManager;
    SCCache *_cache;
}

+ (void)migrateContentForKeyIfNecessary:(id)arg1;
+ (id)legacyAbsoluteDataPathForContentWithKey:(id)arg1;
+ (id)absoluteDataPathForContentWithKey:(id)arg1;
+ (id)absoluteDataPathForContentWithKey:(id)arg1 isStudioLens:(_Bool)arg2;
+ (id)lensesCacheDirectoryPath;
@property(retain, nonatomic) SCCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (void)removeContentForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeExpiredContentWithExpirationType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)boostRequest:(id)arg1 setting:(id)arg2;
- (id)_fetchURLContentDataPath:(id)arg1 requestSettings:(id)arg2 shouldUnzip:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)fetchZippedURLContentDataPath:(id)arg1 requestSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)fetchURLContentDataPath:(id)arg1 requestSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)fetchURLImage:(id)arg1 requestSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (double)expirationInterval:(long long)arg1;
- (void)resetCache:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSDate *cacheResetDate;
- (void)setCacheResetDate:(id)arg1;
- (id)initWithRequestManager:(id)arg1;

@end

