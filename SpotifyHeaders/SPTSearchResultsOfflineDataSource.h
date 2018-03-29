//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTSearchResultsDataSource.h"

@class NSString;

@interface SPTSearchResultsOfflineDataSource : NSObject <SPTSearchResultsDataSource>
{
    id <SPTSearchResultsDataSourceDelegate> _delegate;
    id <SPTOfflineManager> _offlineManager;
    id <SPTPlaylistPlatformPlaylistDataLoader> _playlistDataLoader;
}

+ (id)offlineDataSourceWithOfflineManager:(id)arg1 playlistDataLoder:(id)arg2;
@property(nonatomic) __weak id <SPTPlaylistPlatformPlaylistDataLoader> playlistDataLoader; // @synthesize playlistDataLoader=_playlistDataLoader;
@property(nonatomic) __weak id <SPTOfflineManager> offlineManager; // @synthesize offlineManager=_offlineManager;
@property(nonatomic) __weak id <SPTSearchResultsDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)hasNextDatasetForRequestParameters:(id)arg1;
- (id)showsSearchTaskWithParameters:(id)arg1;
- (id)tracksSearchTaskWithParameters:(id)arg1;
- (id)playlistSearchTaskWithParameters:(id)arg1;
- (_Bool)shouldSearchEntityWithIdentifier:(id)arg1 parameters:(id)arg2;
- (_Bool)addResultsForRequestParameters:(id)arg1 toBuilder:(id)arg2;
@property(readonly, copy, nonatomic) NSString *dataSourceIdentifier;
- (id)showModelForOfflineShowDictionary:(id)arg1;
- (id)playlistModelForPlaylist:(id)arg1;
- (id)albumModelForAlbum:(id)arg1 artist:(id)arg2;
- (id)artistModelForArtist:(id)arg1;
- (id)trackModelForTrack:(id)arg1 album:(id)arg2 artist:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

