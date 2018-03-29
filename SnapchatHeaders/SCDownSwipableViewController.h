//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSString, UIPanGestureRecognizer, UIPercentDrivenInteractiveTransition;

@interface SCDownSwipableViewController : UIViewController <UINavigationControllerDelegate, UIGestureRecognizerDelegate>
{
    _Bool _statusBarHiddenPrevious;
    _Bool _interactionInProgress;
    UIPanGestureRecognizer *_downSwipeRecognizer;
    UIPercentDrivenInteractiveTransition *_interactivePopTransition;
    double _contentOffsetY;
}

@property(nonatomic) double contentOffsetY; // @synthesize contentOffsetY=_contentOffsetY;
@property(nonatomic) _Bool interactionInProgress; // @synthesize interactionInProgress=_interactionInProgress;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *interactivePopTransition; // @synthesize interactivePopTransition=_interactivePopTransition;
@property(retain, nonatomic) UIPanGestureRecognizer *downSwipeRecognizer; // @synthesize downSwipeRecognizer=_downSwipeRecognizer;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePanGestureRecognizer:(id)arg1;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (double)downSwipeContentOffsetY;
- (void)downSwipeSucceed;
- (void)downSwipeCancelled;
- (void)downSwipePrepare;
- (_Bool)disableDownSwipe;
- (_Bool)inValidView:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

