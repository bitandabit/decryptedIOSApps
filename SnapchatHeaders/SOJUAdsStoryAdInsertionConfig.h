//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUAdsStoryAdInsertionConfig-Protocol.h"

@class NSNumber, NSString;

@interface SOJUAdsStoryAdInsertionConfig : NSObject <SOJUAdsStoryAdInsertionConfig>
{
    NSNumber *_firstOnResume;
    NSNumber *_interval;
    NSNumber *_minSnapsAfterAd;
    NSNumber *_firstOnStart;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *firstOnStart; // @synthesize firstOnStart=_firstOnStart;
@property(readonly, copy, nonatomic) NSNumber *minSnapsAfterAd; // @synthesize minSnapsAfterAd=_minSnapsAfterAd;
@property(readonly, copy, nonatomic) NSNumber *interval; // @synthesize interval=_interval;
@property(readonly, copy, nonatomic) NSNumber *firstOnResume; // @synthesize firstOnResume=_firstOnResume;
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
- (id)initWithFirstOnResume:(id)arg1 interval:(id)arg2 minSnapsAfterAd:(id)arg3 firstOnStart:(id)arg4;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (int)firstOnStartValue;
- (int)minSnapsAfterAdValue;
- (int)intervalValue;
- (int)firstOnResumeValue;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

