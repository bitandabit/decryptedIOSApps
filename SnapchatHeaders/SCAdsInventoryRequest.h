//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Value, NSString;

@interface SCAdsInventoryRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *debugAdId; // @dynamic debugAdId;
@property(nonatomic) _Bool hasPositionId; // @dynamic hasPositionId;
@property(copy, nonatomic) NSString *inventoryId; // @dynamic inventoryId;
@property(nonatomic) int inventoryType; // @dynamic inventoryType;
@property(nonatomic) int numAdsRequested; // @dynamic numAdsRequested;
@property(retain, nonatomic) GPBInt32Value *positionId; // @dynamic positionId;

@end

