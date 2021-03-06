//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCFriendLocationsListener-Protocol.h"

@class NSMutableSet, NSString, SCMapLoggerDurationTimer, SCMapLoggerSession, SCMapViewController, SCUserSession, SCXRenderLayer;

@interface SCMapViewLogger : NSObject <SCFriendLocationsListener>
{
    _Bool _inMap;
    SCMapLoggerSession *_session;
    SCUserSession *_userSession;
    SCMapViewController *_mapViewController;
    SCXRenderLayer *_renderLayer;
    SCMapLoggerDurationTimer *_durationTimer;
    NSMutableSet *_seenFriendUserIds;
    unsigned long long _maxFriendsInViewport;
    NSMutableSet *_seenPoiIds;
}

@property(readonly, nonatomic) NSMutableSet *seenPoiIds; // @synthesize seenPoiIds=_seenPoiIds;
@property(readonly, nonatomic) unsigned long long maxFriendsInViewport; // @synthesize maxFriendsInViewport=_maxFriendsInViewport;
@property(readonly, nonatomic) NSMutableSet *seenFriendUserIds; // @synthesize seenFriendUserIds=_seenFriendUserIds;
@property(nonatomic) _Bool inMap; // @synthesize inMap=_inMap;
@property(readonly, nonatomic) SCMapLoggerDurationTimer *durationTimer; // @synthesize durationTimer=_durationTimer;
@property(readonly, nonatomic) __weak SCXRenderLayer *renderLayer; // @synthesize renderLayer=_renderLayer;
@property(readonly, nonatomic) __weak SCMapViewController *mapViewController; // @synthesize mapViewController=_mapViewController;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak SCMapLoggerSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)friendLocationsDidChange:(id)arg1 affectedUserIds:(id)arg2;
@property(readonly, copy) NSString *description;
- (void)_updatePoisInViewportStatistics;
- (void)_updateFriendsInViewportStatistics;
- (void)_stopSnapchatSessionLoggingWithCloseType:(long long)arg1;
- (void)_startSnapchatSessionLogging;
- (void)_onMapExitedWithCloseType:(long long)arg1;
- (void)_onMapEnteredWithOpenType:(long long)arg1 source:(long long)arg2;
- (void)didShowGameStartDialog;
- (void)didTapToOpenLeaderboard;
- (void)didFinishFirstMapLoad:(id)arg1;
- (void)exploreDidViewMyStatus:(id)arg1 didTap:(_Bool)arg2;
- (void)exploreButtonDidAppearWithCount:(unsigned long long)arg1 announcementId:(id)arg2;
- (void)didTapOnCompassButton;
- (void)viewedFriendCluster:(id)arg1 source:(long long)arg2 actionType:(long long)arg3;
- (void)regionDidChange;
- (void)applicationDidEnterBackground;
- (void)applicationDidBecomeActive;
- (void)viewDidDisappearWithCloseType:(long long)arg1;
- (void)onboardingViewDidAppearWithOpenType:(long long)arg1 source:(long long)arg2;
- (void)viewDidAppearWithOpenType:(long long)arg1 source:(long long)arg2;
- (void)dealloc;
- (id)initWithSession:(id)arg1 mapViewController:(id)arg2 renderLayer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

