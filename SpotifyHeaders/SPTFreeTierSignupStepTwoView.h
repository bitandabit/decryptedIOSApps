//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GLUEStyleable.h"
#import "SPTFreeTierSignupAnimatableViewProtocol.h"

@class GLUEButton, GLUEGradientView, GLUELabel, NSLayoutConstraint, NSString, SPTFeeTierLoginFormScrollView, SPTFreeTierLoginInputFormView;

@interface SPTFreeTierSignupStepTwoView : UIView <GLUEStyleable, SPTFreeTierSignupAnimatableViewProtocol>
{
    NSString *_transitionContextViewKey;
    GLUELabel *_titleLabel;
    SPTFreeTierLoginInputFormView *_formView;
    GLUEButton *_submitButton;
    GLUEGradientView *_backgroundGradientView;
    SPTFeeTierLoginFormScrollView *_scrollView;
    UIView *_contentView;
    NSLayoutConstraint *_titleLabelTopMargin;
    NSLayoutConstraint *_formViewTopMargin;
    NSLayoutConstraint *_formViewHorizontalMargin;
    NSLayoutConstraint *_submitButtonTopMargin;
    double _animatableContentViewOriginalX;
}

@property(nonatomic) double animatableContentViewOriginalX; // @synthesize animatableContentViewOriginalX=_animatableContentViewOriginalX;
@property(retain, nonatomic) NSLayoutConstraint *submitButtonTopMargin; // @synthesize submitButtonTopMargin=_submitButtonTopMargin;
@property(retain, nonatomic) NSLayoutConstraint *formViewHorizontalMargin; // @synthesize formViewHorizontalMargin=_formViewHorizontalMargin;
@property(retain, nonatomic) NSLayoutConstraint *formViewTopMargin; // @synthesize formViewTopMargin=_formViewTopMargin;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelTopMargin; // @synthesize titleLabelTopMargin=_titleLabelTopMargin;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) SPTFeeTierLoginFormScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) GLUEGradientView *backgroundGradientView; // @synthesize backgroundGradientView=_backgroundGradientView;
@property(readonly, nonatomic) GLUEButton *submitButton; // @synthesize submitButton=_submitButton;
@property(readonly, nonatomic) SPTFreeTierLoginInputFormView *formView; // @synthesize formView=_formView;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *transitionContextViewKey; // @synthesize transitionContextViewKey=_transitionContextViewKey;
- (void).cxx_destruct;
- (id)provideBirthDatePickerView;
- (id)provideGenderPickerView;
@property(readonly, nonatomic) UIView *animatableContentView;
- (void)glue_applyStyle:(id)arg1;
- (void)setupConstraints;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

