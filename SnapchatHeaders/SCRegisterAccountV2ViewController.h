//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCRegisterV2ViewDelegate-Protocol.h"
#import "SCRegistrationAlertControllerDelegate-Protocol.h"

@class NSArray, NSString, SCAppSession, SCFideliusLoggedOutManager, SCRegisterBirthdayV2View, SCRegisterNameV2View, SCRegisterPasswordV2View, SCRegisterService, SCRegisterUsernameV2View, SCRegistrationAlertController;
@protocol SCRegisterAccountV2ViewControllerDelegate, SCRegistrationUserActionDelegate;

@interface SCRegisterAccountV2ViewController : UIViewController <SCRegisterV2ViewDelegate, SCRegistrationAlertControllerDelegate>
{
    id <SCRegisterAccountV2ViewControllerDelegate> _delegate;
    id <SCRegistrationUserActionDelegate> _userActionDelegate;
    SCRegisterService *_registerService;
    SCAppSession *_appSession;
    SCFideliusLoggedOutManager *_fideliusLoggedOutManager;
    SCRegisterNameV2View *_registerNameView;
    SCRegisterPasswordV2View *_registerPasswordView;
    SCRegisterBirthdayV2View *_registerBirthdayView;
    SCRegisterUsernameV2View *_registerUsernameView;
    unsigned long long _registerViewType;
    _Bool _isRegistering;
    NSArray *_usernameSuggestions;
    NSString *_defaultUsername;
    unsigned long long _currentUsernameSuggestionIndex;
    unsigned long long _attemptCount;
    SCRegistrationAlertController *_registrationAlertController;
    _Bool _includeLoginOptionOnNameView;
    unsigned long long _continueButtonPressedTimestamp;
}

- (void).cxx_destruct;
- (id)getPageViewName;
- (id)_pageNameForPageView;
- (id)_getRegisterView:(unsigned long long)arg1;
- (void)_finishAccountCreation:(id)arg1;
- (void)_registerDidFail:(id)arg1 errorTitle:(id)arg2;
- (void)_registerDidSucceed:(id)arg1;
- (void)_setRegistering:(_Bool)arg1;
- (void)_registerWithFirstName:(id)arg1 lastName:(id)arg2 username:(id)arg3 password:(id)arg4 birthday:(id)arg5;
- (void)_tryToRegisterNewAccount;
- (void)_handleUnderThirteen;
- (void)_tryToContinueWithBirthday;
- (void)_getUsernameSuggestions;
- (void)checkPasswordValidityRealTime;
- (void)checkUsernameValidityRealTime;
- (void)rotateUsernameSuggestion;
- (void)presentWebViewWithUrl:(id)arg1;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)popToRootViewController;
- (void)loginSignupSwitcherButtonPressed;
- (void)continueButtonClicked;
- (void)backButtonPressed:(id)arg1;
- (void)inputModeDidChange:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (double)timeBeforeReturningToCamera;
- (_Bool)shouldPopToRootViewController;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_loadRegisterPasswordView;
- (void)_loadRegisterUsernameView;
- (void)_loadRegisterBirthdayView;
- (void)_loadRegisterNameView;
- (void)_removeObservers;
- (void)_addObservers;
- (void)dealloc;
- (void)viewWillEnterBackground;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithLoginOptionButton:(_Bool)arg1 delegate:(id)arg2 registerService:(id)arg3 appSession:(id)arg4 fideliusLoggedOutManager:(id)arg5 userActionDelegate:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

