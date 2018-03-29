//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface SOJUAdFilterImpressionTrackBuilder : NSObject
{
    NSString *_geofilterId;
    NSNumber *_totalSwipedViewMillis;
    NSString *_encGeoData;
    NSNumber *_swipedOverCount;
    NSNumber *_withSnapSend;
    NSNumber *_withStoryPost;
    NSNumber *_withMemoriesSave;
    NSNumber *_filterIndexPos;
    NSString *_geofilterType;
    NSString *_rawAdData;
    NSNumber *_filterGeofilterIndexPos;
    NSNumber *_firstSeenTimestamp;
    NSString *_encryptedSponsoredUnlockableTargetingInfoData;
    NSString *_rankingId;
    NSString *_rankingData;
}

+ (id)withJUAdFilterImpressionTrack:(id)arg1;
- (void).cxx_destruct;
- (id)setRankingData:(id)arg1;
- (id)setRankingId:(id)arg1;
- (id)setEncryptedSponsoredUnlockableTargetingInfoData:(id)arg1;
- (id)setFirstSeenTimestamp:(id)arg1;
- (id)setFilterGeofilterIndexPos:(id)arg1;
- (id)setRawAdData:(id)arg1;
- (id)setGeofilterType:(id)arg1;
- (id)setFilterIndexPos:(id)arg1;
- (id)setWithMemoriesSave:(id)arg1;
- (id)setWithStoryPost:(id)arg1;
- (id)setWithSnapSend:(id)arg1;
- (id)setSwipedOverCount:(id)arg1;
- (id)setEncGeoData:(id)arg1;
- (id)setTotalSwipedViewMillis:(id)arg1;
- (id)setGeofilterId:(id)arg1;
- (id)build;
- (id)setFirstSeenTimestampValue:(long long)arg1;
- (id)setFilterGeofilterIndexPosValue:(long long)arg1;
- (id)setGeofilterTypeEnum:(long long)arg1;
- (id)setFilterIndexPosValue:(long long)arg1;
- (id)setWithMemoriesSaveValue:(_Bool)arg1;
- (id)setWithStoryPostValue:(_Bool)arg1;
- (id)setWithSnapSendValue:(_Bool)arg1;
- (id)setSwipedOverCountValue:(long long)arg1;
- (id)setTotalSwipedViewMillisValue:(long long)arg1;

@end
