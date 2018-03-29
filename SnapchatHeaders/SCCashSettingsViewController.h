//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GenericSettingsViewController.h"

#import "SCCardLinkingDelegate-Protocol.h"
#import "SCUnlinkCardTableViewCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, UITableView;

@interface SCCashSettingsViewController : GenericSettingsViewController <UITableViewDataSource, UITableViewDelegate, SCUnlinkCardTableViewCellDelegate, SCCardLinkingDelegate>
{
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)cardLinkingCancelled;
- (void)cardLinkingSuccessful;
- (void)unlinkCardButtonPressedForCell:(id)arg1;
- (void)switchChanged:(id)arg1;
- (_Bool)isSwitchOnForIndexPath:(id)arg1;
- (id)securityCodeIndexPath;
- (_Bool)shouldEnableCellAtIndexPath:(id)arg1;
- (_Bool)isSupportIndexPath:(id)arg1;
- (_Bool)isTransactionsIndexPath:(id)arg1;
- (_Bool)isSecurityCodeIndexPath:(id)arg1;
- (_Bool)isDebitCardIndexPath:(id)arg1;
- (_Bool)isSupportSection:(long long)arg1;
- (_Bool)isTransactionsSection:(long long)arg1;
- (_Bool)isGeneralCashSettingsSection:(long long)arg1;
- (_Bool)isCardSection:(long long)arg1;
- (void)presentCashSupportVC;
- (void)presentTransactionsVC;
- (void)presentCardLinkingVC;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)labelTextColorForIndexPath:(id)arg1;
- (id)newSwitchViewForIndexPath:(id)arg1;
- (void)setTextForCell:(id)arg1 indexPath:(id)arg2;
- (id)navigationCellForIndexPath:(id)arg1;
- (id)toggleCellForIndexPath:(id)arg1;
- (id)unlinkDebitCardCell;
- (id)debitCardCellForIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (void)resetView;
- (void)cashStatusUpdated;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)loadView;
- (id)getPageViewName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

