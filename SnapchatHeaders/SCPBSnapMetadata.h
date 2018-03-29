//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCPBMultiSnapMetadata, SCPBSnapAttachment;

@interface SCPBSnapMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *animatedSnapType; // @dynamic animatedSnapType;
@property(nonatomic) _Bool cameraFrontFacing; // @dynamic cameraFrontFacing;
@property(copy, nonatomic) NSString *captionText; // @dynamic captionText;
@property(nonatomic) long long captureDate; // @dynamic captureDate;
@property(copy, nonatomic) NSString *checksum; // @dynamic checksum;
@property(copy, nonatomic) NSString *contextHint; // @dynamic contextHint;
@property(copy, nonatomic) NSString *countryCode; // @dynamic countryCode;
@property(copy, nonatomic) NSString *encGeoData; // @dynamic encGeoData;
@property(copy, nonatomic) NSString *filterId; // @dynamic filterId;
@property(nonatomic) _Bool hasMultiSnapMetadata; // @dynamic hasMultiSnapMetadata;
@property(nonatomic) _Bool hasSnapAttachment; // @dynamic hasSnapAttachment;
@property(nonatomic) _Bool isInfiniteDuration; // @dynamic isInfiniteDuration;
@property(nonatomic) _Bool isReply; // @dynamic isReply;
@property(copy, nonatomic) NSString *lensId; // @dynamic lensId;
@property(copy, nonatomic) NSString *lensMetadata; // @dynamic lensMetadata;
@property(retain, nonatomic) SCPBMultiSnapMetadata *multiSnapMetadata; // @dynamic multiSnapMetadata;
@property(copy, nonatomic) NSString *orientation; // @dynamic orientation;
@property(copy, nonatomic) NSString *sendSource; // @dynamic sendSource;
@property(retain, nonatomic) SCPBSnapAttachment *snapAttachment; // @dynamic snapAttachment;
@property(retain, nonatomic) NSMutableArray *snapAttachmentsArray; // @dynamic snapAttachmentsArray;
@property(readonly, nonatomic) unsigned long long snapAttachmentsArray_Count; // @dynamic snapAttachmentsArray_Count;
@property(copy, nonatomic) NSString *unlockablesSnapInfo; // @dynamic unlockablesSnapInfo;
@property(copy, nonatomic) NSString *venueId; // @dynamic venueId;

@end

