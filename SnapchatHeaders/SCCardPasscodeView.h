//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCGrowingButton, UIActivityIndicatorView, UILabel, UITextField;

@interface SCCardPasscodeView : UIView
{
    _Bool _inErrorMode;
    UIActivityIndicatorView *_activityIndicator;
    UIView *_cardCutout;
    UITextField *_cvvField;
    UILabel *_instructionsLabel;
    SCGrowingButton *_xButton;
}

@property(nonatomic) _Bool inErrorMode; // @synthesize inErrorMode=_inErrorMode;
@property(retain, nonatomic) SCGrowingButton *xButton; // @synthesize xButton=_xButton;
@property(retain, nonatomic) UILabel *instructionsLabel; // @synthesize instructionsLabel=_instructionsLabel;
@property(retain, nonatomic) UITextField *cvvField; // @synthesize cvvField=_cvvField;
@property(retain, nonatomic) UIView *cardCutout; // @synthesize cardCutout=_cardCutout;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
- (void).cxx_destruct;
- (void)setErrorMode:(id)arg1 terminal:(_Bool)arg2;
- (_Bool)isInErrorMode;
- (void)setInstructionText:(id)arg1;
- (id)setupInputField:(id)arg1;
- (void)setupInputFields;
- (void)setupCardCutout;
- (void)setupInstructionsLabel;
- (void)setupXButton;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

