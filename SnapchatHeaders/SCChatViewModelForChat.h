//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCChatConversationViewModel-Protocol.h"
#import "SCChatUpdateHelper-Protocol.h"
#import "SCChatViewModelReducerListener-Protocol.h"

@class NSArray, NSDictionary, NSIndexPath, NSString, SCChat, SCChatDraft, SCChatSnapshotViewModel, SCChatViewModelListenerAnnouncer, UIColor;
@protocol SCChatGroup, SCChatMessage;

@interface SCChatViewModelForChat : NSObject <SCChatConversationViewModel, SCChatUpdateHelper, SCChatViewModelReducerListener>
{
    SCChat *_chat;
    SCChatViewModelListenerAnnouncer *_viewModelAnnouncer;
    SCChatSnapshotViewModel *_chatSnapshotViewModel;
    id <SCChatMessage> _lastNonPlaceholderMessage;
    NSIndexPath *_firstBelowTheFoldIndexPath;
    struct NSDictionary *_stickerUsageHistory;
    _Bool _shouldShowGreetingSticker;
    id <SCChatGroup> _group;
    _Bool _doNotDisturb;
    _Bool _isGroupConversation;
    _Bool _recipientCanReceiveCash;
    _Bool _hasMoreLocalChat;
    double _belowTheFoldOffset;
    double _previewModeOffset;
    double _tableHeight;
    UIColor *_cursorColor;
    NSArray *_bubbleMessageViewModels;
    NSArray *_chatCardsMessageViewModels;
    NSArray *_messageViewModels;
}

@property(nonatomic) _Bool hasMoreLocalChat; // @synthesize hasMoreLocalChat=_hasMoreLocalChat;
@property(retain, nonatomic) NSArray *messageViewModels; // @synthesize messageViewModels=_messageViewModels;
@property(readonly, nonatomic) NSIndexPath *firstBelowTheFoldIndexPath; // @synthesize firstBelowTheFoldIndexPath=_firstBelowTheFoldIndexPath;
@property(readonly, nonatomic) SCChat *chat; // @synthesize chat=_chat;
@property(readonly, nonatomic) NSArray *chatCardsMessageViewModels; // @synthesize chatCardsMessageViewModels=_chatCardsMessageViewModels;
@property(readonly, nonatomic) NSArray *bubbleMessageViewModels; // @synthesize bubbleMessageViewModels=_bubbleMessageViewModels;
@property(nonatomic) _Bool doNotDisturb; // @synthesize doNotDisturb=_doNotDisturb;
@property(nonatomic) _Bool recipientCanReceiveCash; // @synthesize recipientCanReceiveCash=_recipientCanReceiveCash;
@property(readonly, nonatomic) id <SCChatGroup> group; // @synthesize group=_group;
@property(nonatomic) _Bool shouldShowGreetingSticker; // @synthesize shouldShowGreetingSticker=_shouldShowGreetingSticker;
@property(readonly, nonatomic) _Bool isGroupConversation; // @synthesize isGroupConversation=_isGroupConversation;
@property(readonly, nonatomic) UIColor *cursorColor; // @synthesize cursorColor=_cursorColor;
@property(readonly, nonatomic) NSDictionary *stickerUsageHistory; // @synthesize stickerUsageHistory=_stickerUsageHistory;
@property(readonly, nonatomic) double tableHeight; // @synthesize tableHeight=_tableHeight;
@property(readonly, nonatomic) double previewModeOffset; // @synthesize previewModeOffset=_previewModeOffset;
@property(readonly, nonatomic) double belowTheFoldOffset; // @synthesize belowTheFoldOffset=_belowTheFoldOffset;
- (void).cxx_destruct;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)updateVerticalLayoutProperties:(id)arg1;
@property(readonly, nonatomic) SCChatDraft *chatDraft;
- (id)messageWithId:(id)arg1;
- (id)snapShotViewModel;
- (id)indexPathOfMessage:(id)arg1;
- (id)lastIndexPath;
- (_Bool)isLastIndexPath:(id)arg1;
- (id)lastChatId;
- (id)bubbleViewModelAtIndexPath:(id)arg1;
- (id)viewModelAtIndexPath:(id)arg1;
- (void)loadMoreMessagesByRetrying:(_Bool)arg1;
- (_Bool)canLoadMoreMessagesByRetrying:(_Bool)arg1;
- (void)didViewModelsChange;
- (void)stackedViewModel:(id)arg1 didChildrenChangeAt:(id)arg2;
- (void)didMessagesDeleteAtIndexPaths:(id)arg1;
- (void)didMessagesAddAtIndexPaths:(id)arg1;
- (void)didMessagesChangeAtIndexPaths:(id)arg1;
- (void)willViewModelsChange;
- (_Bool)isGroupLocal;
- (unsigned long long)groupVersion;
- (id)recipientUsername;
- (id)displayName;
- (id)conversationId;
@property(readonly, copy) NSString *description;
- (id)initWithChat:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

