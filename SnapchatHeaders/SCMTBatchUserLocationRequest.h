//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCMTDeviceData, SCMTKalmanData;

@interface SCMTBatchUserLocationRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long birthday; // @dynamic birthday;
@property(retain, nonatomic) NSMutableArray *bleBeaconIdArray; // @dynamic bleBeaconIdArray;
@property(readonly, nonatomic) unsigned long long bleBeaconIdArray_Count; // @dynamic bleBeaconIdArray_Count;
@property(retain, nonatomic) SCMTDeviceData *deviceData; // @dynamic deviceData;
@property(nonatomic) _Bool ghostMode; // @dynamic ghostMode;
@property(nonatomic) _Bool hasBirthday; // @dynamic hasBirthday;
@property(nonatomic) _Bool hasDeviceData; // @dynamic hasDeviceData;
@property(nonatomic) _Bool hasLocationKalmanData; // @dynamic hasLocationKalmanData;
@property(nonatomic) _Bool isBirthday; // @dynamic isBirthday;
@property(nonatomic) _Bool isEmployee; // @dynamic isEmployee;
@property(retain, nonatomic) SCMTKalmanData *locationKalmanData; // @dynamic locationKalmanData;
@property(retain, nonatomic) NSMutableArray *locationUpdateArray; // @dynamic locationUpdateArray;
@property(readonly, nonatomic) unsigned long long locationUpdateArray_Count; // @dynamic locationUpdateArray_Count;
@property(nonatomic) long long sequenceNumber; // @dynamic sequenceNumber;
@property(copy, nonatomic) NSString *username; // @dynamic username;

@end

