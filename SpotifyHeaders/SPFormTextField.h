//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

#import "SPTThemableView.h"

@class NSString, UIButton, UIColor;

@interface SPFormTextField : UITextField <SPTThemableView>
{
    _Bool _disablesActionMenu;
    _Bool _disablesInputCaret;
    _Bool _disablesSelection;
    _Bool _showingError;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    long long _icon;
    UIColor *_iconColor;
    unsigned long long _fieldType;
    unsigned long long _errorType;
    CDUnknownBlockType _validator;
    UIButton *_clearButton;
    NSString *_hint;
}

@property(nonatomic) NSString *hint; // @synthesize hint=_hint;
@property(retain, nonatomic) UIButton *clearButton; // @synthesize clearButton=_clearButton;
@property(nonatomic, getter=isShowingError) _Bool showingError; // @synthesize showingError=_showingError;
@property(copy, nonatomic) CDUnknownBlockType validator; // @synthesize validator=_validator;
@property(nonatomic) unsigned long long errorType; // @synthesize errorType=_errorType;
@property(nonatomic) unsigned long long fieldType; // @synthesize fieldType=_fieldType;
@property(copy, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(nonatomic) long long icon; // @synthesize icon=_icon;
@property(nonatomic) _Bool disablesSelection; // @synthesize disablesSelection=_disablesSelection;
@property(nonatomic) _Bool disablesInputCaret; // @synthesize disablesInputCaret=_disablesInputCaret;
@property(nonatomic) _Bool disablesActionMenu; // @synthesize disablesActionMenu=_disablesActionMenu;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (_Bool)isAccessibilityElement;
- (id)accessibilityValue;
- (void)applyThemeLayout;
- (_Bool)isValidPassword;
- (_Bool)isValid;
- (void)setTextColor:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setIcon:(long long)arg1 color:(id)arg2;
- (void)mightOverrideColor:(id *)arg1 with:(id)arg2;
- (void)showInvalidState;
- (void)showValidState;
- (id)selectionRectsForRange:(id)arg1;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)setPlaceholder:(id)arg1;
- (void)clearText;
- (void)setClearButtonMode:(long long)arg1;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (void)setupClearButton;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

