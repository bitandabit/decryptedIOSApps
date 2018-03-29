//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCContextOperaViewControllerDelegate-Protocol.h"
#import "SCOperaEventListener-Protocol.h"
#import "SCStoriesOperaDataSourceDelegate-Protocol.h"
#import "SCStoriesViewingHandler-Protocol.h"
#import "SCTimeProfilable-Protocol.h"

@class FriendStories, Manager, NSDictionary, NSString, SCContextSession, SCDeepLinkURL, SCOperaConfiguration, SCOperaEventListenerAnnouncer, SCOperaPerformanceTrackingPlugin, SCOperaViewController, SCStoriesOperaDataSource, SCStoriesOperaIconProvider, SCStoriesViewingSession, SCUserSession, SCViewControllerTransitionAnimator, UIView, UIViewController;
@protocol NavigationDelegate, SCContextSessionConfigurationDelegate, SCReplyDelegate, SCStoryPresenterDelegate;

@interface SCStoryPresenter_DEPRECATED : NSObject <SCContextOperaViewControllerDelegate, SCOperaEventListener, SCTimeProfilable, SCStoriesOperaDataSourceDelegate, SCStoriesViewingHandler>
{
    UIViewController *_presentingViewController;
    id <SCReplyDelegate> _replyDelegate;
    SCUserSession *_userSession;
    Manager *_manager;
    SCOperaEventListenerAnnouncer *_eventAnnouncer;
    SCStoriesViewingSession *_storiesViewingSession;
    unsigned long long _viewLocationPosition;
    SCOperaConfiguration *_configuration;
    long long _tileSizeType;
    NSString *_collectionId;
    long long _collectionPos;
    long long _collectionType;
    _Bool _isCircleTransition;
    SCOperaViewController *_operaVC;
    SCStoriesOperaDataSource *_storiesDataSource;
    FriendStories *_friendStories;
    FriendStories *_previousFriendStories;
    unsigned long long _viewingActionContext;
    SCOperaPerformanceTrackingPlugin *_performanceTrackingPlugin;
    _Bool _unarchiveBeforePresenting;
    _Bool _fallBackOnLoadingView;
    NSString *_sharedIdToDisplay;
    SCDeepLinkURL *_deepLinkURL;
    CDUnknownBlockType _validationSuccessBlock;
    _Bool _validatingLiveStoriesToPresent;
    id <NavigationDelegate> _navigationDelegate;
    _Bool _isViewingLongform;
    SCStoriesOperaIconProvider *_viewersListIconProvider;
    _Bool _isInStoryPlaylistMode;
    _Bool _didLeaveAppFromPlayer;
    id <SCStoryPresenterDelegate> _delegate;
    SCViewControllerTransitionAnimator *_tileTransitionAnimator;
    UIView *_transitionBaseView;
    long long _playSource;
    long long _viewLocation;
    NSDictionary *_deeplinkManagerConfig;
    id <SCContextSessionConfigurationDelegate> _sessionConfigurationDelegate;
}

+ (int)context;
@property(nonatomic) __weak id <SCContextSessionConfigurationDelegate> sessionConfigurationDelegate; // @synthesize sessionConfigurationDelegate=_sessionConfigurationDelegate;
@property(retain, nonatomic) NSDictionary *deeplinkManagerConfig; // @synthesize deeplinkManagerConfig=_deeplinkManagerConfig;
@property(readonly, nonatomic) _Bool didLeaveAppFromPlayer; // @synthesize didLeaveAppFromPlayer=_didLeaveAppFromPlayer;
@property(readonly, nonatomic) long long viewLocation; // @synthesize viewLocation=_viewLocation;
@property(readonly, nonatomic) long long playSource; // @synthesize playSource=_playSource;
@property(readonly, nonatomic) _Bool isInStoryPlaylistMode; // @synthesize isInStoryPlaylistMode=_isInStoryPlaylistMode;
@property(retain, nonatomic) UIView *transitionBaseView; // @synthesize transitionBaseView=_transitionBaseView;
@property(readonly, nonatomic) SCViewControllerTransitionAnimator *tileTransitionAnimator; // @synthesize tileTransitionAnimator=_tileTransitionAnimator;
@property(nonatomic) __weak id <SCStoryPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cardWasTapped;
- (void)contextViewController:(id)arg1 isMovingFullScreenChatControls:(double)arg2;
- (void)contextViewControllerWillEnterFullScreenChat:(id)arg1;
- (void)contextViewController:(id)arg1 didUpdateVisiblePercent:(double)arg2;
- (void)contextViewControllerDidPresent:(id)arg1;
- (void)contextViewControllerWillPresent:(id)arg1;
- (void)contextViewControllerDidDismiss:(id)arg1;
- (void)contextViewControllerWillDismiss:(id)arg1;
- (void)contextViewControllerPrepareForPresentation:(id)arg1;
- (void)contextViewControllerDidPressSend:(id)arg1;
- (void)contextViewControllerFinishedMediaPresentation:(id)arg1;
- (void)contextViewControllerBeganMediaPresentation:(id)arg1;
- (void)contextViewControllerWillResignActive:(id)arg1;
- (void)contextViewControllerDidBecomeActive:(id)arg1;
- (void)contextViewController:(id)arg1 didLeaveApp:(_Bool)arg2;
- (void)contextViewControllerWillLeaveApp:(id)arg1;
- (void)didFinishPlayingFriendStories:(id)arg1 firstStoryDisplayed:(id)arg2;
- (void)didStartPlayingFirstStoryInFriendStories:(id)arg1;
- (id)currentPresentingStory;
- (id)currentFriendStories;
- (unsigned long long)totalViewedSnapsCount;
- (unsigned long long)totalViewedStoriesCount;
- (void)dismissStory;
- (_Bool)isStoryOnscreen;
- (_Bool)isPresentingStory;
- (id)extraPropertiesForStory:(id)arg1;
- (void)didFetchLiveStoryMetadataWithSuccess:(_Bool)arg1 response:(id)arg2 username:(id)arg3 successBlock:(CDUnknownBlockType)arg4;
- (void)fetchLiveStoryMetadata:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)validateLinkedLiveStoriesForDeepLinkURL:(id)arg1 baseView:(id)arg2 viewLocation:(long long)arg3 successBlock:(CDUnknownBlockType)arg4;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredEventsForOperaSession;
- (_Bool)isViewingLongform;
- (id)lastInteraction;
- (void)updatedFriendsList:(id)arg1;
- (void)updateAnimationBaseView:(id)arg1;
- (void)_bindToDummyViewModelWithFriendStory:(id)arg1;
- (void)_presentDummyLoadingOperaViewController;
- (void)_presentOperaViewController:(long long)arg1 isReplayMode:(_Bool)arg2 friendKvoNamesInRecentUpdate:(id)arg3;
- (void)_presentOperaVCAfterLoadFirstStoryMediaIfNecessary:(long long)arg1 isReplayMode:(_Bool)arg2 friendKvoNamesInRecentUpdate:(id)arg3;
- (void)addOperaEventListener:(id)arg1 events:(id)arg2;
- (void)viewWillEnterForeground:(id)arg1;
- (void)_cleanupOperaVC:(long long)arg1;
- (void)resumeStory;
- (void)pauseStory;
- (void)stopStory;
- (void)presentStory:(id)arg1 viewingActionContext:(unsigned long long)arg2 viewLocation:(long long)arg3 viewLocationPosition:(unsigned long long)arg4 isCircleTransition:(_Bool)arg5 transitionBaseView:(id)arg6 showViewersTable:(_Bool)arg7 performanceTrackingPlugin:(id)arg8;
- (void)presentInitialFriendKvoName:(id)arg1 friendKvoNameList:(id)arg2 unarchiveBeforePresenting:(_Bool)arg3 fallBackOnLoadingView:(_Bool)arg4 viewingType:(long long)arg5 viewingActionContext:(unsigned long long)arg6 viewLocation:(long long)arg7 viewLocationPosition:(unsigned long long)arg8 isCircleTransition:(_Bool)arg9 transitionBaseView:(id)arg10 isInStoryPlaylistMode:(_Bool)arg11 friendKvoNamesInRecentUpdate:(id)arg12 experimentManager:(id)arg13 performanceTrackingPlugin:(id)arg14 playSource:(long long)arg15;
- (void)presentFriendStories:(id)arg1 viewingType:(long long)arg2 firstStoryToDisplay:(id)arg3 unarchiveBeforePresenting:(_Bool)arg4 fallBackOnLoadingView:(_Bool)arg5 viewingActionContext:(unsigned long long)arg6 viewLocation:(long long)arg7 viewLocationPosition:(unsigned long long)arg8 tileSizeType:(long long)arg9 collectionId:(id)arg10 collectionPos:(long long)arg11 collectionType:(long long)arg12 isCircleTransition:(_Bool)arg13 transitionBaseView:(id)arg14 performanceTrackingPlugin:(id)arg15;
- (void)dealloc;
- (id)initWithPresentingViewController:(id)arg1 userSession:(id)arg2 replyDelegate:(id)arg3 manager:(id)arg4 navigationDelegate:(id)arg5;
- (id)initWithPresentingViewController:(id)arg1 userSession:(id)arg2 replyDelegate:(id)arg3 navigationDelegate:(id)arg4;
@property(retain, nonatomic) SCContextSession *contextSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

