//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCAStoryAdOpportunity : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *adIndexPos;
    NSNumber *viewLocation;
    long long storyType;
    long long viewSource;
    NSString *posterId;
    NSString *geoFence;
    NSString *adUnitId;
    NSString *userAdId;
    NSString *ghost_poster_id;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getGhost_poster_id;
- (void)setGhost_poster_id:(id)arg1;
- (id)getUserAdId;
- (void)setUserAdId:(id)arg1;
- (id)getAdUnitId;
- (void)setAdUnitId:(id)arg1;
- (id)getGeoFence;
- (void)setGeoFence:(id)arg1;
- (id)getPosterId;
- (void)setPosterId:(id)arg1;
- (long long)getViewSource;
- (void)setViewSource:(long long)arg1;
- (long long)getStoryType;
- (void)setStoryType:(long long)arg1;
- (long long)getViewLocation;
- (void)setViewLocation:(long long)arg1;
- (long long)getAdIndexPos;
- (void)setAdIndexPos:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

