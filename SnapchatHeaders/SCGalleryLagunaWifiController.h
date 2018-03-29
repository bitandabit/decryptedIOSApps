//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCLagunaEventListener-Protocol.h"

@class NSArray, NSString, SCBaseAlertView, SCGalleryLagunaWifiControllerEventListenerAnnouncer, SCGalleryWifiWarmingUpOverlay, SCLagunaDevice, SCLagunaManager;
@protocol SCLagunaAppLogger;

@interface SCGalleryLagunaWifiController : NSObject <SCLagunaEventListener>
{
    _Bool _wasAWDLEnabled;
    _Bool _hasTriedToConnectWifi;
    _Bool _hasConnectedWifi;
    long long _state;
    SCLagunaManager *_lagunaManager;
    id <SCLagunaAppLogger> _analyticsLogger;
    SCGalleryLagunaWifiControllerEventListenerAnnouncer *_announcer;
    SCGalleryWifiWarmingUpOverlay *_warmingView;
    SCBaseAlertView *_wifiPopup;
    CDUnknownBlockType _backgroundCancelBlock;
    SCLagunaDevice *_device;
    NSString *_ssidPassword;
    NSArray *_hdContentUUIDs;
    unsigned long long _getHdStartSource;
}

+ (id)_wifiSettingsUrlString;
+ (id)_generateSsidPassword;
@property(nonatomic) unsigned long long getHdStartSource; // @synthesize getHdStartSource=_getHdStartSource;
@property(retain, nonatomic) NSArray *hdContentUUIDs; // @synthesize hdContentUUIDs=_hdContentUUIDs;
@property(copy, nonatomic) NSString *ssidPassword; // @synthesize ssidPassword=_ssidPassword;
@property(retain, nonatomic) SCLagunaDevice *device; // @synthesize device=_device;
@property(copy, nonatomic) CDUnknownBlockType backgroundCancelBlock; // @synthesize backgroundCancelBlock=_backgroundCancelBlock;
@property(nonatomic) _Bool hasConnectedWifi; // @synthesize hasConnectedWifi=_hasConnectedWifi;
@property(nonatomic) _Bool hasTriedToConnectWifi; // @synthesize hasTriedToConnectWifi=_hasTriedToConnectWifi;
@property(nonatomic) _Bool wasAWDLEnabled; // @synthesize wasAWDLEnabled=_wasAWDLEnabled;
@property(nonatomic) __weak SCBaseAlertView *wifiPopup; // @synthesize wifiPopup=_wifiPopup;
@property(nonatomic) __weak SCGalleryWifiWarmingUpOverlay *warmingView; // @synthesize warmingView=_warmingView;
@property(retain, nonatomic) SCGalleryLagunaWifiControllerEventListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
@property(nonatomic) __weak id <SCLagunaAppLogger> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(nonatomic) __weak SCLagunaManager *lagunaManager; // @synthesize lagunaManager=_lagunaManager;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)lagunaOnDeviceStateUpdate:(id)arg1;
- (void)lagunaOnTransferUpdate:(id)arg1 updateType:(unsigned long long)arg2;
- (void)lagunaOnDeviceInfoUpdate:(id)arg1 updateType:(unsigned long long)arg2;
- (void)_stopCancelTimer;
- (void)_resetCancelTimer;
- (void)_handleAppBackground:(id)arg1;
- (void)_handleAppForeground:(id)arg1;
- (void)_displayFailurePopup;
- (void)_displayRetryPopup;
- (void)_dismissWifiPopup;
- (void)_displayWifiPopup;
- (void)_promptToJoinSpectaclesWifi;
- (void)_dismissWarmingView;
- (void)_displayWifiWarming;
- (void)dismissWifiView;
- (void)_transitionToState:(long long)arg1;
- (id)_getHdSessionAnalyticsInfo;
- (void)_appendHdContentUUIDs:(id)arg1;
- (void)_startWifiConnection;
- (void)cancelWifiConnection;
- (void)startWifiFlowForDevice:(id)arg1 hdContentUUIDs:(id)arg2 getHdStartSource:(unsigned long long)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)dealloc;
- (id)initWithLagunaManager:(id)arg1 analyticsLogger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
