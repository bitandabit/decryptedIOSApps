//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCR2GeoLocation, SCR2GeoPolygon;

@interface SCR2ContextInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *city; // @dynamic city;
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(nonatomic) _Bool hasPlacePolygon; // @dynamic hasPlacePolygon;
@property(retain, nonatomic) SCR2GeoLocation *location; // @dynamic location;
@property(retain, nonatomic) SCR2GeoPolygon *placePolygon; // @dynamic placePolygon;
@property(copy, nonatomic) NSString *placeType; // @dynamic placeType;

@end
