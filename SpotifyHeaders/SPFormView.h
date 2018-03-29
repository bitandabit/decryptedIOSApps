//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface SPFormView : UIView
{
    double _fieldHeight;
    NSArray *_errors;
    NSArray *_textFields;
}

@property(readonly, nonatomic) NSArray *textFields; // @synthesize textFields=_textFields;
- (void).cxx_destruct;
- (void)shouldShowPasswordFieldText:(_Bool)arg1;
- (void)validateField:(id)arg1;
- (void)checkField:(id)arg1;
- (_Bool)hasErrors;
- (id)errorForFieldAtIndex:(long long)arg1;
- (id)messageLabelForFieldAtIndex:(long long)arg1;
- (void)displayHint:(id)arg1 forFieldAtIndex:(long long)arg2;
- (void)displayError:(id)arg1 forFieldAtIndex:(long long)arg2;
- (void)setMessageLabel:(id)arg1 forFieldAtIndex:(long long)arg2;
- (void)clearErrorForField:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)setPlaceholder:(id)arg1 accessibilityLabel:(id)arg2 accessibilityIdentifier:(id)arg3 fieldType:(unsigned long long)arg4 returnKeyType:(long long)arg5 delegate:(id)arg6 icon:(long long)arg7 secure:(_Bool)arg8 validator:(CDUnknownBlockType)arg9 forFieldAtIndex:(long long)arg10;
- (id)newField;
- (long long)textFieldClearButtonViewMode;
- (id)initWithFrame:(struct CGRect)arg1 fieldCount:(double)arg2;
- (id)theme;

@end

