//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBStringInt64Dictionary, NSString, SCPBHeader;

@interface SCPBMessageStateMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *appEngineTarget; // @dynamic appEngineTarget;
@property(copy, nonatomic) NSString *chatMessageId; // @dynamic chatMessageId;
@property(copy, nonatomic) NSString *chatMessageSenderId; // @dynamic chatMessageSenderId;
@property(nonatomic) long long chatMessageSeqNum; // @dynamic chatMessageSeqNum;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(retain, nonatomic) SCPBHeader *header; // @dynamic header;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) GPBStringInt64Dictionary *knownChatSequenceNumbers; // @dynamic knownChatSequenceNumbers;
@property(readonly, nonatomic) unsigned long long knownChatSequenceNumbers_Count; // @dynamic knownChatSequenceNumbers_Count;
@property(nonatomic) long long mischiefVersion; // @dynamic mischiefVersion;
@property(nonatomic) _Bool retried; // @dynamic retried;
@property(nonatomic) long long seqNum; // @dynamic seqNum;
@property(copy, nonatomic) NSString *state; // @dynamic state;
@property(nonatomic) long long timestamp; // @dynamic timestamp;
@property(copy, nonatomic) NSString *type; // @dynamic type;
@property(nonatomic) int version; // @dynamic version;

@end

