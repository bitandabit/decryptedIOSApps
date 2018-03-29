//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUFriendFeedRankingMetadata-Protocol.h"

@class NSNumber, NSString, SOJUFriendFeedAstGroup, SOJUFriendFeedDebugRankingMetadata, SOJUFriendFeedRerankerV2Metadata;

@interface SOJUFriendFeedRankingMetadata : NSObject <SOJUFriendFeedRankingMetadata>
{
    SOJUFriendFeedAstGroup *_astGroupToUse;
    SOJUFriendFeedDebugRankingMetadata *_debugRankingMetadata;
    NSNumber *_backgroundTimeThresholdInSeconds;
    NSNumber *_rerankerStoryDemotionFactor;
    NSNumber *_rerankerChatDemotionFactor;
    NSNumber *_rerankerEnabled;
    NSNumber *_lastFullRankingTimeThresholdInSecs;
    NSNumber *_warmStartLastFullRankingTimeThresholdInSecs;
    NSNumber *_warmStartFriendFeedTimeAwayThresholdInSecsDeprecated;
    NSNumber *_friendFeedTimeAwayThresholdInSecs;
    NSNumber *_warmStartBackgroundTimeThresholdInSeconds;
    SOJUFriendFeedRerankerV2Metadata *_rerankerV2Metadata;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) SOJUFriendFeedRerankerV2Metadata *rerankerV2Metadata; // @synthesize rerankerV2Metadata=_rerankerV2Metadata;
@property(readonly, copy, nonatomic) NSNumber *warmStartBackgroundTimeThresholdInSeconds; // @synthesize warmStartBackgroundTimeThresholdInSeconds=_warmStartBackgroundTimeThresholdInSeconds;
@property(readonly, copy, nonatomic) NSNumber *friendFeedTimeAwayThresholdInSecs; // @synthesize friendFeedTimeAwayThresholdInSecs=_friendFeedTimeAwayThresholdInSecs;
@property(readonly, copy, nonatomic) NSNumber *warmStartFriendFeedTimeAwayThresholdInSecsDeprecated; // @synthesize warmStartFriendFeedTimeAwayThresholdInSecsDeprecated=_warmStartFriendFeedTimeAwayThresholdInSecsDeprecated;
@property(readonly, copy, nonatomic) NSNumber *warmStartLastFullRankingTimeThresholdInSecs; // @synthesize warmStartLastFullRankingTimeThresholdInSecs=_warmStartLastFullRankingTimeThresholdInSecs;
@property(readonly, copy, nonatomic) NSNumber *lastFullRankingTimeThresholdInSecs; // @synthesize lastFullRankingTimeThresholdInSecs=_lastFullRankingTimeThresholdInSecs;
@property(readonly, copy, nonatomic) NSNumber *rerankerEnabled; // @synthesize rerankerEnabled=_rerankerEnabled;
@property(readonly, copy, nonatomic) NSNumber *rerankerChatDemotionFactor; // @synthesize rerankerChatDemotionFactor=_rerankerChatDemotionFactor;
@property(readonly, copy, nonatomic) NSNumber *rerankerStoryDemotionFactor; // @synthesize rerankerStoryDemotionFactor=_rerankerStoryDemotionFactor;
@property(readonly, copy, nonatomic) NSNumber *backgroundTimeThresholdInSeconds; // @synthesize backgroundTimeThresholdInSeconds=_backgroundTimeThresholdInSeconds;
@property(readonly, copy, nonatomic) SOJUFriendFeedDebugRankingMetadata *debugRankingMetadata; // @synthesize debugRankingMetadata=_debugRankingMetadata;
@property(readonly, copy, nonatomic) SOJUFriendFeedAstGroup *astGroupToUse; // @synthesize astGroupToUse=_astGroupToUse;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAstGroupToUse:(id)arg1 debugRankingMetadata:(id)arg2 backgroundTimeThresholdInSeconds:(id)arg3 rerankerStoryDemotionFactor:(id)arg4 rerankerChatDemotionFactor:(id)arg5 rerankerEnabled:(id)arg6 lastFullRankingTimeThresholdInSecs:(id)arg7 warmStartLastFullRankingTimeThresholdInSecs:(id)arg8 warmStartFriendFeedTimeAwayThresholdInSecsDeprecated:(id)arg9 friendFeedTimeAwayThresholdInSecs:(id)arg10 warmStartBackgroundTimeThresholdInSeconds:(id)arg11 rerankerV2Metadata:(id)arg12;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (int)warmStartBackgroundTimeThresholdInSecondsValue;
- (int)friendFeedTimeAwayThresholdInSecsValue;
- (int)warmStartFriendFeedTimeAwayThresholdInSecsDeprecatedValue;
- (int)warmStartLastFullRankingTimeThresholdInSecsValue;
- (int)lastFullRankingTimeThresholdInSecsValue;
- (_Bool)rerankerEnabledValue;
- (int)rerankerChatDemotionFactorValue;
- (int)rerankerStoryDemotionFactorValue;
- (int)backgroundTimeThresholdInSecondsValue;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
