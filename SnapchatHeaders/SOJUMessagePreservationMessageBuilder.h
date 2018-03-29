//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSNumber, NSString, SOJUHeader;

@interface SOJUMessagePreservationMessageBuilder : NSObject
{
    SOJUHeader *_header;
    NSNumber *_retried;
    NSDictionary *_knownChatSequenceNumbers;
    NSNumber *_mischiefVersion;
    NSNumber *_seqNum;
    NSNumber *_timestamp;
    NSString *_type;
    NSString *_idValue;
    NSString *_appEngineTarget;
    NSString *_chatMessageId;
    NSNumber *_preserved;
    NSNumber *_chatMessageSeqNum;
}

+ (id)withJUMessagePreservationMessage:(id)arg1;
- (void).cxx_destruct;
- (id)setChatMessageSeqNum:(id)arg1;
- (id)setPreserved:(id)arg1;
- (id)setChatMessageId:(id)arg1;
- (id)setAppEngineTarget:(id)arg1;
- (id)setIdValue:(id)arg1;
- (id)setType:(id)arg1;
- (id)setTimestamp:(id)arg1;
- (id)setSeqNum:(id)arg1;
- (id)setMischiefVersion:(id)arg1;
- (id)setKnownChatSequenceNumbers:(id)arg1;
- (id)setRetried:(id)arg1;
- (id)setHeader:(id)arg1;
- (id)build;
- (id)setChatMessageSeqNumValue:(long long)arg1;
- (id)setPreservedValue:(_Bool)arg1;
- (id)setTypeEnum:(long long)arg1;
- (id)setTimestampValue:(long long)arg1;
- (id)setSeqNumValue:(long long)arg1;
- (id)setMischiefVersionValue:(long long)arg1;
- (id)setRetriedValue:(_Bool)arg1;

@end

