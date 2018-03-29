//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTScannablesLogger : NSObject
{
    id <SPTLogCenterProtocol> _logCenter;
}

@property(retain, nonatomic) id <SPTLogCenterProtocol> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logDidSelectPhotoFromPhotoLibrary;
- (void)logDidClosePhotoLibrary;
- (void)logDidOpenPhotoLibrary;
- (void)logDidAllowPhotoLibraryPermissions:(_Bool)arg1;
- (void)logDidTapPhotoLibraryButton;
- (void)logScanDidSucceedWithURL:(id)arg1 source:(id)arg2;
- (void)logDidTapPermissionsSettingsWithSource:(id)arg1;
- (void)logDidAllowCameraPermission:(_Bool)arg1;
- (void)logDidCompleteCameraOnboarding:(_Bool)arg1;
- (void)logDidTapCameraButtonWithPageURL:(id)arg1;
- (void)logDidDisplayCameraButtonWithPageIdentifier:(id)arg1;
- (void)logDidMoveToPageWithPageIdentifier:(id)arg1;
- (void)logDidTapSaveToCameraRollButtonWithEntityURL:(id)arg1;
- (void)logDidTapScannableWithEntityURL:(id)arg1;
- (void)logDidDisplayScannableWithEntityURL:(id)arg1;
- (id)initWithLogCenter:(id)arg1;

@end

