//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTFreeTierAuthenticationHandler, SPTFreeTierLoginOnePasswordHandler, SPTFreeTierLoginTheme, SPTFreeTierLoginViewLogger, SPTPopupManager;

@interface SPTFreeTierLoginViewModel : NSObject
{
    id <SPTFreeTierLoginViewModelDelegate> _delegate;
    SPTFreeTierLoginViewLogger *_logger;
    SPTFreeTierLoginOnePasswordHandler *_onePassword;
    SPTFreeTierLoginTheme *_theme;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTNavigationRouter> _navigationRouter;
    SPTFreeTierAuthenticationHandler *_authenticationHandler;
    id <SPTPreSignupExperimentationController> _experimentationController;
    unsigned long long _retryCount;
    SPTPopupManager *_popupManager;
}

@property(retain, nonatomic) SPTPopupManager *popupManager; // @synthesize popupManager=_popupManager;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) id <SPTPreSignupExperimentationController> experimentationController; // @synthesize experimentationController=_experimentationController;
@property(retain, nonatomic) SPTFreeTierAuthenticationHandler *authenticationHandler; // @synthesize authenticationHandler=_authenticationHandler;
@property(retain, nonatomic) id <SPTNavigationRouter> navigationRouter; // @synthesize navigationRouter=_navigationRouter;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) SPTFreeTierLoginTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTFreeTierLoginOnePasswordHandler *onePassword; // @synthesize onePassword=_onePassword;
@property(readonly, nonatomic) SPTFreeTierLoginViewLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPTFreeTierLoginViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)presentGetHelpPopup;
- (void)presentNewRecoverPasswordFlow;
- (void)increaseRetryCountIfNeeded;
- (id)errorForCode:(unsigned long long)arg1;
- (_Bool)shouldEnableNewRecoverPasswordFlow;
- (double)backgroundGradientAnimationDuration;
- (id)forgotPasswordLabelText;
- (id)loginButtonLoadingText;
- (id)loginButtonText;
- (id)passwordLabelText;
- (id)emailLabelText;
- (id)titleLabelText;
- (id)viewStyle;
- (void)presentForgotPasswordView;
- (_Bool)shouldEnableLoginButtonForEmail:(id)arg1 password:(id)arg2;
- (void)loginWithUser:(id)arg1 andPassword:(id)arg2;
- (id)initWithTheme:(id)arg1 linkDispatcher:(id)arg2 navigationRouter:(id)arg3 logger:(id)arg4 authenticationHandler:(id)arg5 onePasswordLogin:(id)arg6 experimentationController:(id)arg7 popupManager:(id)arg8;

@end

