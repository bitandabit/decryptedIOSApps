//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSCache, NSDictionary, NSMutableDictionary;

@interface SCMyContributionStoriesCollection : NSObject
{
    NSMutableDictionary *_storiesPendingConfirmation;
    NSArray *_cachedMyStoriesUnion;
    NSCache *_storyByServedIdLookup;
    NSArray *_storiesArray;
    NSDictionary *_storiesDict;
    NSArray *_groupStoryPublicationsArray;
}

@property(copy, nonatomic) NSArray *groupStoryPublicationsArray; // @synthesize groupStoryPublicationsArray=_groupStoryPublicationsArray;
@property(copy, nonatomic) NSDictionary *storiesDict; // @synthesize storiesDict=_storiesDict;
@property(copy, nonatomic) NSArray *storiesArray; // @synthesize storiesArray=_storiesArray;
- (void).cxx_destruct;
- (void)removeMyContributionStories:(id)arg1;
- (_Bool)purgePendingContributions:(id)arg1;
- (id)pendingConfirmationSnapshot;
- (void)markStoryPendingConfirmation:(id)arg1;
- (_Bool)_needsUpdateToNewGroupStoriesIds:(id)arg1;
- (void)updateCreatedMischiefIdsFromGroupStoryCollection:(id)arg1;
- (void)invalidateMyStoriesArrangement;
- (unsigned long long)groupStoriesCount;
- (void)setMyGroupStories:(id)arg1 skipIfUnnecessary:(_Bool)arg2;
- (void)setMyGroupStories:(id)arg1;
- (void)addContributionStories:(id)arg1;
- (void)updateContributionStories:(id)arg1;
- (void)clearExpiredStories;
- (id)storiesForIndex:(unsigned long long)arg1;
- (id)_findMissingCurrentMyContributionStoriesFromServerUpdate:(id)arg1;
- (id)storiesForUniqueStoriesId:(id)arg1;
- (id)storiesForStory:(id)arg1;
- (long long)indexForMyContributionStories:(id)arg1;
- (id)myStoriesArray;
- (void)_removeUnconvertedMischiefs:(id)arg1;
- (CDUnknownBlockType)_storiesComparator;
- (id)findStoryWithServerId:(id)arg1;
- (id)findDuplicatedStoryForStory:(id)arg1;
- (id)storiesContainingStory:(id)arg1;
- (_Bool)containsStoriesContainingStory:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)didDecodeObject;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

