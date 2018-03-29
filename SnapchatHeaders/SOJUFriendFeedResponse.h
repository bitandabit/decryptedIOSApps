//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUFriendFeedResponse-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUChatFeedResponse, SOJUFriendFeedRankingMetadata, SOJUFriendFeedResponseDebugInfo, SOJUFriendFeedUserSignals, SOJUStoriesResponse;

@interface SOJUFriendFeedResponse : NSObject <SOJUFriendFeedResponse>
{
    SOJUChatFeedResponse *_chatFeedResponse;
    SOJUStoriesResponse *_storyFeedResponse;
    NSArray *_feedItems;
    SOJUFriendFeedRankingMetadata *_rankingMetadata;
    NSNumber *_creationTimestamp;
    NSString *_sessionId;
    NSString *_requestId;
    SOJUFriendFeedResponseDebugInfo *_debugInfo;
    NSNumber *_forceFullSyncFeedItems;
    SOJUFriendFeedUserSignals *_userSignals;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) SOJUFriendFeedUserSignals *userSignals; // @synthesize userSignals=_userSignals;
@property(readonly, copy, nonatomic) NSNumber *forceFullSyncFeedItems; // @synthesize forceFullSyncFeedItems=_forceFullSyncFeedItems;
@property(readonly, copy, nonatomic) SOJUFriendFeedResponseDebugInfo *debugInfo; // @synthesize debugInfo=_debugInfo;
@property(readonly, copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, copy, nonatomic) NSNumber *creationTimestamp; // @synthesize creationTimestamp=_creationTimestamp;
@property(readonly, copy, nonatomic) SOJUFriendFeedRankingMetadata *rankingMetadata; // @synthesize rankingMetadata=_rankingMetadata;
@property(readonly, copy, nonatomic) NSArray *feedItems; // @synthesize feedItems=_feedItems;
@property(readonly, copy, nonatomic) SOJUStoriesResponse *storyFeedResponse; // @synthesize storyFeedResponse=_storyFeedResponse;
@property(readonly, copy, nonatomic) SOJUChatFeedResponse *chatFeedResponse; // @synthesize chatFeedResponse=_chatFeedResponse;
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
- (id)initWithChatFeedResponse:(id)arg1 storyFeedResponse:(id)arg2 feedItems:(id)arg3 rankingMetadata:(id)arg4 creationTimestamp:(id)arg5 sessionId:(id)arg6 requestId:(id)arg7 debugInfo:(id)arg8 forceFullSyncFeedItems:(id)arg9 userSignals:(id)arg10;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)forceFullSyncFeedItemsValue;
- (long long)creationTimestampValue;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

