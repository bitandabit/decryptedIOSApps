//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUAdSnapCreationInfo-Protocol.h"

@class NSNumber, NSString;

@interface SOJUAdSnapCreationInfo : NSObject <SOJUAdSnapCreationInfo>
{
    NSNumber *_camera;
    NSNumber *_isAudioOn;
    NSString *_mediaType;
    NSNumber *_snapDurationMillis;
    NSNumber *_snapPreviewMillis;
    NSNumber *_geofilterLoadedCount;
    NSString *_filterCarouselEntryDirection;
    NSNumber *_filterSwipeCount;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *filterSwipeCount; // @synthesize filterSwipeCount=_filterSwipeCount;
@property(readonly, copy, nonatomic) NSString *filterCarouselEntryDirection; // @synthesize filterCarouselEntryDirection=_filterCarouselEntryDirection;
@property(readonly, copy, nonatomic) NSNumber *geofilterLoadedCount; // @synthesize geofilterLoadedCount=_geofilterLoadedCount;
@property(readonly, copy, nonatomic) NSNumber *snapPreviewMillis; // @synthesize snapPreviewMillis=_snapPreviewMillis;
@property(readonly, copy, nonatomic) NSNumber *snapDurationMillis; // @synthesize snapDurationMillis=_snapDurationMillis;
@property(readonly, copy, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, copy, nonatomic) NSNumber *isAudioOn; // @synthesize isAudioOn=_isAudioOn;
@property(readonly, copy, nonatomic) NSNumber *camera; // @synthesize camera=_camera;
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
- (id)initWithCamera:(id)arg1 isAudioOn:(id)arg2 mediaType:(id)arg3 snapDurationMillis:(id)arg4 snapPreviewMillis:(id)arg5 geofilterLoadedCount:(id)arg6 filterCarouselEntryDirection:(id)arg7 filterSwipeCount:(id)arg8;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)filterSwipeCountValue;
- (long long)filterCarouselEntryDirectionEnum;
- (long long)geofilterLoadedCountValue;
- (long long)snapPreviewMillisValue;
- (long long)snapDurationMillisValue;
- (_Bool)isAudioOnValue;
- (long long)cameraValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

