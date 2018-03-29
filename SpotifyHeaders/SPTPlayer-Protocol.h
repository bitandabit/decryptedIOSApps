//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString, NSURL, SPTPauseOptions, SPTPlayOptions, SPTPlayOrigin, SPTPlayerContext, SPTPlayerQueue, SPTPlayerState, SPTPlayerTrack, SPTSkipOptions, SPTask;

@protocol SPTPlayer <NSObject>
@property(readonly, copy, nonatomic) SPTPlayerState *state;
@property(readonly, copy, nonatomic) NSString *referrerIdentifier;
@property(readonly, copy, nonatomic) NSString *featureIdentifier;
@property(readonly, copy, nonatomic) NSURL *viewURI;
@property(retain, nonatomic) SPTPlayerContext *stagedContext;
- (void)addStagedContextObserver:(id <SPTPlayerStagedContextObserver>)arg1;
- (void)fetchState:(void (^)(SPTPlayerState *))arg1 reverseCap:(long long)arg2 futureCap:(long long)arg3 on:(NSObject<OS_dispatch_queue> *)arg4;
- (void)fetchState:(void (^)(SPTPlayerState *))arg1 on:(NSObject<OS_dispatch_queue> *)arg2;
- (void)removePlayerObserver:(id <SPTPlayerObserver>)arg1;
- (void)addPlayerObserver:(id <SPTPlayerObserver>)arg1;
- (void)removePlayerQueueObserver:(id <SPTPlayerQueueObserver>)arg1;
- (void)addPlayerQueueObserver:(id <SPTPlayerQueueObserver>)arg1;
- (SPTask *)addToQueue:(SPTPlayerTrack *)arg1;
- (SPTask *)setQueue:(SPTPlayerQueue *)arg1;
- (void)fetchQueue:(void (^)(SPTPlayerQueue *))arg1 on:(NSObject<OS_dispatch_queue> *)arg2;
- (SPTask *)restore:(id <NSCoding>)arg1;
- (SPTask *)save;
- (SPTask *)updateWithContext:(SPTPlayerContext *)arg1;
- (SPTask *)seekTo:(double)arg1;
- (SPTask *)setRepeatingTrack:(_Bool)arg1;
- (SPTask *)setRepeatingContext:(_Bool)arg1;
- (SPTask *)setShufflingContext:(_Bool)arg1;
- (SPTask *)skipToNextTrackWithOptions:(SPTSkipOptions *)arg1 track:(SPTPlayerTrack *)arg2;
- (SPTask *)skipToPreviousTrackWithOptions:(SPTSkipOptions *)arg1 track:(SPTPlayerTrack *)arg2;
- (SPTask *)skipToNextTrackWithOptions:(SPTSkipOptions *)arg1;
- (SPTask *)skipToPreviousTrackWithOptions:(SPTSkipOptions *)arg1;
- (SPTask *)pause:(SPTPauseOptions *)arg1;
- (SPTask *)resume;
- (SPTask *)stop;
- (id <SPTPlayerPlay>)preparePlaybackOfContext:(SPTPlayerContext *)arg1 options:(SPTPlayOptions *)arg2 viewURI:(NSURL *)arg3;
- (SPTask *)playContext:(SPTPlayerContext *)arg1 options:(SPTPlayOptions *)arg2 origin:(SPTPlayOrigin *)arg3;
- (SPTask *)playContext:(SPTPlayerContext *)arg1 options:(SPTPlayOptions *)arg2 externalReferrer:(NSString *)arg3;
- (SPTask *)playContext:(SPTPlayerContext *)arg1 options:(SPTPlayOptions *)arg2 viewURI:(NSURL *)arg3;
- (SPTask *)playContext:(SPTPlayerContext *)arg1 options:(SPTPlayOptions *)arg2;
@end

