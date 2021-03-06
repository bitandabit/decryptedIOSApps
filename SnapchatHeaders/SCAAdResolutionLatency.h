//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCAAdResolutionLatency : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *latency;
    long long adServerType;
    NSString *adId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getAdId;
- (void)setAdId:(id)arg1;
- (long long)getAdServerType;
- (void)setAdServerType:(long long)arg1;
- (long long)getLatency;
- (void)setLatency:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

