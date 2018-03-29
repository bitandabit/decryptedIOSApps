//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUIdentityCreateMischiefResponse-Protocol.h"

@class NSString, SOJUIdentityMischief;

@interface SOJUIdentityCreateMischiefResponse : NSObject <SOJUIdentityCreateMischiefResponse>
{
    NSString *_requestUuid;
    SOJUIdentityMischief *_sojuNewMischief;
    NSString *_errorType;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *errorType; // @synthesize errorType=_errorType;
@property(readonly, copy, nonatomic) SOJUIdentityMischief *sojuNewMischief; // @synthesize sojuNewMischief=_sojuNewMischief;
@property(readonly, copy, nonatomic) NSString *requestUuid; // @synthesize requestUuid=_requestUuid;
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
- (id)initWithRequestUuid:(id)arg1 sojuNewMischief:(id)arg2 errorType:(id)arg3;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)errorTypeEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

