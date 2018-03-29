//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCContextCardViewCell.h"

@class UIButton, UIImageView, UILabel;
@protocol SCContextAppListExpansionDelegate;

@interface SCContextAppCardViewCell : SCContextCardViewCell
{
    UILabel *_primaryText;
    UILabel *_subText;
    UILabel *_tertiaryText;
    UILabel *_quaternaryText;
    UIImageView *_appIcon;
    UIImageView *_quaternaryInfoIcon;
    UIButton *_button;
    _Bool _isPreferredCell;
    id <SCContextAppListExpansionDelegate> _expansionDelegate;
}

@property(nonatomic) __weak id <SCContextAppListExpansionDelegate> expansionDelegate; // @synthesize expansionDelegate=_expansionDelegate;
- (void).cxx_destruct;
- (void)expandButtonTapped:(id)arg1;
- (void)setPressState:(_Bool)arg1;
- (void)prepareForReuse;
- (void)setupCellWithApp:(id)arg1 iconImage:(id)arg2 quaternaryIconImage:(id)arg3 hasButton:(_Bool)arg4 isPreferredCell:(_Bool)arg5 expanded:(_Bool)arg6;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
