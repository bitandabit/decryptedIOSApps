//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "SPTCellImageLoadingContextCompatibleCell.h"
#import "SPTCeramicCollectionViewCellProtocol.h"
#import "SPTThemableView.h"

@class CAGradientLayer, NSString, SPTActionButton, SPTImageBlurView, SPTTheme, UIImageView, UILabel, UIView;

@interface SPTCeramicBillboardCollectionViewCell : UICollectionViewCell <SPTThemableView, SPTCeramicCollectionViewCellProtocol, SPTCellImageLoadingContextCompatibleCell>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    UIImageView *_imageView;
    SPTTheme *_theme;
    UIImageView *_imageDecorationView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    SPTImageBlurView *_blurredBackgroundImageView;
    CAGradientLayer *_shadowGradientLayer;
}

@property(retain, nonatomic) CAGradientLayer *shadowGradientLayer; // @synthesize shadowGradientLayer=_shadowGradientLayer;
@property(retain, nonatomic) SPTImageBlurView *blurredBackgroundImageView; // @synthesize blurredBackgroundImageView=_blurredBackgroundImageView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageDecorationView; // @synthesize imageDecorationView=_imageDecorationView;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *touchPreviewView;
- (void)populateWithCeramicItem:(id)arg1 order:(struct SPTCeramicItemOrder)arg2;
@property(readonly, nonatomic) unsigned long long cellType;
- (void)setBlurredBackgroundImage:(id)arg1;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
- (void)setImage:(id)arg1;
- (void)applyThemeLayout;
- (void)updateSelectionState;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
@property(readonly, nonatomic) struct CGSize imageViewSize;
- (void)setupImageView;
- (void)setupSubtitleLabel;
- (void)setupTitleLabel;
- (void)setupBlurredBackground;
- (void)setupView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) UIView *accessoryView;
@property(readonly, nonatomic) SPTActionButton *actionButton;
@property(readonly, nonatomic) struct CGSize backgroundImageViewSize;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIView *prefixView;
@property(readonly) Class superclass;

@end

