//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCMEExplorerNotifications, SCMEHallmarkLocations, SCMELocationAnalysis, SCMETravelAnalysis;

@interface SCMEExplorerUpdates : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCMEHallmarkLocations *hallmarkLocations; // @dynamic hallmarkLocations;
@property(nonatomic) _Bool hasHallmarkLocations; // @dynamic hasHallmarkLocations;
@property(nonatomic) _Bool hasLocationAnalysis; // @dynamic hasLocationAnalysis;
@property(nonatomic) _Bool hasNotifications; // @dynamic hasNotifications;
@property(nonatomic) _Bool hasTravelAnalysis; // @dynamic hasTravelAnalysis;
@property(nonatomic) _Bool isEmployee; // @dynamic isEmployee;
@property(retain, nonatomic) SCMELocationAnalysis *locationAnalysis; // @dynamic locationAnalysis;
@property(retain, nonatomic) SCMEExplorerNotifications *notifications; // @dynamic notifications;
@property(retain, nonatomic) SCMETravelAnalysis *travelAnalysis; // @dynamic travelAnalysis;
@property(retain, nonatomic) NSMutableArray *updatesArray; // @dynamic updatesArray;
@property(readonly, nonatomic) unsigned long long updatesArray_Count; // @dynamic updatesArray_Count;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

