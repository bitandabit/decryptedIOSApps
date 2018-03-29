//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCBaseMediaOperaPresenterDelegate-Protocol.h"
#import "SCBlockedExceptionAlertControllerDelegate-Protocol.h"
#import "SCBugReportViewControllerDataSource-Protocol.h"
#import "SCCardController-Protocol.h"
#import "SCCardStyling-Protocol.h"
#import "SCCheetahStoriesAffordanceViewDataSource-Protocol.h"
#import "SCCheetahStoriesAffordanceViewDelegate-Protocol.h"
#import "SCDeepLinkMiniProfileControllerDelegate-Protocol.h"
#import "SCDeepLinkableViewSource-Protocol.h"
#import "SCFeedCellPanningStateDelegate-Protocol.h"
#import "SCFeedDataSourceDelegate-Protocol.h"
#import "SCFeedFeatureManagerDelegate-Protocol.h"
#import "SCFeedFriendsQuickAddCarouselDelegate-Protocol.h"
#import "SCFeedGestureDelegate-Protocol.h"
#import "SCFeedMuteStateProvider-Protocol.h"
#import "SCFeedPage-Protocol.h"
#import "SCFeedStoryCarouselDelegate-Protocol.h"
#import "SCFeedTableFooterViewDelegate-Protocol.h"
#import "SCFeedTableHeaderControllerDelegate-Protocol.h"
#import "SCFeedToChatTapDetectionViewDelegate-Protocol.h"
#import "SCFriendsFeedGroupsTabEmptyStateCellDelegate-Protocol.h"
#import "SCFriendsFeedRankingViewControllerFeatureSource-Protocol.h"
#import "SCFriendsFeedTabContentViewDelegate-Protocol.h"
#import "SCGroupMiniProfileViewControllerDelegate-Protocol.h"
#import "SCMiniProfileViewControllerDelegate-Protocol.h"
#import "SCOperaPresenterDelegate-Protocol.h"
#import "SCOverscrollableController-Protocol.h"
#import "SCPullToRefreshViewDelegate-Protocol.h"
#import "SCQuickAddControllerDataSrouce-Protocol.h"
#import "SCQuickAddControllerDelegate-Protocol.h"
#import "SCS2RStackDebuggable-Protocol.h"
#import "SCSearchCardContainerContentViewControlling-Protocol.h"
#import "SCSearchContentScrollViewProviding-Protocol.h"
#import "SCSearchEventListener-Protocol.h"
#import "SCShakeToReportDelegate-Protocol.h"
#import "SCSnapPlayContainer-Protocol.h"
#import "SCSnapPlayDelegate-Protocol.h"
#import "SCSnapReplayControllerV3Delegate-Protocol.h"
#import "SCTimeProfilable-Protocol.h"
#import "SKStoreProductViewControllerDelegate-Protocol.h"
#import "SendSnapNavigationControllerDelegate-Protocol.h"
#import "SwipeView-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSDictionary, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, SCAppNotification, SCBaseMediaOperaPresenter, SCBlockedExceptionAlertViewController, SCCardContainerView, SCCardGradientView, SCChatMainViewController, SCCheetahFeedFriendStoriesCarouselTableViewCell, SCCheetahFriendsFeedDebugActionHandler, SCCheetahQuickAddDataSource, SCCheetahStoriesActionHandler, SCCheetahStoriesAffordanceView, SCCheetahTooltipManagerFeed, SCContextOperaPlaylistPlugin, SCDeepLinkMiniProfileController, SCFeedCellPanningState, SCFeedFeatureManager, SCFeedTableFooterView, SCFeedTableHeaderController, SCFeedVerticalPresenter, SCFriendLongPressGestureRecognizer, SCFriendsFeedActionHandler, SCFriendsFeedChatActionHandler, SCFriendsFeedGroupsTabEmptyStateCell, SCFriendsFeedStoriesTabEmptyStateCell, SCGradientView, SCGroupMiniProfileViewController, SCGrowingButton, SCMiniProfileViewController, SCOperaPerformanceTrackingPlugin, SCOperaPlaylistCameraPlugin, SCOperaPlaylistNotificationOptInPlugin, SCOperaPlaylistStoriesPlugin, SCOperaPresenter, SCPullToRefreshBackgroundRenderView, SCPullToRefreshView, SCQueuePerformer, SCQuickAddController, SCSearchCardContainerContentViewControllerContext, SCSearchFriendProvider, SCSnapPlayController, SCSnapReplayControllerV3, SCStopwatch, SCStoriesReplayManager, SCUpgradeVersionView, SCUserSession, UICollectionView, UIImageView, UILabel, UIScrollView, UITableView, UITapGestureRecognizer, UIView;
@protocol NavigationDelegate, SCFeedDataSource, SCHovaOverscrollDelegate, SCReplyDelegate, SCStartChatDelegate, SCSwipeViewParentDelegate, SCViewingMediaDelegate, SendSnapNavigationControllerDelegate, UIScrollViewDelegate;

@interface SCCheetahFeedViewController : UIViewController <SCTimeProfilable, UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, SCFeedDataSourceDelegate, SCFeedTableHeaderControllerDelegate, SCFeedGestureDelegate, SCFeedMuteStateProvider, SKStoreProductViewControllerDelegate, SCSnapPlayDelegate, SCBlockedExceptionAlertControllerDelegate, SCSnapPlayContainer, SCFeedToChatTapDetectionViewDelegate, SCPullToRefreshViewDelegate, SCCardController, SCFeedTableFooterViewDelegate, SCQuickAddControllerDelegate, UINavigationControllerDelegate, SCBaseMediaOperaPresenterDelegate, SCFeedCellPanningStateDelegate, SCQuickAddControllerDataSrouce, SCDeepLinkMiniProfileControllerDelegate, SCOperaPresenterDelegate, SCMiniProfileViewControllerDelegate, SCGroupMiniProfileViewControllerDelegate, SCShakeToReportDelegate, SCBugReportViewControllerDataSource, SCFriendsFeedTabContentViewDelegate, SCFriendsFeedGroupsTabEmptyStateCellDelegate, SCSearchEventListener, SCSnapReplayControllerV3Delegate, SwipeView, SCCardStyling, SCOverscrollableController, SendSnapNavigationControllerDelegate, SCDeepLinkableViewSource, SCFeedPage, SCCheetahStoriesAffordanceViewDelegate, SCCheetahStoriesAffordanceViewDataSource, SCFeedStoryCarouselDelegate, SCFeedFeatureManagerDelegate, SCSearchCardContainerContentViewControlling, SCSearchContentScrollViewProviding, SCFeedFriendsQuickAddCarouselDelegate, SCS2RStackDebuggable, SCFriendsFeedRankingViewControllerFeatureSource>
{
    SCQueuePerformer *_performer;
    SCMiniProfileViewController *_miniProfileViewController;
    SCGroupMiniProfileViewController *_groupMiniProfileViewController;
    SCUserSession *_userSession;
    NSString *_tapToChatRecipient;
    _Bool _isTapToChatReplyFromMischief;
    long long _tapToChatCellViewPosition;
    SCFeedTableFooterView *_tableFooterView;
    SCFeedTableHeaderController *_tableHeaderController;
    SCCheetahFeedFriendStoriesCarouselTableViewCell *_friendsCarouselCell;
    SCQuickAddController *_quickAddController;
    _Bool _isQuickAddVisible;
    SCFeedVerticalPresenter *_verticalPresenter;
    SCBaseMediaOperaPresenter *_operaPresenter;
    NSString *_lastPlayedSnapIdentifier;
    SCCheetahStoriesAffordanceView *_storiesAffordance;
    _Bool _hasShownStoriesAffordanceAlready;
    _Bool _hasShownMoreNewStoriesAffordanceAlready;
    SCFeedCellPanningState *_panningState;
    SCBlockedExceptionAlertViewController *_blockedExceptionAlertVC;
    SCDeepLinkMiniProfileController *_deepLinkMiniProfileController;
    SCStopwatch *_feedLoadingViewTimer;
    SCOperaPresenter *_storiesOperaPresenter;
    SCOperaPlaylistStoriesPlugin *_storiesPlugin;
    SCOperaPlaylistNotificationOptInPlugin *_optInPlugin;
    SCOperaPerformanceTrackingPlugin *_performanceTrackingPlugin;
    SCContextOperaPlaylistPlugin *_contextPlugin;
    SCOperaPlaylistCameraPlugin *_cameraPlugin;
    SCStoriesReplayManager *_storiesReplayManager;
    NSMutableSet *_playedStoryIdentifiers;
    NSMutableSet *_readStoryIdentifiers;
    NSMutableSet *_storiesNeedToPlay;
    NSMutableArray *_storyUsernamesToPlayOnFeed;
    unsigned long long _indexOfRightMostStoryViewedOnFeed;
    unsigned long long _storiesSourceSection;
    _Bool _deferAllSystemEdgeGestures;
    _Bool _shouldDisableScrollToTop;
    UIView *_blueOverlay;
    NSMutableSet *_displayedItems;
    NSArray *_orderedSections;
    SCSearchFriendProvider *_friendProvider;
    NSArray *_carouselViewModels;
    SCCheetahStoriesActionHandler *_storiesActionHandler;
    NSDictionary *_friendsUsernameToCarouselIndex;
    _Bool _dismissedWithinVisible;
    NSIndexPath *_dismissIndex;
    SCCheetahFriendsFeedDebugActionHandler *_debugActionHandler;
    SCCheetahTooltipManagerFeed *_tooltipManager;
    NSString *_lastLoggedSnapId;
    NSMutableDictionary *_displayedCarouselFriendStoriesFeatures;
    _Bool _isAnimatingForFeedColdStart;
    _Bool _isSyncedOnceFromColdStart;
    unsigned long long _numOfStoriesLeftToAutoLoadInCarousel;
    unsigned long long _numOfStoriesLeftToAutoLoadInFeed;
    SCFeedFeatureManager *_featureManager;
    SCCheetahQuickAddDataSource *_quickAddDataSource;
    SCFriendsFeedGroupsTabEmptyStateCell *_groupsTabEmptyStateCell;
    SCFriendsFeedStoriesTabEmptyStateCell *_storiesTabEmptyStateCell;
    id <NavigationDelegate> _navigationDelegate;
    _Bool _isUpdatingLayout;
    _Bool _isInitialApperance;
    SCFriendsFeedChatActionHandler *_friendsFeedChatActionHandler;
    SCFriendsFeedActionHandler *_friendsFeedActionHandler;
    _Bool _friendsFeedPageIsViewportAtTop;
    double _timeUserEnteredFeed;
    SCSnapReplayControllerV3 *_replayController;
    UICollectionView *_addFriendsCollectionView;
    long long _preSelectedFeedTabType;
    _Bool _didEnterThroughHova;
    _Bool _viewHasFullyAppearedAtLeastOnce;
    _Bool _phoneVerificationHeaderPromptExists;
    _Bool _isTabDesign;
    _Bool _firstFetchUpdatesRequest;
    _Bool _didLogFirstChatReadyToView;
    _Bool _cellSwiping;
    _Bool _viewHasAppeared;
    SCChatMainViewController *_chatVC;
    id <SCHovaOverscrollDelegate> _hovaOverscrollDelegate;
    SCAppNotification *_sourceNotification;
    SCSearchCardContainerContentViewControllerContext *_cardContainerContext;
    id <UIScrollViewDelegate> _scrollingDelegate;
    id <SCViewingMediaDelegate> _delegate;
    id <SCSwipeViewParentDelegate> _parentDelegate;
    id <SCReplyDelegate> _replyDelegate;
    id <SCStartChatDelegate> _startChatDelegate;
    id <SendSnapNavigationControllerDelegate> _sendSnapNavigationControllerDelegate;
    UITableView *_tableView;
    UILabel *_emptyFeedListPlaceholder;
    id <SCFeedDataSource> _dataSource;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UITapGestureRecognizer *_delayedTapGestureRecognizer;
    SCFriendLongPressGestureRecognizer *_longPressGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    SCSnapPlayController *_snapPlayController;
    SCPullToRefreshBackgroundRenderView *_refreshBackgroundRenderView;
    SCPullToRefreshView *_cardRefreshHeaderView;
    SCUpgradeVersionView *_upgradeHeader;
    UIImageView *_topGradientView;
    SCGradientView *_bottomGradientView;
    double _lastScrolledYOffset;
    double _lastYOffsetBeforeScrolling;
    NSString *_viewingSnapCellIdentifier;
    NSString *_selectedUsername;
    SCCardContainerView *_cardContainerView;
    SCGrowingButton *_scrollToTopButton;
}

+ (int)context;
+ (id)pageViewName;
@property(retain, nonatomic) SCGrowingButton *scrollToTopButton; // @synthesize scrollToTopButton=_scrollToTopButton;
@property(retain, nonatomic) SCCardContainerView *cardContainerView; // @synthesize cardContainerView=_cardContainerView;
@property(copy, nonatomic) NSString *selectedUsername; // @synthesize selectedUsername=_selectedUsername;
@property(copy, nonatomic) NSString *viewingSnapCellIdentifier; // @synthesize viewingSnapCellIdentifier=_viewingSnapCellIdentifier;
@property(nonatomic) _Bool viewHasAppeared; // @synthesize viewHasAppeared=_viewHasAppeared;
@property(nonatomic) _Bool cellSwiping; // @synthesize cellSwiping=_cellSwiping;
@property(nonatomic) double lastYOffsetBeforeScrolling; // @synthesize lastYOffsetBeforeScrolling=_lastYOffsetBeforeScrolling;
@property(nonatomic) double lastScrolledYOffset; // @synthesize lastScrolledYOffset=_lastScrolledYOffset;
@property(retain, nonatomic) SCGradientView *bottomGradientView; // @synthesize bottomGradientView=_bottomGradientView;
@property(retain, nonatomic) UIImageView *topGradientView; // @synthesize topGradientView=_topGradientView;
@property(nonatomic) _Bool didLogFirstChatReadyToView; // @synthesize didLogFirstChatReadyToView=_didLogFirstChatReadyToView;
@property(nonatomic) _Bool firstFetchUpdatesRequest; // @synthesize firstFetchUpdatesRequest=_firstFetchUpdatesRequest;
@property(retain, nonatomic) SCUpgradeVersionView *upgradeHeader; // @synthesize upgradeHeader=_upgradeHeader;
@property(retain, nonatomic) SCPullToRefreshView *cardRefreshHeaderView; // @synthesize cardRefreshHeaderView=_cardRefreshHeaderView;
@property(retain, nonatomic) SCPullToRefreshBackgroundRenderView *refreshBackgroundRenderView; // @synthesize refreshBackgroundRenderView=_refreshBackgroundRenderView;
@property(retain, nonatomic) SCSnapPlayController *snapPlayController; // @synthesize snapPlayController=_snapPlayController;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // @synthesize doubleTapGestureRecognizer=_doubleTapGestureRecognizer;
@property(retain, nonatomic) SCFriendLongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *delayedTapGestureRecognizer; // @synthesize delayedTapGestureRecognizer=_delayedTapGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) id <SCFeedDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UILabel *emptyFeedListPlaceholder; // @synthesize emptyFeedListPlaceholder=_emptyFeedListPlaceholder;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isTabDesign; // @synthesize isTabDesign=_isTabDesign;
@property(readonly, nonatomic) _Bool phoneVerificationHeaderPromptExists; // @synthesize phoneVerificationHeaderPromptExists=_phoneVerificationHeaderPromptExists;
@property(readonly, nonatomic) _Bool viewHasFullyAppearedAtLeastOnce; // @synthesize viewHasFullyAppearedAtLeastOnce=_viewHasFullyAppearedAtLeastOnce;
@property(nonatomic) __weak id <SendSnapNavigationControllerDelegate> sendSnapNavigationControllerDelegate; // @synthesize sendSnapNavigationControllerDelegate=_sendSnapNavigationControllerDelegate;
@property(nonatomic) __weak id <SCStartChatDelegate> startChatDelegate; // @synthesize startChatDelegate=_startChatDelegate;
@property(nonatomic) __weak id <SCReplyDelegate> replyDelegate; // @synthesize replyDelegate=_replyDelegate;
@property(nonatomic) __weak id <SCSwipeViewParentDelegate> parentDelegate; // @synthesize parentDelegate=_parentDelegate;
@property(nonatomic) __weak id <SCViewingMediaDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollingDelegate; // @synthesize scrollingDelegate=_scrollingDelegate;
@property(retain, nonatomic) SCSearchCardContainerContentViewControllerContext *cardContainerContext; // @synthesize cardContainerContext=_cardContainerContext;
@property(nonatomic) _Bool didEnterThroughHova; // @synthesize didEnterThroughHova=_didEnterThroughHova;
@property(retain, nonatomic) SCAppNotification *sourceNotification; // @synthesize sourceNotification=_sourceNotification;
@property(nonatomic) __weak id <SCHovaOverscrollDelegate> hovaOverscrollDelegate; // @synthesize hovaOverscrollDelegate=_hovaOverscrollDelegate;
@property(nonatomic) __weak SCChatMainViewController *chatVC; // @synthesize chatVC=_chatVC;
- (void).cxx_destruct;
- (_Bool)_shouldPrefetchWelcomeMediaFromTeamSnapchat:(id)arg1;
- (void)replayControllerWillDisplayAlertView:(id)arg1;
- (void)replayControllerDidDismissAlertView:(id)arg1;
- (void)replayControllerConsumedRemainingCredits:(id)arg1 onSnap:(id)arg2 inConversation:(id)arg3;
- (_Bool)friendsFeedPageIsViewportAtTopForFeatureExtractor:(id)arg1;
- (_Bool)_shouldForcePresentingStory;
- (id)_tabViewModelForIndex:(unsigned long long)arg1;
- (void)_addStoryNeedToPlayWithIdentifier:(id)arg1 fromFunction:(id)arg2;
- (void)_clearStoriesNeedToPlayFromFunction:(id)arg1;
- (_Bool)_profileIsBeingPresented;
- (long long)_viewingTypeForFriendStories:(id)arg1;
- (void)friendsFeedGroupsTabEmptyStateCellDidTapCreateGroupButton:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)_reloadEmptyStateSection;
- (_Bool)_shouldShowEmptyState;
- (void)_setStoriesTabAffordance:(id)arg1;
- (void)didReceiveUnviewedStoriesCount:(id)arg1;
- (_Bool)shouldDisableTopGradientViewAlpha;
- (_Bool)shouldEnableTabSwitchGesture;
- (void)_cardContainerTabDidSwitchToNonAddFriendsIndex:(unsigned long long)arg1 dataSourceType:(long long)arg2 gesture:(long long)arg3;
- (void)cardContainerTabDidSwitchFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 gesture:(long long)arg3;
@property(readonly, nonatomic) UIScrollView *contentScrollView;
- (_Bool)feedItemIsMutedWithFeedId:(id)arg1;
- (void)didLongPressOnQuickAddFriend:(id)arg1;
- (id)_carouselStoriesKvoNameListStartingAtStory:(id)arg1;
- (void)carouselCollectionViewCellScrollViewDidScroll;
- (void)willDisplayCarouselCellAtIndexPath:(id)arg1;
- (void)didTapCarouselCell:(id)arg1 atIndexPath:(id)arg2;
- (id)viewControllerToQueryForPolicy;
- (id)additionalS2RDebugOutput;
- (void)didDismissMiniProfile:(id)arg1;
- (id)deepLinkableViewController:(id)arg1 additionalInfo:(id)arg2;
- (_Bool)shouldPopToRootViewController;
- (unsigned long long)sc_tabBarItemPosition;
- (id)sc_swipeTransitionBlurEffect;
- (id)sc_swipeTransitionGradientColors;
- (void)didSelectProfileButton:(id)arg1;
- (id)sc_tabBarItem;
- (id)sc_navigationItem;
- (void)preparePanningStateWithIdentifier:(id)arg1;
- (void)didGrantBlockExceptionForGroup:(id)arg1;
- (void)overscrollWithContentOffset:(double)arg1 overscrollPercent:(double)arg2;
- (void)pannableCellViewVisiblityDidChange:(double)arg1 tracking:(_Bool)arg2;
- (_Bool)attemptToScrollToPannableCellAtLocation:(struct CGPoint)arg1 withVelocity:(struct CGPoint)arg2;
- (void)feedCellPanningState:(id)arg1 didEndPanningWithIdentifier:(id)arg2;
- (void)loadMoreConversationsIfPossibleForceOnFailed:(_Bool)arg1;
- (void)tableFooterDidChange;
- (void)showMyContactsVC:(_Bool)arg1 skipPhoneVerification:(_Bool)arg2 fromPXPrompt:(_Bool)arg3;
- (void)showMyContactsVC:(_Bool)arg1 skipPhoneVerification:(_Bool)arg2;
- (void)tableHeaderDidChange;
- (void)didShowPhoneVerificationView;
- (void)didTapOnFeedToChatTapDetectionView;
- (void)updateEmptyFeedPlaceHolderWithSearchStatus:(_Bool)arg1;
- (long long)_getAddSourceTypeForFriend:(id)arg1;
- (void)_updateFeedAfterWatchingAvailableStories:(id)arg1 viewingType:(long long)arg2;
- (void)miniProfileViewController:(id)arg1 didFinishWatchingAvailableStories:(id)arg2 viewingType:(long long)arg3;
- (void)miniProfileViewControllerWasDismissed:(id)arg1;
- (void)miniProfileViewControllerDidPressSnapButton:(id)arg1;
- (void)miniProfileController:(id)arg1 wantsToNavigateToChatWithDeepLinkURL:(id)arg2;
- (id)_visibleViewController;
- (id)_parentViewController;
- (id)_operaPresentingViewController;
- (id)presentingVC;
- (void)updateLastPlayedSnapIdentifierWithViewModel:(id)arg1;
- (void)resetViewingCellAnimated:(_Bool)arg1;
- (id)viewingSnapCell;
- (_Bool)shouldShowNotificationInCurrentMediaState;
- (long long)sourceViewType;
- (void)setVisibleCellsUserInteractionEnabled:(_Bool)arg1 excludedCell:(id)arg2;
- (void)_loadMoreConversationsBasedOnIndexOfFriendStoriesOnFeed:(id)arg1;
- (id)_storiesKvoNameListOrderedByStoryScoreWithEligibleUsernames:(id)arg1 initialFriendStoriesKvoUsername:(id)arg2;
- (id)_storiesKvoNameListWithPlayedStories:(_Bool)arg1 initialFriendStories:(id)arg2;
- (id)_firstFriendStoriesDisplaying;
- (id)_currentFriendStoriesDisplaying;
- (void)operaPresenter:(id)arg1 didFinishViewingPlaylistGroupDataModel:(id)arg2 nextGroupDataModel:(id)arg3;
- (void)operaPresenter:(id)arg1 didBeginPlayingPlaylistGroupDataModel:(id)arg2;
- (void)operaPresenterDidTearDown:(id)arg1;
- (void)operaPresenterDidFinishDismissing:(id)arg1;
- (void)operaPresenterDidFailToPresent:(id)arg1;
- (void)operaPresenterWillBeginAnimatingToDismiss:(id)arg1;
- (void)operaPresenterDidCancelDismissing:(id)arg1;
- (void)operaPresenterWillBeginDismissing:(id)arg1 transitionAnimator:(id)arg2;
- (void)_addToPlayedStoryIdentifiers:(id)arg1;
- (void)_resizeFriendsCarouselWithPreviousViewModelCount:(long long)arg1;
- (void)_updateCarouselViewModels;
- (void)_dismissCarouselStories;
- (void)_initFriendsCarouselIndexes;
- (id)_friendStoriesCarousel;
- (void)operaPresenterDidFinishPresenting:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterWillBeginPresenting:(id)arg1 transitionAnimator:(id)arg2;
- (id)storiesReplayManager;
- (void)_presentFriendStories:(id)arg1 fromBaseView:(id)arg2 viewingType:(long long)arg3 storiesKvoNameList:(id)arg4 viewLocationPosition:(unsigned long long)arg5 sourceSection:(unsigned long long)arg6;
- (void)_presentFriendStoriesForCell:(id)arg1 friendStories:(id)arg2 viewingType:(long long)arg3 sourceSection:(unsigned long long)arg4;
- (void)_tapToLoadFriendStories:(id)arg1 viewingType:(long long)arg2 viewLocation:(long long)arg3;
- (void)_handleFullPageDebugActionWithDebugInfos:(id)arg1;
- (void)_debugButtonDidTap;
- (void)_handleFeedItemDebugActionWithDebugInfos:(id)arg1 sourceView:(id)arg2;
- (void)searchPersonViewModelPresentMiniProfile:(id)arg1;
- (void)cellHandleDebugButtonPressed:(id)arg1 withFeedItem:(id)arg2;
- (void)cellHandleStoryIconPressed:(id)arg1;
- (void)_moveToCameraFromFeedCell:(id)arg1;
- (void)cellHandleSnapButtonPressed:(id)arg1;
- (void)cellHandleReplyButtonPressed:(id)arg1;
- (void)_cellHandleTapToViewChatCards:(id)arg1;
- (void)handleTimerExiprationOnSnap:(id)arg1 cell:(id)arg2;
- (void)handleTimerExpirationOnGroupSnap:(id)arg1;
- (void)_cellHandleTapOnUnopenedReceivedGroupSnap:(id)arg1;
- (void)_prepareMediaForMessageCompletionHelperWithCell:(id)arg1 messageId:(id)arg2 conversationId:(id)arg3 isMessageReadyToDisplay:(_Bool)arg4 isSnapEvent:(_Bool)arg5;
- (void)cellHandleTapOnUnopenedReceivedMedia:(id)arg1;
- (void)handleTapOnSnap:(id)arg1 cell:(id)arg2;
- (void)cell:(id)arg1 didLongPressOnSnap:(id)arg2 inConversation:(id)arg3;
- (void)handleLongPressOnSnap:(id)arg1 cell:(id)arg2;
- (void)cellPresentMiniProfile:(id)arg1 identifier:(id)arg2;
- (void)_cellPresentMischiefMiniProfile:(id)arg1 identifier:(id)arg2;
- (void)cellPresentUnifiedMiniProfile:(id)arg1 identifier:(id)arg2;
- (void)cell:(id)arg1 attachFeedToChatTapDetectionViewWithLocationInCell:(struct CGPoint)arg2;
- (void)cellHandleDoubleTapOnChat:(id)arg1;
- (_Bool)presentAlertViewIfAppropriateForViewModel:(id)arg1;
- (void)prepareNextVCWithViewModel:(id)arg1 atRow:(unsigned long long)arg2 shouldDisplayChatCards:(_Bool)arg3 navigationAction:(long long)arg4;
- (void)cellHandleTapOnChat:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)cancelTapGestureRecognizers;
- (id)cellAtPoint:(struct CGPoint)arg1;
- (void)_presentMiniProfileForFriend:(id)arg1 addSource:(long long)arg2 cellViewPosition:(long long)arg3;
- (void)_showProfileViewOnQuickAddCellOnLongPress:(id)arg1 gestureRecognizer:(id)arg2;
- (void)_showProfileViewOnQuickAddCellOnTap:(id)arg1 gestureRecognizer:(id)arg2;
- (void)handleLongPress:(id)arg1;
- (void)handleDelayedTap:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)updateUpgradeHeaderIfNecessary;
- (void)pullToRefreshDidFinish:(id)arg1;
- (void)didFinishFetchUpdates:(id)arg1;
- (void)featureManagerDidUpdateRankingFeatures:(id)arg1;
- (void)pullToRefresh:(id)arg1 percentPulledDidChange:(double)arg2;
- (void)pullToRefresh:(id)arg1 refreshStateDidChange:(long long)arg2;
- (_Bool)pullToRefreshIsDataSourceLoading:(id)arg1;
- (_Bool)pullToRefreshShouldRefresh:(id)arg1;
- (void)refreshByPullToRefresh;
- (void)didPullToRefresh;
- (void)didSendSnaps:(id)arg1;
- (void)didCancelFromPreview:(id)arg1;
- (void)quickAddController:(id)arg1 didDisplayProfilePictureOnCellView:(id)arg2 onThumbnail:(id)arg3 friend:(id)arg4;
- (void)quickAddController:(id)arg1 didFinishFriendAction:(id)arg2;
- (id)quickAddControllerParentViewController;
- (id)sendSnapNavigationControllerDelegateForQuickAddController;
- (id)replyParametersForName:(id)arg1;
- (long long)sectionIndexOfQuickAdd;
- (void)loadMoreFeedItemsIfCloseToLoadingView;
- (void)didFetchConversations;
- (_Bool)_shouldShowStoriesAffordance:(_Bool)arg1;
- (void)_initializeStoriesAffordance;
- (void)_setCarouselViewModels:(id)arg1;
- (void)_partitionReadUnreadCarouselViewModels;
- (long long)indexForFeedIdentifier:(id)arg1;
- (id)allViewModels;
- (id)visibleIndexPaths;
- (void)scrollToRowAtIndexPath:(id)arg1;
- (long long)_sectionIdForEmptyState;
- (long long)_sectionIdForQuickAddCarousel;
- (long long)_sectionIdForCarousel;
- (long long)_sectionIdForFeedItems;
- (void)_updateTableFooterView;
- (id)_feedCellForConversationId:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (unsigned long long)rowForCell:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)showBottomBorderForIndexPath:(id)arg1;
- (void)_updateReplyButtonForOldLastPlayedSnapIdentifier:(id)arg1 newLastPlayedSnapIdentifier:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadQuickAddIfNeeded;
- (_Bool)shouldReloadQuickAdd;
- (_Bool)shouldShowQuickAdd;
- (void)showCameraForUsername:(id)arg1 pageSource:(long long)arg2 context:(id)arg3 replyType:(long long)arg4 isMischief:(_Bool)arg5 cellViewPosition:(long long)arg6;
- (void)showCameraFromDoubleTapToReplyWithRecipient:(id)arg1 replyType:(long long)arg2 isMischief:(_Bool)arg3 cellViewPosition:(long long)arg4;
- (struct CGRect)iconViewRectAtCell:(id)arg1;
- (struct CGRect)iconViewRectForUsername:(id)arg1;
- (id)feedCellForIdentifier:(id)arg1;
- (void)groupMiniProfileControllerWasDismissed:(id)arg1;
- (void)groupMiniProfileController:(id)arg1 didFinishWatchingAvailableStories:(id)arg2 viewingType:(long long)arg3;
- (void)groupMiniProfileController:(id)arg1 wantsToNavigateToChatForFriend:(id)arg2 deepLinkURL:(id)arg3;
- (void)groupMiniProfileControllerDidPressSnapButton:(id)arg1;
- (void)groupMiniProfileControllerDidPressChatButton:(id)arg1;
- (void)groupMiniProfileControllerDidUpdateGroup:(id)arg1;
- (void)_logSnapLoaded:(id)arg1;
- (void)navigateToChatViewWithFriend:(id)arg1 deepLinkURL:(id)arg2 viewController:(id)arg3;
- (void)prepareToReloadTableViewWithLogPrefix:(id)arg1;
- (void)_showSubstituteLabelsForVisibleCellsIfNecessary;
- (_Bool)shouldStopViewModelUpdates;
- (void)resumeViewModelUpdates;
- (void)reloadAllItems;
- (void)resumeTableViewUpdates;
- (void)reloadTableView;
- (void)layoutTableViewAfterUpdateWithOffset:(struct CGPoint)arg1 indexOffset:(long long)arg2;
- (void)_finishTableViewUpdateWithWithOffset:(struct CGPoint)arg1 indexOffset:(long long)arg2;
- (void)_updateTableViewForBatchUpdatesResult:(id)arg1;
- (id)_updateVisibleTableViewCellsAndReturnBatchUpdatesResult:(id)arg1 viewModels:(id)arg2;
- (void)didCompleteSyncWithServer;
- (void)_stopColdStartPTRAnimationAndLogGhostToFeedReadyEnded;
- (void)_stopColdStartPTRAnimationIfNecessary;
- (_Bool)_loadedWithNoConversations;
- (void)_setIsUpdatingLayout:(_Bool)arg1;
- (void)_reloadItemsForResult:(id)arg1 viewModels:(id)arg2;
- (void)reloadItemsForResult:(id)arg1 viewModels:(id)arg2;
- (unsigned long long)sectionForFeedItems;
- (_Bool)isFirstFeedCellVisible;
- (void)_reloadTableViewCellAtIndexPaths:(id)arg1;
- (void)reloadTableViewCellAtRow:(long long)arg1;
- (id)_quickAddCarouselCellWithTableView:(id)arg1 viewModel:(id)arg2;
- (void)_loadFriendStoriesIfNecessary:(id)arg1 viewLocation:(long long)arg2;
- (void)updateAndReloadFeedCarousel;
- (void)_reloadFeedCarouselCellWithIdentifier:(id)arg1 atIndexPath:(id)arg2;
- (void)reloadFeedCarouselCellWithIdentifier:(id)arg1;
- (void)reloadFeedCellForFriendStoriesUpdateAtRow:(long long)arg1;
- (void)reloadTableViewForFriendStories:(id)arg1;
- (void)didReceiveNewUnreadContent;
- (void)didFetchViewModels:(id)arg1;
- (void)_setPreferredScreenEdgesDeferringSystemGesturesToAll:(_Bool)arg1;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (long long)preferredStatusBarStyle;
- (void)handleViewHasAppearedIfNecessary;
- (void)tabBarTriggeredWithAction:(long long)arg1;
- (void)_scrollToFirstConsumableContentCell;
- (void)_updateDisplayedCarouselFriendStoriesFeatures;
- (void)_logSCAFriendFeedCellViewForCarousel;
- (void)_logSCAFriendFeedItem:(id)arg1 rowForCell:(unsigned long long)arg2 timestamp:(double)arg3;
- (void)_updateFeedItemImpression;
- (void)_updateDisplayedItemsAndLogWithFeedItem:(id)arg1 rowForCell:(unsigned long long)arg2 timestamp:(double)arg3;
- (void)_updateDisplayedItems;
- (void)viewDidFullyDisappear;
- (void)viewDidPartiallyDisappear;
- (void)viewDidFullyAppear;
- (void)viewDidPartiallyAppear;
- (void)viewCanAppear;
- (void)viewDidSwipeOut;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (unsigned long long)_feedTabIndexForType:(long long)arg1;
- (void)selectFriendsFeedTabIfPossible:(long long)arg1;
- (void)didBecomeActive;
- (void)deallocGestureRecognizers;
- (void)dealloc;
- (void)viewDidLoad;
- (void)updateEmptyFeedListPlaceHolderLabelVisibility;
- (void)updateEmptyFeedListPlaceHolderLabelFrame;
- (double)_emptyFeedListPlaceHolderVerticalOffset;
- (void)updateFooterLoadingViewVisibility;
- (void)updateFooterAddContactsVisibility;
- (void)statusBarTapped;
- (void)scrollToTop:(_Bool)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)baseMediaOperaPresenter:(id)arg1 resumedTimerForMessage:(id)arg2;
- (void)baseMediaOperaPresenter:(id)arg1 pausedTimerForMessage:(id)arg2;
- (void)baseMediaOperaPresenter:(id)arg1 didTapReportForMessage:(id)arg2 shareableMediaComponents:(id)arg3;
- (void)baseMediaOperaPresenter:(id)arg1 didTapSendForMessage:(id)arg2;
- (void)operaPresenterDidDisappear;
- (void)operaPresenterWillAppear;
- (void)baseMediaOperaPresenter:(id)arg1 didTapFooterBarForMedia:(id)arg2;
- (id)baseMediaOperaPresenter:(id)arg1 thumbnailViewForMedia:(id)arg2 conversationId:(id)arg3;
- (id)customHitTestViewForTabContentView:(id)arg1 originalHitTestView:(id)arg2 withPoint:(struct CGPoint)arg3 withEvent:(id)arg4;
- (void)_updateFriendsFeedPageIsViewportAtTop;
- (void)lazyLoadIfViewDidFullyAppearForTheFirstTime;
- (void)pushStartChatView;
- (id)operaPresenter;
- (id)replayController;
- (void)setUpSnapPlayController;
- (void)dismissFullScreenMedia;
- (_Bool)isPlayingSnapOrStory;
- (_Bool)isPlayingStory;
- (_Bool)isPlayingSnap;
- (id)quickAddController;
- (void)initOrderedSections;
- (void)initGestureRecognizers;
- (void)initTableFooterView;
- (void)initTableHeaderView;
- (void)initBlueOverlay;
- (void)initGradientView;
- (void)initAddFriendsCollectionView;
- (void)initTableView;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2 replyDelegate:(id)arg3;
- (id)getPageName;
- (id)getPageViewName;
- (void)scrollToTop;
- (void)fadeOutScrollToTopButton;
- (void)fadeInScrollToTopButton;
- (double)frameHeight;
- (void)_initScrollToTopButton;

// Remaining properties
@property(retain, nonatomic) SCCardGradientView *cardGradientView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

