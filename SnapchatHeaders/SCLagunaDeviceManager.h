//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCLagunaDeviceEventListener-Protocol.h"
#import "SCLagunaDeviceStoreDelegate-Protocol.h"
#import "SCLagunaNetworkClientDelegate-Protocol.h"
#import "SCLagunaTaskManagerDelegate-Protocol.h"

@class NSDate, NSString, SCLagunaCache, SCLagunaDevice, SCLagunaDeviceManagerIdleWatch, SCLagunaDeviceStore, SCLagunaEventListenerAnnouncer, SCLagunaMutableTransferSession, SCLagunaTaskManager, SCQueuePerformer, SCWeakTimer;
@protocol SCLagunaLibraryLogger, SCLagunaNetworkClient, SCLagunaProfile;

@interface SCLagunaDeviceManager : NSObject <SCLagunaDeviceEventListener, SCLagunaNetworkClientDelegate, SCLagunaTaskManagerDelegate, SCLagunaDeviceStoreDelegate>
{
    _Bool _disableBluetooth;
    _Bool _malibuEnabled;
    _Bool _hdOnlyEnabled;
    _Bool _hevcEnabled;
    _Bool _savePictureToCameraRoll;
    _Bool _enteredSpecsTabDuringTransfer;
    unsigned long long _state;
    id <SCLagunaProfile> _profile;
    SCLagunaCache *_cache;
    SCLagunaTaskManager *_taskManager;
    SCLagunaMutableTransferSession *_transferSession;
    SCLagunaDeviceStore *_deviceStore;
    SCLagunaDevice *_selectedWifiDevice;
    NSString *_selectedWifiDeviceSsidPassword;
    SCLagunaDevice *_previousDevice;
    SCLagunaDevice *_selectedDevice;
    SCQueuePerformer *_performer;
    id <SCLagunaNetworkClient> _bluetoothClient;
    id <SCLagunaNetworkClient> _wifiClient;
    long long _wifiRestartCount;
    SCWeakTimer *_connectionWatchdogTimer;
    SCLagunaEventListenerAnnouncer *_announcer;
    SCLagunaDeviceManagerIdleWatch *_idleWatch;
    id <SCLagunaLibraryLogger> _analyticsLogger;
    NSDate *_connectionAttemptStartDate;
    long long _backgroundDownloadCount;
    unsigned long long _currentContext;
    unsigned long long _recordingDuringWifiCount;
}

+ (long long)_reasonForBTConnectionForTask:(id)arg1;
@property(nonatomic) _Bool enteredSpecsTabDuringTransfer; // @synthesize enteredSpecsTabDuringTransfer=_enteredSpecsTabDuringTransfer;
@property(nonatomic) _Bool savePictureToCameraRoll; // @synthesize savePictureToCameraRoll=_savePictureToCameraRoll;
@property(nonatomic) _Bool hevcEnabled; // @synthesize hevcEnabled=_hevcEnabled;
@property(nonatomic) _Bool hdOnlyEnabled; // @synthesize hdOnlyEnabled=_hdOnlyEnabled;
@property(nonatomic) _Bool malibuEnabled; // @synthesize malibuEnabled=_malibuEnabled;
@property(nonatomic) unsigned long long recordingDuringWifiCount; // @synthesize recordingDuringWifiCount=_recordingDuringWifiCount;
@property(nonatomic) unsigned long long currentContext; // @synthesize currentContext=_currentContext;
@property(nonatomic) long long backgroundDownloadCount; // @synthesize backgroundDownloadCount=_backgroundDownloadCount;
@property(retain, nonatomic) NSDate *connectionAttemptStartDate; // @synthesize connectionAttemptStartDate=_connectionAttemptStartDate;
@property(retain, nonatomic) id <SCLagunaLibraryLogger> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(retain, nonatomic) SCLagunaDeviceManagerIdleWatch *idleWatch; // @synthesize idleWatch=_idleWatch;
@property(nonatomic) __weak SCLagunaEventListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
@property(retain, nonatomic) SCWeakTimer *connectionWatchdogTimer; // @synthesize connectionWatchdogTimer=_connectionWatchdogTimer;
@property(nonatomic) long long wifiRestartCount; // @synthesize wifiRestartCount=_wifiRestartCount;
@property(retain, nonatomic) id <SCLagunaNetworkClient> wifiClient; // @synthesize wifiClient=_wifiClient;
@property(retain, nonatomic) id <SCLagunaNetworkClient> bluetoothClient; // @synthesize bluetoothClient=_bluetoothClient;
@property(retain, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
@property(retain, nonatomic) SCLagunaDevice *selectedDevice; // @synthesize selectedDevice=_selectedDevice;
@property(retain, nonatomic) SCLagunaDevice *previousDevice; // @synthesize previousDevice=_previousDevice;
@property(copy, nonatomic) NSString *selectedWifiDeviceSsidPassword; // @synthesize selectedWifiDeviceSsidPassword=_selectedWifiDeviceSsidPassword;
@property(retain, nonatomic) SCLagunaDevice *selectedWifiDevice; // @synthesize selectedWifiDevice=_selectedWifiDevice;
@property(retain, nonatomic) SCLagunaDeviceStore *deviceStore; // @synthesize deviceStore=_deviceStore;
@property(retain, nonatomic) SCLagunaMutableTransferSession *transferSession; // @synthesize transferSession=_transferSession;
@property(retain, nonatomic) SCLagunaTaskManager *taskManager; // @synthesize taskManager=_taskManager;
@property(retain, nonatomic) SCLagunaCache *cache; // @synthesize cache=_cache;
@property(nonatomic) __weak id <SCLagunaProfile> profile; // @synthesize profile=_profile;
@property(nonatomic) _Bool disableBluetooth; // @synthesize disableBluetooth=_disableBluetooth;
- (void).cxx_destruct;
- (void)_logTransferInterruptWithReason:(unsigned long long)arg1;
- (void)_logTransferFinished;
- (void)networkClientDidTimeOut:(id)arg1;
- (void)networkClientDidBecomeActive:(id)arg1;
- (void)networkClientDidCompleteRequest:(id)arg1;
- (void)networkClient:(id)arg1 didReceiveNetworkResponse:(id)arg2;
- (void)networkClient:(id)arg1 didError:(id)arg2;
- (void)deviceStoreDidClearDevices;
- (void)deviceStore:(id)arg1 didAddDevice:(id)arg2;
- (void)_disconnectWiFi:(id)arg1;
- (void)_disconnectBT:(id)arg1;
- (void)_updateDeviceManagerForDeviceUpdate:(id)arg1;
- (void)device:(id)arg1 didMarkCorruptContent:(id)arg2;
- (void)deviceDidRateLimitWifi:(id)arg1;
- (void)deviceDidStartRecording:(id)arg1;
- (void)deviceDidUpdateTaskQueue:(id)arg1;
- (void)device:(id)arg1 didUpdateInfo:(unsigned long long)arg2;
- (void)deviceDidUpdateState:(id)arg1;
- (void)lagunaOnTransferUpdate:(id)arg1 updateType:(unsigned long long)arg2;
- (void)taskManager:(id)arg1 didDownloadContent:(id)arg2 component:(unsigned long long)arg3;
- (void)taskManagerHandledResponse:(id)arg1;
- (void)taskManager:(id)arg1 sawError:(id)arg2;
- (void)taskManagerComplete:(id)arg1;
- (void)taskManager:(id)arg1 sendNetworkRequest:(id)arg2 withDelay:(double)arg3;
- (void)deviceSessionDidEnd;
- (long long)_reasonForBTConnection;
- (void)_stopBluetoothClient;
- (void)_stopClients;
- (void)_endTransferSession;
- (void)_restartWifiClient;
- (void)_startWifiClient;
- (void)_ensureNetworkClientConnected;
- (void)_cancelEnsureTaskManagerConnected;
- (void)_startEnsureTaskManagerConnected;
- (void)_startBluetoothClient;
- (id)_networkClient;
- (void)_handleNetworkConnectionOpen;
- (void)_transitionToState:(unsigned long long)arg1;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)_selectDeviceForDownload;
- (_Bool)_isDeviceBatteryEnoughForTransfer:(unsigned long long)arg1 isCharging:(_Bool)arg2 isActiveTransfer:(_Bool)arg3;
- (_Bool)_isDeviceBatteryTooLowForSelection:(id)arg1 isForegroundedInSpecsTab:(_Bool)arg2;
- (_Bool)_shouldStopTransferringForDevice:(id)arg1 hasEnteredSpecsTabDuringTransfer:(_Bool)arg2 isHDTransfer:(_Bool)arg3;
- (_Bool)_haveRunIntoBackgroundDownloadLimit;
- (_Bool)_shouldSelectDevice:(id)arg1;
- (id)currentTransferSession;
- (_Bool)isContentPartOfCurrentTransferBatch:(id)arg1 component:(unsigned long long)arg2;
- (void)prioritize:(id)arg1 context:(unsigned long long)arg2;
- (void)cancelWifiConnection;
- (void)startConnectingWifiForHDFlow:(id)arg1 ssidPassword:(id)arg2 hdContentUUIDs:(id)arg3 isAutomaticTransfer:(_Bool)arg4;
- (void)dealloc;
- (void)_applicationDidBecomeActive;
- (_Bool)isBackgrounded;
- (_Bool)_isInSpecsTab;
- (id)initWithDeviceStore:(id)arg1 announcer:(id)arg2 cache:(id)arg3 analyticsLogger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
