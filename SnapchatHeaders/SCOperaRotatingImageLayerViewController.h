//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCMotionManagerListener-Protocol.h"
#import "SCOperaFadeTransitionCompatibleViewController-Protocol.h"
#import "SCOperaLayerViewControllerMediaContainer-Protocol.h"
#import "SCOperaRotatingLayerPinchControllerDelegate-Protocol.h"
#import "SCTimeProfilable-Protocol.h"

@class NSString, SCFrameableContainerView, SCOperaRotatingImageLayerView, SCOperaRotatingLayerPinchController, UIView, UIVisualEffectView;

@interface SCOperaRotatingImageLayerViewController : SCOperaLayerViewController <SCMotionManagerListener, SCOperaRotatingLayerPinchControllerDelegate, SCTimeProfilable, SCOperaLayerViewControllerMediaContainer, SCOperaFadeTransitionCompatibleViewController>
{
    SCOperaRotatingImageLayerView *_layerView;
    SCFrameableContainerView *_containerView;
    SCOperaRotatingLayerPinchController *_pinchController;
    _Bool _shouldRestoreToOppositeState;
    struct CGVector _lastTranslation;
    double _lastRotation;
    _Bool _hasFullyAppearedOnScreen;
    _Bool _isListeningForMotionUpdates;
    UIVisualEffectView *_blurView;
    UIView *_pinchGestureTarget;
}

+ (int)context;
@property(nonatomic) __weak UIView *pinchGestureTarget; // @synthesize pinchGestureTarget=_pinchGestureTarget;
- (void).cxx_destruct;
- (void)didUpdateRotation:(double)arg1 translation:(struct CGVector)arg2;
- (id)fadingViewsForFadeTransition;
- (id)movingViewsForFadeTransition;
- (void)_notifyScaleChange:(double)arg1;
- (void)pinchControllerRequestsTransformUpdate:(double)arg1;
- (void)pinchControllerDidFinishPinch:(double)arg1;
- (_Bool)isOverlay;
- (double)mediaHeightToWidthAspectRatio;
- (struct CGRect)mediaViewFrame;
- (void)_applyCircularMask:(id)arg1 diagonal:(double)arg2 xOffset:(double)arg3 yOffset:(double)arg4;
- (void)_setupPinchController;
- (void)_handlePinchScaleSuppressionUpdate:(_Bool)arg1;
- (void)setPausedForAttachment:(_Bool)arg1;
- (void)teardown;
- (void)updateViewWithHorizontalPageOffset:(double)arg1 isCurrentPage:(_Bool)arg2;
- (void)viewDidFullyDisappear;
- (void)viewDidPartiallyAppearWithCurrentViewRelativePosition:(unsigned long long)arg1;
- (void)viewDidFullyAppear;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)didReceiveUpdateProperties:(id)arg1;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1;
- (id)shareableMedia;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

