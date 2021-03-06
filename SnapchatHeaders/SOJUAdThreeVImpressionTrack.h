//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUAdThreeVImpressionTrack-Protocol.h"

@class NSNumber, NSString;

@interface SOJUAdThreeVImpressionTrack : NSObject <SOJUAdThreeVImpressionTrack>
{
    NSNumber *_topsnapTimeViewedSeconds;
    NSNumber *_topsnapMediaDurationSeconds;
    NSNumber *_renderedTimestampInMilliSeconds;
    NSNumber *_deltaBetweenReceiveAndRenderMillis;
    NSString *_creativeId;
    NSNumber *_topsnapAudioPlaybackVolume;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *topsnapAudioPlaybackVolume; // @synthesize topsnapAudioPlaybackVolume=_topsnapAudioPlaybackVolume;
@property(readonly, copy, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
@property(readonly, copy, nonatomic) NSNumber *deltaBetweenReceiveAndRenderMillis; // @synthesize deltaBetweenReceiveAndRenderMillis=_deltaBetweenReceiveAndRenderMillis;
@property(readonly, copy, nonatomic) NSNumber *renderedTimestampInMilliSeconds; // @synthesize renderedTimestampInMilliSeconds=_renderedTimestampInMilliSeconds;
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
- (id)initWithTopsnapTimeViewedSeconds:(id)arg1 topsnapMediaDurationSeconds:(id)arg2 renderedTimestampInMilliSeconds:(id)arg3 deltaBetweenReceiveAndRenderMillis:(id)arg4 creativeId:(id)arg5 topsnapAudioPlaybackVolume:(id)arg6;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (float)topsnapAudioPlaybackVolumeValue;
- (long long)deltaBetweenReceiveAndRenderMillisValue;
- (long long)renderedTimestampInMilliSecondsValue;
- (float)topsnapMediaDurationSecondsValue;
- (float)topsnapTimeViewedSecondsValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

