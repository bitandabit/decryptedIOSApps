//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPSession, SPTDataLoader, SPTSearchHubSettings, SPTSearchResultsLoaderFactory;

@interface SPTSearchHubContentOperationFactory : NSObject
{
    id <EXP_SPTHubContentOperationFactory> _hubContentOperationFactory;
    SPTSearchResultsLoaderFactory *_searchResultsLoaderFactory;
    id <SPTSearchBarStateObservable> _searchBarStateObservableObject;
    SPTDataLoader *_dataLoader;
    SPTSearchHubSettings *_searchHubSettings;
    id <SPTOfflineManager> _offlineManager;
    id <SPTPlaylistPlatformPlaylistDataLoader> _playlistDataLoader;
    SPSession *_session;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTSearch2URLProviding> _urlProvider;
    id <SPTExplicitContentHubContentOperationFactory> _explicitContentHubContentOperationFactory;
    id <SPTOnDemandSet> _onDemandSet;
}

@property(nonatomic) __weak id <SPTOnDemandSet> onDemandSet; // @synthesize onDemandSet=_onDemandSet;
@property(readonly, nonatomic) id <SPTExplicitContentHubContentOperationFactory> explicitContentHubContentOperationFactory; // @synthesize explicitContentHubContentOperationFactory=_explicitContentHubContentOperationFactory;
@property(readonly, nonatomic) id <SPTSearch2URLProviding> urlProvider; // @synthesize urlProvider=_urlProvider;
@property(readonly, nonatomic) id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(readonly, nonatomic) __weak SPSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> playlistDataLoader; // @synthesize playlistDataLoader=_playlistDataLoader;
@property(readonly, nonatomic) __weak id <SPTOfflineManager> offlineManager; // @synthesize offlineManager=_offlineManager;
@property(readonly, nonatomic) SPTSearchHubSettings *searchHubSettings; // @synthesize searchHubSettings=_searchHubSettings;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(readonly, nonatomic) id <SPTSearchBarStateObservable> searchBarStateObservableObject; // @synthesize searchBarStateObservableObject=_searchBarStateObservableObject;
@property(readonly, nonatomic) SPTSearchResultsLoaderFactory *searchResultsLoaderFactory; // @synthesize searchResultsLoaderFactory=_searchResultsLoaderFactory;
@property(readonly, nonatomic) id <EXP_SPTHubContentOperationFactory> hubContentOperationFactory; // @synthesize hubContentOperationFactory=_hubContentOperationFactory;
- (void).cxx_destruct;
- (id)instantiatePlaybackDisablingContentOperation;
- (id)instantiatePlaybackHighlightContentOperation;
- (id)instantiateInfoViewContentOperation;
- (id)instantiateEmptyStateContentOperation;
- (id)instantiateOfflineDataSource;
- (id)instantiateOfflineSearchPerformer;
- (id)instantiateOnlineSearchPerformer;
- (id)instantiateSearchContentOperationWithViewURI:(id)arg1;
- (id)instantiateTargetToEventsTransformationContentOperation;
- (id)instantiateOnDemandDecoratorContentOperation;
- (id)createContentOperationsForViewURI:(id)arg1;
- (id)initWithHubContentOperationFactory:(id)arg1 searchResultsLoaderFactory:(id)arg2 searchBarStateObservable:(id)arg3 dataLoader:(id)arg4 offlineManager:(id)arg5 playlistDataLoader:(id)arg6 searchSettings:(id)arg7 session:(id)arg8 playerFeature:(id)arg9 urlProvider:(id)arg10 explicitContentHubContentOperationFactory:(id)arg11 onDemandSet:(id)arg12;

@end

