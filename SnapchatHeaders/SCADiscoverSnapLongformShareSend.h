//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCADiscoverSnapShareBase.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCADiscoverSnapLongformShareSend : SCADiscoverSnapShareBase <MapSerializable, NSCopying>
{
    NSNumber *caption;
    NSNumber *drawing;
    NSNumber *recipientCount;
    NSNumber *snapTimeSec;
    long long longformType;
    long long entryEvent;
    long long filterVisual;
    long long filterInfo;
    NSString *trackingId;
    NSString *filter;
    NSString *filterType;
    NSString *filterGeofence;
    NSString *filterSponsor;
    NSString *videoPartnerId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getVideoPartnerId;
- (void)setVideoPartnerId:(id)arg1;
- (id)getFilterSponsor;
- (void)setFilterSponsor:(id)arg1;
- (id)getFilterGeofence;
- (void)setFilterGeofence:(id)arg1;
- (id)getFilterType;
- (void)setFilterType:(id)arg1;
- (id)getFilter;
- (void)setFilter:(id)arg1;
- (id)getTrackingId;
- (void)setTrackingId:(id)arg1;
- (long long)getFilterInfo;
- (void)setFilterInfo:(long long)arg1;
- (long long)getFilterVisual;
- (void)setFilterVisual:(long long)arg1;
- (long long)getEntryEvent;
- (void)setEntryEvent:(long long)arg1;
- (long long)getLongformType;
- (void)setLongformType:(long long)arg1;
- (double)getSnapTimeSec;
- (void)setSnapTimeSec:(double)arg1;
- (long long)getRecipientCount;
- (void)setRecipientCount:(long long)arg1;
- (_Bool)getDrawing;
- (void)setDrawing:(_Bool)arg1;
- (long long)getCaption;
- (void)setCaption:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
