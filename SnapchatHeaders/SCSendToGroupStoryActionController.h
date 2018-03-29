//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCGroupMiniProfileViewControllerDelegate-Protocol.h"
#import "SCGroupStorySettingsViewControllerDelegate-Protocol.h"
#import "SCPublicContentMiniProfileControllerDelegate-Protocol.h"

@class NSString, SCCheetahSendToStoryDataSource, SCGroupStorySettingsViewController, SCSearchNavigationCoordinator, SCSendToSelectionStateManager, SCUserSession;
@protocol SCSendToGroupStoryActionControllerDelegate;

@interface SCSendToGroupStoryActionController : NSObject <SCGroupStorySettingsViewControllerDelegate, SCPublicContentMiniProfileControllerDelegate, SCGroupMiniProfileViewControllerDelegate>
{
    SCUserSession *_userSession;
    SCSendToSelectionStateManager *_selectionStateManager;
    SCCheetahSendToStoryDataSource *_dataSource;
    SCGroupStorySettingsViewController *_groupStorySettingsViewController;
    id <SCSendToGroupStoryActionControllerDelegate> _delegate;
    SCSearchNavigationCoordinator *_navigationCoordinator;
}

@property(nonatomic) __weak SCSearchNavigationCoordinator *navigationCoordinator; // @synthesize navigationCoordinator=_navigationCoordinator;
- (void).cxx_destruct;
- (void)groupMiniProfileController:(id)arg1 requestsAction:(long long)arg2;
- (void)groupMiniProfileController:(id)arg1 wantsToNavigateToChatForFriend:(id)arg2 deepLinkURL:(id)arg3;
- (void)groupMiniProfileControllerDidPressSnapButton:(id)arg1;
- (void)groupMiniProfileControllerDidPressChatButton:(id)arg1;
- (void)_leaveGroupStoryForPublication:(id)arg1;
- (void)_presentController:(id)arg1;
- (void)didTapPublicationDetails:(id)arg1;
- (void)didTapLeavePublication:(id)arg1;
- (void)didDismissPublicContentMiniProfile;
- (void)publicContentMiniProfile:(id)arg1 didTapButtonWithEntry:(id)arg2;
- (void)gsSettingsViewControllerDidFinishEditing:(id)arg1;
- (void)gsSettingsViewControllerDidAttemptToKeepEditing:(id)arg1;
- (void)gsSettingsViewController:(id)arg1 updateTableForPublicationCreation:(id)arg2;
- (void)gsSettingsViewController:(id)arg1 updateTableForPublicationReaddition:(id)arg2;
- (void)gsSettingsViewController:(id)arg1 updateTableForPublicationRemoval:(id)arg2 groupStories:(id)arg3;
- (void)gsSettingsViewController:(id)arg1 didUpdateSettingsForPublication:(id)arg2;
- (void)showSettingsControllerForPublication:(id)arg1 sourceType:(long long)arg2;
- (void)showCreateGroupStoryController;
- (id)initWithUserSession:(id)arg1 selectionStateManager:(id)arg2 dataSource:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
