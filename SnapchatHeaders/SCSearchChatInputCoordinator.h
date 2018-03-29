//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCChatDrawerSender-Protocol.h"
#import "SCChatInputControllerDelegate-Protocol.h"
#import "SCChatViewHeaderDataSource-Protocol.h"
#import "SCChatViewModelReducerVisibilityDelegate-Protocol.h"
#import "SCHeaderDelegate-Protocol.h"
#import "SCSearchChatViewControllerDelegate-Protocol.h"
#import "SCSearchEventAnnouncing-Protocol.h"
#import "SCSnapSendPreparer-Protocol.h"

@class NSString, SCChatInputController, SCChatReplySendHelper, SCChatSendHelper, SCChatTableController, SCChatViewHeader, SCChatViewLifeCycleListenerAnnouncer, SCChatViewModelForChat, SCSearchChatViewController, SCSearchEventListenerAnnouncer, SCSearchPivotQueryInfo, SCUserSession, UIView, UIViewController;
@protocol SCSearchChatInputCoordinatorDelegate;

@interface SCSearchChatInputCoordinator : NSObject <SCChatInputControllerDelegate, SCChatDrawerSender, SCSearchChatViewControllerDelegate, SCChatViewModelReducerVisibilityDelegate, SCChatViewHeaderDataSource, SCHeaderDelegate, SCSnapSendPreparer, SCSearchEventAnnouncing>
{
    SCUserSession *_userSession;
    UIViewController *_presentingViewController;
    SCSearchPivotQueryInfo *_pivotQueryInfo;
    SCChatInputController *_chatInputController;
    SCChatSendHelper *_chatSendHelper;
    SCChatViewModelForChat *_chatViewModel;
    SCChatReplySendHelper *_chatReplySendHelper;
    UIView *_initialChatInputViewContainer;
    SCChatViewHeader *_header;
    SCSearchChatViewController *_chatViewController;
    SCChatTableController *_chatTableController;
    SCChatViewLifeCycleListenerAnnouncer *_lifeCycleAnnouncer;
    SCSearchEventListenerAnnouncer *_eventAnnouncer;
    CDUnknownBlockType _presentationCompletionBlock;
    id <SCSearchChatInputCoordinatorDelegate> _delegate;
}

+ (void)_successChatNotificationToUsername:(id)arg1;
+ (id)announcerIdentifier;
@property(nonatomic) __weak id <SCSearchChatInputCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handlePresentationCompletion;
- (void)_dismissChatViewController;
- (void)_presentChatViewController;
- (void)prepareReplyMessageForSending:(id)arg1;
- (void)rightButtonPressed;
- (id)chatRecipientUsername;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (_Bool)isInPreviewMode;
- (_Bool)isViewPartiallyVisible;
- (void)searchChatViewControllerWantsDismiss:(id)arg1;
- (void)_resetInputUI;
- (void)_prepareChatUIForCall;
- (void)viewDidBecomeActive;
- (void)viewWillResignActive;
- (void)viewWillEnterBackground;
- (CDUnknownBlockType)_replyCompletionHandler;
- (void)sendVideoNoteWithData:(id)arg1 duration:(double)arg2;
- (void)sendAudioNoteWithData:(id)arg1 duration:(double)arg2;
- (void)sendMediaDrawerMedia:(id)arg1 fromLocation:(CDStruct_1dee9796)arg2;
- (void)sendSticker:(id)arg1 fromPack:(id)arg2 fromPosition:(unsigned long long)arg3 fromSource:(long long)arg4;
- (_Bool)chatInputControllerShouldAllowTextEditing:(id)arg1;
- (void)resizePreview:(_Bool)arg1 dueToTextInput:(_Bool)arg2;
- (struct NSDictionary *)conversationStickerUsageHistory;
- (void)friendmojiAvatarPickerClosedWithFriendmojiType:(long long)arg1 selectedStickerId:(id)arg2;
- (_Bool)showFriendmojiHintWithTargetView:(id)arg1 delegate:(id)arg2;
- (_Bool)showAvatarPickerWithBitmojiUsers:(id)arg1 targetView:(id)arg2 delegate:(id)arg3;
- (_Bool)isPartiallyVisible;
- (_Bool)supports4GCalling;
- (_Bool)isGroupConversation;
- (void)didPressRemixAccessoryButton;
- (void)didAttemptToSendRemix;
- (void)didReturnFromCameraWithoutSendingSnap;
- (void)didPressSnapAccessoryButton;
- (void)didAttemptToSendMessage;
- (_Bool)isQuickSnapEnabled;
- (void)updateChatViewSize;
- (void)enableTableViewInteractionAfterChatNotesRecording;
- (void)disableTableViewInteractionBeforeChatNotesRecording;
- (void)drawerInactiveButVisible:(_Bool)arg1;
- (void)drawerActive;
- (void)chatInputController:(id)arg1 didTypingStateChange:(long long)arg2;
- (void)chatInputController:(id)arg1 didPasteGifData:(id)arg2;
- (void)chatInputController:(id)arg1 didTapSendText:(id)arg2;
- (void)chatInputController:(id)arg1 inputTextHeightDidChangeAnimated:(_Bool)arg2;
- (void)chatInputControllerViewDidChange:(id)arg1;
- (void)chatInputControllerTextDidChange:(id)arg1;
- (id)replyParameters;
- (id)chatInputControllerRecipient:(id)arg1;
- (void)tearDown;
- (void)setUp;
- (_Bool)_tableVisible;
- (void)_messageSendEpilogue;
- (id)viewController;
- (void)_presentFullscreenChatViewController;
- (void)_presentChatInChatInputContainerView:(id)arg1;
- (void)presentFullscreenChatWithKeyboard:(_Bool)arg1;
- (void)presentChatInCardCellView:(id)arg1;
- (id)_chat;
- (void)dealloc;
- (void)_initBackgroundListeners;
- (id)initWithUserSession:(id)arg1 presentingViewController:(id)arg2 pivotQueryInfo:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

