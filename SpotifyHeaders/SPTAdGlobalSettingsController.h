//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAdContextManagerObserver.h"

@class NSString, SPTAdContextManager, SPTAdCosmosBridge, SPTAdFeatureFlagChecks, SPTAdRulesManager;

@interface SPTAdGlobalSettingsController : NSObject <SPTAdContextManagerObserver>
{
    SPTAdCosmosBridge *_cosmosBridge;
    SPTAdRulesManager *_adRulesManager;
    SPTAdContextManager *_adContextManager;
    SPTAdFeatureFlagChecks *_adFeatureFlagChecks;
}

@property(retain, nonatomic) SPTAdFeatureFlagChecks *adFeatureFlagChecks; // @synthesize adFeatureFlagChecks=_adFeatureFlagChecks;
@property(retain, nonatomic) SPTAdContextManager *adContextManager; // @synthesize adContextManager=_adContextManager;
@property(retain, nonatomic) SPTAdRulesManager *adRulesManager; // @synthesize adRulesManager=_adRulesManager;
@property(retain, nonatomic) SPTAdCosmosBridge *cosmosBridge; // @synthesize cosmosBridge=_cosmosBridge;
- (void).cxx_destruct;
- (void)adContextManager:(id)arg1 didChangePlayOrigin:(id)arg2 fromPlayOrigin:(id)arg3;
- (void)adContextManager:(id)arg1 didChangeNavigationContext:(id)arg2 fromNavigationContext:(id)arg3;
- (void)delete:(id)arg1 path:(id)arg2 shouldRefresh:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)put:(id)arg1 path:(id)arg2 value:(id)arg3 shouldRefresh:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)removeTargetingValueForKey:(id)arg1;
- (void)setTargetingValue:(id)arg1 forKey:(id)arg2;
- (_Bool)shouldSendPatchForDisabledReasons:(_Bool)arg1 onSlot:(id)arg2 reason:(id)arg3;
- (void)disableAds:(_Bool)arg1 onSlot:(id)arg2 reason:(id)arg3;
- (void)setAdProductTargetingEnableMidroll:(_Bool)arg1;
- (void)setDeviceInfo:(id)arg1 shouldRefresh:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setDeviceTargeting;
- (void)setLimitAdTracking;
- (void)setAppleIDFATargeting;
- (void)dealloc;
- (id)initWithCosmosBridge:(id)arg1 adRulesManager:(id)arg2 adFeatureFlagChecks:(id)arg3 adContextManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

