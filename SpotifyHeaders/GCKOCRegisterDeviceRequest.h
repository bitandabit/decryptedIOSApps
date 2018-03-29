//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GCKPB_PBGeneratedMessage.h"

@class GCKOCEnvironmentScan, NSData, NSString;

@interface GCKOCRegisterDeviceRequest : GCKPB_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSString *deviceId; // @dynamic deviceId;
@property(retain, nonatomic) GCKOCEnvironmentScan *environmentScan; // @dynamic environmentScan;
@property(retain, nonatomic) NSString *gcmId; // @dynamic gcmId;
@property(nonatomic) _Bool hasDeviceId; // @dynamic hasDeviceId;
@property(nonatomic) _Bool hasEnvironmentScan; // @dynamic hasEnvironmentScan;
@property(nonatomic) _Bool hasGcmId; // @dynamic hasGcmId;
@property(nonatomic) _Bool hasTlsServerPkHash; // @dynamic hasTlsServerPkHash;
@property(retain, nonatomic) NSData *tlsServerPkHash; // @dynamic tlsServerPkHash;

@end

