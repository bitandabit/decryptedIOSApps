//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSelectGroupMembersDelegate-Protocol.h"

@class Friend, NSArray, NSString, UITableView;
@protocol SCChatGroup, SCNamedFriend;

@protocol SCAddToGroupViewDelegate <SCSelectGroupMembersDelegate>
- (void)presentBlockedExceptionsAlertView:(id <SCChatGroup>)arg1;
- (void)presentMiniProfileForGroup:(id <SCChatGroup>)arg1;
- (void)presentMiniProfileForFriend:(Friend *)arg1;
- (void)didSelectGroup:(id <SCChatGroup>)arg1;
- (_Bool)isFriendInBaseGroup:(Friend *)arg1;
- (id <SCNamedFriend>)currentFriendSuggestion;
- (NSString *)currentFilterText;
- (_Bool)isSearching;
- (NSArray *)filteredGroups;
- (NSArray *)filteredFriends;
- (NSArray *)friendAndNamedGroupKeys;
- (NSArray *)recents;
- (NSArray *)bestFriends;
- (NSArray *)allGroups;
- (NSArray *)relatedGroups;
- (NSArray *)friendsAndNamedGroups;
- (NSArray *)recipients;

@optional
- (void)showInput;
- (void)hideInput;
- (void)selectRecipientsTableViewDidScroll:(UITableView *)arg1;
@end

