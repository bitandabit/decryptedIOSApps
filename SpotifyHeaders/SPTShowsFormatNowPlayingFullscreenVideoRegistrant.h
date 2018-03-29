//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTNowPlayingFullscreenVideoRegistrant.h"

@class NSString;

@interface SPTShowsFormatNowPlayingFullscreenVideoRegistrant : NSObject <SPTNowPlayingFullscreenVideoRegistrant>
{
    id <SPTNowPlayingVideoManager> _nowPlayingVideoManager;
    id <SPTPlayer> _player;
    id <SPTAbbaFeatureFlags> _abbaFeatureFlags;
}

@property(readonly, nonatomic) __weak id <SPTAbbaFeatureFlags> abbaFeatureFlags; // @synthesize abbaFeatureFlags=_abbaFeatureFlags;
@property(readonly, nonatomic) __weak id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) __weak id <SPTNowPlayingVideoManager> nowPlayingVideoManager; // @synthesize nowPlayingVideoManager=_nowPlayingVideoManager;
- (void).cxx_destruct;
- (_Bool)shouldPresentFullscreenVideo;
- (void)dealloc;
- (id)initWithNowPlayingVideoManager:(id)arg1 player:(id)arg2 abbaFeatureFlags:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
