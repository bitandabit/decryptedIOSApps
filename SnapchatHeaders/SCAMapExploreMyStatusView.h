//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCAMapExploreMyStatusView : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *mapSessionId;
    NSNumber *viewCount;
    NSNumber *withMyStatusTap;
    NSString *statusType;
    NSString *statusId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getStatusId;
- (void)setStatusId:(id)arg1;
- (id)getStatusType;
- (void)setStatusType:(id)arg1;
- (_Bool)getWithMyStatusTap;
- (void)setWithMyStatusTap:(_Bool)arg1;
- (long long)getViewCount;
- (void)setViewCount:(long long)arg1;
- (long long)getMapSessionId;
- (void)setMapSessionId:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
