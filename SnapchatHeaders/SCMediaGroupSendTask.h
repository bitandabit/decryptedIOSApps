//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "EphemeralMediaDelegate-Protocol.h"
#import "SCMediaSendTask-Protocol.h"

@class NSDate, NSMutableArray, NSString, SCMediaSendTaskConfiguration, SCMediaSendTaskEphemeralMedia, SCMediaSendTaskMediaList, SCMediaSendTaskMetricsProperties, SCQueuePerformer, Snap;
@protocol OS_dispatch_group, SCMediaSendTaskDelegate;

@interface SCMediaGroupSendTask : NSObject <EphemeralMediaDelegate, SCMediaSendTask>
{
    SCQueuePerformer *_performer;
    NSString *_preferredMessageId;
    SCMediaSendTaskMediaList *_mediaList;
    SCMediaSendTaskEphemeralMedia *_ephemeralMedia;
    Snap *_snap;
    unsigned long long _type;
    SCMediaSendTaskConfiguration *_configuration;
    NSMutableArray *_usersWithUnsentSnap;
    NSMutableArray *_inviteUsersWithUnsentSnap;
    NSMutableArray *_groupIdsWithUncreatedChatMedia;
    NSMutableArray *_userIdsWithUncreatedChatMedia;
    NSMutableArray *_groupIdsWithUnsentSCCPMessage;
    NSMutableArray *_userIdsWithUnsentSCCPMessage;
    NSMutableArray *_invalidRecipients;
    SCMediaSendTaskMetricsProperties *_metricsProperties;
    _Bool _shouldSendOnUploaded;
    NSObject<OS_dispatch_group> *_sendResultCollectorGroup;
    _Bool _storyAlreadyPosted;
    NSMutableArray *_completionHandlers;
    NSDate *_creationTimestamp;
    NSString *_context;
    _Bool _shouldRetryUploadAfterCreateMediaFailed;
    NSString *_taskId;
    NSString *_feedId;
    id <SCMediaSendTaskDelegate> _delegate;
    long long _taskState;
}

@property(readonly, nonatomic) long long taskState; // @synthesize taskState=_taskState;
@property(nonatomic) __weak id <SCMediaSendTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(readonly, copy, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
- (void).cxx_destruct;
- (void)_enterSendResultCollectorGroupFromFunction:(id)arg1;
- (void)_leaveSendResultCollectorGroupFromFunction:(id)arg1;
- (void)removeCorrespondingMessage;
- (void)prepareToBeRemoved;
- (void)clearInvalidRecipients;
- (id)invalidRecipientsNameString;
- (_Bool)_isValidSingleRecipientTask;
- (_Bool)_hasValidMedia;
- (_Bool)_isExpired;
- (_Bool)isValid;
- (void)updateFeedId;
- (_Bool)isRecipientSingleGroupOrUser;
- (id)singleRecipientUsername;
- (_Bool)isRecipientSingleUser;
- (id)groups;
- (id)singleGroupId;
- (_Bool)isRecipientSingleGroup;
- (void)_addOrUpdateMessageWithStatus:(long long)arg1;
- (void)_ephemeralMediaSendDidSucceedForMedia:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)ephemeralMediaSendDidSucceedForMedia:(id)arg1 snapIdsAndTimestamps:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)ephemeralMediaSendDidFailForMedia:(id)arg1;
- (void)_ephemeralMediaUploadDidFailForMedia:(id)arg1;
- (void)ephemeralMediaUploadDidFailForMedia:(id)arg1;
- (void)_ephemeralMediaUploadDidSucceedForMedia:(id)arg1;
- (void)ephemeralMediaUploadDidSucceedForMedia:(id)arg1;
- (void)ephemeralMediaUploadDidStartForMedia:(id)arg1;
- (id)_generateFeedId;
- (id)_groupIdArray;
- (id)_userRecipientUsernameArray;
- (void)__didAddOrUpdateMediaMessage:(id)arg1;
- (void)_didAddOrUpdateMediaMessage:(id)arg1;
- (void)addOrUpdateSendToMessageInConversationWithSendStatus:(long long)arg1;
- (void)__didSendUploadedMediaForMessage:(id)arg1 recipient:(id)arg2 success:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_didSendUploadedMediaForMessage:(id)arg1 recipient:(id)arg2 success:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)__didSendUploadedMediaForGroupMessage:(id)arg1 groupId:(id)arg2 success:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_didSendUploadedMediaForGroupMessage:(id)arg1 groupId:(id)arg2 success:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_createSCCPMessagesForRecipients:(id)arg1 groups:(id)arg2;
- (id)_determineMediaProviders;
- (id)_addTaskInformationToMetadata:(id)arg1 withSendStatus:(long long)arg2;
- (void)_processCreateMediaOnServerResponse:(id)arg1;
- (CDUnknownBlockType)_createMediaOnServerSuccessBlock;
- (CDUnknownBlockType)_createMediaOnServerFailureBlock;
- (id)_invitePhoneNumers;
- (void)_sendSnapAndPostStory;
- (id)_mediasJsonArrayParams;
- (void)_createMediaOnServerAndSendSCCPMessages;
- (_Bool)_isSending;
- (void)_didCompleteSend:(_Bool)arg1;
- (void)_logChatChatSend;
- (void)_updateTaskStateAfterFinishTask;
- (void)_createGroupsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_send;
- (id)multiSnapBundleId;
- (void)didFailToSend;
- (void)sendWithCompletionHandler:(CDUnknownBlockType)arg1 context:(id)arg2;
- (void)_updateRecipients;
- (void)encodeWithCoder:(id)arg1;
- (void)finishDecodingWithPerformer:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 taskType:(unsigned long long)arg2 performer:(id)arg3;
- (id)initWithEphemeralMedia:(id)arg1 configuration:(id)arg2 performer:(id)arg3;
- (id)initWithMediaList:(id)arg1 configuration:(id)arg2 performer:(id)arg3;
- (id)initWithConfiguration:(id)arg1 performer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

