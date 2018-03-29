//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSnapCashBlockerResolver.h"

#import "SCSnapCashURLBlockerViewControllerDelegate-Protocol.h"

@class NSNumber, NSString, SCSnapCashURLBlockerViewController;
@protocol SCSnapCashBlockerResolutionResultProtocol;

@interface SCSnapCashURLBlockerResolver : SCSnapCashBlockerResolver <SCSnapCashURLBlockerViewControllerDelegate>
{
    id <SCSnapCashBlockerResolutionResultProtocol> _resultDelegate;
    SCSnapCashURLBlockerViewController *_viewController;
    NSNumber *_resolveResult;
}

@property(retain, nonatomic) NSNumber *resolveResult; // @synthesize resolveResult=_resolveResult;
@property(retain, nonatomic) SCSnapCashURLBlockerViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <SCSnapCashBlockerResolutionResultProtocol> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
- (void).cxx_destruct;
- (void)urlBlockerResolutionSucceeded;
- (void)urlBlockerResolutionFailed;
- (void)urlBlockerResolutionCancelled;
- (id)getViewController;
- (void)resolveBlockerWithDelegate:(id)arg1;
- (long long)blockerType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

