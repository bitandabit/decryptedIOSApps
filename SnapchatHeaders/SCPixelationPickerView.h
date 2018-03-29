//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCPreviewToolBarPickerView.h"

@class SCPixelationPickerDropletView, SCPixelationPickerListView, UIImpactFeedbackGenerator, UISelectionFeedbackGenerator;
@protocol SCPixelationPickerViewDelegate;

@interface SCPixelationPickerView : SCPreviewToolBarPickerView
{
    SCPixelationPickerListView *_pixelationListView;
    SCPixelationPickerDropletView *_dropletView;
    struct CGSize _previousBoundsSize;
    struct CGPoint _beginPanLocation;
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
    id <SCPixelationPickerViewDelegate> _delegate;
}

+ (id)_imageNames;
@property(nonatomic) __weak id <SCPixelationPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)containerSize;
- (void)longPress:(id)arg1;
- (void)onPostAnimateForViews:(long long)arg1;
- (void)onPreAnimateForViews:(long long)arg1;
- (void)animateViews:(long long)arg1;
- (void)_setAlphaForPickerAnimatableViews:(_Bool)arg1;
- (void)setDropletOriginY:(double)arg1 offsetX:(double)arg2;
- (void)animateOnboarding;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (id)initWithCompactButton:(id)arg1 needOnboardingAnimation:(_Bool)arg2;

@end

