//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUSnapStateMessage-Protocol.h"

@class NSDictionary, NSNumber, NSString, SOJUHeader;

@interface SOJUSnapStateMessage : NSObject <SOJUSnapStateMessage>
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
    NSString *_snapId;
    NSNumber *_viewed;
    NSNumber *_replayed;
    NSNumber *_screenshotCount;
    NSNumber *_fiNeedsRetry;
    NSNumber *_fiVersion;
    NSString *_fiSenderOutAlpha;
    NSString *_fiRecipientOutAlpha;
    NSNumber *_fiSendTimestamp;
    NSString *_fiRecipientOutDelta;
    NSString *_fiRecipientOutDeltaCheck;
    NSString *_fiSenderOutBeta;
    NSNumber *_screenCaptureShotCount;
    NSNumber *_screenCaptureRecordingCount;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *screenCaptureRecordingCount; // @synthesize screenCaptureRecordingCount=_screenCaptureRecordingCount;
@property(readonly, copy, nonatomic) NSNumber *screenCaptureShotCount; // @synthesize screenCaptureShotCount=_screenCaptureShotCount;
@property(readonly, copy, nonatomic) NSString *fiSenderOutBeta; // @synthesize fiSenderOutBeta=_fiSenderOutBeta;
@property(readonly, copy, nonatomic) NSString *fiRecipientOutDeltaCheck; // @synthesize fiRecipientOutDeltaCheck=_fiRecipientOutDeltaCheck;
@property(readonly, copy, nonatomic) NSString *fiRecipientOutDelta; // @synthesize fiRecipientOutDelta=_fiRecipientOutDelta;
@property(readonly, copy, nonatomic) NSNumber *fiSendTimestamp; // @synthesize fiSendTimestamp=_fiSendTimestamp;
@property(readonly, copy, nonatomic) NSString *fiRecipientOutAlpha; // @synthesize fiRecipientOutAlpha=_fiRecipientOutAlpha;
@property(readonly, copy, nonatomic) NSString *fiSenderOutAlpha; // @synthesize fiSenderOutAlpha=_fiSenderOutAlpha;
@property(readonly, copy, nonatomic) NSNumber *fiVersion; // @synthesize fiVersion=_fiVersion;
@property(readonly, copy, nonatomic) NSNumber *fiNeedsRetry; // @synthesize fiNeedsRetry=_fiNeedsRetry;
@property(readonly, copy, nonatomic) NSNumber *screenshotCount; // @synthesize screenshotCount=_screenshotCount;
@property(readonly, copy, nonatomic) NSNumber *replayed; // @synthesize replayed=_replayed;
@property(readonly, copy, nonatomic) NSNumber *viewed; // @synthesize viewed=_viewed;
@property(readonly, copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
@property(readonly, copy, nonatomic) NSString *appEngineTarget; // @synthesize appEngineTarget=_appEngineTarget;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSNumber *seqNum; // @synthesize seqNum=_seqNum;
@property(readonly, copy, nonatomic) NSNumber *mischiefVersion; // @synthesize mischiefVersion=_mischiefVersion;
@property(readonly, copy, nonatomic) NSDictionary *knownChatSequenceNumbers; // @synthesize knownChatSequenceNumbers=_knownChatSequenceNumbers;
@property(readonly, copy, nonatomic) NSNumber *retried; // @synthesize retried=_retried;
@property(readonly, copy, nonatomic) SOJUHeader *header; // @synthesize header=_header;
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
- (id)initWithHeader:(id)arg1 retried:(id)arg2 knownChatSequenceNumbers:(id)arg3 mischiefVersion:(id)arg4 seqNum:(id)arg5 timestamp:(id)arg6 type:(id)arg7 idValue:(id)arg8 appEngineTarget:(id)arg9 snapId:(id)arg10 viewed:(id)arg11 replayed:(id)arg12 screenshotCount:(id)arg13 fiNeedsRetry:(id)arg14 fiVersion:(id)arg15 fiSenderOutAlpha:(id)arg16 fiRecipientOutAlpha:(id)arg17 fiSendTimestamp:(id)arg18 fiRecipientOutDelta:(id)arg19 fiRecipientOutDeltaCheck:(id)arg20 fiSenderOutBeta:(id)arg21 screenCaptureShotCount:(id)arg22 screenCaptureRecordingCount:(id)arg23;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)screenCaptureRecordingCountValue;
- (long long)screenCaptureShotCountValue;
- (long long)fiSendTimestampValue;
- (int)fiVersionValue;
- (_Bool)fiNeedsRetryValue;
- (long long)screenshotCountValue;
- (_Bool)replayedValue;
- (_Bool)viewedValue;
- (long long)typeEnum;
- (long long)timestampValue;
- (long long)seqNumValue;
- (long long)mischiefVersionValue;
- (_Bool)retriedValue;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
