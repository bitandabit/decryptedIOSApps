//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, SCGalleryLagunaDeviceBatteryView, SCLagunaAppStatusCoordinatorDeviceState, SCLagunaDevice, SCUserSession, UITableView;
@protocol SCLagunaSettingsDeviceDetailsViewDelegate;

@interface SCLagunaSettingsDeviceDetailsView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    NSString *_title;
    SCLagunaAppStatusCoordinatorDeviceState *_state;
    SCUserSession *_userSession;
    SCGalleryLagunaDeviceBatteryView *_deviceBatteryView;
    id <SCLagunaSettingsDeviceDetailsViewDelegate> _delegate;
    SCLagunaDevice *_device;
}

@property(retain, nonatomic) SCLagunaDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)_alertRestartError;
- (void)_alertStorageFull;
- (void)_alertDownloadingLogs;
- (void)_alertTransferInterrupted;
- (void)_alertPairNow;
- (void)_alertFactoryResetNeeded;
- (void)_statusCellPressed;
- (void)_updateMangeCellStatusState;
- (void)_updateBatteryCell:(id)arg1;
- (void)_updateBatteryCellStatusState;
- (void)_updateStatusCell:(id)arg1;
- (void)_updateStatusCellStatusState;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)height;
- (void)updateViewWithState:(id)arg1;
- (void)refresh;
- (id)initWithFrame:(struct CGRect)arg1 userSession:(id)arg2 device:(id)arg3 statusState:(id)arg4 title:(id)arg5 delegate:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

