//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDate, NSNumber, NSString;

@interface SCASwipeBase : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *viewTimeSec;
    NSNumber *filterIndexPos;
    NSNumber *filterIndexCount;
    NSNumber *filterCount;
    NSNumber *filterScore;
    NSNumber *swipeSequenceCount;
    NSNumber *locationAccuracyMeters;
    long long source;
    long long eligibilityType;
    NSString *swipeGeocell;
    NSDate *filterRenderTs;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getFilterRenderTs;
- (void)setFilterRenderTs:(id)arg1;
- (id)getSwipeGeocell;
- (void)setSwipeGeocell:(id)arg1;
- (long long)getEligibilityType;
- (void)setEligibilityType:(long long)arg1;
- (long long)getSource;
- (void)setSource:(long long)arg1;
- (long long)getLocationAccuracyMeters;
- (void)setLocationAccuracyMeters:(long long)arg1;
- (long long)getSwipeSequenceCount;
- (void)setSwipeSequenceCount:(long long)arg1;
- (double)getFilterScore;
- (void)setFilterScore:(double)arg1;
- (long long)getFilterCount;
- (void)setFilterCount:(long long)arg1;
- (long long)getFilterIndexCount;
- (void)setFilterIndexCount:(long long)arg1;
- (long long)getFilterIndexPos;
- (void)setFilterIndexPos:(long long)arg1;
- (double)getViewTimeSec;
- (void)setViewTimeSec:(double)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

