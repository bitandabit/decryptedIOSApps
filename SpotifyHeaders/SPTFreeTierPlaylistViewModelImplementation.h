//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFreeTierAllSongsDataSource.h"
#import "SPTFreeTierPlaylistModelDelegate.h"
#import "SPTFreeTierPlaylistSponsoredViewModelDelegate.h"
#import "SPTFreeTierPlaylistViewModel.h"
#import "SPTPlayerObserver.h"

@class NSArray, NSString, NSURL, SPTFreeTierPlaylistLogger, SPTPlayOrigin, SPTPlayerState;

@interface SPTFreeTierPlaylistViewModelImplementation : NSObject <SPTPlayerObserver, SPTFreeTierAllSongsDataSource, SPTFreeTierPlaylistSponsoredViewModelDelegate, SPTFreeTierPlaylistViewModel, SPTFreeTierPlaylistModelDelegate>
{
    _Bool _ownedBySelf;
    _Bool _followed;
    _Bool _reportAbuseEnabled;
    _Bool _playButtonUsedForPlayback;
    _Bool _shuffleBadgeEducationAvailable;
    id <SPTFreeTierPlaylistViewModelDelegate> _delegate;
    id <SPTFreeTierAllSongsDataSourceDelegate> _dataSourceDelegate;
    id <SPTFreeTierPlaylistModel> _playlistModel;
    SPTPlayOrigin *_playOrigin;
    id <SPTAssistedCurationUIService> _assistedCurationUIService;
    NSURL *_playlistURL;
    NSURL *_playlistImageURL;
    NSString *_playlistName;
    NSString *_creatorTitle;
    NSString *_playlistOwnerName;
    NSString *_numberOfLikesText;
    unsigned long long _type;
    NSArray *_tracks;
    NSArray *_recommendations;
    id <SPTPlayer> _player;
    SPTPlayerState *_lastPlayerState;
    id <SPTFreeTierAllSongsRegistry> _allSongsRegistry;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTFreeTierPlaylistSponsoredViewModel> _sponsoredViewModel;
    id <SPTOfflineModeState> _offlineModeState;
    id <SPTCollectionPlatformConfiguration> _collectionConfiguration;
    SPTFreeTierPlaylistLogger *_logger;
}

@property(retain, nonatomic) SPTFreeTierPlaylistLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTCollectionPlatformConfiguration> collectionConfiguration; // @synthesize collectionConfiguration=_collectionConfiguration;
@property(readonly, nonatomic) __weak id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(retain, nonatomic) id <SPTFreeTierPlaylistSponsoredViewModel> sponsoredViewModel; // @synthesize sponsoredViewModel=_sponsoredViewModel;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <SPTFreeTierAllSongsRegistry> allSongsRegistry; // @synthesize allSongsRegistry=_allSongsRegistry;
@property(retain, nonatomic) SPTPlayerState *lastPlayerState; // @synthesize lastPlayerState=_lastPlayerState;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) NSArray *recommendations; // @synthesize recommendations=_recommendations;
@property(retain, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic, getter=isShuffleBadgeEducationAvailable) _Bool shuffleBadgeEducationAvailable; // @synthesize shuffleBadgeEducationAvailable=_shuffleBadgeEducationAvailable;
@property(nonatomic, getter=isPlayButtonUsedForPlayback) _Bool playButtonUsedForPlayback; // @synthesize playButtonUsedForPlayback=_playButtonUsedForPlayback;
@property(nonatomic, getter=isReportAbuseEnabled) _Bool reportAbuseEnabled; // @synthesize reportAbuseEnabled=_reportAbuseEnabled;
@property(nonatomic, getter=isFollowed) _Bool followed; // @synthesize followed=_followed;
@property(nonatomic, getter=isOwnedBySelf) _Bool ownedBySelf; // @synthesize ownedBySelf=_ownedBySelf;
@property(retain, nonatomic) NSString *numberOfLikesText; // @synthesize numberOfLikesText=_numberOfLikesText;
@property(retain, nonatomic) NSString *playlistOwnerName; // @synthesize playlistOwnerName=_playlistOwnerName;
@property(retain, nonatomic) NSString *creatorTitle; // @synthesize creatorTitle=_creatorTitle;
@property(retain, nonatomic) NSString *playlistName; // @synthesize playlistName=_playlistName;
@property(retain, nonatomic) NSURL *playlistImageURL; // @synthesize playlistImageURL=_playlistImageURL;
@property(retain, nonatomic) NSURL *playlistURL; // @synthesize playlistURL=_playlistURL;
@property(readonly, nonatomic) __weak id <SPTAssistedCurationUIService> assistedCurationUIService; // @synthesize assistedCurationUIService=_assistedCurationUIService;
@property(retain, nonatomic) SPTPlayOrigin *playOrigin; // @synthesize playOrigin=_playOrigin;
@property(retain, nonatomic) id <SPTFreeTierPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
@property(nonatomic) __weak id <SPTFreeTierAllSongsDataSourceDelegate> dataSourceDelegate; // @synthesize dataSourceDelegate=_dataSourceDelegate;
@property(nonatomic) __weak id <SPTFreeTierPlaylistViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)playlistViewModelSponsorshipDidChange:(id)arg1;
- (id)artistsForIndexPath:(id)arg1;
- (id)albumNameForIndexPath:(id)arg1;
- (id)trackURIForIndexPath:(id)arg1;
- (_Bool)isTrackEnabledForIndexPath:(id)arg1;
- (_Bool)isSongLikedForIndexPath:(id)arg1;
- (_Bool)isSongBannedForIndexPath:(id)arg1;
- (id)trackPreviewIdentifierForIndexPath:(id)arg1;
- (id)imageURLForIndexPath:(id)arg1;
- (id)trackSubtitleAccessoryViewForIndexPath:(id)arg1;
- (id)artistNameForIndexPath:(id)arg1;
- (id)trackNameForIndexPath:(id)arg1;
- (id)titleForSection:(long long)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSectionsForAllSongs;
- (_Bool)shouldShowHeadersInAllSongss;
- (id)titleForAllSongs;
- (void)allSongsDataSourceLoads;
- (_Bool)hasDataSourceLoadedForAllSongs;
- (id)allSongsTrackViewModeForIndexPath:(id)arg1;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)updateFollowCount:(unsigned long long)arg1;
- (void)freeTierPlaylistModel:(id)arg1 error:(id)arg2;
- (void)freeTierPlaylistModel:(id)arg1 initialFollowCount:(unsigned long long)arg2;
- (void)freeTierPlaylistModel:(id)arg1 playlistModelEntityDidChange:(id)arg2;
- (_Bool)isRecommendedSection:(unsigned long long)arg1;
- (_Bool)isSponsoredPlaylistSection:(unsigned long long)arg1;
- (void)playTrackAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long countOfSections;
@property(readonly, nonatomic) unsigned long long countOfTracks;
- (unsigned long long)countOfItemsInSection:(unsigned long long)arg1;
- (void)trackSelectedAtIndexPath:(id)arg1;
- (id)cloudViewModelAtIndexPath:(id)arg1;
- (void)deletePlaylist;
- (id)trackViewModelAtIndexPath:(id)arg1;
- (void)showShuffleBadgeEducationDialog;
- (void)toggleFollow;
- (void)addSongs;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic, getter=isPlaylistPlaying) _Bool playlistPlaying;
- (void)play;
- (void)viewDidLoad;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
- (id)initWithPlaylistModel:(id)arg1 playOrigin:(id)arg2 assistedCurationUIService:(id)arg3 player:(id)arg4 allSongsRegistry:(id)arg5 linkDispatcher:(id)arg6 sponsoredViewModel:(id)arg7 offlineModeState:(id)arg8 collectionConfiguration:(id)arg9 logger:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
