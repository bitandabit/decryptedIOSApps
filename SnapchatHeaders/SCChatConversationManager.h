//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCChatConversationManager-Protocol.h"
#import "SCChatConversationStoreListener-Protocol.h"
#import "SCGroupManagerListener-Protocol.h"
#import "SCSearchUpdateListener-Protocol.h"

@class NSMutableArray, NSString, SCArchiveLoader, SCChatConversationContentInviteHandler, SCChatConversationUpdater, SCChatMediaCache, SCChatMediaReferenceManager, SCChatMediaRequestManager, SCChatMediaStateManager, SCChatMessagingSendingService, SCChatSnapViewVerifier, SCChatTypingExpirationHandler, SCChatV3ConversationStore, SCChatV3FeedEventGenerator, SCChatV3GroupActionHandler, SCChatV3MediaPrefetcher, SCChatV3MessageActionHandler, SCChatV3MessageReceiver, SCChatV3MessageSender, SCChatV3MessageStateHandler, SCSearchUpdateListenerAnnouncer;
@protocol SCBitmojiManagerProtocol, SCBitmojiStickerManagerProtocol, SCChatExternalAPIProvider, SCChatMediaFileManager, SCMediaSendTaskManager, SCTIdentityServices;

@interface SCChatConversationManager : NSObject <SCGroupManagerListener, SCSearchUpdateListener, SCChatConversationManager, SCChatConversationStoreListener>
{
    NSString *_username;
    SCChatConversationUpdater *_conversationUpdater;
    SCChatV3ConversationStore *_conversationStore;
    SCChatV3FeedEventGenerator *_eventGenerator;
    SCChatV3MessageSender *_messageSender;
    SCChatV3MessageReceiver *_messageReceiver;
    SCChatMediaRequestManager *_mediaRequestManager;
    SCChatMediaStateManager *_mediaStateManager;
    SCChatV3MessageActionHandler *_messageActionHandler;
    SCChatV3GroupActionHandler *_groupActionHandler;
    SCChatV3MessageStateHandler *_messageStateHandler;
    SCChatMediaReferenceManager *_mediaReferenceManager;
    SCChatSnapViewVerifier *_snapViewVerifier;
    id <SCChatExternalAPIProvider> _provider;
    SCChatMediaCache *_chatMediaCache;
    id <SCMediaSendTaskManager> _mediaSendTaskManager;
    id <SCBitmojiManagerProtocol> _bitmojiManager;
    id <SCBitmojiStickerManagerProtocol> _bitmojiStickerManager;
    id <SCChatMediaFileManager> _mediaFileManager;
    SCChatV3MediaPrefetcher *_mediaPrefetcher;
    SCChatConversationContentInviteHandler *_contentInviteHandler;
    SCChatTypingExpirationHandler *_typingExpirationHandler;
    SCArchiveLoader *_conversationLoader;
    NSMutableArray *_deltaFetchRequests;
    _Bool _useImmutableModelsForChat;
    id <SCTIdentityServices> _identityService;
    SCChatMessagingSendingService *_chatSDK;
    SCSearchUpdateListenerAnnouncer *_updateAnnouncer;
    _Bool _didDiskLoadStart;
    id <SCBitmojiStickerManagerProtocol> bitmojiStickerManager;
}

+ (id)announcerIdentifier;
@property _Bool didDiskLoadStart; // @synthesize didDiskLoadStart=_didDiskLoadStart;
@property(retain) id <SCBitmojiStickerManagerProtocol> bitmojiStickerManager; // @synthesize bitmojiStickerManager;
- (void).cxx_destruct;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)deactivateBubbleChat;
- (void)activateBubbleChat;
- (void)createSimpleTicketWithTitle:(id)arg1 email:(id)arg2;
- (id)identityService;
- (_Bool)isActiveChatAGroupConversation;
- (_Bool)isConversationStoreLoaded;
- (long long)oneOnOneCount;
- (_Bool)isImmutableChatEnabled;
- (_Bool)saveEmptyDataToDisk;
- (_Bool)shouldLoadFromDiskImmediately;
- (void)clear;
- (_Bool)saveState;
- (_Bool)_isValidUserAndConversationStore:(id)arg1;
- (void)_registerAllMediaForStore:(id)arg1;
- (void)_mergeConversationStoreLoadedFromDisk:(id)arg1;
- (void)_checkAndCorrectConversationStore:(id)arg1;
- (void)markAsLoadedWithoutLoadingFromDisk;
- (void)loadFromDiskAsync:(_Bool)arg1;
- (CDUnknownBlockType)_loadedBlock;
- (void)didCreateGroupOnServerWithId:(id)arg1 initialSojuMischief:(id)arg2;
- (void)didJoinGroupWithId:(id)arg1;
- (void)didBeginLeavingGroupWithId:(id)arg1;
- (void)didChangeInfoForGroupWithId:(id)arg1;
- (void)didFinishLoadingGroups;
- (void)diskLoadFinished;
- (void)conversationDidUpdate:(id)arg1 withMetadataDictionary:(id)arg2;
- (void)_getDeltaGroupConversationsRequestAndPerform:(id)arg1;
- (void)deltaGroupConversationsRequest:(CDUnknownBlockType)arg1;
- (id)syncUFSDeltaInformation;
- (void)_retryAllFailedSilentMessagesForStore:(id)arg1 isStoreFromDisk:(_Bool)arg2;
- (void)retryAllFailedSilentMessages;
- (void)repostNotification:(id)arg1 onNotificationManager:(id)arg2 forMessage:(id)arg3;
- (void)_fetchConversation:(id)arg1 messageId:(id)arg2 notification:(id)arg3 fetchReason:(long long)arg4 notificationManager:(id)arg5;
- (void)processNotification:(id)arg1 fromNotificationManager:(id)arg2;
- (void)_resetTypingStateWithConvId:(id)arg1;
- (void)didUpdateGroup:(id)arg1;
- (void)createGroupIfNecessaryForConversationId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearAllConversations;
- (void)clearConversationById:(id)arg1;
- (void)getLastParticipantSentMessageById:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_unsetActiveConversationById:(id)arg1;
- (void)unsetActiveConversationById:(id)arg1;
- (id)activeConversationId;
- (void)_setActiveConversation:(id)arg1;
- (void)setActiveConversationById:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)getNotificationStatusForConversation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)activeBackgroundedChatHasUnreadMessageOrCallInProgress;
@property(retain) id <SCBitmojiManagerProtocol> bitmojiManager;
@property(retain) id <SCMediaSendTaskManager> mediaSendTaskManager;
- (id)mediaPrefetcher;
- (id)chatSDK;
- (id)metadataStore;
- (id)mediaFileManager;
- (id)chatMediaCache;
- (id)groupActionHandler;
- (id)actionHandler;
- (void)refreshWithFeedManager:(id)arg1;
- (void)configureWithUserSession:(id)arg1 externalAPIProvider:(id)arg2 useImmutableChat:(_Bool)arg3 groupManager:(id)arg4 customStickerManager:(id)arg5 messageViewModelFactory:(id)arg6 bubbleMessageViewModelFactory:(id)arg7 chatCardsViewModelFactory:(id)arg8;
- (id)username;
- (id)init;
- (void)removeUpdateListener:(id)arg1;
- (void)addUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

