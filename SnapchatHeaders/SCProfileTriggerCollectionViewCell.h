//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSearchCollectionViewCell.h"

@class SCProfileCellIconView, SCProfileTriggerCellViewModel, UIImageView, UILabel;

@interface SCProfileTriggerCollectionViewCell : SCSearchCollectionViewCell
{
    SCProfileCellIconView *_iconView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_actionButtonView;
    SCProfileTriggerCellViewModel *_viewModel;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (double)_getActionButtonMarginX;
- (double)_getActionButtonSize;
- (double)_getIconMarginX;
- (double)_getIconSize;
- (double)_getSubtitleFontSize;
- (double)_getTitleFontSize;
- (void)_handleActionButtonTap;
- (void)handleTapAction;
- (_Bool)hasOverridedTapAction;
- (void)setViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

