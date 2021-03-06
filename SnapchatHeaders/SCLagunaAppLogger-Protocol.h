//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSString, NSUUID, SCAppNotification, SCLagunaDevice, SCLagunaFirmwareUpdateUserInfo, SCLagunaFirmwareVersion, SCLagunaGetHdSessionInfo, SCLagunaOnboardingSessionInfo, SCLagunaPairingSessionInfo;

@protocol SCLagunaAppLogger <NSObject>
- (void)logSuccessfullPairingWithDeviceID:(NSString *)arg1 pairingSessionId:(NSString *)arg2;
- (void)logViewTosWithPairingSessionId:(NSString *)arg1;
- (void)logPairingConnecting:(NSDate *)arg1 pairingSessionId:(NSString *)arg2 isProfile:(_Bool)arg3 isBackupPairing:(_Bool)arg4 numOtherPairedDevices:(long long)arg5;
- (void)logPairingAnalyticsEvent:(unsigned long long)arg1 pairingStartTime:(NSDate *)arg2 pairingSessionId:(NSString *)arg3 pairingLocation:(NSString *)arg4;
- (void)logPairingSpecificPageStart:(NSDate *)arg1 pairingSessionId:(NSString *)arg2 bluetoothEnabled:(_Bool)arg3;
- (void)logPairingNeedHelpPressed:(SCLagunaPairingSessionInfo *)arg1;
- (void)logPairingInactiveAlertSupportSiteLinkPressed:(SCLagunaPairingSessionInfo *)arg1;
- (void)logPairingInactiveAlertKeepPairingPressed:(SCLagunaPairingSessionInfo *)arg1;
- (void)logPairingInactiveAlertShown:(SCLagunaPairingSessionInfo *)arg1;
- (void)logPairingCancel:(SCLagunaPairingSessionInfo *)arg1 cancellationSource:(unsigned long long)arg2;
- (void)logPairingRetry:(SCLagunaPairingSessionInfo *)arg1;
- (void)logPairingFailure:(SCLagunaPairingSessionInfo *)arg1 failureReason:(unsigned long long)arg2;
- (void)logPairingSuccessful:(SCLagunaPairingSessionInfo *)arg1;
- (void)logPairingBleSynced:(SCLagunaPairingSessionInfo *)arg1;
- (void)logPairingTermsOfServiceClosed:(SCLagunaPairingSessionInfo *)arg1;
- (void)logPairingTermsOfServiceOpened:(SCLagunaPairingSessionInfo *)arg1;
- (void)logPairingNameChanged:(SCLagunaPairingSessionInfo *)arg1;
- (void)logPairingNameDialogDisplayed:(SCLagunaPairingSessionInfo *)arg1;
- (void)logPairingBleConnected:(SCLagunaPairingSessionInfo *)arg1;
- (void)logPairingBackupConfirmed:(SCLagunaPairingSessionInfo *)arg1;
- (void)logPairingBackupDetected:(SCLagunaPairingSessionInfo *)arg1;
- (void)logPairingBackupStart:(SCLagunaPairingSessionInfo *)arg1 failureReason:(unsigned long long)arg2;
- (void)logPairingSnapcodeRecognized:(SCLagunaPairingSessionInfo *)arg1;
- (void)logPairingBleDetected:(SCLagunaPairingSessionInfo *)arg1;
- (void)logPairingStarted:(SCLagunaPairingSessionInfo *)arg1;
- (void)logFirmwareUpdateScheduledWithDeviceID:(NSString *)arg1 updateSessionID:(NSString *)arg2 previousFirmwareVersion:(SCLagunaFirmwareVersion *)arg3 newFirmwareVersion:(SCLagunaFirmwareVersion *)arg4;
- (void)logFirmwareUpdateFailureWithDeviceID:(NSString *)arg1 updateSessionID:(NSString *)arg2 firmwareVersion:(SCLagunaFirmwareVersion *)arg3 failureReason:(NSString *)arg4 updateIsActive:(_Bool)arg5;
- (void)logFirmwareUpdateSuccessWithDeviceID:(NSString *)arg1 updateSessionID:(NSString *)arg2 newFirmwareVersion:(SCLagunaFirmwareVersion *)arg3 downloadDurationInMs:(long long)arg4 transferDurationInMs:(long long)arg5 updateDurationInMs:(long long)arg6 updateIsActive:(_Bool)arg7;
- (void)logFirmwareUpdateFailed:(SCLagunaFirmwareUpdateUserInfo *)arg1 reason:(unsigned long long)arg2;
- (void)logFirmwareUpdateSucceeded:(SCLagunaFirmwareUpdateUserInfo *)arg1;
- (void)logFirmwareUpdateFlashStarted:(SCLagunaFirmwareUpdateUserInfo *)arg1;
- (void)logFirmwareUpdateScheduled:(SCLagunaFirmwareUpdateUserInfo *)arg1;
- (void)logFirmwareUpdatePatchApplyFinished:(SCLagunaFirmwareUpdateUserInfo *)arg1;
- (void)logFirmwareUpdatePatchApplyStarted:(SCLagunaFirmwareUpdateUserInfo *)arg1;
- (void)logFirmwareUpdatePatchTransferFinished:(SCLagunaFirmwareUpdateUserInfo *)arg1;
- (void)logFirmwareUpdatePatchTransferStarted:(SCLagunaFirmwareUpdateUserInfo *)arg1;
- (void)logFirmwareUpdatePatchDownloadFinished:(SCLagunaFirmwareUpdateUserInfo *)arg1;
- (void)logFirmwareUpdatePatchDownloadStarted:(SCLagunaFirmwareUpdateUserInfo *)arg1;
- (void)logFirmwareUpdateBinaryRevertFinished:(SCLagunaFirmwareUpdateUserInfo *)arg1;
- (void)logFirmwareUpdateBinaryRevertStarted:(SCLagunaFirmwareUpdateUserInfo *)arg1;
- (void)logFirmwareUpdateStarted:(SCLagunaFirmwareUpdateUserInfo *)arg1;
- (void)logFirmwareUpdatePromptDismissed:(SCLagunaDevice *)arg1 promptAccepted:(_Bool)arg2;
- (void)logFirmwareUpdatePromptShown:(SCLagunaDevice *)arg1;
- (void)logFirmwareUpdateSeen:(SCLagunaDevice *)arg1;
- (void)logFirmwareUpdateChecked:(SCLagunaDevice *)arg1;
- (void)logNotificationExpanded:(SCAppNotification *)arg1;
- (void)logNotificationOpened:(SCAppNotification *)arg1 inApp:(_Bool)arg2;
- (void)logNotificationDisplayed:(SCAppNotification *)arg1 withSystem:(_Bool)arg2;
- (void)logDeleteContent:(NSString *)arg1;
- (void)logButtonPress:(long long)arg1;
- (void)logLagunaHdFlowFinished;
- (void)logLagunaHdFlowCancelled:(SCLagunaGetHdSessionInfo *)arg1 fromSource:(unsigned long long)arg2;
- (void)logLagunaHdFlowStarted:(SCLagunaGetHdSessionInfo *)arg1 fromSource:(unsigned long long)arg2;
- (void)logLagunaHdWifiPopupButtonPressedWithAction:(unsigned long long)arg1;
- (void)logLagunaHdWifiPopupDisplayedWithActionDisplayed:(unsigned long long)arg1;
- (void)logLagunaHdStartingWifi;
- (void)logHdFlowStartedWithBatchId:(NSUUID *)arg1;
- (void)logLagunaGetHdButtonPressed:(SCLagunaGetHdSessionInfo *)arg1 fromSource:(unsigned long long)arg2;
- (void)logUserEnterSettingsWithDeviceId:(NSString *)arg1;
- (void)logRestartDeviceWithDeviceId:(NSString *)arg1;
- (void)logClearContentWithDeviceId:(NSString *)arg1;
- (void)logForgetDeviceWithDeviceId:(NSString *)arg1;
- (void)logDeviceConnectionWithDeviceId:(NSString *)arg1;
- (void)logRenameDeviceWithDeviceId:(NSString *)arg1 oldName:(NSString *)arg2 newName:(NSString *)arg3;
- (void)logUserVisitedCommerceWebsiteWithNumDevices:(long long)arg1 deviceState:(long long)arg2;
- (void)logSettingsUserPressedCheckUpdate:(SCLagunaDevice *)arg1;
- (void)logSettingsUserPressedRestartDevice:(SCLagunaDevice *)arg1;
- (void)logSettingsUserPressedForgetDevice:(SCLagunaDevice *)arg1;
- (void)logSettingsUserPressedClearContent:(SCLagunaDevice *)arg1;
- (void)logSettingsUserRenamedDeviceCancel:(SCLagunaDevice *)arg1;
- (void)logSettingsUserRenamedDeviceSuccess:(SCLagunaDevice *)arg1;
- (void)logSettingsUserRenamedDeviceOpen:(SCLagunaDevice *)arg1;
- (void)logSettingsUserPressedManageDevice:(SCLagunaDevice *)arg1;
- (void)logSettingsUserAddedSpectacles;
- (void)logSettingsUserVisitedGettingStartedPage;
- (void)logSettingsUserVisitedNeedHelpPage;
- (void)logUserExitSettingsPageWithNumDevices:(long long)arg1 deviceState:(long long)arg2;
- (void)logUserEnterSettingsPageWithNumDevices:(long long)arg1 deviceState:(long long)arg2;
- (void)logOnboardingExit:(SCLagunaOnboardingSessionInfo *)arg1 exitSource:(unsigned long long)arg2;
- (void)logOnboardingPageChange:(SCLagunaOnboardingSessionInfo *)arg1;
- (void)logOnboardingStart:(SCLagunaOnboardingSessionInfo *)arg1;
- (void)logDeviceStatusUpdate:(SCLagunaDevice *)arg1 videoCount:(long long)arg2;
- (void)logDeviceInfoUpdated:(SCLagunaDevice *)arg1;
@end

