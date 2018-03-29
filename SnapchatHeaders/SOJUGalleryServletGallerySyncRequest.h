//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUGalleryServletGallerySyncRequest-Protocol.h"

@class NSNumber, NSString;

@interface SOJUGalleryServletGallerySyncRequest : NSObject <SOJUGalleryServletGallerySyncRequest>
{
    NSNumber *_clientCompatVersion;
    NSNumber *_lastSeqnum;
    NSNumber *_mediaUrl;
    NSNumber *_thumbnailUrl;
    NSNumber *_overlayImageUrl;
    NSNumber *_pageSize;
    NSNumber *_sojuInitSync;
    NSNumber *_lowSeqnum;
    NSNumber *_highSeqnum;
    NSString *_syncToken;
    NSNumber *_miniThumbnailBytes;
    NSNumber *_snapTags;
    NSNumber *_mediaFormat;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *mediaFormat; // @synthesize mediaFormat=_mediaFormat;
@property(readonly, copy, nonatomic) NSNumber *snapTags; // @synthesize snapTags=_snapTags;
@property(readonly, copy, nonatomic) NSNumber *miniThumbnailBytes; // @synthesize miniThumbnailBytes=_miniThumbnailBytes;
@property(readonly, copy, nonatomic) NSString *syncToken; // @synthesize syncToken=_syncToken;
@property(readonly, copy, nonatomic) NSNumber *highSeqnum; // @synthesize highSeqnum=_highSeqnum;
@property(readonly, copy, nonatomic) NSNumber *lowSeqnum; // @synthesize lowSeqnum=_lowSeqnum;
@property(readonly, copy, nonatomic) NSNumber *sojuInitSync; // @synthesize sojuInitSync=_sojuInitSync;
@property(readonly, copy, nonatomic) NSNumber *pageSize; // @synthesize pageSize=_pageSize;
@property(readonly, copy, nonatomic) NSNumber *overlayImageUrl; // @synthesize overlayImageUrl=_overlayImageUrl;
@property(readonly, copy, nonatomic) NSNumber *thumbnailUrl; // @synthesize thumbnailUrl=_thumbnailUrl;
@property(readonly, copy, nonatomic) NSNumber *mediaUrl; // @synthesize mediaUrl=_mediaUrl;
@property(readonly, copy, nonatomic) NSNumber *lastSeqnum; // @synthesize lastSeqnum=_lastSeqnum;
@property(readonly, copy, nonatomic) NSNumber *clientCompatVersion; // @synthesize clientCompatVersion=_clientCompatVersion;
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
- (id)initWithClientCompatVersion:(id)arg1 lastSeqnum:(id)arg2 mediaUrl:(id)arg3 thumbnailUrl:(id)arg4 overlayImageUrl:(id)arg5 pageSize:(id)arg6 sojuInitSync:(id)arg7 lowSeqnum:(id)arg8 highSeqnum:(id)arg9 syncToken:(id)arg10 miniThumbnailBytes:(id)arg11 snapTags:(id)arg12 mediaFormat:(id)arg13;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)mediaFormatValue;
- (_Bool)snapTagsValue;
- (_Bool)miniThumbnailBytesValue;
- (long long)highSeqnumValue;
- (long long)lowSeqnumValue;
- (_Bool)sojuInitSyncValue;
- (int)pageSizeValue;
- (_Bool)overlayImageUrlValue;
- (_Bool)thumbnailUrlValue;
- (_Bool)mediaUrlValue;
- (long long)lastSeqnumValue;
- (long long)clientCompatVersionEnum;
- (int)clientCompatVersionValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

