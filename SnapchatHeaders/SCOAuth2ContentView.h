//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, SCAlertViewActionButton, SCButton, SCOAuth2ViewModel, UIImageView, UILabel, UITableView;
@protocol SCOAuth2ContentViewDelegate;

@interface SCOAuth2ContentView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _connected;
    SCOAuth2ViewModel *_viewModel;
    id <SCOAuth2ContentViewDelegate> _delegate;
    UITableView *_tableView;
    UIImageView *_appImageView;
    UILabel *_titleLabel;
    UILabel *_actionDescriptionLabel;
    SCAlertViewActionButton *_otherButton;
    SCButton *_continueButton;
    UILabel *_otherLabel;
    UIImageView *_avatarImageView;
}

@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UILabel *otherLabel; // @synthesize otherLabel=_otherLabel;
@property(retain, nonatomic) SCButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain, nonatomic) SCAlertViewActionButton *otherButton; // @synthesize otherButton=_otherButton;
@property(retain, nonatomic) UILabel *actionDescriptionLabel; // @synthesize actionDescriptionLabel=_actionDescriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *appImageView; // @synthesize appImageView=_appImageView;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <SCOAuth2ContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) SCOAuth2ViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool connected; // @synthesize connected=_connected;
- (void).cxx_destruct;
- (void)initBitmojiAvatar;
- (void)initContinueButton;
- (void)initOtherButton;
- (void)initTableView;
- (void)initActionDescriptionLabel;
- (void)initTitleLabel;
- (void)initImageView;
- (void)otherButtonPressed;
- (void)continueButtonPressed;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
