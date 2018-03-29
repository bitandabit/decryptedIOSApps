//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCADirectSnapReplayAvailable : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *caption;
    NSNumber *camera;
    NSNumber *drawing;
    NSNumber *flash;
    NSNumber *snapTimeSec;
    NSNumber *snapTimeIsLoop;
    NSNumber *cellViewPosition;
    long long filterType;
    long long source;
    long long mediaType;
    long long friendshipStatus;
    long long correspondentType;
    NSString *filter;
    NSString *subpageName;
    NSString *mischiefId;
    NSString *correspondentId;
    NSString *rankingModelId;
    NSString *rankingId;
    NSString *serverRankingId;
    NSString *ghost_correspondent_id;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getGhost_correspondent_id;
- (void)setGhost_correspondent_id:(id)arg1;
- (id)getServerRankingId;
- (void)setServerRankingId:(id)arg1;
- (id)getRankingId;
- (void)setRankingId:(id)arg1;
- (id)getRankingModelId;
- (void)setRankingModelId:(id)arg1;
- (id)getCorrespondentId;
- (void)setCorrespondentId:(id)arg1;
- (id)getMischiefId;
- (void)setMischiefId:(id)arg1;
- (id)getSubpageName;
- (void)setSubpageName:(id)arg1;
- (id)getFilter;
- (void)setFilter:(id)arg1;
- (long long)getCorrespondentType;
- (void)setCorrespondentType:(long long)arg1;
- (long long)getFriendshipStatus;
- (void)setFriendshipStatus:(long long)arg1;
- (long long)getMediaType;
- (void)setMediaType:(long long)arg1;
- (long long)getSource;
- (void)setSource:(long long)arg1;
- (long long)getFilterType;
- (void)setFilterType:(long long)arg1;
- (long long)getCellViewPosition;
- (void)setCellViewPosition:(long long)arg1;
- (_Bool)getSnapTimeIsLoop;
- (void)setSnapTimeIsLoop:(_Bool)arg1;
- (double)getSnapTimeSec;
- (void)setSnapTimeSec:(double)arg1;
- (_Bool)getFlash;
- (void)setFlash:(_Bool)arg1;
- (_Bool)getDrawing;
- (void)setDrawing:(_Bool)arg1;
- (long long)getCamera;
- (void)setCamera:(long long)arg1;
- (long long)getCaption;
- (void)setCaption:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

