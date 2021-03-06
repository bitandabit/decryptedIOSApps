//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCChatConversationStoreListener-Protocol.h"
#import "SCTimeProfilable-Protocol.h"

@class NSDate, NSMutableDictionary, NSString, SCChatConversationUpdaterListenerAnnouncer, SCChatConversationViewModelV3, SCChatConversationViewModelV3Properties, SCChatSendBlockAssigner, SCQueuePerformer;
@protocol SCChatCardsMessageViewModelFactory, SCChatExternalAPIProvider, SCChatMessageViewModelFactory;

@interface SCChatConversationUpdater : NSObject <SCTimeProfilable, SCChatConversationStoreListener>
{
    NSMutableDictionary *_conversationSnapshotViewModels;
    CDUnknownBlockType _pendingRenderBlock;
    id <SCChatExternalAPIProvider> _provider;
    SCQueuePerformer *_performer;
    NSDate *_bubbleChatActivationDate;
    NSString *_username;
    NSString *_activeConversationId;
    SCChatSendBlockAssigner *_blockAssigner;
    id <SCChatMessageViewModelFactory> _messageViewModelFactory;
    id <SCChatMessageViewModelFactory> _bubbleChatViewModelFactory;
    id <SCChatCardsMessageViewModelFactory> _chatCardsViewModelFactory;
    SCChatConversationViewModelV3 *_conversationViewModel;
    double _lastUpdateTime;
    SCChatConversationUpdaterListenerAnnouncer *_announcer;
    SCChatConversationViewModelV3Properties *_currentViewModelProperties;
    unsigned long long _numberOfMessagesFromLastUpdate;
}

+ (int)context;
+ (void)addViewModel:(id)arg1 toArray:(id)arg2 updateCount:(id)arg3;
@property unsigned long long numberOfMessagesFromLastUpdate; // @synthesize numberOfMessagesFromLastUpdate=_numberOfMessagesFromLastUpdate;
@property(retain) SCChatConversationViewModelV3Properties *currentViewModelProperties; // @synthesize currentViewModelProperties=_currentViewModelProperties;
@property(retain, nonatomic) SCChatConversationUpdaterListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
@property double lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(retain) SCChatConversationViewModelV3 *conversationViewModel; // @synthesize conversationViewModel=_conversationViewModel;
@property(retain) id <SCChatCardsMessageViewModelFactory> chatCardsViewModelFactory; // @synthesize chatCardsViewModelFactory=_chatCardsViewModelFactory;
@property(retain) id <SCChatMessageViewModelFactory> bubbleChatViewModelFactory; // @synthesize bubbleChatViewModelFactory=_bubbleChatViewModelFactory;
@property(retain) id <SCChatMessageViewModelFactory> messageViewModelFactory; // @synthesize messageViewModelFactory=_messageViewModelFactory;
@property(nonatomic) __weak SCChatSendBlockAssigner *blockAssigner; // @synthesize blockAssigner=_blockAssigner;
- (void).cxx_destruct;
- (void)clear;
- (_Bool)_messageIsValidForBubbleChat:(id)arg1;
- (void)deactivateBubbleChat;
- (void)activateBubbleChat;
- (_Bool)activeConversationHasUnreadMessage;
- (double)_delayForUpdate;
- (_Bool)_messageIsPendingChat:(id)arg1 conversation:(id)arg2;
- (_Bool)_messageIsPendingSnap:(id)arg1 conversation:(id)arg2;
- (void)updateWithNewViewModel:(id)arg1;
- (_Bool)_messageWasScreenshottedOrReplayed:(id)arg1;
- (id)_chatCardsViewModelsForMessage:(id)arg1 previousMessage:(id)arg2 previousViewModel:(id)arg3 currentTime:(id)arg4 conversation:(id)arg5 metadataDictionary:(id)arg6 snapshotViewModel:(id)arg7;
- (id)_bubbleViewModelWithMessage:(id)arg1 previousMessage:(id)arg2 previousViewModel:(id)arg3 currentTime:(id)arg4 conversation:(id)arg5 metadataDictionary:(id)arg6 snapshotViewModel:(id)arg7;
- (id)_regularViewModelWithMessage:(id)arg1 previousMessage:(id)arg2 previousViewModel:(id)arg3 currentTime:(id)arg4 conversation:(id)arg5 metadataDictionary:(id)arg6 snapshotViewModel:(id)arg7;
- (void)_logNewViewModels:(id)arg1 messageTypes:(id)arg2 isBubbleChat:(_Bool)arg3;
- (id)viewModelForConversation:(id)arg1 withMetadataDictionary:(id)arg2 withSnapshotViewModel:(id)arg3;
- (void)diskLoadFinished;
- (void)_updateWithCurrentConversation;
- (void)conversationDidUpdate:(id)arg1 withMetadataDictionary:(id)arg2;
- (void)updateChatViewSizeInFactory:(struct CGSize)arg1;
- (void)unsetActiveConversation:(id)arg1;
- (id)activeConversationId;
- (void)setActiveConversation:(id)arg1 withMetadataDictionary:(id)arg2 withSnapshotViewModel:(id)arg3;
- (void)configureWithExternalAPIProvider:(id)arg1 username:(id)arg2 messageViewModelFactory:(id)arg3 bubbleMessageViewModelFactory:(id)arg4 chatCardsViewModelFactory:(id)arg5;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

