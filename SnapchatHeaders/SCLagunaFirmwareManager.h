//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCLagunaEventListener-Protocol.h"
#import "SCLagunaFirmwareDownloaderDelegate-Protocol.h"
#import "SCLagunaFirmwareTagStoreDelegate-Protocol.h"

@class NSDate, NSMutableSet, NSString, SCLagunaDevice, SCLagunaFirmwareDownloader, SCLagunaFirmwareTagStore, SCLagunaFirmwareUpdateEventListenerAnnouncer, SCLagunaFirmwareVersion, SCLagunaManager, SCSessionRequestManager;
@protocol SCLagunaAppLogger, SCLagunaManiphestAdapter, SCPerforming;

@interface SCLagunaFirmwareManager : NSObject <SCLagunaFirmwareDownloaderDelegate, SCLagunaEventListener, SCLagunaFirmwareTagStoreDelegate>
{
    id <SCPerforming> _performer;
    SCLagunaManager *_lagunaManager;
    id <SCLagunaAppLogger> _analyticsLogger;
    id <SCLagunaManiphestAdapter> _maniphestAdapter;
    SCLagunaFirmwareDownloader *_firmwareDownloader;
    SCLagunaFirmwareTagStore *_tagStore;
    SCSessionRequestManager *_requestManager;
    SCLagunaDevice *_targetDevice;
    unsigned long long _currentState;
    unsigned long long _currentUpdateProgress;
    NSString *_sessionId;
    SCLagunaFirmwareVersion *_newFirmwareVersion;
    SCLagunaFirmwareVersion *_oldFirmwareVersion;
    NSString *_newFirmwareHash;
    unsigned long long _numRevertDevice;
    _Bool _deviceStartedRebooting;
    _Bool _updateIsActive;
    NSDate *_updateStartedDate;
    NSDate *_updateDownloadedDate;
    NSDate *_updateTransferredDate;
    NSMutableSet *_passiveUpdatedDevices;
    SCLagunaFirmwareUpdateEventListenerAnnouncer *_eventAnnouncer;
}

+ (long long)requiredBatteryLevelForFirmwareUpdate:(id)arg1;
+ (_Bool)deviceHasEnoughBatteryForFirmwareUpdate:(id)arg1;
@property(retain, nonatomic) SCLagunaFirmwareUpdateEventListenerAnnouncer *eventAnnouncer; // @synthesize eventAnnouncer=_eventAnnouncer;
- (void).cxx_destruct;
- (void)_logFirmwareUpdateFinished:(_Bool)arg1 error:(id)arg2;
- (void)_logFirmwareUpdateScheduled;
- (void)_logFirmwareUpdateFailure:(id)arg1 userInfo:(id)arg2 updateIsActive:(_Bool)arg3;
- (void)_logFirmwareUpdateFailure:(id)arg1;
- (void)_logFirmwareUpdateSuccessWithUserInfo:(id)arg1 updateIsActive:(_Bool)arg2;
- (void)_logFirmwareUpdateSuccess;
- (id)_analyticsUserInfo;
- (unsigned long long)_updateStateForManagerState:(unsigned long long)arg1;
- (_Bool)_targetDeviceDownloadingOrTransferring;
- (_Bool)_targetDeviceActivelyUpdating;
- (_Bool)_hasValidUpdateParameters;
- (id)_firmwareFilePath;
- (void)_attemptRemoveFirmwareFile;
- (void)_attemptFlashUpdate;
- (void)_startUpdatingPatch;
- (void)_startDownloadingPatch;
- (void)_startCheckingForUpdate:(id)arg1;
- (void)_revertFirmwareBinary;
- (void)_startPrepareUpdateFailureTimer;
- (void)_startCheckingUpdateFailureTimer;
- (void)_startTransferUpdateFailureTimer;
- (void)_startPatchUpdateFailureTimer;
- (void)_startProgressTimer;
- (void)_transitionToState:(unsigned long long)arg1;
- (void)_succeedCurrentUpdate;
- (void)_failCurrentUpdate:(unsigned long long)arg1;
- (id)_updateWindowStart;
- (double)_updateWindowDuration;
- (void)lagunaOnDeviceFirmwareScheduledUpdateCompleted:(id)arg1 userInfo:(id)arg2 error:(id)arg3;
- (void)lagunaOnDeviceFirmwareUpdate:(id)arg1 updateType:(unsigned long long)arg2 progress:(float)arg3;
- (void)lagunaOnDeviceFirmwareDigestFetched:(id)arg1 digest:(id)arg2;
- (void)lagunaOnDeviceInfoUpdate:(id)arg1 updateType:(unsigned long long)arg2;
- (void)lagunaOnDeviceStateUpdate:(id)arg1;
- (void)lagunaOnDevicePaired:(id)arg1;
- (void)firmwareDownloader:(id)arg1 didDownloadFirmware:(id)arg2 filePath:(id)arg3 downloadUpdateSucceeded:(_Bool)arg4;
- (void)firmwareDownloader:(id)arg1 didFetchMetadata:(id)arg2 hasNewVersion:(_Bool)arg3 checkUpdateSucceeded:(_Bool)arg4;
- (void)_showMetadataFetchFailureMessage:(id)arg1 errorDescription:(id)arg2;
- (void)tagStoreDidFailFetchingLatestVersion:(id)arg1;
- (void)tagStoreDidFetchLatestVersion:(id)arg1;
- (void)showUpdateAlertForDevice:(id)arg1;
- (_Bool)updateRequiredForDevice:(id)arg1;
- (_Bool)updateAvailableForDevice:(id)arg1;
- (void)_prefetchNewFirmwareVersion;
- (void)_startPassiveUpdates;
- (void)_startUpdatingDevice:(id)arg1 updateIsActive:(_Bool)arg2;
- (id)_activeAnnouncer;
- (void)prefetchNewFirmwareVersion;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (_Bool)startUpdatingDevice:(id)arg1;
- (_Bool)checkUpdateForDevice:(id)arg1;
- (id)updateFirmwareVersionForDevice:(id)arg1;
- (unsigned long long)updateProgressForDevice:(id)arg1;
- (unsigned long long)stateForDevice:(id)arg1;
- (void)dealloc;
- (id)initWithRequestManager:(id)arg1 lagunaManager:(id)arg2 analyticsLogger:(id)arg3 maniphestAdapter:(id)arg4;
- (void)mockSpectaclesFirmwareUpdateFailure;
- (void)mockSpectaclesFirmwareUpdateSuccess;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

