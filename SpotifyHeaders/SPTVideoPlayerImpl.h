//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTVideoPlayer.h"

@class NSString, SPTVideoManifestService, SPTVideoPlaybackSession, SPTVideoPlaybackSessionFactory, SPTVideoPlayerSource, SPTVideoPreferences, SPTVideoSurfaceImpl;

@interface SPTVideoPlayerImpl : NSObject <SPTVideoPlayer>
{
    _Bool _isPlayingInBackground;
    SPTVideoPlaybackSessionFactory *_playbackSessionFactory;
    SPTVideoManifestService *_manifestService;
    SPTVideoPreferences *_videoPreferences;
    SPTVideoPlaybackSession *_currentSession;
    SPTVideoSurfaceImpl *_surfaceView;
    SPTVideoPlayerSource *_playerSource;
}

@property(nonatomic) _Bool isPlayingInBackground; // @synthesize isPlayingInBackground=_isPlayingInBackground;
@property(retain, nonatomic) SPTVideoPlayerSource *playerSource; // @synthesize playerSource=_playerSource;
@property(retain, nonatomic) SPTVideoSurfaceImpl *surfaceView; // @synthesize surfaceView=_surfaceView;
@property(retain, nonatomic) SPTVideoPlaybackSession *currentSession; // @synthesize currentSession=_currentSession;
@property(retain, nonatomic) SPTVideoPreferences *videoPreferences; // @synthesize videoPreferences=_videoPreferences;
@property(retain, nonatomic) SPTVideoManifestService *manifestService; // @synthesize manifestService=_manifestService;
@property(retain, nonatomic) SPTVideoPlaybackSessionFactory *playbackSessionFactory; // @synthesize playbackSessionFactory=_playbackSessionFactory;
- (void).cxx_destruct;
- (void)pause;
- (void)play;
@property(nonatomic) _Bool repeat;
@property(nonatomic, getter=isMuted) _Bool muted;
@property(readonly, nonatomic) double currentTime;
@property(nonatomic) float rate;
- (void)seekTo:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateDisplayViewsPlayer;
- (void)createSurface;
- (void)loadSession:(id)arg1;
- (void)playVideoWithMediaManifest:(id)arg1;
- (void)playVideoWithManifestID:(id)arg1;
- (void)dealloc;
- (id)initWithPlaybackSessionFactory:(id)arg1 manifestService:(id)arg2 videoPreferences:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
