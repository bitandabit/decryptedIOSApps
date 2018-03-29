//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GenericSettingsViewController.h"

#import "SCTextViewDelegate-Protocol.h"

@class FBKVOController, NSString, SCEmailManager, SCReauthenticationManager, SCTextView, SCUserSession, UIActivityIndicatorView, UIButton, UILabel;

@interface EmailSettingsViewController : GenericSettingsViewController <SCTextViewDelegate>
{
    SCReauthenticationManager *_reauthenticationManager;
    SCEmailManager *_emailManager;
    SCUserSession *_userSession;
    _Bool _fromFeedTopPrompt;
    UILabel *_upperInfo;
    SCTextView *_textView;
    UILabel *_lowerInfo;
    UILabel *_resendLink;
    UIActivityIndicatorView *_resendLinkActivity;
    UIButton *_actionBar;
    UIActivityIndicatorView *_actionBarActivity;
    FBKVOController *_KVOController;
}

@property(retain, nonatomic) FBKVOController *KVOController; // @synthesize KVOController=_KVOController;
@property(retain, nonatomic) UIActivityIndicatorView *actionBarActivity; // @synthesize actionBarActivity=_actionBarActivity;
@property(retain, nonatomic) UIButton *actionBar; // @synthesize actionBar=_actionBar;
@property(retain, nonatomic) UIActivityIndicatorView *resendLinkActivity; // @synthesize resendLinkActivity=_resendLinkActivity;
@property(retain, nonatomic) UILabel *resendLink; // @synthesize resendLink=_resendLink;
@property(retain, nonatomic) UILabel *lowerInfo; // @synthesize lowerInfo=_lowerInfo;
@property(retain, nonatomic) SCTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UILabel *upperInfo; // @synthesize upperInfo=_upperInfo;
- (void).cxx_destruct;
- (void)logSettingEmailSettingPageview:(long long)arg1;
- (void)leftSwipeCancelled;
- (void)leftSwipePrepare;
- (void)inputKeyboardWillChangeFrame:(id)arg1;
- (_Bool)isEmailValid:(id)arg1;
- (id)getDefaultText;
- (_Bool)hasEmailChanged;
- (_Bool)hasPendingVerification;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)setActionTitle:(id)arg1;
- (void)updateActionBar;
- (void)updateLowerInfo;
- (void)updateTextView;
- (void)updateUpperInfo;
- (void)updatePage;
- (void)stopLinkAnimation;
- (void)stopBarAnimation;
- (void)startLinkAnimation;
- (void)startBarAnimation;
- (void)onResendLinkTapped;
- (void)tryToChangeEmail;
- (void)actionBarPressed;
- (unsigned long long)supportedInterfaceOrientations;
- (id)getTitle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)createActionBar;
- (void)createResendLink;
- (void)dealloc;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 reauthenticationManager:(id)arg2 emailManager:(id)arg3 fromFeedTopPrompt:(_Bool)arg4;
- (id)initWithUserSession:(id)arg1 reauthenticationManager:(id)arg2 emailManager:(id)arg3;
- (id)getPageViewName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

