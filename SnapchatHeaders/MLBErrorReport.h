//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class MLBTemperatureResponse;

@interface MLBErrorReport : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int errorType; // @dynamic errorType;
@property(nonatomic) _Bool hasErrorType; // @dynamic hasErrorType;
@property(nonatomic) _Bool hasSoc; // @dynamic hasSoc;
@property(nonatomic) _Bool hasStorage; // @dynamic hasStorage;
@property(nonatomic) _Bool hasTemperatures; // @dynamic hasTemperatures;
@property(nonatomic) _Bool hasVoltage; // @dynamic hasVoltage;
@property(nonatomic) unsigned int soc; // @dynamic soc;
@property(nonatomic) unsigned int storage; // @dynamic storage;
@property(retain, nonatomic) MLBTemperatureResponse *temperatures; // @dynamic temperatures;
@property(nonatomic) unsigned int voltage; // @dynamic voltage;

@end

