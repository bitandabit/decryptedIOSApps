//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSearchEventAnnouncing-Protocol.h"
#import "SCSearchEventListener-Protocol.h"

@class NSString, SCQueuePerformer, SCSearchEventListenerAnnouncer, SCSearchGCDBlockTimer, SCUserSession;

@interface SCFriendsFeedRankingAppStateTracker : NSObject <SCSearchEventAnnouncing, SCSearchEventListener>
{
    SCUserSession *_userSession;
    SCSearchEventListenerAnnouncer *_eventAnnouncer;
    SCSearchGCDBlockTimer *_timer;
    SCQueuePerformer *_performer;
    double _fullScoreTime;
    _Bool _isOnFriendsFeed;
    NSString *_friendsFeedTabIdentifer;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_announceSwitchToFriendsFeedTabWithIdentifier:(id)arg1;
- (void)_announceNavigationWithIdentifier:(id)arg1;
- (void)_invalidateTimer;
- (void)_createTimerForNavigationIdentifier:(id)arg1;
- (id)_friendsFeedTabIdentifer;
- (id)friendsFeedTabIdentifer;
- (void)didSwitchToFriendsFeedTabWithIdentifier:(id)arg1;
- (void)navigatedToTargetWithIdentifier:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)initWithUserSession:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

