//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDate, NSError, NSString, SCChatMetricsEventInfo;
@protocol SCChatMessage;

@protocol SCChatLogger <NSObject>
- (void)logMuteStoryWithStoryType:(long long)arg1 isMuted:(_Bool)arg2;
- (void)didReplyMediaFinishUploadingWithUploadId:(NSString *)arg1 success:(_Bool)arg2;
- (void)didReplyMediaStartUploadingWithUploadId:(NSString *)arg1 mediaType:(long long)arg2;
- (void)logChatMediaLoadLifeCycle:(NSString *)arg1 stepName:(NSString *)arg2;
- (void)logChatMediaSendEnd:(NSString *)arg1 success:(_Bool)arg2;
- (void)logChatMediaSendFailed:(NSString *)arg1 onStep:(long long)arg2 totalFailedRecipients:(long long)arg3;
- (void)logChatMediaSendStart:(NSString *)arg1 mediaIds:(NSArray *)arg2 groupRecipientsCount:(long long)arg3 singleRecipientsCount:(long long)arg4 sendingFlowVersion:(long long)arg5 messageType:(long long)arg6 videoCount:(unsigned long long)arg7 isMultiSnap:(_Bool)arg8 sourceTab:(long long)arg9;
- (void)logChatMediaLoadEnd:(NSString *)arg1 result:(long long)arg2 errorReason:(NSError *)arg3;
- (void)logChatMediaLoadFromCache:(NSString *)arg1 isGroup:(_Bool)arg2 messageType:(long long)arg3 isVideo:(_Bool)arg4;
- (void)setChatMediaLoadParameters:(NSString *)arg1 messageType:(long long)arg2 initialLoadState:(long long)arg3 isVideo:(_Bool)arg4;
- (void)logChatMediaLoadStart:(NSString *)arg1 isGroup:(_Bool)arg2;
- (void)logChatMessageSaveStateForMessage:(id <SCChatMessage>)arg1 saved:(_Bool)arg2;
- (void)logChatMessagePreservation:(id <SCChatMessage>)arg1;
- (void)logChatMessageUnpreservation:(id <SCChatMessage>)arg1;
- (void)logLateSnapPush:(NSString *)arg1;
- (void)logReleasedWithViewedTimestamp:(NSDate *)arg1 withReleasedTimestamp:(NSDate *)arg2;
- (void)logSentMessage:(id <SCChatMessage>)arg1 success:(_Bool)arg2;
- (void)logSCAChatScreenshot:(id <SCChatMessage>)arg1;
- (void)logSCAChatUnsave:(id <SCChatMessage>)arg1;
- (void)logSCAChatSave:(id <SCChatMessage>)arg1;
- (void)logStaleGroupInfoForId:(NSString *)arg1;
- (void)addSCChatMetricsEventInfo:(SCChatMetricsEventInfo *)arg1 forConsistentMessageId:(NSString *)arg2;
- (void)logSCAChatViewForMessage:(id <SCChatMessage>)arg1 withMetricsEventInfo:(SCChatMetricsEventInfo *)arg2;
- (void)logSCAChatSend:(id <SCChatMessage>)arg1 chatPageSource:(long long)arg2;
@end

