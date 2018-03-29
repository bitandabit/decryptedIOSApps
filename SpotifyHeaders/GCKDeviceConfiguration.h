//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface GCKDeviceConfiguration : NSObject <NSCopying>
{
    _Bool _connected;
    NSString *_deviceID;
    NSString *_ipAddress;
    NSString *_friendlyName;
    NSString *_buildVersion;
    NSString *_ssid;
    long long _signalLevel;
    long long _noiseLevel;
}

+ (id)paramsForRequest;
@property(readonly, nonatomic) _Bool connected; // @synthesize connected=_connected;
@property(readonly, nonatomic) long long noiseLevel; // @synthesize noiseLevel=_noiseLevel;
@property(readonly, nonatomic) long long signalLevel; // @synthesize signalLevel=_signalLevel;
@property(readonly, copy, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
@property(readonly, copy, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(readonly, copy, nonatomic) NSString *friendlyName; // @synthesize friendlyName=_friendlyName;
@property(readonly, copy, nonatomic) NSString *ipAddress; // @synthesize ipAddress=_ipAddress;
@property(readonly, copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDeviceID:(id)arg1 friendlyName:(id)arg2 buildVersion:(id)arg3 ipAddress:(id)arg4 connected:(_Bool)arg5 ssid:(id)arg6 signalLevel:(long long)arg7 noiseLevel:(long long)arg8;
- (id)initWithJSONObject:(id)arg1;

@end

