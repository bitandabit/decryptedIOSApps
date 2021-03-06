//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCLagunaDeviceEventListener-Protocol.h"

@class NSString, SCLagunaDeviceManager;

@interface SCLagunaWifiSyncMonitor : NSObject <SCLagunaDeviceEventListener>
{
    SCLagunaDeviceManager *_deviceManager;
}

@property(retain, nonatomic) SCLagunaDeviceManager *deviceManager; // @synthesize deviceManager=_deviceManager;
- (void).cxx_destruct;
- (void)_deviceDidCompleteSDTransfer:(id)arg1;
- (void)_maybeBeginWifiTransferForDevice:(id)arg1;
- (void)dealloc;
- (id)initWithLagunaDeviceManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

