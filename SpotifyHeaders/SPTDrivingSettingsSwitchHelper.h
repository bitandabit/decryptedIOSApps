//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTLegacyFeatureFlagObserver.h"

@class NSString, SPTFeatureSettingsItem;

@interface SPTDrivingSettingsSwitchHelper : NSObject <SPTLegacyFeatureFlagObserver>
{
    id <SPTLegacyFeatureFlag> _featureFlag;
    id <SPTLocalSettings> _localSettings;
    NSString *_enabledValue;
    NSString *_settingsSwitchLabel;
    NSString *_settingsSwitchDescription;
    SPTFeatureSettingsItem *_settingsSwitch;
}

@property(retain, nonatomic) SPTFeatureSettingsItem *settingsSwitch; // @synthesize settingsSwitch=_settingsSwitch;
@property(copy, nonatomic) NSString *settingsSwitchDescription; // @synthesize settingsSwitchDescription=_settingsSwitchDescription;
@property(copy, nonatomic) NSString *settingsSwitchLabel; // @synthesize settingsSwitchLabel=_settingsSwitchLabel;
@property(copy, nonatomic) NSString *enabledValue; // @synthesize enabledValue=_enabledValue;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTLegacyFeatureFlag> featureFlag; // @synthesize featureFlag=_featureFlag;
- (void).cxx_destruct;
- (void)featureFlag:(id)arg1 enabledByDefaultStateDidChange:(_Bool)arg2;
- (void)featureFlag:(id)arg1 enabledStateDidChange:(_Bool)arg2;
- (void)refreshFlag;
- (id)createSettingsSwitchWithFeatureSettingsItemFactory:(id)arg1;
- (void)dealloc;
- (id)initWithFlag:(id)arg1 localSettings:(id)arg2 enabledLocalSettingsValue:(id)arg3 settingsSwitchLabel:(id)arg4 settingsSwitchDescription:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

