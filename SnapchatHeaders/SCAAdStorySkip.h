//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCAAdStorySkip : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *autoAdvanceIndex;
    NSNumber *storySessionId;
    long long adProductSourceType;
    long long storyType;
    NSString *adUnitId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getAdUnitId;
- (void)setAdUnitId:(id)arg1;
- (long long)getStoryType;
- (void)setStoryType:(long long)arg1;
- (long long)getAdProductSourceType;
- (void)setAdProductSourceType:(long long)arg1;
- (long long)getStorySessionId;
- (void)setStorySessionId:(long long)arg1;
- (long long)getAutoAdvanceIndex;
- (void)setAutoAdvanceIndex:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

