//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUAdsStoryAdMetadata-Protocol.h"

@class NSDictionary, NSString, SOJUAdsStoryAdInsertionConfig, SOJUAdsStoryAdRequestConfig;

@interface SOJUAdsStoryAdMetadata : NSObject <SOJUAdsStoryAdMetadata>
{
    SOJUAdsStoryAdInsertionConfig *_adInsertionConfig;
    SOJUAdsStoryAdRequestConfig *_adRequestConfig;
    NSString *_adUnitId;
    NSDictionary *_targetingParameters;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSDictionary *targetingParameters; // @synthesize targetingParameters=_targetingParameters;
@property(readonly, copy, nonatomic) NSString *adUnitId; // @synthesize adUnitId=_adUnitId;
@property(readonly, copy, nonatomic) SOJUAdsStoryAdRequestConfig *adRequestConfig; // @synthesize adRequestConfig=_adRequestConfig;
@property(readonly, copy, nonatomic) SOJUAdsStoryAdInsertionConfig *adInsertionConfig; // @synthesize adInsertionConfig=_adInsertionConfig;
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
- (id)initWithAdInsertionConfig:(id)arg1 adRequestConfig:(id)arg2 adUnitId:(id)arg3 targetingParameters:(id)arg4;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

