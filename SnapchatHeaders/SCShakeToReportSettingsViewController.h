//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GenericSettingsViewController.h"

#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UITableView;

@interface SCShakeToReportSettingsViewController : GenericSettingsViewController <UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate>
{
    UITableView *_tableView;
    NSMutableArray *_visibleSettingTags;
    NSMutableArray *_cumulativeSectionSizes;
}

- (void).cxx_destruct;
- (id)_newSwitchViewForSettingTag:(long long)arg1;
- (id)_makeCell:(id)arg1;
- (id)_toggleCellForSettingTag:(long long)arg1;
- (id)_howToShakeCell;
- (id)_optionsCellForSettingTag:(long long)arg1;
- (double)_estimatedHeightForSettingTag:(long long)arg1;
- (long long)_tagForIndexPath:(id)arg1;
- (void)_resetEnabledStatus:(id)arg1 isEnabled:(_Bool)arg2;
- (void)_toggleShakeToReportEnabled:(id)arg1;
- (void)_switchChanged:(id)arg1;
- (void)_resetView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;
- (id)getInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
