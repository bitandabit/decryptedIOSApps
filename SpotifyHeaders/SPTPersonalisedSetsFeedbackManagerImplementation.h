//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDataLoaderDelegate.h"
#import "SPTFormatListPlatformRemoteControlPolicyManagerObserver.h"
#import "SPTNowPlayingFeedbackManager.h"

@class NSHashTable, NSString, SPTDataLoader;

@interface SPTPersonalisedSetsFeedbackManagerImplementation : NSObject <SPTFormatListPlatformRemoteControlPolicyManagerObserver, SPTDataLoaderDelegate, SPTNowPlayingFeedbackManager>
{
    id <SPTFormatListPlatformRemoteControlPolicyManager> _remoteControlPolicyManager;
    id <SPTPlayer> _player;
    SPTDataLoader *_dataLoader;
    id <SPTFormatListPlatformResolver> _formatListPlatformResolver;
    id <SPTPlaylistModel> _playlistModel;
    NSHashTable *_observers;
}

@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) id <SPTPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
@property(readonly, nonatomic) id <SPTFormatListPlatformResolver> formatListPlatformResolver; // @synthesize formatListPlatformResolver=_formatListPlatformResolver;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTFormatListPlatformRemoteControlPolicyManager> remoteControlPolicyManager; // @synthesize remoteControlPolicyManager=_remoteControlPolicyManager;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)dealloc;
- (void)remoteControlPolicyManagerDidFinishDislikeFeedback:(id)arg1 track:(id)arg2 contextURI:(id)arg3 identifier:(id)arg4 error:(id)arg5;
- (void)remoteControlPolicyManagerDidFinishUnlikeFeedback:(id)arg1 track:(id)arg2 contextURI:(id)arg3 error:(id)arg4;
- (void)remoteControlPolicyManagerDidFinishLikeFeedback:(id)arg1 track:(id)arg2 contextURI:(id)arg3 error:(id)arg4;
- (void)remoteControlPolicyManagerDislikeButtonPressed:(id)arg1 track:(id)arg2 contextURI:(id)arg3 identifier:(id)arg4;
- (void)remoteControlPolicyManagerUnlikeButtonPressed:(id)arg1 track:(id)arg2 contextURI:(id)arg3;
- (void)remoteControlPolicyManagerLikeButtonPressed:(id)arg1 track:(id)arg2 contextURI:(id)arg3;
- (void)undoFeedbackType:(long long)arg1 track:(id)arg2 contextURL:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)resyncPlaylist:(id)arg1;
- (id)initWithRemoteControlPolicyManager:(id)arg1 player:(id)arg2 dataLoader:(id)arg3 formatListPlatformResolver:(id)arg4 playlistModel:(id)arg5;
- (void)undoPositiveSongFeedbackForTrack:(id)arg1 contextURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)undoNegativeArtistFeedbackForTrack:(id)arg1 contextURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)undoNegativeSongFeedbackForTrack:(id)arg1 contextURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)negativeArtistFeedbackForTrack:(id)arg1 contextURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic, getter=isFinite) _Bool finite;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

