//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TTTAttributedLabelDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, SCExtendedHitButton, TTTAttributedLabel, UIColor, UITextField;
@protocol SCTextViewDelegate;

@interface SCTextView : UIView <UITextFieldDelegate, TTTAttributedLabelDelegate>
{
    _Bool _isHighlighted;
    _Bool _madeFirstChange;
    _Bool _showSeparator;
    _Bool _shouldPreventTextClearOnError;
    id <SCTextViewDelegate> _delegate;
    UITextField *_textField;
    SCExtendedHitButton *_xButton;
    UIView *_separator;
    TTTAttributedLabel *_errorLabel;
    UIColor *_nonerrorBackgroundColor;
}

@property(nonatomic) _Bool shouldPreventTextClearOnError; // @synthesize shouldPreventTextClearOnError=_shouldPreventTextClearOnError;
@property(nonatomic) _Bool showSeparator; // @synthesize showSeparator=_showSeparator;
@property(retain, nonatomic) UIColor *nonerrorBackgroundColor; // @synthesize nonerrorBackgroundColor=_nonerrorBackgroundColor;
@property(nonatomic) _Bool madeFirstChange; // @synthesize madeFirstChange=_madeFirstChange;
@property(retain, nonatomic) TTTAttributedLabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) SCExtendedHitButton *xButton; // @synthesize xButton=_xButton;
@property(nonatomic) _Bool isHighlighted; // @synthesize isHighlighted=_isHighlighted;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) __weak id <SCTextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setError:(id)arg1 toggleBackground:(_Bool)arg2 toggleXButton:(_Bool)arg3;
- (void)setWarningWithText:(id)arg1;
- (void)setError:(id)arg1;
- (_Bool)isInErrorState;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidMakeFirstEdit:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)selectAll;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)removeDelegate;
- (void)preventTextClearOnError;
- (void)setAutoCapitalizationType:(long long)arg1;
- (_Bool)isSecureTextEntry;
- (void)setSecureTextEntry:(_Bool)arg1;
- (void)setAutocorrectionType:(long long)arg1;
- (void)setKeyboardType:(long long)arg1;
@property(copy, nonatomic) NSString *text;
- (void)clearInput;
- (void)setReturnKeyType:(long long)arg1;
- (void)setAttributedPlaceholder:(id)arg1 color:(id)arg2;
- (void)setAttributedPlaceholder:(id)arg1;
- (void)setPlaceholder:(id)arg1 color:(id)arg2;
- (void)setPlaceholder:(id)arg1;
- (_Bool)isXButtonShown;
- (void)shouldShowSeparator:(_Bool)arg1;
- (void)setTextColor:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)getTextFieldMASAttribute:(long long)arg1;
- (void)removeTextFieldInset;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

