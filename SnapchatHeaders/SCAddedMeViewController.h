//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLeftSwipableViewController.h"

#import "EGORefreshTableHeaderDelegate-Protocol.h"
#import "SCAlertGearDelegate-Protocol.h"
#import "SCBlockReportAlertDelegate-Protocol.h"
#import "SCFriendProfileCellViewDelegate-Protocol.h"
#import "SCHeaderDataSource-Protocol.h"
#import "SCHeaderDelegate-Protocol.h"
#import "SCMiniProfileViewControllerDelegate-Protocol.h"
#import "SCRequestPermissionPromptViewDataSource-Protocol.h"
#import "SCRequestPermissionPromptViewDelegate-Protocol.h"
#import "SWTableViewCellDelegate-Protocol.h"
#import "SendSnapNavigationControllerDelegate-Protocol.h"
#import "Subview-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDataSourcePrefetching-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AddFriendsDelegateObject, EGORefreshTableHeaderView, Friend, NSMutableArray, NSMutableSet, NSNumber, NSString, SCAlertGear, SCBlockReportAlert, SCFriendLongPressGestureRecognizer, SCHeader, SCMiniProfileViewController, SCRequestPermissionPromptView, SCUserSession, UILabel, UITableView, UITapGestureRecognizer;
@protocol SCStartChatDelegate, SendSnapNavigationControllerDelegate;

@interface SCAddedMeViewController : SCLeftSwipableViewController <UITableViewDataSourcePrefetching, SCRequestPermissionPromptViewDelegate, SCRequestPermissionPromptViewDataSource, UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate, SCHeaderDataSource, SCHeaderDelegate, SWTableViewCellDelegate, SCAlertGearDelegate, SCBlockReportAlertDelegate, SCFriendProfileCellViewDelegate, SendSnapNavigationControllerDelegate, EGORefreshTableHeaderDelegate, SCMiniProfileViewControllerDelegate, Subview>
{
    id <SendSnapNavigationControllerDelegate> _sendSnapNavigationControllerDelegate;
    id <SCStartChatDelegate> _startChatDelegate;
    SCUserSession *_userSession;
    SCMiniProfileViewController *_miniProfileViewController;
    SCFriendLongPressGestureRecognizer *_longPressGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSMutableSet *_requestsShown;
    NSMutableSet *_requestsShownWithDisplayPic;
    NSMutableSet *_requestsShownNotAddedMeBack;
    NSMutableSet *_requestsAccepted;
    NSMutableSet *_requestsAcceptedWithDisplayPic;
    NSMutableArray *_cellContexts;
    SCHeader *_header;
    UILabel *_addedMeTipView;
    EGORefreshTableHeaderView *_refreshHeaderTableView;
    SCRequestPermissionPromptView *_requestDirectUserToMyContactsPermissionPromptView;
    _Bool _reloading;
    AddFriendsDelegateObject *_addFriendsDelegate;
    NSNumber *_addedFriendsLastViewedTimestamp;
    NSMutableArray *_addedMeFriends;
    UITableView *_tableView;
    UILabel *_noFriendsView;
    SCAlertGear *_alertGear;
    SCBlockReportAlert *_blockReportAlert;
    Friend *_selectedFriendToRemove;
    NSMutableSet *_friendsTouchedAtLeastOnce;
    NSString *_blockActionMethod;
    unsigned long long _requestBlockCount;
    unsigned long long _requestIgnoreCount;
    unsigned long long _requestNameEditCount;
}

+ (id)requestsContextWithIndex:(long long)arg1;
+ (id)requestsContext;
+ (id)createSpinner;
@property(nonatomic) unsigned long long requestNameEditCount; // @synthesize requestNameEditCount=_requestNameEditCount;
@property(nonatomic) unsigned long long requestIgnoreCount; // @synthesize requestIgnoreCount=_requestIgnoreCount;
@property(nonatomic) unsigned long long requestBlockCount; // @synthesize requestBlockCount=_requestBlockCount;
@property(retain, nonatomic) NSString *blockActionMethod; // @synthesize blockActionMethod=_blockActionMethod;
@property(retain, nonatomic) NSMutableSet *friendsTouchedAtLeastOnce; // @synthesize friendsTouchedAtLeastOnce=_friendsTouchedAtLeastOnce;
@property(retain, nonatomic) Friend *selectedFriendToRemove; // @synthesize selectedFriendToRemove=_selectedFriendToRemove;
@property(retain, nonatomic) SCBlockReportAlert *blockReportAlert; // @synthesize blockReportAlert=_blockReportAlert;
@property(retain, nonatomic) SCAlertGear *alertGear; // @synthesize alertGear=_alertGear;
@property(retain, nonatomic) UILabel *noFriendsView; // @synthesize noFriendsView=_noFriendsView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *addedMeFriends; // @synthesize addedMeFriends=_addedMeFriends;
@property(retain, nonatomic) NSNumber *addedFriendsLastViewedTimestamp; // @synthesize addedFriendsLastViewedTimestamp=_addedFriendsLastViewedTimestamp;
@property(retain, nonatomic) AddFriendsDelegateObject *addFriendsDelegate; // @synthesize addFriendsDelegate=_addFriendsDelegate;
- (void).cxx_destruct;
- (id)positiveButtonStringForRequestPermissionPromptView:(id)arg1;
- (id)descriptionForRequestPermissionPromptView:(id)arg1;
- (id)titleForRequestPermissionPromptView:(id)arg1;
- (void)_logUnsampledMyContactsPromptAction:(_Bool)arg1;
- (void)requestPermissionPromptView:(id)arg1 isPermissionGranted:(_Bool)arg2;
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)pullToRefreshDidFinish;
- (long long)getAddFriendButtonV2Title:(id)arg1 friend:(id)arg2;
- (id)getAddedMeTooltip:(id)arg1;
- (_Bool)shouldShowAddedMePageTip;
- (id)getPageName;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_dismissPreviewIfPresented;
- (void)didSendSnaps:(id)arg1;
- (void)didCancelFromPreview:(id)arg1;
- (void)didDisplayProfilePictureOnCellView:(id)arg1 onThumbnail:(id)arg2 friend:(id)arg3;
- (long long)_indexOfFriend:(id)arg1;
- (void)friendProfileCellView:(id)arg1 addFriendPressed:(id)arg2 friend:(id)arg3;
- (void)miniProfileViewControllerWasDismissed:(id)arg1;
- (void)miniProfileViewControllerDidPressAddFriendButton:(id)arg1 friend:(id)arg2;
- (void)miniProfileViewControllerDidPressSettingsButton:(id)arg1;
- (void)miniProfileViewController:(id)arg1 didSendSnap:(id)arg2;
- (void)miniProfileController:(id)arg1 wantsToNavigateToChatWithDeepLinkURL:(id)arg2;
- (void)_removeDownloadContextFor:(id)arg1;
- (void)_addDownloadContextFor:(id)arg1;
- (id)_getDownloadContextFor:(id)arg1 inMiniProfile:(_Bool)arg2;
- (void)_presentChatWithFriend:(id)arg1;
- (void)_dismissMiniProfile:(id)arg1;
- (void)_dismissMiniProfileForAddedFriend:(id)arg1;
- (void)_presentMiniProfile:(id)arg1;
- (void)_tap:(id)arg1;
- (void)_longPress:(id)arg1;
- (void)_initGestures;
- (void)showDeleteFriendConfirmDialog:(id)arg1;
- (_Bool)shouldPopToRootViewControllerLater;
- (_Bool)shouldPopToRootViewController;
- (_Bool)inValidView:(id)arg1;
- (void)leftSwipeSucceed;
- (void)leftButtonPressed;
- (id)textColorForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)titleForHeader:(id)arg1;
- (void)didPressIgnoreButton:(id)arg1;
- (void)didPressBlockButton:(id)arg1;
- (void)swipeableTableViewCell:(id)arg1 didTriggerRightUtilityButtonWithIndex:(long long)arg2;
- (_Bool)alertGear:(id)arg1 notificationStatusForFriend:(id)arg2;
- (void)alertGear:(id)arg1 didNotificationStatusChangeForFriend:(id)arg2;
- (long long)getProfilePageType;
- (void)customOperationForReport:(id)arg1;
- (void)customOperationForBlock:(id)arg1 blockReasonId:(id)arg2;
- (void)customOperationForDeleteorIgnore:(id)arg1;
- (void)alertGear:(id)arg1 didSetDisplay:(id)arg2 friend:(id)arg3 shouldScroll:(_Bool)arg4;
- (id)removeOrIgnoreButtonTitle:(id)arg1;
- (id)addedFriendForIndexPath:(id)arg1;
- (void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)rightUtilityButtonsForPendingFriend:(_Bool)arg1;
- (id)_friendActionButtons:(id)arg1;
- (id)_getFriendProfileCellOnTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollToTop;
- (void)reloadFriends;
- (void)reloadTable;
- (void)reloadData;
- (void)friendsDidChange;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)logPendingFriendShown;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)_initFooterIfNecessary;
- (void)_initTableView;
- (void)_initAddedMeTipView;
- (void)_initHeader;
- (void)loadView;
- (id)getPageViewName;
- (id)initWithSendSnapNavigationControllerDelegate:(id)arg1 startChatDelegate:(id)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
