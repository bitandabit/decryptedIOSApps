//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUUnlockablesOndemandPayment-Protocol.h"

@class NSArray, NSString, SOJUUnlockablesOndemandBillingCenter, SOJUUnlockablesOndemandMonetaryAmount;

@interface SOJUUnlockablesOndemandPayment : NSObject <SOJUUnlockablesOndemandPayment>
{
    SOJUUnlockablesOndemandMonetaryAmount *_amount;
    NSString *_paymentMethodId;
    NSString *_status;
    NSArray *_statusHistory;
    SOJUUnlockablesOndemandBillingCenter *_billingCenter;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandBillingCenter *billingCenter; // @synthesize billingCenter=_billingCenter;
@property(readonly, copy, nonatomic) NSArray *statusHistory; // @synthesize statusHistory=_statusHistory;
@property(readonly, copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSString *paymentMethodId; // @synthesize paymentMethodId=_paymentMethodId;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandMonetaryAmount *amount; // @synthesize amount=_amount;
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
- (id)initWithAmount:(id)arg1 paymentMethodId:(id)arg2 status:(id)arg3 statusHistory:(id)arg4 billingCenter:(id)arg5;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)statusEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

