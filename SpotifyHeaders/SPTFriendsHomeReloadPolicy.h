//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCollectionEntityListObserver.h"

@class NSMutableSet, NSString;

@interface SPTFriendsHomeReloadPolicy : NSObject <SPTCollectionEntityListObserver>
{
    _Bool _isRecentlyPlayedUpdated;
    unsigned long long _followerUpdatesCount;
    id <SPTCollectionEntityList> _recentlyPlayedEntityList;
    NSMutableSet *_updatedFollowers;
}

@property(retain, nonatomic) NSMutableSet *updatedFollowers; // @synthesize updatedFollowers=_updatedFollowers;
@property(nonatomic) _Bool isRecentlyPlayedUpdated; // @synthesize isRecentlyPlayedUpdated=_isRecentlyPlayedUpdated;
@property(retain, nonatomic) id <SPTCollectionEntityList> recentlyPlayedEntityList; // @synthesize recentlyPlayedEntityList=_recentlyPlayedEntityList;
@property(readonly, nonatomic) unsigned long long followerUpdatesCount; // @synthesize followerUpdatesCount=_followerUpdatesCount;
- (void).cxx_destruct;
- (void)entityListDidReload:(id)arg1;
- (void)updateFollowData:(id)arg1;
- (void)resetReloadFlags;
- (_Bool)shouldReloadFollowersView;
- (_Bool)shouldReloadContent:(id)arg1 timeSinceLastReload:(double)arg2;
- (void)dealloc;
- (id)initWithFollowModelFactory:(id)arg1 recentlyPlayedEntityList:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

