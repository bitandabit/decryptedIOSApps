//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIImageView, UIView;

@interface _TtC5Files16DOCItemBadgeView : UIControl
{
    // Error parsing type: , name: blurredBackgroundView
    // Error parsing type: , name: triangleView
    // Error parsing type: , name: appearance
    // Error parsing type: , name: badgeAppearance
    // Error parsing type: , name: shouldBlurBackground
    // Error parsing type: , name: layoutTraits
    // Error parsing type: , name: isObservingSourceViewBounds
    // Error parsing type: , name: lastBlurDrawnSourceSize
    // Error parsing type: , name: blurredImageView
    // Error parsing type: , name: imageView
}

- (CDUnknownBlockType).cxx_destruct;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (void)updateAppearance:(id)arg1;
@property(nonatomic) struct CGRect bounds;
- (void)layoutSubviews;
- (void)updateBackground;
- (void)updateBlurredImageViewWithForceUpdate:(_Bool)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)tintColorDidChange;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak UIImageView *blurredImageView; // @synthesize blurredImageView;
@property(nonatomic) struct CGSize lastBlurDrawnSourceSize; // @synthesize lastBlurDrawnSourceSize;
@property(nonatomic) _Bool isObservingSourceViewBounds; // @synthesize isObservingSourceViewBounds;
- (void)traitCollectionDidChange:(id)arg1;
@property(nonatomic) _Bool hidden;
- (_Bool)isHidden;
@property(nonatomic) _Bool shouldBlurBackground; // @synthesize shouldBlurBackground;
@property(nonatomic, readonly) UIView *triangleView; // @synthesize triangleView;

@end

