//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, SOJUUnlockablesOndemandBillingCenter, SOJUUnlockablesOndemandMonetaryAmount;

@interface SOJUUnlockablesOndemandPaymentBuilder : NSObject
{
    SOJUUnlockablesOndemandMonetaryAmount *_amount;
    NSString *_paymentMethodId;
    NSString *_status;
    NSArray *_statusHistory;
    SOJUUnlockablesOndemandBillingCenter *_billingCenter;
}

+ (id)withJUUnlockablesOndemandPayment:(id)arg1;
- (void).cxx_destruct;
- (id)setBillingCenter:(id)arg1;
- (id)setStatusHistory:(id)arg1;
- (id)setStatus:(id)arg1;
- (id)setPaymentMethodId:(id)arg1;
- (id)setAmount:(id)arg1;
- (id)build;
- (id)setStatusEnum:(long long)arg1;

@end

