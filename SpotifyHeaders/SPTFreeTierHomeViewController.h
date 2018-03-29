//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "EXP_HUBViewContentOffsetObserver.h"
#import "EXP_SPTHubViewModelProviderDelegate.h"
#import "SPTFreeTierTasteOnboardingCurationObserver.h"
#import "SPTNavigationControllerNavigationBarState.h"
#import "SPTOfflineModeStateObserver.h"
#import "SPTPageController.h"
#import "SPTScrollToTopViewController.h"
#import "SPViewController.h"

@class EXP_HUBComponentRegistry, NSString, NSURL, SPTFreeTierHomeNavigationItemDecorator, SPTFreeTierHomeView, SPTFreeTierHomeViewModelProviderImplementation, UIView;

@interface SPTFreeTierHomeViewController : UIViewController <EXP_SPTHubViewModelProviderDelegate, SPTScrollToTopViewController, EXP_HUBViewContentOffsetObserver, SPTOfflineModeStateObserver, SPTFreeTierTasteOnboardingCurationObserver, SPTPageController, SPTNavigationControllerNavigationBarState, SPViewController>
{
    _Bool _completedOnboardingPreviousStatus;
    NSString *_pageIdentifier;
    NSURL *_pageURI;
    SPTFreeTierHomeNavigationItemDecorator *_navigationItemDecorator;
    SPTFreeTierHomeViewModelProviderImplementation *_viewModelProvider;
    id <GLUETheme> _theme;
    NSURL *_viewURI;
    EXP_HUBComponentRegistry *_componentRegistry;
    id <EXP_HUBComponentLayoutManager> _componentLayoutManager;
    id <EXP_HUBImageLoaderFactory> _imageLoaderFactory;
    id <EXP_HUBComponentEventHandler> _componentEventHandler;
    id <EXP_SPTHubLoadingLogger> _loadingLogger;
    id <SPTOfflineModeState> _offlineModeState;
    UIView *_offlineStateView;
}

@property(nonatomic) _Bool completedOnboardingPreviousStatus; // @synthesize completedOnboardingPreviousStatus=_completedOnboardingPreviousStatus;
@property(retain, nonatomic) UIView *offlineStateView; // @synthesize offlineStateView=_offlineStateView;
@property(retain, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) id <EXP_SPTHubLoadingLogger> loadingLogger; // @synthesize loadingLogger=_loadingLogger;
@property(retain, nonatomic) id <EXP_HUBComponentEventHandler> componentEventHandler; // @synthesize componentEventHandler=_componentEventHandler;
@property(readonly, nonatomic) id <EXP_HUBImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(readonly, nonatomic) id <EXP_HUBComponentLayoutManager> componentLayoutManager; // @synthesize componentLayoutManager=_componentLayoutManager;
@property(readonly, nonatomic) EXP_HUBComponentRegistry *componentRegistry; // @synthesize componentRegistry=_componentRegistry;
@property(readonly, copy, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTFreeTierHomeViewModelProviderImplementation *viewModelProvider; // @synthesize viewModelProvider=_viewModelProvider;
@property(retain, nonatomic) SPTFreeTierHomeNavigationItemDecorator *navigationItemDecorator; // @synthesize navigationItemDecorator=_navigationItemDecorator;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI; // @synthesize pageURI=_pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
- (void).cxx_destruct;
- (id)URI;
- (void)loadViewModelOrShowOfflineView;
- (void)tasteOnboardingDidUpdateTaste:(id)arg1;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)hubView:(id)arg1 contentOffsetDidChange:(struct CGPoint)arg2;
- (unsigned long long)preferredNavigationBarState;
- (void)viewModelDidLoad:(id)arg1;
- (void)spt_scrollToTop;
- (id)provideStatusBarBackgroundColorForScrollProgress:(double)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithTheme:(id)arg1 viewURI:(id)arg2 componentRegistry:(id)arg3 componentLayoutManager:(id)arg4 imageLoaderFactory:(id)arg5 commandHandler:(id)arg6 viewModelProvider:(id)arg7 loadingLogger:(id)arg8 offlineModeState:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTFreeTierHomeView *view; // @dynamic view;

@end

