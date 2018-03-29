//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCASpectaclesDeviceInfoEventBase.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCASpectaclesWearStatus : SCASpectaclesDeviceInfoEventBase <MapSerializable, NSCopying>
{
    NSNumber *timeOfCapture;
    NSString *activityLog;
    NSString *alsLog;
    NSString *batteryLog;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getBatteryLog;
- (void)setBatteryLog:(id)arg1;
- (id)getAlsLog;
- (void)setAlsLog:(id)arg1;
- (id)getActivityLog;
- (void)setActivityLog:(id)arg1;
- (long long)getTimeOfCapture;
- (void)setTimeOfCapture:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

