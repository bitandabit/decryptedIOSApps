//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, SCContextViewController, SCFullscreenContextDismissAnimator, SCFullscreenContextPresentationAnimator, UIPanGestureRecognizer;

@interface SCFullscreenContextTransitioning : NSObject <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate>
{
    SCContextViewController *_presentedVC;
    UIPanGestureRecognizer *_panGesture;
    SCFullscreenContextPresentationAnimator *_presentationAnimator;
    SCFullscreenContextDismissAnimator *_dismissalAnimator;
}

- (void).cxx_destruct;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)_pan:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)detach;
- (void)wireDismissGestureToView;
- (void)setupWithPresentedViewController:(id)arg1 sourceView:(id)arg2 topInset:(double)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
