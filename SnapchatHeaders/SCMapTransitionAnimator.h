//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCTimeProfilable-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class MainViewController, NSString, SCDashboardTabBarView, SCMapTransitionView, SCUserSession, UIPercentDrivenInteractiveTransition, UIView, UIVisualEffectView;
@protocol SCMapTransitionAnimatorDelegate;

@interface SCMapTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning, SCTimeProfilable, UIViewControllerTransitioningDelegate>
{
    MainViewController *_mainViewController;
    SCUserSession *_userSession;
    _Bool _isCancellingTransition;
    UIView *_lastContainerView;
    UIVisualEffectView *_blurView1;
    UIVisualEffectView *_blurView2;
    _Bool _isPresenting;
    id <SCMapTransitionAnimatorDelegate> _delegate;
    UIPercentDrivenInteractiveTransition *_interactiveTransition;
    SCMapTransitionView *_transitionView;
    SCDashboardTabBarView *_tabBarView;
}

+ (int)context;
@property(retain, nonatomic) SCDashboardTabBarView *tabBarView; // @synthesize tabBarView=_tabBarView;
@property(retain, nonatomic) SCMapTransitionView *transitionView; // @synthesize transitionView=_transitionView;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *interactiveTransition; // @synthesize interactiveTransition=_interactiveTransition;
@property(readonly, nonatomic) _Bool isPresenting; // @synthesize isPresenting=_isPresenting;
@property(nonatomic) __weak id <SCMapTransitionAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_shouldHandleInteractiveTransition;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)_updateContainerViewFrame;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)_updateMemoriesItemState;
- (void)_updateTabBarViewBadgeCounts;
- (void)updateInteractiveTransition:(double)arg1;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void)dealloc;
- (id)initWithMainViewController:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

