//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCXGameStateProvider-Protocol.h"

@class NSMutableDictionary, NSString, SCMTGameMarker, SCMTGetCurrentGameStateResponse, SCMapTapToPlayLogger, SCUserSession;

@interface SCMapGameStateDataStore : NSObject <SCXGameStateProvider>
{
    SCUserSession *_userSession;
    unsigned long long _fetchGameStateState;
    unsigned long long _fetchScoreState;
    unsigned long long _numConsecErrors;
    SCMTGetCurrentGameStateResponse *_currentGameState;
    double _gameStateTimestamp;
    NSMutableDictionary *_acquiredMarkers;
    SCMTGameMarker *_inLensMarker;
    SCMapTapToPlayLogger *_mapLogger;
}

- (void).cxx_destruct;
- (void)_postScoreDidChangeNotification;
- (void)_logInLensAcquisitionResult:(_Bool)arg1 markerId:(id)arg2;
- (void)_handleErrorForAcquiringGameMarker:(id)arg1;
- (void)_handleInvalidResponseForAcquiringGameMarker:(id)arg1;
- (void)_addAcquiredGameMarkerToLocalStorage:(id)arg1;
- (id)_acquiredGameMarkersInLocalStorage;
- (void)_clearHenForDebugging;
- (void)_acquireInLensGameMarker:(id)arg1;
- (id)activeGameId;
- (unsigned long long)score;
- (_Bool)hasAcquiredGameMarkerWithId:(id)arg1;
- (_Bool)isGameOn;
- (_Bool)shouldFetchGameTiles;
- (_Bool)hasFetchedScore;
- (_Bool)didAcquireLensGameMarker:(id)arg1;
- (id)gameStateJSON;
- (void)didDismisssLensForGameMarker;
- (void)didUnlockLensForGameMarkerPOI:(id)arg1 mapLogger:(id)arg2;
@property(readonly, nonatomic) double remainingGameDuration;
@property(readonly, nonatomic) _Bool mustCaptureGameMarkerInLens;
@property(readonly, nonatomic) _Bool canRenderActionmojiDynamicElements;
@property(readonly, nonatomic) _Bool canPresentLeaderboard;
@property(readonly, nonatomic) _Bool showUserScore;
- (void)_fetchScoreDone:(id)arg1 error:(id)arg2;
- (void)_fetchScore;
- (void)fetchScoreIfNeeded;
- (void)_didFetchGameState:(id)arg1 error:(id)arg2;
- (void)refreshGameState;
- (_Bool)_isHenABTestEnabled;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
