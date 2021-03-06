//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTWelcomeViewController.h"

#import "UITextFieldDelegate.h"

@class NSString, SPFormTextField, SPFormView, SPTActionButton, SPTOnePassword, UIButton, UIImageView, UILabel;

@interface LoginFormViewController : SPTWelcomeViewController <UITextFieldDelegate>
{
    _Bool _didReportFieldInteraction;
    SPFormView *_loginForm;
    SPFormTextField *_usernameField;
    SPFormTextField *_passwordField;
    UIButton *_loginButton;
    SPTActionButton *_onePasswordButton;
    UIButton *_facebookLoginButton;
    UIButton *_recoverPasswordButton;
    UILabel *_separatorLabel;
    UIImageView *_logo;
    SPTOnePassword *_onePassword;
    id <SPTAdjustUserTrackerProtocol> _adjustTracker;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTPreSignupExperimentationController> _experimentationController;
}

@property(nonatomic) _Bool didReportFieldInteraction; // @synthesize didReportFieldInteraction=_didReportFieldInteraction;
@property(retain, nonatomic) id <SPTPreSignupExperimentationController> experimentationController; // @synthesize experimentationController=_experimentationController;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) id <SPTAdjustUserTrackerProtocol> adjustTracker; // @synthesize adjustTracker=_adjustTracker;
@property(retain, nonatomic) SPTOnePassword *onePassword; // @synthesize onePassword=_onePassword;
@property(retain, nonatomic) UIImageView *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) UILabel *separatorLabel; // @synthesize separatorLabel=_separatorLabel;
@property(readonly, nonatomic) UIButton *recoverPasswordButton; // @synthesize recoverPasswordButton=_recoverPasswordButton;
@property(readonly, nonatomic) UIButton *facebookLoginButton; // @synthesize facebookLoginButton=_facebookLoginButton;
@property(readonly, nonatomic) SPTActionButton *onePasswordButton; // @synthesize onePasswordButton=_onePasswordButton;
@property(readonly, nonatomic) UIButton *loginButton; // @synthesize loginButton=_loginButton;
@property(readonly, nonatomic) SPFormTextField *passwordField; // @synthesize passwordField=_passwordField;
@property(readonly, nonatomic) SPFormTextField *usernameField; // @synthesize usernameField=_usernameField;
@property(readonly, nonatomic) SPFormView *loginForm; // @synthesize loginForm=_loginForm;
- (void).cxx_destruct;
- (_Bool)wantStaticBackground;
- (struct CGRect)focusRectWhenKeyboardShow;
- (long long)fieldIdentifierForTextField:(id)arg1;
- (void)reportFormInteraction:(id)arg1;
- (void)resetFormInteractionReporting;
- (void)userWillSeeView;
- (id)viewEventURI;
- (void)setOnePasswordButtonBackgroundColor:(id)arg1;
- (void)setLoginButtonState;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (id)validatedValueOfField:(id)arg1;
- (void)login:(id)arg1;
- (void)getCredentialsFromOnePasswordAndLogin;
- (void)loginWithFacebook;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dismissWebView;
- (void)showWebViewWithURL:(id)arg1;
- (void)showPasswordReset:(id)arg1;
- (void)setupAutolayoutWithContainer:(id)arg1 views:(id)arg2 metrics:(id)arg3;
- (_Bool)shouldShowLogotype;
- (void)dismiss;
- (void)applyThemeLayout;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithLoginStateController:(id)arg1 networkConnectivityController:(id)arg2 experimentationController:(id)arg3 onePassword:(id)arg4 adjustTracker:(id)arg5 linkDispatcher:(id)arg6 metaViewController:(id)arg7 sessionServicesLoader:(id)arg8 alertController:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

