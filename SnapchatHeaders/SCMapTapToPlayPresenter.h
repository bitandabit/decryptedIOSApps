//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCOperaEventListener-Protocol.h"
#import "SCStoryPresenterDelegate-Protocol.h"

@class NSString, SCContextSession, SCStoryPresenter_DEPRECATED, SCUserSession, SCXRenderLock, SCXRenderLockManager, Story, UIViewController;
@protocol NavigationDelegate, SCMapTapToPlayPresenterDelegate;

@interface SCMapTapToPlayPresenter : NSObject <SCStoryPresenterDelegate, SCOperaEventListener>
{
    SCStoryPresenter_DEPRECATED *_storyPresenter;
    SCXRenderLock *_renderLock;
    SCXRenderLockManager *_renderLockManager;
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
    _Bool _didAlreadyDismiss;
    _Bool _didCleanupAfterDismissal;
    id <SCMapTapToPlayPresenterDelegate> _delegate;
    UIViewController *_presentingViewController;
    Story *_visibleStory;
}

@property(nonatomic) __weak Story *visibleStory; // @synthesize visibleStory=_visibleStory;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) __weak id <SCMapTapToPlayPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)storyPresenter:(id)arg1 didFinishViewingFriendStories:(id)arg2 firstStoryDisplayed:(id)arg3 isReplayMode:(_Bool)arg4 becameFullyViewed:(_Bool)arg5;
- (void)storyPresenter:(id)arg1 didBeginPlayingFriendStories:(id)arg2;
- (void)storyPresenterWillBeginPlayingStory:(id)arg1 friendStories:(id)arg2 viewLocation:(long long)arg3;
- (void)storyPresenterDidFinishDismissingStory:(id)arg1;
- (void)storyPresenterDidCancelDismissingStory:(id)arg1;
- (void)storyPresenterWillBeginAnimatingToDismissStory:(id)arg1;
- (void)storyPresenterDidFinishPresentingStory:(id)arg1;
- (void)storyPresenterWillBeginPresentingStory:(id)arg1;
- (void)storyPresenter:(id)arg1 beginDismissFriendStories:(id)arg2 previousFriendStories:(id)arg3;
- (void)storyPresenter:(id)arg1 didDismissFriendStories:(id)arg2 becameFullyViewed:(_Bool)arg3 succeededToPresent:(_Bool)arg4 viewingType:(long long)arg5;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)_cleanupIfNeeded;
- (void)_scheduleCheckForCleanup;
- (void)_releaseRenderLock;
- (void)_acquireRenderLock;
- (void)_cleanupAfterDismissal;
- (void)dismissStory;
- (void)presentPlaylist:(id)arg1 initialFriendStories:(id)arg2;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 renderLockManager:(id)arg2 navigationDelegate:(id)arg3;
@property(retain, nonatomic) SCContextSession *contextSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

