//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCACallOutgoingReq : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *isAsync;
    NSNumber *ringingTimeSec;
    long long mediaType;
    long long sendSource;
    NSString *filterVenueId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getFilterVenueId;
- (void)setFilterVenueId:(id)arg1;
- (long long)getSendSource;
- (void)setSendSource:(long long)arg1;
- (long long)getMediaType;
- (void)setMediaType:(long long)arg1;
- (double)getRingingTimeSec;
- (void)setRingingTimeSec:(double)arg1;
- (_Bool)getIsAsync;
- (void)setIsAsync:(_Bool)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

