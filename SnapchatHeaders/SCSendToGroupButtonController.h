//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCAddToGroupViewControllerDelegate-Protocol.h"
#import "SCInvalidFriendAlertViewDelegate-Protocol.h"

@class NSString, SCCheetahSendToRecipientDataProvider, SCSearchContentViewControllerContext, SCSearchMultiStateView, SCSearchNavigationBarButtonItem, SCSendToSelectionStateManager, SCUserSession, UIViewController;
@protocol SCAddToGroupViewControllerProtocol, SCSendToGroupButtonControllerDelegate, SCStartChatDelegate, SendSnapNavigationControllerDelegate;

@interface SCSendToGroupButtonController : NSObject <SCInvalidFriendAlertViewDelegate, SCAddToGroupViewControllerDelegate>
{
    SCUserSession *_userSession;
    SCSearchContentViewControllerContext *_searchContentViewControllerContext;
    SCSearchMultiStateView *_rightBarGroupButtonView;
    SCSearchMultiStateView *_rightBarAddFriendButtonView;
    UIViewController<SCAddToGroupViewControllerProtocol> *_addToGroupVC;
    SCCheetahSendToRecipientDataProvider *_dataSource;
    id <SCSendToGroupButtonControllerDelegate> _groupButtonDelegate;
    SCSendToSelectionStateManager *_selectionStateManager;
    id <SendSnapNavigationControllerDelegate> _delegate;
    id <SCStartChatDelegate> _startChatDelegate;
    SCSearchNavigationBarButtonItem *_barAddFriendButtonItem;
    SCSearchNavigationBarButtonItem *_barGroupButtonItem;
}

@property(retain, nonatomic) SCSearchNavigationBarButtonItem *barGroupButtonItem; // @synthesize barGroupButtonItem=_barGroupButtonItem;
@property(retain, nonatomic) SCSearchNavigationBarButtonItem *barAddFriendButtonItem; // @synthesize barAddFriendButtonItem=_barAddFriendButtonItem;
@property(nonatomic) __weak id <SCStartChatDelegate> startChatDelegate; // @synthesize startChatDelegate=_startChatDelegate;
@property(nonatomic) __weak id <SendSnapNavigationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_showMaxBatchGroupCreationAlert;
- (void)_showMaxGroupSizeAlert;
- (_Bool)_shouldDimAlternateCreateButton;
- (void)_updateGroupButtonInSearchBar:(_Bool)arg1;
- (_Bool)_isShowingGroupButton;
- (void)_addFriendButtonPressed;
- (_Bool)_hasTooManyNewMischiefsCreated;
- (void)_showInvalidFriendAlertWithName:(id)arg1;
- (void)_addGroupButtonPressed;
- (_Bool)_shouldShowMischiefHeader;
- (_Bool)shouldShowAddFriendButton;
- (void)navigateToChatViewWithGroupId:(id)arg1;
- (void)didSendSnapInViewController:(id)arg1;
- (void)navigateToChatViewWithFriend:(id)arg1 deepLinkURL:(id)arg2 viewController:(id)arg3;
- (void)didPressMischiefConfirmationButton:(id)arg1 viewController:(id)arg2;
- (void)dismissViewControllerAnimated:(_Bool)arg1 viewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentCreateGroupView;
- (unsigned long long)titleTypeForInvalidFriendAlertView;
- (void)showKeyboardIfNecessary:(_Bool)arg1;
- (void)updateMischiefHeaderIfNeeded;
- (id)initWithUserSession:(id)arg1 groupButtonDelegate:(id)arg2 dataSource:(id)arg3 searchContentViewControllerContext:(id)arg4 selectionStateManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

