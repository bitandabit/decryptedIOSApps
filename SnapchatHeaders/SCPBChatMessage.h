//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBStringBoolDictionary, GPBStringInt64Dictionary, NSMutableDictionary, NSString, SCPBHeader, SCPBMessageBody;

@interface SCPBChatMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *appEngineTarget; // @dynamic appEngineTarget;
@property(retain, nonatomic) SCPBMessageBody *body; // @dynamic body;
@property(copy, nonatomic) NSString *chatMessageId; // @dynamic chatMessageId;
@property(nonatomic) _Bool hasBody; // @dynamic hasBody;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(retain, nonatomic) SCPBHeader *header; // @dynamic header;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) GPBStringInt64Dictionary *knownChatSequenceNumbers; // @dynamic knownChatSequenceNumbers;
@property(readonly, nonatomic) unsigned long long knownChatSequenceNumbers_Count; // @dynamic knownChatSequenceNumbers_Count;
@property(retain, nonatomic) GPBStringInt64Dictionary *lastReleasedSeqNum; // @dynamic lastReleasedSeqNum;
@property(readonly, nonatomic) unsigned long long lastReleasedSeqNum_Count; // @dynamic lastReleasedSeqNum_Count;
@property(nonatomic) long long mischiefVersion; // @dynamic mischiefVersion;
@property(retain, nonatomic) GPBStringBoolDictionary *preservations; // @dynamic preservations;
@property(readonly, nonatomic) unsigned long long preservations_Count; // @dynamic preservations_Count;
@property(nonatomic) _Bool retried; // @dynamic retried;
@property(retain, nonatomic) NSMutableDictionary *savedState; // @dynamic savedState;
@property(readonly, nonatomic) unsigned long long savedState_Count; // @dynamic savedState_Count;
@property(nonatomic) long long seqNum; // @dynamic seqNum;
@property(nonatomic) long long timestamp; // @dynamic timestamp;
@property(copy, nonatomic) NSString *type; // @dynamic type;

@end

