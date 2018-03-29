//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, SCChatReplyMediaProperties, SCUserSession;
@protocol SCChatConversationManager;

@interface SCChatV3MessageSenderHelper : NSObject
{
    id <SCChatConversationManager> _manager;
    NSString *_conversationId;
    SCChatReplyMediaProperties *_story;
    long long _chatSource;
    long long _stickerSource;
    SCUserSession *_userSession;
    _Bool _isStorySpectaclesMedia;
}

- (void).cxx_destruct;
- (void)_sendAudioVideoNote:(id)arg1 messageBodyType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendVideoNoteWithData:(id)arg1 duration:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendAudioNoteWithData:(id)arg1 duration:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendMediaDrawerMedia:(id)arg1 fromLocation:(CDStruct_1dee9796)arg2 drawerMode:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sendSticker:(id)arg1 fromPack:(id)arg2 fromPosition:(unsigned long long)arg3 fromSource:(long long)arg4 drawerMode:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)sendGifData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sendGifMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_sendTextMessage:(id)arg1 toStory:(id)arg2 metricsEventInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sendTextMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithConversationManager:(id)arg1 userSession:(id)arg2 conversationId:(id)arg3 story:(id)arg4 isStorySpectaclesMedia:(_Bool)arg5 chatSource:(long long)arg6 stickerSource:(long long)arg7;

@end

