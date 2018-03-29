//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCOperaVideoControlsViewDataSource-Protocol.h"
#import "SCOperaVideoControlsViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class FBKVOController, FLAnimatedImageView, NSString, NSTimer, SCBaseMediaThumbnailViewModel, SCDiscoverBarView, SCLoadingIndicatorView, SCOperaVideoControlsView, SCPlayerView, UIImageView, UIPanGestureRecognizer, UIScrollView, UITapGestureRecognizer, UIViewController;
@protocol SCBaseMediaFullScreenDelegate><SCDiscoverBarDelegate, SCMediaFullScreenViewDelegate;

@interface SCBaseMediaFullScreenView : UIView <SCOperaVideoControlsViewDataSource, SCOperaVideoControlsViewDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    UIViewController<SCMediaFullScreenViewDelegate> *_parentVC;
    UIPanGestureRecognizer *_panGesture;
    UITapGestureRecognizer *_tapToDismissGesture;
    struct CGPoint _startPanningOffsetFromCenter;
    _Bool _isReady;
    _Bool _isSeeking;
    id _videoTimeObserver;
    _Bool _shouldDisableAudio;
    _Bool _shouldDisableZoom;
    SCBaseMediaThumbnailViewModel *_viewModel;
    long long _virtualOrientation;
    id <SCBaseMediaFullScreenDelegate><SCDiscoverBarDelegate> _delegate;
    UIView *_blackView;
    UIScrollView *_animationBoundingView;
    UIView *_containerView;
    FLAnimatedImageView *_imageView;
    UIImageView *_videoOverlayView;
    SCPlayerView *_videoView;
    SCOperaVideoControlsView *_videoControlsView;
    NSTimer *_controlsFadeTimer;
    SCLoadingIndicatorView *_activityIndicator;
    SCDiscoverBarView *_discoverBar;
    FBKVOController *_videoObserveController;
    struct CGRect _destinationBoundingFrame;
}

+ (struct CGRect)_overreachFrameForFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGRect destinationBoundingFrame; // @synthesize destinationBoundingFrame=_destinationBoundingFrame;
@property(retain, nonatomic) FBKVOController *videoObserveController; // @synthesize videoObserveController=_videoObserveController;
@property(retain, nonatomic) SCDiscoverBarView *discoverBar; // @synthesize discoverBar=_discoverBar;
@property(retain, nonatomic) SCLoadingIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) NSTimer *controlsFadeTimer; // @synthesize controlsFadeTimer=_controlsFadeTimer;
@property(retain, nonatomic) SCOperaVideoControlsView *videoControlsView; // @synthesize videoControlsView=_videoControlsView;
@property(retain, nonatomic) SCPlayerView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) UIImageView *videoOverlayView; // @synthesize videoOverlayView=_videoOverlayView;
@property(retain, nonatomic) FLAnimatedImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIScrollView *animationBoundingView; // @synthesize animationBoundingView=_animationBoundingView;
@property(retain, nonatomic) UIView *blackView; // @synthesize blackView=_blackView;
@property(nonatomic) __weak id <SCBaseMediaFullScreenDelegate><SCDiscoverBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long virtualOrientation; // @synthesize virtualOrientation=_virtualOrientation;
@property(readonly, nonatomic) SCBaseMediaThumbnailViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)fullScreenViewWasDismissed;
- (void)fullScreenViewEndPanning;
- (_Bool)shouldEnableZoom;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)_removeTimeObserver;
- (void)_attachTimeObserver;
- (CDStruct_1b6d18a9)duration;
- (CDStruct_1b6d18a9)currentTime;
- (void)setProgress:(double)arg1 forIndex:(unsigned long long)arg2;
- (void)seekToTime:(double)arg1 tolerance:(CDStruct_1b6d18a9)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)seekToTime:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_rotateVideoWithTransform:(struct CGAffineTransform)arg1;
- (void)_setTargetOrientation:(long long)arg1 andRotateView:(_Bool)arg2;
- (void)_fadeOutControls;
- (void)_fadeInControls;
- (void)_setupControlsFadeTimer;
- (void)videoControlsViewDidPressShowActionMenuButton:(id)arg1;
- (void)videoControlsView:(id)arg1 didSeekToTime:(double)arg2;
- (void)videoControlsViewDidPressExit:(id)arg1;
- (void)videoControlsView:(id)arg1 didEndSeekingWithPlayButtonToggled:(_Bool)arg2;
- (void)videoControlsViewDidBeginSeeking:(id)arg1;
- (void)videoControlsView:(id)arg1 didTogglePlay:(_Bool)arg2;
- (void)videoControlsView:(id)arg1 didToggleRotateLeft:(_Bool)arg2;
- (void)videoControlsView:(id)arg1 didToggleCaption:(_Bool)arg2;
- (void)videoControlsView:(id)arg1 didToggleVolume:(_Bool)arg2;
- (long long)displayedMediaType;
- (id)displayedMediaId;
- (_Bool)isShowingStoryReply;
- (id)mediaTypeString;
- (id)storyReplyMessageToLog;
- (void)resetPlayer;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)cleanUpVideo;
- (void)pauseVideo;
- (void)playVideo;
- (void)_hideVideoViews;
- (void)_showVideoViews;
- (double)ratio:(double)arg1;
- (void)hideSpinner;
- (void)showSpinner;
- (void)_setContainerViewCornerRadii:(double)arg1;
- (struct CGRect)_discoverBarFrameForFrame:(struct CGRect)arg1;
- (struct CGRect)_containerViewFrameWithFullScreenFrame:(struct CGRect)arg1;
- (struct CGRect)finalExpandedContainerViewFrame;
- (void)cleanUp;
- (double)mediaAspectRatio;
- (double)dismissingCornerRadius;
- (void)dismissDidFinish:(_Bool)arg1;
- (struct CGAffineTransform)containerViewTransformWithDestinationFrame:(struct CGRect)arg1;
- (struct CGRect)_thumbnailFrameForView:(id)arg1;
- (struct CGRect)discoverBarInitialFrame;
- (struct CGRect)boundingViewInitialFrame;
- (struct CGRect)containerViewInitialFrame;
- (void)transitToDismiss;
- (void)prepareToDismiss;
- (void)cancelPanDismiss;
- (void)animatePanDismiss;
- (void)finishPan:(id)arg1;
- (struct CGAffineTransform)_transformWithTranslation:(struct CGPoint)arg1;
- (void)didPan:(id)arg1;
- (void)willPan:(id)arg1;
- (_Bool)_isPanningDown:(id)arg1;
- (void)handleDownPan:(id)arg1;
- (void)disablePanGesture:(_Bool)arg1;
- (void)_dismissFullScreenViewWithAnimation:(_Bool)arg1;
- (_Bool)_shouldShowVideoControlsView;
- (void)_toggleVideoControlsView;
- (void)disableTapGesture:(_Bool)arg1;
- (void)handleTap:(id)arg1;
- (void)expandDidFinish:(_Bool)arg1;
- (void)_logInvalidFrame;
- (void)expandWithAnimation:(_Bool)arg1;
- (void)expand;
- (void)_layoutContainerView;
- (void)_playVideoWithPlayerItem:(id)arg1;
- (void)setUpVideo;
- (void)populateContents;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)dealloc;
- (void)initContainerView;
- (void)initBoundingView;
- (void)initBlackView;
- (id)initWithParentVC:(id)arg1 delegate:(id)arg2 viewModel:(id)arg3 shouldDisableAudio:(_Bool)arg4 shouldDisableZoom:(_Bool)arg5;
- (id)storyReplyViewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

