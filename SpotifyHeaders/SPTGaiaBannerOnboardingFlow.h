//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTGaiaOnboarding.h"

@class NSString, SPTGaiaDevice, SPTGaiaDeviceAppearanceMapping, SPTTheme;

@interface SPTGaiaBannerOnboardingFlow : NSObject <SPTGaiaOnboarding>
{
    id <SPTGaiaOnboardingDelegate> _delegate;
    SPTGaiaDevice *_onboardingDevice;
    id <SPTBannerPresentationManager> _bannerPresentationManager;
    SPTGaiaDeviceAppearanceMapping *_iconMapper;
    SPTTheme *_theme;
    id <SPTBannerPresentationManagerTicket> _queuedTicket;
}

@property(retain, nonatomic) id <SPTBannerPresentationManagerTicket> queuedTicket; // @synthesize queuedTicket=_queuedTicket;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTGaiaDeviceAppearanceMapping *iconMapper; // @synthesize iconMapper=_iconMapper;
@property(readonly, nonatomic) id <SPTBannerPresentationManager> bannerPresentationManager; // @synthesize bannerPresentationManager=_bannerPresentationManager;
@property(retain, nonatomic) SPTGaiaDevice *onboardingDevice; // @synthesize onboardingDevice=_onboardingDevice;
@property(nonatomic) __weak id <SPTGaiaOnboardingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)bannerItemForDevice:(id)arg1;
- (id)messageTitleForDevice:(id)arg1;
- (void)finishedOnboarding:(_Bool)arg1;
- (void)setOnboardingCompleted;
- (void)presentItemForContext:(long long)arg1 forDevice:(id)arg2 anchorView:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithBannerPresentationManager:(id)arg1 deviceIconMapper:(id)arg2 theme:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

