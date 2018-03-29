//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCCardStyling-Protocol.h"
#import "SCPullToRefreshViewDelegate-Protocol.h"
#import "SCSearchCardContainerContentViewControllerContextDelegate-Protocol.h"
#import "SCSearchTabBarDelegate-Protocol.h"
#import "SwipeView-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, SCCardContainerView, SCCardGradientView, SCSearchCardContainerView, UIPanGestureRecognizer, UIView;

@interface SCSearchCardContainerViewController : UIViewController <SCSearchCardContainerContentViewControllerContextDelegate, SCSearchTabBarDelegate, SCPullToRefreshViewDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, SwipeView, SCCardStyling>
{
    NSArray *_cardContainerGradientColors;
    UIPanGestureRecognizer *_panGestureRecognizer;
    unsigned long long _selectedTabIndex;
    _Bool _isFirstViewDidLayoutSubview;
    _Bool _isHandlingPanGesture;
    _Bool _isTabInteractiveChanging;
    unsigned long long _fromSelectedTabIndex;
    unsigned long long _toSelectedTabIndex;
    double _fromTranslationX;
    long long _transitionDirectionFactor;
    long long _gesture;
    _Bool _shouldEnableTab;
    UIViewController *_parentController;
    UIViewController *_contentViewController;
    unsigned long long _panEnabledEdges;
    SCSearchCardContainerView *_searchCardContainerView;
    UIView *_contentView;
    double _cardContentTopInset;
    struct UIEdgeInsets _layoutInsets;
}

@property(nonatomic) double cardContentTopInset; // @synthesize cardContentTopInset=_cardContentTopInset;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) struct UIEdgeInsets layoutInsets; // @synthesize layoutInsets=_layoutInsets;
@property(retain, nonatomic) SCSearchCardContainerView *searchCardContainerView; // @synthesize searchCardContainerView=_searchCardContainerView;
@property(nonatomic) _Bool shouldEnableTab; // @synthesize shouldEnableTab=_shouldEnableTab;
@property(nonatomic) unsigned long long panEnabledEdges; // @synthesize panEnabledEdges=_panEnabledEdges;
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(copy, nonatomic) NSArray *cardContainerGradientColors; // @synthesize cardContainerGradientColors=_cardContainerGradientColors;
@property(nonatomic) __weak UIViewController *parentController; // @synthesize parentController=_parentController;
- (void).cxx_destruct;
- (void)_scrollToSelectedTab;
- (void)_selectTabIndexIfPossible:(unsigned long long)arg1;
- (void)_setSelectedTabIndex:(unsigned long long)arg1;
- (void)_notifyContentWithTabCancelInteractiveChange;
- (void)_notifyContentWithTabFinishInteractiveChange;
- (void)_notifyTabBeginInteractiveChangeFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)_notifyTabDidUpdateTransitionProgress:(double)arg1;
- (void)_startTabTransitionIfNeededWithTransitionDirectionFactor:(long long)arg1 fromTranslationX:(double)arg2;
- (void)_handlePanGesture:(id)arg1;
- (void)_handleLoadingContentUpdate:(_Bool)arg1;
- (void)_stopPullToRefreshBackgroundRenderViewAnimation;
- (void)_stopLoadingAnimation;
- (void)_startLoadingAnimation;
- (void)_updateCardBackgroundViewIfNeeded;
- (void)_updateWithTabs;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)pullToRefresh:(id)arg1 percentPulledDidChange:(double)arg2;
- (void)pullToRefresh:(id)arg1 refreshStateDidChange:(long long)arg2;
- (_Bool)pullToRefreshIsDataSourceLoading:(id)arg1;
- (_Bool)pullToRefreshShouldRefresh:(id)arg1;
- (void)searchTabBarDidUpdateSelectedIndexWithOffsetRatio:(id)arg1;
- (void)searchTabBar:(id)arg1 didSelectTabAtIndex:(unsigned long long)arg2;
- (void)cardContainerContentViewControllerContext:(id)arg1 wantsSelectTabIndexIfPossible:(unsigned long long)arg2;
- (void)cardContainerContentViewControllerContextDidUpdateLoadingContent:(id)arg1;
- (void)cardContainerContentViewControllerContextDidUpdateTabBarItems:(id)arg1;
- (void)cardBackgroundViewDidUpdateTopLayoutInset;
@property(retain, nonatomic) SCCardGradientView *cardGradientView;
@property(readonly, nonatomic) SCCardContainerView *cardContainerView;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateQueryForNotification;
- (void)tabBarTriggeredWithAction:(long long)arg1;
- (void)viewDidAppearAtOffset:(double)arg1;
- (void)viewCanAppear;
- (void)viewDidSwipeOut;
- (void)viewDidSwipeIn;
- (void)viewDidPartiallyDisappear;
- (void)viewDidPartiallyAppear;
- (void)viewDidFullyDisappear;
- (void)viewDidFullyAppear;
- (void)statusBarTapped;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
@property(readonly, nonatomic) UIView *sc_cardDimView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
