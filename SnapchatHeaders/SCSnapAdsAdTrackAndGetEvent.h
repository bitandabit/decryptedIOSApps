//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSnapAdsBaseEvent.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString, SCSnapAdsIdentifier, SOJUAdAdPreferences, SOJUAdClientRankingFeatures, SOJUAdClientRankingModelOutput;

@interface SCSnapAdsAdTrackAndGetEvent : SCSnapAdsBaseEvent
{
    _Bool _debugWaterfall;
    NSString *_overrideTrackURL;
    SCSnapAdsIdentifier *_trackedAdIdentifier;
    NSDictionary *_viewContext;
    NSString *_exitEvent;
    NSArray *_trackedURLs;
    SCSnapAdsIdentifier *_requestedAdIdentifier;
    NSMutableDictionary *_requestTargetingParams;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    CDUnknownBlockType _timeoutBlock;
    long long _timeoutMillis;
    unsigned long long _adProductType;
    SOJUAdClientRankingFeatures *_clientRankingFeatures;
    SOJUAdClientRankingModelOutput *_clientRankingOutput;
    NSArray *_unusedAds;
    SOJUAdAdPreferences *_adPreferences;
}

@property(retain, nonatomic) SOJUAdAdPreferences *adPreferences; // @synthesize adPreferences=_adPreferences;
@property(retain, nonatomic) NSArray *unusedAds; // @synthesize unusedAds=_unusedAds;
@property(retain, nonatomic) SOJUAdClientRankingModelOutput *clientRankingOutput; // @synthesize clientRankingOutput=_clientRankingOutput;
@property(retain, nonatomic) SOJUAdClientRankingFeatures *clientRankingFeatures; // @synthesize clientRankingFeatures=_clientRankingFeatures;
@property(nonatomic) unsigned long long adProductType; // @synthesize adProductType=_adProductType;
@property(nonatomic) long long timeoutMillis; // @synthesize timeoutMillis=_timeoutMillis;
@property(copy, nonatomic) CDUnknownBlockType timeoutBlock; // @synthesize timeoutBlock=_timeoutBlock;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSMutableDictionary *requestTargetingParams; // @synthesize requestTargetingParams=_requestTargetingParams;
@property(retain, nonatomic) SCSnapAdsIdentifier *requestedAdIdentifier; // @synthesize requestedAdIdentifier=_requestedAdIdentifier;
@property(nonatomic) _Bool debugWaterfall; // @synthesize debugWaterfall=_debugWaterfall;
@property(retain, nonatomic) NSArray *trackedURLs; // @synthesize trackedURLs=_trackedURLs;
@property(retain, nonatomic) NSString *exitEvent; // @synthesize exitEvent=_exitEvent;
@property(retain, nonatomic) NSDictionary *viewContext; // @synthesize viewContext=_viewContext;
@property(retain, nonatomic) SCSnapAdsIdentifier *trackedAdIdentifier; // @synthesize trackedAdIdentifier=_trackedAdIdentifier;
@property(retain, nonatomic) NSString *overrideTrackURL; // @synthesize overrideTrackURL=_overrideTrackURL;
- (void).cxx_destruct;

@end

