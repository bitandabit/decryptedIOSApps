//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCSearchFriendsDataProvider;

@protocol SCSearchFriendsDataProviderListener <NSObject>
- (void)searchFriendsDataProviderDidUpdateFriends:(SCSearchFriendsDataProvider *)arg1;

@optional
- (void)searchFriendsDataProviderDidUpdateAddedMeFriends:(SCSearchFriendsDataProvider *)arg1;
- (void)searchFriendsDataProviderDidUpdateGroupStoryFriends:(SCSearchFriendsDataProvider *)arg1;
- (void)searchFriendsDataProviderDidUpdateGroupChatFriends:(SCSearchFriendsDataProvider *)arg1;
- (void)searchFriendsDataProviderDidUpdateQuickChatFriends:(SCSearchFriendsDataProvider *)arg1;
- (void)searchFriendsDataProviderDidUpdateAddressBookFriends:(SCSearchFriendsDataProvider *)arg1;
- (void)searchFriendsDataProviderDidUpdateLatestAddFriends:(SCSearchFriendsDataProvider *)arg1;
- (void)searchFriendsDataProviderDidUpdateSearchableQuickAddFriends:(SCSearchFriendsDataProvider *)arg1;
- (void)searchFriendsDataProviderDidUpdateQuickAddFriends:(SCSearchFriendsDataProvider *)arg1;
@end

