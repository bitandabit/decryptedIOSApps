//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GenericSettingsViewController.h"

@class SCUserSession, UIButton, UIImageView, UILabel;

@interface SCBitmojiOnboardingViewController : GenericSettingsViewController
{
    SCUserSession *_userSession;
    UIImageView *_avatarImageView;
    UILabel *_label;
    UIButton *_okButton;
}

- (void).cxx_destruct;
- (id)getTitle;
- (void)didPressOkButton;
- (void)loadView;
- (id)initWithUserSession:(id)arg1;

@end
