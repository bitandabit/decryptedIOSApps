//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAAdsBase.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCABlizzardAdRequest : SCAAdsBase <MapSerializable, NSCopying>
{
    NSNumber *timeSpentGauntlet;
    NSNumber *timeSpentAuction;
    NSNumber *timeSpentValueModel;
    NSNumber *timeSpentScoring;
    NSNumber *btClustersRead;
    NSNumber *btClustersWritten;
    NSNumber *utcOffsetSeconds;
    NSString *targetingParameters;
    NSString *snapAudienceMatch;
    NSString *features;
    NSString *abTestInfo;
    NSString *chosenAdInfo;
    NSString *auctionData;
    NSString *auctionPricingData;
    NSString *experimentContext;
    NSString *labelsOfChosenAd;
    NSString *servedButNotTrackedLabels;
    NSString *adType;
    NSString *encryptedLocationData;
    NSString *timezone;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getTimezone;
- (void)setTimezone:(id)arg1;
- (id)getEncryptedLocationData;
- (void)setEncryptedLocationData:(id)arg1;
- (id)getAdType;
- (void)setAdType:(id)arg1;
- (id)getServedButNotTrackedLabels;
- (void)setServedButNotTrackedLabels:(id)arg1;
- (id)getLabelsOfChosenAd;
- (void)setLabelsOfChosenAd:(id)arg1;
- (id)getExperimentContext;
- (void)setExperimentContext:(id)arg1;
- (id)getAuctionPricingData;
- (void)setAuctionPricingData:(id)arg1;
- (id)getAuctionData;
- (void)setAuctionData:(id)arg1;
- (id)getChosenAdInfo;
- (void)setChosenAdInfo:(id)arg1;
- (id)getAbTestInfo;
- (void)setAbTestInfo:(id)arg1;
- (id)getFeatures;
- (void)setFeatures:(id)arg1;
- (id)getSnapAudienceMatch;
- (void)setSnapAudienceMatch:(id)arg1;
- (id)getTargetingParameters;
- (void)setTargetingParameters:(id)arg1;
- (long long)getUtcOffsetSeconds;
- (void)setUtcOffsetSeconds:(long long)arg1;
- (long long)getBtClustersWritten;
- (void)setBtClustersWritten:(long long)arg1;
- (long long)getBtClustersRead;
- (void)setBtClustersRead:(long long)arg1;
- (long long)getTimeSpentScoring;
- (void)setTimeSpentScoring:(long long)arg1;
- (long long)getTimeSpentValueModel;
- (void)setTimeSpentValueModel:(long long)arg1;
- (long long)getTimeSpentAuction;
- (void)setTimeSpentAuction:(long long)arg1;
- (long long)getTimeSpentGauntlet;
- (void)setTimeSpentGauntlet:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
