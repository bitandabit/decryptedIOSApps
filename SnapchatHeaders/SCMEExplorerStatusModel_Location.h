//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCLocalizedStringSet;

@interface SCMEExplorerStatusModel_Location : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCLocalizedStringSet *event; // @dynamic event;
@property(nonatomic) _Bool hasEvent; // @dynamic hasEvent;
@property(nonatomic) _Bool hasPlace; // @dynamic hasPlace;
@property(nonatomic) double lat; // @dynamic lat;
@property(nonatomic) double lng; // @dynamic lng;
@property(retain, nonatomic) NSMutableArray *localityArray; // @dynamic localityArray;
@property(readonly, nonatomic) unsigned long long localityArray_Count; // @dynamic localityArray_Count;
@property(retain, nonatomic) SCLocalizedStringSet *place; // @dynamic place;
@property(nonatomic) long long timestampMs; // @dynamic timestampMs;

@end

