//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSnapCashBlockerResolver.h"

#import "SCSnapCashCardLinkingDelegate-Protocol.h"

@class NSNumber, NSString, SCSnapCashCardLinkingViewController;
@protocol SCSnapCashBlockerResolutionResultProtocol;

@interface SCSnapCashCardLinkingBlockerResolver : SCSnapCashBlockerResolver <SCSnapCashCardLinkingDelegate>
{
    SCSnapCashCardLinkingViewController *_viewController;
    NSNumber *_cardLinkResult;
    id <SCSnapCashBlockerResolutionResultProtocol> _resultDelegate;
}

@property(nonatomic) __weak id <SCSnapCashBlockerResolutionResultProtocol> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
@property(retain, nonatomic) NSNumber *cardLinkResult; // @synthesize cardLinkResult=_cardLinkResult;
@property(retain, nonatomic) SCSnapCashCardLinkingViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)cardLinkingCancelled;
- (void)cardLinkingSuccessful;
- (long long)blockerType;
- (void)resolveBlockerWithDelegate:(id)arg1;
- (id)getViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
