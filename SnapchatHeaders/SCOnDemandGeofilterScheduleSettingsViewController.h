//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOnDemandGeofilterBaseViewController.h"

#import "SCOnDemandGeofilterDataControllerListener-Protocol.h"
#import "SCOnDemandGeofilterDatePickerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, SCOnDemandGeofilterDatePicker, SCOnDemandGeofilterPillButton, SCOnDemandGeofilterSettingsHeaderView, SCTransparentParentView, UITableView;

@interface SCOnDemandGeofilterScheduleSettingsViewController : SCOnDemandGeofilterBaseViewController <SCOnDemandGeofilterDatePickerDelegate, UITableViewDelegate, UITableViewDataSource, SCOnDemandGeofilterDataControllerListener>
{
    SCTransparentParentView *_containerView;
    SCOnDemandGeofilterSettingsHeaderView *_headerView;
    UITableView *_tableView;
    NSArray *_viewModelArray;
    SCOnDemandGeofilterPillButton *_continueButton;
    SCOnDemandGeofilterDatePicker *_datePickerView;
    unsigned long long _beginningSelectedRow;
    long long _previousViewController;
}

- (void).cxx_destruct;
- (unsigned long long)_selectedRow:(id)arg1;
- (id)updateViewModels:(id)arg1 selectedRow:(unsigned long long)arg2 selectedDate:(id)arg3;
- (id)generateViewModels:(id)arg1 lineItemSchedule:(id)arg2 selectedRow:(unsigned long long)arg3;
- (void)_updateContinueButtonStateWithViewModel:(id)arg1;
- (void)_dismissEventLogWithExitEvent:(long long)arg1;
- (id)_dateAdjusted:(id)arg1 byHours:(long long)arg2;
- (id)_getStringFromDate:(id)arg1;
- (void)didPressContinueButton;
- (void)dataController:(id)arg1 didUpdateCurrentEditingLineItem:(id)arg2 shouldUpdatePrice:(_Bool)arg3;
- (void)dataController:(id)arg1 didFetchOfferedInventory:(id)arg2 success:(_Bool)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)datePickerValueDidChange;
- (void)didTapBackButton;
- (void)leftSwipeSucceed;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)layoutMasonryViews;
- (void)viewDidLoad;
- (id)initWithGeofilterSession:(id)arg1 beginningSelectedRow:(unsigned long long)arg2 fromViewController:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

