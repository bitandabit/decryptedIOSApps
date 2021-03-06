//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTWelcomeViewController.h"

#import "SPTThemableViewLayoutDelegate.h"

@class NSString, SPTLoginInviteController, SignupController, UIButton, UIImageView, UILabel;

@interface SPTLoginInviteActionSelectionViewController : SPTWelcomeViewController <SPTThemableViewLayoutDelegate>
{
    SignupController *_signupController;
    SPTLoginInviteController *_inviteController;
    UIButton *_haveInviteButton;
    UIButton *_requestInviteButton;
    UIImageView *_logo;
    UILabel *_message;
    id <SPTAdjustUserTrackerProtocol> _adjustTracker;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTPreSignupExperimentationController> _experimentationController;
}

@property(nonatomic) __weak id <SPTPreSignupExperimentationController> experimentationController; // @synthesize experimentationController=_experimentationController;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) id <SPTAdjustUserTrackerProtocol> adjustTracker; // @synthesize adjustTracker=_adjustTracker;
@property(retain, nonatomic) UILabel *message; // @synthesize message=_message;
@property(retain, nonatomic) UIImageView *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) UIButton *requestInviteButton; // @synthesize requestInviteButton=_requestInviteButton;
@property(retain, nonatomic) UIButton *haveInviteButton; // @synthesize haveInviteButton=_haveInviteButton;
@property(readonly, nonatomic) SPTLoginInviteController *inviteController; // @synthesize inviteController=_inviteController;
@property(readonly, nonatomic) SignupController *signupController; // @synthesize signupController=_signupController;
- (void).cxx_destruct;
- (void)userDidTouchRequestInviteButton:(id)arg1;
- (void)userDidTouchHaveInviteButton:(id)arg1;
- (id)viewEventURI;
- (void)navigateToPreviousView;
- (void)viewDidLoad;
- (id)initWithSignupController:(id)arg1 inviteController:(id)arg2 loginStateController:(id)arg3 networkConnectivityController:(id)arg4 experimentationController:(id)arg5 adjustTracker:(id)arg6 linkDispatcher:(id)arg7 alertController:(id)arg8 metaViewController:(id)arg9 sessionServicesLoader:(id)arg10;
- (void)themableViewDidUpdateLayout:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

