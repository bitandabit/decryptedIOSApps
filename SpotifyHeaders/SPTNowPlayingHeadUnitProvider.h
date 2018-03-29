//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTNowPlayingBaseUnitProvider.h"

@class SPTNowPlayingLogger, SPTNowPlayingModel, SPTNowPlayingRemoteControlEventController, SPTNowPlayingTestManager, SPTPlayerState, SPTTheme;

@interface SPTNowPlayingHeadUnitProvider : SPTNowPlayingBaseUnitProvider
{
    id <SPTFormatListPlatformRemoteControlPolicyFactory> _formatListPlatformRemoteControlPolicyFactory;
    id <SPTPSXTestManager> _psxTestManager;
    id <SPTFeedbackViewModel> _feedbackViewModel;
    SPTTheme *_theme;
    SPTNowPlayingModel *_model;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTAdsManager> _adsManager;
    id <SPTUpsellManager> _upsellManager;
    SPTNowPlayingLogger *_logger;
    id <SPTQueueLogger> _queueLogger;
    id <SPTRunningPlaybackManager> _runningPlaybackManager;
    id <SPTRunningUserInterfaceFactory> _userInterfaceFactory;
    id <SPTRunningTestManager> _runningTestManager;
    id <SPTOfflineModeState> _offlineModeState;
    id <SPTRunningLocalisationManager> _localisationManager;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    id <SPTPageRegistry> _pageRegistry;
    SPTNowPlayingTestManager *_testManager;
    SPTNowPlayingRemoteControlEventController *_remoteControlController;
    id <SPTNowPlayingRemoteControlPolicyRegistry> _remoteControlPolicyRegistry;
    id <SPTPodcastContextMenuProvider> _podcastContextMenuProvider;
    id <SPTDailyMixFeedbackUIModel> _dailyMixFeedbackModel;
    id <SPTNowPlayingFeedbackObservable> _feedbackObservable;
    SPTPlayerState *_headUnitPlayerState;
}

@property(retain, nonatomic) SPTPlayerState *headUnitPlayerState; // @synthesize headUnitPlayerState=_headUnitPlayerState;
@property(retain, nonatomic) id <SPTNowPlayingFeedbackObservable> feedbackObservable; // @synthesize feedbackObservable=_feedbackObservable;
@property(nonatomic) __weak id <SPTDailyMixFeedbackUIModel> dailyMixFeedbackModel; // @synthesize dailyMixFeedbackModel=_dailyMixFeedbackModel;
@property(readonly, nonatomic) __weak id <SPTPodcastContextMenuProvider> podcastContextMenuProvider; // @synthesize podcastContextMenuProvider=_podcastContextMenuProvider;
@property(retain, nonatomic) id <SPTNowPlayingRemoteControlPolicyRegistry> remoteControlPolicyRegistry; // @synthesize remoteControlPolicyRegistry=_remoteControlPolicyRegistry;
@property(nonatomic) __weak SPTNowPlayingRemoteControlEventController *remoteControlController; // @synthesize remoteControlController=_remoteControlController;
@property(retain, nonatomic) SPTNowPlayingTestManager *testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTPageRegistry> pageRegistry; // @synthesize pageRegistry=_pageRegistry;
@property(retain, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(retain, nonatomic) id <SPTRunningLocalisationManager> localisationManager; // @synthesize localisationManager=_localisationManager;
@property(retain, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(nonatomic) __weak id <SPTRunningTestManager> runningTestManager; // @synthesize runningTestManager=_runningTestManager;
@property(retain, nonatomic) id <SPTRunningUserInterfaceFactory> userInterfaceFactory; // @synthesize userInterfaceFactory=_userInterfaceFactory;
@property(retain, nonatomic) id <SPTRunningPlaybackManager> runningPlaybackManager; // @synthesize runningPlaybackManager=_runningPlaybackManager;
@property(retain, nonatomic) id <SPTQueueLogger> queueLogger; // @synthesize queueLogger=_queueLogger;
@property(retain, nonatomic) SPTNowPlayingLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPTUpsellManager> upsellManager; // @synthesize upsellManager=_upsellManager;
@property(nonatomic) __weak id <SPTAdsManager> adsManager; // @synthesize adsManager=_adsManager;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(retain, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTFeedbackViewModel> feedbackViewModel; // @synthesize feedbackViewModel=_feedbackViewModel;
@property(readonly, nonatomic) id <SPTPSXTestManager> psxTestManager; // @synthesize psxTestManager=_psxTestManager;
@property(readonly, nonatomic) id <SPTFormatListPlatformRemoteControlPolicyFactory> formatListPlatformRemoteControlPolicyFactory; // @synthesize formatListPlatformRemoteControlPolicyFactory=_formatListPlatformRemoteControlPolicyFactory;
- (void).cxx_destruct;
- (void)applyNewHeadUnitViewController:(id)arg1;
- (void)updateRemoteControlPolicyPlayerState;
- (void)createFreeTierHeadUnit:(_Bool)arg1;
- (void)createShowsFormatHeadUnit;
- (void)createAdHeadUnit;
- (void)createPodcastHeadUnit;
- (void)createRunningHeadUnit;
- (void)createFeedbackHeadUnitWithContextURI:(id)arg1 remoteControlPolicy:(id)arg2;
- (void)createFormatListHeadUnitWithContextURI:(id)arg1;
- (void)createDailyMixHeadUnitWithContextURI:(id)arg1;
- (void)createRadioHeadUnit;
- (void)createMusicHeadUnit;
- (_Bool)isDisplayingHeadUnitVCOfSpecificClass:(Class)arg1;
- (_Bool)isDisplayingHeadUnitVCOfClass:(Class)arg1;
- (_Bool)isDisplayingHeadUnitVCMatching:(CDUnknownBlockType)arg1;
- (_Bool)isPodcast:(id)arg1;
- (void)processContextURIChange:(id)arg1 withTrack:(id)arg2 playerState:(id)arg3;
- (void)processPlayerStateChange:(id)arg1 toggleMode:(unsigned long long)arg2;
- (id)initWithPlayer:(id)arg1 model:(id)arg2 theme:(id)arg3 contextMenuFeature:(id)arg4 adsManager:(id)arg5 upsellManager:(id)arg6 logger:(id)arg7 queueLogger:(id)arg8 runningPlaybackManager:(id)arg9 userInterfaceFactory:(id)arg10 runningTestManager:(id)arg11 offlineModeState:(id)arg12 localisationManager:(id)arg13 imageLoaderFactory:(id)arg14 pageRegistry:(id)arg15 testManager:(id)arg16 remoteControlController:(id)arg17 remoteControlPolicyRegistry:(id)arg18 remoteControlPolicyFactory:(id)arg19 feedbackObservable:(id)arg20 podcastContextMenuProvider:(id)arg21 nowPlayingManager:(id)arg22 dailyMixFeedbackUIModel:(id)arg23 psxTestManager:(id)arg24 feedbackViewModel:(id)arg25;

@end

