//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTWelcomeViewController.h"

@class NSString, UIButton, UILabel;

@interface SPTFacebookLoginDeprecationViewController : SPTWelcomeViewController
{
    id <SPTAdjustUserTrackerProtocol> _adjustTracker;
    NSString *_username;
    NSString *_password;
    UIButton *_facebookButton;
    UIButton *_loginAnywayButton;
    UILabel *_messageLabel;
    UILabel *_explanationLabel;
}

@property(retain, nonatomic) UILabel *explanationLabel; // @synthesize explanationLabel=_explanationLabel;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UIButton *loginAnywayButton; // @synthesize loginAnywayButton=_loginAnywayButton;
@property(retain, nonatomic) UIButton *facebookButton; // @synthesize facebookButton=_facebookButton;
@property(readonly, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) id <SPTAdjustUserTrackerProtocol> adjustTracker; // @synthesize adjustTracker=_adjustTracker;
- (void).cxx_destruct;
- (void)userWillSeeView;
- (id)viewEventURI;
- (_Bool)wantStaticBackground;
- (void)dismiss;
- (void)logButtonClickWithIdentifier:(long long)arg1;
- (void)loginWithCredentials;
- (void)loginWithFacebook;
- (id)buildMessageStringFromTheme:(id)arg1;
- (void)setupConstraintsFromTheme:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)shouldHideNavigationBar;
- (_Bool)shouldWrapInScrollView;
- (_Bool)isLargeScreen;
- (void)dealloc;
- (id)initWithLoginStateController:(id)arg1 networkConnectivityController:(id)arg2 experimentationController:(id)arg3 adjustTracker:(id)arg4 metaViewController:(id)arg5 sessionServicesLoader:(id)arg6 alertController:(id)arg7 username:(id)arg8 password:(id)arg9;

@end

