//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCFriendsFeedCashMessageState;

@interface SCFriendsFeedCashItem : NSObject <NSCopying>
{
    long long _sentTimestampEpochInMs;
    NSString *_cashId;
    NSString *_senderUsername;
    SCFriendsFeedCashMessageState *_cashState;
}

@property(readonly, copy, nonatomic) SCFriendsFeedCashMessageState *cashState; // @synthesize cashState=_cashState;
@property(readonly, copy, nonatomic) NSString *senderUsername; // @synthesize senderUsername=_senderUsername;
@property(readonly, copy, nonatomic) NSString *cashId; // @synthesize cashId=_cashId;
@property(readonly, nonatomic) long long sentTimestampEpochInMs; // @synthesize sentTimestampEpochInMs=_sentTimestampEpochInMs;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSentTimestampEpochInMs:(long long)arg1 cashId:(id)arg2 senderUsername:(id)arg3 cashState:(id)arg4;

@end

