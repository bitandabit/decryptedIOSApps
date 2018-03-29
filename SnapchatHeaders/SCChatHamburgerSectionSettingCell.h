//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCChatHamburgerRoundedCornerCell.h"

@class SCChatHamburgerSectionSettingCellViewModel, SCLoadingIndicatorView, UIImageView, UILabel, UISwitch;
@protocol SCChatSCChatHamburgerSectionSettingCellDelegate;

@interface SCChatHamburgerSectionSettingCell : SCChatHamburgerRoundedCornerCell
{
    id <SCChatSCChatHamburgerSectionSettingCellDelegate> _delegate;
    _Bool _grayedOut;
    SCChatHamburgerSectionSettingCellViewModel *_viewModel;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_iconImageView;
    UISwitch *_switchButton;
    UIImageView *_caretImageView;
    SCLoadingIndicatorView *_loadingIndicatorView;
}

@property(nonatomic) _Bool grayedOut; // @synthesize grayedOut=_grayedOut;
@property(retain, nonatomic) SCLoadingIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
@property(retain, nonatomic) UIImageView *caretImageView; // @synthesize caretImageView=_caretImageView;
@property(retain, nonatomic) UISwitch *switchButton; // @synthesize switchButton=_switchButton;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SCChatHamburgerSectionSettingCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)handleSwitch:(id)arg1;
- (void)setSwitchEnabled:(_Bool)arg1;
- (void)setSwitchOn:(_Bool)arg1;
- (void)layoutSubviews;
- (void)_setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(nonatomic) __weak id <SCChatSCChatHamburgerSectionSettingCellDelegate> delegate; // @dynamic delegate;

@end

