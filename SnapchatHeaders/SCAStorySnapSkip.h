//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCAStorySnapSkip : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *caption;
    NSNumber *camera;
    NSNumber *drawing;
    NSNumber *flash;
    NSNumber *viewLocation;
    NSNumber *snapTime;
    NSNumber *fullView;
    NSNumber *timeViewed;
    NSNumber *snapIndexCount;
    NSNumber *snapIndexPos;
    long long filterType;
    long long source;
    long long viewSource;
    long long mediaType;
    long long storyType;
    long long filterVisual;
    long long filterInfo;
    NSString *filter;
    NSString *geoFence;
    NSString *posterId;
    NSString *storySnapId;
    NSString *sponsor;
    NSString *filterGeofence;
    NSString *filterSponsor;
    NSString *filterLensId;
    NSString *lensOptionId;
    NSString *hydraResultId;
    NSString *ghost_poster_id;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getGhost_poster_id;
- (void)setGhost_poster_id:(id)arg1;
- (id)getHydraResultId;
- (void)setHydraResultId:(id)arg1;
- (id)getLensOptionId;
- (void)setLensOptionId:(id)arg1;
- (id)getFilterLensId;
- (void)setFilterLensId:(id)arg1;
- (id)getFilterSponsor;
- (void)setFilterSponsor:(id)arg1;
- (id)getFilterGeofence;
- (void)setFilterGeofence:(id)arg1;
- (id)getSponsor;
- (void)setSponsor:(id)arg1;
- (id)getStorySnapId;
- (void)setStorySnapId:(id)arg1;
- (id)getPosterId;
- (void)setPosterId:(id)arg1;
- (id)getGeoFence;
- (void)setGeoFence:(id)arg1;
- (id)getFilter;
- (void)setFilter:(id)arg1;
- (long long)getFilterInfo;
- (void)setFilterInfo:(long long)arg1;
- (long long)getFilterVisual;
- (void)setFilterVisual:(long long)arg1;
- (long long)getStoryType;
- (void)setStoryType:(long long)arg1;
- (long long)getMediaType;
- (void)setMediaType:(long long)arg1;
- (long long)getViewSource;
- (void)setViewSource:(long long)arg1;
- (long long)getSource;
- (void)setSource:(long long)arg1;
- (long long)getFilterType;
- (void)setFilterType:(long long)arg1;
- (long long)getSnapIndexPos;
- (void)setSnapIndexPos:(long long)arg1;
- (long long)getSnapIndexCount;
- (void)setSnapIndexCount:(long long)arg1;
- (double)getTimeViewed;
- (void)setTimeViewed:(double)arg1;
- (_Bool)getFullView;
- (void)setFullView:(_Bool)arg1;
- (double)getSnapTime;
- (void)setSnapTime:(double)arg1;
- (long long)getViewLocation;
- (void)setViewLocation:(long long)arg1;
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

