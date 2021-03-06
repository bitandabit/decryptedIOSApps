//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUAdFilterImpressionTrack-Protocol.h"

@class NSNumber, NSString;

@interface SOJUAdFilterImpressionTrack : NSObject <SOJUAdFilterImpressionTrack>
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

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *rankingData; // @synthesize rankingData=_rankingData;
@property(readonly, copy, nonatomic) NSString *rankingId; // @synthesize rankingId=_rankingId;
@property(readonly, copy, nonatomic) NSString *encryptedSponsoredUnlockableTargetingInfoData; // @synthesize encryptedSponsoredUnlockableTargetingInfoData=_encryptedSponsoredUnlockableTargetingInfoData;
@property(readonly, copy, nonatomic) NSNumber *firstSeenTimestamp; // @synthesize firstSeenTimestamp=_firstSeenTimestamp;
@property(readonly, copy, nonatomic) NSNumber *filterGeofilterIndexPos; // @synthesize filterGeofilterIndexPos=_filterGeofilterIndexPos;
@property(readonly, copy, nonatomic) NSString *rawAdData; // @synthesize rawAdData=_rawAdData;
@property(readonly, copy, nonatomic) NSString *geofilterType; // @synthesize geofilterType=_geofilterType;
@property(readonly, copy, nonatomic) NSNumber *filterIndexPos; // @synthesize filterIndexPos=_filterIndexPos;
@property(readonly, copy, nonatomic) NSNumber *withMemoriesSave; // @synthesize withMemoriesSave=_withMemoriesSave;
@property(readonly, copy, nonatomic) NSNumber *withStoryPost; // @synthesize withStoryPost=_withStoryPost;
@property(readonly, copy, nonatomic) NSNumber *withSnapSend; // @synthesize withSnapSend=_withSnapSend;
@property(readonly, copy, nonatomic) NSNumber *swipedOverCount; // @synthesize swipedOverCount=_swipedOverCount;
@property(readonly, copy, nonatomic) NSString *encGeoData; // @synthesize encGeoData=_encGeoData;
@property(readonly, copy, nonatomic) NSNumber *totalSwipedViewMillis; // @synthesize totalSwipedViewMillis=_totalSwipedViewMillis;
@property(readonly, copy, nonatomic) NSString *geofilterId; // @synthesize geofilterId=_geofilterId;
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
- (id)initWithGeofilterId:(id)arg1 totalSwipedViewMillis:(id)arg2 encGeoData:(id)arg3 swipedOverCount:(id)arg4 withSnapSend:(id)arg5 withStoryPost:(id)arg6 withMemoriesSave:(id)arg7 filterIndexPos:(id)arg8 geofilterType:(id)arg9 rawAdData:(id)arg10 filterGeofilterIndexPos:(id)arg11 firstSeenTimestamp:(id)arg12 encryptedSponsoredUnlockableTargetingInfoData:(id)arg13 rankingId:(id)arg14 rankingData:(id)arg15;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)firstSeenTimestampValue;
- (long long)filterGeofilterIndexPosValue;
- (long long)geofilterTypeEnum;
- (long long)filterIndexPosValue;
- (_Bool)withMemoriesSaveValue;
- (_Bool)withStoryPostValue;
- (_Bool)withSnapSendValue;
- (long long)swipedOverCountValue;
- (long long)totalSwipedViewMillisValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

