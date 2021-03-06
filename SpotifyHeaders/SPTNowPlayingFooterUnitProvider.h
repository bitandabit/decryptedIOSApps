//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTNowPlayingBaseUnitProvider.h"

@class SPTNowPlayingLogger, SPTNowPlayingTestManager, SPTNowPlayingTrackMetadataQueue, SPTNowPlayingTrackPosition, SPTPlayerState, SPTTheme, UIApplication, UIView;

@interface SPTNowPlayingFooterUnitProvider : SPTNowPlayingBaseUnitProvider
{
    UIView *_animationView;
    id <SPTGaiaManager> _gaiaManager;
    id <SPTGaiaOnboardingManager> _gaiaOnboardingManager;
    id <SPTNowPlayingManager> _nowPlayingManager;
    SPTNowPlayingTestManager *_testManager;
    SPTTheme *_theme;
    id <SPTDailyMixManager> _dailyMixManager;
    id <SPTDailyMixTestManager> _dailyMixTestManager;
    SPTNowPlayingTrackPosition *_trackPositionModel;
    SPTNowPlayingTrackMetadataQueue *_trackMetadataQueue;
    id <SPTGaiaDevicesAvailableViewProvider> _devicesAvailableViewProvider;
    id <SPTPSXTestManager> _psxTestManager;
    id <PlaylistFeature> _playlistFeature;
    id <SPTUpsellManager> _upsellManager;
    UIApplication *_application;
    id <SPTPersonalisedSetsNowPlayingFeedbackManagerFactory> _personalisedSetsNowPlayingFeedbackManagerFactory;
    SPTNowPlayingLogger *_logger;
    SPTPlayerState *_formerPlayerState;
}

@property(retain, nonatomic) SPTPlayerState *formerPlayerState; // @synthesize formerPlayerState=_formerPlayerState;
@property(readonly, nonatomic) SPTNowPlayingLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTPersonalisedSetsNowPlayingFeedbackManagerFactory> personalisedSetsNowPlayingFeedbackManagerFactory; // @synthesize personalisedSetsNowPlayingFeedbackManagerFactory=_personalisedSetsNowPlayingFeedbackManagerFactory;
@property(readonly, nonatomic) UIApplication *application; // @synthesize application=_application;
@property(readonly, nonatomic) id <SPTUpsellManager> upsellManager; // @synthesize upsellManager=_upsellManager;
@property(readonly, nonatomic) __weak id <PlaylistFeature> playlistFeature; // @synthesize playlistFeature=_playlistFeature;
@property(readonly, nonatomic) id <SPTPSXTestManager> psxTestManager; // @synthesize psxTestManager=_psxTestManager;
@property(retain, nonatomic) id <SPTGaiaDevicesAvailableViewProvider> devicesAvailableViewProvider; // @synthesize devicesAvailableViewProvider=_devicesAvailableViewProvider;
@property(readonly, nonatomic) SPTNowPlayingTrackMetadataQueue *trackMetadataQueue; // @synthesize trackMetadataQueue=_trackMetadataQueue;
@property(readonly, nonatomic) SPTNowPlayingTrackPosition *trackPositionModel; // @synthesize trackPositionModel=_trackPositionModel;
@property(readonly, nonatomic) id <SPTDailyMixTestManager> dailyMixTestManager; // @synthesize dailyMixTestManager=_dailyMixTestManager;
@property(readonly, nonatomic) id <SPTDailyMixManager> dailyMixManager; // @synthesize dailyMixManager=_dailyMixManager;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) __weak SPTNowPlayingTestManager *testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTNowPlayingManager> nowPlayingManager; // @synthesize nowPlayingManager=_nowPlayingManager;
@property(readonly, nonatomic) id <SPTGaiaOnboardingManager> gaiaOnboardingManager; // @synthesize gaiaOnboardingManager=_gaiaOnboardingManager;
@property(readonly, nonatomic) id <SPTGaiaManager> gaiaManager; // @synthesize gaiaManager=_gaiaManager;
@property(retain, nonatomic) UIView *animationView; // @synthesize animationView=_animationView;
- (void).cxx_destruct;
- (id)createChromecastBarViewController;
- (void)createNoUnit;
- (void)createShowsFormatUnit;
- (void)createDailyMixUnit:(id)arg1;
- (void)createChromecastUnit;
- (id)initWithPlayer:(id)arg1 gaiaManager:(id)arg2 gaiaOnboardingManager:(id)arg3 nowPlayingManager:(id)arg4 testManager:(id)arg5 theme:(id)arg6 devicesAvailableViewProvider:(id)arg7 dailyMixManager:(id)arg8 dailyMixTestManager:(id)arg9 trackPositionModel:(id)arg10 trackMetadataQueue:(id)arg11 animationView:(id)arg12 psxTestManager:(id)arg13 playlistFeature:(id)arg14 upsellManager:(id)arg15 application:(id)arg16 personalisedSetsNowPlayingFeedbackManagerFactory:(id)arg17 logger:(id)arg18;
- (void)processPlayerStateChange:(id)arg1 toggleMode:(unsigned long long)arg2;

@end

