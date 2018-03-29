//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUGalleryCaptionStyleRange-Protocol.h"

@class NSNumber, NSString, SOJUGalleryRange;

@interface SOJUGalleryCaptionStyleRange : NSObject <SOJUGalleryCaptionStyleRange>
{
    NSNumber *_bold;
    NSNumber *_underline;
    NSNumber *_italics;
    SOJUGalleryRange *_range;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) SOJUGalleryRange *range; // @synthesize range=_range;
@property(readonly, copy, nonatomic) NSNumber *italics; // @synthesize italics=_italics;
@property(readonly, copy, nonatomic) NSNumber *underline; // @synthesize underline=_underline;
@property(readonly, copy, nonatomic) NSNumber *bold; // @synthesize bold=_bold;
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
- (id)initWithBold:(id)arg1 underline:(id)arg2 italics:(id)arg3 range:(id)arg4;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)italicsValue;
- (_Bool)underlineValue;
- (_Bool)boldValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
