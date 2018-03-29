//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCADiscoverSnapSaveBase : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *snapIndexCount;
    NSNumber *snapIndexPos;
    NSNumber *timeViewed;
    NSNumber *caption;
    NSNumber *drawing;
    NSNumber *sizeByte;
    NSNumber *snapTimeSec;
    NSNumber *collectionPos;
    long long filterInfo;
    long long filterVisual;
    long long mediaType;
    long long source;
    long long collectionType;
    NSString *publisherId;
    NSString *editionId;
    NSString *trackingId;
    NSString *dsnapId;
    NSString *collectionId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getCollectionId;
- (void)setCollectionId:(id)arg1;
- (id)getDsnapId;
- (void)setDsnapId:(id)arg1;
- (id)getTrackingId;
- (void)setTrackingId:(id)arg1;
- (id)getEditionId;
- (void)setEditionId:(id)arg1;
- (id)getPublisherId;
- (void)setPublisherId:(id)arg1;
- (long long)getCollectionType;
- (void)setCollectionType:(long long)arg1;
- (long long)getSource;
- (void)setSource:(long long)arg1;
- (long long)getMediaType;
- (void)setMediaType:(long long)arg1;
- (long long)getFilterVisual;
- (void)setFilterVisual:(long long)arg1;
- (long long)getFilterInfo;
- (void)setFilterInfo:(long long)arg1;
- (long long)getCollectionPos;
- (void)setCollectionPos:(long long)arg1;
- (double)getSnapTimeSec;
- (void)setSnapTimeSec:(double)arg1;
- (long long)getSizeByte;
- (void)setSizeByte:(long long)arg1;
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

