//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GCKDeviceConfiguration, GCKDeviceSetupChannel, NSError;

@protocol GCKDeviceSetupChannelDelegate <NSObject>
- (void)deviceSetupChannel:(GCKDeviceSetupChannel *)arg1 didFailToReceiveDeviceConfigurationWithID:(long long)arg2 error:(NSError *)arg3;
- (void)deviceSetupChannel:(GCKDeviceSetupChannel *)arg1 didReceiveDeviceConfiguration:(GCKDeviceConfiguration *)arg2;
@end
