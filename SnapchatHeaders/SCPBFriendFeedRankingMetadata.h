//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCPBFriendFeedAstGroup, SCPBFriendFeedDebugRankingMetadata, SCPBFriendFeedRerankerV2Metadata;

@interface SCPBFriendFeedRankingMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCPBFriendFeedAstGroup *astGroupToUse; // @dynamic astGroupToUse;
@property(nonatomic) int backgroundTimeThresholdInSeconds; // @dynamic backgroundTimeThresholdInSeconds;
@property(retain, nonatomic) SCPBFriendFeedDebugRankingMetadata *debugRankingMetadata; // @dynamic debugRankingMetadata;
@property(nonatomic) int friendFeedTimeAwayThresholdInSecs; // @dynamic friendFeedTimeAwayThresholdInSecs;
@property(nonatomic) _Bool hasAstGroupToUse; // @dynamic hasAstGroupToUse;
@property(nonatomic) _Bool hasDebugRankingMetadata; // @dynamic hasDebugRankingMetadata;
@property(nonatomic) _Bool hasRerankerV2Metadata; // @dynamic hasRerankerV2Metadata;
@property(nonatomic) int lastFullRankingTimeThresholdInSecs; // @dynamic lastFullRankingTimeThresholdInSecs;
@property(nonatomic) int rerankerChatDemotionFactor; // @dynamic rerankerChatDemotionFactor;
@property(nonatomic) _Bool rerankerEnabled; // @dynamic rerankerEnabled;
@property(nonatomic) int rerankerStoryDemotionFactor; // @dynamic rerankerStoryDemotionFactor;
@property(retain, nonatomic) SCPBFriendFeedRerankerV2Metadata *rerankerV2Metadata; // @dynamic rerankerV2Metadata;
@property(nonatomic) int warmStartBackgroundTimeThresholdInSeconds; // @dynamic warmStartBackgroundTimeThresholdInSeconds;
@property(nonatomic) int warmStartFriendFeedTimeAwayThresholdInSecs; // @dynamic warmStartFriendFeedTimeAwayThresholdInSecs;
@property(nonatomic) int warmStartLastFullRankingTimeThresholdInSecs; // @dynamic warmStartLastFullRankingTimeThresholdInSecs;

@end

