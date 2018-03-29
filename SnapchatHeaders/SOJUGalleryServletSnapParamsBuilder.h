//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString, SOJUCoordinate, SOJUGalleryMultiSnapSegment, SOJUGallerySnapSource, SOJUStoryFrame;

@interface SOJUGalleryServletSnapParamsBuilder : NSObject
{
    NSString *_snapId;
    NSString *_sojuCopyFromSnapId;
    NSString *_mediaId;
    NSString *_encryption;
    NSString *_mediaMd5hash;
    NSString *_mediaPhotoDnaHash;
    NSNumber *_mediaType;
    NSString *_overlay;
    NSString *_overlayImageMd5hash;
    NSString *_thumbnailMd5hash;
    NSNumber *_createTime;
    NSNumber *_orientation;
    NSNumber *_overlayOrientation;
    SOJUCoordinate *_location;
    NSString *_timeZone;
    NSNumber *_temperature;
    NSNumber *_speed;
    NSNumber *_battery;
    NSNumber *_width;
    NSNumber *_height;
    NSNumber *_duration;
    NSNumber *_size;
    NSNumber *_backlogIndex;
    NSNumber *_backlogTotal;
    NSNumber *_cameraHardwareMountingDegrees;
    NSNumber *_cameraFrontFacing;
    SOJUGallerySnapSource *_source;
    SOJUStoryFrame *_framing;
    NSNumber *_contentScore;
    NSString *_deviceId;
    NSNumber *_customStickerPresent;
    NSNumber *_isInfiniteDurationDeprecated;
    NSString *_miniThumbnailBytes;
    NSNumber *_infiniteDuration;
    NSNumber *_thumbnailSize;
    NSNumber *_overlayImageSize;
    NSNumber *_captureTime;
    NSString *_mediaFormat;
    NSString *_mediaTranscoderVersion;
    NSNumber *_mediaFormatProvided;
    SOJUGalleryMultiSnapSegment *_multiSnapSegment;
}

+ (id)withJUGalleryServletSnapParams:(id)arg1;
- (void).cxx_destruct;
- (id)setMultiSnapSegment:(id)arg1;
- (id)setMediaFormatProvided:(id)arg1;
- (id)setMediaTranscoderVersion:(id)arg1;
- (id)setMediaFormat:(id)arg1;
- (id)setCaptureTime:(id)arg1;
- (id)setOverlayImageSize:(id)arg1;
- (id)setThumbnailSize:(id)arg1;
- (id)setInfiniteDuration:(id)arg1;
- (id)setMiniThumbnailBytes:(id)arg1;
- (id)setIsInfiniteDurationDeprecated:(id)arg1;
- (id)setCustomStickerPresent:(id)arg1;
- (id)setDeviceId:(id)arg1;
- (id)setContentScore:(id)arg1;
- (id)setFraming:(id)arg1;
- (id)setSource:(id)arg1;
- (id)setCameraFrontFacing:(id)arg1;
- (id)setCameraHardwareMountingDegrees:(id)arg1;
- (id)setBacklogTotal:(id)arg1;
- (id)setBacklogIndex:(id)arg1;
- (id)setSize:(id)arg1;
- (id)setDuration:(id)arg1;
- (id)setHeight:(id)arg1;
- (id)setWidth:(id)arg1;
- (id)setBattery:(id)arg1;
- (id)setSpeed:(id)arg1;
- (id)setTemperature:(id)arg1;
- (id)setTimeZone:(id)arg1;
- (id)setLocation:(id)arg1;
- (id)setOverlayOrientation:(id)arg1;
- (id)setOrientation:(id)arg1;
- (id)setCreateTime:(id)arg1;
- (id)setThumbnailMd5hash:(id)arg1;
- (id)setOverlayImageMd5hash:(id)arg1;
- (id)setOverlay:(id)arg1;
- (id)setMediaType:(id)arg1;
- (id)setMediaPhotoDnaHash:(id)arg1;
- (id)setMediaMd5hash:(id)arg1;
- (id)setEncryption:(id)arg1;
- (id)setMediaId:(id)arg1;
- (id)setSojuCopyFromSnapId:(id)arg1;
- (id)setSnapId:(id)arg1;
- (id)build;
- (id)setMediaFormatProvidedValue:(_Bool)arg1;
- (id)setMediaFormatEnum:(long long)arg1;
- (id)setCaptureTimeValue:(long long)arg1;
- (id)setOverlayImageSizeValue:(long long)arg1;
- (id)setThumbnailSizeValue:(long long)arg1;
- (id)setInfiniteDurationValue:(_Bool)arg1;
- (id)setIsInfiniteDurationDeprecatedValue:(_Bool)arg1;
- (id)setCustomStickerPresentValue:(_Bool)arg1;
- (id)setContentScoreValue:(double)arg1;
- (id)setCameraFrontFacingValue:(_Bool)arg1;
- (id)setCameraHardwareMountingDegreesEnum:(long long)arg1;
- (id)setCameraHardwareMountingDegreesValue:(int)arg1;
- (id)setBacklogTotalValue:(int)arg1;
- (id)setBacklogIndexValue:(int)arg1;
- (id)setSizeValue:(long long)arg1;
- (id)setDurationValue:(double)arg1;
- (id)setHeightValue:(int)arg1;
- (id)setWidthValue:(int)arg1;
- (id)setBatteryValue:(double)arg1;
- (id)setSpeedValue:(double)arg1;
- (id)setTemperatureValue:(double)arg1;
- (id)setOverlayOrientationEnum:(long long)arg1;
- (id)setOverlayOrientationValue:(int)arg1;
- (id)setOrientationEnum:(long long)arg1;
- (id)setOrientationValue:(int)arg1;
- (id)setCreateTimeValue:(long long)arg1;
- (id)setMediaTypeEnum:(long long)arg1;
- (id)setMediaTypeValue:(int)arg1;

@end

