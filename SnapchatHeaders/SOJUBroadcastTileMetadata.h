//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUBroadcastTileMetadata-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUBroadcastTileMetadata : NSObject <SOJUBroadcastTileMetadata>
{
    NSString *_idValue;
    NSString *_type;
    NSString *_displayName;
    NSString *_color;
    NSString *_logo;
    NSString *_logoType;
    NSNumber *_isSponsored;
    NSArray *_tiles;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSArray *tiles; // @synthesize tiles=_tiles;
@property(readonly, copy, nonatomic) NSNumber *isSponsored; // @synthesize isSponsored=_isSponsored;
@property(readonly, copy, nonatomic) NSString *logoType; // @synthesize logoType=_logoType;
@property(readonly, copy, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(readonly, copy, nonatomic) NSString *color; // @synthesize color=_color;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
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
- (id)initWithIdValue:(id)arg1 type:(id)arg2 displayName:(id)arg3 color:(id)arg4 logo:(id)arg5 logoType:(id)arg6 isSponsored:(id)arg7 tiles:(id)arg8;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isSponsoredValue;
- (long long)logoTypeEnum;
- (long long)typeEnum;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

