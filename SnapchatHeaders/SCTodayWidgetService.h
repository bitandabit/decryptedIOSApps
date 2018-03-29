//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCTodayWidgetService-Protocol.h"

@class NSOperationQueue, NSString, SCUserSession;

@interface SCTodayWidgetService : NSObject <SCTodayWidgetService>
{
    SCUserSession *_userSession;
    NSString *_widgetBundleIdentifier;
    NSOperationQueue *_workerQueue;
    _Bool _visible;
}

- (void).cxx_destruct;
- (id)_getFriendsList;
- (void)_updateWidgetData;
- (void)_friendListUpdated;
- (void)_logWidgetViewedIfApplicable;
- (void)_checkForFirstRun;
- (void)_clearWidgetFriendsData;
- (void)_setWidgetVisibility:(_Bool)arg1;
- (void)_disableTodayWidget;
- (void)_enableTodayWidget;
- (void)invalidate;
- (void)_logWidgetViewed:(long long)arg1;
- (void)logDeeplinkAction;
- (void)_logWidgetAdded;
- (void)start;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

