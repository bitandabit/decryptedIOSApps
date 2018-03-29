//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTEntityService.h"

@class NSCache, NSHashTable, NSMapTable, NSString;

@interface SPTEntityService : NSObject <SPTEntityService>
{
    id <SPTAsyncScheduler> _scheduler;
    struct MetadataModel *_metadataModel;
    id <SPTEntityRemoteProviderProtocol> _remoteProvider;
    NSHashTable *_tasks;
    NSMapTable *_tokens;
    NSCache *_tracksCache;
    NSCache *_artistsCache;
    NSCache *_albumsCache;
    NSCache *_decArtistsCache;
    NSCache *_decAlbumsCache;
}

+ (id)entityServiceWithScheduler:(id)arg1 metadataModel:(struct MetadataModel *)arg2 remoteProvider:(id)arg3;
@property(retain, nonatomic) NSCache *decAlbumsCache; // @synthesize decAlbumsCache=_decAlbumsCache;
@property(retain, nonatomic) NSCache *decArtistsCache; // @synthesize decArtistsCache=_decArtistsCache;
@property(retain, nonatomic) NSCache *albumsCache; // @synthesize albumsCache=_albumsCache;
@property(retain, nonatomic) NSCache *artistsCache; // @synthesize artistsCache=_artistsCache;
@property(retain, nonatomic) NSCache *tracksCache; // @synthesize tracksCache=_tracksCache;
@property(retain, nonatomic) NSMapTable *tokens; // @synthesize tokens=_tokens;
@property(retain, nonatomic) NSHashTable *tasks; // @synthesize tasks=_tasks;
@property(retain, nonatomic) id <SPTEntityRemoteProviderProtocol> remoteProvider; // @synthesize remoteProvider=_remoteProvider;
@property(nonatomic) struct MetadataModel *metadataModel; // @synthesize metadataModel=_metadataModel;
@property(nonatomic) __weak id <SPTAsyncScheduler> scheduler; // @synthesize scheduler=_scheduler;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelAllTasks;
- (void)cancelTask:(struct MetadataTask *)arg1;
- (_Bool)taskWasCancelled:(struct MetadataTask *)arg1;
- (void)taskCompleted:(struct MetadataTask *)arg1;
- (id)removeTokenForTask:(struct MetadataTask *)arg1;
- (id)makeReturnWithLocalBlock:(CDUnknownBlockType)arg1 withRemoteBlock:(CDUnknownBlockType)arg2 callback:(CDUnknownBlockType)arg3;
- (id)lookupArtists:(const vector_553ebee1 *)arg1 decorated:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
- (id)lookupAlbums:(const vector_553ebee1 *)arg1 decorated:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
- (id)lookupTracks:(const vector_553ebee1 *)arg1 decorated:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
- (id)getEntitiesFromCache:(id)arg1 withLinks:(const vector_553ebee1 *)arg2;
- (id)lookupEntitesWithURLs:(id)arg1 decorated:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
- (id)lookupDecoratedEntitiesWithURLs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)lookupDecoratedAlbumWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)lookupDecoratedArtistWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)lookupEntitiesWithURLs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)lookupAlbumWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)lookupArtistWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)lookupTrackWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)wrongTypeErrorWithMessage:(id)arg1;
- (void)cacheResponse:(id)arg1 withObjectClass:(Class)arg2 innerObjectClass:(Class)arg3;
- (void)cacheResponse:(id)arg1 withObjectClass:(Class)arg2 key:(id)arg3;
- (id)cacheForObjectClass:(Class)arg1;
- (id)initWithScheduler:(id)arg1 metadataModel:(struct MetadataModel *)arg2 remoteProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

