//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCOperaFadeTransitionCompatibleViewController-Protocol.h"
#import "SCOperaShowActionMenuButtonLayerViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SCOperaShowActionMenuButtonLayerView, UISwipeGestureRecognizer;

@interface SCOperaShowActionMenuButtonLayerViewController : SCOperaLayerViewController <SCOperaShowActionMenuButtonLayerViewDelegate, SCOperaFadeTransitionCompatibleViewController, UIGestureRecognizerDelegate>
{
    SCOperaShowActionMenuButtonLayerView *_layerView;
    UISwipeGestureRecognizer *_swipeUpGesture;
}

+ (int)context;
- (void).cxx_destruct;
- (id)fadingViewsForFadeTransition;
- (id)movingViewsForFadeTransition;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_didSwipeUp:(id)arg1;
- (void)_setupGestureIfNeededForLayer:(id)arg1;
- (void)updateViewWithHorizontalPageOffset:(double)arg1 isCurrentPage:(_Bool)arg2;
- (void)didReceiveUpdateProperties:(id)arg1;
- (void)showActionMenuButtonPressed:(id)arg1;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)teardown;
- (void)loadView;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
