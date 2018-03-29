//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCADiscoverEditionView : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *withSubscription;
    NSNumber *collectionPos;
    NSNumber *viewLocation;
    NSNumber *fullView;
    NSNumber *timeViewed;
    NSNumber *numSnapsViewed;
    NSNumber *numLongformViewed;
    NSNumber *snapIndexCount;
    NSNumber *viewLocationPos;
    NSNumber *autoAdvanceIndex;
    long long readState;
    long long tileSize;
    long long collectionType;
    long long viewSource;
    long long exitEvent;
    long long source;
    long long viewLocationSorting;
    NSString *editionId;
    NSString *editionVersion;
    NSString *publisherId;
    NSString *scanActionId;
    NSString *deepLinkId;
    NSString *collectionId;
    NSString *sortOrderId;
    NSString *trackingId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getTrackingId;
- (void)setTrackingId:(id)arg1;
- (id)getSortOrderId;
- (void)setSortOrderId:(id)arg1;
- (id)getCollectionId;
- (void)setCollectionId:(id)arg1;
- (id)getDeepLinkId;
- (void)setDeepLinkId:(id)arg1;
- (id)getScanActionId;
- (void)setScanActionId:(id)arg1;
- (id)getPublisherId;
- (void)setPublisherId:(id)arg1;
- (id)getEditionVersion;
- (void)setEditionVersion:(id)arg1;
- (id)getEditionId;
- (void)setEditionId:(id)arg1;
- (long long)getViewLocationSorting;
- (void)setViewLocationSorting:(long long)arg1;
- (long long)getSource;
- (void)setSource:(long long)arg1;
- (long long)getExitEvent;
- (void)setExitEvent:(long long)arg1;
- (long long)getViewSource;
- (void)setViewSource:(long long)arg1;
- (long long)getCollectionType;
- (void)setCollectionType:(long long)arg1;
- (long long)getTileSize;
- (void)setTileSize:(long long)arg1;
- (long long)getReadState;
- (void)setReadState:(long long)arg1;
- (long long)getAutoAdvanceIndex;
- (void)setAutoAdvanceIndex:(long long)arg1;
- (long long)getViewLocationPos;
- (void)setViewLocationPos:(long long)arg1;
- (long long)getSnapIndexCount;
- (void)setSnapIndexCount:(long long)arg1;
- (long long)getNumLongformViewed;
- (void)setNumLongformViewed:(long long)arg1;
- (long long)getNumSnapsViewed;
- (void)setNumSnapsViewed:(long long)arg1;
- (double)getTimeViewed;
- (void)setTimeViewed:(double)arg1;
- (_Bool)getFullView;
- (void)setFullView:(_Bool)arg1;
- (long long)getViewLocation;
- (void)setViewLocation:(long long)arg1;
- (long long)getCollectionPos;
- (void)setCollectionPos:(long long)arg1;
- (_Bool)getWithSubscription;
- (void)setWithSubscription:(_Bool)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
