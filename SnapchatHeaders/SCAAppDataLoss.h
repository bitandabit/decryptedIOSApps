//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDate, NSNumber;

@interface SCAAppDataLoss : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *rejectedEventCount;
    NSNumber *overflowedEventCount;
    NSNumber *overflowedCriticalEventCount;
    NSNumber *overflowedP0EventCount;
    NSDate *firstFailureTs;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getFirstFailureTs;
- (void)setFirstFailureTs:(id)arg1;
- (long long)getOverflowedP0EventCount;
- (void)setOverflowedP0EventCount:(long long)arg1;
- (long long)getOverflowedCriticalEventCount;
- (void)setOverflowedCriticalEventCount:(long long)arg1;
- (long long)getOverflowedEventCount;
- (void)setOverflowedEventCount:(long long)arg1;
- (long long)getRejectedEventCount;
- (void)setRejectedEventCount:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

