//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSNumber, NSString, SOJUHeader;

@interface SOJUSnapStateMessageBuilder : NSObject
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

+ (id)withJUSnapStateMessage:(id)arg1;
- (void).cxx_destruct;
- (id)setScreenCaptureRecordingCount:(id)arg1;
- (id)setScreenCaptureShotCount:(id)arg1;
- (id)setFiSenderOutBeta:(id)arg1;
- (id)setFiRecipientOutDeltaCheck:(id)arg1;
- (id)setFiRecipientOutDelta:(id)arg1;
- (id)setFiSendTimestamp:(id)arg1;
- (id)setFiRecipientOutAlpha:(id)arg1;
- (id)setFiSenderOutAlpha:(id)arg1;
- (id)setFiVersion:(id)arg1;
- (id)setFiNeedsRetry:(id)arg1;
- (id)setScreenshotCount:(id)arg1;
- (id)setReplayed:(id)arg1;
- (id)setViewed:(id)arg1;
- (id)setSnapId:(id)arg1;
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
- (id)setScreenCaptureRecordingCountValue:(long long)arg1;
- (id)setScreenCaptureShotCountValue:(long long)arg1;
- (id)setFiSendTimestampValue:(long long)arg1;
- (id)setFiVersionValue:(int)arg1;
- (id)setFiNeedsRetryValue:(_Bool)arg1;
- (id)setScreenshotCountValue:(long long)arg1;
- (id)setReplayedValue:(_Bool)arg1;
- (id)setViewedValue:(_Bool)arg1;
- (id)setTypeEnum:(long long)arg1;
- (id)setTimestampValue:(long long)arg1;
- (id)setSeqNumValue:(long long)arg1;
- (id)setMischiefVersionValue:(long long)arg1;
- (id)setRetriedValue:(_Bool)arg1;

@end

