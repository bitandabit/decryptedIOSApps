//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCFriendActionButtonDelegate-Protocol.h"
#import "SCFriendProfileCellViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class AddFriendsDelegateObject, NSMutableArray, NSMutableSet, NSNumber, NSString, SCUserSession, UITableView;
@protocol SCQuickAddControllerDataSrouce, SCQuickAddControllerDelegate;

@interface SCQuickAddController : NSObject <SCFriendProfileCellViewDelegate, SCFriendActionButtonDelegate, UITableViewDataSource>
{
    AddFriendsDelegateObject *_addFriendsDelegate;
    NSMutableArray *_userSuggestions;
    unsigned long long _source;
    SCUserSession *_userSession;
    unsigned long long _quickAddSection;
    _Bool _friendsDidChange;
    NSMutableSet *_suggestedFriendsSeen;
    NSMutableSet *_suggestedFriendsAdded;
    long long _suggestedFriendsInitialCount;
    long long _suggestedFriendsHiddenCount;
    NSNumber *_impressionId;
    _Bool _viewAppeared;
    id <SCQuickAddControllerDataSrouce> _friendActionDataSource;
    id <SCQuickAddControllerDelegate> _friendActionDelegate;
    UITableView *_tableView;
}

+ (id)userInfoWithPageType:(unsigned long long)arg1 cellId:(id)arg2;
+ (_Bool)shouldFilterForAddSuggestedFriend:(id)arg1 name:(id)arg2 pageType:(unsigned long long)arg3 cellId:(id)arg4;
+ (id)metricsContextTagStories;
+ (id)metricsContextTagSendTo;
+ (id)metricsContextTagFeed;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool viewAppeared; // @synthesize viewAppeared=_viewAppeared;
@property(nonatomic) __weak id <SCQuickAddControllerDelegate> friendActionDelegate; // @synthesize friendActionDelegate=_friendActionDelegate;
@property(nonatomic) __weak id <SCQuickAddControllerDataSrouce> friendActionDataSource; // @synthesize friendActionDataSource=_friendActionDataSource;
- (void).cxx_destruct;
- (_Bool)isViewAllCellAtIndexPath:(id)arg1;
- (_Bool)_shouldShowViewAll;
- (id)_getSuggestedFriendFor:(id)arg1;
- (void)_generateImpressionId;
- (long long)_getButtonStateWithFriendProcessingType:(unsigned long long)arg1;
- (long long)getAddSourceTypeForFriend:(id)arg1;
- (long long)getSuggestedFriendIndex:(id)arg1;
- (id)requestsContext;
- (id)context;
- (unsigned long long)dataPageType;
- (id)placementForSuggestedFriend;
- (void)reloadQuickAdd;
- (void)_didTapViewAllButton;
- (id)viewAllCell;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)_getFriendProfileCellForFindFriendMenuViewOnTableView:(id)arg1 indexPath:(id)arg2 suggestedFriendDelegate:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 hideBottom:(_Bool)arg3;
- (id)cellForFullPageQuickAdd:(id)arg1 suggestedFriend:(id)arg2 suggestedFriendDelegate:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 suggestedFriendDelegate:(id)arg3;
- (id)cellForSendToPageTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 cellIdentifier:(id)arg3 cellDelegate:(id)arg4;
- (id)friendForRowAtIndexPath:(id)arg1;
- (void)_updateProfileCell:(id)arg1 withSuggestedFriend:(id)arg2;
- (void)_updateProfileCellView:(id)arg1 withFriend:(id)arg2;
- (void)didPressHideButtonForFriend:(id)arg1;
- (void)didDisplayProfilePictureOnCellView:(id)arg1 onThumbnail:(id)arg2 friend:(id)arg3;
- (void)friendProfileCellView:(id)arg1 addFriendPressed:(id)arg2 friend:(id)arg3;
- (void)didFinishFriendAction:(id)arg1;
- (id)_newFriendProfileCellConfigurationForFriend:(id)arg1;
- (id)addFriendsDelegate;
- (void)addToAddedSuggestions:(id)arg1;
- (void)logSeenSuggestions;
- (void)reloadUserSuggestions;
- (long long)suggestedFriendsHiddenCount;
- (long long)suggestedFriendsAddedCount;
- (long long)suggestedFriendsSeenCount;
- (long long)suggestedFriendsInitialCount;
- (id)userSuggestions;
- (_Bool)canShowQuickAdd;
- (void)friendsDidChange:(id)arg1;
- (void)reloadOnNotification:(id)arg1;
- (void)dealloc;
- (id)initWithTableView:(id)arg1 source:(unsigned long long)arg2 userSession:(id)arg3 friendActionDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
