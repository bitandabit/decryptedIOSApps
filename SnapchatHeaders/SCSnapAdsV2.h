//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SCCheetahPromotedStoriesAdResponseTracker, SCSnapAdsAdInteractionTracker, SCSnapAdsAdMediaRenditionSelector, SCSnapAdsAdProductsConfigManager, SCSnapAdsAdResponseTracker, SCSnapAdsAdSourceFactory, SCSnapAdsAdThirdPartyTrackingManager, SCSnapAdsAppStateAwareExecutor, SCSnapAdsBusinessMetricsReporter, SCSnapAdsDebugLogger, SCSnapAdsDebugSettingsManager, SCSnapAdsDeviceTargetingManager, SCSnapAdsEventBus, SCSnapAdsExperimentsManager, SCSnapAdsLifeCycleTracker, SCSnapAdsNetworkUserAgent, SCSnapAdsPixelTrackingCookieManager, SCSnapAdsShutOffManager, SCSnapAdsUnusedAdTracker, SCSnapAdsUser;
@protocol SCAdSource, SCSnapAdsMetricAdapter, SCSnapAdsPersistedDataAdapter;

@interface SCSnapAdsV2 : NSObject
{
    SCSnapAdsEventBus *_eventBus;
    SCSnapAdsNetworkUserAgent *_userAgent;
    id <SCAdSource> _adSource;
    SCSnapAdsAdSourceFactory *_adSourceFactory;
    SCSnapAdsAdMediaRenditionSelector *_adMediaRenditionSelector;
    SCSnapAdsAdInteractionTracker *_adInteractionTracker;
    SCCheetahPromotedStoriesAdResponseTracker *_cheetahPromotedStoriesAdResponseTracker;
    SCSnapAdsUser *_snapAdsUser;
    id <SCSnapAdsPersistedDataAdapter> _persistedDataAdapter;
    SCSnapAdsAppStateAwareExecutor *_appStateAwareExecutor;
    SCSnapAdsDeviceTargetingManager *_deviceTargetingManager;
    SCSnapAdsAdThirdPartyTrackingManager *_adThirdPartyTrackingManager;
    SCSnapAdsDebugSettingsManager *_debugSettingsManager;
    SCSnapAdsUnusedAdTracker *_unusedAdTracker;
    SCSnapAdsExperimentsManager *_adsExperimentsManager;
    id <SCSnapAdsMetricAdapter> _adsMetricAdapter;
    SCSnapAdsLifeCycleTracker *_adLifeCycleTracker;
    SCSnapAdsBusinessMetricsReporter *_metricsReporter;
    SCSnapAdsDebugLogger *_snapAdsDebugLogger;
    SCSnapAdsAdProductsConfigManager *_adProductsConfigManager;
    SCSnapAdsShutOffManager *_adShutOffManager;
    SCSnapAdsPixelTrackingCookieManager *_pixelTrackingCookieManager;
    SCSnapAdsAdResponseTracker *_primaryAdResponseTracker;
    SCSnapAdsAdResponseTracker *_shadowAdResponseTracker;
}

+ (id)shared;
- (void).cxx_destruct;
- (id)adSourceConfigName;
- (id)description;
- (id)adResponseForAdRequestClientId:(id)arg1;
- (id)getPixelToken;
- (id)getSceId;
- (id)getAdProductsConfigManager;
- (void)updateAdSources:(id)arg1;
- (void)updateAdsUser:(id)arg1;
- (void)initializeAdSource;
- (void)initializeWithNetworkAdapter:(id)arg1 deviceAdapter:(id)arg2 persistedDataAdapter:(id)arg3 applicationInfoAdapter:(id)arg4 debugSettingsAdapter:(id)arg5 experimentsAdapter:(id)arg6 metricAdapter:(id)arg7 loggingAdapter:(id)arg8;
- (id)init;

@end
