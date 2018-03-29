//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString, SOJUFriendsRequest;

@interface SOJUAllUpdatesRequestBuilder : NSObject
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

+ (id)withJUAllUpdatesRequest:(id)arg1;
- (void).cxx_destruct;
- (id)setConversationSnapDeltaQueryMap:(id)arg1;
- (id)setConversationDeltaQueryMap:(id)arg1;
- (id)setFeatureSettingsToken:(id)arg1;
- (id)setIsColdStart:(id)arg1;
- (id)setUseNewStoryViewerList:(id)arg1;
- (id)setMessagesTier:(id)arg1;
- (id)setExcludeStories:(id)arg1;
- (id)setExcludeConversations:(id)arg1;
- (id)setExcludeFriends:(id)arg1;
- (id)setExcludeUser:(id)arg1;
- (id)setGroupDeltaRequests:(id)arg1;
- (id)setFriendsRequest:(id)arg1;
- (id)setPullToRefresh:(id)arg1;
- (id)setScreenHeightPx:(id)arg1;
- (id)setScreenWidthPx:(id)arg1;
- (id)setScreenHeightIn:(id)arg1;
- (id)setScreenWidthIn:(id)arg1;
- (id)setFeaturesMap:(id)arg1;
- (id)setMaxVideoWidth:(id)arg1;
- (id)setMaxVideoHeight:(id)arg1;
- (id)setWidth:(id)arg1;
- (id)setHeight:(id)arg1;
- (id)setChecksumMissingReason:(id)arg1;
- (id)setChecksumsDict:(id)arg1;
- (id)setUsername:(id)arg1;
- (id)setReqToken:(id)arg1;
- (id)setTimestamp:(id)arg1;
- (id)build;
- (id)setFeatureSettingsTokenValue:(long long)arg1;
- (id)setIsColdStartValue:(_Bool)arg1;
- (id)setUseNewStoryViewerListValue:(_Bool)arg1;
- (id)setMessagesTierEnum:(long long)arg1;
- (id)setExcludeStoriesValue:(_Bool)arg1;
- (id)setExcludeConversationsValue:(_Bool)arg1;
- (id)setExcludeFriendsValue:(_Bool)arg1;
- (id)setExcludeUserValue:(_Bool)arg1;
- (id)setPullToRefreshValue:(_Bool)arg1;
- (id)setScreenHeightPxValue:(int)arg1;
- (id)setScreenWidthPxValue:(int)arg1;
- (id)setScreenHeightInValue:(float)arg1;
- (id)setScreenWidthInValue:(float)arg1;
- (id)setMaxVideoWidthValue:(int)arg1;
- (id)setMaxVideoHeightValue:(int)arg1;
- (id)setWidthValue:(int)arg1;
- (id)setHeightValue:(int)arg1;
- (id)setChecksumMissingReasonEnum:(long long)arg1;

@end

