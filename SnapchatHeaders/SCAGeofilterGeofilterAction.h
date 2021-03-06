//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCAGeofilterGeofilterAction : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *actionSequenceCount;
    NSNumber *actionIndex;
    NSNumber *viewTimeSec;
    NSNumber *withGeofilterTransition;
    long long actionType;
    long long geofilterGeofilterType;
    NSString *filterVenueId;
    NSString *filterGeofenceId;
    NSString *filterGeofilterId;
    NSString *geocell;
    NSString *snapSessionId;
    NSString *encGeoData;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getEncGeoData;
- (void)setEncGeoData:(id)arg1;
- (id)getSnapSessionId;
- (void)setSnapSessionId:(id)arg1;
- (id)getGeocell;
- (void)setGeocell:(id)arg1;
- (id)getFilterGeofilterId;
- (void)setFilterGeofilterId:(id)arg1;
- (id)getFilterGeofenceId;
- (void)setFilterGeofenceId:(id)arg1;
- (id)getFilterVenueId;
- (void)setFilterVenueId:(id)arg1;
- (long long)getGeofilterGeofilterType;
- (void)setGeofilterGeofilterType:(long long)arg1;
- (long long)getActionType;
- (void)setActionType:(long long)arg1;
- (_Bool)getWithGeofilterTransition;
- (void)setWithGeofilterTransition:(_Bool)arg1;
- (long long)getViewTimeSec;
- (void)setViewTimeSec:(long long)arg1;
- (long long)getActionIndex;
- (void)setActionIndex:(long long)arg1;
- (long long)getActionSequenceCount;
- (void)setActionSequenceCount:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

