//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer, SPTSpiderMenuLogger, SPTSpiderMenuViewController, UIImpactFeedbackGenerator, UIView, UIViewController, UIVisualEffectView, UIWindow;

@interface SPTSpiderMenuPresenter : NSObject
{
    UIWindow *_spiderMenuWindow;
    SPTSpiderMenuViewController *_spiderVC;
    SPTSpiderMenuLogger *_spiderLogger;
    UIViewController *_tutorialVC;
    id <SPTAbbaFeatureFlags> _flags;
    UIVisualEffectView *_topView;
    UIVisualEffectView *_bottomView;
    UIView *_handBaseView;
    NSTimer *_obboardingTimer;
    UIImpactFeedbackGenerator *_impactGenerator;
}

@property(retain, nonatomic) UIImpactFeedbackGenerator *impactGenerator; // @synthesize impactGenerator=_impactGenerator;
@property(retain, nonatomic) NSTimer *obboardingTimer; // @synthesize obboardingTimer=_obboardingTimer;
@property(retain, nonatomic) UIView *handBaseView; // @synthesize handBaseView=_handBaseView;
@property(retain, nonatomic) UIVisualEffectView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIVisualEffectView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) id <SPTAbbaFeatureFlags> flags; // @synthesize flags=_flags;
@property(retain, nonatomic) UIViewController *tutorialVC; // @synthesize tutorialVC=_tutorialVC;
@property(retain, nonatomic) SPTSpiderMenuLogger *spiderLogger; // @synthesize spiderLogger=_spiderLogger;
@property(retain, nonatomic) SPTSpiderMenuViewController *spiderVC; // @synthesize spiderVC=_spiderVC;
@property(retain, nonatomic) UIWindow *spiderMenuWindow; // @synthesize spiderMenuWindow=_spiderMenuWindow;
- (void).cxx_destruct;
- (void)closeWindowWithGesture:(id)arg1;
- (void)changeHoverLocationWithGesture:(id)arg1;
- (void)openUpWindowWithActions:(id)arg1 gestureRecognizer:(id)arg2;
- (void)dismissSpiderTutorial;
- (id)onboardingAnimation:(id)arg1 withMode:(unsigned long long)arg2 fromTransform:(id)arg3;
- (void)startOnboardingWithHand:(id)arg1 withVC:(id)arg2 withYPosition:(double)arg3;
- (void)startOnboardingWithTooltip:(id)arg1 onVC:(id)arg2 withYPosition:(double)arg3 withXposition:(double)arg4;
- (void)startSpiderMenuOnBoardingOnView:(id)arg1 contentOffset:(struct CGPoint)arg2 gesture:(id)arg3;
- (void)stopOnboardingTimer;
- (void)startOnboardingTimer;
- (id)initSpiderViewController:(id)arg1 withFlags:(id)arg2 spiderLogger:(id)arg3;

@end

