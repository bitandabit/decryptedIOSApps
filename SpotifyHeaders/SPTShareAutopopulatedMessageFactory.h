//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTShareAutopopulatedMessageFactory : NSObject
{
}

+ (id)concertMessageWithConcertTitle:(id)arg1;
+ (id)profileMessageWithProfileName:(id)arg1;
+ (id)showMessageWithShowName:(id)arg1;
+ (id)episodeMessageWithEpisodeName:(id)arg1 showName:(id)arg2;
+ (id)trackMessageWithTrackName:(id)arg1 artistName:(id)arg2;
+ (id)playlistMessageWithPlaylistName:(id)arg1 ownerName:(id)arg2;
+ (id)artistMessageWithArtistName:(id)arg1;
+ (id)albumMessageWithAlbumName:(id)arg1 artistName:(id)arg2;
+ (id)hashtagPrependedMessageWithString:(id)arg1;
+ (id)shareMessageWithShareType:(unsigned long long)arg1 itemName:(id)arg2 creatorName:(id)arg3 sourceName:(id)arg4 itemURLString:(id)arg5;

@end

