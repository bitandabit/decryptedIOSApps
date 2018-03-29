//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface SOJUIdentityLagunaLagunaRealTimeEventBuilder : NSObject
{
    NSString *_eventName;
    NSString *_userId;
    NSString *_sessionId;
    NSString *_pairingSessionId;
    NSString *_userInitiationPage;
    NSString *_pairingType;
    NSNumber *_otherPairedDeviceCount;
    NSNumber *_durationInMs;
    NSString *_nordicLastBootSession;
    NSString *_deviceId;
    NSNumber *_deviceBattery;
    NSString *_bleUuid;
    NSNumber *_bleConnected;
    NSNumber *_timeOfCapture;
    NSString *_contentName;
    NSNumber *_hdVideoFileSize;
    NSString *_hdVideoFileName;
    NSNumber *_sdVideoFileSize;
    NSString *_sdVideoFileName;
    NSNumber *_thumbnailFileSize;
    NSString *_thumbnailFileName;
    NSString *_firmwareVersion;
    NSNumber *_ambientLightIntensity;
    NSNumber *_deviceBatteryAtStart;
    NSNumber *_deviceBatteryAtEnd;
    NSNumber *_ambaTemperature;
    NSNumber *_nordicTemperature;
    NSString *_buttonPressType;
    NSNumber *_deviceStorage;
    NSString *_transferBatchId;
    NSNumber *_dataResponseSize;
    NSNumber *_numberOfSdVideoBeingTransferred;
    NSNumber *_numberOfHdVideoBeingTransferred;
    NSNumber *_totalFileSizeTransferred;
    NSString *_transferChannel;
    NSNumber *_timeOfTransferStartUtc;
    NSNumber *_timeOfTransferEndUtc;
    NSNumber *_bluetoothBootTimeInMs;
    NSNumber *_wifiBootTimeInMs;
    NSString *_updateSessionId;
    NSString *_failureReason;
    NSNumber *_transferDurationInMs;
    NSNumber *_downloadDurationInMs;
    NSNumber *_updateDurationInMs;
}

+ (id)withJUIdentityLagunaLagunaRealTimeEvent:(id)arg1;
- (void).cxx_destruct;
- (id)setUpdateDurationInMs:(id)arg1;
- (id)setDownloadDurationInMs:(id)arg1;
- (id)setTransferDurationInMs:(id)arg1;
- (id)setFailureReason:(id)arg1;
- (id)setUpdateSessionId:(id)arg1;
- (id)setWifiBootTimeInMs:(id)arg1;
- (id)setBluetoothBootTimeInMs:(id)arg1;
- (id)setTimeOfTransferEndUtc:(id)arg1;
- (id)setTimeOfTransferStartUtc:(id)arg1;
- (id)setTransferChannel:(id)arg1;
- (id)setTotalFileSizeTransferred:(id)arg1;
- (id)setNumberOfHdVideoBeingTransferred:(id)arg1;
- (id)setNumberOfSdVideoBeingTransferred:(id)arg1;
- (id)setDataResponseSize:(id)arg1;
- (id)setTransferBatchId:(id)arg1;
- (id)setDeviceStorage:(id)arg1;
- (id)setButtonPressType:(id)arg1;
- (id)setNordicTemperature:(id)arg1;
- (id)setAmbaTemperature:(id)arg1;
- (id)setDeviceBatteryAtEnd:(id)arg1;
- (id)setDeviceBatteryAtStart:(id)arg1;
- (id)setAmbientLightIntensity:(id)arg1;
- (id)setFirmwareVersion:(id)arg1;
- (id)setThumbnailFileName:(id)arg1;
- (id)setThumbnailFileSize:(id)arg1;
- (id)setSdVideoFileName:(id)arg1;
- (id)setSdVideoFileSize:(id)arg1;
- (id)setHdVideoFileName:(id)arg1;
- (id)setHdVideoFileSize:(id)arg1;
- (id)setContentName:(id)arg1;
- (id)setTimeOfCapture:(id)arg1;
- (id)setBleConnected:(id)arg1;
- (id)setBleUuid:(id)arg1;
- (id)setDeviceBattery:(id)arg1;
- (id)setDeviceId:(id)arg1;
- (id)setNordicLastBootSession:(id)arg1;
- (id)setDurationInMs:(id)arg1;
- (id)setOtherPairedDeviceCount:(id)arg1;
- (id)setPairingType:(id)arg1;
- (id)setUserInitiationPage:(id)arg1;
- (id)setPairingSessionId:(id)arg1;
- (id)setSessionId:(id)arg1;
- (id)setUserId:(id)arg1;
- (id)setEventName:(id)arg1;
- (id)build;
- (id)setUpdateDurationInMsValue:(long long)arg1;
- (id)setDownloadDurationInMsValue:(long long)arg1;
- (id)setTransferDurationInMsValue:(long long)arg1;
- (id)setWifiBootTimeInMsValue:(long long)arg1;
- (id)setBluetoothBootTimeInMsValue:(long long)arg1;
- (id)setTimeOfTransferEndUtcValue:(long long)arg1;
- (id)setTimeOfTransferStartUtcValue:(long long)arg1;
- (id)setTotalFileSizeTransferredValue:(int)arg1;
- (id)setNumberOfHdVideoBeingTransferredValue:(int)arg1;
- (id)setNumberOfSdVideoBeingTransferredValue:(int)arg1;
- (id)setDataResponseSizeValue:(long long)arg1;
- (id)setDeviceStorageValue:(long long)arg1;
- (id)setNordicTemperatureValue:(int)arg1;
- (id)setAmbaTemperatureValue:(int)arg1;
- (id)setDeviceBatteryAtEndValue:(long long)arg1;
- (id)setDeviceBatteryAtStartValue:(long long)arg1;
- (id)setAmbientLightIntensityValue:(int)arg1;
- (id)setThumbnailFileSizeValue:(long long)arg1;
- (id)setSdVideoFileSizeValue:(long long)arg1;
- (id)setHdVideoFileSizeValue:(long long)arg1;
- (id)setTimeOfCaptureValue:(long long)arg1;
- (id)setBleConnectedValue:(_Bool)arg1;
- (id)setDeviceBatteryValue:(int)arg1;
- (id)setDurationInMsValue:(long long)arg1;
- (id)setOtherPairedDeviceCountValue:(int)arg1;
- (id)setEventNameEnum:(long long)arg1;

@end

