//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBMediaViewDelegate.h"
#import "FBNativeAdDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class CADisplayLink, FBMediaView, GLUEGradientView, NSLayoutConstraint, NSString, NSTimer, SPTActionButton, SPTAdFacebookVideoEntity, SPTFBMediaViewVideoRenderer, SPTLayoutConstraintBuilder, SPTTheme, UIButton, UILabel, UIProgressView, UIView;

@interface SPTFacebookVideoViewController : UIViewController <FBNativeAdDelegate, FBMediaViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _didAnimateIn;
    _Bool _verticalVideo;
    _Bool _controlsVisible;
    SPTFBMediaViewVideoRenderer *_renderer;
    UIProgressView *_durationProgressView;
    id <SPTFacebookVideoViewControllerDataSource> _dataSource;
    FBMediaView *_mediaView;
    SPTAdFacebookVideoEntity *_videoEntity;
    id <SPTAdEventLogger> _adEventLogger;
    id <SPTAdsManager> _adsManager;
    SPTTheme *_theme;
    SPTLayoutConstraintBuilder *_layout;
    UIView *_headerContainer;
    UIView *_metadataContainer;
    UIView *_mediaContainer;
    UIView *_footerContainer;
    UIView *_gestureReceiver;
    UILabel *_headerLabel;
    UILabel *_advertisementLabel;
    UILabel *_titleLabel;
    GLUEGradientView *_gradientView;
    UIButton *_playbackControlButton;
    SPTActionButton *_learnMoreButton;
    CADisplayLink *_displayLink;
    UIView *_adChoicesView;
    NSLayoutConstraint *_headerTitleYPositionConstraint;
    NSLayoutConstraint *_metadataContainerYPositionConstraint;
    NSLayoutConstraint *_mediaViewCenterHeightConstraint;
    NSTimer *_playbackControlsTimer;
}

@property(retain, nonatomic) NSTimer *playbackControlsTimer; // @synthesize playbackControlsTimer=_playbackControlsTimer;
@property(nonatomic) _Bool controlsVisible; // @synthesize controlsVisible=_controlsVisible;
@property(nonatomic) _Bool verticalVideo; // @synthesize verticalVideo=_verticalVideo;
@property(nonatomic) _Bool didAnimateIn; // @synthesize didAnimateIn=_didAnimateIn;
@property(retain, nonatomic) NSLayoutConstraint *mediaViewCenterHeightConstraint; // @synthesize mediaViewCenterHeightConstraint=_mediaViewCenterHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *metadataContainerYPositionConstraint; // @synthesize metadataContainerYPositionConstraint=_metadataContainerYPositionConstraint;
@property(retain, nonatomic) NSLayoutConstraint *headerTitleYPositionConstraint; // @synthesize headerTitleYPositionConstraint=_headerTitleYPositionConstraint;
@property(retain, nonatomic) UIView *adChoicesView; // @synthesize adChoicesView=_adChoicesView;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) SPTActionButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property(retain, nonatomic) UIButton *playbackControlButton; // @synthesize playbackControlButton=_playbackControlButton;
@property(retain, nonatomic) GLUEGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *advertisementLabel; // @synthesize advertisementLabel=_advertisementLabel;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) UIView *gestureReceiver; // @synthesize gestureReceiver=_gestureReceiver;
@property(retain, nonatomic) UIView *footerContainer; // @synthesize footerContainer=_footerContainer;
@property(retain, nonatomic) UIView *mediaContainer; // @synthesize mediaContainer=_mediaContainer;
@property(retain, nonatomic) UIView *metadataContainer; // @synthesize metadataContainer=_metadataContainer;
@property(retain, nonatomic) UIView *headerContainer; // @synthesize headerContainer=_headerContainer;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTAdsManager> adsManager; // @synthesize adsManager=_adsManager;
@property(readonly, nonatomic) id <SPTAdEventLogger> adEventLogger; // @synthesize adEventLogger=_adEventLogger;
@property(retain, nonatomic) SPTAdFacebookVideoEntity *videoEntity; // @synthesize videoEntity=_videoEntity;
@property(retain, nonatomic) FBMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(nonatomic) __weak id <SPTFacebookVideoViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIProgressView *durationProgressView; // @synthesize durationProgressView=_durationProgressView;
@property(retain, nonatomic) SPTFBMediaViewVideoRenderer *renderer; // @synthesize renderer=_renderer;
- (void).cxx_destruct;
- (void)handleAdChoicesTap;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onDisplayLink:(id)arg1;
- (void)invalidateDisplayLink;
- (void)mediaViewDidLoad:(id)arg1;
- (void)setNativeAd:(id)arg1;
- (void)animateMediaView;
- (void)setShowsVideoControls:(_Bool)arg1 animated:(_Bool)arg2;
- (void)hidePlaybackControls;
- (void)showPlaybackControls;
- (void)updatePlaybackIcon;
- (void)playButtonPressed:(id)arg1;
- (void)gestureReceiverPressed:(id)arg1;
- (id)createLayoutConstraints;
- (void)updateViewConstraints;
- (void)stopPlaybackControlsTimer;
- (void)startPlaybackControlsTimer;
- (void)setupAdChoicesButton;
- (void)setupFooterContainer;
- (void)setupGestureReceiver;
- (id)createGradientView;
- (void)setupMediaContainer;
- (void)setupMetadataContainer;
- (void)setupHeaderContainer;
- (void)setupSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithEventLogger:(id)arg1 adsManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

