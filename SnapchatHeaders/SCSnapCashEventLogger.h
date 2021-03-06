//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SCSnapCashEventLogger : NSObject
{
}

+ (void)logSnapCashStateViewed:(id)arg1;
+ (void)_logReceiveActionForPayment:(id)arg1 status:(long long)arg2;
+ (void)logSnapCashReceiveFailed:(id)arg1;
+ (void)logSnapCashReceiveInitiated:(id)arg1;
+ (void)_logSendActionForPayment:(id)arg1 status:(long long)arg2 swipe:(_Bool)arg3;
+ (void)logSnapCashSent:(id)arg1;
+ (void)logSnapCashSendFailed:(id)arg1;
+ (void)logSnapCashSendRetried:(id)arg1;
+ (void)logSnapCashSendInitiated:(id)arg1 swipe:(_Bool)arg2;
+ (void)logPaymentStateViewed:(id)arg1;
+ (void)logPaymentReceiveFailed:(id)arg1;
+ (void)logPaymentReceiveInitiated:(id)arg1;
+ (void)logPaymentSent:(id)arg1;
+ (void)logPaymentSendFailed:(id)arg1;
+ (void)logPaymentSendRetried:(id)arg1;
+ (void)logPaymentSendInitiated:(id)arg1 withSwipe:(_Bool)arg2;
+ (void)logSwipeToSendInitiated;
+ (void)logCashTagCreated;
+ (void)logCashButtonTapped;
+ (void)logCardLinkingCanceled;
+ (void)logIdentityVerificationCanceled;
+ (void)logIdentityVerificationFailed;
+ (void)logIdentityVerificationSucceeded;
+ (void)logCardRelinking;
+ (void)logCardLinkingFailedWithReason:(id)arg1;
+ (void)logCardLinkingSucceededWithRelink:(_Bool)arg1;
+ (void)logPhoneNumberVerificationFailed;
+ (void)logPhoneNumberVerificationCanceled;
+ (void)logPhoneNumberVerificationSucceeded;
+ (void)logSquareTOSCanceled;
+ (void)logSquareTOSAccepted;

@end

