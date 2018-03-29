//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVPlayer, SCAudioStitchViewport;
@protocol SCAudioStitch, SCAudioStitchPlaybackHandlerDelegate;

@interface SCAudioStitchPlaybackHandler : NSObject
{
    id <SCAudioStitch> _audioStitch;
    _Bool _canChangeViewport;
    id _autoAdvanceTimeObserver;
    id _hasNextPointTimeObserver;
    id _timeDidJumpObserver;
    long long _currentStitchSnapIndex;
    double _audioStitchLength;
    id <SCAudioStitchPlaybackHandlerDelegate> _delegate;
    SCAudioStitchViewport *_viewport;
    AVPlayer *_player;
}

+ (id)playbackHandlerWithStitch:(id)arg1;
@property(readonly, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(readonly, nonatomic) SCAudioStitchViewport *viewport; // @synthesize viewport=_viewport;
@property(readonly, nonatomic) _Bool canChangeViewport; // @synthesize canChangeViewport=_canChangeViewport;
@property(nonatomic) __weak id <SCAudioStitchPlaybackHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateCurrentStitchSnapWithIndex:(long long)arg1;
- (long long)_findConnectedSnapAtTime:(double)arg1 fromIndex:(long long)arg2;
- (_Bool)_hasNewViewport;
- (void)_updateCanChangeViewportWithForceNotify:(_Bool)arg1;
- (void)_addTimeDidJumpObserver;
- (void)_removeTimeDidJumpObserver;
- (void)_addHasNextPointTimeObserver;
- (void)_removeHasNextPointTimeObserver;
- (void)_addAutoAdvanceTimeObserver;
- (void)_removeAutoAdvanceTimeObserver;
- (void)changeViewport;
- (void)teardownFromPlayer;
- (void)setupToPlayer:(id)arg1;
- (void)dealloc;
- (id)initWithStitch:(id)arg1;

@end

