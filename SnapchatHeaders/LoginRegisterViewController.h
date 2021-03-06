//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCCameraBackgroundViewController.h"

#import "LoginRegisterNavigationDelegate-Protocol.h"
#import "SCPreLoginLensControllerDelegate-Protocol.h"
#import "SCRegistrationUserActionDelegate-Protocol.h"

@class NSString, SCPreLoginLensController, SCRegisterService, UIButton, UIImageView;
@protocol SCLoginRegisterUserActionDelegate;

@interface LoginRegisterViewController : SCCameraBackgroundViewController <SCPreLoginLensControllerDelegate, SCRegistrationUserActionDelegate, LoginRegisterNavigationDelegate>
{
    SCPreLoginLensController *_preLoginLensController;
    SCRegisterService *_registerService;
    UIImageView *_ghostFaceImageView;
    UIImageView *_ghostImageView;
    UIButton *_snapchatterButton;
    id <SCLoginRegisterUserActionDelegate> _userActionDelegate;
}

- (void).cxx_destruct;
- (void)didTapSwitchToLoginButton;
- (void)preLoginLensControllerDidActivateLens:(id)arg1;
- (void)setOverlaysVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setLensVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)activateLensWithPartnerId:(id)arg1;
- (id)preLoginLensController;
- (void)fetchRegisterStudySettings;
- (void)verifyPhoneFromDeepLink:(id)arg1;
- (_Bool)canPerformNavigation;
- (void)keyboardDidShow:(id)arg1;
- (void)didBecomeActive:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)removeObservers;
- (void)addObservers;
- (void)handleRegistration;
- (void)newMemberButtonClicked;
- (void)snapchatterButtonClicked;
- (void)touchUpOutside;
- (void)touchDownInsideButton;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)loadView;
- (id)getPageViewName;
- (id)initWithRegisterService:(id)arg1 userActionDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

