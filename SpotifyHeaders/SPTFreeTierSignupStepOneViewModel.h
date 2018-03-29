//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFreeTierSignupViewModel.h"
#import "UIGestureRecognizerDelegate.h"

@class NSDictionary, NSString, NSTimer, SPTFreeTierLoginTheme, SPTFreeTierSignupConfigurationDataLoader, SPTFreeTierSignupDisplayNameSuggestionDataLoader, SPTFreeTierSignupStepOneViewLogger, SPTFreeTierSignupUserInfoModel;

@interface SPTFreeTierSignupStepOneViewModel : NSObject <SPTFreeTierSignupViewModel, UIGestureRecognizerDelegate>
{
    NSDictionary *_validators;
    id <SPTFreeTierSignupStepOneViewModelDelegate> _delegate;
    SPTFreeTierSignupStepOneViewLogger *_logger;
    id <SPTNavigationRouter> _navigationRouter;
    SPTFreeTierSignupUserInfoModel *_userInfoModel;
    SPTFreeTierSignupDisplayNameSuggestionDataLoader *_suggestDisplayNameDataLoader;
    id <SPTAlertController> _alertController;
    SPTFreeTierLoginTheme *_theme;
    SPTFreeTierSignupConfigurationDataLoader *_signupConfigurationDataLoader;
    NSString *_updatingTextFieldIdentifier;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSString *updatingTextFieldIdentifier; // @synthesize updatingTextFieldIdentifier=_updatingTextFieldIdentifier;
@property(retain, nonatomic) SPTFreeTierSignupConfigurationDataLoader *signupConfigurationDataLoader; // @synthesize signupConfigurationDataLoader=_signupConfigurationDataLoader;
@property(retain, nonatomic) SPTFreeTierLoginTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) SPTFreeTierSignupDisplayNameSuggestionDataLoader *suggestDisplayNameDataLoader; // @synthesize suggestDisplayNameDataLoader=_suggestDisplayNameDataLoader;
@property(retain, nonatomic) SPTFreeTierSignupUserInfoModel *userInfoModel; // @synthesize userInfoModel=_userInfoModel;
@property(retain, nonatomic) id <SPTNavigationRouter> navigationRouter; // @synthesize navigationRouter=_navigationRouter;
@property(readonly, nonatomic) SPTFreeTierSignupStepOneViewLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPTFreeTierSignupStepOneViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSDictionary *validators; // @synthesize validators=_validators;
- (void).cxx_destruct;
- (void)notifyDelegateSubmitButtonStateShouldUpdate;
- (unsigned long long)stateForFieldWithIdentifier:(id)arg1 isValid:(_Bool)arg2;
- (void)resetTimer;
- (void)timerDidFire:(id)arg1;
- (void)presentNextStepViewController;
- (void)loadSignupConfiguration;
- (void)userDidTouchUpInsideNextButtonWithEmail:(id)arg1 password:(id)arg2;
- (void)userDidEndEditingTextFieldWithIdentifier:(id)arg1 value:(id)arg2;
- (void)userDidChangeTextFieldWithIdentifier:(id)arg1 value:(id)arg2;
- (id)validDisclosureTextForFieldWithIdentifier:(id)arg1;
- (id)nextButtonAccessibilityHintWithEmailError:(id)arg1 passwordError:(id)arg2;
- (id)nextButtonAccessibilityHintEmptyForm;
- (id)nextButtonText;
- (id)passwordDisclosureText;
- (id)emailDisclosureText;
- (id)passwordLabelText;
- (id)emailLabelText;
- (id)titleLabelText;
- (id)viewStyle;
- (void)validateFieldWithIdentifier:(id)arg1 value:(id)arg2;
- (id)initWithUserInfoModel:(id)arg1 navigationRouter:(id)arg2 alertController:(id)arg3 theme:(id)arg4 validators:(id)arg5 logger:(id)arg6 suggestDisplayNameDataLoader:(id)arg7 signupConfigurationDataLoader:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
