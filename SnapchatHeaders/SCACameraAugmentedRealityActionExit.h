//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber;

@interface SCACameraAugmentedRealityActionExit : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *loadRequestCount;
    NSNumber *loadCount;
    NSNumber *presentCount;
    NSNumber *consumeCount;
    NSNumber *scanTimeSec;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (double)getScanTimeSec;
- (void)setScanTimeSec:(double)arg1;
- (long long)getConsumeCount;
- (void)setConsumeCount:(long long)arg1;
- (long long)getPresentCount;
- (void)setPresentCount:(long long)arg1;
- (long long)getLoadCount;
- (void)setLoadCount:(long long)arg1;
- (long long)getLoadRequestCount;
- (void)setLoadRequestCount:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

