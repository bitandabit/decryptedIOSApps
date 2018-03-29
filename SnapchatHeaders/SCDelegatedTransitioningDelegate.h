//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, UIPercentDrivenInteractiveTransition;
@protocol SCDelegatedPresentedDelegate, SCDelegatedPresentingDelegate;

@interface SCDelegatedTransitioningDelegate : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
{
    CDUnknownBlockType _onCancelledBlock;
    CDUnknownBlockType _onFinishedBlock;
    double _latestPercentComplete;
    _Bool _sendsAppearanceMethods;
    _Bool _ensurePresentingViewControllerAnimation;
    double _duration;
    id <SCDelegatedPresentingDelegate> _presentingDelegate;
    id <SCDelegatedPresentedDelegate> _presentedDelegate;
    UIPercentDrivenInteractiveTransition *_interactiveTransition;
}

@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *interactiveTransition; // @synthesize interactiveTransition=_interactiveTransition;
@property(nonatomic) _Bool ensurePresentingViewControllerAnimation; // @synthesize ensurePresentingViewControllerAnimation=_ensurePresentingViewControllerAnimation;
@property(nonatomic) __weak id <SCDelegatedPresentedDelegate> presentedDelegate; // @synthesize presentedDelegate=_presentedDelegate;
@property(nonatomic) __weak id <SCDelegatedPresentingDelegate> presentingDelegate; // @synthesize presentingDelegate=_presentingDelegate;
@property(nonatomic) _Bool sendsAppearanceMethods; // @synthesize sendsAppearanceMethods=_sendsAppearanceMethods;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (void)_reverseAnimation:(id)arg1 forKey:(id)arg2 inLayer:(id)arg3;
- (void)_continueAnimation:(id)arg1 forKey:(id)arg2 inLayer:(id)arg3;
- (id)_implicitAnimationModels;
- (void)finishInteractiveTransitionWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancelInteractiveTransitionWithCompletion:(CDUnknownBlockType)arg1;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void)updateInteractiveTransition:(double)arg1;
- (void)_performPresentationAnimations;
- (void)_performDismissalAnimations;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
