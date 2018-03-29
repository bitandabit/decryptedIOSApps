//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CBPeripheralDelegate-Protocol.h"
#import "NSCoding-Protocol.h"
#import "SCLagunaBleMonitorDelegate-Protocol.h"
#import "SCLagunaBluetoothMonitorDelegate-Protocol.h"
#import "SCLagunaPeripheralDelegate-Protocol.h"
#import "SCLagunaWifiMonitorDelegate-Protocol.h"

@class NSData, NSDate, NSMutableArray, NSNumber, NSString, NSUUID, SCLagunaAmbaWatchdog, SCLagunaBleMonitor, SCLagunaBluetoothMonitor, SCLagunaContentStore, SCLagunaDeviceEventListenerAnnouncer, SCLagunaDeviceProgressMonitor, SCLagunaFirmwareUpdater, SCLagunaFirmwareVersion, SCLagunaHardwareVersion, SCLagunaTaskQueue, SCLagunaWifiMonitor, SCWeakTimer;
@protocol SCLagunaLibraryLogger, SCLagunaNetworkClient, SCLagunaPeripheral, SCPerforming;

@interface SCLagunaDevice : NSObject <CBPeripheralDelegate, SCLagunaPeripheralDelegate, NSCoding, SCLagunaBleMonitorDelegate, SCLagunaBluetoothMonitorDelegate, SCLagunaWifiMonitorDelegate>
{
    _Bool _hasSpaceToRecord;
    _Bool _hasReconciledContentList;
    _Bool _detectedBluetoothOverloadError;
    _Bool _charging;
    _Bool _hasChargingInfo;
    _Bool _everConnectedToWifi;
    _Bool _hevcEnabled;
    NSString *_serialNumber;
    NSString *_displayName;
    SCLagunaFirmwareVersion *_firmwareVersion;
    SCLagunaHardwareVersion *_hardwareVersion;
    NSNumber *_voltageLevel;
    NSNumber *_storageLevel;
    long long _deviceNumber;
    long long _color;
    long long _firstPairedTimestamp;
    long long _lastPairedStatusUpdatedTimestamp;
    long long _lastNameUpdatedTimestamp;
    long long _nordicTemperature;
    long long _ambaTemperature;
    long long _wifiTemperature;
    NSDate *_lastTemperatureReportTime;
    NSNumber *_batteryLevel;
    id <SCPerforming> _performer;
    SCWeakTimer *_deviceUpdateTimer;
    SCWeakTimer *_connectionTimer;
    SCWeakTimer *_encryptionTimer;
    SCWeakTimer *_transitionTimer;
    SCLagunaBleMonitor *_bleMonitor;
    SCLagunaBluetoothMonitor *_bluetoothMonitor;
    SCLagunaWifiMonitor *_wifiMonitor;
    NSString *_ssidPassword;
    long long _transferDisabledReason;
    SCLagunaDeviceProgressMonitor *_progressMonitor;
    NSMutableArray *_responseMonitors;
    SCLagunaContentStore *_contentStore;
    SCLagunaDeviceEventListenerAnnouncer *_deviceAnnouncer;
    id <SCLagunaPeripheral> _peripheral;
    SCLagunaTaskQueue *_taskQueue;
    NSString *_shortDisplayName;
    NSData *_encryptionKey;
    long long _state;
    long long _btConnectionReason;
    NSUUID *_identifier;
    NSNumber *_mockBatteryLevel;
    long long _mockCoulombCounterTemperature;
    id <SCLagunaLibraryLogger> _analyticsLogger;
    long long _numberOfConnectionAttempts;
    long long _lastMediaCountSeenInResponse;
    long long _lastMediaCount;
    unsigned long long _lastConnectionFailureReason;
    long long _coulombCounterTemperature;
    NSString *_wifiName;
    NSString *_wifiPassword;
    NSString *_deviceIpAddress;
    SCLagunaFirmwareUpdater *_firmwareUpdater;
    SCLagunaAmbaWatchdog *_ambaWatchdog;
    long long _capabilities;
    id <SCLagunaNetworkClient> _cachedBluetoothClient;
}

+ (id)deviceColorToString:(long long)arg1;
+ (id)emojiForDeviceNumber:(long long)arg1;
+ (id)_emojis;
+ (id)mockDevice;
@property(retain, nonatomic) id <SCLagunaNetworkClient> cachedBluetoothClient; // @synthesize cachedBluetoothClient=_cachedBluetoothClient;
@property(nonatomic) _Bool hevcEnabled; // @synthesize hevcEnabled=_hevcEnabled;
@property(readonly, nonatomic) long long capabilities; // @synthesize capabilities=_capabilities;
@property(nonatomic) _Bool everConnectedToWifi; // @synthesize everConnectedToWifi=_everConnectedToWifi;
@property(retain, nonatomic) SCLagunaAmbaWatchdog *ambaWatchdog; // @synthesize ambaWatchdog=_ambaWatchdog;
@property(retain, nonatomic) SCLagunaFirmwareUpdater *firmwareUpdater; // @synthesize firmwareUpdater=_firmwareUpdater;
@property(copy, nonatomic) NSString *deviceIpAddress; // @synthesize deviceIpAddress=_deviceIpAddress;
@property(copy, nonatomic) NSString *wifiPassword; // @synthesize wifiPassword=_wifiPassword;
@property(copy, nonatomic) NSString *wifiName; // @synthesize wifiName=_wifiName;
@property(nonatomic) long long coulombCounterTemperature; // @synthesize coulombCounterTemperature=_coulombCounterTemperature;
@property(nonatomic) unsigned long long lastConnectionFailureReason; // @synthesize lastConnectionFailureReason=_lastConnectionFailureReason;
@property(nonatomic) long long lastMediaCount; // @synthesize lastMediaCount=_lastMediaCount;
@property(nonatomic) long long lastMediaCountSeenInResponse; // @synthesize lastMediaCountSeenInResponse=_lastMediaCountSeenInResponse;
@property(nonatomic) long long numberOfConnectionAttempts; // @synthesize numberOfConnectionAttempts=_numberOfConnectionAttempts;
@property(nonatomic) __weak id <SCLagunaLibraryLogger> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(nonatomic) long long mockCoulombCounterTemperature; // @synthesize mockCoulombCounterTemperature=_mockCoulombCounterTemperature;
@property(retain, nonatomic) NSNumber *mockBatteryLevel; // @synthesize mockBatteryLevel=_mockBatteryLevel;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long btConnectionReason; // @synthesize btConnectionReason=_btConnectionReason;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSData *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
@property(copy, nonatomic) NSString *shortDisplayName; // @synthesize shortDisplayName=_shortDisplayName;
@property(retain, nonatomic) SCLagunaTaskQueue *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(retain, nonatomic) id <SCLagunaPeripheral> peripheral; // @synthesize peripheral=_peripheral;
@property(retain, nonatomic) SCLagunaDeviceEventListenerAnnouncer *deviceAnnouncer; // @synthesize deviceAnnouncer=_deviceAnnouncer;
@property(retain, nonatomic) SCLagunaContentStore *contentStore; // @synthesize contentStore=_contentStore;
@property(retain, nonatomic) NSMutableArray *responseMonitors; // @synthesize responseMonitors=_responseMonitors;
@property(retain, nonatomic) SCLagunaDeviceProgressMonitor *progressMonitor; // @synthesize progressMonitor=_progressMonitor;
@property(nonatomic) long long transferDisabledReason; // @synthesize transferDisabledReason=_transferDisabledReason;
@property(copy, nonatomic) NSString *ssidPassword; // @synthesize ssidPassword=_ssidPassword;
@property(retain, nonatomic) SCLagunaWifiMonitor *wifiMonitor; // @synthesize wifiMonitor=_wifiMonitor;
@property(retain, nonatomic) SCLagunaBluetoothMonitor *bluetoothMonitor; // @synthesize bluetoothMonitor=_bluetoothMonitor;
@property(retain, nonatomic) SCLagunaBleMonitor *bleMonitor; // @synthesize bleMonitor=_bleMonitor;
@property(retain, nonatomic) SCWeakTimer *transitionTimer; // @synthesize transitionTimer=_transitionTimer;
@property(retain, nonatomic) SCWeakTimer *encryptionTimer; // @synthesize encryptionTimer=_encryptionTimer;
@property(retain, nonatomic) SCWeakTimer *connectionTimer; // @synthesize connectionTimer=_connectionTimer;
@property(retain, nonatomic) SCWeakTimer *deviceUpdateTimer; // @synthesize deviceUpdateTimer=_deviceUpdateTimer;
@property(retain, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
@property(retain, nonatomic) NSNumber *batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(nonatomic) _Bool hasChargingInfo; // @synthesize hasChargingInfo=_hasChargingInfo;
@property(nonatomic, getter=isCharging) _Bool charging; // @synthesize charging=_charging;
@property(nonatomic) _Bool detectedBluetoothOverloadError; // @synthesize detectedBluetoothOverloadError=_detectedBluetoothOverloadError;
@property(nonatomic) _Bool hasReconciledContentList; // @synthesize hasReconciledContentList=_hasReconciledContentList;
@property(retain, nonatomic) NSDate *lastTemperatureReportTime; // @synthesize lastTemperatureReportTime=_lastTemperatureReportTime;
@property(nonatomic) long long wifiTemperature; // @synthesize wifiTemperature=_wifiTemperature;
@property(nonatomic) long long ambaTemperature; // @synthesize ambaTemperature=_ambaTemperature;
@property(nonatomic) long long nordicTemperature; // @synthesize nordicTemperature=_nordicTemperature;
@property(nonatomic) long long lastNameUpdatedTimestamp; // @synthesize lastNameUpdatedTimestamp=_lastNameUpdatedTimestamp;
@property(nonatomic) long long lastPairedStatusUpdatedTimestamp; // @synthesize lastPairedStatusUpdatedTimestamp=_lastPairedStatusUpdatedTimestamp;
@property(nonatomic) long long firstPairedTimestamp; // @synthesize firstPairedTimestamp=_firstPairedTimestamp;
@property(nonatomic) long long color; // @synthesize color=_color;
@property(nonatomic) long long deviceNumber; // @synthesize deviceNumber=_deviceNumber;
@property(nonatomic) _Bool hasSpaceToRecord; // @synthesize hasSpaceToRecord=_hasSpaceToRecord;
@property(retain, nonatomic) NSNumber *storageLevel; // @synthesize storageLevel=_storageLevel;
@property(retain, nonatomic) NSNumber *voltageLevel; // @synthesize voltageLevel=_voltageLevel;
@property(retain, nonatomic) SCLagunaHardwareVersion *hardwareVersion; // @synthesize hardwareVersion=_hardwareVersion;
@property(retain, nonatomic) SCLagunaFirmwareVersion *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
- (void).cxx_destruct;
- (void)_checkCapabilities;
- (_Bool)supportsHevc;
- (_Bool)supportsHomeWiFi;
- (_Bool)supportsProtectedWifi;
- (_Bool)supportsAutomaticStartAsNeededDeletion;
- (_Bool)supportsTaskBatching;
- (_Bool)supportsBatchRequests;
- (_Bool)supportsPsychomantis;
- (_Bool)allowsPassiveUpdates;
- (void)peripheralOnError:(id)arg1;
- (void)peripheralDidReceiveEncryptionResponse:(id)arg1;
- (void)peripheralDidReceiveResponse:(id)arg1;
- (void)peripheralDidOpenStream;
- (void)peripheralRequiresEncryptionSetup;
- (void)addDeviceLogsRequest:(CDUnknownBlockType)arg1;
- (void)_addRefreshContentRequest;
- (void)addRefreshContentRequestIfNecessary;
- (void)firmwareUpdaterSendRequest:(id)arg1;
- (void)firmwareUploadTaskDidFail;
- (void)firmwareUploadTaskDidSucceed;
- (void)requestLastCloudUploadTime;
- (void)setWifiAPList:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)requestWifiAPList;
- (void)sendAuthzCode:(id)arg1 codeVerifier:(id)arg2 redirectUri:(id)arg3;
- (void)requestClientId;
- (void)cancelShareWifiCredentials;
- (void)shareWifiCredentials;
- (void)contentListReconciled;
- (void)reset;
- (void)unpairWithReason:(unsigned long long)arg1;
- (void)removeCorruptContent:(id)arg1;
- (void)_adoptBabyDevice:(id)arg1;
- (void)adoptBabyDevice:(id)arg1;
- (void)setTransferDisabled:(_Bool)arg1 forReason:(long long)arg2;
- (_Bool)_transferDisabled;
- (void)setPeripheralDisplayName;
- (void)clearCrashReport;
- (void)requestCrashReport;
- (void)resetConnectionTimer;
- (void)ambaWatchdogKick;
- (void)requestWiFiDisconnection;
- (void)requestWiFiConnectionWithSsidPassword:(id)arg1;
- (void)requestBluetoothDisconnection;
- (void)requestBluetoothConnection:(long long)arg1;
- (void)_transitionToState:(long long)arg1;
- (void)_transitionToState:(long long)arg1 afterRequest:(id)arg2 afterTime:(double)arg3;
- (void)_transitionToState:(long long)arg1 afterTime:(double)arg2;
- (void)_transitionToStateTimeoutComplete:(id)arg1;
- (unsigned long long)_handleDeviceStatus:(id)arg1;
- (_Bool)_handleMediaCount:(long long)arg1;
- (void)_handleAmbaCrashed;
- (_Bool)_crashDetectedInResponse:(id)arg1;
- (void)_handleResponse:(id)arg1;
- (void)_passMonitorsResponse:(id)arg1;
- (void)_addResponseMonitorWithHandler:(CDUnknownBlockType)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3 timeoutBlock:(CDUnknownBlockType)arg4;
- (void)prepShippingStateWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)clearContentWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)_sendDeviceReset;
- (void)_sendDeviceUpdateRequest;
- (void)_sendDeviceInfoRequest;
- (void)_sendStopBTRequest;
- (void)_sendStartBTRequest;
- (id)_myUUID;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationWillTerminateNotification:(id)arg1;
- (void)_stopEncryptionSetupTimer;
- (void)_startEncryptionSetupTimer;
- (void)_stopConnectionTimeout;
- (void)_startConnectionTimeout;
- (void)_connectionDidTimeout;
- (void)_stopDeviceUpdates;
- (void)_startDeviceUpdates;
- (id)_displayNameBLE;
- (id)_displayNameWiFi;
- (id)_displayNameBT;
- (_Bool)wifiHasDeviceReliableWiFiNotification;
- (void)wifiDidDisconnect;
- (void)wifiDidConnect:(id)arg1;
- (void)wifiDidBoot;
- (void)wifiMonitorSendRequest:(id)arg1;
- (void)bluetoothDetectedOverload;
- (void)bluetoothNeedsPicker;
- (void)bluetoothDidDisconnect:(id)arg1;
- (void)bluetoothDidConnect:(id)arg1;
- (void)bleMonitor:(id)arg1 didDisconnectPeripheral:(id)arg2 reason:(long long)arg3;
- (void)bleMonitor:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)bleMonitor:(id)arg1 didFindPeripheral:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)wifiBooted;
- (void)switchToHomeWifi:(id)arg1 wifiPassword:(id)arg2;
- (id)undownloadedHdContent;
- (_Bool)hasHdContentToDownload;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (void)setupContentWithCache:(id)arg1;
- (void)setupWithCentralManager:(id)arg1 analyticsLogger:(id)arg2 progressMonitor:(id)arg3;
- (id)initWithBabyDevice:(id)arg1;
- (id)initWithSerialNumber:(id)arg1 displayName:(id)arg2 color:(long long)arg3 firstPairedTimestamp:(long long)arg4 lastPairedStatusUpdatedTimestamp:(long long)arg5 lastNameUpdatedTimestamp:(long long)arg6 deviceNumber:(long long)arg7 firmwareVersion:(id)arg8 hardwareVersion:(id)arg9;
- (id)init;
- (_Bool)tryingToConnectWiFi;
- (_Bool)tryingToConnectBTForContentTransfer;
- (_Bool)tryingToConnectBTDeviceRecording;
- (_Bool)tryingToConnectBT;
- (_Bool)connectedOverWiFi;
- (_Bool)connectedOverBT;
- (_Bool)connectedOverBLE;
- (_Bool)connectedOverBTOrWiFi;
- (_Bool)connectedOverBLEOrWiFi;
- (_Bool)isUnpaired;
- (id)displayNameWithoutEmoji;
- (id)emoji;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
