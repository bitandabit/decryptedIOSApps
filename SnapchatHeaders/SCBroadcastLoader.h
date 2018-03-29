//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, SOJUBroadcastPrecachingLookaheadPrecache, SOJUBroadcastPrecachingPrecache;

@interface SCBroadcastLoader : NSObject <NSCoding>
{
    SOJUBroadcastPrecachingLookaheadPrecache *_currentLookahead;
    SOJUBroadcastPrecachingLookaheadPrecache *_defaultLookahead;
    NSArray *_tiles;
    SOJUBroadcastPrecachingPrecache *_soju;
}

+ (int)context;
@property(retain, nonatomic) SOJUBroadcastPrecachingPrecache *soju; // @synthesize soju=_soju;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_stringForContext:(unsigned long long)arg1;
- (long long)_countForTypeSpecificConfigs:(id)arg1 type:(long long)arg2;
- (long long)_countForPrecacheCounts:(id)arg1;
- (long long)_precachingTypeForTileType:(unsigned long long)arg1;
- (void)_loadForFriendStories:(id)arg1 count:(long long)arg2 offset:(long long)arg3 isLookahead:(_Bool)arg4;
- (void)didFinishViewingTiles;
- (void)tilesBeingViewedDidChange:(id)arg1;
- (void)didBeginViewingInContext:(unsigned long long)arg1;
- (id)_defaultClientLookahead;
- (id)_currentLookahead;
- (void)_loadForTile:(id)arg1;
- (void)_loadTilesAfterTileWithTileId:(id)arg1;
- (void)loadForFriendStories:(id)arg1 startAtIndex:(long long)arg2 viewingType:(long long)arg3;
- (void)_loadForDiscoverEdition:(id)arg1 currentChunk:(id)arg2;
- (void)_loadAllTilesForDiscoverEdition:(id)arg1;
- (void)loadForDiscoverEdition:(id)arg1 currentChunk:(id)arg2;
- (void)loadForChangeInChunksInEdition:(id)arg1;
- (void)_loadForDiscoverItemCountPairs:(id)arg1;
- (void)_loadForStoriesItemCountPairs:(id)arg1;
- (id)_itemCountPairsForType:(long long)arg1;
- (void)_loadForItemCountPairs:(id)arg1 type:(long long)arg2;
- (void)_autoloadForType:(long long)arg1;
- (void)autoloadLiveStories;
- (void)autoloadDiscoverChannels;

@end

