//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, NSString, NSURL;

@protocol SPTFreeTierPlaylistViewModel <NSObject>
@property(readonly, nonatomic) id <SPTFreeTierPlaylistSponsoredViewModel> sponsoredViewModel;
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic) unsigned long long countOfSections;
@property(readonly, nonatomic) unsigned long long countOfTracks;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic, getter=isPlaylistPlaying) _Bool playlistPlaying;
@property(readonly, nonatomic, getter=isShuffleBadgeEducationAvailable) _Bool shuffleBadgeEducationAvailable;
@property(readonly, nonatomic, getter=isPlayButtonUsedForPlayback) _Bool playButtonUsedForPlayback;
@property(readonly, nonatomic, getter=isReportAbuseEnabled) _Bool reportAbuseEnabled;
@property(readonly, nonatomic, getter=isFollowed) _Bool followed;
@property(readonly, nonatomic, getter=isOwnedBySelf) _Bool ownedBySelf;
@property(readonly, nonatomic) NSString *playlistOwnerName;
@property(readonly, nonatomic) NSString *numberOfLikesText;
@property(readonly, nonatomic) NSString *creatorTitle;
@property(readonly, nonatomic) NSString *playlistName;
@property(readonly, nonatomic) NSURL *playlistImageURL;
@property(readonly, nonatomic) NSURL *playlistURL;
@property(nonatomic) __weak id <SPTFreeTierPlaylistViewModelDelegate> delegate;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
- (void)showShuffleBadgeEducationDialog;
- (void)addSongs;
- (void)deletePlaylist;
- (void)toggleFollow;
- (void)play;
- (void)viewDidLoad;
- (void)trackSelectedAtIndexPath:(NSIndexPath *)arg1;
- (id <SPTFreeTierPlaylistCloudViewModel>)cloudViewModelAtIndexPath:(NSIndexPath *)arg1;
- (id <SPTFreeTierPlaylistTrackViewModel>)trackViewModelAtIndexPath:(NSIndexPath *)arg1;
- (unsigned long long)countOfItemsInSection:(unsigned long long)arg1;
- (_Bool)isSponsoredPlaylistSection:(unsigned long long)arg1;
@end

