//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt64ObjectDictionary, NSString;

@interface ModeratorReport : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long endTimeEpoch; // @dynamic endTimeEpoch;
@property(copy, nonatomic) NSString *entity; // @dynamic entity;
@property(retain, nonatomic) GPBInt64ObjectDictionary *statsPerPeriod; // @dynamic statsPerPeriod;
@property(readonly, nonatomic) unsigned long long statsPerPeriod_Count; // @dynamic statsPerPeriod_Count;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

