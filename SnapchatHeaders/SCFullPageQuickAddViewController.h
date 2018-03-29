//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLeftSwipableViewController.h"

#import "SCFriendProfileCellViewDelegate-Protocol.h"
#import "SCHeaderDataSource-Protocol.h"
#import "SCHeaderDelegate-Protocol.h"
#import "SCMiniProfileViewControllerDelegate-Protocol.h"
#import "SCQuickAddControllerDataSrouce-Protocol.h"
#import "SCQuickAddControllerDelegate-Protocol.h"
#import "SCSearchBarDelegate-Protocol.h"
#import "SendSnapNavigationControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AddFriendsDelegateObject, NSMutableArray, NSString, SCFriendFilter, SCHeader, SCQuickAddController, SCSearchBar, SCUserSession, UITableView;
@protocol SCStartChatDelegate, SendSnapNavigationControllerDelegate;

@interface SCFullPageQuickAddViewController : SCLeftSwipableViewController <SCSearchBarDelegate, UITableViewDataSource, UITableViewDelegate, SCHeaderDataSource, SCHeaderDelegate, SCFriendProfileCellViewDelegate, SendSnapNavigationControllerDelegate, SCQuickAddControllerDataSrouce, SCQuickAddControllerDelegate, SCMiniProfileViewControllerDelegate>
{
    SCHeader *_header;
    SCSearchBar *_searchBar;
    UITableView *_tableView;
    NSMutableArray *_filteredSuggestedFriends;
    SCUserSession *_userSession;
    SCFriendFilter *_friendFilter;
    AddFriendsDelegateObject *_addFriendsDelegateObject;
    SCQuickAddController *_quickAddController;
    unsigned long long _source;
    id <SCStartChatDelegate> _startChatDelegate;
    id <SendSnapNavigationControllerDelegate> _sendSnapNavigationControllerDelegate;
    _Bool _searching;
    _Bool _didLogUserFirstOptionFromQuickAction;
}

- (void).cxx_destruct;
- (id)_requestsDeleteFriendContext:(long long)arg1;
- (id)_requestsAddFriendContext:(long long)arg1;
- (long long)_getSuggestedFriendIndexPathRow:(id)arg1;
- (void)_suggestedFriendsDidChange:(id)arg1;
- (void)_presentMiniProfile:(id)arg1;
- (void)_tap:(id)arg1;
- (void)_longPress:(id)arg1;
- (void)_initGesture:(id)arg1;
- (void)_dismissPreviewIfPresented;
- (void)didSendSnaps:(id)arg1;
- (void)didCancelFromPreview:(id)arg1;
- (void)_filterSearch:(id)arg1;
- (void)_resetFriendFilter;
- (void)_filterResults:(id)arg1;
- (void)miniProfileViewController:(id)arg1 didSendSnap:(id)arg2;
- (void)miniProfileController:(id)arg1 wantsToNavigateToChatWithDeepLinkURL:(id)arg2;
- (void)didPressHideButtonForFriend:(id)arg1;
- (void)friendProfileCellView:(id)arg1 addFriendPressed:(id)arg2 friend:(id)arg3;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)textColorForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)titleForHeader:(id)arg1;
- (void)leftButtonPressed;
- (id)quickAddControllerParentViewController;
- (id)replyParametersForName:(id)arg1;
- (id)sendSnapNavigationControllerDelegateForQuickAddController;
- (id)startChatDelegate;
- (void)reloadFriends;
- (void)reloadData;
- (void)reloadTable;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 source:(unsigned long long)arg2 startChatDelegate:(id)arg3 sendSnapNavigationControllerDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

