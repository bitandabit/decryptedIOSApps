//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSMutableDictionary, NSString, SCPBFriendsRequest;

@interface SCPBChatFeedRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *checksumsDict; // @dynamic checksumsDict;
@property(retain, nonatomic) NSMutableDictionary *conversationDeltaQueryMap; // @dynamic conversationDeltaQueryMap;
@property(readonly, nonatomic) unsigned long long conversationDeltaQueryMap_Count; // @dynamic conversationDeltaQueryMap_Count;
@property(retain, nonatomic) NSMutableDictionary *conversationSnapDeltaQueryMap; // @dynamic conversationSnapDeltaQueryMap;
@property(readonly, nonatomic) unsigned long long conversationSnapDeltaQueryMap_Count; // @dynamic conversationSnapDeltaQueryMap_Count;
@property(nonatomic) _Bool excludeFriends; // @dynamic excludeFriends;
@property(copy, nonatomic) NSString *featuresMap; // @dynamic featuresMap;
@property(copy, nonatomic) NSString *feedIterToken; // @dynamic feedIterToken;
@property(copy, nonatomic) NSString *fetchReason; // @dynamic fetchReason;
@property(retain, nonatomic) SCPBFriendsRequest *friendsRequest; // @dynamic friendsRequest;
@property(retain, nonatomic) NSMutableArray *groupDeltaRequestsArray; // @dynamic groupDeltaRequestsArray;
@property(readonly, nonatomic) unsigned long long groupDeltaRequestsArray_Count; // @dynamic groupDeltaRequestsArray_Count;
@property(copy, nonatomic) NSString *groupPaginationType; // @dynamic groupPaginationType;
@property(nonatomic) _Bool hasFriendsRequest; // @dynamic hasFriendsRequest;
@property(copy, nonatomic) NSString *messageIterToken; // @dynamic messageIterToken;
@property(copy, nonatomic) NSString *messagesTier; // @dynamic messagesTier;
@property(nonatomic) _Bool pullToRefresh; // @dynamic pullToRefresh;

@end

