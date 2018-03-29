//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, SCAPIClient;

@interface SCStoryDiagnosticsLogger : NSObject
{
    double _initiateSnapLoadStartTime;
    _Bool _shouldSamplePlaybackMetrics;
    SCAPIClient *_httpClient;
    NSMutableDictionary *_loadingFriendStories;
    NSMutableDictionary *_friendStoriesPlaybackEvents;
}

+ (id)stringForSnapEntryReason:(unsigned long long)arg1;
+ (unsigned long long)entryReasonFromPreviousExitEvent:(long long)arg1;
+ (id)stringFromLoadContext:(long long)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *friendStoriesPlaybackEvents; // @synthesize friendStoriesPlaybackEvents=_friendStoriesPlaybackEvents;
@property(retain, nonatomic) NSMutableDictionary *loadingFriendStories; // @synthesize loadingFriendStories=_loadingFriendStories;
@property(retain, nonatomic) SCAPIClient *httpClient; // @synthesize httpClient=_httpClient;
- (void).cxx_destruct;
- (void)logClearChecksums:(unsigned long long)arg1 checksumsKey:(id)arg2;
- (void)_logBlizzardStorySnapWaitTime:(id)arg1 snapIndexPos:(unsigned long long)arg2 snapIndexCount:(unsigned long long)arg3 storyIndexPos:(unsigned long long)arg4 hasWaitTime:(_Bool)arg5 itemLoadState:(long long)arg6 sessionId:(long long)arg7 entryReason:(unsigned long long)arg8 viewLocation:(long long)arg9 finishWaitingReason:(unsigned long long)arg10 friendStories:(id)arg11 isStreaming:(_Bool)arg12;
- (void)_didViewSnapWithoutWaitingForLoadingWithStory:(id)arg1 currentStoriesViewingSession:(id)arg2 isStreaming:(_Bool)arg3;
- (void)_didStartWaitingForSnapToLoadWithStory:(id)arg1 currentStoriesViewingSession:(id)arg2;
- (void)_logTapToViewMetricEventEndOnLoadingScreen:(_Bool)arg1 currentStoriesViewingSession:(id)arg2;
- (void)tapToViewMetricDidTapToView;
- (void)didFinishWaitingForStorySnapToLoad:(id)arg1 isStreaming:(_Bool)arg2;
- (void)didShowNetworkErrorForStory:(id)arg1 currentStoriesViewingSession:(id)arg2 isStreaming:(_Bool)arg3;
- (void)didStartToPlayStorySnap:(id)arg1;
- (void)didViewStorySnapWithoutWaitingForLoading:(id)arg1 isStreaming:(_Bool)arg2;
- (void)didStartWaitingForStorySnapToLoad:(id)arg1;
- (void)onStoryStoryViewEnd:(id)arg1 userSession:(id)arg2 partialOnEntry:(_Bool)arg3 partialOnExit:(_Bool)arg4 hasReachedNewSnaps:(_Bool)arg5 didWaitForNewSnaps:(_Bool)arg6;
- (void)onStoryStoryViewStart:(id)arg1;
- (id)typeStringForFinishReason:(unsigned long long)arg1;
- (void)logMediaFrozenWithSnapId:(id)arg1 storyType:(id)arg2;
- (void)logMediaViewPlaybackError:(id)arg1 withSnapId:(id)arg2 storyType:(id)arg3;
- (void)logPlaybackItemActionForFriendStories:(id)arg1 story:(id)arg2 playSource:(long long)arg3 currentStoriesViewingSession:(id)arg4;
- (long long)_viewSourceForStory:(id)arg1 viewingType:(long long)arg2;
- (void)logPlaybackIntentToNext:(id)arg1 loadPhase:(long long)arg2 viewingType:(long long)arg3;
- (void)logPlaybackIntentFinishStory:(id)arg1 loadPhase:(long long)arg2 viewingType:(long long)arg3 videoStartPreparingTimeMs:(double)arg4 videoPrepareTimeMs:(double)arg5 playlistStartSetupViewModelsTimeMs:(double)arg6 playlistSetupViewModelsTimeMs:(double)arg7 isStreaming:(_Bool)arg8;
- (void)logPlaybackIntentFinishStory:(id)arg1 loadPhase:(long long)arg2 viewingType:(long long)arg3 isStreaming:(_Bool)arg4;
- (void)logPlaybackIntentStartStory:(id)arg1 viewingType:(long long)arg2 loadPhase:(long long)arg3 playSource:(long long)arg4 entryEvent:(long long)arg5;
- (void)logPlaybackIntentStartFriendStories:(id)arg1 viewingType:(long long)arg2 loadPhase:(long long)arg3 playSource:(long long)arg4;
- (_Bool)_shouldLogPlaybackMetricsForSearchOrMapStoryOnMasterApp:(id)arg1;
- (_Bool)_shouldLogPlaybackMetrics;
- (void)_logItemLoadInfoForStory:(id)arg1 loadPhase:(long long)arg2 eventSession:(id)arg3;
- (void)_logItemLoadInfoForBlockedFriendStories:(id)arg1 eventSession:(id)arg2 viewingType:(long long)arg3;
- (_Bool)_shouldLogPlaybackEventForLoadContext:(long long)arg1;
- (void)logBatchStateChanged:(id)arg1 viewingType:(long long)arg2 loadedStories:(id)arg3;
- (void)_logBlizzardStoryStoryLoadForFriendStories:(id)arg1 viewingType:(long long)arg2 storiesLoadedCount:(unsigned long long)arg3 success:(_Bool)arg4 loadingSession:(id)arg5;
- (void)logFetchMediaForFriendStories:(id)arg1 viewingType:(long long)arg2 loadContext:(long long)arg3 storiesToLoad:(id)arg4 viewLocation:(long long)arg5;
- (void)onDidFinishWaitingForDeepLink:(id)arg1 result:(id)arg2;
- (void)onDidStartWaitingForDeepLink;
- (void)_setupLoadingFriendStories;
- (void)clearState;
- (void)dealloc;
- (id)init;

@end

