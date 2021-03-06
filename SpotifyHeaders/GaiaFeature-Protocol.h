//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTGaiaVolumeController, UIButton;

@protocol GaiaFeature <NSObject>
@property(readonly, nonatomic) id <SPTGaiaIconBarFlagsProvider> iconBarFlagsProvider;
@property(nonatomic) _Bool airplayHidden;
- (id <SPTGaiaDevicesAvailableViewProvider>)provideDevicesAvailableViewProvider;
- (id <SPTGaiaOnboardingManager>)provideGaiaOnboardingManager;
- (id <SPTGaiaManager>)provideGaiaManager;
- (SPTGaiaVolumeController *)provideGaiaVolumeController;
- (id <SPTGaiaLockScreenControlsStateProvider>)provideLockScreenControlsStateProvider;
- (id <SPTGaiaDeviceStateManager>)provideGaiaDeviceStateManager;
- (UIButton *)provideGaiaBarButton;
- (UIButton *)provideGaiaButton;
@end

