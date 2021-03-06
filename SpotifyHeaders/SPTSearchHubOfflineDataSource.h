//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTSearchResultsDataSourceDelegate.h"

@class NSString, SPTSearchResultsLoaderFactory, SPTSearchResultsOfflineDataSource;

@interface SPTSearchHubOfflineDataSource : NSObject <SPTSearchResultsDataSourceDelegate>
{
    id <SPTOfflineManager> _offlineManager;
    id <SPTPlaylistPlatformPlaylistDataLoader> _playlistDataLoader;
    SPTSearchResultsLoaderFactory *_resultsLoaderFactory;
    SPTSearchResultsOfflineDataSource *_offlineDataSource;
    CDUnknownBlockType _searchCompletionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType searchCompletionHandler; // @synthesize searchCompletionHandler=_searchCompletionHandler;
@property(retain, nonatomic) SPTSearchResultsOfflineDataSource *offlineDataSource; // @synthesize offlineDataSource=_offlineDataSource;
@property(readonly, nonatomic) SPTSearchResultsLoaderFactory *resultsLoaderFactory; // @synthesize resultsLoaderFactory=_resultsLoaderFactory;
@property(readonly, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> playlistDataLoader; // @synthesize playlistDataLoader=_playlistDataLoader;
@property(readonly, nonatomic) __weak id <SPTOfflineManager> offlineManager; // @synthesize offlineManager=_offlineManager;
- (void).cxx_destruct;
- (void)searchResultsDataSource:(id)arg1 didFailLoadingWithError:(id)arg2 parameters:(id)arg3;
- (void)searchResultsDataSource:(id)arg1 didAddResultsToBuilder:(id)arg2 forParameters:(id)arg3;
- (id)searchParametersForQuery:(id)arg1;
- (void)search:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)initWithResultsLoadedFactory:(id)arg1 offlineManager:(id)arg2 playlistDataLoader:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

