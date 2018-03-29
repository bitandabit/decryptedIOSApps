//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUGallerySticker-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUGalleryInfoStickerStyle, SOJUGalleryPoint;

@interface SOJUGallerySticker : NSObject <SOJUGallerySticker>
{
    NSString *_type;
    NSString *_emoji;
    NSString *_packId;
    NSString *_stickerId;
    NSNumber *_relativeWidth;
    NSNumber *_relativeHeight;
    SOJUGalleryPoint *_position;
    NSNumber *_rotation;
    NSNumber *_isRotationRadians;
    NSNumber *_scale;
    NSNumber *_isTracking;
    NSArray *_trackingTrajectory;
    NSNumber *_isPositionCenterOfSticker;
    NSString *_infoStickerType;
    SOJUGalleryInfoStickerStyle *_infoStickerStyle;
    NSNumber *_isAnimated;
    NSString *_externalSrcUrl;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *externalSrcUrl; // @synthesize externalSrcUrl=_externalSrcUrl;
@property(readonly, copy, nonatomic) NSNumber *isAnimated; // @synthesize isAnimated=_isAnimated;
@property(readonly, copy, nonatomic) SOJUGalleryInfoStickerStyle *infoStickerStyle; // @synthesize infoStickerStyle=_infoStickerStyle;
@property(readonly, copy, nonatomic) NSString *infoStickerType; // @synthesize infoStickerType=_infoStickerType;
@property(readonly, copy, nonatomic) NSNumber *isPositionCenterOfSticker; // @synthesize isPositionCenterOfSticker=_isPositionCenterOfSticker;
@property(readonly, copy, nonatomic) NSArray *trackingTrajectory; // @synthesize trackingTrajectory=_trackingTrajectory;
@property(readonly, copy, nonatomic) NSNumber *isTracking; // @synthesize isTracking=_isTracking;
@property(readonly, copy, nonatomic) NSNumber *scale; // @synthesize scale=_scale;
@property(readonly, copy, nonatomic) NSNumber *isRotationRadians; // @synthesize isRotationRadians=_isRotationRadians;
@property(readonly, copy, nonatomic) NSNumber *rotation; // @synthesize rotation=_rotation;
@property(readonly, copy, nonatomic) SOJUGalleryPoint *position; // @synthesize position=_position;
@property(readonly, copy, nonatomic) NSNumber *relativeHeight; // @synthesize relativeHeight=_relativeHeight;
@property(readonly, copy, nonatomic) NSNumber *relativeWidth; // @synthesize relativeWidth=_relativeWidth;
@property(readonly, copy, nonatomic) NSString *stickerId; // @synthesize stickerId=_stickerId;
@property(readonly, copy, nonatomic) NSString *packId; // @synthesize packId=_packId;
@property(readonly, copy, nonatomic) NSString *emoji; // @synthesize emoji=_emoji;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
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
- (id)initWithType:(id)arg1 emoji:(id)arg2 packId:(id)arg3 stickerId:(id)arg4 relativeWidth:(id)arg5 relativeHeight:(id)arg6 position:(id)arg7 rotation:(id)arg8 isRotationRadians:(id)arg9 scale:(id)arg10 isTracking:(id)arg11 trackingTrajectory:(id)arg12 isPositionCenterOfSticker:(id)arg13 infoStickerType:(id)arg14 infoStickerStyle:(id)arg15 isAnimated:(id)arg16 externalSrcUrl:(id)arg17;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isAnimatedValue;
- (long long)infoStickerTypeEnum;
- (_Bool)isPositionCenterOfStickerValue;
- (_Bool)isTrackingValue;
- (double)scaleValue;
- (_Bool)isRotationRadiansValue;
- (double)rotationValue;
- (double)relativeHeightValue;
- (double)relativeWidthValue;
- (long long)typeEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

