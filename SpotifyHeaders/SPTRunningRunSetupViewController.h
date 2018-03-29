//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPObjectRepresentation.h"
#import "SPTImageLoaderDelegate.h"
#import "SPTNavigationControllerNavigationBarState.h"
#import "SPTPageController.h"
#import "SPTRunningRunSetupModelDelegate.h"
#import "SPTRunningTempoStepperDelegate.h"

@class NSString, NSURL, SPTInfoView, SPTProgressView, SPTRunningImageCache, SPTRunningRunSetupModel, SPTRunningRunSetupView, SPTTheme;

@interface SPTRunningRunSetupViewController : UIViewController <SPTRunningRunSetupModelDelegate, SPTNavigationControllerNavigationBarState, SPTImageLoaderDelegate, SPTRunningTempoStepperDelegate, SPObjectRepresentation, SPTPageController>
{
    SPTRunningRunSetupModel *_model;
    id <SPTRunningUserInterfaceFactory> _userInterfaceFactory;
    id <SPTImageLoader> _imageLoader;
    id <SPTRunningTestManager> _testManager;
    SPTRunningImageCache *_imageCache;
    id <SPTMetaViewController> _metaViewController;
    SPTTheme *_runningTheme;
    SPTInfoView *_offlineView;
    SPTInfoView *_errorView;
    SPTProgressView *_progressView;
    SPTRunningRunSetupView *_mainView;
    double _lastNPBHeight;
}

@property(nonatomic) double lastNPBHeight; // @synthesize lastNPBHeight=_lastNPBHeight;
@property(retain, nonatomic) SPTRunningRunSetupView *mainView; // @synthesize mainView=_mainView;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) SPTInfoView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) SPTInfoView *offlineView; // @synthesize offlineView=_offlineView;
@property(retain, nonatomic) SPTTheme *runningTheme; // @synthesize runningTheme=_runningTheme;
@property(retain, nonatomic) id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
@property(retain, nonatomic) SPTRunningImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) id <SPTRunningTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) id <SPTRunningUserInterfaceFactory> userInterfaceFactory; // @synthesize userInterfaceFactory=_userInterfaceFactory;
@property(retain, nonatomic) SPTRunningRunSetupModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (id)spt_referrerIdentifier;
@property(readonly, nonatomic) NSURL *cacheKey;
- (void)tempoStemper:(id)arg1 didUpdateValue:(unsigned long long)arg2 fromValue:(unsigned long long)arg3;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)startButtonDidTouchUpInside:(id)arg1;
- (void)manualButtonDidTouchUpInside:(id)arg1;
- (unsigned long long)preferredNavigationBarState;
- (id)objectRepresentation;
- (_Bool)restoreWithObjectRepresentation:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)syncOfflineModeStateWithOfflineView;
- (void)runningRunSetupModelWillStartPlaying:(id)arg1;
- (void)runningRunSetupModelDidFinishPlayingPrerollAd:(id)arg1;
- (void)runningRunSetupModelDidChangeDetectionProgress:(id)arg1;
- (void)runningRunSetupModelDidChangeTempo:(id)arg1;
- (void)runningRunSetupModelDidChangeStep:(id)arg1;
- (void)runningRunSetupModelDidStartPlaying:(id)arg1;
- (void)runningRunSetupModelDidFinishLoading:(id)arg1 withError:(id)arg2;
- (void)runningRunSetupModelDidChangeOfflineState:(id)arg1;
- (void)restoreNPB;
- (void)hideNPB;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)hidesBottomBarWhenPushed;
- (void)viewDidLoad;
- (id)initWithModel:(id)arg1 userInterfaceFactory:(id)arg2 imageLoader:(id)arg3 testManager:(id)arg4 imageCache:(id)arg5 metaViewController:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

