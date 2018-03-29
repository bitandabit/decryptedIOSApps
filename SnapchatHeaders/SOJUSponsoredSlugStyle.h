//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUSponsoredSlugStyle-Protocol.h"

@class NSString, SOJUStrPoint;

@interface SOJUSponsoredSlugStyle : NSObject <SOJUSponsoredSlugStyle>
{
    NSString *_font;
    NSString *_textSize;
    NSString *_color;
    NSString *_dropshadowColor;
    SOJUStrPoint *_dropshadowOffset;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) SOJUStrPoint *dropshadowOffset; // @synthesize dropshadowOffset=_dropshadowOffset;
@property(readonly, copy, nonatomic) NSString *dropshadowColor; // @synthesize dropshadowColor=_dropshadowColor;
@property(readonly, copy, nonatomic) NSString *color; // @synthesize color=_color;
@property(readonly, copy, nonatomic) NSString *textSize; // @synthesize textSize=_textSize;
@property(readonly, copy, nonatomic) NSString *font; // @synthesize font=_font;
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
- (id)initWithFont:(id)arg1 textSize:(id)arg2 color:(id)arg3 dropshadowColor:(id)arg4 dropshadowOffset:(id)arg5;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
