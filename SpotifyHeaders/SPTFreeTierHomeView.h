//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "EXP_HUBViewContentOffsetObserver.h"

@class EXP_HUBContainerView, EXP_HUBView, GLUEInteractiveAnimation, NSLayoutConstraint, SPTFreeTierHomeBasicHeader, SPTLayoutConstraintBuilder, UINavigationController;

@interface SPTFreeTierHomeView : UIView <EXP_HUBViewContentOffsetObserver>
{
    SPTFreeTierHomeBasicHeader *_headerView;
    GLUEInteractiveAnimation *_headerAlphaAnimation;
    GLUEInteractiveAnimation *_navigationBarAlphaAnimation;
    SPTLayoutConstraintBuilder *_layoutBuilder;
    UINavigationController *_navigationController;
    id <GLUETheme> _theme;
    NSLayoutConstraint *_heightConstraint;
    EXP_HUBContainerView *_containerView;
    double _navigationBarAlphaProgress;
}

@property(nonatomic) double navigationBarAlphaProgress; // @synthesize navigationBarAlphaProgress=_navigationBarAlphaProgress;
@property(retain, nonatomic) EXP_HUBContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *layoutBuilder; // @synthesize layoutBuilder=_layoutBuilder;
@property(retain, nonatomic) GLUEInteractiveAnimation *navigationBarAlphaAnimation; // @synthesize navigationBarAlphaAnimation=_navigationBarAlphaAnimation;
@property(retain, nonatomic) GLUEInteractiveAnimation *headerAlphaAnimation; // @synthesize headerAlphaAnimation=_headerAlphaAnimation;
@property(retain, nonatomic) SPTFreeTierHomeBasicHeader *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)enableContentOffsetObserver:(_Bool)arg1;
- (void)superviewWillDisappear:(id)arg1;
- (void)superviewWillAppear:(id)arg1;
- (void)hubView:(id)arg1 contentOffsetDidChange:(struct CGPoint)arg2;
- (void)configureHubViewInset;
- (void)configureContainerViewConstraints;
- (void)configureHeaderConstraints;
- (void)setupNavigationBarAnimation;
- (void)setupHeaderAnimation;
- (void)createDefaultHeader;
- (void)refreshContentTransparency;
- (void)scrollToTop;
- (void)updateHeaderForOnboardingCompleteOrSkipped;
@property(readonly, nonatomic) EXP_HUBView *hubView;
- (void)loadViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2 imageLoaderFactory:(id)arg3 componentLayoutManager:(id)arg4 componentRegistry:(id)arg5 componentEventHandler:(id)arg6 navigationController:(id)arg7;

@end
