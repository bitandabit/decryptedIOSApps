//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUSnapAdsPortalMetricsResponse-Protocol.h"

@class NSArray, NSString, SOJUSnapAdsPortalStats;

@interface SOJUSnapAdsPortalMetricsResponse : NSObject <SOJUSnapAdsPortalMetricsResponse>
{
    NSString *_idValue;
    NSString *_startTime;
    NSString *_endTime;
    NSArray *_timeseries;
    NSString *_adsApiMetricsFinalizedTime;
    NSArray *_weeklyTimeseries;
    SOJUSnapAdsPortalStats *_lifeTimeStats;
    NSArray *_monthlyTimeseries;
    NSArray *_breakdownMetrics;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSArray *breakdownMetrics; // @synthesize breakdownMetrics=_breakdownMetrics;
@property(readonly, copy, nonatomic) NSArray *monthlyTimeseries; // @synthesize monthlyTimeseries=_monthlyTimeseries;
@property(readonly, copy, nonatomic) SOJUSnapAdsPortalStats *lifeTimeStats; // @synthesize lifeTimeStats=_lifeTimeStats;
@property(readonly, copy, nonatomic) NSArray *weeklyTimeseries; // @synthesize weeklyTimeseries=_weeklyTimeseries;
@property(readonly, copy, nonatomic) NSString *adsApiMetricsFinalizedTime; // @synthesize adsApiMetricsFinalizedTime=_adsApiMetricsFinalizedTime;
@property(readonly, copy, nonatomic) NSArray *timeseries; // @synthesize timeseries=_timeseries;
@property(readonly, copy, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(readonly, copy, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdValue:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 timeseries:(id)arg4 adsApiMetricsFinalizedTime:(id)arg5 weeklyTimeseries:(id)arg6 lifeTimeStats:(id)arg7 monthlyTimeseries:(id)arg8 breakdownMetrics:(id)arg9;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
