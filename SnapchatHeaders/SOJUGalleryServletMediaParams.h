//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUGalleryServletMediaParams-Protocol.h"

@class NSNumber, NSString;

@interface SOJUGalleryServletMediaParams : NSObject <SOJUGalleryServletMediaParams>
{
    NSNumber *_mediaType;
    NSString *_mediaId;
    NSString *_mediaMd5hash;
    NSNumber *_size;
    NSNumber *_createTime;
    NSString *_mediaFormat;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *mediaFormat; // @synthesize mediaFormat=_mediaFormat;
@property(readonly, copy, nonatomic) NSNumber *createTime; // @synthesize createTime=_createTime;
@property(readonly, copy, nonatomic) NSNumber *size; // @synthesize size=_size;
@property(readonly, copy, nonatomic) NSString *mediaMd5hash; // @synthesize mediaMd5hash=_mediaMd5hash;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, copy, nonatomic) NSNumber *mediaType; // @synthesize mediaType=_mediaType;
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
- (id)initWithMediaType:(id)arg1 mediaId:(id)arg2 mediaMd5hash:(id)arg3 size:(id)arg4 createTime:(id)arg5 mediaFormat:(id)arg6;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)mediaFormatEnum;
- (long long)createTimeValue;
- (long long)sizeValue;
- (long long)mediaTypeEnum;
- (int)mediaTypeValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

