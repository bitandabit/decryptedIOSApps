//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GenericSettingsViewController.h"

#import "SCFriendProfileCellViewDelegate-Protocol.h"
#import "SCMiniProfileViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class AddFriendsDelegateObject, NSArray, NSDictionary, NSString, SCSearchContainerView, SCUserSession, UILongPressGestureRecognizer, UITableView;
@protocol SCReplyDelegate;

@interface SCGroupStoryMembersViewController : GenericSettingsViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, SCMiniProfileViewControllerDelegate, SCFriendProfileCellViewDelegate>
{
    UITableView *_tableView;
    SCSearchContainerView *_blurredContainerView;
    NSArray *_friends;
    NSArray *_nonFriends;
    NSDictionary *_usernameDict;
    NSDictionary *_displayNameDict;
    NSString *_title;
    AddFriendsDelegateObject *_addFriendsController;
    long long _context;
    SCUserSession *_userSession;
    NSString *_loggingId;
    _Bool _isDarkThemed;
    _Bool _hideNonFriendAdd;
    UILongPressGestureRecognizer *_longPressRecognizer;
    id <SCReplyDelegate> _replyDelegate;
}

- (void).cxx_destruct;
- (id)additionalAddFriendContextForMiniProfileViewController:(id)arg1;
- (void)miniProfileController:(id)arg1 wantsToNavigateToChatWithDeepLinkURL:(id)arg2;
- (void)_presentMiniProfile:(id)arg1;
- (void)_handleLongPress:(id)arg1;
- (void)_friendsDidChange:(id)arg1;
- (id)_addFriendsContext;
- (void)friendProfileCellView:(id)arg1 snapButtonPressed:(id)arg2 friend:(id)arg3;
- (void)friendProfileCellView:(id)arg1 chatButtonPressed:(id)arg2 friend:(id)arg3;
- (void)friendProfileCellView:(id)arg1 addFriendPressed:(id)arg2 friend:(id)arg3;
- (id)_friendAtIndexPath:(id)arg1;
- (void)_sortFriendsAndNonFriendsFromUserIds:(id)arg1;
- (long long)_buttonStateForFriend:(id)arg1 processingType:(unsigned long long)arg2;
- (id)_nonFriendCellForIndexPath:(id)arg1;
- (id)_friendCellForIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)backgroundColorForHeader;
- (id)textColorForHeader:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)getTitle;
- (id)initWithMemberNames:(id)arg1 title:(id)arg2 isDarkThemed:(_Bool)arg3 usernameDict:(id)arg4 displayNameDict:(id)arg5 replyDelegate:(id)arg6 context:(long long)arg7 userSession:(id)arg8 loggingId:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
