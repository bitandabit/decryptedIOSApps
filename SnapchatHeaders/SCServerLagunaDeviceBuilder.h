//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SCServerLagunaDeviceBuilder : NSObject
{
    NSString *_serialNumber;
    NSString *_displayName;
    long long _color;
    long long _firstPairedTimestamp;
    long long _lastPairedStatusUpdatedTimestamp;
    long long _lastNameUpdatedTimestamp;
    long long _deviceNumber;
    NSString *_firmwareVersion;
    NSString *_hardwareVersion;
}

+ (id)withServerLagunaDevice:(id)arg1;
- (void).cxx_destruct;
- (id)setHardwareVersion:(id)arg1;
- (id)setFirmwareVersion:(id)arg1;
- (id)setDeviceNumber:(long long)arg1;
- (id)setLastNameUpdatedTimestamp:(long long)arg1;
- (id)setLastPairedStatusUpdatedTimestamp:(long long)arg1;
- (id)setFirstPairedTimestamp:(long long)arg1;
- (id)setColor:(long long)arg1;
- (id)setDisplayName:(id)arg1;
- (id)setSerialNumber:(id)arg1;
- (id)build;

@end
