//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUSnapAdsPortalAdSquad-Protocol.h"

@class NSNumber, NSString;

@interface SOJUSnapAdsPortalAdSquad : NSObject <SOJUSnapAdsPortalAdSquad>
{
    NSString *_idValue;
    NSString *_campaignId;
    NSString *_name;
    NSString *_effectiveStatus;
    NSNumber *_startTimestampInMillis;
    NSNumber *_endTimestampInMillis;
    NSNumber *_dailyBudget;
    NSNumber *_bid;
    NSString *_optimizationGoal;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *optimizationGoal; // @synthesize optimizationGoal=_optimizationGoal;
@property(readonly, copy, nonatomic) NSNumber *bid; // @synthesize bid=_bid;
@property(readonly, copy, nonatomic) NSNumber *dailyBudget; // @synthesize dailyBudget=_dailyBudget;
@property(readonly, copy, nonatomic) NSNumber *endTimestampInMillis; // @synthesize endTimestampInMillis=_endTimestampInMillis;
@property(readonly, copy, nonatomic) NSNumber *startTimestampInMillis; // @synthesize startTimestampInMillis=_startTimestampInMillis;
@property(readonly, copy, nonatomic) NSString *effectiveStatus; // @synthesize effectiveStatus=_effectiveStatus;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
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
- (id)initWithIdValue:(id)arg1 campaignId:(id)arg2 name:(id)arg3 effectiveStatus:(id)arg4 startTimestampInMillis:(id)arg5 endTimestampInMillis:(id)arg6 dailyBudget:(id)arg7 bid:(id)arg8 optimizationGoal:(id)arg9;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)optimizationGoalEnum;
- (double)bidValue;
- (double)dailyBudgetValue;
- (long long)endTimestampInMillisValue;
- (long long)startTimestampInMillisValue;
- (long long)effectiveStatusEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

