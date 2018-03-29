//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCARegistrationUserInitialInfoSuccess : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *editBirthdayYear;
    NSNumber *editBirthdayMonth;
    NSNumber *editBirthdayDay;
    NSNumber *attemptCount;
    long long registrationVersion;
    NSString *preferredVerificationMethod;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getPreferredVerificationMethod;
- (void)setPreferredVerificationMethod:(id)arg1;
- (long long)getRegistrationVersion;
- (void)setRegistrationVersion:(long long)arg1;
- (long long)getAttemptCount;
- (void)setAttemptCount:(long long)arg1;
- (_Bool)getEditBirthdayDay;
- (void)setEditBirthdayDay:(_Bool)arg1;
- (_Bool)getEditBirthdayMonth;
- (void)setEditBirthdayMonth:(_Bool)arg1;
- (_Bool)getEditBirthdayYear;
- (void)setEditBirthdayYear:(_Bool)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
