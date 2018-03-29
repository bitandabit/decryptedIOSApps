//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCContentInviteSnapSendTaskManager-Protocol.h"
#import "SCMediaSendTaskDelegate-Protocol.h"
#import "SCMediaSendTaskManager-Protocol.h"
#import "SCUserSessionScoped-Protocol.h"

@class NSMutableArray, NSString, SCQueuePerformer;
@protocol SCMediaSendTask;

@interface SCMediaSendTaskManagerImpl : NSObject <SCUserSessionScoped, SCMediaSendTaskDelegate, SCMediaSendTaskManager, SCContentInviteSnapSendTaskManager>
{
    _Bool _invalidated;
    SCQueuePerformer *_performer;
    NSString *_taskListArchivePath;
    NSMutableArray<SCMediaSendTask> *_taskList;
}

- (void).cxx_destruct;
- (void)sendTaskDidFailToSend:(id)arg1;
- (void)sendTaskDidSendSuccessfully:(id)arg1;
- (void)_retrySendTask:(id)arg1;
- (void)_removeInvalidSendTask:(id)arg1;
- (id)_tasksForTaskIds:(id)arg1;
- (void)_retryTasksSequentially:(id)arg1;
- (void)_sendTaskDidStartSending:(id)arg1;
- (void)_deleteStateFromDisk;
- (id)_localGroupIdsForTask:(id)arg1;
- (void)_removeFeedEventIfNecessaryForTask:(id)arg1;
- (void)_removeLocalGroupsIfNecessaryForTask:(id)arg1;
- (void)_removeTask:(id)arg1;
- (void)_loadStateFromDisk;
- (_Bool)_saveStateToDisk;
- (_Bool)saveStateToDisk;
- (void)invalidate;
- (void)retryAllTasksWithFeedId:(id)arg1;
- (void)retryTaskIdsSequentially:(id)arg1 callbackPerformer:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)removeTaskId:(id)arg1;
- (void)removeAllTasksWithFeedId:(id)arg1;
- (void)retryTaskId:(id)arg1 callbackPerformer:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)retryTaskId:(id)arg1;
- (void)addTask:(id)arg1;
- (id)mediaSendTaskWithConfiguration:(id)arg1 taskType:(unsigned long long)arg2;
- (id)mediaSendTaskWithEphemeralMedia:(id)arg1 configuration:(id)arg2;
- (id)mediaSendTaskWithUploadableChatMediaList:(id)arg1 configuration:(id)arg2;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
