//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GCKDeviceConfiguration, GCKDeviceManager, NSDictionary;

@protocol GCKDeviceManagerDelegateInternal <NSObject>

@optional
- (void)deviceManager:(GCKDeviceManager *)arg1 didReceiveDeviceConfiguration:(GCKDeviceConfiguration *)arg2;
- (void)deviceManagerDidUpdateStatus:(GCKDeviceManager *)arg1;
- (void)deviceManager:(GCKDeviceManager *)arg1 didReceiveAppAvailability:(NSDictionary *)arg2;
@end

