//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTRunningTestManager.h"

@class NSString, NSUserDefaults, SPTRunningPartnerURLLauncher;

@interface SPTRunningTestManagerImplementation : NSObject <SPTRunningTestManager>
{
    _Bool _partnerFlowActive;
    SPTRunningPartnerURLLauncher *partnerURLLauncher;
    id <SPTLocalSettings> _localSettings;
    id <SPTAbbaFeatureFlags> _abbaFeatureFlags;
    id <SPTProductState> _productState;
    NSUserDefaults *_userDefaults;
    id <SPTCrashReporter> _crashReporter;
}

@property(retain, nonatomic) id <SPTCrashReporter> crashReporter; // @synthesize crashReporter=_crashReporter;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(retain, nonatomic) id <SPTAbbaFeatureFlags> abbaFeatureFlags; // @synthesize abbaFeatureFlags=_abbaFeatureFlags;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) SPTRunningPartnerURLLauncher *partnerURLLauncher; // @synthesize partnerURLLauncher;
@property(nonatomic, getter=isPartnerFlowActive) _Bool partnerFlowActive; // @synthesize partnerFlowActive=_partnerFlowActive;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isPartnerFlowEnabled) _Bool partnerFlowEnabled;
@property(readonly, nonatomic, getter=isOverviewUsingHubFramework) _Bool overviewUsingHubFramework;
@property(readonly, nonatomic, getter=isRawTempoLoggingEnabled) _Bool rawTempoLoggingEnabled;
@property(readonly, nonatomic) double setupStepStartTimeout;
@property(readonly, nonatomic) long long tempoOffset;
@property(readonly, nonatomic, getter=isHiddenTempoChangesDisabled) _Bool hiddenTempoChangesDisabled;
@property(readonly, nonatomic, getter=isOnlyManualModeTestEnabled) _Bool onlyManualModeTestEnabled;
@property(readonly, nonatomic, getter=isRecalibrateTestEnabled) _Bool recalibrateTestEnabled;
- (_Bool)calculateIsEnabled;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (id)initWithLocalSettings:(id)arg1 abbaFeatureFlags:(id)arg2 productState:(id)arg3 userDefaults:(id)arg4 crashReporter:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

