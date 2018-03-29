//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUAllUpdatesRequest-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUFriendsRequest;

@interface SOJUAllUpdatesRequest : NSObject <SOJUAllUpdatesRequest>
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSString *_checksumsDict;
    NSString *_checksumMissingReason;
    NSNumber *_height;
    NSNumber *_width;
    NSNumber *_maxVideoHeight;
    NSNumber *_maxVideoWidth;
    NSString *_featuresMap;
    NSNumber *_screenWidthIn;
    NSNumber *_screenHeightIn;
    NSNumber *_screenWidthPx;
    NSNumber *_screenHeightPx;
    NSNumber *_pullToRefresh;
    SOJUFriendsRequest *_friendsRequest;
    NSArray *_groupDeltaRequests;
    NSNumber *_excludeUser;
    NSNumber *_excludeFriends;
    NSNumber *_excludeConversations;
    NSNumber *_excludeStories;
    NSString *_messagesTier;
    NSNumber *_useNewStoryViewerList;
    NSNumber *_isColdStart;
    NSNumber *_featureSettingsToken;
    NSDictionary *_conversationDeltaQueryMap;
    NSDictionary *_conversationSnapDeltaQueryMap;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSDictionary *conversationSnapDeltaQueryMap; // @synthesize conversationSnapDeltaQueryMap=_conversationSnapDeltaQueryMap;
@property(readonly, copy, nonatomic) NSDictionary *conversationDeltaQueryMap; // @synthesize conversationDeltaQueryMap=_conversationDeltaQueryMap;
@property(readonly, copy, nonatomic) NSNumber *featureSettingsToken; // @synthesize featureSettingsToken=_featureSettingsToken;
@property(readonly, copy, nonatomic) NSNumber *isColdStart; // @synthesize isColdStart=_isColdStart;
@property(readonly, copy, nonatomic) NSNumber *useNewStoryViewerList; // @synthesize useNewStoryViewerList=_useNewStoryViewerList;
@property(readonly, copy, nonatomic) NSString *messagesTier; // @synthesize messagesTier=_messagesTier;
@property(readonly, copy, nonatomic) NSNumber *excludeStories; // @synthesize excludeStories=_excludeStories;
@property(readonly, copy, nonatomic) NSNumber *excludeConversations; // @synthesize excludeConversations=_excludeConversations;
@property(readonly, copy, nonatomic) NSNumber *excludeFriends; // @synthesize excludeFriends=_excludeFriends;
@property(readonly, copy, nonatomic) NSNumber *excludeUser; // @synthesize excludeUser=_excludeUser;
@property(readonly, copy, nonatomic) NSArray *groupDeltaRequests; // @synthesize groupDeltaRequests=_groupDeltaRequests;
@property(readonly, copy, nonatomic) SOJUFriendsRequest *friendsRequest; // @synthesize friendsRequest=_friendsRequest;
@property(readonly, copy, nonatomic) NSNumber *pullToRefresh; // @synthesize pullToRefresh=_pullToRefresh;
@property(readonly, copy, nonatomic) NSNumber *screenHeightPx; // @synthesize screenHeightPx=_screenHeightPx;
@property(readonly, copy, nonatomic) NSNumber *screenWidthPx; // @synthesize screenWidthPx=_screenWidthPx;
@property(readonly, copy, nonatomic) NSNumber *screenHeightIn; // @synthesize screenHeightIn=_screenHeightIn;
@property(readonly, copy, nonatomic) NSNumber *screenWidthIn; // @synthesize screenWidthIn=_screenWidthIn;
@property(readonly, copy, nonatomic) NSString *featuresMap; // @synthesize featuresMap=_featuresMap;
@property(readonly, copy, nonatomic) NSNumber *maxVideoWidth; // @synthesize maxVideoWidth=_maxVideoWidth;
@property(readonly, copy, nonatomic) NSNumber *maxVideoHeight; // @synthesize maxVideoHeight=_maxVideoHeight;
@property(readonly, copy, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(readonly, copy, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(readonly, copy, nonatomic) NSString *checksumMissingReason; // @synthesize checksumMissingReason=_checksumMissingReason;
@property(readonly, copy, nonatomic) NSString *checksumsDict; // @synthesize checksumsDict=_checksumsDict;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *reqToken; // @synthesize reqToken=_reqToken;
@property(readonly, copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
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
- (id)initWithTimestamp:(id)arg1 reqToken:(id)arg2 username:(id)arg3 checksumsDict:(id)arg4 checksumMissingReason:(id)arg5 height:(id)arg6 width:(id)arg7 maxVideoHeight:(id)arg8 maxVideoWidth:(id)arg9 featuresMap:(id)arg10 screenWidthIn:(id)arg11 screenHeightIn:(id)arg12 screenWidthPx:(id)arg13 screenHeightPx:(id)arg14 pullToRefresh:(id)arg15 friendsRequest:(id)arg16 groupDeltaRequests:(id)arg17 excludeUser:(id)arg18 excludeFriends:(id)arg19 excludeConversations:(id)arg20 excludeStories:(id)arg21 messagesTier:(id)arg22 useNewStoryViewerList:(id)arg23 isColdStart:(id)arg24 featureSettingsToken:(id)arg25 conversationDeltaQueryMap:(id)arg26 conversationSnapDeltaQueryMap:(id)arg27;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)featureSettingsTokenValue;
- (_Bool)isColdStartValue;
- (_Bool)useNewStoryViewerListValue;
- (long long)messagesTierEnum;
- (_Bool)excludeStoriesValue;
- (_Bool)excludeConversationsValue;
- (_Bool)excludeFriendsValue;
- (_Bool)excludeUserValue;
- (_Bool)pullToRefreshValue;
- (int)screenHeightPxValue;
- (int)screenWidthPxValue;
- (float)screenHeightInValue;
- (float)screenWidthInValue;
- (int)maxVideoWidthValue;
- (int)maxVideoHeightValue;
- (int)widthValue;
- (int)heightValue;
- (long long)checksumMissingReasonEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
