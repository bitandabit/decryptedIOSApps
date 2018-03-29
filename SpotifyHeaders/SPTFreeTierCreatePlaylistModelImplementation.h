//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFreeTierCreatePlaylistModel.h"

@class NSString;

@interface SPTFreeTierCreatePlaylistModelImplementation : NSObject <SPTFreeTierCreatePlaylistModel>
{
    id <SPTFreeTierCreatePlaylistModelDelegate> delegate;
    id <SPTPlaylistModel> _playlistModel;
    id <SPTPlaylistPlatformPlaylistDataLoader> _playlistDataLoader;
    id <SPTPlaylistPlatformDataLoaderRequestToken> _numberOfPlaylistsSubscription;
}

@property(retain, nonatomic) id <SPTPlaylistPlatformDataLoaderRequestToken> numberOfPlaylistsSubscription; // @synthesize numberOfPlaylistsSubscription=_numberOfPlaylistsSubscription;
@property(retain, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> playlistDataLoader; // @synthesize playlistDataLoader=_playlistDataLoader;
@property(retain, nonatomic) id <SPTPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
@property(nonatomic) __weak id <SPTFreeTierCreatePlaylistModelDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long playlistNameMaxLength;
- (void)createPlaylistWithName:(id)arg1;
- (void)loadModel;
- (id)initWithPlaylistModel:(id)arg1 playlistDataLoader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

