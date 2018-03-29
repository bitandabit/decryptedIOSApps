//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBAdVideoLogger, FBAdVideoPlayerView, NSMutableSet;

@interface FBMediaViewVideoRenderer : UIView
{
    CDUnknownBlockType _failureBlock;
    _Bool _isFailed;
    _Bool _isSeeking;
    _Bool _isStarted;
    CDUnknownBlockType _loadedBlock;
    id <FNFAVPlayer> _player;
    id <FNFAVPlayerItem> _playerItem;
    _Bool _playingBeforeSeeked;
    NSMutableSet *_timingObservers;
    float _volume;
    UIView *_videoContainerView;
    FBAdVideoLogger *_videoLogger;
    FBAdVideoPlayerView *_videoView;
}

- (void).cxx_destruct;
- (void)videoDidFailWithError:(id)arg1;
- (void)videoDidEnd;
- (void)videoDidDisengageSeek;
- (void)videoDidSeek;
- (void)videoDidEngageSeek;
- (void)videoDidPlay;
- (void)videoDidPause;
- (void)videoDidLoad;
- (void)videoDidChangeVolume;
- (void)loadVideoURL:(id)arg1 clientToken:(id)arg2 autoplayEnabled:(_Bool)arg3 loadedBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)loadVideoURL:(id)arg1 clientToken:(id)arg2 autoplayEnabled:(_Bool)arg3;
@property(nonatomic) float volume;
- (void)seekVideoToTime:(CDStruct_1b6d18a9)arg1;
- (void)removeTimeObserver:(id)arg1;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
- (void)playVideo;
- (void)pauseVideo;
- (void)engageVideoSeek;
- (void)disengageVideoSeek;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentTime;
@property(readonly, nonatomic) double aspectRatio;
- (id)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

