//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCBaseMediaMessageSendingDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSString, SCGallerySendItemsCounter, SCGallerySendItemsVideoSegmentHelper, SCGallerySmartSharing, SCGalleryUserContext, SCUserSession;
@protocol SCGallerySendItemsTaskDelegate, SCGallerySnap;

@interface SCGallerySendItemsTask : NSObject <SCBaseMediaMessageSendingDelegate>
{
    NSDictionary *_cloudFileContainers;
    SCUserSession *_userSession;
    _Bool _shouldShowToast;
    _Bool _didSetDestinations;
    NSArray *_recipients;
    _Bool _postToMyStory;
    NSNumber *_postToMyStoryPrivacyOverride;
    NSArray *_officialStories;
    NSArray *_sharedStories;
    NSArray *_businessIds;
    NSArray *_groupStories;
    NSArray *_mischiefs;
    NSArray *_mischiefIds;
    NSString *_additionalText;
    _Bool _smartShared;
    NSMutableArray *_unprocessedMediaGroupQueueForChat;
    NSMutableArray *_unprocessedMediaGroupQueueForStory;
    NSMutableArray *_processedAndUnsentToChatMediaMessagesQueue;
    NSMutableArray *_processedAndUnsentToChatMediaSendTasksQueue;
    NSMutableArray *_processedAndUnpostToStoryEphemeralClientIDsQueue;
    long long _videoAssetOrientation;
    id <SCGallerySnap> _longVideoSnap;
    NSMutableArray *_unprocessedVideoUrlQueue;
    NSMutableArray *_processedEphmeralsForVideoUrlQueue;
    _Bool _didShowToastOnce;
    SCGallerySendItemsCounter *_sendItemsCounter;
    NSMutableSet *_galleryMediaGroupUuidsDidCallbackForSend;
    NSMutableSet *_galleryMediasDidCallbackForPost;
    NSMutableSet *_galleryMediasDidCallbackForSendSnap;
    NSMutableDictionary *_messageIdentifierToGalleryMediaGroup;
    NSMutableDictionary *_galleryMediaToPostState;
    NSMutableDictionary *_ephemeralIdToGalleryMedia;
    CDUnknownBlockType _onDidFinishSendingMessageBlock;
    _Bool _didReportEndToEndSendingMetrics;
    NSString *_endToEndSendingMetricsReportId;
    SCGallerySendItemsVideoSegmentHelper *_videoSegmentHelper;
    SCGalleryUserContext *_userContext;
    SCGallerySmartSharing *_gallerySmartSharing;
    NSString *_failureReason;
    NSMutableSet *_smartSharedSnapIds;
    _Bool _isFromStoryBuilder;
    id <SCGallerySendItemsTaskDelegate> _delegate;
    NSArray *_mediaGroups;
}

+ (id)sharedPerformer;
+ (void)sendableMediaGroupsWithGalleryItems:(id)arg1 gallerySnaps:(id)arg2 sendableMediaGroupsRef:(id *)arg3 createStatusRef:(long long *)arg4 userSession:(id)arg5;
@property(readonly, nonatomic) _Bool isFromStoryBuilder; // @synthesize isFromStoryBuilder=_isFromStoryBuilder;
@property(readonly, copy, nonatomic) NSDictionary *cloudFileContainers; // @synthesize cloudFileContainers=_cloudFileContainers;
@property(readonly, copy, nonatomic) NSArray *mediaGroups; // @synthesize mediaGroups=_mediaGroups;
@property(nonatomic) __weak id <SCGallerySendItemsTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_willPostToStories;
- (_Bool)_willSendToChatV3;
- (_Bool)_willSendToChat;
- (_Bool)_willSendMediaAsDirectChat:(id)arg1;
- (_Bool)_willSendMediaAsGroupChat:(id)arg1;
- (_Bool)_willSendMediaAsSnap:(id)arg1;
- (unsigned long long)_chatMessageCount;
- (unsigned long long)_snapSendCount;
- (unsigned long long)_storyPostCount;
- (id)failureReasonWithPostingState:(long long)arg1;
- (void)_logWhenStartSharing;
- (void)_reportEndToEndSendingMetricsIfNeeded;
- (void)_initEndToEndSendingMetrics;
- (void)_showSentErrorToast:(id)arg1;
- (void)_showSentToast:(id)arg1;
- (void)_showToastIfNeeded;
- (void)_ephemeralDidSendSnap:(id)arg1 didSucceed:(_Bool)arg2;
- (void)_ephemeralDidPost:(id)arg1 didSucceed:(_Bool)arg2;
- (void)_galleryMediaGroupDidSend:(id)arg1 didSucceed:(_Bool)arg2 messageId:(id)arg3 failureReason:(id)arg4;
- (void)galleryMediaDidSendSnap:(id)arg1 didSucceed:(_Bool)arg2;
- (void)galleryMediaDidPost:(id)arg1 didSucceed:(_Bool)arg2;
- (void)galleryMediaGroupDidSend:(id)arg1 didSucceed:(_Bool)arg2;
- (void)_postOneStory:(id)arg1 creationDate:(id)arg2 isFromCameraRoll:(_Bool)arg3;
- (void)_sendOnePendingMediaSendTask;
- (void)_sendOnePendingMediaMessage;
- (void)_sendAdditionalText;
- (long long)_mediaTypeForSending:(unsigned long long)arg1;
- (void)_prepareMediaData:(id)arg1 withMediaDrawerMedia:(id)arg2 indexStartingAt:(unsigned long long)arg3 forBatchedMedia:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_processPendingUrlsForVideoAssetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_createEphemeralMediasWithLongVideoSnap:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_createEphemeralMediasWithVideoAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_createEphemeralMediaWithPhotoAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_createEphemeralMediaWithVideoSnap:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_logGallerySnapSendForPostToStoryOnly:(id)arg1 snapDetail:(id)arg2 clientId:(id)arg3 smartShared:(_Bool)arg4;
- (void)_createEphemeralMediaWithPhotoSnap:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchLocationForMedia:(id)arg1;
- (void)_createEphermalMediasForGalleryMedia:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sendSnapUsingChatV3:(id)arg1 captureDate:(id)arg2 isFromCameraRoll:(_Bool)arg3 multiSnapMetadata:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_processAndPostOnePendingGalleryMediaForStoryWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_createStoryMessageWithMediaGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_createMediaSendTaskWithMediaGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_createMediaSendTaskWithMediaGroup:(id)arg1 uploadableChatMedias:(id)arg2;
- (id)_storyTitleWithMediaGroup:(id)arg1;
- (void)_createBatchedMediaWithMediaGroup:(id)arg1 drawerMedias:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_createBatchedMediaWithMediaGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_createSharedMessageWithMediaGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_prepareUploadableChatMedia:(id)arg1 withPhotoAsset:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_prepareUploadableChatMedia:(id)arg1 withGallerySnap:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_prepareUploadableChatMedia:(id)arg1 withGalleryMedia:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_createUploadableChatMediaWithPhotoAsset:(id)arg1;
- (id)_decorateUploadableChatMedia:(id)arg1 withGallerySnap:(id)arg2 venue:(_Bool)arg3;
- (id)_createUploadableChatMediaWithGallerySnap:(id)arg1;
- (id)_createUploadableChatMediaWithGalleryMedia:(id)arg1;
- (void)_prepareUploadableChatMedias:(id)arg1 withGalleryMedias:(id)arg2 index:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_willSendStoryToChat;
- (void)_processOnePendingMediaGroupForGroupChatOrAttachmentWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_processOnePendingMediaGroupForChatWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_didFinishSendingMessage:(id)arg1;
- (void)baseMediaMessageDidFailSend:(id)arg1 errorString:(id)arg2;
- (void)baseMediaMessageDidSend:(id)arg1;
- (id)_venueIdIfPresent:(id)arg1;
- (_Bool)_hasAttachment;
- (void)_sendThroughChatGateway;
- (void)_sendToChat;
- (void)_processOneMessageForChatOrStory;
- (void)_fillInCounterForInitialCounts;
- (void)sendToRecipients:(id)arg1 postToMyStory:(_Bool)arg2 myStoryPrivacyOverride:(id)arg3 officialStories:(id)arg4 sharedStories:(id)arg5 businessIds:(id)arg6 mobStories:(id)arg7 mischiefs:(id)arg8 additionalText:(id)arg9;
- (id)initWithSendableMediaGroups:(id)arg1 cloudFileContainers:(id)arg2 shouldShowToast:(_Bool)arg3 isFromStoryBuilder:(_Bool)arg4 userContext:(id)arg5 userSession:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

