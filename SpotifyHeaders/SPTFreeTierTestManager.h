//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeatureFlagSignalObserver.h"

@class NSString;

@interface SPTFreeTierTestManager : NSObject <SPTFeatureFlagSignalObserver>
{
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTLocalSettings> _localSettings;
    id <SPTFeatureFlagSignal> _shadowFreeTierEnabledSignal;
    id <SPTFeatureFlagSignal> _actualFreeTierEnabledSignal;
}

@property(retain, nonatomic) id <SPTFeatureFlagSignal> actualFreeTierEnabledSignal; // @synthesize actualFreeTierEnabledSignal=_actualFreeTierEnabledSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> shadowFreeTierEnabledSignal; // @synthesize shadowFreeTierEnabledSignal=_shadowFreeTierEnabledSignal;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isFreeTierEnabled) _Bool freeTierEnabled;
- (id)provideLiveFreeTierEnabledSignal;
- (id)provideShadowFreeTierEnabledSignal;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)setupFlags;
- (id)initWithFeatureFlagFactory:(id)arg1 localSettings:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

