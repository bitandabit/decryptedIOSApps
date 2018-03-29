//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SPTThemableView.h"
#import "UIScrollViewDelegate.h"

@class GLUEButton, NSArray, NSString, SPTDrivingLinearGradientView, SPTLayoutConstraintBuilder, UIButton, UIPageControl, UIScrollView;

@interface SPTDrivingOnboardingView : UIView <UIScrollViewDelegate, SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    id <GLUETheme> _glueTheme;
    id <SPTDrivingOnboardingViewDelegate> _delegate;
    SPTDrivingLinearGradientView *_backgroundView;
    UIPageControl *_pageControl;
    NSArray *_pageImageViews;
    NSArray *_pageTitles;
    NSArray *_pageSubtitles;
    NSArray *_pageDescriptions;
    SPTLayoutConstraintBuilder *_layout;
    NSArray *_pages;
    NSArray *_currentPages;
    NSArray *_remainingPages;
    UIScrollView *_scrollView;
    GLUEButton *_acceptButton;
    GLUEButton *_declineButton;
    UIButton *_notNowButton;
    struct CGPoint _scrollDraggingStartOffset;
}

@property(readonly, nonatomic) UIButton *notNowButton; // @synthesize notNowButton=_notNowButton;
@property(readonly, nonatomic) GLUEButton *declineButton; // @synthesize declineButton=_declineButton;
@property(readonly, nonatomic) GLUEButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) struct CGPoint scrollDraggingStartOffset; // @synthesize scrollDraggingStartOffset=_scrollDraggingStartOffset;
@property(retain, nonatomic) NSArray *remainingPages; // @synthesize remainingPages=_remainingPages;
@property(retain, nonatomic) NSArray *currentPages; // @synthesize currentPages=_currentPages;
@property(readonly, nonatomic) NSArray *pages; // @synthesize pages=_pages;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) NSArray *pageDescriptions; // @synthesize pageDescriptions=_pageDescriptions;
@property(retain, nonatomic) NSArray *pageSubtitles; // @synthesize pageSubtitles=_pageSubtitles;
@property(retain, nonatomic) NSArray *pageTitles; // @synthesize pageTitles=_pageTitles;
@property(retain, nonatomic) NSArray *pageImageViews; // @synthesize pageImageViews=_pageImageViews;
@property(readonly, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(readonly, nonatomic) SPTDrivingLinearGradientView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) __weak id <SPTDrivingOnboardingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)setupBottomViewForPageAtIndex:(unsigned long long)arg1 pageTransitionProgress:(double)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)handleScrollViewDidEndScrolling:(id)arg1;
- (_Bool)onboardingPageRequiresUserApproval:(id)arg1;
- (unsigned long long)numberOfPages;
- (unsigned long long)currentPageIndexInScrollView:(id)arg1;
- (void)notifyPageShownAtIndex:(unsigned long long)arg1;
- (void)applyThemeLayout;
- (id)createLayout;
- (void)removeViewConstraints;
- (void)addViewConstraints;
- (void)didTapNotNowButton:(id)arg1;
- (void)didTapDeclineButton:(id)arg1;
- (void)didTapAcceptButton:(id)arg1;
- (void)presentRemainingPages;
- (void)createViewsForPages:(id)arg1;
- (id)initWithGlueTheme:(id)arg1 delegate:(id)arg2 pages:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
