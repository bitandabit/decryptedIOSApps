//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GLUEStyleable.h"

@class GLUEGradientView, GLUELabel, NSLayoutConstraint, NSString, UIActivityIndicatorView, UILayoutGuide;

@interface SPTFreeTierTasteOnboardingUpdateTasteView : UIView <GLUEStyleable>
{
    GLUELabel *_messageLabel;
    UIActivityIndicatorView *_activityIndicatorView;
    GLUEGradientView *_backgroundGradientView;
    GLUEGradientView *_backgroundOverlayGradientView;
    UILayoutGuide *_bottomSpacerGuide;
    NSLayoutConstraint *_bottomSpacerGuideBottomConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *bottomSpacerGuideBottomConstraint; // @synthesize bottomSpacerGuideBottomConstraint=_bottomSpacerGuideBottomConstraint;
@property(retain, nonatomic) UILayoutGuide *bottomSpacerGuide; // @synthesize bottomSpacerGuide=_bottomSpacerGuide;
@property(readonly, nonatomic) GLUEGradientView *backgroundOverlayGradientView; // @synthesize backgroundOverlayGradientView=_backgroundOverlayGradientView;
@property(readonly, nonatomic) GLUEGradientView *backgroundGradientView; // @synthesize backgroundGradientView=_backgroundGradientView;
@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(readonly, nonatomic) GLUELabel *messageLabel; // @synthesize messageLabel=_messageLabel;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)activateConstraints;
- (void)updateLayoutMarginsWithTopAnchor:(id)arg1 bottomAnchor:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

