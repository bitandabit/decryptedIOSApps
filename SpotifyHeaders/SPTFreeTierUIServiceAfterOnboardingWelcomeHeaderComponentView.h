//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EXP_HUBComponentView.h"

@class GLUELabel, SPTLayoutConstraintBuilder, UIView;

@interface SPTFreeTierUIServiceAfterOnboardingWelcomeHeaderComponentView : EXP_HUBComponentView
{
    id <GLUETheme> _theme;
    UIView *_textContainer;
    GLUELabel *_title;
    GLUELabel *_subtitle;
    SPTLayoutConstraintBuilder *_layoutBuilder;
}

@property(retain, nonatomic) SPTLayoutConstraintBuilder *layoutBuilder; // @synthesize layoutBuilder=_layoutBuilder;
@property(retain, nonatomic) GLUELabel *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) GLUELabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIView *textContainer; // @synthesize textContainer=_textContainer;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)configureWithModel:(id)arg1;
- (id)createSubtitle;
- (id)createTitle;
- (void)setupTextContainer;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end
