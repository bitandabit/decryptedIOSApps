//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCADiscoverPublisherSubscriptionBase : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *collectionPos;
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
- (long long)getCollectionPos;
- (void)setCollectionPos:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
