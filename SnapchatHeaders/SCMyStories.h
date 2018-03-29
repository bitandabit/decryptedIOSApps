//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FriendStories.h"

@class NSCache, NSMutableSet;

@interface SCMyStories : FriendStories
{
    NSMutableSet *_deletedStories;
    NSCache *_storyByServedIdLookup;
    _Bool _viewingStories;
}

@property(nonatomic, getter=isViewingStories) _Bool viewingStories; // @synthesize viewingStories=_viewingStories;
- (void).cxx_destruct;
- (id)storySpecificTypeString;
- (id)findStoryWithServerId:(id)arg1;
- (long long)groupStoryType;
- (_Bool)includesStoryWithClientId:(id)arg1;
- (void)prepareForLogout;
- (id)findDuplicatedStoriesWithClientId:(id)arg1;
- (void)fetchMedia:(id)arg1 userInitiated:(_Bool)arg2;
- (void)fetchThumbnailMediaForStory:(id)arg1;
- (_Bool)isNormalFriendStories;
- (unsigned long long)numberOfPendingStories;
- (unsigned long long)numberOfFailedStories;
- (unsigned long long)numberOfPostingStories;
- (id)displayNameForCell;
- (id)thumbnailId;
- (id)kvoUsername;
- (id)username;
- (_Bool)removeStory:(id)arg1 didDelete:(_Bool)arg2;
- (CDUnknownBlockType)getStoryOrderComparator;
- (void)addMultipleNewStories:(id)arg1;
- (void)addNewStory:(id)arg1;
- (void)_removeStoriesFromStoriesArray:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)clearExpiredStoriesWithResultHandler:(CDUnknownBlockType)arg1;
- (id)mergeStories:(id)arg1 andStories:(id)arg2;
- (id)_sortedStoriesArrayWithStories:(id)arg1;
- (void)updateWithMyStories:(id)arg1;

@end

