//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCMiniProfileViewControllerDelegate-Protocol.h"
#import "SCSearchActionHandling-Protocol.h"
#import "SCSearchEventAnnouncing-Protocol.h"
#import "SCSearchStoriesPresenterDelegate-Protocol.h"
#import "SendTextControllerDelegate-Protocol.h"

@class Friend, NSDictionary, NSMutableDictionary, NSString, SCSearchEventListenerAnnouncer, SCSearchSession, UIViewController;
@protocol AddFriendsDelegate, SCStartChatDelegate, SendSnapNavigationControllerDelegate;

@interface SCSearchCardsActionHandler : NSObject <SCMiniProfileViewControllerDelegate, SCSearchStoriesPresenterDelegate, SendTextControllerDelegate, SCSearchActionHandling, SCSearchEventAnnouncing>
{
    SCSearchSession *_searchSession;
    UIViewController *_presentingViewController;
    id <AddFriendsDelegate> _addFriendsDelegate;
    id <SendSnapNavigationControllerDelegate> _sendSnapNavigationControllerDelegate;
    id <SCStartChatDelegate> _startChatDelegate;
    NSDictionary *_context;
    Friend *_friendBeingInvited;
    NSMutableDictionary *_inviteCompletionsByFriendName;
    SCSearchEventListenerAnnouncer *_eventAnnouncer;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)sendTextController:(id)arg1 completedWithStatus:(int)arg2;
- (id)presentingViewControllerForSearchStoriesPresenter:(id)arg1;
- (void)miniProfileController:(id)arg1 wantsToNavigateToChatWithDeepLinkURL:(id)arg2;
- (void)_handleShowMyContactsAction:(id)arg1;
- (void)_handleShowMiniProfileAction:(id)arg1;
- (void)_postInvite:(id)arg1 status:(int)arg2;
- (void)_mutateSearchPersonCell:(id)arg1 friend:(id)arg2 mutationState:(long long)arg3;
- (void)_playStoryWithSourceView:(id)arg1 friendStories:(id)arg2;
- (void)_handlePlayFriendStoriesAction:(id)arg1 fromSourceView:(id)arg2;
- (void)_sendSuggestedFriendChangeNotification;
- (void)_handleHideSuggestedFriendAction:(id)arg1 sender:(id)arg2;
- (void)_handleInviteFriendAction:(id)arg1 sender:(id)arg2;
- (void)_handleAddFriendAction:(id)arg1 sender:(id)arg2;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithSession:(id)arg1 presentingViewController:(id)arg2 sendSnapNavigationControllerDelegate:(id)arg3 startChatDelegate:(id)arg4 context:(id)arg5;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

