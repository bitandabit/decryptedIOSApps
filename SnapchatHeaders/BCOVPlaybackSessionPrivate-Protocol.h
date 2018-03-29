//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BCOVPlaybackSession-Protocol.h"

@class BCOV_RACSignal, NSURL, UIView;
@protocol AVAssetResourceLoaderDelegate;

@protocol BCOVPlaybackSessionPrivate <BCOVPlaybackSession>
@property(readonly, nonatomic) UIView *playerLayerView;
@property(readonly, nonatomic) _Bool attemptedToLoadURL;
- (void)pause;
- (void)play;
- (void)pauseAd;
- (void)resumeAd;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 completionHandler:(void (^)(_Bool))arg4;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 completionHandler:(void (^)(_Bool))arg2;
- (_Bool)bcov_respondsToSelector:(SEL)arg1;
- (void)begin;
- (_Bool)didReceiveTerminateNotification;
- (BCOV_RACSignal *)loadedTimeRangesChanges;
- (BCOV_RACSignal *)seekableRangesChanges;
- (BCOV_RACSignal *)progress;
- (BCOV_RACSignal *)lifecycle;
- (BCOV_RACSignal *)isExternalPlaybackActive;
- (BCOV_RACSignal *)durationChanges;
- (BCOV_RACSignal *)cuePoints;
- (void)resumeVideoAtTime:(CDStruct_1b6d18a9)arg1 withAutoPlay:(_Bool)arg2;
- (void)loadVideoURL:(NSURL *)arg1;
- (void)addResourceLoader:(id <AVAssetResourceLoaderDelegate>)arg1;
@end

