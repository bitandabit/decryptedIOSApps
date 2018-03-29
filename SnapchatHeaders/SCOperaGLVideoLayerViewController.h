//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCImageProcessVideoPlaybackSessionListener-Protocol.h"
#import "SCMotionManagerListener-Protocol.h"
#import "SCOperaFadeTransitionCompatibleViewController-Protocol.h"
#import "SCOperaLayerViewControllerMediaContainer-Protocol.h"
#import "SCOperaRotatingLayerPinchControllerDelegate-Protocol.h"

@class AVAsset, AVPlayer, NSNotificationCenter, NSString, SCCAEAGLView, SCFrameableContainerView, SCImageProcessVideoPlaybackSession, SCOperaGLVideoLayerView, SCOperaRotatingLayerPinchController, SCOperaRotatingViewTransformManipulator, UIView;

@interface SCOperaGLVideoLayerViewController : SCOperaLayerViewController <SCImageProcessVideoPlaybackSessionListener, SCMotionManagerListener, SCOperaRotatingLayerPinchControllerDelegate, SCOperaLayerViewControllerMediaContainer, SCOperaFadeTransitionCompatibleViewController>
{
    SCOperaGLVideoLayerView *_layerView;
    SCOperaRotatingViewTransformManipulator *_rotatingViewManipulator;
    SCFrameableContainerView *_containerView;
    SCCAEAGLView *_glView;
    NSNotificationCenter *_notificationCenter;
    AVAsset *_videoAsset;
    AVPlayer *_player;
    SCImageProcessVideoPlaybackSession *_videoPlaybackSession;
    _Bool _isRotatingVideoLayout;
    _Bool _playbackStarted;
    _Bool _hasPreparePlaybackForFastStart;
    _Bool _hasSentMediaStartsToPlayEvent;
    SCOperaRotatingLayerPinchController *_pinchController;
    _Bool _shouldRestoreToOppositeState;
    _Bool _hasFullyAppearedOnScreen;
    UIView *_pinchGestureTarget;
}

@property(nonatomic) __weak UIView *pinchGestureTarget; // @synthesize pinchGestureTarget=_pinchGestureTarget;
- (void).cxx_destruct;
- (_Bool)isOverlay;
- (struct CGSize)_contentSize;
- (double)mediaHeightToWidthAspectRatio;
- (struct CGRect)mediaViewFrame;
- (id)fadingViewsForFadeTransition;
- (id)movingViewsForFadeTransition;
- (void)_setupPinchController;
- (void)pinchControllerRequestsTransformUpdate:(double)arg1;
- (void)pinchControllerDidFinishPinch:(double)arg1;
- (void)didUpdateRotation:(double)arg1 translation:(struct CGVector)arg2;
- (void)_stopListenToMotionManagerIfNecessary;
- (void)_listenToMotionManagerIfNecessary;
- (void)_setShouldLoop:(_Bool)arg1;
- (void)videoPlaybackSession:(id)arg1 didRenderFrameAtTime:(CDStruct_1b6d18a9)arg2;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)_sendMediaStartsToDisplayIfNecessary;
- (id)_glCommandsForKey:(id)arg1;
- (id)_reverseAudioData;
- (id)_audioProcessorMix;
- (id)_videoAsset;
- (void)_teardownPlaybackSession;
- (long long)_parseGLRenderOrientationFromTrack:(id)arg1;
- (id)_playerForWaveformData:(id)arg1 audioProcessorMix:(id)arg2;
- (void)_applyAudioProcessorMixToPlaybackSessionIfNecessary;
- (void)_configurePlaybackSessionForAsset:(id)arg1;
- (void)_setupPlaybackSessionIfNecessary;
- (void)_stopPlaybackIfNecessary;
- (void)_preparePlaybackForFastStartIfNecessary;
- (void)_startPlaybackIfNecessary;
- (void)_resetTrackingParams;
- (void)_stopVideoAndTeadDownSession;
- (void)_handlePinchScaleSuppressionUpdate:(_Bool)arg1;
- (void)_resetHorizontalPageOffset;
- (void)updateViewWithHorizontalPageOffset:(double)arg1 isCurrentPage:(_Bool)arg2;
- (id)currentViewParameters;
- (void)teardown;
- (void)didReceiveUpdateProperties:(id)arg1;
- (void)setVolume:(double)arg1;
- (_Bool)mediaIsBeingPreparedForDisplay;
- (void)neighborViewDidFullyAppearWithCurrentViewRelativePosition:(unsigned long long)arg1;
- (id)shareableMedia;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1;
- (void)viewDidFullyDisappear;
- (void)viewDidFullyAppear;
- (void)viewWillFullyAppear;
- (void)_updateLayerLayout:(_Bool)arg1;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)loadView;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3 notificationCenter:(id)arg4;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

