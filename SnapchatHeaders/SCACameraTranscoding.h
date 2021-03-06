//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString, SCACreativeTools, SCASegmentTimingData;

@interface SCACameraTranscoding : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *gaussianBlurLevel;
    NSNumber *qualityScore;
    NSNumber *retryCount;
    NSNumber *latencyMillis;
    long long transcodingContext;
    long long mediaSource;
    long long mediaDestination;
    long long lowLightStatus;
    long long retryContext;
    long long transcodingStatus;
    NSString *captureSessionId;
    NSString *snapSessionId;
    NSString *transcodingTaskId;
    NSString *inputMediaMetaData;
    NSString *outputMediaMetadata;
    NSString *camera;
    NSString *errorMessage;
    NSString *transcodingLibraryVersion;
    NSString *transcodingTweaks;
    NSString *analycticsVersion;
    NSString *splits;
    SCACreativeTools *creativeTools;
    SCASegmentTimingData *segmentTimingData;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getSegmentTimingData;
- (void)setSegmentTimingData:(id)arg1;
- (id)getCreativeTools;
- (void)setCreativeTools:(id)arg1;
- (id)getSplits;
- (void)setSplits:(id)arg1;
- (id)getAnalycticsVersion;
- (void)setAnalycticsVersion:(id)arg1;
- (id)getTranscodingTweaks;
- (void)setTranscodingTweaks:(id)arg1;
- (id)getTranscodingLibraryVersion;
- (void)setTranscodingLibraryVersion:(id)arg1;
- (id)getErrorMessage;
- (void)setErrorMessage:(id)arg1;
- (id)getCamera;
- (void)setCamera:(id)arg1;
- (id)getOutputMediaMetadata;
- (void)setOutputMediaMetadata:(id)arg1;
- (id)getInputMediaMetaData;
- (void)setInputMediaMetaData:(id)arg1;
- (id)getTranscodingTaskId;
- (void)setTranscodingTaskId:(id)arg1;
- (id)getSnapSessionId;
- (void)setSnapSessionId:(id)arg1;
- (id)getCaptureSessionId;
- (void)setCaptureSessionId:(id)arg1;
- (long long)getTranscodingStatus;
- (void)setTranscodingStatus:(long long)arg1;
- (long long)getRetryContext;
- (void)setRetryContext:(long long)arg1;
- (long long)getLowLightStatus;
- (void)setLowLightStatus:(long long)arg1;
- (long long)getMediaDestination;
- (void)setMediaDestination:(long long)arg1;
- (long long)getMediaSource;
- (void)setMediaSource:(long long)arg1;
- (long long)getTranscodingContext;
- (void)setTranscodingContext:(long long)arg1;
- (long long)getLatencyMillis;
- (void)setLatencyMillis:(long long)arg1;
- (long long)getRetryCount;
- (void)setRetryCount:(long long)arg1;
- (double)getQualityScore;
- (void)setQualityScore:(double)arg1;
- (long long)getGaussianBlurLevel;
- (void)setGaussianBlurLevel:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

