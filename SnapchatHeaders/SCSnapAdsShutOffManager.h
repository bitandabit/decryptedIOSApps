//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString, SCSnapAdsEventBus;
@protocol SCSnapAdsMetricAdapter;

@interface SCSnapAdsShutOffManager : NSObject
{
    SCSnapAdsEventBus *_snapAdsEventBus;
    id <SCSnapAdsMetricAdapter> _adMetricAdapter;
    NSString *_appVersion;
    NSMutableSet *_blockedTypes;
}

- (void).cxx_destruct;
- (_Bool)shouldTurnOffAdsForType:(unsigned long long)arg1;
- (void)onShutOffRulesUpdated:(id)arg1;
- (id)initWithSnapAdsEventBus:(id)arg1 appVersion:(id)arg2 metricAdapter:(id)arg3;

@end
