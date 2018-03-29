//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;
@protocol MGLOfflineStorageDelegate;

@interface MGLOfflineStorage : NSObject
{
    struct unique_ptr<mbgl::Actor<mbgl::ResourceTransform>, std::__1::default_delete<mbgl::Actor<mbgl::ResourceTransform>>> _mbglResourceTransform;
    _Bool _paused;
    id <MGLOfflineStorageDelegate> _delegate;
    NSMutableArray *_packs;
    struct DefaultFileSource *_mbglFileSource;
}

+ (id)legacyCachePath;
+ (id)cacheURLIncludingSubdirectory:(_Bool)arg1;
+ (id)sharedOfflineStorage;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) struct DefaultFileSource *mbglFileSource; // @synthesize mbglFileSource=_mbglFileSource;
@property(retain, nonatomic) NSMutableArray *packs; // @synthesize packs=_packs;
@property(nonatomic) __weak id <MGLOfflineStorageDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long countOfBytesCompleted;
- (void)setMaximumAllowedMapboxTiles:(unsigned long long)arg1;
- (void)getPacksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)reloadPacks;
- (void)_removePack:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)removePack:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_addPackForRegion:(id)arg1 withContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addPackForRegion:(id)arg1 withContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;
- (void)unpauseFileSource:(id)arg1;
- (void)pauseFileSource:(id)arg1;
- (void)setInternalLoggingBlock:(CDUnknownBlockType)arg1;
- (void)setReplacementURLSession:(id)arg1;

@end

