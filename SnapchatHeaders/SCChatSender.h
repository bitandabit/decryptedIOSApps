//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCChatMessageSender-Protocol.h"

@class NSDate, NSMutableArray, NSMutableDictionary, NSString, SCChatSendRateLimiter, SCQueuePerformer, SCThrottledLogger;
@protocol SCChatSenderDelegate;

@interface SCChatSender : NSObject <SCChatMessageSender>
{
    id <SCChatSenderDelegate> _delegate;
    SCQueuePerformer *_performer;
    _Bool _isForgrounded;
    SCChatSendRateLimiter *_stateUpdateRateLimiter;
    SCThrottledLogger *_logger;
    NSDate *_lastInvalidMessageToastTimestamp;
    NSMutableArray *_queuedMessages;
    NSMutableArray *_inflightMessages;
    NSMutableDictionary *_messageCompletionHandlers;
}

+ (id)chatSendResultToString:(long long)arg1;
@property(retain, nonatomic) NSMutableDictionary *messageCompletionHandlers; // @synthesize messageCompletionHandlers=_messageCompletionHandlers;
@property(retain, nonatomic) NSMutableArray *inflightMessages; // @synthesize inflightMessages=_inflightMessages;
@property(retain, nonatomic) NSMutableArray *queuedMessages; // @synthesize queuedMessages=_queuedMessages;
- (void).cxx_destruct;
- (long long)convertFailureReasonToResult:(long long)arg1;
- (long long)convertErrorToResult:(id)arg1;
- (_Bool)connectionAllowsSending;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (void)invokeHandlerForMessageWithId:(id)arg1 result:(long long)arg2 response:(id)arg3;
- (void)sendConversationMessage:(id)arg1;
- (void)didSendChatMessage:(id)arg1 withResult:(long long)arg2 response:(id)arg3;
- (_Bool)shouldKeepRetrying:(id)arg1 forResult:(long long)arg2;
- (void)didUserLogout;
- (void)didSCCPSessionDisconnect;
- (void)didSCCPSessionConnect;
- (void)showInvalidMessageToastIfNecessary:(id)arg1 originMessage:(id)arg2;
- (void)didReceiveChatMessageResponse:(id)arg1;
- (void)sendConversationMessage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)performer;
- (id)initWithDelegate:(id)arg1 performer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
