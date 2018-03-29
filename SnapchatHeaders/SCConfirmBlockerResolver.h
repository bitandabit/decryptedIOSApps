//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCPasscodeForConfirmBlockerDelegate-Protocol.h"
#import "SCSnapCashBlockerResolverV2-Protocol.h"

@class NSNumber, NSString, SCCVVPasscodeViewController, SCPayment, SCPaymentBlocker;
@protocol SCSnapCashBlockerResolutionResultDelegateV2;

@interface SCConfirmBlockerResolver : NSObject <SCSnapCashBlockerResolverV2, SCPasscodeForConfirmBlockerDelegate>
{
    SCCVVPasscodeViewController *_viewController;
    id <SCSnapCashBlockerResolutionResultDelegateV2> _resultDelegate;
    SCPayment *_payment;
    SCPaymentBlocker *_blocker;
    NSNumber *_confirmResult;
}

@property(retain, nonatomic) NSNumber *confirmResult; // @synthesize confirmResult=_confirmResult;
@property(retain, nonatomic) SCPaymentBlocker *blocker; // @synthesize blocker=_blocker;
@property(retain, nonatomic) SCPayment *payment; // @synthesize payment=_payment;
@property(nonatomic) __weak id <SCSnapCashBlockerResolutionResultDelegateV2> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
@property(retain, nonatomic) SCCVVPasscodeViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)confirmResolutionFailed;
- (void)confirmResolutionCancelled;
- (void)confirmResolutionSucceeded;
- (void)resolveConfirmBlocker;
- (_Bool)needsViewController;
- (long long)blockerType;
- (void)resolveBlockerWithDelegate:(id)arg1;
- (id)getViewController;
- (id)initWithBlocker:(id)arg1 payment:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
