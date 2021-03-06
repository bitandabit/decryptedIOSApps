//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCContentInviteSnap-Protocol.h"

@class NSDate, NSString;

@interface SCContentInviteSnap : NSObject <SCContentInviteSnap>
{
    NSString *_snapId;
    NSString *_contentInviteId;
    NSString *_recipientPhoneNumber;
    NSString *_recipientDisplay;
    NSDate *_lastInteractionTimestamp;
    NSDate *_createTimestamp;
    NSDate *_sentTimestamp;
    NSString *_mediaSendTaskId;
    long long _sendStatus;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, nonatomic) long long sendStatus; // @synthesize sendStatus=_sendStatus;
@property(readonly, copy, nonatomic) NSString *mediaSendTaskId; // @synthesize mediaSendTaskId=_mediaSendTaskId;
@property(readonly, copy, nonatomic) NSDate *sentTimestamp; // @synthesize sentTimestamp=_sentTimestamp;
@property(readonly, copy, nonatomic) NSDate *createTimestamp; // @synthesize createTimestamp=_createTimestamp;
@property(readonly, copy, nonatomic) NSDate *lastInteractionTimestamp; // @synthesize lastInteractionTimestamp=_lastInteractionTimestamp;
@property(readonly, copy, nonatomic) NSString *recipientDisplay; // @synthesize recipientDisplay=_recipientDisplay;
@property(readonly, copy, nonatomic) NSString *recipientPhoneNumber; // @synthesize recipientPhoneNumber=_recipientPhoneNumber;
@property(readonly, copy, nonatomic) NSString *contentInviteId; // @synthesize contentInviteId=_contentInviteId;
@property(readonly, copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSnapId:(id)arg1 contentInviteId:(id)arg2 recipientPhoneNumber:(id)arg3 recipientDisplay:(id)arg4 lastInteractionTimestamp:(id)arg5 createTimestamp:(id)arg6 sentTimestamp:(id)arg7 mediaSendTaskId:(id)arg8 sendStatus:(long long)arg9;
- (_Bool)failedToSend;
- (id)displayTimestamp;
- (id)updateWithSnap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

