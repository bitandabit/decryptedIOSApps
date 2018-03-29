//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSNumber, NSString, NSUUID, SCLagunaContent, SCLagunaContentMetadata, SCLagunaDevice, SCLagunaFirmwareVersion, SCLagunaTransferSession;

@protocol SCLagunaLibraryLogger <NSObject>
- (void)logDebugReport:(NSString *)arg1 deviceId:(NSString *)arg2 firmwareErrorType:(NSString *)arg3 firmwareCrashType:(NSString *)arg4 transferSessionId:(NSString *)arg5 pairingSessionId:(NSString *)arg6 updateSessionId:(NSString *)arg7 firmwareVersion:(NSString *)arg8 hardwareVersion:(NSString *)arg9;
- (void)logDeviceStatusUpdate:(SCLagunaDevice *)arg1 videoCount:(long long)arg2;
- (void)logNrfUnexpectedResponse:(SCLagunaDevice *)arg1 reason:(unsigned long long)arg2;
- (void)logMetadataWithoutUtcWithContentName:(NSString *)arg1 firmwareVersion:(SCLagunaFirmwareVersion *)arg2;
- (void)logMissingMetadataForContentName:(NSString *)arg1 firmwareVersion:(SCLagunaFirmwareVersion *)arg2;
- (void)logBleDisconnected:(SCLagunaDevice *)arg1 deviceConnectionState:(long long)arg2 disconnectReason:(long long)arg3;
- (void)logDeviceWifiThrottled:(SCLagunaDevice *)arg1 transferBatchId:(NSUUID *)arg2;
- (void)logBluetoothOverloadWithDevice:(SCLagunaDevice *)arg1;
- (void)logProgressMonitorTripped:(long long)arg1 device:(SCLagunaDevice *)arg2;
- (void)logDeviceUnpaired:(SCLagunaDevice *)arg1 reason:(unsigned long long)arg2;
- (void)logCorruptContent:(NSString *)arg1 corruptionSource:(unsigned long long)arg2;
- (void)logSingleTransferWithTransferBatchId:(NSString *)arg1 contentName:(NSString *)arg2 transferChannel:(NSString *)arg3 deviceBatteryAtEnd:(NSNumber *)arg4 timeOfTransferEndUtc:(NSDate *)arg5 deviceID:(NSString *)arg6 isCharging:(_Bool)arg7 deviceStorage:(NSNumber *)arg8 firmwareVersion:(SCLagunaFirmwareVersion *)arg9 wifiConnectionStatus:(unsigned long long)arg10;
- (void)logTransferFailureWithTransferChannel:(long long)arg1 transferBatchID:(NSUUID *)arg2;
- (void)logTransferInterruptedWithBatchId:(NSString *)arg1 transferChannel:(NSString *)arg2 firmwareVersion:(SCLagunaFirmwareVersion *)arg3 deviceID:(NSString *)arg4 isCharging:(_Bool)arg5 isBurstRequest:(_Bool)arg6 isUsingDataPacket:(_Bool)arg7;
- (void)logTransferChunkWithTransferBatchId:(NSString *)arg1 contentName:(NSString *)arg2 transferChannel:(NSString *)arg3 transferSpeedInKBs:(NSNumber *)arg4 firmwareVersion:(SCLagunaFirmwareVersion *)arg5 deviceId:(NSString *)arg6 isCharging:(_Bool)arg7 wifiConnectionStatus:(unsigned long long)arg8 isBurstRequest:(_Bool)arg9 isUsingDataPacket:(_Bool)arg10;
- (void)logBatchTransferWithBatchId:(NSString *)arg1 deviceStorage:(NSNumber *)arg2 numberOfSdVideoBeingTransferred:(NSNumber *)arg3 numberOfHdVideoBeingTransferred:(NSNumber *)arg4 firmwareVersion:(SCLagunaFirmwareVersion *)arg5 transferChannel:(NSString *)arg6 deviceBatteryAtStart:(NSNumber *)arg7 deviceBatteryAtEnd:(NSNumber *)arg8 timeOfTransferStartUtc:(NSDate *)arg9 timeOfTransferEndUtc:(NSDate *)arg10 deviceID:(NSString *)arg11 isCharging:(_Bool)arg12 bluetoothBootTimeInMs:(NSNumber *)arg13 wifiBootTimeInMs:(NSNumber *)arg14 nordicTemperature:(NSNumber *)arg15 coulombControlTemperature:(NSNumber *)arg16 ambaTemperature:(NSNumber *)arg17 wifiTemperature:(NSNumber *)arg18 temperatureReportUpdateUtc:(NSDate *)arg19 wifiConnectionStatus:(unsigned long long)arg20 transferType:(unsigned long long)arg21 isAutomaticTransfer:(_Bool)arg22;
- (void)logCaptureEventForContent:(SCLagunaContent *)arg1 name:(NSString *)arg2 metadata:(SCLagunaContentMetadata *)arg3;
- (void)logCaptureEventBatch;
- (void)logContentCaptureForSession:(SCLagunaTransferSession *)arg1 metadata:(SCLagunaContentMetadata *)arg2 contentId:(NSString *)arg3;
- (void)logMetadataTransferForSession:(SCLagunaTransferSession *)arg1 timeSinceTransferBegan:(NSNumber *)arg2 fileSize:(long long)arg3 contentId:(NSString *)arg4;
- (void)logFileTransferForSession:(SCLagunaTransferSession *)arg1 timeSinceTransferBegan:(NSNumber *)arg2;
- (void)logTransferSessionInterrupted:(SCLagunaTransferSession *)arg1 reason:(unsigned long long)arg2 sdVideos:(long long)arg3 hdVideos:(long long)arg4 wifiConnectionStatus:(unsigned long long)arg5;
- (void)logTransferSessionFinished:(SCLagunaTransferSession *)arg1 sdVideos:(long long)arg2 hdVideos:(long long)arg3 wifiConnectionStatus:(unsigned long long)arg4;
- (void)logTransferSessionStart:(SCLagunaTransferSession *)arg1 bluetoothBootTimeInMs:(NSNumber *)arg2 wifiBootTimeInMs:(NSNumber *)arg3 wifiConnectionStatus:(unsigned long long)arg4;
@end

