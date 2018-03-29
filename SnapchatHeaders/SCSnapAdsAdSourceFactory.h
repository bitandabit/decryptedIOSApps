//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SCCheetahPromotedStoriesAdResponseTracker, SCSnapAdsAdInteractionTracker, SCSnapAdsAdMediaRenditionSelector, SCSnapAdsAdResponseTracker, SCSnapAdsDeviceTargetingManager, SCSnapAdsEventBus, SCSnapAdsNetworkUserAgent, SCSnapAdsUser;
@protocol SCSnapAdsExperimentsAdapter, SCSnapAdsMetricAdapter, SCSnapAdsNetworkAdapter, SCSnapAdsPersistedDataAdapter;

@interface SCSnapAdsAdSourceFactory : NSObject
{
    id <SCSnapAdsNetworkAdapter> _networkAdapter;
    SCSnapAdsUser *_snapAdsUser;
    SCSnapAdsEventBus *_eventBus;
    SCSnapAdsNetworkUserAgent *_userAgent;
    SCSnapAdsAdMediaRenditionSelector *_adMediaRenditionSelector;
    SCSnapAdsAdInteractionTracker *_adInteractionTracker;
    SCCheetahPromotedStoriesAdResponseTracker *_cheetahPromotedStoriesAdResponseTracker;
    SCSnapAdsAdResponseTracker *_primaryAdResponseTracker;
    SCSnapAdsAdResponseTracker *_shadowAdResponseTracker;
    id <SCSnapAdsPersistedDataAdapter> _persistedDataAdapter;
    SCSnapAdsDeviceTargetingManager *_deviceTargetingManager;
    id <SCSnapAdsMetricAdapter> _adsMetricAdapter;
    id <SCSnapAdsExperimentsAdapter> _adsExperimentsAdapter;
}

@property(readonly, nonatomic) __weak id <SCSnapAdsExperimentsAdapter> adsExperimentsAdapter; // @synthesize adsExperimentsAdapter=_adsExperimentsAdapter;
@property(retain, nonatomic) id <SCSnapAdsMetricAdapter> adsMetricAdapter; // @synthesize adsMetricAdapter=_adsMetricAdapter;
@property(retain, nonatomic) SCSnapAdsDeviceTargetingManager *deviceTargetingManager; // @synthesize deviceTargetingManager=_deviceTargetingManager;
@property(retain, nonatomic) id <SCSnapAdsPersistedDataAdapter> persistedDataAdapter; // @synthesize persistedDataAdapter=_persistedDataAdapter;
@property(retain, nonatomic) SCSnapAdsAdResponseTracker *shadowAdResponseTracker; // @synthesize shadowAdResponseTracker=_shadowAdResponseTracker;
@property(retain, nonatomic) SCSnapAdsAdResponseTracker *primaryAdResponseTracker; // @synthesize primaryAdResponseTracker=_primaryAdResponseTracker;
@property(retain, nonatomic) SCCheetahPromotedStoriesAdResponseTracker *cheetahPromotedStoriesAdResponseTracker; // @synthesize cheetahPromotedStoriesAdResponseTracker=_cheetahPromotedStoriesAdResponseTracker;
@property(retain, nonatomic) SCSnapAdsAdInteractionTracker *adInteractionTracker; // @synthesize adInteractionTracker=_adInteractionTracker;
@property(retain, nonatomic) SCSnapAdsAdMediaRenditionSelector *adMediaRenditionSelector; // @synthesize adMediaRenditionSelector=_adMediaRenditionSelector;
@property(retain, nonatomic) SCSnapAdsNetworkUserAgent *userAgent; // @synthesize userAgent=_userAgent;
@property(retain, nonatomic) SCSnapAdsEventBus *eventBus; // @synthesize eventBus=_eventBus;
@property(retain, nonatomic) SCSnapAdsUser *snapAdsUser; // @synthesize snapAdsUser=_snapAdsUser;
@property(retain, nonatomic) id <SCSnapAdsNetworkAdapter> networkAdapter; // @synthesize networkAdapter=_networkAdapter;
- (void).cxx_destruct;
- (id)defaultAdSource;
- (id)adSourceForConfig:(id)arg1;
- (id)build:(id)arg1;
- (id)initWithNetworkAdapter:(id)arg1 snapAdsUser:(id)arg2 eventBus:(id)arg3 userAgent:(id)arg4 renditionSelector:(id)arg5 adInteractionTracker:(id)arg6 cheetahPromotedStoriesResponseTracker:(id)arg7 primaryAdResponseTracker:(id)arg8 shadowAdResponseTracker:(id)arg9 persistedDataAdapter:(id)arg10 deviceTargetingManager:(id)arg11 adsMetricAdapter:(id)arg12 snapAdsExperimentsAdapter:(id)arg13;

@end

