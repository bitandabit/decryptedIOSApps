//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "SCGroupManagerListener-Protocol.h"

@class NSArray, NSCache, NSDictionary, NSMutableArray, NSString;

@interface SCGroupStoryCollection : NSObject <NSCoding, SCGroupManagerListener>
{
    NSMutableArray *_newlyCreatedPublicationIds;
    _Bool _hasReceivedPostablesThisSession;
    NSDictionary *_pubLookupByMischiefId;
    NSArray *_cachedPublicationsForCheetahStoriesFeed;
    NSCache *_storyByServedIdLookup;
    _Bool _hasSyncedToChatGroups;
    NSArray *_postableGroupStoryIds;
    NSDictionary *_groupStoriesPublicationDict;
    NSDictionary *_myGroupStoriesPublicationDict;
}

+ (void)syncChatGroupsIfLoadedForUnarchivedCollection;
@property(readonly, nonatomic) _Bool hasSyncedToChatGroups; // @synthesize hasSyncedToChatGroups=_hasSyncedToChatGroups;
@property(copy, nonatomic) NSDictionary *myGroupStoriesPublicationDict; // @synthesize myGroupStoriesPublicationDict=_myGroupStoriesPublicationDict;
@property(copy, nonatomic) NSDictionary *groupStoriesPublicationDict; // @synthesize groupStoriesPublicationDict=_groupStoriesPublicationDict;
@property(copy, nonatomic) NSArray *postableGroupStoryIds; // @synthesize postableGroupStoryIds=_postableGroupStoryIds;
- (void).cxx_destruct;
- (void)_reconstructTypeSafeGroupStoriesPublicationDict;
- (void)didCreateGroupOnServerWithId:(id)arg1 initialSojuMischief:(id)arg2;
- (void)didJoinGroupWithId:(id)arg1;
- (void)didBeginLeavingGroupWithId:(id)arg1;
- (void)didChangeInfoForGroupWithId:(id)arg1;
- (void)didFinishLoadingGroups;
- (_Bool)_isGroupChatStoryNewlyCreatedByMe:(id)arg1;
- (_Bool)_isGroupChatNewlyCreatedByMe:(id)arg1;
- (id)addPublicationForChatGroup:(id)arg1 addToPostables:(_Bool)arg2;
- (void)_syncChatGroupsIfLoadedAfterStartup;
- (void)syncChatGroupsIfLoaded;
- (void)generateStoryDescriptionTextForPublicationId:(id)arg1;
- (void)didUpdateSettings:(id)arg1 publicationId:(id)arg2;
- (id)_createNewMyGroupStoriesPublicationForId:(id)arg1;
- (id)usernamesWithPrivatePublications;
- (id)privatePublicationsCreatedByUsername:(id)arg1;
- (id)findStoryWithServerId:(id)arg1;
- (id)myGroupStoriesForId:(id)arg1;
- (id)storiesForStory:(id)arg1;
- (id)mischiefIdForPublicationId:(id)arg1;
- (id)groupStoriesForMischiefId:(id)arg1;
- (id)publicationForMischiefId:(id)arg1;
- (id)_publicationsByMischiefId;
- (id)myPublicationForMischiefId:(id)arg1;
- (id)publicationIdsForMischiefIds:(id)arg1;
- (id)_groupStoriesForUniqueStoriesId:(id)arg1;
- (id)groupStoriesForStory:(id)arg1;
- (id)groupStoriesForId:(id)arg1;
- (id)groupStories;
- (id)_myStoriesForUniqueStoriesId:(id)arg1;
- (id)myStoriesForStory:(id)arg1;
- (id)getOrCreateMyStoriesPublicationForId:(id)arg1;
- (id)settingsPublicationsForGroupStoryPublicationIds:(id)arg1;
- (id)settingsPublicationForId:(id)arg1;
- (id)postTargetPublicationWithId:(id)arg1;
- (void)addStoryNotesToMyMischiefStorySnaps;
- (id)myGroupStories;
- (_Bool)canCreateGroupStory;
- (void)_removeFromMyGroupStoriesPublicationIds:(id)arg1;
- (void)_removeFromViewableGroupStoriesPublicationIds:(id)arg1;
- (void)removePublicationWithId:(id)arg1 removeMyContributions:(_Bool)arg2;
- (void)removePublicationWithId:(id)arg1;
- (_Bool)clearExpiredStories;
- (id)allGroupStoryIdsForMetadataFetchWithTrigger:(long long)arg1;
- (id)allGroupStoryIds;
- (id)publicationsForCheetahStoriesFeed;
- (id)postableGroupStoryPublicationsSorted:(_Bool)arg1;
- (void)didCreateNewPublication:(id)arg1;
- (void)updateWithUnarchivedGroupStoryCollection:(id)arg1;
- (void)updateMyGroupStoriesPublicationDictWithMyGroupStories:(id)arg1;
- (void)_mergeFriendStoriesForPublications:(id)arg1;
- (_Bool)updateCreatedMischiefIds:(id)arg1;
- (_Bool)updateWithSOJUGroupStoryMetadata:(id)arg1 requestedIDs:(id)arg2;
- (void)updateWithSOJUGroupStoriesArray:(id)arg1 isDelta:(_Bool)arg2;
- (void)updateWithSOJUPostableStoryInfo:(id)arg1;
- (CDUnknownBlockType)_publicationIdComparatorWithMyGroupPublicationsDict:(id)arg1 groupPublicationsDict:(id)arg2;
- (void)_ensureNonNilObjects;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
