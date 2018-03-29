//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber;

@interface SCAMapUserView : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *mapSessionId;
    NSNumber *targetCount;
    NSNumber *mapFriendCount;
    NSNumber *viewportFriendCount;
    NSNumber *distanceFromUserMeter;
    long long source;
    long long action;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (long long)getAction;
- (void)setAction:(long long)arg1;
- (long long)getSource;
- (void)setSource:(long long)arg1;
- (double)getDistanceFromUserMeter;
- (void)setDistanceFromUserMeter:(double)arg1;
- (long long)getViewportFriendCount;
- (void)setViewportFriendCount:(long long)arg1;
- (long long)getMapFriendCount;
- (void)setMapFriendCount:(long long)arg1;
- (long long)getTargetCount;
- (void)setTargetCount:(long long)arg1;
- (long long)getMapSessionId;
- (void)setMapSessionId:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

