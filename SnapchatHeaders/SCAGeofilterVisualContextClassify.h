//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserNotTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCAGeofilterVisualContextClassify : SCAUserNotTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *classificationTimeSec;
    NSString *classificationResults;
    NSString *snapSessionId;
    NSString *modelId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getModelId;
- (void)setModelId:(id)arg1;
- (id)getSnapSessionId;
- (void)setSnapSessionId:(id)arg1;
- (id)getClassificationResults;
- (void)setClassificationResults:(id)arg1;
- (double)getClassificationTimeSec;
- (void)setClassificationTimeSec:(double)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

