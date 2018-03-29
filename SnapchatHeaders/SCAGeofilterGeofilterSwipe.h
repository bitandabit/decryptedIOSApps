//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAFilterSwipeBase.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDate, NSNumber, NSString;

@interface SCAGeofilterGeofilterSwipe : SCAFilterSwipeBase <MapSerializable, NSCopying>
{
    NSNumber *updateAttemptCount;
    NSNumber *isGeofilterFromPrecache;
    NSNumber *cachedTimeSec;
    NSNumber *isCached;
    NSNumber *venueTapIndex;
    NSNumber *withGeofilterTransition;
    NSNumber *withGeolocation;
    long long mediaType;
    long long precacheStatus;
    long long geofilterGeofilterType;
    long long filterSource;
    NSString *filterGeofilterId;
    NSString *snapSessionId;
    NSString *adsnapPlacementId;
    NSString *encGeoData;
    NSString *venueFilterArray;
    NSString *filterVenueId;
    NSString *dynamicContextSourceList;
    NSString *widgetValueList;
    NSDate *cachedDate;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getCachedDate;
- (void)setCachedDate:(id)arg1;
- (id)getWidgetValueList;
- (void)setWidgetValueList:(id)arg1;
- (id)getDynamicContextSourceList;
- (void)setDynamicContextSourceList:(id)arg1;
- (id)getFilterVenueId;
- (void)setFilterVenueId:(id)arg1;
- (id)getVenueFilterArray;
- (void)setVenueFilterArray:(id)arg1;
- (id)getEncGeoData;
- (void)setEncGeoData:(id)arg1;
- (id)getAdsnapPlacementId;
- (void)setAdsnapPlacementId:(id)arg1;
- (id)getSnapSessionId;
- (void)setSnapSessionId:(id)arg1;
- (id)getFilterGeofilterId;
- (void)setFilterGeofilterId:(id)arg1;
- (long long)getFilterSource;
- (void)setFilterSource:(long long)arg1;
- (long long)getGeofilterGeofilterType;
- (void)setGeofilterGeofilterType:(long long)arg1;
- (long long)getPrecacheStatus;
- (void)setPrecacheStatus:(long long)arg1;
- (long long)getMediaType;
- (void)setMediaType:(long long)arg1;
- (_Bool)getWithGeolocation;
- (void)setWithGeolocation:(_Bool)arg1;
- (_Bool)getWithGeofilterTransition;
- (void)setWithGeofilterTransition:(_Bool)arg1;
- (long long)getVenueTapIndex;
- (void)setVenueTapIndex:(long long)arg1;
- (_Bool)getIsCached;
- (void)setIsCached:(_Bool)arg1;
- (double)getCachedTimeSec;
- (void)setCachedTimeSec:(double)arg1;
- (_Bool)getIsGeofilterFromPrecache;
- (void)setIsGeofilterFromPrecache:(_Bool)arg1;
- (long long)getUpdateAttemptCount;
- (void)setUpdateAttemptCount:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
