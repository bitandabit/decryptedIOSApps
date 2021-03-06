//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTAdOverlayContainerDataSource.h"
#import "SPTAdOverlayContainerViewDataSource.h"
#import "SPTAdOverlayContentUnit.h"
#import "SPTImageLoaderDelegate.h"
#import "SPTPlayerObserver.h"

@class CADisplayLink, NSString, SPTAdCosmosBridge, SPTAdOverlayEndcardContentView, SPTTheme;

@interface SPTAdOverlayEndcardContentViewController : UIViewController <SPTImageLoaderDelegate, SPTPlayerObserver, SPTAdOverlayContentUnit, SPTAdOverlayContainerDataSource, SPTAdOverlayContainerViewDataSource>
{
    id <SPTAdOverlayContentUnitDelegate> _delegate;
    id <SPTAdAudioEntity> _entity;
    id <SPTAdsManager> _adManager;
    id <SPTPlayer> _player;
    id <SPTImageLoader> _imageLoader;
    SPTAdCosmosBridge *_cosmosBridge;
    SPTTheme *_theme;
    id <SPTAdEventLogger> _eventLogger;
    CADisplayLink *_displayLink;
    double _rewardEndTime;
}

@property(nonatomic) double rewardEndTime; // @synthesize rewardEndTime=_rewardEndTime;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) id <SPTAdEventLogger> eventLogger; // @synthesize eventLogger=_eventLogger;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTAdCosmosBridge *cosmosBridge; // @synthesize cosmosBridge=_cosmosBridge;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SPTAdsManager> adManager; // @synthesize adManager=_adManager;
@property(retain, nonatomic) id <SPTAdAudioEntity> entity; // @synthesize entity=_entity;
@property(nonatomic) __weak id <SPTAdOverlayContentUnitDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateRemainingTimeLabel:(double)arg1;
- (void)updateRewardProgress:(CDUnknownBlockType)arg1;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)containerWillDismiss:(id)arg1;
- (id)dismissButtonTitleForAdOverlayContainerView:(id)arg1;
- (id)titleForAdOverlayContainerView:(id)arg1;
- (_Bool)canDismissAdOverlayContainer:(id)arg1;
- (void)displayLinkDidFire:(id)arg1;
- (void)actionButtonTapped;
@property(readonly, nonatomic, getter=isCountdownActive) _Bool countdownActive;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithEntity:(id)arg1 adManager:(id)arg2 imageLoader:(id)arg3 player:(id)arg4 cosmosBridge:(id)arg5 theme:(id)arg6 eventLogger:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTAdOverlayEndcardContentView *view; // @dynamic view;

@end

