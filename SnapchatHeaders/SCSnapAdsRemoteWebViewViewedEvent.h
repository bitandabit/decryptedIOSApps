//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSnapAdsBaseEvent.h"

@class SCSnapAdsIdentifier;

@interface SCSnapAdsRemoteWebViewViewedEvent : SCSnapAdsBaseEvent
{
    _Bool _loadedOnEntry;
    _Bool _loadedOnExit;
    SCSnapAdsIdentifier *_adIdentifier;
    unsigned long long _adProductType;
    long long _loadErrorCount;
    double _visiblePageLoadTimeSeconds;
    long long _index;
}

@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) double visiblePageLoadTimeSeconds; // @synthesize visiblePageLoadTimeSeconds=_visiblePageLoadTimeSeconds;
@property(nonatomic) long long loadErrorCount; // @synthesize loadErrorCount=_loadErrorCount;
@property(nonatomic) _Bool loadedOnExit; // @synthesize loadedOnExit=_loadedOnExit;
@property(nonatomic) _Bool loadedOnEntry; // @synthesize loadedOnEntry=_loadedOnEntry;
@property(nonatomic) unsigned long long adProductType; // @synthesize adProductType=_adProductType;
@property(retain, nonatomic) SCSnapAdsIdentifier *adIdentifier; // @synthesize adIdentifier=_adIdentifier;
- (void).cxx_destruct;

@end
