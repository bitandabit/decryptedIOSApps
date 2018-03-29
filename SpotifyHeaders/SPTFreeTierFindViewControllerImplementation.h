//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "EXP_HUBViewContentOffsetObserver.h"
#import "EXP_SPTHubViewModelProviderDelegate.h"
#import "SPTFreeTierFindHeaderViewDelegate.h"
#import "SPTFreeTierFindViewController.h"
#import "SPTOfflineModeStateObserver.h"
#import "UIScrollViewDelegate.h"

@class EXP_HUBContainerView, EXP_SPTHubViewModelProvider, NSLayoutConstraint, NSString, SPTFreeTierFindHeaderView, SPTFreeTierFindLogger, SPTLayoutConstraintBuilder, UIView;

@interface SPTFreeTierFindViewControllerImplementation : UIViewController <SPTFreeTierFindHeaderViewDelegate, UIScrollViewDelegate, EXP_SPTHubViewModelProviderDelegate, EXP_HUBViewContentOffsetObserver, SPTOfflineModeStateObserver, SPTFreeTierFindViewController>
{
    id <SPTFreeTierFindViewControllerDelegate> _delegate;
    id <GLUETheme> _theme;
    EXP_HUBContainerView *_hubContainerView;
    EXP_SPTHubViewModelProvider *_viewModelProvider;
    SPTFreeTierFindHeaderView *_findHeaderView;
    SPTFreeTierFindLogger *_logger;
    id <SPTOfflineModeState> _offlineModeState;
    UIView *_offlineStateView;
    SPTLayoutConstraintBuilder *_layout;
    NSLayoutConstraint *_headerHeightConstraint;
    struct UIEdgeInsets _insets;
}

@property(retain, nonatomic) NSLayoutConstraint *headerHeightConstraint; // @synthesize headerHeightConstraint=_headerHeightConstraint;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UIView *offlineStateView; // @synthesize offlineStateView=_offlineStateView;
@property(retain, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(retain, nonatomic) SPTFreeTierFindLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTFreeTierFindHeaderView *findHeaderView; // @synthesize findHeaderView=_findHeaderView;
@property(retain, nonatomic) EXP_SPTHubViewModelProvider *viewModelProvider; // @synthesize viewModelProvider=_viewModelProvider;
@property(retain, nonatomic) EXP_HUBContainerView *hubContainerView; // @synthesize hubContainerView=_hubContainerView;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <SPTFreeTierFindViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
- (void).cxx_destruct;
- (void)loadViewModelOrShowOfflineView;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)spt_scrollToTop;
- (void)hubView:(id)arg1 contentOffsetDidChange:(struct CGPoint)arg2;
- (void)viewModelDidLoad:(id)arg1;
- (void)didTapSearchButtonInHeaderView:(id)arg1;
- (void)configureBrowseHubView;
- (void)configureHeaderView;
- (void)addConstraints;
- (void)viewDidLoad;
- (id)initWithTheme:(id)arg1 hubContainerView:(id)arg2 logger:(id)arg3 viewModelProvider:(id)arg4 offlineModeState:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
