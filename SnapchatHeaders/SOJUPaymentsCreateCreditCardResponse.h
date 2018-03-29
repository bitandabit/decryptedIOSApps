//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUPaymentsCreateCreditCardResponse-Protocol.h"

@class NSNumber, NSString;

@interface SOJUPaymentsCreateCreditCardResponse : NSObject <SOJUPaymentsCreateCreditCardResponse>
{
    NSString *_creditCardId;
    NSNumber *_success;
    NSString *_errorCode;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(readonly, copy, nonatomic) NSNumber *success; // @synthesize success=_success;
@property(readonly, copy, nonatomic) NSString *creditCardId; // @synthesize creditCardId=_creditCardId;
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
- (id)initWithCreditCardId:(id)arg1 success:(id)arg2 errorCode:(id)arg3;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)errorCodeEnum;
- (_Bool)successValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

