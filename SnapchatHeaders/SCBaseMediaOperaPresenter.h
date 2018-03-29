//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCBaseMediaMessageOperaDataSourceDelegate-Protocol.h"
#import "SCContextOperaViewControllerDelegate-Protocol.h"
#import "SCOperaEventListener-Protocol.h"

@class NSDate, NSString, SCAttachmentsLogger, SCBaseMediaMessageOperaDataSource, SCChatCardsOperaSession, SCOperaConfiguration, SCOperaViewController, SCOperaViewModel, SCQueuePerformer, SCUserSession, UIView, UIViewController;
@protocol NavigationDelegate, SCBaseMediaOperaPresenterDelegate;

@interface SCBaseMediaOperaPresenter : NSObject <SCContextOperaViewControllerDelegate, SCOperaEventListener, SCBaseMediaMessageOperaDataSourceDelegate>
{
    UIViewController *_presentingViewController;
    UIView *_baseView;
    SCBaseMediaMessageOperaDataSource *_dataSource;
    SCOperaViewModel *_operaViewModel;
    SCOperaConfiguration *_operaConfiguration;
    SCOperaViewController *_operaViewController;
    _Bool _isShowingV3Message;
    _Bool _willLeaveAppFromPlayer;
    SCUserSession *_userSession;
    long long _source;
    long long _numScreenshots;
    long long _numScreenRecordings;
    NSDate *_snapViewStartTimestamp;
    NSDate *_storyViewStartTimestamp;
    NSString *_lastReplayedStackId;
    SCQueuePerformer *_performer;
    SCAttachmentsLogger *_attachmentsLogger;
    id <NavigationDelegate> _navigationDelegate;
    SCChatCardsOperaSession *_chatCardsOperaSession;
    _Bool _shouldDisplayChatCards;
    long long _cellViewPosition;
    _Bool _didLeaveAppFromPlayer;
    _Bool _isDisplayingMedia;
    id <SCBaseMediaOperaPresenterDelegate> _delegate;
    long long _messageType;
    NSString *_currentOperaPageId;
}

+ (id)announcerIdentifier;
+ (_Bool)_isVideoForPageWithContext:(id)arg1;
+ (long long)_mediaTypeForPageWithContext:(id)arg1 isDiscoverContent:(_Bool)arg2;
@property(readonly, nonatomic) _Bool isDisplayingMedia; // @synthesize isDisplayingMedia=_isDisplayingMedia;
@property(readonly, nonatomic) _Bool didLeaveAppFromPlayer; // @synthesize didLeaveAppFromPlayer=_didLeaveAppFromPlayer;
@property(readonly, copy, nonatomic) NSString *currentOperaPageId; // @synthesize currentOperaPageId=_currentOperaPageId;
@property(readonly, nonatomic) long long messageType; // @synthesize messageType=_messageType;
@property(nonatomic) __weak id <SCBaseMediaOperaPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cardWasTapped;
- (void)contextViewControllerWillResignActive:(id)arg1;
- (void)contextViewControllerDidBecomeActive:(id)arg1;
- (void)contextViewController:(id)arg1 isMovingFullScreenChatControls:(double)arg2;
- (void)contextViewControllerWillEnterFullScreenChat:(id)arg1;
- (void)contextViewController:(id)arg1 didUpdateVisiblePercent:(double)arg2;
- (void)contextViewControllerDidPresent:(id)arg1;
- (void)contextViewControllerWillPresent:(id)arg1;
- (void)contextViewControllerDidDismiss:(id)arg1;
- (void)contextViewControllerWillDismiss:(id)arg1;
- (void)contextViewControllerPrepareForPresentation:(id)arg1;
- (void)contextViewControllerDidPressSend:(id)arg1;
- (void)contextViewControllerFinishedMediaPresentation:(id)arg1;
- (void)contextViewControllerBeganMediaPresentation:(id)arg1;
- (void)contextViewController:(id)arg1 didLeaveApp:(_Bool)arg2;
- (void)contextViewControllerWillLeaveApp:(id)arg1;
- (id)actionHandler;
- (_Bool)isPlayingSnap;
- (_Bool)fullScreenIsShown;
- (void)_logOpenV3ChatSnapAttachmentWithMessageId:(id)arg1 context:(id)arg2;
- (void)_logOpenV2ChatSnapAttachmentWithMessageId:(id)arg1 context:(id)arg2;
- (void)_didOpenWebViewWithContext:(id)arg1;
- (void)_logVidDidPlayForDiscoverContentIfNeededWithError:(_Bool)arg1;
- (void)_logViewEndForDiscoverContentIfNeeded;
- (void)_logCloseViewForDiscoverContentWithParams:(id)arg1;
- (void)_logStartToPresentForDiscoverContentIfNeeded:(_Bool)arg1;
- (_Bool)_isShowingDiscoverContent;
- (_Bool)_isShowingChatV2SnapStack;
- (_Bool)_isShowingChatV3SnapStack;
- (_Bool)_isShowingSnap;
- (_Bool)_allowLoadingScreens;
- (_Bool)_isShowingChatV2Snap;
- (_Bool)_isShowingChatV3Snap;
- (_Bool)_isShowingReplyMedia;
- (void)userDidScreenRecord;
- (void)userDidTakeScreenshot;
- (void)viewWillResignActive;
- (_Bool)_isCurrentPageWebView;
- (void)_logThumbnailGenerationFailureWithSnapMediaId:(id)arg1;
- (void)_unarchiveFailureWithMessage:(id)arg1 error:(long long)arg2;
- (void)dismiss;
- (void)_logMediaConsumptionWithPageId:(id)arg1;
- (void)_finishViewingChatV2Snap:(id)arg1 pageId:(id)arg2 context:(id)arg3;
- (void)_logViewNextSnapForPageId:(id)arg1;
- (void)_logPlaybackFailureForPageId:(id)arg1 isVideo:(_Bool)arg2 mediaType:(long long)arg3 params:(id)arg4;
- (void)_didCloseOperaViewer;
- (void)_logMessageViewForMediaId:(id)arg1 parameters:(id)arg2;
- (void)_logMediaViewForPageId:(id)arg1 parameters:(id)arg2 context:(id)arg3;
- (void)_logChatDirectSnapViewForSpeedwayStoryWithMessage:(id)arg1 mediaId:(id)arg2 viewTimeSec:(double)arg3 parameters:(id)arg4;
- (void)_logChatSnapViewForMessage:(id)arg1 parameters:(id)arg2;
- (void)_logMediaViewForMessage:(id)arg1 mediaId:(id)arg2 viewTimeSec:(double)arg3 parameters:(id)arg4 source:(long long)arg5;
- (void)_logChatMessageV3MediaViewForMediaId:(id)arg1 parameters:(id)arg2 source:(long long)arg3;
- (void)markStoryAsViewed;
- (void)_didFinishViewingMessageWithPageId:(id)arg1 params:(id)arg2;
- (void)_retryFetchMediaFromMedia:(id)arg1;
- (void)_prefetchMediaFromMedia:(id)arg1;
- (void)_openSnapMediaById:(id)arg1 isVideo:(_Bool)arg2;
- (_Bool)_shouldHideBaseViewWhenPresented;
- (void)_hideBaseViewForThumbnailById:(id)arg1 conversationId:(id)arg2;
- (void)_showBaseViewForThumbnailById:(id)arg1 conversationId:(id)arg2;
- (void)_cleanupOperaVC;
- (void)_finishViewingSnapWithPageID:(id)arg1;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredEventsForOperaSession;
- (_Bool)_displayContextForThisSnap;
- (void)_presentMediaWithDataSource:(id)arg1 fromView:(id)arg2 startIndex:(unsigned long long)arg3 shouldDisplayCircleTransition:(_Bool)arg4;
- (id)_fetchChatMessageV2WithMessageId:(id)arg1 conversationId:(id)arg2;
- (void)_fetchChatMessageV3WithMessageId:(id)arg1 conversationId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_unarchiveMediaMessageV2IfNecessary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_unarchiveMediaMessageV3IfNecessary:(id)arg1 conversationId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchMessageForPresentationWithMessageId:(id)arg1 conversationId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_presentMessage:(id)arg1 conversationId:(id)arg2 fromPresentingViewController:(id)arg3 fromView:(id)arg4 startIndex:(unsigned long long)arg5 shouldDisplayCircleTransition:(_Bool)arg6 fromSource:(long long)arg7 baseChatMedia:(id)arg8 chatContentMedia:(id)arg9;
- (void)presentChatContentMedia:(id)arg1 messageId:(id)arg2 conversationId:(id)arg3 fromPresentingViewController:(id)arg4 fromView:(id)arg5 shouldDisplayCircleTransition:(_Bool)arg6;
- (void)presentMediaMessage:(id)arg1 conversationId:(id)arg2 fromPresentingViewController:(id)arg3 fromView:(id)arg4 startIndex:(unsigned long long)arg5 shouldDisplayCircleTransition:(_Bool)arg6 fromSource:(long long)arg7;
- (void)presentBaseChatMedia:(id)arg1 messageId:(id)arg2 conversationId:(id)arg3 fromPresentingViewController:(id)arg4 fromView:(id)arg5 shouldDisplayCircleTransition:(_Bool)arg6;
- (id)userSession;
- (void)operaDataSourceFoundNothingToDisplay:(id)arg1;
- (void)operaDataSource:(id)arg1 requestCallbackWhenViewModelConnectionIsStable:(CDUnknownBlockType)arg2;
- (void)operaDataSourceReadyForPlayback:(id)arg1;
@property(readonly, copy, nonatomic) NSString *conversationId;
- (void)presentDiscoveryMediaFromViewModel:(id)arg1 fromPresentingViewController:(id)arg2 fromView:(id)arg3 isV3Message:(_Bool)arg4;
- (void)presentChatV2SnapStackForConversation:(id)arg1 fromPresentingViewController:(id)arg2 fromView:(id)arg3 fromSource:(long long)arg4 cellViewPosition:(long long)arg5;
- (void)presentGroupSnapStackForConversation:(id)arg1 fromPresentingViewController:(id)arg2 fromView:(id)arg3 fromSource:(long long)arg4 shouldDisplayChatCards:(_Bool)arg5 cellViewPosition:(long long)arg6;
- (_Bool)_shouldEnableFullContent;
- (id)_operaConfigurationWithOperaViewModel:(id)arg1;
- (void)dealloc;
- (void)viewWillEnterForeground:(id)arg1;
- (id)initWithDelegate:(id)arg1 userSession:(id)arg2 navigationDelegate:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
