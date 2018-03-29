//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCOperaLayerView-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class CAShapeLayer, NSString, SCLoadingIndicatorView, UIButton, UIImageView, UILabel, UITapGestureRecognizer, UIVisualEffectView;
@protocol SCLensReplyLayerViewDelegate;

@interface SCLensReplyLayerView : UIView <UIGestureRecognizerDelegate, SCOperaLayerView>
{
    UIView *_maskableBlurViewContainer;
    UIVisualEffectView *_blurView;
    CAShapeLayer *_maskLayer;
    CAShapeLayer *_borderLayer;
    UITapGestureRecognizer *_tapRecognizer;
    UIImageView *_lensIconImageView;
    UILabel *_nameLabel;
    UILabel *_ctaLabel;
    UIButton *_skipButton;
    _Bool _showingOverlay;
    id <SCLensReplyLayerViewDelegate> _delegate;
    SCLoadingIndicatorView *_spinner;
}

+ (id)layerViewWithFrame:(struct CGRect)arg1;
@property(readonly) SCLoadingIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(readonly, nonatomic) _Bool showingOverlay; // @synthesize showingOverlay=_showingOverlay;
@property(nonatomic) __weak id <SCLensReplyLayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_addSpringAnimationToLayer:(id)arg1 key:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)handleTap:(id)arg1;
- (struct CGRect)_circleMaskFrame;
- (struct CGAffineTransform)_transformForFocusPoint:(struct CGPoint)arg1;
- (void)_buildView;
- (void)showAdvancePromptWithPlayerView:(id)arg1 focusArea:(struct CGPoint)arg2;
- (void)enableTouchProcessing;
- (void)displayOverlayWithPlayerView:(id)arg1 focusArea:(struct CGPoint)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)setupViewForLayer:(id)arg1 lens:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

