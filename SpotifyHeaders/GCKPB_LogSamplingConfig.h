//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GCKPB_PBGeneratedMessage.h"

@class GCKPB_LogSamplingConfig_KeepRatio;

@interface GCKPB_LogSamplingConfig : GCKPB_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int by; // @dynamic by;
@property(nonatomic) _Bool hasBy; // @dynamic hasBy;
@property(nonatomic) _Bool hasKeepRatio; // @dynamic hasKeepRatio;
@property(nonatomic) _Bool hasKeepRatioMod; // @dynamic hasKeepRatioMod;
@property(nonatomic) float keepRatio; // @dynamic keepRatio;
@property(retain, nonatomic) GCKPB_LogSamplingConfig_KeepRatio *keepRatioMod; // @dynamic keepRatioMod;

@end
