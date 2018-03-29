//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUAdSubscribeImpressionTrack-Protocol.h"

@class NSNumber, NSString;

@interface SOJUAdSubscribeImpressionTrack : NSObject <SOJUAdSubscribeImpressionTrack>
{
    NSNumber *_topsnapTimeViewedSeconds;
    NSNumber *_topsnapMediaDurationSeconds;
    NSNumber *_longformTimeViewedSeconds;
    NSNumber *_swiped;
    NSNumber *_renderedTimestampInMilliSeconds;
    NSNumber *_deltaBetweenReceiveAndRenderMillis;
    NSNumber *_channelSubscribedEndStatus;
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
@property(readonly, copy, nonatomic) NSNumber *channelSubscribedEndStatus; // @synthesize channelSubscribedEndStatus=_channelSubscribedEndStatus;
@property(readonly, copy, nonatomic) NSNumber *deltaBetweenReceiveAndRenderMillis; // @synthesize deltaBetweenReceiveAndRenderMillis=_deltaBetweenReceiveAndRenderMillis;
@property(readonly, copy, nonatomic) NSNumber *renderedTimestampInMilliSeconds; // @synthesize renderedTimestampInMilliSeconds=_renderedTimestampInMilliSeconds;
@property(readonly, copy, nonatomic) NSNumber *swiped; // @synthesize swiped=_swiped;
@property(readonly, copy, nonatomic) NSNumber *longformTimeViewedSeconds; // @synthesize longformTimeViewedSeconds=_longformTimeViewedSeconds;
@property(readonly, copy, nonatomic) NSNumber *topsnapMediaDurationSeconds; // @synthesize topsnapMediaDurationSeconds=_topsnapMediaDurationSeconds;
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
- (id)initWithTopsnapTimeViewedSeconds:(id)arg1 topsnapMediaDurationSeconds:(id)arg2 longformTimeViewedSeconds:(id)arg3 swiped:(id)arg4 renderedTimestampInMilliSeconds:(id)arg5 deltaBetweenReceiveAndRenderMillis:(id)arg6 channelSubscribedEndStatus:(id)arg7 swipeCount:(id)arg8 creativeId:(id)arg9 topsnapAudioPlaybackVolume:(id)arg10 longformAudioPlaybackVolume:(id)arg11;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (float)longformAudioPlaybackVolumeValue;
- (float)topsnapAudioPlaybackVolumeValue;
- (int)swipeCountValue;
- (_Bool)channelSubscribedEndStatusValue;
- (long long)deltaBetweenReceiveAndRenderMillisValue;
- (long long)renderedTimestampInMilliSecondsValue;
- (_Bool)swipedValue;
- (float)longformTimeViewedSecondsValue;
- (float)topsnapMediaDurationSecondsValue;
- (float)topsnapTimeViewedSecondsValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

