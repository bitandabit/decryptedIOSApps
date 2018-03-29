//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUStickerPackGiphyStickerConfig-Protocol.h"

@class NSNumber, NSString;

@interface SOJUStickerPackGiphyStickerConfig : NSObject <SOJUStickerPackGiphyStickerConfig>
{
    NSString *_giphyApiKey;
    NSString *_apiKeyVersion;
    NSNumber *_supportTrending;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *supportTrending; // @synthesize supportTrending=_supportTrending;
@property(readonly, copy, nonatomic) NSString *apiKeyVersion; // @synthesize apiKeyVersion=_apiKeyVersion;
@property(readonly, copy, nonatomic) NSString *giphyApiKey; // @synthesize giphyApiKey=_giphyApiKey;
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
- (id)initWithGiphyApiKey:(id)arg1 apiKeyVersion:(id)arg2 supportTrending:(id)arg3;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)supportTrendingValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

