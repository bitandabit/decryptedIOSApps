//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "SCHasLocation-Protocol.h"

@class NSMutableArray, NSString, SCMT1Action, SCMT1Sticker, SCMTActionSticker;

@interface SCMTFriendLocation : GPBMessage <SCHasLocation>
{
}

+ (id)descriptor;
- (id)person;
- (id)location;
- (id)friend;
- (id)date;
- (struct CLLocationCoordinate2D)coordinate;
- (_Bool)isCurrentUser;

// Remaining properties
@property(retain, nonatomic) SCMT1Action *action; // @dynamic action;
@property(retain, nonatomic) SCMTActionSticker *actionSticker; // @dynamic actionSticker;
@property(copy, nonatomic) NSString *actionStickerId; // @dynamic actionStickerId;
@property(retain, nonatomic) NSMutableArray *actionTypeArray; // @dynamic actionTypeArray;
@property(readonly, nonatomic) unsigned long long actionTypeArray_Count; // @dynamic actionTypeArray_Count;
@property(copy, nonatomic) NSString *clusterableFacingLeftStickerId; // @dynamic clusterableFacingLeftStickerId;
@property(copy, nonatomic) NSString *clusterableFacingRightStickerId; // @dynamic clusterableFacingRightStickerId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasAction; // @dynamic hasAction;
@property(nonatomic) _Bool hasActionSticker; // @dynamic hasActionSticker;
@property(nonatomic) _Bool hasTypeSticker; // @dynamic hasTypeSticker;
@property(readonly) unsigned long long hash;
@property(nonatomic) float horizontalAccuracyMeters; // @dynamic horizontalAccuracyMeters;
@property(nonatomic) float lat; // @dynamic lat;
@property(nonatomic) float lng; // @dynamic lng;
@property(copy, nonatomic) NSString *locality; // @dynamic locality;
@property(copy, nonatomic) NSString *nonClusterableStickerId; // @dynamic nonClusterableStickerId;
@property(nonatomic) _Bool nonClusterableStickerIdSupportsShadow; // @dynamic nonClusterableStickerIdSupportsShadow;
@property(nonatomic) long long s2CellId; // @dynamic s2CellId;
@property(nonatomic) int sharingMode; // @dynamic sharingMode;
@property(readonly) Class superclass;
@property(nonatomic) long long timestamp; // @dynamic timestamp;
@property(nonatomic) _Bool tombstone; // @dynamic tombstone;
@property(retain, nonatomic) SCMT1Sticker *typeSticker; // @dynamic typeSticker;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

