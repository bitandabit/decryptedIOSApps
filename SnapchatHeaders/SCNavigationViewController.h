//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCSwipeTransitionCoordinatorDataSource-Protocol.h"
#import "SCSwipeTransitionCoordinatorDelegate-Protocol.h"

@class NSMutableArray, NSString, SCAnimationPhaseCoordinator, SCNavigationView, SCSwipeTransitionCoordinator;
@protocol SCNavigationViewControllerDataSource, SCNavigationViewControllerDelegate;

@interface SCNavigationViewController : UIViewController <SCSwipeTransitionCoordinatorDelegate, SCSwipeTransitionCoordinatorDataSource>
{
    SCNavigationView *_navigationView;
    NSMutableArray *_navigationStack;
    UIViewController *_rootViewController;
    SCSwipeTransitionCoordinator *_activeSwipeCoordinator;
    SCAnimationPhaseCoordinator *_bulkOperationPhaseCoordinator;
    id <SCNavigationViewControllerDataSource> _dataSource;
    id <SCNavigationViewControllerDelegate> _navigationDelegate;
}

+ (long long)_modalPresentationStyleForDirection:(unsigned long long)arg1;
+ (unsigned long long)_reverseNavigationDirectionWithNavigationDirection:(unsigned long long)arg1;
+ (unsigned long long)_navigationBarTransitionDirectionWithNavigationDirection:(unsigned long long)arg1;
+ (unsigned long long)_navigationDirectionWithSwipeTransitionDirection:(unsigned long long)arg1;
+ (unsigned long long)_swipeTransitionDirectionWithNavigationDirection:(unsigned long long)arg1;
@property(nonatomic) __weak id <SCNavigationViewControllerDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(nonatomic) __weak id <SCNavigationViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (double)sc_topLayoutGuide;
- (_Bool)_isPresenting;
- (id)_presentingViewController;
- (id)sc_navigationItem;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (id)transitionCoordinator:(id)arg1 presentationControllerForPresentedViewController:(id)arg2 presentingViewController:(id)arg3;
- (id)presentingViewControllerWithSwipeTransitionCoordinator:(id)arg1;
- (id)presentedViewControllerWithSwipeTransitionCoordinator:(id)arg1;
- (void)transitionCoordinator:(id)arg1 willFailWithTransitionType:(unsigned long long)arg2 viewController:(id)arg3;
- (void)transitionCoordinator:(id)arg1 didFinishWithTransitionType:(unsigned long long)arg2 success:(_Bool)arg3 viewController:(id)arg4;
- (void)transitionCoordinator:(id)arg1 didBeginWithTransitionType:(unsigned long long)arg2 viewController:(id)arg3;
- (void)transitionCoordinator:(id)arg1 willBeginWithTransitionType:(unsigned long long)arg2 viewController:(id)arg3;
- (_Bool)transitionCoordinator:(id)arg1 shouldBeginTransitionType:(unsigned long long)arg2 viewController:(id)arg3;
- (_Bool)providesPresentationContextTransitionStyle;
- (_Bool)definesPresentationContext;
- (id)navigationStack;
- (void)popToRootViewControllerWithAnimationDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_popToViewController:(id)arg1 animationDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_popViewControllerWithAnimationDuration:(double)arg1 transitionCoordinator:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)popViewControllerWithAnimationDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pushViewController:(id)arg1 direction:(unsigned long long)arg2 animationDuration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)popToRootViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)popToViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)popViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pushViewController:(id)arg1 direction:(unsigned long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithRootViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

