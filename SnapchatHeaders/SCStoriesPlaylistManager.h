//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;
@protocol SCStoriesPlaylistManagerDelegate;

@interface SCStoriesPlaylistManager : NSObject
{
    NSMutableArray *_playlist;
    id <SCStoriesPlaylistManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCStoriesPlaylistManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_addFriendStoriesWithKvoUsername:(id)arg1;
- (void)_removeFriendStoriesWithKvoUsername:(id)arg1;
- (void)clearStoriesPlaylist;
- (void)clearFriendKvoNamesNotInList:(id)arg1;
- (unsigned long long)playListLength;
- (void)didViewFriendStoriesWithKvoUsername:(id)arg1;
- (id)fullPlaylistOfKvoUsernames;
- (id)playlistOfKvoUsernamesBeginWithFriendStories:(id)arg1;
- (void)addFriendStoriesToPlaylistWithKvoUsername:(id)arg1;
- (_Bool)containsFriendStoriesWithKvoName:(id)arg1;
- (void)toggleFriendStoriesWithKvoName:(id)arg1;
- (id)init;

@end

