//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate, NSNumber, NSString;

@interface SCSendToRecipient : NSObject <NSCopying>
{
    _Bool _pendingFriend;
    _Bool _hasBirthdayToday;
    NSString *_recipientId;
    NSString *_nameToDisplay;
    NSDate *_lastInteractionTimestamp;
    long long _recipientType;
    long long _snapStreakCount;
    long long _snapStreakFilterLastUsed;
    NSDate *_snapStreakExpiringTimeStamp;
    NSNumber *_score;
    NSDate *_friendAddedAt;
    NSDate *_friendRequestSentAt;
}

@property(readonly, nonatomic) _Bool hasBirthdayToday; // @synthesize hasBirthdayToday=_hasBirthdayToday;
@property(readonly, nonatomic) _Bool pendingFriend; // @synthesize pendingFriend=_pendingFriend;
@property(readonly, copy, nonatomic) NSDate *friendRequestSentAt; // @synthesize friendRequestSentAt=_friendRequestSentAt;
@property(readonly, copy, nonatomic) NSDate *friendAddedAt; // @synthesize friendAddedAt=_friendAddedAt;
@property(readonly, copy, nonatomic) NSNumber *score; // @synthesize score=_score;
@property(readonly, copy, nonatomic) NSDate *snapStreakExpiringTimeStamp; // @synthesize snapStreakExpiringTimeStamp=_snapStreakExpiringTimeStamp;
@property(readonly, nonatomic) long long snapStreakFilterLastUsed; // @synthesize snapStreakFilterLastUsed=_snapStreakFilterLastUsed;
@property(readonly, nonatomic) long long snapStreakCount; // @synthesize snapStreakCount=_snapStreakCount;
@property(readonly, nonatomic) long long recipientType; // @synthesize recipientType=_recipientType;
@property(readonly, copy, nonatomic) NSDate *lastInteractionTimestamp; // @synthesize lastInteractionTimestamp=_lastInteractionTimestamp;
@property(readonly, copy, nonatomic) NSString *nameToDisplay; // @synthesize nameToDisplay=_nameToDisplay;
@property(readonly, copy, nonatomic) NSString *recipientId; // @synthesize recipientId=_recipientId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRecipientId:(id)arg1 nameToDisplay:(id)arg2 lastInteractionTimestamp:(id)arg3 recipientType:(long long)arg4 snapStreakCount:(long long)arg5 snapStreakFilterLastUsed:(long long)arg6 snapStreakExpiringTimeStamp:(id)arg7 score:(id)arg8 friendAddedAt:(id)arg9 friendRequestSentAt:(id)arg10 pendingFriend:(_Bool)arg11 hasBirthdayToday:(_Bool)arg12;

@end
