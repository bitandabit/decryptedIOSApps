//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCAGeofilterDirectSnapView : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *withAnimated;
    NSNumber *multiSnapCount;
    NSNumber *multiSnapIndex;
    NSNumber *caption;
    NSNumber *camera;
    NSNumber *drawing;
    NSNumber *flash;
    NSNumber *snapTimeSec;
    NSNumber *snapTimeIsLoop;
    NSNumber *fullView;
    NSNumber *initialView;
    NSNumber *viewTimeSec;
    NSNumber *ackTimeSec;
    NSNumber *rollMaxDegree;
    NSNumber *rollMinDegree;
    NSNumber *withAttachment;
    long long source;
    long long mediaType;
    long long filterVisual;
    long long filterInfo;
    NSString *filterSponsor;
    NSString *filterGeofilterId;
    NSString *filterGeolensId;
    NSString *lensOptionId;
    NSString *posterId;
    NSString *encFilterGeofilterId;
    NSString *encFilterGeolensId;
    NSString *adsnapPlacementId;
    NSString *encGeoData;
    NSString *unlockablesSnapInfo;
    NSString *storyViewId;
    NSString *mischiefId;
    NSString *filterVenueId;
    NSString *ghost_poster_id;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getGhost_poster_id;
- (void)setGhost_poster_id:(id)arg1;
- (id)getFilterVenueId;
- (void)setFilterVenueId:(id)arg1;
- (id)getMischiefId;
- (void)setMischiefId:(id)arg1;
- (id)getStoryViewId;
- (void)setStoryViewId:(id)arg1;
- (id)getUnlockablesSnapInfo;
- (void)setUnlockablesSnapInfo:(id)arg1;
- (id)getEncGeoData;
- (void)setEncGeoData:(id)arg1;
- (id)getAdsnapPlacementId;
- (void)setAdsnapPlacementId:(id)arg1;
- (id)getEncFilterGeolensId;
- (void)setEncFilterGeolensId:(id)arg1;
- (id)getEncFilterGeofilterId;
- (void)setEncFilterGeofilterId:(id)arg1;
- (id)getPosterId;
- (void)setPosterId:(id)arg1;
- (id)getLensOptionId;
- (void)setLensOptionId:(id)arg1;
- (id)getFilterGeolensId;
- (void)setFilterGeolensId:(id)arg1;
- (id)getFilterGeofilterId;
- (void)setFilterGeofilterId:(id)arg1;
- (id)getFilterSponsor;
- (void)setFilterSponsor:(id)arg1;
- (long long)getFilterInfo;
- (void)setFilterInfo:(long long)arg1;
- (long long)getFilterVisual;
- (void)setFilterVisual:(long long)arg1;
- (long long)getMediaType;
- (void)setMediaType:(long long)arg1;
- (long long)getSource;
- (void)setSource:(long long)arg1;
- (_Bool)getWithAttachment;
- (void)setWithAttachment:(_Bool)arg1;
- (double)getRollMinDegree;
- (void)setRollMinDegree:(double)arg1;
- (double)getRollMaxDegree;
- (void)setRollMaxDegree:(double)arg1;
- (double)getAckTimeSec;
- (void)setAckTimeSec:(double)arg1;
- (double)getViewTimeSec;
- (void)setViewTimeSec:(double)arg1;
- (_Bool)getInitialView;
- (void)setInitialView:(_Bool)arg1;
- (_Bool)getFullView;
- (void)setFullView:(_Bool)arg1;
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
- (long long)getMultiSnapIndex;
- (void)setMultiSnapIndex:(long long)arg1;
- (long long)getMultiSnapCount;
- (void)setMultiSnapCount:(long long)arg1;
- (_Bool)getWithAnimated;
- (void)setWithAnimated:(_Bool)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

