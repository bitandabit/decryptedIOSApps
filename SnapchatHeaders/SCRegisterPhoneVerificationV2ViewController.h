//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCRegisterPhoneVerificationV2ViewDelegate-Protocol.h"
#import "SCRegisterV2ViewDelegate-Protocol.h"

@class NSDictionary, NSString, NSTimer, SCAuthenticatedPhoneManager, SCRegisterPhoneVerificationV2View, SCUnauthenticatedPhoneManager, SCUserSession, UIToolbar;
@protocol SCRegisterPhoneV2ViewControllerDelegate;

@interface SCRegisterPhoneVerificationV2ViewController : UIViewController <SCRegisterV2ViewDelegate, SCRegisterPhoneVerificationV2ViewDelegate>
{
    NSString *_phoneNumber;
    NSString *_countryCode;
    NSString *_deepLinkCode;
    UIToolbar *_blurOverlay;
    SCRegisterPhoneVerificationV2View *_phoneVerificationView;
    unsigned long long _resendTimeLeft;
    unsigned long long _verifyWithCodeAttemptCount;
    unsigned long long _resendVerificationCodeCount;
    _Bool _phoneCallDefault;
    _Bool _verifyCodeFailed;
    _Bool _altButtonIsCallMeInstead;
    NSTimer *_resendTimer;
    NSString *_passwordResetUsernameOrEmail;
    NSString *_preAuthToken;
    _Bool _hasSubmittedAltButton;
    _Bool _fromPXPrompt;
    SCUserSession *_userSession;
    SCAuthenticatedPhoneManager *_authenticatedPhoneManager;
    SCUnauthenticatedPhoneManager *_unauthenticatedPhoneManager;
    _Bool _openingFromSendTo;
    NSDictionary *_context;
    id <SCRegisterPhoneV2ViewControllerDelegate> _delegate;
}

@property(nonatomic) _Bool openingFromSendTo; // @synthesize openingFromSendTo=_openingFromSendTo;
@property(nonatomic) __weak id <SCRegisterPhoneV2ViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)_removeViewControllerAnimated:(_Bool)arg1;
- (void)_showViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_shouldPresentPostRegistrationVideoView:(id)arg1;
- (id)_pageNameForPageView;
- (void)_sendCodeByAltButtonWithIsCall:(_Bool)arg1;
- (void)_presentAltDialogueWithTitle:(id)arg1 withIsCall:(_Bool)arg2;
- (void)presentAltSmsDialogue;
- (void)presentAltCallDialogue;
- (void)updateContinueButtonState;
- (void)textFieldDidChange:(id)arg1;
- (double)timeBeforeReturningToCamera;
- (_Bool)shouldPopToRootViewController;
- (void)backButtonPressed:(id)arg1;
- (void)updateContinueButtonResendLabel;
- (void)_resetResendTimeLeft;
- (void)updateResendTimeLeft;
- (void)_verifyByPhone:(_Bool)arg1;
- (id)getConfirmationCode;
- (void)continueButtonClicked;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (_Bool)_hasDeepLinkCode;
- (void)_verifyDeepLinkCode;
- (void)_setDeepLinkCodeAndVerify:(id)arg1;
- (void)presentNextViewController:(_Bool)arg1;
- (void)didRegisterPhoneNumber:(id)arg1;
- (void)_resetPasswordVerifyNumberDidSucceed:(id)arg1;
- (void)verifyNumberDidSucceed:(id)arg1;
- (void)verifyNumberDidFail:(id)arg1;
- (id)blurOverlay;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillEnterBackground;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (_Bool)_isPasswordReset;
- (_Bool)_isInContactsView;
- (void)setPasswordResetWithUsernameOrEmail:(id)arg1 preAuthToken:(id)arg2;
- (id)initWithPhoneNumber:(id)arg1 countryCode:(id)arg2 deepLinkCode:(id)arg3 userSession:(id)arg4 fromPXPrompt:(_Bool)arg5 altButtonIsCallMeInstead:(_Bool)arg6 authenticatedPhoneManager:(id)arg7 unauthenticatedPhoneManager:(id)arg8;
- (id)initWithPhoneNumber:(id)arg1 countryCode:(id)arg2 deepLinkCode:(id)arg3 userSession:(id)arg4 authenticatedPhoneManager:(id)arg5;
- (id)initWithPhoneNumber:(id)arg1 countryCode:(id)arg2 userSession:(id)arg3 fromPXPrompt:(_Bool)arg4 altButtonIsCallMeInstead:(_Bool)arg5 authenticatedPhoneManager:(id)arg6;
- (id)initWithPhoneNumber:(id)arg1 countryCode:(id)arg2 fromPXPrompt:(_Bool)arg3 altButtonIsCallMeInstead:(_Bool)arg4 unauthenticatedPhoneManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

