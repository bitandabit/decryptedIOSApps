//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAbbaFeatureFlagsObserver.h"
#import "SPTFeatureFlagSignalObserver.h"
#import "SPTLocalSettingsObserver.h"

@class NSString, SPTObserverManager;

@interface SPTInAppMessageFeatureFlagChecks : NSObject <SPTLocalSettingsObserver, SPTAbbaFeatureFlagsObserver, SPTFeatureFlagSignalObserver>
{
    _Bool _bannerEnabled;
    id <SPTLegacyFeatureFlag> _inAppMessagingFlag;
    id <SPTLocalSettings> _localSettings;
    id <SPTAbbaFeatureFlags> _abbaFeatureFlags;
    SPTObserverManager *_observerManager;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTFeatureFlagSignal> _bannerFlagSignal;
}

@property(readonly, nonatomic) id <SPTFeatureFlagSignal> bannerFlagSignal; // @synthesize bannerFlagSignal=_bannerFlagSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(retain, nonatomic) id <SPTAbbaFeatureFlags> abbaFeatureFlags; // @synthesize abbaFeatureFlags=_abbaFeatureFlags;
@property(nonatomic) __weak id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(nonatomic, getter=isBannerEnabled) _Bool bannerEnabled; // @synthesize bannerEnabled=_bannerEnabled;
@property(readonly, nonatomic) id <SPTLegacyFeatureFlag> inAppMessagingFlag; // @synthesize inAppMessagingFlag=_inAppMessagingFlag;
- (void).cxx_destruct;
- (void)localSettingsDidChange:(id)arg1;
- (void)featureFlagsDidChange:(id)arg1;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (id)featureFlagSignalWithABBAKey:(id)arg1;
- (void)setupBannerABBAFlag;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic, getter=isInAppMessageEnabled) _Bool inAppMessageEnabled;
- (void)dealloc;
- (id)initWithAbbaFeature:(id)arg1 localSettings:(id)arg2 featureFlagFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

