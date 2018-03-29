//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber;

@interface SCAMapExploreClose : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *mapSessionId;
    NSNumber *statusViewCount;
    NSNumber *statusAvailableCount;
    NSNumber *viewTimeSec;
    long long exitEvent;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (long long)getExitEvent;
- (void)setExitEvent:(long long)arg1;
- (double)getViewTimeSec;
- (void)setViewTimeSec:(double)arg1;
- (long long)getStatusAvailableCount;
- (void)setStatusAvailableCount:(long long)arg1;
- (long long)getStatusViewCount;
- (void)setStatusViewCount:(long long)arg1;
- (long long)getMapSessionId;
- (void)setMapSessionId:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
