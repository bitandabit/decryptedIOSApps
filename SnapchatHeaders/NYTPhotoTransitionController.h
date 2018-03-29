//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, NYTPhotoDismissalInteractionController, NYTPhotoTransitionAnimator, UIView;

@interface NYTPhotoTransitionController : NSObject <UIViewControllerTransitioningDelegate>
{
    _Bool _forcesNonInteractiveDismissal;
    NYTPhotoTransitionAnimator *_animator;
    NYTPhotoDismissalInteractionController *_interactionController;
}

@property(retain, nonatomic) NYTPhotoDismissalInteractionController *interactionController; // @synthesize interactionController=_interactionController;
@property(retain, nonatomic) NYTPhotoTransitionAnimator *animator; // @synthesize animator=_animator;
@property(nonatomic) _Bool forcesNonInteractiveDismissal; // @synthesize forcesNonInteractiveDismissal=_forcesNonInteractiveDismissal;
- (void).cxx_destruct;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
@property(retain, nonatomic) UIView *endingView;
@property(retain, nonatomic) UIView *startingView;
- (void)didPanWithPanGestureRecognizer:(id)arg1 viewToPan:(id)arg2 anchorPoint:(struct CGPoint)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

