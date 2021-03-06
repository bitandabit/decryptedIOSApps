//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMiniProfileBaseViewController.h"

#import "AVCameraViewControllerDelegate-Protocol.h"
#import "SCAlertGearDelegate-Protocol.h"
#import "SCContextPresentableViewController-Protocol.h"
#import "SCMiniProfileChatOptionsSectionControllerDelegate-Protocol.h"
#import "SCMiniProfileFriendIdentitySectionControllerDelegate-Protocol.h"
#import "SCMiniProfileFriendOptionsSectionControllerDelegate-Protocol.h"
#import "SCMiniProfileMapSectionControllerDelegate-Protocol.h"
#import "SCMiniProfileRelatedSnapchattersSectionControllerDelegate-Protocol.h"
#import "SCMiniProfileStoryOptionsSectionControllerDelegate-Protocol.h"
#import "SCReplyDelegate-Protocol.h"
#import "SCReportPageViewControllerDelegate-Protocol.h"
#import "SCS2RStackDebuggable-Protocol.h"
#import "SCShareFriendViewControllerDelegate-Protocol.h"
#import "SCStoryPresenterDelegate-Protocol.h"
#import "SendSnapNavigationControllerDelegate-Protocol.h"

@class Friend, NSArray, NSString, NavigationController, SCAlertGear, SCMiniProfileChatOptionsSectionController, SCMiniProfileFriendIdentitySectionController, SCMiniProfileFriendOptionsSectionController, SCMiniProfileMapSectionController, SCStoryPresenter_DEPRECATED, SCUserSession;
@protocol SCContextPresentableViewControllerDelegate, SCMiniProfileViewControllerDelegate;

@interface SCMiniProfileViewController : SCMiniProfileBaseViewController <SCContextPresentableViewController, SCS2RStackDebuggable, SendSnapNavigationControllerDelegate, SCAlertGearDelegate, AVCameraViewControllerDelegate, SCMiniProfileFriendOptionsSectionControllerDelegate, SCMiniProfileFriendIdentitySectionControllerDelegate, SCMiniProfileMapSectionControllerDelegate, SCShareFriendViewControllerDelegate, SCReplyDelegate, SCStoryPresenterDelegate, SCMiniProfileStoryOptionsSectionControllerDelegate, SCReportPageViewControllerDelegate, SCMiniProfileChatOptionsSectionControllerDelegate, SCMiniProfileRelatedSnapchattersSectionControllerDelegate>
{
    NavigationController *_cameraNavigationController;
    SCStoryPresenter_DEPRECATED *_storyPresenter;
    _Bool _showMoreInsteadOfMiniProfileOptions;
    SCMiniProfileFriendIdentitySectionController *_identitySectionController;
    SCMiniProfileMapSectionController *_mapSectionController;
    SCMiniProfileFriendOptionsSectionController *_friendOptionsSectionController;
    SCMiniProfileChatOptionsSectionController *_chatOptionsSectionController;
    _Bool _shouldAttributeToOurStories;
    _Bool _shouldScrollAfterEdit;
    _Bool _preventRecursiveOptions;
    _Bool _hidesMapSection;
    _Bool _notificationStatusForDisplayedFriend;
    Friend *_displayedFriend;
    NSArray *_storyOptions;
    id <SCMiniProfileViewControllerDelegate> _delegate;
    long long _addSource;
    long long _pageType;
    long long _viewLocation;
    long long _friendIndex;
    SCUserSession *_userSession;
    NSArray *_contexts;
    SCAlertGear *_alertGear;
}

@property(retain, nonatomic) SCAlertGear *alertGear; // @synthesize alertGear=_alertGear;
@property(nonatomic) _Bool notificationStatusForDisplayedFriend; // @synthesize notificationStatusForDisplayedFriend=_notificationStatusForDisplayedFriend;
@property(copy, nonatomic) NSArray *contexts; // @synthesize contexts=_contexts;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) _Bool hidesMapSection; // @synthesize hidesMapSection=_hidesMapSection;
@property(nonatomic) _Bool preventRecursiveOptions; // @synthesize preventRecursiveOptions=_preventRecursiveOptions;
@property(nonatomic) _Bool shouldScrollAfterEdit; // @synthesize shouldScrollAfterEdit=_shouldScrollAfterEdit;
@property(nonatomic) _Bool shouldAttributeToOurStories; // @synthesize shouldAttributeToOurStories=_shouldAttributeToOurStories;
@property(nonatomic) long long friendIndex; // @synthesize friendIndex=_friendIndex;
@property(nonatomic) long long viewLocation; // @synthesize viewLocation=_viewLocation;
@property(nonatomic) long long pageType; // @synthesize pageType=_pageType;
@property(nonatomic) long long addSource; // @synthesize addSource=_addSource;
@property(nonatomic) __weak id <SCMiniProfileViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *storyOptions; // @synthesize storyOptions=_storyOptions;
@property(retain, nonatomic) Friend *displayedFriend; // @synthesize displayedFriend=_displayedFriend;
- (void).cxx_destruct;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
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
- (_Bool)replyingToStoryWithChat;
- (void)didFollowThrough;
- (void)replyWithParameter:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)storyOptionsSectionController:(id)arg1 didSelectOption:(long long)arg2;
- (unsigned long long)policyForNotification:(id)arg1;
- (void)mapSectionController:(id)arg1 wantsToVisitFriend:(id)arg2;
- (void)chatOptionsSectionController:(id)arg1 didSelectOption:(long long)arg2;
- (void)friendIdentitySectionControllerDidSelectMore:(id)arg1;
- (void)_playFriendStories:(id)arg1 withBaseView:(id)arg2;
- (void)friendIdentitySectionController:(id)arg1 didTapPlayFriendStories:(id)arg2 withBaseView:(id)arg3;
- (void)friendIdentitySectionController:(id)arg1 didTapAddFriend:(id)arg2;
- (void)relatedSnapchattersSectionController:(id)arg1 didLongPressOnFriend:(id)arg2;
- (void)relatedSnapchattersSectionController:(id)arg1 didTapPlayFriendStories:(id)arg2 withBaseView:(id)arg3;
- (void)relatedSnapchattersSectionController:(id)arg1 didTapAddFriend:(id)arg2;
- (void)_handleOptionSelected:(long long)arg1;
- (void)friendOptionsSectionController:(id)arg1 didSelectOption:(long long)arg2;
- (void)reportPageViewControllerDidCancelAtLevel:(unsigned long long)arg1 additionalData:(id)arg2;
- (void)reportPageViewControllerDidSubmitReport:(id)arg1 reasonId:(id)arg2 additionalData:(id)arg3;
- (void)alertGear:(id)arg1 didNotificationStatusChangeForFriend:(id)arg2;
- (_Bool)alertGear:(id)arg1 notificationStatusForFriend:(id)arg2;
- (void)didUpdateMuteState;
- (void)customOperationForReport:(id)arg1;
- (void)customOperationForUnBlock:(id)arg1;
- (void)customOperationForBlock:(id)arg1 blockReasonId:(id)arg2;
- (void)customOperationForDeleteorIgnore:(id)arg1;
- (void)alertGear:(id)arg1 didSetDisplay:(id)arg2 friend:(id)arg3 shouldScroll:(_Bool)arg4;
- (void)didPostStory;
- (void)didSendSnaps:(id)arg1;
- (void)didCancelFromPreview:(id)arg1;
- (void)rightCameraBackButtonPressed;
- (void)leftCameraBackButtonPressed;
- (void)shareFriendViewControllerDidCompleteExport:(id)arg1 activityType:(id)arg2 completed:(_Bool)arg3 activityError:(id)arg4;
- (void)shareFriendViewControllerTappedSendUsername:(id)arg1;
- (void)_updateNotificationStatusForDisplayFriend;
- (void)_navigateToChatWithDeeplinkURL:(id)arg1;
- (void)didPressSendAccountButtonForFriend:(id)arg1;
- (void)didPressIgnoreRecommendedButtonForFriend:(id)arg1;
- (void)didPressIgnoreButtonForFriend:(id)arg1;
- (void)didPressSettingsGearButtonForFriend:(id)arg1;
- (void)didPressVideoButtonForFriend:(id)arg1;
- (void)didPressCallButtonForFriend:(id)arg1;
- (void)didPressSnapButtonForFriend:(id)arg1;
- (void)didPressChatButtonForFriend:(id)arg1;
- (void)didPressAddFriendButton:(id)arg1 friend:(id)arg2 onProgress:(CDUnknownBlockType)arg3 onSuccess:(CDUnknownBlockType)arg4 onFailure:(CDUnknownBlockType)arg5;
- (void)_onBlockOrDeleteFriend:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setFriend:(id)arg1 pageType:(long long)arg2 addSource:(long long)arg3 viewLocation:(long long)arg4 overrideShowMore:(_Bool)arg5 storyOptions:(id)arg6;
- (void)addPostSubscribeFriendSuggestions:(id)arg1;
- (void)setFriend:(id)arg1 pageType:(long long)arg2 addSource:(long long)arg3 viewLocation:(long long)arg4;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 delegate:(id)arg2 contexts:(id)arg3;
- (CDUnknownBlockType)presentationCompletion;
- (_Bool)shouldAnimateWhenPresenting;
- (_Bool)shouldUseChatHeader;
@property(nonatomic) __weak id <SCContextPresentableViewControllerDelegate> presentationDelegate;
- (id)additionalS2RDebugOutput;
- (void)_logMiniProfileShareWithActivityType:(id)arg1 completed:(_Bool)arg2 error:(id)arg3;
- (void)_logMiniProfileSend;
- (void)_logMiniProfileSettings;
- (void)_logMiniProfileVideo;
- (void)_logMiniProfileCall;
- (void)_logMiniProfileSnap;
- (void)_logMiniProfileChat;
- (void)_logMiniProfileAddFriend;
- (void)_logMiniProfileExit;
- (void)_logMiniProfileView;
- (id)friendAdditionRequestContext;
- (id)getPageName;
- (id)contextString;
- (id)pageTypeString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

