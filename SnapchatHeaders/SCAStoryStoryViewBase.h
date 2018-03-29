//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCAStoryStoryViewBase : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *timeViewed;
    NSNumber *fullView;
    NSNumber *numSnapsViewed;
    NSNumber *numSnapsUniqueViewed;
    NSNumber *snapIndexCount;
    NSNumber *viewLocationPos;
    NSNumber *viewLocation;
    NSNumber *snapTime;
    NSNumber *autoAdvanceIndex;
    NSNumber *snapCount;
    NSNumber *storySessionId;
    NSNumber *explorerSnapCount;
    NSNumber *explorerSwipeCount;
    NSNumber *playlistIndex;
    NSNumber *isPostable;
    NSNumber *friendLinkHop;
    NSNumber *mapSessionId;
    NSNumber *mapZoomLevel;
    NSNumber *distanceFromUserMeter;
    NSNumber *distanceFromFriendMinMeter;
    long long storyType;
    long long exitEvent;
    long long entryEvent;
    long long source;
    long long viewSource;
    long long storyTypeSpecific;
    long long mapSourceType;
    long long mapStoryType;
    NSString *posterId;
    NSString *geoFence;
    NSString *sponsor;
    NSString *subpageName;
    NSString *deepLinkId;
    NSString *cellId;
    NSString *hydraResultId;
    NSString *groupStoryId;
    NSString *ghost_poster_id;
    NSString *ghost_cell_id;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getGhost_cell_id;
- (void)setGhost_cell_id:(id)arg1;
- (id)getGhost_poster_id;
- (void)setGhost_poster_id:(id)arg1;
- (id)getGroupStoryId;
- (void)setGroupStoryId:(id)arg1;
- (id)getHydraResultId;
- (void)setHydraResultId:(id)arg1;
- (id)getCellId;
- (void)setCellId:(id)arg1;
- (id)getDeepLinkId;
- (void)setDeepLinkId:(id)arg1;
- (id)getSubpageName;
- (void)setSubpageName:(id)arg1;
- (id)getSponsor;
- (void)setSponsor:(id)arg1;
- (id)getGeoFence;
- (void)setGeoFence:(id)arg1;
- (id)getPosterId;
- (void)setPosterId:(id)arg1;
- (long long)getMapStoryType;
- (void)setMapStoryType:(long long)arg1;
- (long long)getMapSourceType;
- (void)setMapSourceType:(long long)arg1;
- (long long)getStoryTypeSpecific;
- (void)setStoryTypeSpecific:(long long)arg1;
- (long long)getViewSource;
- (void)setViewSource:(long long)arg1;
- (long long)getSource;
- (void)setSource:(long long)arg1;
- (long long)getEntryEvent;
- (void)setEntryEvent:(long long)arg1;
- (long long)getExitEvent;
- (void)setExitEvent:(long long)arg1;
- (long long)getStoryType;
- (void)setStoryType:(long long)arg1;
- (double)getDistanceFromFriendMinMeter;
- (void)setDistanceFromFriendMinMeter:(double)arg1;
- (double)getDistanceFromUserMeter;
- (void)setDistanceFromUserMeter:(double)arg1;
- (double)getMapZoomLevel;
- (void)setMapZoomLevel:(double)arg1;
- (long long)getMapSessionId;
- (void)setMapSessionId:(long long)arg1;
- (long long)getFriendLinkHop;
- (void)setFriendLinkHop:(long long)arg1;
- (_Bool)getIsPostable;
- (void)setIsPostable:(_Bool)arg1;
- (long long)getPlaylistIndex;
- (void)setPlaylistIndex:(long long)arg1;
- (long long)getExplorerSwipeCount;
- (void)setExplorerSwipeCount:(long long)arg1;
- (long long)getExplorerSnapCount;
- (void)setExplorerSnapCount:(long long)arg1;
- (long long)getStorySessionId;
- (void)setStorySessionId:(long long)arg1;
- (long long)getSnapCount;
- (void)setSnapCount:(long long)arg1;
- (long long)getAutoAdvanceIndex;
- (void)setAutoAdvanceIndex:(long long)arg1;
- (double)getSnapTime;
- (void)setSnapTime:(double)arg1;
- (long long)getViewLocation;
- (void)setViewLocation:(long long)arg1;
- (long long)getViewLocationPos;
- (void)setViewLocationPos:(long long)arg1;
- (long long)getSnapIndexCount;
- (void)setSnapIndexCount:(long long)arg1;
- (long long)getNumSnapsUniqueViewed;
- (void)setNumSnapsUniqueViewed:(long long)arg1;
- (long long)getNumSnapsViewed;
- (void)setNumSnapsViewed:(long long)arg1;
- (_Bool)getFullView;
- (void)setFullView:(_Bool)arg1;
- (double)getTimeViewed;
- (void)setTimeViewed:(double)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
