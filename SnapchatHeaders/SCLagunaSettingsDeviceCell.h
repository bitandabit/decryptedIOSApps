//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SCLagunaAppStatusCoordinatorDeviceState, SCLagunaDevice, SCLagunaDeviceStateView, UILabel, UIView;

@interface SCLagunaSettingsDeviceCell : UITableViewCell
{
    SCLagunaDevice *_device;
    SCLagunaAppStatusCoordinatorDeviceState *_state;
    SCLagunaDeviceStateView *_deviceIcon;
    UIView *_iconContainerView;
    UILabel *_deviceNameLabel;
    UILabel *_deviceConnectionStateLabel;
}

@property(retain, nonatomic) UILabel *deviceConnectionStateLabel; // @synthesize deviceConnectionStateLabel=_deviceConnectionStateLabel;
@property(retain, nonatomic) UILabel *deviceNameLabel; // @synthesize deviceNameLabel=_deviceNameLabel;
@property(retain, nonatomic) UIView *iconContainerView; // @synthesize iconContainerView=_iconContainerView;
@property(retain, nonatomic) SCLagunaDeviceStateView *deviceIcon; // @synthesize deviceIcon=_deviceIcon;
@property(retain, nonatomic) SCLagunaAppStatusCoordinatorDeviceState *state; // @synthesize state=_state;
@property(retain, nonatomic) SCLagunaDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)_refreshDeviceInformation;
- (void)refreshSpectaclesStatusIcon:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

