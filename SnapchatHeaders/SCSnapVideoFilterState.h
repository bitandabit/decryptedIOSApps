//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSnapVideoFilterState-Protocol.h"

@class NSArray, NSData, NSString, NSURL, SCCroppingState, SCSnapVideoFilterAudioState, SCSnapVideoFilterMultiSnapSegmentState;

@interface SCSnapVideoFilterState : NSObject <SCSnapVideoFilterState>
{
    _Bool _useOverlayImageAsMask;
    _Bool _highQuality;
    _Bool _audioEnabled;
    _Bool _isLagunaVideo;
    _Bool _videoCircleRenderer;
    _Bool _videoCircleColorBlack;
    _Bool _videoCircleMask;
    unsigned long long _videoTranscodeContext;
    NSString *_uuid;
    NSURL *_videoURL;
    NSData *_overridingAudioData;
    NSString *_filterName;
    long long _overlayImageFileSizeBits;
    NSData *_thumbnailData;
    NSURL *_overlayImageURL;
    NSData *_overlayImagePNGData;
    NSData *_overlayImageForThumbnailPNGData;
    double _videoPlaybackRate;
    double _videoTargetAspectRatio;
    long long _videoTargetOrientation;
    long long _thumbnailOrientation;
    NSArray *_videoTrackedImageStates;
    SCSnapVideoFilterAudioState *_audioState;
    NSArray *_timeRanges;
    SCCroppingState *_croppingState;
    double _croppingAspectRatio;
    SCSnapVideoFilterMultiSnapSegmentState *_multiSnapSegmentState;
    NSData *_snapImagePNGData;
    double _imageDuration;
    long long _frameRate;
    long long _bitrate;
    struct CGSize _videoCirclePadding;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, nonatomic) long long bitrate; // @synthesize bitrate=_bitrate;
@property(readonly, nonatomic) long long frameRate; // @synthesize frameRate=_frameRate;
@property(readonly, nonatomic) double imageDuration; // @synthesize imageDuration=_imageDuration;
@property(readonly, copy, nonatomic) NSData *snapImagePNGData; // @synthesize snapImagePNGData=_snapImagePNGData;
@property(readonly, copy, nonatomic) SCSnapVideoFilterMultiSnapSegmentState *multiSnapSegmentState; // @synthesize multiSnapSegmentState=_multiSnapSegmentState;
@property(readonly, nonatomic) double croppingAspectRatio; // @synthesize croppingAspectRatio=_croppingAspectRatio;
@property(readonly, copy, nonatomic) SCCroppingState *croppingState; // @synthesize croppingState=_croppingState;
@property(readonly, copy, nonatomic) NSArray *timeRanges; // @synthesize timeRanges=_timeRanges;
@property(readonly, nonatomic) _Bool videoCircleMask; // @synthesize videoCircleMask=_videoCircleMask;
@property(readonly, nonatomic) struct CGSize videoCirclePadding; // @synthesize videoCirclePadding=_videoCirclePadding;
@property(readonly, nonatomic) _Bool videoCircleColorBlack; // @synthesize videoCircleColorBlack=_videoCircleColorBlack;
@property(readonly, nonatomic) _Bool videoCircleRenderer; // @synthesize videoCircleRenderer=_videoCircleRenderer;
@property(readonly, copy, nonatomic) SCSnapVideoFilterAudioState *audioState; // @synthesize audioState=_audioState;
@property(readonly, copy, nonatomic) NSArray *videoTrackedImageStates; // @synthesize videoTrackedImageStates=_videoTrackedImageStates;
@property(readonly, nonatomic) long long thumbnailOrientation; // @synthesize thumbnailOrientation=_thumbnailOrientation;
@property(readonly, nonatomic) long long videoTargetOrientation; // @synthesize videoTargetOrientation=_videoTargetOrientation;
@property(readonly, nonatomic) double videoTargetAspectRatio; // @synthesize videoTargetAspectRatio=_videoTargetAspectRatio;
@property(readonly, nonatomic) double videoPlaybackRate; // @synthesize videoPlaybackRate=_videoPlaybackRate;
@property(readonly, nonatomic) _Bool isLagunaVideo; // @synthesize isLagunaVideo=_isLagunaVideo;
@property(readonly, nonatomic) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(readonly, nonatomic) _Bool highQuality; // @synthesize highQuality=_highQuality;
@property(readonly, copy, nonatomic) NSData *overlayImageForThumbnailPNGData; // @synthesize overlayImageForThumbnailPNGData=_overlayImageForThumbnailPNGData;
@property(readonly, copy, nonatomic) NSData *overlayImagePNGData; // @synthesize overlayImagePNGData=_overlayImagePNGData;
@property(readonly, copy, nonatomic) NSURL *overlayImageURL; // @synthesize overlayImageURL=_overlayImageURL;
@property(readonly, copy, nonatomic) NSData *thumbnailData; // @synthesize thumbnailData=_thumbnailData;
@property(readonly, nonatomic) long long overlayImageFileSizeBits; // @synthesize overlayImageFileSizeBits=_overlayImageFileSizeBits;
@property(readonly, copy, nonatomic) NSString *filterName; // @synthesize filterName=_filterName;
@property(readonly, nonatomic) _Bool useOverlayImageAsMask; // @synthesize useOverlayImageAsMask=_useOverlayImageAsMask;
@property(readonly, copy, nonatomic) NSData *overridingAudioData; // @synthesize overridingAudioData=_overridingAudioData;
@property(readonly, copy, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) unsigned long long videoTranscodeContext; // @synthesize videoTranscodeContext=_videoTranscodeContext;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setSize:(struct CGSize)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setFloat64:(double)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt64:(long long)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVideoTranscodeContext:(unsigned long long)arg1 uuid:(id)arg2 videoURL:(id)arg3 overridingAudioData:(id)arg4 useOverlayImageAsMask:(_Bool)arg5 filterName:(id)arg6 overlayImageFileSizeBits:(long long)arg7 thumbnailData:(id)arg8 overlayImageURL:(id)arg9 overlayImagePNGData:(id)arg10 overlayImageForThumbnailPNGData:(id)arg11 highQuality:(_Bool)arg12 audioEnabled:(_Bool)arg13 isLagunaVideo:(_Bool)arg14 videoPlaybackRate:(double)arg15 videoTargetAspectRatio:(double)arg16 videoTargetOrientation:(long long)arg17 thumbnailOrientation:(long long)arg18 videoTrackedImageStates:(id)arg19 audioState:(id)arg20 videoCircleRenderer:(_Bool)arg21 videoCircleColorBlack:(_Bool)arg22 videoCirclePadding:(struct CGSize)arg23 videoCircleMask:(_Bool)arg24 timeRanges:(id)arg25 croppingState:(id)arg26 croppingAspectRatio:(double)arg27 multiSnapSegmentState:(id)arg28 snapImagePNGData:(id)arg29 imageDuration:(double)arg30 frameRate:(long long)arg31 bitrate:(long long)arg32;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

