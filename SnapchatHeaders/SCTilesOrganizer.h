//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, SCTile;

@interface SCTilesOrganizer : NSObject
{
    _Bool _viewedTilesAtBack;
    NSArray *_fullyViewedTiles;
    NSArray *_initiallyViewedTiles;
    SCTile *_currentTile;
    _Bool _currentTileSentToEnd;
    unsigned long long _context;
    NSArray *_tiles;
    NSArray *_originalTilesOrder;
}

@property(copy, nonatomic) NSArray *originalTilesOrder; // @synthesize originalTilesOrder=_originalTilesOrder;
@property(readonly, copy, nonatomic) NSArray *tiles; // @synthesize tiles=_tiles;
- (void).cxx_destruct;
- (void)didMoveToTile:(id)arg1;
- (id)_tilesWithFullyViewedOrderedCorrectlyForTiles:(id)arg1;
- (id)_tileIdToIndexForTiles:(id)arg1;
- (void)tileBecameFullyViewed:(id)arg1;
- (void)_logDebugInfoWithTiles:(id)arg1 prefix:(id)arg2;
- (void)sortTiles;
- (void)didFinishViewing;
- (void)didBeginViewing;
- (void)setAndSortTiles:(id)arg1;
- (id)initWithCurrentTileSentToEnd:(_Bool)arg1 context:(unsigned long long)arg2;

@end

