//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCService-Protocol.h"
#import "SCUserSessionScoped-Protocol.h"

@class NSError, NSMutableDictionary, NSString, SCCloudFS, SCCloudSyncOperation, SCCloudSyncRetry, SCCloudSyncStatusListenerAnnouncer, SCDataObjectContext, SCExperimentManager, SCQueuePerformer, SCSentinel;
@protocol SCCloudSyncDataVault, SCCloudSyncFeatureSettingsDataProvider, SCCloudSyncGalleryDataSource, SCCloudSyncLogger, SCCloudSyncSearchIndexer, SCGalleryProfile, SCNetworker, SCObserving;

@interface SCCloudSync : NSObject <SCService, SCUserSessionScoped>
{
    id <SCGalleryProfile> _profile;
    struct mutex _dataVaultMutex;
    CDUnknownBlockType _dataVaultBlock;
    id <SCCloudSyncDataVault> _dataVaultLoaded;
    struct mutex _cloudFSMutex;
    CDUnknownBlockType _cloudFSBlock;
    SCCloudFS *_cloudFSLoaded;
    struct mutex _networkerMutex;
    CDUnknownBlockType _networkerBlock;
    id <SCNetworker> _networkerLoaded;
    struct mutex _loggerMutex;
    CDUnknownBlockType _loggerBlock;
    id <SCCloudSyncLogger> _loggerLoaded;
    struct mutex _experimentManagerMutex;
    CDUnknownBlockType _experimentManagerBlock;
    SCExperimentManager *_experimentManagerLoaded;
    struct mutex _featureSettingsDataProviderMutex;
    CDUnknownBlockType _featureSettingsDataProviderBlock;
    id <SCCloudSyncFeatureSettingsDataProvider> _featureSettingsDataProviderLoaded;
    struct mutex _searchIndexerMutex;
    CDUnknownBlockType _searchIndexerBlock;
    id <SCCloudSyncSearchIndexer> _searchIndexerLoaded;
    struct mutex _galleryDataSourceMutex;
    CDUnknownBlockType _galleryDataSourceBlock;
    id <SCCloudSyncGalleryDataSource> _galleryDataSourceLoaded;
    long long _clientCompatVersion;
    SCDataObjectContext *_dataObjectContext;
    SCCloudSyncRetry *_cloudSyncRetry;
    _Bool _mayUpload;
    _Bool _requiresUpgrade;
    SCQueuePerformer *_performer;
    SCCloudSyncStatusListenerAnnouncer *_announcer;
    NSError *_lastError;
    unsigned long long _clientRetryCount;
    id <SCObserving> _featureSettingsObserveContext;
    SCSentinel *_invalidateSentinel;
    SCCloudSyncOperation *_currentUploadOperation;
    NSMutableDictionary *_entriesDependency;
    _Bool _enableOutOfOrderDeletion;
    _Bool _isBackingUpNow;
    _Bool _syncedFirstPage;
    unsigned long long _status;
}

+ (id)statusString:(unsigned long long)arg1;
+ (id)defaultLongRunningNotifier;
+ (id)defaultImmediateNotifier;
@property _Bool syncedFirstPage; // @synthesize syncedFirstPage=_syncedFirstPage;
@property _Bool isBackingUpNow; // @synthesize isBackingUpNow=_isBackingUpNow;
@property unsigned long long status; // @synthesize status=_status;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)_isInvalidated;
- (void)invalidate;
- (void)_updateDependentGraph:(long long)arg1;
- (void)_skipPendingOperations:(id)arg1 deleteEntryIds:(id)arg2;
- (void)_checkEntryChanges:(id)arg1;
- (_Bool)_shouldInfiniteRetryGCSError:(id)arg1;
- (void)_removeFailedEntry:(id)arg1;
- (void)_getFastlaneOperationSnapshot:(id *)arg1 operation:(id *)arg2;
- (void)_applicationWillEnterForeground;
- (void)_resetBackgroundMediaUploadedStateForSyncOperation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_scheduleBackgroundMediaUploadForOperation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_getAllSnapIdsForOperation:(id)arg1;
- (void)_reExecuteOptimistically:(_Bool)arg1;
- (id)_detectAndResolveConflictsForOperation:(id)arg1;
- (void)_cleanUncommittedChanges;
- (void)_processResyncResponse:(id)arg1 forceRebase:(_Bool)arg2 serviceTerm:(id)arg3;
- (void)_resyncWithServiceTerm:(id)arg1 forceRebase:(_Bool)arg2;
- (void)_resetSeqNumIfNecessary;
- (void)_handleServletPartialError:(id)arg1 requestId:(id)arg2 syncOperation:(id)arg3 syncOperationSnapshot:(id)arg4 retryCount:(long long)arg5 serviceTerm:(id)arg6;
- (void)_uploadWithServiceTerm:(id)arg1;
- (void)_resyncWithTerm:(id)arg1 syncOperation:(id)arg2 retryOperation:(id)arg3 syncOperationSnapshot:(id)arg4;
- (double)_clientRetryBackoffTime:(unsigned long long)arg1;
- (void)_checkBackgroundMediaUploadStatus;
- (void)_checkIfSyncRequiredBeforeTransition:(id)arg1;
- (void)_checkToUploadWithServiceTerm:(id)arg1;
- (_Bool)_shouldSyncOperationRunImmediately:(id)arg1;
- (_Bool)_hasPendingOperations;
- (void)_onOperationFailed:(id)arg1 snapshot:(id)arg2 serviceTerm:(id)arg3;
- (void)_resyncAfterAbortingOperationSnapshot:(id)arg1 serviceTerm:(id)arg2;
- (void)_galleryResyncRequired;
- (void)setIsBackingUpNowAsynchonously:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_transitionToState:(unsigned long long)arg1 serviceTerm:(id)arg2 backOffTimeInMilliseconds:(double)arg3;
- (id)_galleryDataSource;
- (id)_searchIndexer;
- (id)_featureSettingsDataProvider;
- (id)_experimentManager;
- (id)_logger;
- (id)_networker;
- (id)_cloudFS;
- (id)_dataVault;
- (void)runWithServiceTerm:(id)arg1;
- (id)dedicatedQueue;
- (id)_uploadStateNotifier;
- (_Bool)isFullySynced;
- (_Bool)isInitialPageSyncCompleted;
- (void)fetchLastErrorWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)appendOperationAndExecuteOptimistically:(id)arg1 fromFailedEntry:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithProfile:(id)arg1 dataVault:(CDUnknownBlockType)arg2 cloudFS:(CDUnknownBlockType)arg3 networker:(CDUnknownBlockType)arg4 clientCompatVersion:(long long)arg5 dataObjectContext:(id)arg6 featureSettingsDataProvider:(CDUnknownBlockType)arg7 searchIndexer:(CDUnknownBlockType)arg8 galleryDataSource:(CDUnknownBlockType)arg9 experimentManager:(CDUnknownBlockType)arg10 logger:(CDUnknownBlockType)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

