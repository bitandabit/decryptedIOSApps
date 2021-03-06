//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;
@protocol SCAutofillSuggestion;

@interface SCOperaRemoteWebAutofillSuggestionBar : UIView
{
    UIImageView *_iconImageView;
    UILabel *_doneLabel;
    UILabel *_autofillLabel;
    UILabel *_autofillSuggestionKeyText;
    UILabel *_autofillSuggestionValueText;
    UILabel *_pillStyleSuggestionButton;
    UIView *_topSuggestionTopSeparator;
    UIView *_bottomSuggestionBar;
    UIView *_leftSeparator;
    UIView *_rightSeparator;
    UIView *_topSuggestionBar;
    _Bool _hideBottomSuggestionBar;
    long long _onEditAutofillType;
    id <SCAutofillSuggestion> _delegate;
}

@property(nonatomic) __weak id <SCAutofillSuggestion> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hideBottomSuggestionBar;
- (void)setAutofillSuggestionKey:(id)arg1 suggestionValue:(id)arg2;
- (void)layoutSubviewsForPillStyle;
- (void)layoutSubviewsForDefaultStyle;
- (void)layoutSubviews;
- (void)autofillValueSuggestionTapped:(id)arg1;
- (void)doneLabelTapped:(id)arg1;
- (void)autofillLabelTapped:(id)arg1;
- (void)initSCPillStyleSuggestionBar;
- (void)initDefaultStyleSuggestionBar;
- (void)initSuggestionBarForStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 onEditAutofillType:(long long)arg2;

@end

