//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSString, SOJUAdAdPreferences, SOJUAdClientRankingFeatures, SOJUAdClientRankingModelOutput, SOJUAdCombinedTargeting, SOJUAdImpressionData;

@interface SOJUAdTrackAndGetRequestBuilder : NSObject
{
    NSString *_requestId;
    NSNumber *_canTrack;
    NSString *_userAdId;
    NSString *_rawUserData;
    NSString *_rawAdData;
    SOJUAdCombinedTargeting *_targeting;
    SOJUAdImpressionData *_impressionData;
    NSNumber *_debug;
    NSString *_sessionId;
    NSNumber *_trackSeqNum;
    NSArray *_unusedAds;
    NSNumber *_attemptSeqNum;
    SOJUAdClientRankingModelOutput *_clientRankingModelOutput;
    NSNumber *_clientRankingNoShow;
    SOJUAdClientRankingFeatures *_clientRankingFeatures;
    SOJUAdAdPreferences *_adPreferences;
}

+ (id)withJUAdTrackAndGetRequest:(id)arg1;
- (void).cxx_destruct;
- (id)setAdPreferences:(id)arg1;
- (id)setClientRankingFeatures:(id)arg1;
- (id)setClientRankingNoShow:(id)arg1;
- (id)setClientRankingModelOutput:(id)arg1;
- (id)setAttemptSeqNum:(id)arg1;
- (id)setUnusedAds:(id)arg1;
- (id)setTrackSeqNum:(id)arg1;
- (id)setSessionId:(id)arg1;
- (id)setDebug:(id)arg1;
- (id)setImpressionData:(id)arg1;
- (id)setTargeting:(id)arg1;
- (id)setRawAdData:(id)arg1;
- (id)setRawUserData:(id)arg1;
- (id)setUserAdId:(id)arg1;
- (id)setCanTrack:(id)arg1;
- (id)setRequestId:(id)arg1;
- (id)build;
- (id)setClientRankingNoShowValue:(_Bool)arg1;
- (id)setAttemptSeqNumValue:(int)arg1;
- (id)setTrackSeqNumValue:(int)arg1;
- (id)setDebugValue:(_Bool)arg1;
- (id)setCanTrackValue:(_Bool)arg1;

@end
