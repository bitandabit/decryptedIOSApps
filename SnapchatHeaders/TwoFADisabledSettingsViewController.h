//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GenericSettingsViewController.h"

@class NSString, SCButton, SCUserSession, UIImageView, UILabel;

@interface TwoFADisabledSettingsViewController : GenericSettingsViewController
{
    NSString *_pageViewName;
    NSString *_infoText;
    UILabel *_infoLabel;
    UIImageView *_ghost;
    SCButton *_continueButton;
    SCUserSession *_userSession;
}

@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) SCButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain, nonatomic) UIImageView *ghost; // @synthesize ghost=_ghost;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) NSString *infoText; // @synthesize infoText=_infoText;
@property(retain, nonatomic) NSString *pageViewName; // @synthesize pageViewName=_pageViewName;
- (void).cxx_destruct;
- (void)presentSetupAuthView;
- (_Bool)disableLeftSwipe;
- (void)continueButtonPressed;
- (void)leftButtonPressed;
- (void)createContinueButton;
- (void)createGhost;
- (void)loadView;
- (id)initWithPageViewName:(id)arg1 title:(id)arg2 userSession:(id)arg3;
- (id)getTitle;
- (id)getPageViewName;

@end
