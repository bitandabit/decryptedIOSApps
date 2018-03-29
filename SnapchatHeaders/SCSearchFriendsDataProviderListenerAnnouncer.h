//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSearchFriendsDataProviderListener-Protocol.h"

@class NSString;

@interface SCSearchFriendsDataProviderListenerAnnouncer : NSObject <SCSearchFriendsDataProviderListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCSearchFriendsDataProviderListener>, std::__1::allocator<__weak id<SCSearchFriendsDataProviderListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)searchFriendsDataProviderDidUpdateFriends:(id)arg1;
- (void)searchFriendsDataProviderDidUpdateAddedMeFriends:(id)arg1;
- (void)searchFriendsDataProviderDidUpdateGroupStoryFriends:(id)arg1;
- (void)searchFriendsDataProviderDidUpdateGroupChatFriends:(id)arg1;
- (void)searchFriendsDataProviderDidUpdateQuickChatFriends:(id)arg1;
- (void)searchFriendsDataProviderDidUpdateAddressBookFriends:(id)arg1;
- (void)searchFriendsDataProviderDidUpdateLatestAddFriends:(id)arg1;
- (void)searchFriendsDataProviderDidUpdateSearchableQuickAddFriends:(id)arg1;
- (void)searchFriendsDataProviderDidUpdateQuickAddFriends:(id)arg1;
- (void)removeListener:(id)arg1;
- (_Bool)addListener:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

