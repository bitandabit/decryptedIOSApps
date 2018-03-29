//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BCOVAd, BCOVAdSequence;
@protocol BCOVPlaybackController, BCOVPlaybackSession;

@protocol BCOVPlaybackControllerAdsDelegate <NSObject>

@optional
- (void)playbackController:(id <BCOVPlaybackController>)arg1 playbackSession:(id <BCOVPlaybackSession>)arg2 didResumeAd:(BCOVAd *)arg3;
- (void)playbackController:(id <BCOVPlaybackController>)arg1 playbackSession:(id <BCOVPlaybackSession>)arg2 didPauseAd:(BCOVAd *)arg3;
- (void)playbackController:(id <BCOVPlaybackController>)arg1 playbackSession:(id <BCOVPlaybackSession>)arg2 ad:(BCOVAd *)arg3 didProgressTo:(double)arg4;
- (void)playbackController:(id <BCOVPlaybackController>)arg1 playbackSession:(id <BCOVPlaybackSession>)arg2 didExitAd:(BCOVAd *)arg3;
- (void)playbackController:(id <BCOVPlaybackController>)arg1 playbackSession:(id <BCOVPlaybackSession>)arg2 didEnterAd:(BCOVAd *)arg3;
- (void)playbackController:(id <BCOVPlaybackController>)arg1 playbackSession:(id <BCOVPlaybackSession>)arg2 didExitAdSequence:(BCOVAdSequence *)arg3;
- (void)playbackController:(id <BCOVPlaybackController>)arg1 playbackSession:(id <BCOVPlaybackSession>)arg2 didEnterAdSequence:(BCOVAdSequence *)arg3;
@end
