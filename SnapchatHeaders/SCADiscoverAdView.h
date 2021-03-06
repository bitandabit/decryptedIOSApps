//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCADiscoverSnapViewBase.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCADiscoverAdView : SCADiscoverSnapViewBase <MapSerializable, NSCopying>
{
    NSNumber *fullView;
    NSNumber *adIndexCount;
    NSNumber *adIndexPos;
    NSNumber *snapTimeSec;
    NSNumber *mediaDisplayTimeSec;
    NSNumber *rollMaxDegree;
    NSNumber *rollMinDegree;
    NSNumber *isArchived;
    NSNumber *webviewLoadedOnEntry;
    NSNumber *webviewLoadedOnExit;
    NSNumber *deepLinkFromCard;
    NSNumber *deepLinkFallbackToAppStore;
    NSNumber *deepLinkFallbackToWebview;
    NSNumber *cardVisibleTime;
    NSNumber *isCameraAd;
    long long mediaType;
    long long cardExitEvent;
    NSString *adsnapId;
    NSString *adId;
    NSString *adUnitId;
    NSString *adRequestClientId;
    NSString *adsnapPlacementId;
    NSString *adsnapLineItemId;
    NSString *userAdId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getUserAdId;
- (void)setUserAdId:(id)arg1;
- (id)getAdsnapLineItemId;
- (void)setAdsnapLineItemId:(id)arg1;
- (id)getAdsnapPlacementId;
- (void)setAdsnapPlacementId:(id)arg1;
- (id)getAdRequestClientId;
- (void)setAdRequestClientId:(id)arg1;
- (id)getAdUnitId;
- (void)setAdUnitId:(id)arg1;
- (id)getAdId;
- (void)setAdId:(id)arg1;
- (id)getAdsnapId;
- (void)setAdsnapId:(id)arg1;
- (long long)getCardExitEvent;
- (void)setCardExitEvent:(long long)arg1;
- (long long)getMediaType;
- (void)setMediaType:(long long)arg1;
- (_Bool)getIsCameraAd;
- (void)setIsCameraAd:(_Bool)arg1;
- (double)getCardVisibleTime;
- (void)setCardVisibleTime:(double)arg1;
- (_Bool)getDeepLinkFallbackToWebview;
- (void)setDeepLinkFallbackToWebview:(_Bool)arg1;
- (_Bool)getDeepLinkFallbackToAppStore;
- (void)setDeepLinkFallbackToAppStore:(_Bool)arg1;
- (_Bool)getDeepLinkFromCard;
- (void)setDeepLinkFromCard:(_Bool)arg1;
- (_Bool)getWebviewLoadedOnExit;
- (void)setWebviewLoadedOnExit:(_Bool)arg1;
- (_Bool)getWebviewLoadedOnEntry;
- (void)setWebviewLoadedOnEntry:(_Bool)arg1;
- (_Bool)getIsArchived;
- (void)setIsArchived:(_Bool)arg1;
- (double)getRollMinDegree;
- (void)setRollMinDegree:(double)arg1;
- (double)getRollMaxDegree;
- (void)setRollMaxDegree:(double)arg1;
- (double)getMediaDisplayTimeSec;
- (void)setMediaDisplayTimeSec:(double)arg1;
- (double)getSnapTimeSec;
- (void)setSnapTimeSec:(double)arg1;
- (long long)getAdIndexPos;
- (void)setAdIndexPos:(long long)arg1;
- (long long)getAdIndexCount;
- (void)setAdIndexCount:(long long)arg1;
- (_Bool)getFullView;
- (void)setFullView:(_Bool)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

