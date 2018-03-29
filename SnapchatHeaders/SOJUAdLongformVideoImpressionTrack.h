//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUAdLongformVideoImpressionTrack-Protocol.h"

@class NSNumber, NSString;

@interface SOJUAdLongformVideoImpressionTrack : NSObject <SOJUAdLongformVideoImpressionTrack>
{
    NSNumber *_topsnapTimeViewedSeconds;
    NSNumber *_longformTimeViewedSeconds;
    NSNumber *_topsnapMediaDurationSeconds;
    NSNumber *_longformMediaDurationSeconds;
    NSNumber *_swiped;
    NSNumber *_renderedTimestampInMilliSeconds;
    NSNumber *_deltaBetweenReceiveAndRenderMillis;
    NSNumber *_swipeCount;
    NSString *_creativeId;
    NSNumber *_topsnapAudioPlaybackVolume;
    NSNumber *_longformAudioPlaybackVolume;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *longformAudioPlaybackVolume; // @synthesize longformAudioPlaybackVolume=_longformAudioPlaybackVolume;
@property(readonly, copy, nonatomic) NSNumber *topsnapAudioPlaybackVolume; // @synthesize topsnapAudioPlaybackVolume=_topsnapAudioPlaybackVolume;
@property(readonly, copy, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
@property(readonly, copy, nonatomic) NSNumber *swipeCount; // @synthesize swipeCount=_swipeCount;
@property(readonly, copy, nonatomic) NSNumber *deltaBetweenReceiveAndRenderMillis; // @synthesize deltaBetweenReceiveAndRenderMillis=_deltaBetweenReceiveAndRenderMillis;
@property(readonly, copy, nonatomic) NSNumber *renderedTimestampInMilliSeconds; // @synthesize renderedTimestampInMilliSeconds=_renderedTimestampInMilliSeconds;
@property(readonly, copy, nonatomic) NSNumber *swiped; // @synthesize swiped=_swiped;
@property(readonly, copy, nonatomic) NSNumber *longformMediaDurationSeconds; // @synthesize longformMediaDurationSeconds=_longformMediaDurationSeconds;
@property(readonly, copy, nonatomic) NSNumber *topsnapMediaDurationSeconds; // @synthesize topsnapMediaDurationSeconds=_topsnapMediaDurationSeconds;
@property(readonly, copy, nonatomic) NSNumber *longformTimeViewedSeconds; // @synthesize longformTimeViewedSeconds=_longformTimeViewedSeconds;
@property(readonly, copy, nonatomic) NSNumber *topsnapTimeViewedSeconds; // @synthesize topsnapTimeViewedSeconds=_topsnapTimeViewedSeconds;
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
- (id)initWithTopsnapTimeViewedSeconds:(id)arg1 longformTimeViewedSeconds:(id)arg2 topsnapMediaDurationSeconds:(id)arg3 longformMediaDurationSeconds:(id)arg4 swiped:(id)arg5 renderedTimestampInMilliSeconds:(id)arg6 deltaBetweenReceiveAndRenderMillis:(id)arg7 swipeCount:(id)arg8 creativeId:(id)arg9 topsnapAudioPlaybackVolume:(id)arg10 longformAudioPlaybackVolume:(id)arg11;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (float)longformAudioPlaybackVolumeValue;
- (float)topsnapAudioPlaybackVolumeValue;
- (int)swipeCountValue;
- (long long)deltaBetweenReceiveAndRenderMillisValue;
- (long long)renderedTimestampInMilliSecondsValue;
- (_Bool)swipedValue;
- (float)longformMediaDurationSecondsValue;
- (float)topsnapMediaDurationSecondsValue;
- (float)longformTimeViewedSecondsValue;
- (float)topsnapTimeViewedSecondsValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

