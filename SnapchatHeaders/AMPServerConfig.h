//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMPStaticShadowConfig.h"

@class SOJUBlizzardClientConfig;

@interface AMPServerConfig : AMPStaticShadowConfig
{
    SOJUBlizzardClientConfig *_serverConfig;
}

@property(readonly, nonatomic) SOJUBlizzardClientConfig *serverConfig; // @synthesize serverConfig=_serverConfig;
- (void).cxx_destruct;
- (id)version;
- (struct NSDictionary *)eventnameToLoggersMap;
- (struct NSDictionary *)eventPrefixToLoggersMap;
- (id)defaultLoggers;
- (id)loggers;
- (id)blacklistedEvents;
- (id)criticalEvents;
- (unsigned long long)eventUploadTimeoutSeconds;
- (unsigned long long)eventUploadPeriodSeconds;
- (unsigned long long)eventSaveBatchSize;
- (unsigned long long)eventRemoveBatchSize;
- (unsigned long long)eventMaxCount;
- (unsigned long long)eventUploadMaxBatchSize;
- (unsigned long long)eventUploadThreshold;
- (double)gceCollectorTrafficPercent;
- (id)gceCollectorUrl;
- (_Bool)_doLoggersExist;
- (_Bool)isInitialized;
- (id)initWithSOJUConfig:(id)arg1;

@end

