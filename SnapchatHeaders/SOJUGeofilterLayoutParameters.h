//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUGeofilterLayoutParameters-Protocol.h"

@class NSNumber, NSString;

@interface SOJUGeofilterLayoutParameters : NSObject <SOJUGeofilterLayoutParameters>
{
    NSNumber *_xOffset;
    NSNumber *_yOffset;
    NSNumber *_xSize;
    NSNumber *_ySize;
    NSNumber *_rotation;
    NSNumber *_zIndex;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *zIndex; // @synthesize zIndex=_zIndex;
@property(readonly, copy, nonatomic) NSNumber *rotation; // @synthesize rotation=_rotation;
@property(readonly, copy, nonatomic) NSNumber *ySize; // @synthesize ySize=_ySize;
@property(readonly, copy, nonatomic) NSNumber *xSize; // @synthesize xSize=_xSize;
@property(readonly, copy, nonatomic) NSNumber *yOffset; // @synthesize yOffset=_yOffset;
@property(readonly, copy, nonatomic) NSNumber *xOffset; // @synthesize xOffset=_xOffset;
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
- (id)initWithXOffset:(id)arg1 yOffset:(id)arg2 xSize:(id)arg3 ySize:(id)arg4 rotation:(id)arg5 zIndex:(id)arg6;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (int)zIndexValue;
- (float)rotationValue;
- (float)ySizeValue;
- (float)xSizeValue;
- (float)yOffsetValue;
- (float)xOffsetValue;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

