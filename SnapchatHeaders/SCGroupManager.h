//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCGroupManager-Protocol.h"
#import "SCTimeProfilable-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString, SCArchiveLoader, SCFeedManager, SCGroupManagerListenerAnnouncer, SCQueuePerformer;
@protocol SCFriendManagerProvider, SCGroupLogger, SCGroupManagerAPI;

@interface SCGroupManager : NSObject <SCTimeProfilable, SCGroupManager>
{
    SCFeedManager *_feedManager;
    NSMutableDictionary *_groups;
    id <SCFriendManagerProvider> _friendManagerProvider;
    id <SCGroupManagerAPI> _managerAPI;
    id <SCGroupLogger> _groupLogger;
    SCArchiveLoader *_loader;
    SCQueuePerformer *_performer;
    NSMutableDictionary *_updatingNameGroups;
    NSMutableDictionary *_groupsLeftMischiefVersions;
    NSMutableSet *_currentlyLeavingGroupIds;
    _Bool _syncingInProgress;
    NSMutableSet *_groupIdsToLeaveAfterSyncing;
    _Bool _isFullyConfigured;
    SCGroupManagerListenerAnnouncer *_announcer;
    NSDictionary *_groupsSnapshot;
    NSSet *_leavingGroupIds;
    NSString *_username;
}

+ (int)context;
+ (double)estimatedMainLabelWidthWithGroupMoji;
@property(retain) NSString *username; // @synthesize username=_username;
@property(retain) NSSet *leavingGroupIds; // @synthesize leavingGroupIds=_leavingGroupIds;
@property(retain) NSDictionary *groupsSnapshot; // @synthesize groupsSnapshot=_groupsSnapshot;
@property(readonly, nonatomic) SCGroupManagerListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
@property _Bool isFullyConfigured; // @synthesize isFullyConfigured=_isFullyConfigured;
- (void).cxx_destruct;
- (id)_mischiefCreationSourceForChatSource:(long long)arg1;
- (void)_updateWithBuilder:(id)arg1 existingBlockedParticipantExceptions:(id)arg2 blockedParticipantExceptions:(id)arg3;
- (void)_updateWithBuilder:(id)arg1 existingParticipantLastContent:(id)arg2 participantLastContent:(id)arg3;
- (void)_updateInteractionEventBatchForGroups:(id)arg1;
- (id)groupForGroup:(id)arg1 blockedParticipantExceptions:(id)arg2;
- (id)groupForGroup:(id)arg1 participantLastContent:(id)arg2;
- (id)dummyGroupParticipantsForFriends:(id)arg1;
- (void)updateGroupParticipantLastContentWithId:(id)arg1 participantLastContent:(id)arg2;
- (void)willSendToGroupIds:(id)arg1;
- (void)clearTemporaryGroups;
- (void)clearTemporaryGroupsExcludingGroupIds:(id)arg1;
- (void)updateGroupWithId:(id)arg1 lastInteractionTimestamp:(id)arg2;
- (void)_takeCurrentlyLeftGroupsSnapshot;
- (void)_takeSnapshot;
- (id)selfUserId;
- (id)selfUsername;
- (_Bool)isConfigured;
- (id)_groupIdForToken:(id)arg1;
- (_Bool)isLeavingGroupId:(id)arg1;
- (_Bool)isUsernameBlocked:(id)arg1;
- (id)displayNameForParticipant:(id)arg1;
- (_Bool)hasDisplayNameForParticipantUsername:(id)arg1;
- (_Bool)isFriendWithUser:(id)arg1;
- (id)avatarForUsername:(id)arg1 userSession:(id)arg2;
- (id)recentGroupsAndRecentFriends;
- (id)getRecentGroups;
- (id)getAllGroups;
- (id)getAllGroupIds;
- (id)_getSafeGroupsDictionary;
- (void)notifyGroupInfoDidChange:(id)arg1;
- (void)notifyGroupsDidFinishLoading;
- (void)notifyGroupDidBeginLeaving:(id)arg1;
- (void)notifyGroupDidGetCreatedOnServer:(id)arg1 initialSOJUMischief:(id)arg2;
- (void)notifyGroupDidJoin:(id)arg1;
- (id)_updateGroupsWithGroup:(id)arg1;
- (void)addGroupIfItDoesntExist:(id)arg1;
- (id)_createGroupWithSOJUGroup:(id)arg1 shouldUpdate:(_Bool)arg2;
- (id)updateGroupsWithSOJUGroup:(id)arg1;
- (id)_createGroupWithGroupResponseNoContent:(id)arg1;
- (void)_clearCurrentlyLeavingGroupId:(id)arg1;
- (void)_removeGroupWithId:(id)arg1;
- (id)_getIdsJsonStringFromUserIds:(id)arg1;
- (id)_getIdsJsonStringFromFriends:(id)arg1;
- (id)_getUsernamesFromFriends:(id)arg1;
- (id)_getIdsFromFriends:(id)arg1;
- (id)_newBlockedParticipantExceptionsJsonString:(id)arg1;
- (void)grantGroupExemptBlockedUsersWithId:(id)arg1 newBlockedParticipantExceptions:(id)arg2;
- (void)updateGroupMuteStateForGroupWithId:(id)arg1 isMuted:(_Bool)arg2 shouldLog:(_Bool)arg3 updatedGroupBlock:(CDUnknownBlockType)arg4;
- (void)updateGroupNotificationWithId:(id)arg1 notificationOn:(_Bool)arg2 source:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addToGroupWithId:(id)arg1 friends:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)updateTemporaryGroup:(id)arg1 friends:(id)arg2;
- (void)leaveGroupWithId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateGroupNameWithId:(id)arg1 groupName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)updateGroup:(id)arg1 withMetaData:(id)arg2 withInteractionTimestamp:(id)arg3;
- (void)resetUpdatingNameGroupWithGroupId:(id)arg1 groupName:(id)arg2;
- (id)keyForUpdatingGroupNameWithGroupId:(id)arg1 groupName:(id)arg2;
- (void)refreshGroupIdentityInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getUpdatedGroupsFromGroups:(id)arg1;
- (id)getGroupWithId:(id)arg1;
- (id)localGroupWithFriends:(id)arg1 creationSource:(long long)arg2;
- (void)_createGroupsOnServerIfNecessary:(id)arg1 source:(long long)arg2 groupStoryRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)createGroupsOnServerIfNecessary:(id)arg1 source:(long long)arg2 groupStoryRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)syncGroupsWithConversationGroups:(id)arg1;
- (void)refreshWithFeedManager:(id)arg1;
- (void)configureWithFriendManagerProvider:(id)arg1 feedManager:(id)arg2 managerAPI:(id)arg3 logger:(id)arg4 selfUsername:(id)arg5;
- (_Bool)shouldLoadFromDiskImmediately;
- (void)clear;
- (_Bool)saveState;
- (void)mergeWithLocal:(id)arg1;
- (void)markAsLoadedWithoutLoadingFromDisk;
- (_Bool)isLoaded;
- (void)loadFromDiskAsync:(_Bool)arg1;
- (CDUnknownBlockType)_loadedBlock;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

