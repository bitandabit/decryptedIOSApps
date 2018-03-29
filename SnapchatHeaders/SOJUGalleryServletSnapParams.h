//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUGalleryServletSnapParams-Protocol.h"

@class NSNumber, NSString, SOJUCoordinate, SOJUGalleryMultiSnapSegment, SOJUGallerySnapSource, SOJUStoryFrame;

@interface SOJUGalleryServletSnapParams : NSObject <SOJUGalleryServletSnapParams>
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

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) SOJUGalleryMultiSnapSegment *multiSnapSegment; // @synthesize multiSnapSegment=_multiSnapSegment;
@property(readonly, copy, nonatomic) NSNumber *mediaFormatProvided; // @synthesize mediaFormatProvided=_mediaFormatProvided;
@property(readonly, copy, nonatomic) NSString *mediaTranscoderVersion; // @synthesize mediaTranscoderVersion=_mediaTranscoderVersion;
@property(readonly, copy, nonatomic) NSString *mediaFormat; // @synthesize mediaFormat=_mediaFormat;
@property(readonly, copy, nonatomic) NSNumber *captureTime; // @synthesize captureTime=_captureTime;
@property(readonly, copy, nonatomic) NSNumber *overlayImageSize; // @synthesize overlayImageSize=_overlayImageSize;
@property(readonly, copy, nonatomic) NSNumber *thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(readonly, copy, nonatomic) NSNumber *infiniteDuration; // @synthesize infiniteDuration=_infiniteDuration;
@property(readonly, copy, nonatomic) NSString *miniThumbnailBytes; // @synthesize miniThumbnailBytes=_miniThumbnailBytes;
@property(readonly, copy, nonatomic) NSNumber *isInfiniteDurationDeprecated; // @synthesize isInfiniteDurationDeprecated=_isInfiniteDurationDeprecated;
@property(readonly, copy, nonatomic) NSNumber *customStickerPresent; // @synthesize customStickerPresent=_customStickerPresent;
@property(readonly, copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(readonly, copy, nonatomic) NSNumber *contentScore; // @synthesize contentScore=_contentScore;
@property(readonly, copy, nonatomic) SOJUStoryFrame *framing; // @synthesize framing=_framing;
@property(readonly, copy, nonatomic) SOJUGallerySnapSource *source; // @synthesize source=_source;
@property(readonly, copy, nonatomic) NSNumber *cameraFrontFacing; // @synthesize cameraFrontFacing=_cameraFrontFacing;
@property(readonly, copy, nonatomic) NSNumber *cameraHardwareMountingDegrees; // @synthesize cameraHardwareMountingDegrees=_cameraHardwareMountingDegrees;
@property(readonly, copy, nonatomic) NSNumber *backlogTotal; // @synthesize backlogTotal=_backlogTotal;
@property(readonly, copy, nonatomic) NSNumber *backlogIndex; // @synthesize backlogIndex=_backlogIndex;
@property(readonly, copy, nonatomic) NSNumber *size; // @synthesize size=_size;
@property(readonly, copy, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(readonly, copy, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(readonly, copy, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(readonly, copy, nonatomic) NSNumber *battery; // @synthesize battery=_battery;
@property(readonly, copy, nonatomic) NSNumber *speed; // @synthesize speed=_speed;
@property(readonly, copy, nonatomic) NSNumber *temperature; // @synthesize temperature=_temperature;
@property(readonly, copy, nonatomic) NSString *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly, copy, nonatomic) SOJUCoordinate *location; // @synthesize location=_location;
@property(readonly, copy, nonatomic) NSNumber *overlayOrientation; // @synthesize overlayOrientation=_overlayOrientation;
@property(readonly, copy, nonatomic) NSNumber *orientation; // @synthesize orientation=_orientation;
@property(readonly, copy, nonatomic) NSNumber *createTime; // @synthesize createTime=_createTime;
@property(readonly, copy, nonatomic) NSString *thumbnailMd5hash; // @synthesize thumbnailMd5hash=_thumbnailMd5hash;
@property(readonly, copy, nonatomic) NSString *overlayImageMd5hash; // @synthesize overlayImageMd5hash=_overlayImageMd5hash;
@property(readonly, copy, nonatomic) NSString *overlay; // @synthesize overlay=_overlay;
@property(readonly, copy, nonatomic) NSNumber *mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, copy, nonatomic) NSString *mediaPhotoDnaHash; // @synthesize mediaPhotoDnaHash=_mediaPhotoDnaHash;
@property(readonly, copy, nonatomic) NSString *mediaMd5hash; // @synthesize mediaMd5hash=_mediaMd5hash;
@property(readonly, copy, nonatomic) NSString *encryption; // @synthesize encryption=_encryption;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, copy, nonatomic) NSString *sojuCopyFromSnapId; // @synthesize sojuCopyFromSnapId=_sojuCopyFromSnapId;
@property(readonly, copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
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
- (id)initWithSnapId:(id)arg1 sojuCopyFromSnapId:(id)arg2 mediaId:(id)arg3 encryption:(id)arg4 mediaMd5hash:(id)arg5 mediaPhotoDnaHash:(id)arg6 mediaType:(id)arg7 overlay:(id)arg8 overlayImageMd5hash:(id)arg9 thumbnailMd5hash:(id)arg10 createTime:(id)arg11 orientation:(id)arg12 overlayOrientation:(id)arg13 location:(id)arg14 timeZone:(id)arg15 temperature:(id)arg16 speed:(id)arg17 battery:(id)arg18 width:(id)arg19 height:(id)arg20 duration:(id)arg21 size:(id)arg22 backlogIndex:(id)arg23 backlogTotal:(id)arg24 cameraHardwareMountingDegrees:(id)arg25 cameraFrontFacing:(id)arg26 source:(id)arg27 framing:(id)arg28 contentScore:(id)arg29 deviceId:(id)arg30 customStickerPresent:(id)arg31 isInfiniteDurationDeprecated:(id)arg32 miniThumbnailBytes:(id)arg33 infiniteDuration:(id)arg34 thumbnailSize:(id)arg35 overlayImageSize:(id)arg36 captureTime:(id)arg37 mediaFormat:(id)arg38 mediaTranscoderVersion:(id)arg39 mediaFormatProvided:(id)arg40 multiSnapSegment:(id)arg41;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)mediaFormatProvidedValue;
- (long long)mediaFormatEnum;
- (long long)captureTimeValue;
- (long long)overlayImageSizeValue;
- (long long)thumbnailSizeValue;
- (_Bool)infiniteDurationValue;
- (_Bool)isInfiniteDurationDeprecatedValue;
- (_Bool)customStickerPresentValue;
- (double)contentScoreValue;
- (_Bool)cameraFrontFacingValue;
- (long long)cameraHardwareMountingDegreesEnum;
- (int)cameraHardwareMountingDegreesValue;
- (int)backlogTotalValue;
- (int)backlogIndexValue;
- (long long)sizeValue;
- (double)durationValue;
- (int)heightValue;
- (int)widthValue;
- (double)batteryValue;
- (double)speedValue;
- (double)temperatureValue;
- (long long)overlayOrientationEnum;
- (int)overlayOrientationValue;
- (long long)orientationEnum;
- (int)orientationValue;
- (long long)createTimeValue;
- (long long)mediaTypeEnum;
- (int)mediaTypeValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

