//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCOperaBlockingViewController-Protocol.h"
#import "SCOperaLoadingLayerViewDelegate-Protocol.h"

@class NSString, SCOperaLoadingLayerView, SCSearchGCDBlockTimer;
@protocol SCOperaBlockingViewControllerDelegate;

@interface SCOperaLoadingLayerViewController : SCOperaLayerViewController <SCOperaLoadingLayerViewDelegate, SCOperaBlockingViewController>
{
    SCOperaLoadingLayerView *_layerView;
    _Bool _isDismissing;
    SCSearchGCDBlockTimer *_delayTimer;
    _Bool _shouldConsiderShowingSpinner;
    id <SCOperaBlockingViewControllerDelegate> _blockingViewControllerDelegate;
}

@property(nonatomic) __weak id <SCOperaBlockingViewControllerDelegate> blockingViewControllerDelegate; // @synthesize blockingViewControllerDelegate=_blockingViewControllerDelegate;
- (void).cxx_destruct;
- (void)loadingLayerViewDidPressErrorButton:(id)arg1;
- (void)_setShouldConsiderShowingSpinner:(_Bool)arg1;
- (void)_showLoadingIndicator;
- (void)_showLoadingIndicatorIfNecessary;
- (void)teardown;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)viewDidFullyDisappear;
- (void)viewDidFullyAppear;
- (void)loadView;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1;
- (_Bool)shouldBlockOtherLayersFromDisplayingWithCurrentPage:(id)arg1;
- (void)hideBlockingView;
- (_Bool)isBeingDismissed;
- (_Bool)isBlocking;
- (void)didTryPagingWhenPagingDisabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

