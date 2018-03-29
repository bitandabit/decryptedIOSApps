//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCOperaFadeTransitionCompatibleViewController-Protocol.h"
#import "SCOperaLayerViewControllerMediaContainer-Protocol.h"
#import "SCTimeProfilable-Protocol.h"

@class NSString, SCFrameableContainerView, SCOperaImageLayerView, UIVisualEffectView;

@interface SCOperaImageLayerViewController : SCOperaLayerViewController <SCTimeProfilable, SCOperaFadeTransitionCompatibleViewController, SCOperaLayerViewControllerMediaContainer>
{
    SCOperaImageLayerView *_layerView;
    SCFrameableContainerView *_containerView;
    _Bool _isViewReadyForTransform;
    double _initialScale;
    double _lastScale;
    UIVisualEffectView *_blurView;
}

+ (int)context;
- (void).cxx_destruct;
- (id)fadingViewsForFadeTransition;
- (id)movingViewsForFadeTransition;
- (void)_scaleLayerView:(double)arg1;
- (_Bool)isOverlay;
- (double)mediaHeightToWidthAspectRatio;
- (struct CGRect)mediaViewFrame;
- (void)setPausedForAttachment:(_Bool)arg1;
- (void)teardown;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidFullyAppear;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)updateViewWithHorizontalPageOffset:(double)arg1 isCurrentPage:(_Bool)arg2;
- (void)didReceiveUpdateProperties:(id)arg1;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1;
- (id)shareableMedia;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

