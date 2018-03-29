//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCADiscoverAdLongformShareSend : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *snapIndexCount;
    NSNumber *snapIndexPos;
    NSNumber *timeViewed;
    NSNumber *caption;
    NSNumber *drawing;
    NSNumber *recipientCount;
    NSNumber *adIndexCount;
    NSNumber *adIndexPos;
    NSNumber *snapTimeSec;
    long long entryEvent;
    long long mediaType;
    long long longformType;
    long long source;
    long long filterVisual;
    long long filterInfo;
    NSString *editionId;
    NSString *publisherId;
    NSString *filter;
    NSString *filterType;
    NSString *adsnapId;
    NSString *adRequestClientId;
    NSString *adId;
    NSString *filterGeofence;
    NSString *filterSponsor;
    NSString *adsnapPlacementId;
    NSString *adsnapLineItemId;
    NSString *videoPartnerId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getVideoPartnerId;
- (void)setVideoPartnerId:(id)arg1;
- (id)getAdsnapLineItemId;
- (void)setAdsnapLineItemId:(id)arg1;
- (id)getAdsnapPlacementId;
- (void)setAdsnapPlacementId:(id)arg1;
- (id)getFilterSponsor;
- (void)setFilterSponsor:(id)arg1;
- (id)getFilterGeofence;
- (void)setFilterGeofence:(id)arg1;
- (id)getAdId;
- (void)setAdId:(id)arg1;
- (id)getAdRequestClientId;
- (void)setAdRequestClientId:(id)arg1;
- (id)getAdsnapId;
- (void)setAdsnapId:(id)arg1;
- (id)getFilterType;
- (void)setFilterType:(id)arg1;
- (id)getFilter;
- (void)setFilter:(id)arg1;
- (id)getPublisherId;
- (void)setPublisherId:(id)arg1;
- (id)getEditionId;
- (void)setEditionId:(id)arg1;
- (long long)getFilterInfo;
- (void)setFilterInfo:(long long)arg1;
- (long long)getFilterVisual;
- (void)setFilterVisual:(long long)arg1;
- (long long)getSource;
- (void)setSource:(long long)arg1;
- (long long)getLongformType;
- (void)setLongformType:(long long)arg1;
- (long long)getMediaType;
- (void)setMediaType:(long long)arg1;
- (long long)getEntryEvent;
- (void)setEntryEvent:(long long)arg1;
- (double)getSnapTimeSec;
- (void)setSnapTimeSec:(double)arg1;
- (long long)getAdIndexPos;
- (void)setAdIndexPos:(long long)arg1;
- (long long)getAdIndexCount;
- (void)setAdIndexCount:(long long)arg1;
- (long long)getRecipientCount;
- (void)setRecipientCount:(long long)arg1;
- (_Bool)getDrawing;
- (void)setDrawing:(_Bool)arg1;
- (long long)getCaption;
- (void)setCaption:(long long)arg1;
- (double)getTimeViewed;
- (void)setTimeViewed:(double)arg1;
- (long long)getSnapIndexPos;
- (void)setSnapIndexPos:(long long)arg1;
- (long long)getSnapIndexCount;
- (void)setSnapIndexCount:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

