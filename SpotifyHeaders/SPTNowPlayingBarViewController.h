//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPViewController.h"

#import "SPBarTransitableViewController.h"
#import "SPForegroundObserverDelegate.h"
#import "SPTGaiaOnboardingManagerObserver.h"
#import "SPTNowPlayingBarModelDelegate.h"
#import "SPTNowPlayingBarViewControllerObservable.h"
#import "SPTPlayerTrackScrollDataSourceDelegate.h"
#import "SPTPlayerTrackScrollViewOffsetDelegate.h"

@class NSString, NSTimer, SPForegroundObserver, SPTNowPlayingBarContentProviderRegistryImplementation, SPTNowPlayingBarContentView, SPTNowPlayingBarModel, SPTNowPlayingLogger, SPTObserverManager, SPTPlayerTrackScrollDataSource, SPTTheme, UIView<SPTGaiaDevicesAvailableView>, UIViewController;

@interface SPTNowPlayingBarViewController : SPViewController <SPBarTransitableViewController, SPForegroundObserverDelegate, SPTPlayerTrackScrollDataSourceDelegate, SPTGaiaOnboardingManagerObserver, SPTPlayerTrackScrollViewOffsetDelegate, SPTNowPlayingBarModelDelegate, SPTNowPlayingBarViewControllerObservable>
{
    _Bool _barShown;
    SPTNowPlayingBarModel *_nowPlayingModel;
    id <SPTUpsellManager> _upsellManager;
    id <SPTVideoSurfaceManager> _videoSurfaceManager;
    id <SPTGaiaManager> _gaiaManager;
    id <SPTGaiaOnboardingManager> _gaiaOnboardingManager;
    SPTTheme *_theme;
    UIView<SPTGaiaDevicesAvailableView> *_devicesAvailableView;
    SPTNowPlayingBarContentProviderRegistryImplementation *_barContentProviderRegistry;
    SPTNowPlayingBarContentView *_contentView;
    SPTPlayerTrackScrollDataSource *_playerTrackScrollDataSource;
    SPForegroundObserver *_foregroundObserver;
    UIViewController *_informationViewController;
    NSTimer *_informationViewTimeoutTimer;
    SPTNowPlayingLogger *_logger;
    id <SPTNowPlayingManager> _nowPlayingManager;
    id <NSObject> _SPTBarObserverObject;
    id <NSObject> _SPTBarObserverObjectForPersistence;
    id <NSObject> _SPTBarObserverForDevicesObject;
    id <NSObject> _SPTOverlayObserverObject;
    SPTObserverManager *_observerManager;
}

@property(nonatomic) _Bool barShown; // @synthesize barShown=_barShown;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(retain, nonatomic) id <NSObject> SPTOverlayObserverObject; // @synthesize SPTOverlayObserverObject=_SPTOverlayObserverObject;
@property(retain, nonatomic) id <NSObject> SPTBarObserverForDevicesObject; // @synthesize SPTBarObserverForDevicesObject=_SPTBarObserverForDevicesObject;
@property(retain, nonatomic) id <NSObject> SPTBarObserverObjectForPersistence; // @synthesize SPTBarObserverObjectForPersistence=_SPTBarObserverObjectForPersistence;
@property(retain, nonatomic) id <NSObject> SPTBarObserverObject; // @synthesize SPTBarObserverObject=_SPTBarObserverObject;
@property(retain, nonatomic) id <SPTNowPlayingManager> nowPlayingManager; // @synthesize nowPlayingManager=_nowPlayingManager;
@property(retain, nonatomic) SPTNowPlayingLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak NSTimer *informationViewTimeoutTimer; // @synthesize informationViewTimeoutTimer=_informationViewTimeoutTimer;
@property(retain, nonatomic) UIViewController *informationViewController; // @synthesize informationViewController=_informationViewController;
@property(retain, nonatomic) SPForegroundObserver *foregroundObserver; // @synthesize foregroundObserver=_foregroundObserver;
@property(retain, nonatomic) SPTPlayerTrackScrollDataSource *playerTrackScrollDataSource; // @synthesize playerTrackScrollDataSource=_playerTrackScrollDataSource;
@property(retain, nonatomic) SPTNowPlayingBarContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) SPTNowPlayingBarContentProviderRegistryImplementation *barContentProviderRegistry; // @synthesize barContentProviderRegistry=_barContentProviderRegistry;
@property(retain, nonatomic) UIView<SPTGaiaDevicesAvailableView> *devicesAvailableView; // @synthesize devicesAvailableView=_devicesAvailableView;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <SPTGaiaOnboardingManager> gaiaOnboardingManager; // @synthesize gaiaOnboardingManager=_gaiaOnboardingManager;
@property(retain, nonatomic) id <SPTGaiaManager> gaiaManager; // @synthesize gaiaManager=_gaiaManager;
@property(retain, nonatomic) id <SPTVideoSurfaceManager> videoSurfaceManager; // @synthesize videoSurfaceManager=_videoSurfaceManager;
@property(nonatomic) __weak id <SPTUpsellManager> upsellManager; // @synthesize upsellManager=_upsellManager;
@property(retain, nonatomic) SPTNowPlayingBarModel *nowPlayingModel; // @synthesize nowPlayingModel=_nowPlayingModel;
- (void).cxx_destruct;
- (void)presentGaiaOnboarding;
- (void)playerTrackScrollView:(id)arg1 scrolledToRelativeIndex:(long long)arg2;
- (void)playerTrackScrollViewChangedOffset:(id)arg1;
- (void)gaiaOnboardingManager:(id)arg1 didCreateStoryForNewDevice:(id)arg2;
- (void)informationViewControllerTimedOut:(id)arg1;
- (void)nowPlayingBarModelDidUpdateTrackMetaData:(id)arg1;
- (void)nowPlayingBarModelDidUpdatePlayingState:(id)arg1;
- (void)foregroundObserverDidHibernate:(id)arg1;
- (void)foregroundObserverDidAwake:(id)arg1;
- (id)playerTrackScrollDataSource:(id)arg1 pageViewWithFrame:(struct CGRect)arg2 reuseIdentifier:(id)arg3;
- (void)playPauseChanged;
- (void)playPause;
- (void)removeNowPlayingBarViewControllerObserver:(id)arg1;
- (void)addNowPlayingBarViewControllerObserver:(id)arg1;
- (id)leftAccessoryProviderForCurrentTrack;
- (id)contentProviderForCurrentTrack;
- (void)updateBarContentProviderWithCurrentTrack;
- (id)currentPlayerTrack;
- (void)handleTapGesture:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)removeSPBarObserversIfObserving;
- (void)setupSPBarObsrerversIfNotObserving;
- (void)sp_setBarTransitionProgress:(float)arg1;
- (id)viewEventURI;
- (void)dealloc;
- (id)initWithPlayingModel:(id)arg1 logger:(id)arg2 upsellManager:(id)arg3 videoSurfaceManager:(id)arg4 nowPlayingManager:(id)arg5 gaiaManager:(id)arg6 gaiaOnboardingManager:(id)arg7 theme:(id)arg8 devicesAvailableView:(id)arg9 barContentProviderRegistry:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
