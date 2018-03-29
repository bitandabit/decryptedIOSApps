`````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTCollectionSorting.h"

@class NSArray, NSDate, NSIndexPath, NSString, NSURL, SPTUser;

@protocol SPTPlaylistViewModel <SPTCollectionSorting>
@property(readonly, nonatomic) NSArray *playerTracks;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic) id <SPTSponsoredContextViewModel> sponsoredContextViewModel;
@property(readonly, nonatomic) _Bool playlistIsLocalFiles;
@property(readonly, nonatomic) _Bool playlistIsAllTracksInFolder;
@property(readonly, nonatomic) _Bool playlistIsFollowedByCurrentUser;
@property(readonly, nonatomic) _Bool playlistCanEditTrackOrder;
@property(readonly, nonatomic) _Bool playlistCanBeEdited;
@property(readonly, nonatomic) _Bool playlistIsOwnedByCurrentUser;
@property(readonly, nonatomic, getter=isPlaylistPublished) _Bool playlistPublished;
@property(readonly, nonatomic, getter=isPlaylistIsCollaborative) _Bool playlistIsCollaborative;
@property(nonatomic, getter=isAvailableOffline) _Bool availableOffline;
@property(readonly, nonatomic) _Bool enableReportAbuse;
@property(readonly, nonatomic) NSString *descriptionForSpotlightIndex;
@property(readonly, nonatomic) NSString *playlistDescription;
@property(readonly, nonatomic) NSString *playlistName;
@property(readonly, nonatomic) NSURL *playlistImageURL;
@property(readonly, nonatomic) NSURL *entityURL;
@property(readonly, nonatomic) _Bool totalDurationLoaded;
@property(readonly, nonatomic) double totalDuration;
@property(readonly, nonatomic) long long numberOfSubscribers;
@property(readonly, nonatomic) NSString *numberOfSubscribersText;
@property(readonly, nonatomic) NSDate *playlistLastEditedDate;
@property(readonly, nonatomic) __weak id <SPTOfflineManager> offlineManager;
@property(readonly, nonatomic) SPTUser *playlistOwner;
@property(readonly, nonatomic) _Bool loadError;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
@property(nonatomic) __weak id <SPTPlaylistViewModelDelegate> delegate;
- (_Bool)containsTrackWithURI:(NSURL *)arg1;
- (unsigned long long)offlineAvailability;
- (void)tryLoadItemAtIndexPath:(NSIndexPath *)arg1;
- (long long)totalNumberOfItemsInSection:(long long)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id <SPTPlaylistEntityListTrackItem>)itemAtIndexPath:(NSIndexPath *)arg1;
- (void)removePlaylist;
- (void)setTextFilter:(NSString *)arg1 onCompletion:(void (^)(NSError *))arg2;
- (void)publishPlaylist:(_Bool)arg1 onCompletion:(void (^)(NSError *))arg2;
- (void)makePlaylistCollaborative:(_Bool)arg1 onCompletion:(void (^)(NSError *))arg2;
- (void)followPlaylist:(_Bool)arg1 onCompletion:(void (^)(NSError *))arg2;
- (void)renamePlaylist:(NSString *)arg1 onCompletion:(void (^)(NSError *))arg2;
- (void)playWithShuffle:(_Bool)arg1 didUserTapTrackRow:(_Bool)arg2;
- (void)playAutoTrialTrackURL:(NSURL *)arg1;
- (void)playTrackAtIndexPath:(NSIndexPath *)arg1;
- (void)playTrackURL:(NSURL *)arg1;
- (_Bool)isPlayingIndexPath:(NSIndexPath *)arg1;
- (void)moveTrackAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (NSString *)ownerNameForTrackAtIndex:(unsigned long long)arg1;
- (long long)offlineSyncStatusForIndexPath:(NSIndexPath *)arg1;
- (void)removeTrackAtIndex:(unsigned long long)arg1;
- (_Bool)shouldHighlightTracks;
- (void)updateFollowerCount;
- (void)removeObservers;
- (void)setupObservers;
- (void)viewDidLoad;
- (void)load;
@end
