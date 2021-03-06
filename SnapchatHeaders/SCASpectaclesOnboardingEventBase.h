//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCASpectaclesOnboardingEventBase : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *durationSec;
    long long onboardingSource;
    long long onboardingPage;
    NSString *pairingSessionId;
    NSString *deviceId;
    NSString *firmwareVersion;
    NSString *hardwareVersion;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getHardwareVersion;
- (void)setHardwareVersion:(id)arg1;
- (id)getFirmwareVersion;
- (void)setFirmwareVersion:(id)arg1;
- (id)getDeviceId;
- (void)setDeviceId:(id)arg1;
- (id)getPairingSessionId;
- (void)setPairingSessionId:(id)arg1;
- (long long)getOnboardingPage;
- (void)setOnboardingPage:(long long)arg1;
- (long long)getOnboardingSource;
- (void)setOnboardingSource:(long long)arg1;
- (double)getDurationSec;
- (void)setDurationSec:(double)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

