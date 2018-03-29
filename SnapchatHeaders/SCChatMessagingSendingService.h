//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SCChatV3ConversationStore, SCChatV3MessageStateHandler, SOJUMessageGenerator;
@protocol SCChatConversationManager, SCChatLogger, SCChatMessageSender, SCChatSDKV2SendingModule;

@interface SCChatMessagingSendingService : NSObject
{
    id <SCChatMessageSender> _messageSender;
    SCChatV3ConversationStore *_conversationStore;
    SCChatV3MessageStateHandler *_messageStateHandler;
    id <SCChatSDKV2SendingModule> _messageSenderV2;
    id <SCChatConversationManager> _conversationManager;
    id <SCChatLogger> _chatLogger;
    SOJUMessageGenerator *_sojuMessageGenerator;
}

- (void).cxx_destruct;
- (id)_addFailedTextMessageToConversation:(id)arg1 withText:(id)arg2 fromSender:(id)arg3 withAttributes:(id)arg4;
- (void)_updateNewMessageAfterSending:(id)arg1 inConversation:(id)arg2 sentResult:(long long)arg3 response:(id)arg4;
- (id)_updateConversation:(id)arg1 withMessage:(id)arg2 withSendingMessage:(id)arg3 withSendStatus:(long long)arg4;
- (void)sendMessageToRecipients:(id)arg1 fromSender:(id)arg2 withType:(id)arg3 withContent:(id)arg4 additionalText:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_sendMessageToConversation:(id)arg1 fromSender:(id)arg2 withParcelType:(id)arg3 withParcelContent:(id)arg4 withMedias:(id)arg5 withTag:(id)arg6 withTagVersion:(id)arg7 additionalText:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (id)initWithSender:(id)arg1 conversationStore:(id)arg2 messageStateHandler:(id)arg3 sendingModuleV2:(id)arg4 conversationManager:(id)arg5 chatLogger:(id)arg6;

@end

