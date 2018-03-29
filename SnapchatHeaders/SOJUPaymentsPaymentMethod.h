//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUPaymentsPaymentMethod-Protocol.h"

@class NSNumber, NSString, SOJUPaymentsCreditCard, SOJUPaymentsVaultedCreditAccount;

@interface SOJUPaymentsPaymentMethod : NSObject <SOJUPaymentsPaymentMethod>
{
    NSString *_idValue;
    NSString *_type;
    NSNumber *_isDefault;
    SOJUPaymentsCreditCard *_creditCard;
    SOJUPaymentsVaultedCreditAccount *_vaultedCreditAccount;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) SOJUPaymentsVaultedCreditAccount *vaultedCreditAccount; // @synthesize vaultedCreditAccount=_vaultedCreditAccount;
@property(readonly, copy, nonatomic) SOJUPaymentsCreditCard *creditCard; // @synthesize creditCard=_creditCard;
@property(readonly, copy, nonatomic) NSNumber *isDefault; // @synthesize isDefault=_isDefault;
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
- (id)initWithIdValue:(id)arg1 type:(id)arg2 isDefault:(id)arg3 creditCard:(id)arg4 vaultedCreditAccount:(id)arg5;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isDefaultValue;
- (long long)typeEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

