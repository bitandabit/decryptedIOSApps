//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class GLUEButton, GLUELabel, NSLayoutConstraint, SPTLayoutConstraintBuilder, UIImageView, UIView;

@interface SPTShareSnapchatDisclaimerViewController : UIViewController
{
    id <SPTShareSnapchatDisclaimerViewControllerDelegate> _delegate;
    UIImageView *_slateBackgroundImageView;
    UIImageView *_filterImageView;
    UIImageView *_filterDropShadowImageView;
    GLUELabel *_titleLabel;
    GLUELabel *_subtitleLabel;
    GLUEButton *_dismissButton;
    UIView *_mainContainerView;
    UIView *_slateView;
    UIView *_dismissButtonContainerView;
    UIView *_backgroundView;
    id <GLUETheme> _theme;
    SPTLayoutConstraintBuilder *_layoutBuilder;
    NSLayoutConstraint *_mainContainerViewBottomContraint;
}

@property(retain, nonatomic) NSLayoutConstraint *mainContainerViewBottomContraint; // @synthesize mainContainerViewBottomContraint=_mainContainerViewBottomContraint;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *layoutBuilder; // @synthesize layoutBuilder=_layoutBuilder;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *dismissButtonContainerView; // @synthesize dismissButtonContainerView=_dismissButtonContainerView;
@property(retain, nonatomic) UIView *slateView; // @synthesize slateView=_slateView;
@property(retain, nonatomic) UIView *mainContainerView; // @synthesize mainContainerView=_mainContainerView;
@property(retain, nonatomic) GLUEButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) GLUELabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *filterDropShadowImageView; // @synthesize filterDropShadowImageView=_filterDropShadowImageView;
@property(retain, nonatomic) UIImageView *filterImageView; // @synthesize filterImageView=_filterImageView;
@property(retain, nonatomic) UIImageView *slateBackgroundImageView; // @synthesize slateBackgroundImageView=_slateBackgroundImageView;
@property(nonatomic) __weak id <SPTShareSnapchatDisclaimerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dismissButtonPressed:(id)arg1;
- (void)updateViewConstraints;
- (void)addViewConstraints;
- (void)animateMainContainerView;
- (void)setupDismissButton;
- (void)setupLabels;
- (void)setupImageViews;
- (void)setupContainerViews;
- (void)setupBackgroundView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

