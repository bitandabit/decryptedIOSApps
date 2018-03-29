//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@class NSString;

@interface NSURL (Playlist)
+ (id)spt_playlistRootlistURI;
@property(readonly, nonatomic, getter=spt_isPlaylistRootlistURL) _Bool isPlaylistRootlistURL;
- (id)playlistFolderURL;
- (id)allTracksPlaylistURL;
@property(readonly, nonatomic, getter=spt_isInternalPlaylistsURL) _Bool isInternalPlaylistsURL;
@property(readonly, nonatomic, getter=spt_isDiscoverWeeklyPlaylist) _Bool discoverWeeklyPlaylist;
@property(readonly, nonatomic, getter=spt_playlistFolderIdentifier) NSString *playlistFolderIdentifier;
@property(readonly, nonatomic, getter=spt_playlistIdentifier) NSString *playlistIdentifier;
@end

