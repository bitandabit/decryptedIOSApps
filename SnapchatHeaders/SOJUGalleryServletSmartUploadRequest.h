//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUGalleryServletSmartUploadRequest-Protocol.h"

@class NSNumber, NSString;

@interface SOJUGalleryServletSmartUploadRequest : NSObject <SOJUGalleryServletSmartUploadRequest>
{
    NSString *_mediaId;
    NSString *_mediaUrlDeprecated;
    NSNumber *_mediaType;
    NSString *_mediaKey;
    NSString *_mediaIv;
    NSString *_usernameDeprecated;
    NSString *_snapId;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
@property(readonly, copy, nonatomic) NSString *usernameDeprecated; // @synthesize usernameDeprecated=_usernameDeprecated;
@property(readonly, copy, nonatomic) NSString *mediaIv; // @synthesize mediaIv=_mediaIv;
@property(readonly, copy, nonatomic) NSString *mediaKey; // @synthesize mediaKey=_mediaKey;
@property(readonly, copy, nonatomic) NSNumber *mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, copy, nonatomic) NSString *mediaUrlDeprecated; // @synthesize mediaUrlDeprecated=_mediaUrlDeprecated;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
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
- (id)initWithMediaId:(id)arg1 mediaUrlDeprecated:(id)arg2 mediaType:(id)arg3 mediaKey:(id)arg4 mediaIv:(id)arg5 usernameDeprecated:(id)arg6 snapId:(id)arg7;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (int)mediaTypeValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
