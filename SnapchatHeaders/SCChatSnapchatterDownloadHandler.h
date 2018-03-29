//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCChatMediaDownloadHandler-Protocol.h"

@class SCChatV3ConversationStore;
@protocol SCChatRequestManager;

@interface SCChatSnapchatterDownloadHandler : NSObject <SCChatMediaDownloadHandler>
{
    id <SCChatRequestManager> _chatRequestManager;
    SCChatV3ConversationStore *_conversationStore;
}

- (void).cxx_destruct;
- (void)downloadItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithChatRequestManager:(id)arg1 conversationStore:(id)arg2 messageStateHandler:(id)arg3 mediaStateManager:(id)arg4 mediaReferenceManager:(id)arg5 logger:(id)arg6;

@end

