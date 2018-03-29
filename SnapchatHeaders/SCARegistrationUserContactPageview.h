//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@interface SCARegistrationUserContactPageview : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    long long registrationVersion;
    long long verificationType;
}

- (id)asDictionary;
- (long long)getVerificationType;
- (void)setVerificationType:(long long)arg1;
- (long long)getRegistrationVersion;
- (void)setRegistrationVersion:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
