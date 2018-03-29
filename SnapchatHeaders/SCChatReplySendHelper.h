//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, SCChatSendHelper, SCCustomStickerManager;
@protocol SCGalleryInChatLogger;

@interface SCChatReplySendHelper : NSObject
{
    SCChatSendHelper *_chatSendHelper;
    NSString *_conversationId;
    SCCustomStickerManager *_customStickerManager;
    id <SCGalleryInChatLogger> _galleryLogger;
}

+ (CDUnknownBlockType)_createRequestFailureCallbackWithMessage:(id)arg1 chatSendHelper:(id)arg2 uploadId:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (CDUnknownBlockType)_createRequestSuccessCallbackWithMessage:(id)arg1 mediaType:(long long)arg2 chatSendHelper:(id)arg3 uploadId:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)_uploadReplyMediaForMessage:(id)arg1 baseChatMedia:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)uploadReplyMediaForMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (_Bool)doReplyMediasNeedUploadingInMessage:(id)arg1;
- (void).cxx_destruct;
- (void)addTemporaryReplyMediaToMessage:(id)arg1 media:(id)arg2 mediaKey:(id)arg3 mediaIv:(id)arg4 isInfiniteDuration:(_Bool)arg5;
- (void)_sendTextStoryReplyMessage:(id)arg1 media:(id)arg2 mediaKey:(id)arg3 mediaIv:(id)arg4 isInfiniteDuration:(_Bool)arg5 metricsEventInfo:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)_sendReplyMessage:(id)arg1 media:(id)arg2 mediaKey:(id)arg3 mediaIv:(id)arg4 isInfiniteDuration:(_Bool)arg5 metricsEventInfo:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)sendGifStoryReply:(id)arg1 story:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_sendVideoNoteMediaReply:(id)arg1 duration:(double)arg2 media:(id)arg3 mediaKey:(id)arg4 mediaIv:(id)arg5 isInfiniteDuration:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)sendVideoNoteStoryReply:(id)arg1 duration:(double)arg2 story:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_sendAudioNoteMediaReply:(id)arg1 duration:(double)arg2 media:(id)arg3 mediaKey:(id)arg4 mediaIv:(id)arg5 isInfiniteDuration:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)sendAudioNoteStoryReply:(id)arg1 duration:(double)arg2 story:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_sendMediaDrawerMediaReply:(id)arg1 fromLocation:(CDStruct_1dee9796)arg2 drawerMode:(long long)arg3 media:(id)arg4 mediaKey:(id)arg5 mediaIv:(id)arg6 isInfiniteDuration:(_Bool)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)sendMediaDrawerStoryReply:(id)arg1 fromLocation:(CDStruct_1dee9796)arg2 drawerMode:(long long)arg3 story:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_sendStickerMediaReply:(id)arg1 fromPack:(id)arg2 fromPosition:(unsigned long long)arg3 drawerMode:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5 media:(id)arg6 mediaKey:(id)arg7 mediaIv:(id)arg8 isInfiniteDuration:(_Bool)arg9 stickerSource:(long long)arg10 metricsEventInfo:(id)arg11;
- (void)sendStickerStoryReply:(id)arg1 fromPack:(id)arg2 fromPosition:(unsigned long long)arg3 drawerMode:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5 story:(id)arg6 stickerSource:(long long)arg7;
- (void)_sendTextStoryReply:(id)arg1 story:(id)arg2 storyType:(long long)arg3 storyTypeSpecific:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5 metricsEventInfo:(id)arg6;
- (void)sendTextStoryReply:(id)arg1 story:(id)arg2 storyType:(long long)arg3 storyTypeSpecific:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)initWithChatSendHelper:(id)arg1 conversationId:(id)arg2 customStickerManager:(id)arg3 galleryInChatLogger:(id)arg4;

@end

