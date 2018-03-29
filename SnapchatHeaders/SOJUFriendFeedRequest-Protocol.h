//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SOJUAuthPayload-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUBroadcastStoryFriendFeedRequest, SOJUChatFeedRequest, SOJUFriendFeedRequestDebugParam;

@protocol SOJUFriendFeedRequest <NSObject, NSCoding, NSCopying, SOJUAuthPayload>
@property(readonly, copy, nonatomic) NSNumber *lastFullSyncTimestamp;
@property(readonly, copy, nonatomic) SOJUFriendFeedRequestDebugParam *debugParam;
@property(readonly, copy, nonatomic) NSArray *previousPagesItemIds;
@property(readonly, copy, nonatomic) NSArray *conversationIdsToFetch;
@property(readonly, copy, nonatomic) NSString *layoutType;
@property(readonly, copy, nonatomic) NSNumber *creationTimestamp;
@property(readonly, copy, nonatomic) NSString *callOriginationType;
@property(readonly, copy, nonatomic) NSString *requestId;
@property(readonly, copy, nonatomic) NSString *sessionId;
@property(readonly, copy, nonatomic) SOJUBroadcastStoryFriendFeedRequest *storyFriendFeedRequest;
@property(readonly, copy, nonatomic) SOJUChatFeedRequest *chatFeedRequest;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, copy, nonatomic) NSString *reqToken;
@property(readonly, copy, nonatomic) NSString *timestamp;
@end
