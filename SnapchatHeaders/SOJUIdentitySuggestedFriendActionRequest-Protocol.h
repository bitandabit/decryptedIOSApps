//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SOJUAuthPayload-Protocol.h"

@class NSArray, NSNumber, NSString;

@protocol SOJUIdentitySuggestedFriendActionRequest <NSObject, NSCoding, NSCopying, SOJUAuthPayload>
@property(readonly, copy, nonatomic) NSNumber *notificationPrefetch;
@property(readonly, copy, nonatomic) NSArray *addedSuggestedFriendCellInfoList;
@property(readonly, copy, nonatomic) NSNumber *impressionId;
@property(readonly, copy, nonatomic) NSNumber *suggestedFriendRankingTweak;
@property(readonly, copy, nonatomic) NSArray *suggestedFriendCellInfoList;
@property(readonly, copy, nonatomic) NSString *placement;
@property(readonly, copy, nonatomic) NSArray *seenSuggestedFriendList;
@property(readonly, copy, nonatomic) NSNumber *identityCellIndex;
@property(readonly, copy, nonatomic) NSString *friendId;
@property(readonly, copy, nonatomic) NSString *friend;
@property(readonly, copy, nonatomic) NSNumber *hide;
@property(readonly, copy, nonatomic) NSNumber *seen;
@property(readonly, copy, nonatomic) NSString *action;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, copy, nonatomic) NSString *reqToken;
@property(readonly, copy, nonatomic) NSString *timestamp;
@end
