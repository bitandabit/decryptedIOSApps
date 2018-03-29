//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SOJUAuthPayload-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUFriendsRequest;

@protocol SOJUAllUpdatesRequest <NSObject, NSCoding, NSCopying, SOJUAuthPayload>
@property(readonly, copy, nonatomic) NSDictionary *conversationSnapDeltaQueryMap;
@property(readonly, copy, nonatomic) NSDictionary *conversationDeltaQueryMap;
@property(readonly, copy, nonatomic) NSNumber *featureSettingsToken;
@property(readonly, copy, nonatomic) NSNumber *isColdStart;
@property(readonly, copy, nonatomic) NSNumber *useNewStoryViewerList;
@property(readonly, copy, nonatomic) NSString *messagesTier;
@property(readonly, copy, nonatomic) NSNumber *excludeStories;
@property(readonly, copy, nonatomic) NSNumber *excludeConversations;
@property(readonly, copy, nonatomic) NSNumber *excludeFriends;
@property(readonly, copy, nonatomic) NSNumber *excludeUser;
@property(readonly, copy, nonatomic) NSArray *groupDeltaRequests;
@property(readonly, copy, nonatomic) SOJUFriendsRequest *friendsRequest;
@property(readonly, copy, nonatomic) NSNumber *pullToRefresh;
@property(readonly, copy, nonatomic) NSNumber *screenHeightPx;
@property(readonly, copy, nonatomic) NSNumber *screenWidthPx;
@property(readonly, copy, nonatomic) NSNumber *screenHeightIn;
@property(readonly, copy, nonatomic) NSNumber *screenWidthIn;
@property(readonly, copy, nonatomic) NSString *featuresMap;
@property(readonly, copy, nonatomic) NSNumber *maxVideoWidth;
@property(readonly, copy, nonatomic) NSNumber *maxVideoHeight;
@property(readonly, copy, nonatomic) NSNumber *width;
@property(readonly, copy, nonatomic) NSNumber *height;
@property(readonly, copy, nonatomic) NSString *checksumMissingReason;
@property(readonly, copy, nonatomic) NSString *checksumsDict;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, copy, nonatomic) NSString *reqToken;
@property(readonly, copy, nonatomic) NSString *timestamp;
@end
