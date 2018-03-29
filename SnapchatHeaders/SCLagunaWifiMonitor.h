//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCLagunaResponseMonitor-Protocol.h"
#import "SCLagunaWifiSsidEventListener-Protocol.h"
#import "SCNetworkConnectivityListener-Protocol.h"

@class NSString, SCLagunaRequestMessage, SCLagunaWifiSsidScanner, SCNetworkConnectivityAnnouncer, SCWeakTimer;
@protocol SCLagunaWifiMonitorDelegate, SCPerforming;

@interface SCLagunaWifiMonitor : NSObject <SCLagunaWifiSsidEventListener, SCNetworkConnectivityListener, SCLagunaResponseMonitor>
{
    _Bool _areSpectaclesConnectingToWiFi;
    id <SCPerforming> _performer;
    id <SCLagunaWifiMonitorDelegate> _delegate;
    NSString *_ssid;
    NSString *_ssidPassword;
    NSString *_ipAddress;
    SCLagunaWifiSsidScanner *_ssidScanner;
    SCNetworkConnectivityAnnouncer *_reachability;
    SCWeakTimer *_wifiStateTimer;
    SCLagunaRequestMessage *_outstandingWifiStartRequest;
    long long _state;
}

@property(nonatomic) _Bool areSpectaclesConnectingToWiFi; // @synthesize areSpectaclesConnectingToWiFi=_areSpectaclesConnectingToWiFi;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) SCLagunaRequestMessage *outstandingWifiStartRequest; // @synthesize outstandingWifiStartRequest=_outstandingWifiStartRequest;
@property(retain, nonatomic) SCWeakTimer *wifiStateTimer; // @synthesize wifiStateTimer=_wifiStateTimer;
@property(retain, nonatomic) SCNetworkConnectivityAnnouncer *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) SCLagunaWifiSsidScanner *ssidScanner; // @synthesize ssidScanner=_ssidScanner;
@property(copy, nonatomic) NSString *ipAddress; // @synthesize ipAddress=_ipAddress;
@property(copy, nonatomic) NSString *ssidPassword; // @synthesize ssidPassword=_ssidPassword;
@property(copy, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
@property(nonatomic) __weak id <SCLagunaWifiMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
- (void).cxx_destruct;
- (void)networkConnectivityStatusDidChange:(long long)arg1;
- (void)wifiScannerDidUpdateWifiSsid:(id)arg1;
- (long long)responseMonitorState;
- (void)handleResponse:(id)arg1;
- (void)_transitionToState:(long long)arg1;
- (void)_reset;
- (void)_sendStopWiFiRequest;
- (void)_sendConnectWiFiRequest;
- (void)_sendStartWiFiRequest;
- (_Bool)wifiBooted;
- (void)reset;
- (void)cancelWifiConnection;
- (void)bootAndConnectWifiWithSsid:(id)arg1 ssidPassword:(id)arg2;
- (void)connectToWifiWithSsid:(id)arg1 password:(id)arg2;
- (id)initWithPerformer:(id)arg1 ssidScanner:(id)arg2 connectivityAnnouncer:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

