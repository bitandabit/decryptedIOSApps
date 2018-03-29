//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCFriendEventListener-Protocol.h"
#import "SCGroupManagerListener-Protocol.h"
#import "SCSearchEventAnnouncing-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString, SCSearchEventListenerAnnouncer, SCSearchUserSearcher, SCSendToConfiguration, SCSendToRanker, SCSortableRecipientFilter;
@protocol SCPerforming, SCUserSelectionManaging;

@interface SCCheetahSendToRecipientDataProvider : NSObject <SCFriendEventListener, SCGroupManagerListener, SCSearchEventAnnouncing>
{
    id <SCUserSelectionManaging> _selectionStateManager;
    SCSendToConfiguration *_configuration;
    NSArray *_friendsAndGroups;
    SCSortableRecipientFilter *_generalfilter;
    SCSortableRecipientFilter *_contactSnapchattersFilter;
    NSDictionary *_nonSnapchattersDict;
    NSDictionary *_snapchattersDict;
    NSDictionary *_suggestedFriendsDict;
    NSMutableDictionary *_searchedUserCache;
    NSSet *_pendingGroupIds;
    SCSearchEventListenerAnnouncer *_eventAnnouncer;
    id <SCPerforming> _performer;
    SCSearchUserSearcher *_userSearcher;
    SCSendToRanker *_recentSectionRanker;
    SCSendToRanker *_suggestedSectionRanker;
    _Bool _showSuggestedSection;
    NSArray *_allFriends;
    NSArray *_bestFriends;
    NSArray *_mischiefs;
    NSArray *_recents;
    NSArray *_suggested;
    NSDictionary *_suggestReasonByUserId;
    CDUnknownBlockType _observeRankerHandler;
}

+ (id)announcerIdentifier;
@property(copy, nonatomic) CDUnknownBlockType observeRankerHandler; // @synthesize observeRankerHandler=_observeRankerHandler;
@property(readonly, copy, nonatomic) NSDictionary *suggestReasonByUserId; // @synthesize suggestReasonByUserId=_suggestReasonByUserId;
@property(readonly, copy, nonatomic) NSArray *suggested; // @synthesize suggested=_suggested;
@property(readonly, copy, nonatomic) NSArray *recents; // @synthesize recents=_recents;
@property(readonly, copy, nonatomic) NSArray *mischiefs; // @synthesize mischiefs=_mischiefs;
@property(readonly, copy, nonatomic) NSArray *bestFriends; // @synthesize bestFriends=_bestFriends;
@property(readonly, copy, nonatomic) NSArray *allFriends; // @synthesize allFriends=_allFriends;
- (void).cxx_destruct;
- (_Bool)_shouldBuildSuggested;
- (_Bool)_shouldBuildRecents;
- (void)_addPendingGroupId:(id)arg1;
- (void)_didJoinGroupWithId:(id)arg1;
- (void)_didBeginLeavingGroupWithId:(id)arg1;
- (void)_didChangeInfoForGroupWithId:(id)arg1;
- (void)_didFinishLoadingGroups;
- (void)_outgoingFriendsDidUpdate:(id)arg1 updateType:(unsigned long long)arg2;
- (void)_addFriendSearchDidFinishForQuery:(id)arg1 success:(_Bool)arg2 searchedUser:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_friendDataDidUpdate;
- (void)_chatGroupDataDidUpdate;
- (void)_buildFriendsToAdd;
- (void)_buildSnapchattersDict;
- (void)_buildNonSnapchattersDict;
- (void)_buildSuggestedFriends;
- (void)_buildFriendsAndGroups;
- (void)_logRankInfo:(id)arg1;
- (id)_recipientListFromOrderedRecipients:(id)arg1;
- (void)_buildSuggestedWithRecents:(id)arg1 orderedRecipients:(id)arg2 maxRecent:(long long)arg3;
- (void)_buildRecents;
- (void)_buildMischiefs;
- (void)_buildBestFriends;
- (void)_buildAllFriends;
- (id)_buildASTRanker:(id)arg1;
- (void)_prepareData;
- (void)didCreateGroupOnServerWithId:(id)arg1 initialSojuMischief:(id)arg2;
- (void)didJoinGroupWithId:(id)arg1;
- (void)didBeginLeavingGroupWithId:(id)arg1;
- (void)didChangeInfoForGroupWithId:(id)arg1;
- (void)didFinishLoadingGroups;
- (void)outgoingFriendsDidUpdate:(id)arg1 updateType:(unsigned long long)arg2 context:(id)arg3;
- (void)updatePendingGroupId:(id)arg1;
- (_Bool)shouldShowFindFriendsCTA;
- (_Bool)hasUserContactSynced;
- (_Bool)hasUserPhoneVerified;
- (id)searchedUsersWithUserIds:(id)arg1;
- (id)searchedUserWithUserId:(id)arg1;
- (id)contactSnapchattersWithUserIds:(id)arg1;
- (id)contactSnapchatterWithUserId:(id)arg1;
- (id)contactNonSnapchattersWithPhoneNumbers:(id)arg1;
- (id)contactNonSnapchatterWithPhoneNumber:(id)arg1;
- (id)suggestFriendWithUserIds:(id)arg1;
- (id)suggestFriendWithUserId:(id)arg1;
- (id)groupsWithGroupIds:(id)arg1;
- (id)groupWithGroupId:(id)arg1;
- (id)friendWithUsername:(id)arg1;
- (void)searchUsersAndContactsForQuery:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)friendsWithUserIds:(id)arg1;
- (id)friendWithUserId:(id)arg1;
- (id)mischiefWithRecipients:(id)arg1;
- (id)friendsAndGroupsMatchedForQuery:(id)arg1;
- (id)suggestedFriends;
@property(readonly, copy, nonatomic) NSArray *snappableFriends;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 selectionStateManager:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
