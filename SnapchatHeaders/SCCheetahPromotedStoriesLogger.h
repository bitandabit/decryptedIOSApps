//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSNumber, NSString;

@interface SCCheetahPromotedStoriesLogger : NSObject
{
    NSNumber *_currentStoryViewingSessionId;
    _Bool _isInStoryViewingSession;
    NSMutableDictionary *_serveItemIdToSequenceNumberMap;
    NSMutableSet *_trackedTileDisplayServeItemIdForCurrentDiscoverSession;
    NSMutableSet *_trackedOptOutDisplayServeItemIdForCurrentStoryViewingSession;
    NSString *_currentDiscoverSessionId;
}

+ (id)shared;
@property(readonly, copy, nonatomic) NSString *currentDiscoverSessionId; // @synthesize currentDiscoverSessionId=_currentDiscoverSessionId;
- (void).cxx_destruct;
- (void)_resetDiscoverSessionData;
- (long long)_getSequenceIdForServeItemId:(id)arg1;
- (void)_logAdTileViewWithPromotedStory:(id)arg1 didEngage:(_Bool)arg2 viewedTime:(id)arg3;
- (void)_logAdTileViewEngagementImpression:(id)arg1;
- (void)_logAdTileViewOptOutDisplayImpression:(id)arg1;
- (void)_logAdTileViewTileImpression:(id)arg1 data:(id)arg2;
- (id)_sessionIdFromPageSessionId:(id)arg1 cheetahStory:(id)arg2;
- (void)reportPromotedStoryWithFlaggedReasonType:(long long)arg1 exitType:(long long)arg2 additionalData:(id)arg3;
- (void)logPromotedStoryDidFinishOptOutDisplay:(id)arg1 storySessionId:(long long)arg2;
- (void)logPromotedStoryDidFinishPlaying:(id)arg1;
- (void)logPromotedStoryTileImpression:(id)arg1 data:(id)arg2 pageSessionId:(id)arg3;
- (void)logPromotedStoryOpened:(id)arg1 pageSessionId:(id)arg2;
- (void)didFinishStoryViewingSession;
- (void)didStartStoryViewingSession;
- (id)init;

@end

