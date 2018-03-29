//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCChatConversationStoreListener-Protocol.h"
#import "SCChatMessageLoaderDelegate-Protocol.h"
#import "SCChatMessageReceiveListener-Protocol.h"

@class NSMutableSet, NSString, SCChatMessageLoader, SCChatV3ConversationStore, SCChatV3MessageActionHandler, SCQueuePerformer;
@protocol SCBitmojiManagerProtocol, SCChatMessageReceiver, SCFideliusUnwrapProtocol, SCPreloadControllerProtocol;

@interface SCChatV3MediaPrefetcher : NSObject <SCChatMessageLoaderDelegate, SCChatMessageReceiveListener, SCChatConversationStoreListener>
{
    NSString *_username;
    id <SCChatMessageReceiver> _receiver;
    SCChatV3ConversationStore *_conversationStore;
    SCChatV3MessageActionHandler *_messageActionHandler;
    id <SCPreloadControllerProtocol> _preloadController;
    id <SCBitmojiManagerProtocol> _bitmojiManager;
    id <SCFideliusUnwrapProtocol> _fideliusHelper;
    SCChatMessageLoader *_chatMessageLoader;
    SCQueuePerformer *_performer;
    NSMutableSet *_prefetchCandidates;
}

- (void).cxx_destruct;
- (void)loadStartedForMediaContent:(id)arg1;
- (void)loadStartedForMessage:(id)arg1;
- (_Bool)shouldPrefetchExpensiveContent;
- (void)prefetchMessageContent:(id)arg1;
- (void)diskLoadFinished;
- (void)_handleGetConversation:(id)arg1 withResult:(long long)arg2;
- (void)_performPrefetchForConversationIds:(id)arg1;
- (void)performPrefetchIfNecessaryForConversationIds:(id)arg1;
- (void)conversationDidUpdate:(id)arg1 withMetadataDictionary:(id)arg2;
- (void)didReceiveConversations:(id)arg1 originType:(long long)arg2 source:(long long)arg3;
- (void)didReceiveMischiefs:(id)arg1 hasStaleChats:(_Bool)arg2 originType:(long long)arg3 source:(long long)arg4;
- (void)didReceiveWireMessage:(id)arg1;
- (id)_mergeCandidateListsWithSnaps:(id)arg1 chatMedias:(id)arg2 limitedTo:(int)arg3;
- (id)_computeListToPrefetch:(id)arg1;
- (void)_prefetchBitmojis:(id)arg1;
- (void)_performPrefetchForConversation:(id)arg1;
- (void)setBitmojiManager:(id)arg1;
- (void)dealloc;
- (id)initWithUsername:(id)arg1 receiver:(id)arg2 messageActionHandler:(id)arg3 conversationStore:(id)arg4 preloadController:(id)arg5 fideliusHelper:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
