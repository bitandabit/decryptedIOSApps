//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SelectFriendsViewController.h"

#import "SelectFriendsViewControllerDataSource-Protocol.h"

@class NSString;
@protocol CustomStoryViewersViewControllerDelegate;

@interface CustomStoryViewersViewController : SelectFriendsViewController <SelectFriendsViewControllerDataSource>
{
    _Bool _modifiedSettings;
    id <CustomStoryViewersViewControllerDelegate> _delegate;
}

@property(nonatomic) _Bool modifiedSettings; // @synthesize modifiedSettings=_modifiedSettings;
@property(nonatomic) __weak id <CustomStoryViewersViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)reloadSectionFriendKeys;
- (id)reloadSectionFriends;
- (void)didSelectCell:(id)arg1;
- (id)friendsToNotInclude;
- (void)selectFriends:(id)arg1;
- (void)leftButtonPressed;
- (unsigned long long)supportedInterfaceOrientations;
- (id)getTitle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

