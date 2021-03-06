//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeatureFlagSignalObserver.h"
#import "SPTLoginSignupMarketingOptInFlashControllerDelegate.h"
#import "SPTService.h"

@class NSString, SPTAllocationContext, SPTLoginDeferredTermsController, SPTLoginSignupMarketingOptInFlashController, SPTTermsAndConditionsManager;

@interface SPTLoginSessionServiceImplementation : NSObject <SPTLoginSignupMarketingOptInFlashControllerDelegate, SPTFeatureFlagSignalObserver, SPTService>
{
    id <SPTContainerUIService> _containerUIService;
    id <SPTSessionService> _clientSessionService;
    id <SPTCoreService> _coreService;
    id <SPTSettingsFeature> _settings;
    id <SPTKeystoreFeature> _keystoreFeature;
    id <SPTDebugService> _debugService;
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPTNotificationsService> _notificationsService;
    id <SPTLoginService> _loginService;
    id <SPTNetworkService> _networkService;
    id <SPTUserTrackingService> _userTrackingService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTFeatureFlagSignal> _enabledSignal;
    SPTTermsAndConditionsManager *_termsAndConditionsManager;
    SPTLoginDeferredTermsController *_deferredTermsController;
    SPTLoginSignupMarketingOptInFlashController *_signupMarketingOptInFlashController;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTLoginSignupMarketingOptInFlashController *signupMarketingOptInFlashController; // @synthesize signupMarketingOptInFlashController=_signupMarketingOptInFlashController;
@property(retain, nonatomic) SPTLoginDeferredTermsController *deferredTermsController; // @synthesize deferredTermsController=_deferredTermsController;
@property(retain, nonatomic) SPTTermsAndConditionsManager *termsAndConditionsManager; // @synthesize termsAndConditionsManager=_termsAndConditionsManager;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> enabledSignal; // @synthesize enabledSignal=_enabledSignal;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTUserTrackingService> userTrackingService; // @synthesize userTrackingService=_userTrackingService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTLoginService> loginService; // @synthesize loginService=_loginService;
@property(nonatomic) __weak id <SPTNotificationsService> notificationsService; // @synthesize notificationsService=_notificationsService;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTDebugService> debugService; // @synthesize debugService=_debugService;
@property(nonatomic) __weak id <SPTKeystoreFeature> keystoreFeature; // @synthesize keystoreFeature=_keystoreFeature;
@property(nonatomic) __weak id <SPTSettingsFeature> settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
- (void).cxx_destruct;
- (void)loginSignupMarketingOptInFlashControllerDidHandleFlash:(id)arg1;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)storeCredentialsInKeychain;
- (void)disposeSignupMarketingOptInFlashController;
- (void)unload;
- (void)storePreferredLocale;
- (void)registerFeatureSettingsPage;
- (void)showLicenseStatusForUnacceptedLicenses:(id)arg1;
- (id)stringFromBool:(_Bool)arg1;
- (void)fetchUnacceptedLicenses;
- (void)registerDebugActions;
- (void)setupFeatureFlags;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

