//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTFreeTierSignupFacebookConfirmationViewModelDelegate.h"
#import "SPTFreeTierTermsAndPolicyViewModelDelegate.h"
#import "SPTLoginViewControllerProtocol.h"
#import "SPTNavigationControllerNavigationBarState.h"
#import "SPTPageController.h"

@class NSError, NSString, NSURL, SPTFreeTierSignupFacebookConfirmationView, SPTFreeTierSignupFacebookConfirmationViewModel;

@interface SPTFreeTierSignupFacebookConfirmationViewController : UIViewController <SPTNavigationControllerNavigationBarState, SPTFreeTierSignupFacebookConfirmationViewModelDelegate, SPTFreeTierTermsAndPolicyViewModelDelegate, SPTPageController, SPTLoginViewControllerProtocol>
{
    _Bool performLogout;
    _Bool forgetUserAfterLogout;
    NSError *error;
    SPTFreeTierSignupFacebookConfirmationViewModel *_viewModel;
}

@property(retain, nonatomic) SPTFreeTierSignupFacebookConfirmationViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) NSError *error; // @synthesize error;
@property(nonatomic) _Bool forgetUserAfterLogout; // @synthesize forgetUserAfterLogout;
@property(nonatomic) _Bool performLogout; // @synthesize performLogout;
- (void).cxx_destruct;
- (void)userDidAcceptAllLicences:(id)arg1;
@property(readonly, nonatomic) long long presentingControllerAdjustIdentifier;
@property(readonly, nonatomic) UIViewController *presentingController;
- (void)viewModelDidCloseTermsPage:(id)arg1;
- (void)createUserRequestDidFinish;
- (void)createUserRequestDidStart;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
- (unsigned long long)preferredNavigationBarState;
- (void)userDidTouchUpInsideLoginButton:(id)arg1;
- (void)userDidTouchUpInsideCreateButton:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTFreeTierSignupFacebookConfirmationView *view; // @dynamic view;

@end

