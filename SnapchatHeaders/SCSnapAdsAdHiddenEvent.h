//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSnapAdsBaseEvent.h"

@class NSDictionary, NSString, SCSnapAdsIdentifier, SOJUAdClientRankingFeatures, SOJUAdClientRankingModelOutput;

@interface SCSnapAdsAdHiddenEvent : SCSnapAdsBaseEvent
{
    SCSnapAdsIdentifier *_adIdentifier;
    NSDictionary *_viewContext;
    NSString *_exitEvent;
    SOJUAdClientRankingFeatures *_clientRankingFeatures;
    SOJUAdClientRankingModelOutput *_clientRankingOutput;
}

@property(retain, nonatomic) SOJUAdClientRankingModelOutput *clientRankingOutput; // @synthesize clientRankingOutput=_clientRankingOutput;
@property(retain, nonatomic) SOJUAdClientRankingFeatures *clientRankingFeatures; // @synthesize clientRankingFeatures=_clientRankingFeatures;
@property(retain, nonatomic) NSString *exitEvent; // @synthesize exitEvent=_exitEvent;
@property(retain, nonatomic) NSDictionary *viewContext; // @synthesize viewContext=_viewContext;
@property(retain, nonatomic) SCSnapAdsIdentifier *adIdentifier; // @synthesize adIdentifier=_adIdentifier;
- (void).cxx_destruct;

@end

