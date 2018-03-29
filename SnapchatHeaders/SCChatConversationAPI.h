//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SCChatConversationAPI : NSObject
{
}

+ (void)deserializeSharedMediaResponseDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)sendSharedStorySnapWithParameters:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (void)sendSharedBatchedMediaWithParameters:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (void)sendSharedMediaWithParameters:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (void)uploadChatMediaWithParameters:(id)arg1 data:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)fetchGatewayAuthTokenWithParameters:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (void)fetchConversationAuthTokenWithChatId:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)sendChatScreenshotNotificationWithParameters:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (void)sendTypingNotificationWithParameters:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (void)sendTalkCallingNotificationWithParameters:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (void)sendTalkingNotificationWithParameters:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (void)clearMichiefConversationWithParameters:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (void)clearConversationWithParameters:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (void)clearAllConversationsWithParameters:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (void)sendStoryReplyMessageWithParameters:(id)arg1 key:(id)arg2 successQueue:(id)arg3 failureQueue:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
+ (void)sendMessagesWithParameters:(id)arg1 successQueue:(id)arg2 failureQueue:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
+ (void)fetchAllConversationsWithParameters:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;

@end
