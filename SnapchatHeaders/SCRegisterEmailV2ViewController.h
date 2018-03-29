//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCRegisterEmailV2ViewDelegate-Protocol.h"
#import "SCRegisterV2ViewDelegate-Protocol.h"

@class NSDictionary, NSString, SCAuthenticatedPhoneManager, SCEmailManager, SCRegisterEmailV2View, SCUserSession;

@interface SCRegisterEmailV2ViewController : UIViewController <SCRegisterV2ViewDelegate, SCRegisterEmailV2ViewDelegate>
{
    SCRegisterEmailV2View *_registerEmailView;
    _Bool _hasSuggstedDomain;
    SCUserSession *_userSession;
    SCEmailManager *_emailManager;
    SCAuthenticatedPhoneManager *_authenticatedPhoneManager;
    _Bool _isResumingRegistration;
    NSDictionary *_context;
}

@property(nonatomic) _Bool isResumingRegistration; // @synthesize isResumingRegistration=_isResumingRegistration;
@property(retain, nonatomic) NSDictionary *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)_didEnterBackground:(id)arg1;
- (void)_willEnterForeground:(id)arg1;
- (id)getPageViewName;
- (id)_pageNameForPageView;
- (_Bool)_isInvalidEmail:(id)arg1;
- (id)_getPotentialDomain:(id)arg1;
- (_Bool)_suggestEmailIfNecessary:(id)arg1;
- (void)continueButtonClicked;
- (void)_proceedToAddFriends;
- (void)onSkipPressed;
- (void)phoneSignupButtonPressed;
- (void)backButtonPressed:(id)arg1;
- (void)inputModeDidChange:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (double)timeBeforeReturningToCamera;
- (_Bool)shouldPopToRootViewController;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;
- (void)viewWillEnterBackground;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
