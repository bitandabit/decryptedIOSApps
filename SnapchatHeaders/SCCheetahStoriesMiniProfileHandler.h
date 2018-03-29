//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCGroupMiniProfileViewControllerDelegate-Protocol.h"
#import "SCGroupStorySettingsControllerDelegate-Protocol.h"
#import "SCGroupStorySettingsViewControllerDelegate-Protocol.h"
#import "SCMiniProfileViewControllerDelegate-Protocol.h"
#import "SCOperaSubscribeActionHandler-Protocol.h"
#import "SCPublicContentMiniProfileControllerDelegate-Protocol.h"
#import "SCReportPageViewControllerDelegate-Protocol.h"
#import "SCSearchActionHandling-Protocol.h"
#import "SCSearchEventAnnouncing-Protocol.h"
#import "SCSearchEventListener-Protocol.h"
#import "SCSearchStoryShareSessionDelegate-Protocol.h"
#import "SCStoryMiniProfileViewControllerDelegate-Protocol.h"

@class NSSet, NSString, SCMiniProfileActionHandler, SCMiniProfileViewController, SCPublicContentMiniProfileController, SCSearchEventListenerAnnouncer, SCSearchStoriesEverywhereService, SCSearchStoryShareSession, SCStoryMiniProfileViewController, SCUserSession, UIImage, UIViewController;
@protocol SCCheetahStoriesMiniProfileHandlerDelegate, SCPerforming, SCReplyDelegate;

@interface SCCheetahStoriesMiniProfileHandler : NSObject <SCMiniProfileViewControllerDelegate, SCPublicContentMiniProfileControllerDelegate, SCSearchStoryShareSessionDelegate, SCStoryMiniProfileViewControllerDelegate, SCReportPageViewControllerDelegate, SCSearchEventListener, SCSearchActionHandling, SCOperaSubscribeActionHandler, SCGroupMiniProfileViewControllerDelegate, SCGroupStorySettingsViewControllerDelegate, SCGroupStorySettingsControllerDelegate, SCSearchEventAnnouncing>
{
    SCUserSession *_userSession;
    id <SCPerforming> _performer;
    NSSet *_pendingSubscribeRequestIds;
    NSSet *_pendingHideRequestIds;
    SCStoryMiniProfileViewController *_activeStoryMiniProfileController;
    SCMiniProfileViewController *_activeMiniProfileController;
    SCPublicContentMiniProfileController *_activePublicContentMiniProfileController;
    SCSearchStoryShareSession *_storyShareSession;
    SCSearchStoriesEverywhereService *_storiesEverywhereService;
    SCMiniProfileActionHandler *_miniProfileActionHandler;
    UIImage *_screenshot;
    SCSearchEventListenerAnnouncer *_searchEventAnnouncer;
    id <SCCheetahStoriesMiniProfileHandlerDelegate> _miniProfileDelegate;
    id <SCReplyDelegate> _replyDelegate;
    UIViewController *_presentingViewController;
}

+ (id)announcerIdentifier;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void).cxx_destruct;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)fillInGeofenceDetails;
- (void)didFinishUpdatingPublicationMetadata:(id)arg1;
- (void)updatePublicationForRemoval:(id)arg1 groupStories:(id)arg2;
- (void)didUpdateSettingsForPublication:(id)arg1;
- (void)groupMiniProfileController:(id)arg1 requestsAction:(long long)arg2;
- (void)groupMiniProfileController:(id)arg1 wantsToNavigateToChatForFriend:(id)arg2 deepLinkURL:(id)arg3;
- (void)groupMiniProfileControllerDidPressSnapButton:(id)arg1;
- (void)groupMiniProfileControllerDidPressChatButton:(id)arg1;
- (void)gsSettingsViewControllerDidFinishEditing:(id)arg1;
- (void)gsSettingsViewControllerDidAttemptToKeepEditing:(id)arg1;
- (void)gsSettingsViewController:(id)arg1 updateTableForPublicationRemoval:(id)arg2 groupStories:(id)arg3;
- (void)gsSettingsViewController:(id)arg1 updateTableForPublicationReaddition:(id)arg2;
- (void)gsSettingsViewController:(id)arg1 updateTableForPublicationCreation:(id)arg2;
- (void)gsSettingsViewController:(id)arg1 didUpdateSettingsForPublication:(id)arg2;
- (void)_showCameraForPublicationId:(id)arg1 cellViewPosition:(long long)arg2;
- (_Bool)_isPresentingSCMiniProfileViewControllerForPublicUserStory:(id)arg1;
- (_Bool)_isPresentingSCStoryMiniProfileViewControllerForStory:(id)arg1;
- (void)_didBlockFriend:(id)arg1;
- (unsigned long long)_subscribeStateForStory:(id)arg1;
- (void)_hideNearbyPromotedStory:(id)arg1;
- (void)_removeStoryFromDataStoreForHideAction:(id)arg1;
- (void)_logCheetahEventForActionType:(long long)arg1 story:(id)arg2;
- (void)_handleCheetahHideResponse:(id)arg1 success:(_Bool)arg2;
- (void)_didReceiveCheetahHideResponse:(id)arg1;
- (void)_didSendCheetahHideRequest:(id)arg1;
- (void)_didReceiveCheetahSubscribeResponse:(id)arg1;
- (void)_didSendCheetahSubscribeRequest:(id)arg1;
- (void)_sendCheetahHideRequest:(id)arg1;
- (void)_chatWithFriend:(id)arg1;
- (void)_handleSubscribeResponseShouldSubscribe:(_Bool)arg1 success:(_Bool)arg2 successCompletion:(CDUnknownBlockType)arg3 failureCompletion:(CDUnknownBlockType)arg4;
- (void)_sendNextSubscribeStateForStory:(id)arg1 storyMiniProfileViewController:(id)arg2 viewModel:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)_updateSubscribeStateForPublicUser:(id)arg1 shouldSubscribe:(_Bool)arg2 successCompletion:(CDUnknownBlockType)arg3 failureCompletion:(CDUnknownBlockType)arg4;
- (void)_sendCheetahSubscribeRequestForPublisher:(long long)arg1 shouldSubscribe:(_Bool)arg2 successCompletion:(CDUnknownBlockType)arg3 failureCompletion:(CDUnknownBlockType)arg4;
- (void)unsubscribeToPublicUser:(id)arg1 successCompletion:(CDUnknownBlockType)arg2 failureCompletion:(CDUnknownBlockType)arg3;
- (void)subscribeToPublicUser:(id)arg1 successCompletion:(CDUnknownBlockType)arg2 failureCompletion:(CDUnknownBlockType)arg3;
- (void)unsubscribeToPublisher:(long long)arg1 successCompletion:(CDUnknownBlockType)arg2 failureCompletion:(CDUnknownBlockType)arg3;
- (void)subscribeToPublisher:(long long)arg1 successCompletion:(CDUnknownBlockType)arg2 failureCompletion:(CDUnknownBlockType)arg3;
- (void)unsubscribeToCheetahStory:(id)arg1 successCompletion:(CDUnknownBlockType)arg2 failureCompletion:(CDUnknownBlockType)arg3;
- (void)subscribeToCheetahStory:(id)arg1 successCompletion:(CDUnknownBlockType)arg2 failureCompletion:(CDUnknownBlockType)arg3;
- (void)searchModalPresenterDismissViewController:(id)arg1 animated:(_Bool)arg2;
- (void)searchModalPresenterPresentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)didTapPublicationDetails:(id)arg1;
- (void)didTapLeavePublication:(id)arg1;
- (void)publicContentMiniProfile:(id)arg1 didTapButtonWithEntry:(id)arg2;
- (void)didDismissPublicContentMiniProfile;
- (void)reportPageViewControllerDidCancelAtLevel:(unsigned long long)arg1 additionalData:(id)arg2;
- (void)reportPageViewControllerDidSubmitReport:(id)arg1 reasonId:(id)arg2 additionalData:(id)arg3;
- (void)storyMiniProfileViewControllerDidSelectOptionInfoStory:(id)arg1;
- (void)storyMiniProfileViewControllerDidSelectOptionGetLiveUpdates:(id)arg1;
- (void)storyMiniProfileViewControllerDidSelectOptionSendStory:(id)arg1;
- (void)storyMiniProfileViewControllerDidSelectOptionShareStoryURL:(id)arg1;
- (void)storyMiniProfileViewControllerDidSelectOptionHideStory:(id)arg1;
- (void)storyMiniProfileViewControllerDidTapActionButton:(id)arg1;
- (id)storyMiniProfileViewControllerOperaDataModelToPresent:(id)arg1;
- (void)miniProfileViewControllerDidSelectFriendRelatedSnapchatter:(id)arg1 friend:(id)arg2;
- (void)miniProfileViewControllerDidSelectOptionShareStoryURL:(id)arg1;
- (void)miniProfileViewControllerDidSelectOptionHideStory:(id)arg1;
- (void)miniProfileViewControllerDidUpdateFriendStatus:(id)arg1 friend:(id)arg2;
- (void)miniProfileController:(id)arg1 wantsToNavigateToChatWithDeepLinkURL:(id)arg2;
- (id)_debuggingSectionControllersForCheetahStory:(id)arg1;
- (void)_addDebugControllersForMiniProfileBaseViewController:(id)arg1 cheetahStory:(id)arg2;
- (_Bool)_presentCheetahStoryMiniProfileForActionModel:(id)arg1;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (void)_appDidEnterBackground:(id)arg1;
- (void)_displayAlertToleaveGroupStoryForPublication:(id)arg1;
- (void)_leaveGroupStoryForPublication:(id)arg1;
- (void)_updateDiscoverFeedWithRemovalForGroupStories:(id)arg1 publicationId:(id)arg2;
- (void)_presentGroupStorySettingsForPublication:(id)arg1;
- (void)dismissAnyMiniProfile;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 miniProfileDelegate:(id)arg2 replyDelegate:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
