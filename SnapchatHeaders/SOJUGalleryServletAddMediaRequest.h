//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUGalleryServletAddMediaRequest-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUGalleryServletAddMediaRequest : NSObject <SOJUGalleryServletAddMediaRequest>
{
    NSArray *_media;
    NSNumber *_storageVersionDeprecated;
    NSString *_storageType;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *storageType; // @synthesize storageType=_storageType;
@property(readonly, copy, nonatomic) NSNumber *storageVersionDeprecated; // @synthesize storageVersionDeprecated=_storageVersionDeprecated;
@property(readonly, copy, nonatomic) NSArray *media; // @synthesize media=_media;
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
- (id)initWithMedia:(id)arg1 storageVersionDeprecated:(id)arg2 storageType:(id)arg3;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)storageTypeEnum;
- (int)storageVersionDeprecatedValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
