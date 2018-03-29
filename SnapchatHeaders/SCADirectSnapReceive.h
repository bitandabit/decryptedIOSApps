//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCADirectSnapReceive : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *caption;
    NSNumber *camera;
    NSNumber *drawing;
    NSNumber *flash;
    NSNumber *snapTimeSec;
    NSNumber *snapTimeIsLoop;
    long long filterType;
    long long source;
    long long mediaType;
    long long filterVisual;
    long long filterInfo;
    NSString *filter;
    NSString *snapId;
    NSString *filterGeofence;
    NSString *filterSponsor;
    NSString *filterLensId;
    NSString *lensOptionId;
    NSString *correspondentId;
    NSString *mischiefId;
    NSString *rankingId;
    NSString *ghost_correspondent_id;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getGhost_correspondent_id;
- (void)setGhost_correspondent_id:(id)arg1;
- (id)getRankingId;
- (void)setRankingId:(id)arg1;
- (id)getMischiefId;
- (void)setMischiefId:(id)arg1;
- (id)getCorrespondentId;
- (void)setCorrespondentId:(id)arg1;
- (id)getLensOptionId;
- (void)setLensOptionId:(id)arg1;
- (id)getFilterLensId;
- (void)setFilterLensId:(id)arg1;
- (id)getFilterSponsor;
- (void)setFilterSponsor:(id)arg1;
- (id)getFilterGeofence;
- (void)setFilterGeofence:(id)arg1;
- (id)getSnapId;
- (void)setSnapId:(id)arg1;
- (id)getFilter;
- (void)setFilter:(id)arg1;
- (long long)getFilterInfo;
- (void)setFilterInfo:(long long)arg1;
- (long long)getFilterVisual;
- (void)setFilterVisual:(long long)arg1;
- (long long)getMediaType;
- (void)setMediaType:(long long)arg1;
- (long long)getSource;
- (void)setSource:(long long)arg1;
- (long long)getFilterType;
- (void)setFilterType:(long long)arg1;
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

