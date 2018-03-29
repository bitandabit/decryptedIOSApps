//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAccountProductActivationObserver.h"
#import "SPTAccountProductInformationObserver.h"
#import "SPTDataLoaderDelegate.h"
#import "SPTUpsellActionFactoryDelegate.h"
#import "SPTUpsellConfigurationsCacheControllerDelegate.h"
#import "SPTUpsellConfigurationsPrerequisitesObserver.h"
#import "SPTUpsellResourcesFetchControllerDelegate.h"
#import "SPTUpsellServiceLoggerDelegate.h"

@class NSDate, NSObject<OS_dispatch_queue>, NSString, SPTDataLoader, SPTUpsellAutoTrialLogger, SPTUpsellCompoundLogger, SPTUpsellConfigurationsCacheController, SPTUpsellConfigurationsPrerequisites, SPTUpsellExperiments, SPTUpsellFallbackProvider, SPTUpsellResourcesFetchController;

@interface SPTUpsellConfigurationsController : NSObject <SPTDataLoaderDelegate, SPTUpsellConfigurationsCacheControllerDelegate, SPTAccountProductInformationObserver, SPTUpsellResourcesFetchControllerDelegate, SPTUpsellConfigurationsPrerequisitesObserver, SPTUpsellServiceLoggerDelegate, SPTAccountProductActivationObserver, SPTUpsellActionFactoryDelegate>
{
    _Bool _refreshing;
    _Bool _active;
    id <SPTUpsellPresentShowcaseProtocol> _showcaseDelegate;
    SPTUpsellAutoTrialLogger *_autoTrialLogger;
    NSDate *_autoTrialActivationStart;
    NSDate *_autoTrialTaskActivationStart;
    SPTUpsellConfigurationsPrerequisites *_prerequisites;
    SPTUpsellExperiments *_experiments;
    id <SPTExternalIntegrationDriverDistractionController> _driverDistraction;
    SPTUpsellCompoundLogger *_logger;
    id <SPTUpsellLogger> _serviceLogger;
    SPTDataLoader *_serviceLoggerDataLoader;
    id <SPTAccountProductActivationController> _productActivationController;
    id <SPTAccountProductInformationController> _productInformationController;
    NSObject<OS_dispatch_queue> *_loadImagesQueue;
    SPTUpsellConfigurationsCacheController *_cacheController;
    SPTUpsellResourcesFetchController *_resourcesFetchController;
    SPTUpsellFallbackProvider *_fallbackProvider;
    SPTDataLoader *_refreshDataLoader;
    id <SPTDataLoaderCancellationToken> _refreshCancellationToken;
    SPTDataLoader *_callbackDataLoader;
}

+ (id)supportedReasons;
@property(readonly, nonatomic) SPTDataLoader *callbackDataLoader; // @synthesize callbackDataLoader=_callbackDataLoader;
@property(retain, nonatomic) id <SPTDataLoaderCancellationToken> refreshCancellationToken; // @synthesize refreshCancellationToken=_refreshCancellationToken;
@property(readonly, nonatomic) SPTDataLoader *refreshDataLoader; // @synthesize refreshDataLoader=_refreshDataLoader;
@property(retain, nonatomic) SPTUpsellFallbackProvider *fallbackProvider; // @synthesize fallbackProvider=_fallbackProvider;
@property(readonly, nonatomic) SPTUpsellResourcesFetchController *resourcesFetchController; // @synthesize resourcesFetchController=_resourcesFetchController;
@property(retain, nonatomic) SPTUpsellConfigurationsCacheController *cacheController; // @synthesize cacheController=_cacheController;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *loadImagesQueue; // @synthesize loadImagesQueue=_loadImagesQueue;
@property(readonly, nonatomic) id <SPTAccountProductInformationController> productInformationController; // @synthesize productInformationController=_productInformationController;
@property(readonly, nonatomic) id <SPTAccountProductActivationController> productActivationController; // @synthesize productActivationController=_productActivationController;
@property(readonly, nonatomic) SPTDataLoader *serviceLoggerDataLoader; // @synthesize serviceLoggerDataLoader=_serviceLoggerDataLoader;
@property(readonly, nonatomic) id <SPTUpsellLogger> serviceLogger; // @synthesize serviceLogger=_serviceLogger;
@property(readonly, nonatomic) SPTUpsellCompoundLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTExternalIntegrationDriverDistractionController> driverDistraction; // @synthesize driverDistraction=_driverDistraction;
@property(readonly, nonatomic) SPTUpsellExperiments *experiments; // @synthesize experiments=_experiments;
@property(readonly, nonatomic) SPTUpsellConfigurationsPrerequisites *prerequisites; // @synthesize prerequisites=_prerequisites;
@property(retain, nonatomic) NSDate *autoTrialTaskActivationStart; // @synthesize autoTrialTaskActivationStart=_autoTrialTaskActivationStart;
@property(retain, nonatomic) NSDate *autoTrialActivationStart; // @synthesize autoTrialActivationStart=_autoTrialActivationStart;
@property(retain, nonatomic) SPTUpsellAutoTrialLogger *autoTrialLogger; // @synthesize autoTrialLogger=_autoTrialLogger;
@property(nonatomic) __weak id <SPTUpsellPresentShowcaseProtocol> showcaseDelegate; // @synthesize showcaseDelegate=_showcaseDelegate;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic, getter=isRefreshing) _Bool refreshing; // @synthesize refreshing=_refreshing;
- (void).cxx_destruct;
- (void)productActivationControllerDidFailTrialTaskActivation:(id)arg1 error:(id)arg2;
- (void)productActivationControllerDidFinishTrialTaskActivation:(id)arg1;
- (void)productActivationControllerDidStartTrialTaskActivation:(id)arg1;
- (void)productActivationController:(id)arg1 didFailActivatingProduct:(long long)arg2 error:(id)arg3;
- (void)productActivationController:(id)arg1 didFinishActivatingProduct:(long long)arg2;
- (void)productActivationController:(id)arg1 didStartActivatingProduct:(long long)arg2;
- (void)serviceLogger:(id)arg1 didLogImpressionOfUpsell:(id)arg2;
- (void)serviceLogger:(id)arg1 didLogInteractionWithUpsell:(id)arg2 viaButton:(id)arg3;
- (void)triggerMoreUpsellWithData:(id)arg1;
- (id)productActivationControllerForActionFactory:(id)arg1;
- (id)callbackDataLoaderForActionFactory:(id)arg1;
- (void)resourcesFetchController:(id)arg1 didCancelFetchForURL:(id)arg2;
- (void)resourcesFetchController:(id)arg1 didEncounterError:(id)arg2 forURL:(id)arg3;
- (void)resourcesFetchController:(id)arg1 didFetchData:(id)arg2 resourceType:(long long)arg3 forURL:(id)arg4;
- (void)isSatisfiedDidChangeForConfigurationsPrerequisites:(id)arg1;
- (void)availableProductDidChangeForProductInformationController:(id)arg1;
- (void)premiumTrialEligibilityIsSetForProductInformationController:(id)arg1;
- (void)currentProductDidChangeForProductInformationController:(id)arg1;
- (void)cacheWasPrunedByConfigurationsCacheController:(id)arg1;
- (void)cacheWasInvalidatedByConfigurationsCacheController:(id)arg1;
- (void)configurationsCacheController:(id)arg1 didStoreUpsells:(id)arg2;
- (void)configurationsCacheController:(id)arg1 didLoadUpsells:(id)arg2;
- (void)fetchMissingResourcesForUpsells:(id)arg1;
- (void)dataLoader:(id)arg1 didCancelRequest:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)pruneCache;
- (void)invalidateCache;
- (void)handleDataLoaderResponseDomainError:(id)arg1;
- (void)handleDataLoaderRequestDomainError:(id)arg1;
- (void)handleRefreshError:(id)arg1;
- (void)didEncounterPermanentError;
- (void)handleRefreshedJSONData:(id)arg1 identifier:(id)arg2;
@property(readonly, nonatomic) _Bool hasData;
- (void)invalidateCacheIfNeeded;
- (_Bool)hasCachedDataExpired;
- (void)fetchConfigurationsAndIgnoreCache:(_Bool)arg1;
- (void)cleanupAfterRefresh;
- (void)cancelRefresh;
- (void)refreshAndIgnoreCache:(_Bool)arg1;
- (void)refresh;
- (void)applicationWillEnterForeground;
- (void)loadUpsellImage:(id)arg1 loadGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)createUpsellWithImages:(id)arg1 preferredWidth:(double)arg2;
- (void)configurationForReason:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)configExistsForReason:(long long)arg1;
- (void)deactivate;
- (void)activateIfPossible;
- (void)createNewUpsellConfiguration:(id)arg1;
- (void)dealloc;
- (id)initWithPrerequisites:(id)arg1 refreshDataLoader:(id)arg2 callbackDataLoader:(id)arg3 resourcesFetchController:(id)arg4 productActivationController:(id)arg5 productInformationController:(id)arg6 driverDistraction:(id)arg7 experiments:(id)arg8 logger:(id)arg9 autoTrialLogger:(id)arg10 serviceLogger:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

