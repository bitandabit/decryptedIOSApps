//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCChatStorySnapShareOperaContent-Protocol.h"

@class NSDate, NSString, SCStorySnapMediaContent;

@interface SCChatUserStorySnapShareOperaContent : NSObject <SCChatStorySnapShareOperaContent>
{
    NSString *_conversationId;
    SCStorySnapMediaContent *_media;
    NSString *_messageId;
    NSString *_messageSender;
    NSDate *_messageTimestamp;
    long long _messageType;
    NSString *_storyId;
    NSString *_operaPageId;
}

@property(retain, nonatomic) NSString *operaPageId; // @synthesize operaPageId=_operaPageId;
@property(readonly, nonatomic) NSString *storyId; // @synthesize storyId=_storyId;
@property(readonly, nonatomic) long long messageType; // @synthesize messageType=_messageType;
@property(readonly, copy, nonatomic) NSDate *messageTimestamp; // @synthesize messageTimestamp=_messageTimestamp;
@property(readonly, copy, nonatomic) NSString *messageSender; // @synthesize messageSender=_messageSender;
@property(readonly, copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(readonly, nonatomic) SCStorySnapMediaContent *media; // @synthesize media=_media;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (void).cxx_destruct;
- (void)invalidateContent;
- (void)unarchiveContentWithCompletion:(CDUnknownBlockType)arg1;
- (long long)mediaType;
- (_Bool)isLoadStateFailed;
- (_Bool)isContentUnarchived;
- (_Bool)isContentLoadedInCache;
- (void)loadContent;
- (id)initWithConversationId:(id)arg1 messageId:(id)arg2 media:(id)arg3 messageType:(long long)arg4 messageSender:(id)arg5 messageTimestamp:(id)arg6 storyId:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
