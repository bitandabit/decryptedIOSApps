//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, SCMT1Sticker, SCMTActionSticker, SCMTMotionData;

@interface SCMTPrivacySensitiveLocationData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCMTActionSticker *actionSticker; // @dynamic actionSticker;
@property(retain, nonatomic) NSMutableArray *actionTypeArray; // @dynamic actionTypeArray;
@property(readonly, nonatomic) unsigned long long actionTypeArray_Count; // @dynamic actionTypeArray_Count;
@property(nonatomic) float altitude; // @dynamic altitude;
@property(nonatomic) _Bool backgroundUpdate; // @dynamic backgroundUpdate;
@property(retain, nonatomic) NSMutableArray *bleBeaconIdArray; // @dynamic bleBeaconIdArray;
@property(readonly, nonatomic) unsigned long long bleBeaconIdArray_Count; // @dynamic bleBeaconIdArray_Count;
@property(nonatomic) _Bool hasActionSticker; // @dynamic hasActionSticker;
@property(nonatomic) _Bool hasMotionData; // @dynamic hasMotionData;
@property(nonatomic) _Bool hasTypeSticker; // @dynamic hasTypeSticker;
@property(nonatomic) float horizontalAccuracy; // @dynamic horizontalAccuracy;
@property(nonatomic) float kalmanLat; // @dynamic kalmanLat;
@property(nonatomic) float kalmanLng; // @dynamic kalmanLng;
@property(copy, nonatomic) NSData *kalmanState; // @dynamic kalmanState;
@property(nonatomic) long long kalmanTimestamp; // @dynamic kalmanTimestamp;
@property(nonatomic) long long lastForegroundUpdateTimestamp; // @dynamic lastForegroundUpdateTimestamp;
@property(nonatomic) float lat; // @dynamic lat;
@property(nonatomic) float lng; // @dynamic lng;
@property(retain, nonatomic) NSMutableArray *localityArray; // @dynamic localityArray;
@property(readonly, nonatomic) unsigned long long localityArray_Count; // @dynamic localityArray_Count;
@property(retain, nonatomic) NSMutableArray *locationUpdateArray; // @dynamic locationUpdateArray;
@property(readonly, nonatomic) unsigned long long locationUpdateArray_Count; // @dynamic locationUpdateArray_Count;
@property(retain, nonatomic) SCMTMotionData *motionData; // @dynamic motionData;
@property(retain, nonatomic) SCMT1Sticker *typeSticker; // @dynamic typeSticker;
@property(nonatomic) float verticalAccuracy; // @dynamic verticalAccuracy;

@end

