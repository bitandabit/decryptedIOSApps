//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTDataLoaderFactory;

@interface SPTSearchResultsLoaderFactory : NSObject
{
    SPTDataLoaderFactory *_dataLoaderFactory;
    id <SPTOfflineManager> _offlineManager;
    id <SPTPlaylistPlatformPlaylistDataLoader> _playlistDataLoader;
}

@property(readonly, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> playlistDataLoader; // @synthesize playlistDataLoader=_playlistDataLoader;
@property(readonly, nonatomic) __weak id <SPTOfflineManager> offlineManager; // @synthesize offlineManager=_offlineManager;
@property(readonly, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
- (void).cxx_destruct;
- (id)createEntityDictionaryParser;
- (id)provideOfflineSearchResultsKeywordDataSource;
- (id)provideSearchResultsKeywordDataSources;
- (id)createApolloServiceDataSource;
- (id)createResultsLoader;
- (id)initWithDataLoaderFactory:(id)arg1 offlineManager:(id)arg2 playlistDataLoader:(id)arg3;

@end
