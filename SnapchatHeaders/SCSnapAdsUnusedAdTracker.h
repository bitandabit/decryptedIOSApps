//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, SCSnapAdsEventBus;

@interface SCSnapAdsUnusedAdTracker : NSObject
{
    SCSnapAdsEventBus *_snapAdsEventBus;
    NSMutableSet *_unusedAds;
    NSMutableDictionary *_activeAds;
}

@property(retain, nonatomic) NSMutableDictionary *activeAds; // @synthesize activeAds=_activeAds;
@property(retain, nonatomic) NSMutableSet *unusedAds; // @synthesize unusedAds=_unusedAds;
@property(retain, nonatomic) SCSnapAdsEventBus *snapAdsEventBus; // @synthesize snapAdsEventBus=_snapAdsEventBus;
- (void).cxx_destruct;
- (void)onAdTrackedAndGetEvent:(id)arg1;
- (void)onAdExpiredEvent:(id)arg1;
- (void)onEnterAdUnitEvent:(id)arg1;
- (void)onAdTrackedEvent:(id)arg1;
- (void)onAdResolvedEvent:(id)arg1;
- (_Bool)onAdRequestEvent:(id)arg1;
- (void)registerSnapAdsEvents;
- (id)initWithSnapAdsEventBus:(id)arg1;

@end

