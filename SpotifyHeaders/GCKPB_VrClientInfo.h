//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GCKPB_PBGeneratedMessage.h"

@class NSString;

@interface GCKPB_VrClientInfo : GCKPB_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSString *country; // @dynamic country;
@property(retain, nonatomic) NSString *fingerprint; // @dynamic fingerprint;
@property(retain, nonatomic) NSString *gvrVersion; // @dynamic gvrVersion;
@property(nonatomic) _Bool hasCountry; // @dynamic hasCountry;
@property(nonatomic) _Bool hasFingerprint; // @dynamic hasFingerprint;
@property(nonatomic) _Bool hasGvrVersion; // @dynamic hasGvrVersion;
@property(nonatomic) _Bool hasLanguage; // @dynamic hasLanguage;
@property(nonatomic) _Bool hasManufacturer; // @dynamic hasManufacturer;
@property(nonatomic) _Bool hasModel; // @dynamic hasModel;
@property(nonatomic) _Bool hasSdkVersion; // @dynamic hasSdkVersion;
@property(nonatomic) _Bool hasVrClientType; // @dynamic hasVrClientType;
@property(retain, nonatomic) NSString *language; // @dynamic language;
@property(retain, nonatomic) NSString *manufacturer; // @dynamic manufacturer;
@property(retain, nonatomic) NSString *model; // @dynamic model;
@property(retain, nonatomic) NSString *sdkVersion; // @dynamic sdkVersion;
@property(nonatomic) int vrClientType; // @dynamic vrClientType;

@end
