//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@interface MLBI2cReadRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMemAddr; // @dynamic hasMemAddr;
@property(nonatomic) _Bool hasNBytes; // @dynamic hasNBytes;
@property(nonatomic) _Bool hasSlaveAddr; // @dynamic hasSlaveAddr;
@property(nonatomic) unsigned int memAddr; // @dynamic memAddr;
@property(nonatomic) unsigned int nBytes; // @dynamic nBytes;
@property(nonatomic) unsigned int slaveAddr; // @dynamic slaveAddr;

@end
