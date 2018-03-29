//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBaseMediaCardView.h"

#import "SCActionMenuRenderableCellContentView-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, NSTimer, SCSnapStatusView, UILongPressGestureRecognizer, UITapGestureRecognizer, UIViewController;
@protocol SCChatFullscreenMediaChatTableCellDelegate, SCSnapChatCellViewConfig, SCSnapPlayContainer><SCSnapPlayDelegate><SCSnapReplayControllerV3Provider><SCChatCellParentViewControllerDelegate><SCMediaFullScreenViewDelegate;

@interface SCSnapMediaCardView : SCBaseMediaCardView <UIGestureRecognizerDelegate, SCActionMenuRenderableCellContentView>
{
    SCSnapStatusView *_snapStatusView;
    NSTimer *_snapTimer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    id <SCSnapChatCellViewConfig> _viewModel;
    UIViewController<SCSnapPlayContainer><SCSnapPlayDelegate><SCSnapReplayControllerV3Provider><SCChatCellParentViewControllerDelegate><SCMediaFullScreenViewDelegate> *_parentVC;
    id <SCChatFullscreenMediaChatTableCellDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)thumbnailViewForMediaId:(id)arg1;
- (void)displayReplayInfoAlert;
- (void)attemptToReplaySnap;
- (void)resetWithOriginalSettings;
- (void)rerenderForActionMenuWithBoundingSize:(struct CGSize)arg1;
- (id)_snap;
- (double)height;
- (struct CGRect)getSnapIconViewRect;
- (id)_getSnapPlayControllerAndReplaceContainer;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceivePress:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_presentOperaFullscreenViewForChatV2SnapChatViewModel:(id)arg1;
- (void)_presentOperaFullscreenViewForGroupSnapChatViewModel:(id)arg1;
- (void)onLongPress:(id)arg1;
- (void)onTap;
- (void)_initGestureRecognizers;
- (void)didEndDisplay;
- (void)tick;
- (void)_startSnapTimerIfNecessary;
- (void)renderPayload;
- (void)setViewModel:(id)arg1;
- (id)groupSnapViewModel;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithParentVC:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
