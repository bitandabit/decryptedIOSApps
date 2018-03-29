//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCArchiveObjectManager-Protocol.h"
#import "SCSnapLogger-Protocol.h"

@class NSMutableDictionary, NSString, SCArchiveLoader, SCSnapLoggerListenerAnnouncer;

@interface SCSnapLogger : NSObject <SCArchiveObjectManager, SCSnapLogger>
{
    SCArchiveLoader *_loader;
    NSMutableDictionary *_snapEndToEndDelayEvents;
    SCSnapLoggerListenerAnnouncer *_listenerAnnouncer;
}

+ (id)path;
+ (id)sharedInstance;
@property(readonly, nonatomic) SCSnapLoggerListenerAnnouncer *listenerAnnouncer; // @synthesize listenerAnnouncer=_listenerAnnouncer;
- (void).cxx_destruct;
- (id)_networkReachability;
- (double)_roundMessageDuration:(id)arg1;
- (id)_stringForPlaybackMethod:(long long)arg1;
- (void)logSnapCorrupted:(id)arg1 withReason:(long long)arg2 withReasonDetail:(id)arg3;
- (long long)_determineSendSource:(id)arg1;
- (_Bool)shouldLoadFromDiskImmediately;
- (void)clear;
- (_Bool)saveState;
- (void)markAsLoadedWithoutLoadingFromDisk;
- (void)loadFromDiskAsync:(_Bool)arg1;
- (CDUnknownBlockType)_loadedBlock;
- (void)logSnapSendLifeCyleEventForSnapId:(id)arg1 stepName:(id)arg2 finished:(_Bool)arg3;
- (id)getViewSnapMetricParameters:(long long)arg1 snapType:(long long)arg2 context:(long long)arg3 isVideo:(_Bool)arg4;
- (void)logSnapUnrecoverableMarkedAsViewed:(id)arg1 playbackMethod:(long long)arg2 snapType:(long long)arg3 mediaType:(id)arg4 context:(long long)arg5 senderUsername:(id)arg6 error:(id)arg7 networkStatus:(long long)arg8;
- (void)logSnapEndToEndDeliveryDelayLoadEnd:(id)arg1 responseBodySize:(long long)arg2 success:(_Bool)arg3;
- (void)_logSnapEndToEndDeliveryDelayLoadStart:(id)arg1 mediaType:(id)arg2 sendStartTimestamp:(id)arg3 createTimestamp:(id)arg4;
- (void)logSnapEndToEndDeliveryDelayLoadStart:(id)arg1 mediaType:(long long)arg2 sendStartTimestamp:(id)arg3 createTimestamp:(id)arg4;
- (void)logSnapEndToEndDeliveryDelayLoadStart:(id)arg1 messageMediaType:(long long)arg2 sendStartTimestamp:(id)arg3 createTimestamp:(id)arg4;
- (void)createSnapEndToEndDeliveryDelayEvent:(id)arg1 snapType:(long long)arg2 notificationMethod:(long long)arg3 deliveryMethod:(long long)arg4;
- (void)logSnapStackLoadingWithSnapType:(long long)arg1 playbackMethod:(long long)arg2 context:(long long)arg3 isVideo:(_Bool)arg4 remainingSnaps:(long long)arg5;
- (void)logViewNextSnapEnd:(id)arg1 playbackMethod:(long long)arg2 snapType:(long long)arg3 context:(long long)arg4 isVideo:(_Bool)arg5;
- (void)logViewNextSnapStart:(id)arg1;
- (void)logViewSnapEnd:(id)arg1 playbackMethod:(long long)arg2 snapType:(long long)arg3 context:(long long)arg4 isVideo:(_Bool)arg5;
- (void)logViewSnapStart:(id)arg1;
- (void)logSnapDownloadingFailureWithType:(id)arg1 chatVersion:(long long)arg2;
- (void)logSnapUnarchiveGenerateThumbnailEndWithUniqueId:(id)arg1 type:(id)arg2 chatVersion:(long long)arg3;
- (void)logSnapUnarchiveGenerateThumbnailStartWithUniqueId:(id)arg1;
- (void)logSnapUnarchiveWriteVideoEndWithUniqueId:(id)arg1 type:(id)arg2 chatVersion:(long long)arg3;
- (void)logSnapUnarchiveWriteVideoStartWithUniqueId:(id)arg1;
- (void)logSnapUnarchiveEndWithUniqueId:(id)arg1 type:(id)arg2 chatVersion:(long long)arg3;
- (void)logSnapUnarchiveStartWithUniqueId:(id)arg1;
- (void)logSnapDownloadWhilePlayingEndWithUniqueId:(id)arg1 type:(id)arg2 chatVersion:(long long)arg3;
- (void)logSnapDownloadWhilePlayingStartWithUniqueId:(id)arg1;
- (void)logSnapQueueDelayEndWithUniqueId:(id)arg1 type:(id)arg2 chatVersion:(long long)arg3;
- (void)logSnapQueueDelayStartWithUniqueId:(id)arg1;
- (void)logSnapStackPlaybackStartWithImagesAdded:(long long)arg1 videosAdded:(long long)arg2 chatVersion:(long long)arg3;
- (void)logOperaSnapViewerOpenEndWithConversationId:(id)arg1 chatVersion:(long long)arg2 source:(long long)arg3 firstMediaType:(id)arg4;
- (void)logOperaSnapViewerOpenStartWithConversationId:(id)arg1;
- (void)logSnapViewFailedForChatV3ForSnapID:(id)arg1 withPlaybackMethod:(long long)arg2 withPlaybackReason:(long long)arg3 withReasonDetail:(id)arg4 isVideo:(_Bool)arg5 isBroadcast:(_Bool)arg6;
- (void)logSnapViewFailedForChatV3ForSnapID:(id)arg1 withPlaybackMethod:(long long)arg2 withMediaReason:(long long)arg3 withReasonDetail:(id)arg4 isVideo:(_Bool)arg5 isBroadcast:(_Bool)arg6;
- (void)logSnapViewFailedForChatV2Snap:(id)arg1 withPlaybackMethod:(long long)arg2 withPlaybackReason:(long long)arg3 withReasonDetail:(id)arg4;
- (void)logSnapViewFailedForChatV2Snap:(id)arg1 withPlaybackMethod:(long long)arg2 withMediaReason:(long long)arg3 withReasonDetail:(id)arg4;
- (void)logSnapViewSuccessWithSnap:(id)arg1 playbackMethod:(long long)arg2;
- (long long)_snapSourceWithSource:(long long)arg1;
- (long long)productIdWithProductIdentifier:(id)arg1;
- (void)logCashSnapReplayPaymentSuccess:(double)arg1 currency:(id)arg2 productIdentifier:(id)arg3;
- (void)logCashSnapReplayPaymentTap:(double)arg1 currency:(id)arg2;
- (void)logDirectSnapReplayViewWithChatMessageV3:(id)arg1 cellViewPosition:(long long)arg2;
- (void)logDirectSnapReplayView:(id)arg1 cellViewPosition:(long long)arg2;
- (void)logDirectSnapReplayAvailableWithChatMessageV3:(id)arg1 cellViewPosition:(long long)arg2;
- (void)logDirectSnapReplayAvailable:(id)arg1 cellViewPosition:(long long)arg2;
- (void)logDirectSnapNoViewExpire:(id)arg1;
- (void)logDirectSnapViewExpire:(id)arg1;
- (void)logDirectSnapView:(id)arg1 viewSource:(long long)arg2;
- (void)_logChatMessageV3GeofilterDirectSnapViewWithMessage:(id)arg1;
- (void)logChatMessageV3DirectSnapViewWithMessage:(id)arg1 viewTimeSec:(double)arg2 viewSource:(long long)arg3;
- (void)logDirectSnapReceiveV3:(id)arg1;
- (void)logDirectSnapReceive:(id)arg1 ackTimeSecs:(double)arg2;
- (void)_logDirectSnapSendWithCommonLoggingParameters:(id)arg1 correspondentID:(id)arg2 mischiefIDs:(id)arg3 mediaType:(long long)arg4 snapTime:(double)arg5 mischiefSnapIDs:(id)arg6 snapIdsAndTimestamps:(id)arg7 sendSource:(long long)arg8;
- (void)_logDirectSnapSendWithCommonLoggingParameters:(id)arg1 correspondentID:(id)arg2 mischiefIDs:(id)arg3 mediaType:(long long)arg4 mischiefSnapIDs:(id)arg5 snapIdsAndTimestamps:(id)arg6 snapTime:(double)arg7;
- (void)logDirectSnapSendWithMetricsEventInfo:(id)arg1 chatMessageMediaType:(long long)arg2 correspondentID:(id)arg3 mischiefIDs:(id)arg4 mischiefSnapIDs:(id)arg5 snapIdsAndTimestamps:(id)arg6 sendSource:(long long)arg7;
- (void)logDirectSnapSend:(id)arg1 correspondentID:(id)arg2 mischiefIDs:(id)arg3 mischiefSnapIDs:(id)arg4 snapIdsAndTimestamps:(id)arg5;
- (void)logDirectSnapScreenshotWithChatMessageV3:(id)arg1 cellViewPosition:(long long)arg2;
- (void)logDirectSnapScreenshot:(id)arg1 cellViewPosition:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

